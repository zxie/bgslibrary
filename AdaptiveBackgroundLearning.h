#pragma once

#include <iostream>
#include <cv.h>
#include <highgui.h>

class AdaptiveBackgroundLearning
{
private:
  bool firstTime;
  cv::Mat img_background;
  double alpha;
  long limit;
  long counter;
  double minVal;
  double maxVal;
  bool enableThreshold;
  int threshold;
  bool showForeground;
  bool showBackground;

public:
  AdaptiveBackgroundLearning();
  ~AdaptiveBackgroundLearning();

  void process(const cv::Mat &img_input, cv::Mat &img_output);
  cv::Mat getBackgroundModel();

private:
  void saveConfig();
  void loadConfig();
};
