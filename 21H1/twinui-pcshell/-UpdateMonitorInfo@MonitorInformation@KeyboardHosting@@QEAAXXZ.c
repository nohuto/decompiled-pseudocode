/*
 * XREFs of ?UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ @ 0x180349ECC
 * Callers:
 *     ?HandleDisplayChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1800A4F10 (-HandleDisplayChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@Shell.c)
 *     ?HandleDpiChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1803471C0 (-HandleDpiChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@Shell@Int.c)
 *     ?HandleEditControlPositionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x180347290 (-HandleEditControlPositionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Win.c)
 *     ?HandleEditControlSelectionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x180347380 (-HandleEditControlSelectionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Wi.c)
 *     ?HandleFramePositionAndSizeUpdateCompleted@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIURect@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x180347420 (-HandleFramePositionAndSizeUpdateCompleted@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIURect@Foun.c)
 *     ?HandleWorkAreaChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJAEBUtagRECT@@PEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180347900 (-HandleWorkAreaChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJAEBUtagRECT@@PEAW4ShellRequestT.c)
 *     ?InitializeMonitors@TabTipAdapterPolicy@KeyboardHosting@@AEAAJXZ @ 0x180347BDC (-InitializeMonitors@TabTipAdapterPolicy@KeyboardHosting@@AEAAJXZ.c)
 *     ?VerifyInputAppRequestedResize@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIUSize@Foundation@Windows@@URect@45@EPEAU645@PEAE@Z @ 0x1803492D0 (-VerifyInputAppRequestedResize@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIUSize@Foundation@Windo.c)
 *     ?SetMonitor@MonitorInformation@KeyboardHosting@@QEAAXPEAUHMONITOR__@@@Z @ 0x180349EBC (-SetMonitor@MonitorInformation@KeyboardHosting@@QEAAXPEAUHMONITOR__@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ?PhysicalRectToRelative@ScalingHelper@KeyboardHosting@@SA?AURect@Foundation@Windows@@AEBU345@W4DEVICE_SCALE_FACTOR@@@Z @ 0x18034857C (-PhysicalRectToRelative@ScalingHelper@KeyboardHosting@@SA-AURect@Foundation@Windows@@AEBU345@W4D.c)
 */

void __fastcall KeyboardHosting::MonitorInformation::UpdateMonitorInfo(KeyboardHosting::MonitorInformation *this)
{
  HMONITOR v2; // rcx
  int ScaleFactorForMonitor; // eax
  RECT rcMonitor; // xmm2
  int v5; // r8d
  int v6; // ecx
  __int64 v7; // rdx
  int v8; // eax
  float v9[4]; // [rsp+20h] [rbp-50h] BYREF
  float v10[4]; // [rsp+30h] [rbp-40h] BYREF
  struct tagMONITORINFO mi; // [rsp+40h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v2 = *(HMONITOR *)this;
  memset(&mi, 0, sizeof(mi));
  mi.cbSize = 40;
  if ( GetMonitorInfoW(v2, &mi) )
  {
    ScaleFactorForMonitor = GetScaleFactorForMonitor(*(_QWORD *)this, (char *)this + 40);
    if ( ScaleFactorForMonitor < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x21,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\monitorinformation.cpp",
        (const char *)(unsigned int)ScaleFactorForMonitor);
    rcMonitor = mi.rcMonitor;
    v5 = *((_DWORD *)this + 10);
    v6 = _mm_cvtsi128_si32((__m128i)mi.rcMonitor);
    v7 = HIDWORD(*(_QWORD *)&mi.rcMonitor.left);
    v8 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)mi.rcMonitor, 8));
    *(RECT *)((char *)this + 24) = mi.rcMonitor;
    v10[0] = (float)v6;
    v10[1] = (float)(int)v7;
    v10[2] = (float)(v8 - v6 + 1);
    v10[3] = (float)(_mm_srli_si128(*(__m128i *)&rcMonitor, 8).m128i_i32[1] - v7 + 1);
    *(__m128i *)((char *)this + 8) = _mm_loadu_si128((const __m128i *)KeyboardHosting::ScalingHelper::PhysicalRectToRelative(
                                                                        v9,
                                                                        v10,
                                                                        v5));
  }
}
