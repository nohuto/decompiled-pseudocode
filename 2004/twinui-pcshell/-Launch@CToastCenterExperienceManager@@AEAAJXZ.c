/*
 * XREFs of ?Launch@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801C2CEC
 * Callers:
 *     ?OnCriticalNotification@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801C3B0C (-OnCriticalNotification@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnNewNotification@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801C4488 (-OnNewNotification@CToastCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??0?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18001CBE0 (--0-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180021218 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x180052AFC (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x180081F28 (-Launch@CSingleViewShellExperience@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1801415C4 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??1EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x1801C1B74 (--1EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ?LaunchedApplication@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x1801C2F14 (-LaunchedApplication@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry.c)
 *     ?NoOp_ActionCenterVisible@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x1801C3178 (-NoOp_ActionCenterVisible@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITele.c)
 *     ?NoOp_DeviceLockdown@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x1801C3380 (-NoOp_DeviceLockdown@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry.c)
 *     ?NoOp_ShellNotReady@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x1801C3484 (-NoOp_ShellNotReady@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@.c)
 *     ?NoOp_ShutdownInProgress@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x1801C3588 (-NoOp_ShutdownInProgress@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelem.c)
 *     ?StartActivity@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x1801C7060 (-StartActivity@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA.c)
 *     ?TurnedScreenOn_SoundSentry@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x1801C9B00 (-TurnedScreenOn_SoundSentry@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITe.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CToastCenterExperienceManager::Launch(PTP_TIMER *pv)
{
  HWND WindowW; // rax
  PTP_TIMER *v3; // rdi
  struct _TP_TIMER *ThreadpoolTimer; // rax
  NTSTATUS v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp-D0h] BYREF
  int pvParam; // [rsp+38h] [rbp-C8h] BYREF
  char v11; // [rsp+3Ch] [rbp-C4h]
  _QWORD v12[40]; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+C8h]

  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v12,
    (__int64)"EM_LaunchActivity");
  v12[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity::StartActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity *)v12);
  WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
  if ( !*((_BYTE *)pv + 441) )
  {
    NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity::NoOp_ShellNotReady((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity *)v12);
LABEL_16:
    wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v12, 0);
    v6 = 0;
    goto LABEL_17;
  }
  if ( GetPropW(WindowW, L"IsExplorerShuttingDown") )
  {
    NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity::NoOp_ShutdownInProgress((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity *)v12);
    goto LABEL_16;
  }
  if ( *((_BYTE *)pv + 442) )
  {
    NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity::NoOp_ActionCenterVisible((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity *)v12);
    goto LABEL_16;
  }
  if ( *((_BYTE *)pv + 443) )
  {
    NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity::NoOp_DeviceLockdown((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity *)v12);
    goto LABEL_16;
  }
  v3 = pv + 82;
  ThreadpoolTimer = CreateThreadpoolTimer(
                      (PTP_TIMER_CALLBACK)lambda_c362b49deaa03ba654ce7cfa5e2e018d_::_lambda_invoker_cdecl_,
                      pv,
                      0LL);
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
    pv + 82,
    ThreadpoolTimer);
  pvParam = 56;
  if ( SystemParametersInfoW(0x40u, 0x38u, &pvParam, 0)
    && (v11 & 1) != 0
    && (NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity::TurnedScreenOn_SoundSentry((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity *)v12),
        v5 = NtPowerInformation(ProcessorStateHandler2|0x40, 0LL, 0, 0LL, 0),
        v5 < 0) )
  {
    v6 = wil::details::in1diag3::Return_NtStatus(
           retaddr,
           (void *)0x2D3,
           (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
           (const char *)(unsigned int)v5);
  }
  else
  {
    NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity::LaunchedApplication((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity *)v12);
    v7 = CSingleViewShellExperience::Launch((CSingleViewShellExperience *)(pv + 13));
    v6 = v7;
    if ( v7 >= 0 )
    {
      pftDueTime = (struct _FILETIME)-600000000LL;
      SetThreadpoolTimer(*v3, &pftDueTime, 0, 0);
      goto LABEL_16;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D8,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
  }
LABEL_17:
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity::~EM_LaunchActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity *)v12);
  return v6;
}
