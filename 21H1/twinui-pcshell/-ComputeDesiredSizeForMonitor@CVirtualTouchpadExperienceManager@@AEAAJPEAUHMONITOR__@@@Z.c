/*
 * XREFs of ?ComputeDesiredSizeForMonitor@CVirtualTouchpadExperienceManager@@AEAAJPEAUHMONITOR__@@@Z @ 0x1801BFF78
 * Callers:
 *     _lambda_98c1f1c5cf1ecd7152756a5091f202b2_::operator() @ 0x1801BF34C (_lambda_98c1f1c5cf1ecd7152756a5091f202b2_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180116F18 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?ComputeDesiredSize@CVirtualTouchpadExperienceManager@@AEAAJPEAUHMONITOR__@@PEBUtagRECT@@PEBW4DEVICE_SCALE_FACTOR@@@Z @ 0x1801BFD18 (-ComputeDesiredSize@CVirtualTouchpadExperienceManager@@AEAAJPEAUHMONITOR__@@PEBUtagRECT@@PEBW4DE.c)
 */

__int64 __fastcall CVirtualTouchpadExperienceManager::ComputeDesiredSizeForMonitor(
        CVirtualTouchpadExperienceManager *this,
        HMONITOR a2)
{
  const char *v4; // r9
  int ScaleFactorForMonitor; // ebx
  __int64 v7; // rdx
  enum DEVICE_SCALE_FACTOR v8; // [rsp+20h] [rbp-48h] BYREF
  struct tagMONITORINFO mi; // [rsp+28h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  mi.cbSize = 40;
  memset(&mi.rcMonitor, 0, 36);
  if ( !GetMonitorInfoW(a2, &mi) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x13A,
             (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
             v4);
  ScaleFactorForMonitor = GetScaleFactorForMonitor(a2, &v8);
  if ( ScaleFactorForMonitor < 0 )
  {
    v7 = 316LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)ScaleFactorForMonitor);
    return (unsigned int)ScaleFactorForMonitor;
  }
  ScaleFactorForMonitor = CVirtualTouchpadExperienceManager::ComputeDesiredSize(this, a2, &mi.rcMonitor, &v8);
  if ( ScaleFactorForMonitor < 0 )
  {
    v7 = 317LL;
    goto LABEL_5;
  }
  return 0LL;
}
