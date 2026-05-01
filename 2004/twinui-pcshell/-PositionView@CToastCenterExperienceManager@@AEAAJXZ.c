/*
 * XREFs of ?PositionView@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801C51C4
 * Callers:
 *     ?DisplaySettingsChange@CToastCenterExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1801C2680 (-DisplaySettingsChange@CToastCenterExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MO.c)
 *     ?HideInHolographic@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801C29D0 (-HideInHolographic@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnEventQueued@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801C3C80 (-OnEventQueued@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__.c)
 *     ?OnInputHostChanging@CToastCenterExperienceManager@@AEAAJW4IHM_DISPLAY_MODE@@@Z @ 0x1801C43C4 (-OnInputHostChanging@CToastCenterExperienceManager@@AEAAJW4IHM_DISPLAY_MODE@@@Z.c)
 * Callees:
 *     ??1EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x180018644 (--1EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ?StartActivity@EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x180018D48 (-StartActivity@EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry.c)
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x180018EDC (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x18001BD54 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z @ 0x18001BD94 (-GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z.c)
 *     ??0?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18001CBE0 (--0-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180021218 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?ShouldShowWithinWorkArea@CToastCenterExperienceManager@@AEAA_NXZ @ 0x180096210 (-ShouldShowWithinWorkArea@CToastCenterExperienceManager@@AEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18013B538 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CToastCenterExperienceManager::PositionView(IUnknown **this)
{
  int v2; // eax
  unsigned int LastError; // ebx
  __int64 v4; // rdx
  IUnknown *v5; // rcx
  struct IUnknownVtbl *lpVtbl; // rax
  int v7; // eax
  HMONITOR v9; // rsi
  const char *v10; // r9
  __int64 v11; // rdx
  HMONITOR v12; // rdx
  __int64 v13; // r8
  HWND WindowW; // rax
  HRESULT Service; // eax
  int PerMonitorDpi; // eax
  int v17; // ebx
  double v18; // xmm0_8
  int v19; // eax
  int v20; // eax
  LONG bottom; // ecx
  int v22; // eax
  int v23; // ebx
  LANGID ThreadUILanguage; // ax
  int v25; // eax
  POINT pt_8[2]; // [rsp+38h] [rbp-D0h] BYREF
  RECT rcMonitor; // [rsp+48h] [rbp-C0h] BYREF
  RECT rc_8; // [rsp+58h] [rbp-B0h] BYREF
  struct tagMONITORINFO mi_4; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v30[40]; // [rsp+98h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F0h] [rbp+E8h]

  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v30,
    (__int64)"EM_PositionViewActivity");
  v30[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity::StartActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity *)v30);
  if ( this[16] )
  {
    if ( !this[87] || *((_DWORD *)this + 176) != 1 )
    {
      pt_8[0] = 0LL;
      v9 = MonitorFromPoint(0LL, 1u);
      if ( v9 == (HMONITOR)-1LL )
      {
        v11 = 1213LL;
      }
      else
      {
        mi_4.cbSize = 40;
        memset(&mi_4.rcMonitor, 0, 36);
        if ( GetMonitorInfoW(v9, &mi_4) )
        {
          rcMonitor = mi_4.rcMonitor;
          if ( CToastCenterExperienceManager::ShouldShowWithinWorkArea((CToastCenterExperienceManager *)this) )
          {
            rcMonitor = mi_4.rcWork;
            WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
            if ( WindowW )
            {
              if ( GetPropW(WindowW, L"IsAutoHideEnabled") )
              {
                pt_8[0] = 0LL;
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)pt_8);
                Service = IUnknown_QueryService(
                            this[81],
                            (const GUID *const)&SID_EdgeUi,
                            &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e,
                            (void **)pt_8);
                if ( Service >= 0 )
                {
                  v25 = (*(__int64 (__fastcall **)(POINT *, RECT *))(**(_QWORD **)pt_8 + 152LL))(
                          *(POINT **)pt_8,
                          &rcMonitor);
                  LastError = v25;
                  if ( v25 < 0 )
                  {
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x4D3,
                      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
                      (const char *)(unsigned int)v25);
                    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)pt_8);
                    goto LABEL_9;
                  }
                }
                else
                {
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    (void *)0x4D1,
                    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
                    (const char *)(unsigned int)Service);
                }
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)pt_8);
              }
            }
          }
          PerMonitorDpi = ExperienceManagerUtils::GetPerMonitorDpi((ExperienceManagerUtils *)v9, v12, v13);
          v17 = PerMonitorDpi;
          v18 = *((double *)this + 54);
          if ( v18 > 0.0 )
          {
            v19 = MulDiv((int)v18, PerMonitorDpi, 96);
            rcMonitor.bottom -= v19;
          }
          rc_8 = 0LL;
          v20 = ((__int64 (__fastcall *)(IUnknown *, RECT *, POINT *))this[58]->lpVtbl[1].Release)(
                  this[58],
                  &rc_8,
                  pt_8);
          if ( v20 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x4E3,
              (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
              (const char *)(unsigned int)v20);
          if ( !IsRectEmpty(&rc_8) )
          {
            bottom = rcMonitor.bottom;
            if ( rcMonitor.bottom > rc_8.top )
            {
              if ( ((pt_8[0].x - 1) & 0xFFFFFFFD) == 0 )
                bottom = rc_8.top;
              rcMonitor.bottom = bottom;
            }
          }
          v22 = MulDiv((int)*((float *)this + 38), v17, 96);
          rcMonitor.top = rcMonitor.bottom - v22;
          v23 = MulDiv((int)*((float *)this + 37), v17, 96);
          ThreadUILanguage = GetThreadUILanguage();
          if ( (unsigned int)IsBiDiLocale(ThreadUILanguage) )
            rcMonitor.right = v23 + rcMonitor.left;
          else
            rcMonitor.left = rcMonitor.right - v23;
          v2 = CSingleViewShellExperience::SetPosition((CSingleViewShellExperience *)(this + 13), &rcMonitor);
          LastError = v2;
          if ( v2 < 0 )
          {
            v4 = 1273LL;
            goto LABEL_37;
          }
          goto LABEL_8;
        }
        v11 = 1216LL;
      }
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)v11,
                    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
                    v10);
      goto LABEL_9;
    }
    rcMonitor.left = 0;
    rcMonitor.top = 0;
    rcMonitor.right = MulDiv((int)*((float *)this + 37), 150, 100);
    rcMonitor.bottom = MulDiv((int)*((float *)this + 38), 150, 100);
    v2 = CSingleViewShellExperience::SetPosition((CSingleViewShellExperience *)(this + 13), &rcMonitor);
    LastError = v2;
    if ( v2 < 0 )
    {
      v4 = 1201LL;
LABEL_37:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v4,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v2);
      goto LABEL_9;
    }
    pt_8[0] = 0LL;
    *(float *)&pt_8[1].x = (float)(rcMonitor.right - rcMonitor.left);
    *(float *)&pt_8[1].y = (float)(rcMonitor.bottom - rcMonitor.top);
    v5 = this[87];
    lpVtbl = v5->lpVtbl;
    rc_8 = *(RECT *)&pt_8[0].x;
    v7 = ((__int64 (__fastcall *)(IUnknown *, IUnknown *, IUnknown *, RECT *))lpVtbl[2].Release)(
           v5,
           this[15],
           this[16],
           &rc_8);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4B5,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
  }
LABEL_8:
  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v30, 0);
  LastError = 0;
LABEL_9:
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity::~EM_PositionViewActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity *)v30);
  return LastError;
}
