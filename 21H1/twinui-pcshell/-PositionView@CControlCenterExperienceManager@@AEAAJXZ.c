/*
 * XREFs of ?PositionView@CControlCenterExperienceManager@@AEAAJXZ @ 0x180190FE8
 * Callers:
 *     ?DisplaySettingsChange@CControlCenterExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x18018FF00 (-DisplaySettingsChange@CControlCenterExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_.c)
 *     ?OnEventQueued@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180190260 (-OnEventQueued@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING.c)
 *     ?Show@CControlCenterExperienceManager@@AEAAJXZ @ 0x180191954 (-Show@CControlCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??1EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x1800181D4 (--1EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ?StartActivity@EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x1800188D8 (-StartActivity@EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry.c)
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x180018A6C (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x18001AB3C (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x18001B8E0 (-IsBiDiLocale@@YAHK@Z.c)
 *     ??0?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18001C76C (--0-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180020D2C (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180116F18 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CControlCenterExperienceManager::PositionView(CControlCenterExperienceManager *this)
{
  HMONITOR v2; // rdi
  const char *v3; // r9
  __int64 v4; // rdx
  HMONITOR v5; // r8
  unsigned int LastError; // ebx
  double v7; // xmm0_8
  int v8; // edi
  LANGID ThreadUILanguage; // ax
  int v10; // eax
  POINT pt[2]; // [rsp+20h] [rbp-E0h] BYREF
  struct tagMONITORINFO mi; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v14[40]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v14,
    (__int64)"EM_PositionViewActivity");
  v14[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity::StartActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity *)v14);
  if ( !*((_QWORD *)this + 16) )
    goto LABEL_18;
  pt[0] = 0LL;
  v2 = MonitorFromPoint(0LL, 1u);
  if ( v2 != (HMONITOR)-1LL )
  {
    mi.cbSize = 40;
    memset(&mi.rcMonitor, 0, 36);
    if ( !GetMonitorInfoW(v2, &mi) )
    {
      v4 = 675LL;
      goto LABEL_6;
    }
    *(RECT *)&pt[0].x = mi.rcMonitor;
    if ( *((_BYTE *)this + 408) )
      *(RECT *)&pt[0].x = mi.rcWork;
    v7 = *((double *)this + 60);
    if ( v7 > 0.0 )
      pt[1].y -= ExperienceManagerUtils::ScaleByPerMonitorDPI(
                   (ExperienceManagerUtils *)(unsigned int)(int)v7,
                   (__int64)v2,
                   v5);
    if ( *((_BYTE *)this + 409) )
      pt[0].y = pt[1].y
              - ExperienceManagerUtils::ScaleByPerMonitorDPI(
                  (ExperienceManagerUtils *)(unsigned int)(int)*((float *)this + 38),
                  (__int64)v2,
                  v5);
    v8 = (int)(float)ExperienceManagerUtils::ScaleByPerMonitorDPI(
                       (ExperienceManagerUtils *)(unsigned int)(int)*((float *)this + 37),
                       (__int64)v2,
                       v5);
    ThreadUILanguage = GetThreadUILanguage();
    if ( (unsigned int)IsBiDiLocale(ThreadUILanguage) )
      pt[1].x = v8 + pt[0].x;
    else
      pt[0].x = pt[1].x - v8;
    v10 = CSingleViewShellExperience::SetPosition(
            (CControlCenterExperienceManager *)((char *)this + 104),
            (const struct tagRECT *)pt);
    LastError = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2C7,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
      goto LABEL_19;
    }
LABEL_18:
    wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v14, 0);
    LastError = 0;
    goto LABEL_19;
  }
  v4 = 672LL;
LABEL_6:
  LastError = wil::details::in1diag3::Return_GetLastError(
                retaddr,
                (void *)v4,
                (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
                v3);
LABEL_19:
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity::~EM_PositionViewActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity *)v14);
  return LastError;
}
