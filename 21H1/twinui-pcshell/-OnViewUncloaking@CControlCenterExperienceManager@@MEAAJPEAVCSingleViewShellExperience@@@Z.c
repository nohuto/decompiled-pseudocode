/*
 * XREFs of ?OnViewUncloaking@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180190D10
 * Callers:
 *     <none>
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x18001B8E0 (-IsBiDiLocale@@YAHK@Z.c)
 *     ??0?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18001C76C (--0-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180020098 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180020D2C (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4DWMTRANSITION_TARGET@@@Z @ 0x180050FDC (-Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ??1EM_ViewUncloakingActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x1800651F4 (--1EM_ViewUncloakingActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ?StartActivity@EM_ViewUncloakingActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x180065220 (-StartActivity@EM_ViewUncloakingActivity@NotificationCenterTelemetry@NotificationCenterUITelemet.c)
 *     ?ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z @ 0x180067410 (-ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z.c)
 *     ?IsHighContrast@@YAHXZ @ 0x1800674C0 (-IsHighContrast@@YAHXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180134468 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?RegisterWithLightDismiss@CControlCenterExperienceManager@@AEAAJXZ @ 0x180191490 (-RegisterWithLightDismiss@CControlCenterExperienceManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CControlCenterExperienceManager::OnViewUncloaking(
        CControlCenterExperienceManager *this,
        ExperienceManagerUtils **a2)
{
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v4; // rdx
  HWND v5; // rbx
  HSTRING v6; // rcx
  const WCHAR *StringRawBuffer; // rax
  const char *v8; // r9
  LANGID ThreadUILanguage; // ax
  bool v10; // bl
  _BOOL8 v11; // r8
  unsigned int v12; // edx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  _QWORD v17[40]; // [rsp+30h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v17,
    (__int64)"EM_ViewUncloakingActivity");
  v17[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewUncloakingActivity::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewUncloakingActivity::StartActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewUncloakingActivity *)v17);
  v5 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(a2[3], v4);
  v6 = (HSTRING)*((_QWORD *)this + 39);
  if ( v6 )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(v6, 0LL);
    if ( !SetWindowTextW(v5, StringRawBuffer) )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x2ED,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
        v8);
  }
  ThreadUILanguage = GetThreadUILanguage();
  v10 = (unsigned int)IsBiDiLocale(ThreadUILanguage) != 0;
  v11 = (unsigned int)IsHighContrast() != 0;
  v12 = (v10 ? 4 : 1) | 2;
  if ( !*((_BYTE *)this + 321) )
    v12 = v10 ? 4 : 1;
  v13 = CSingleViewShellExperience::ShowBorder((__int64)this + 16, v12, v11, 0LL, 0);
  if ( v13 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2FD,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v13);
  v14 = CControlCenterExperienceManager::RegisterWithLightDismiss((CControlCenterExperienceManager *)((char *)this - 88));
  if ( v14 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2FE,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v14);
  v15 = CExperienceManagerAnimationHelper::Begin((__int64)this + 240, (__int64)a2[3], 2097231LL);
  if ( v15 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x302,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v15);
  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v17, 0);
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewUncloakingActivity::~EM_ViewUncloakingActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewUncloakingActivity *)v17);
  return 0LL;
}
