/*
 * XREFs of ?OnViewUncloaking@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800656D0
 * Callers:
 *     ?OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18002C4D0 (-OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING_.c)
 * Callees:
 *     ?GetViewPosition@CActionCenterExperienceManager@@AEAAJAEAUtagRECT@@@Z @ 0x180019928 (-GetViewPosition@CActionCenterExperienceManager@@AEAAJAEAUtagRECT@@@Z.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x18001BD54 (-IsBiDiLocale@@YAHK@Z.c)
 *     ??0?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18001CBE0 (--0-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180020628 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180021218 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@2222@Z @ 0x180051A4C (-Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@_ea_180051A4C.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlShowHideAnimations@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180053620 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XamlShowHideAnimations@@@details@wil@@QEA.c)
 *     ??1EM_ViewUncloakingActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x180065924 (--1EM_ViewUncloakingActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ?StartActivity@EM_ViewUncloakingActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x180065950 (-StartActivity@EM_ViewUncloakingActivity@NotificationCenterTelemetry@NotificationCenterUITelemet.c)
 *     ?RegisterWithLightDismiss@CActionCenterExperienceManager@@AEAAJXZ @ 0x180065A2C (-RegisterWithLightDismiss@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z @ 0x180067B30 (-ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z.c)
 *     ?IsHighContrast@@YAHXZ @ 0x180067BE0 (-IsHighContrast@@YAHXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180158A58 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CActionCenterExperienceManager::OnViewUncloaking(
        CActionCenterExperienceManager *this,
        ExperienceManagerUtils **a2)
{
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v4; // rdx
  HWND v5; // rbx
  HSTRING v6; // rcx
  const WCHAR *StringRawBuffer; // rax
  const char *v8; // r9
  LANGID ThreadUILanguage; // ax
  bool v10; // bl
  __int64 v11; // r8
  unsigned int v12; // eax
  __int64 v13; // rdx
  int v14; // eax
  int v15; // eax
  __int64 v16; // r8
  int ViewPosition; // eax
  wil::details::in1diag3 *v18; // rcx
  int v19; // ebx
  LANGID v20; // ax
  __int64 v22; // rdx
  int v23; // [rsp+20h] [rbp-E0h]
  struct tagRECT rc; // [rsp+40h] [rbp-C0h] BYREF
  struct tagRECT v25; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v26[40]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+C8h]

  if ( *((_BYTE *)this + 504) )
  {
    *((_QWORD *)this + 62) = a2;
    return 0LL;
  }
  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v26,
    (__int64)"EM_ViewUncloakingActivity");
  v26[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewUncloakingActivity::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewUncloakingActivity::StartActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewUncloakingActivity *)v26);
  v5 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(a2[3], v4);
  v6 = (HSTRING)*((_QWORD *)this + 41);
  if ( v6 )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(v6, 0LL);
    if ( !SetWindowTextW(v5, StringRawBuffer) )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x479,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        v8);
  }
  ThreadUILanguage = GetThreadUILanguage();
  v10 = (unsigned int)IsBiDiLocale(ThreadUILanguage) != 0;
  v11 = (unsigned int)IsHighContrast() != 0 ? 1 : 3;
  v12 = v10 ? 4 : 1;
  v13 = v12 | 2;
  if ( !*((_BYTE *)this + 337) )
    v13 = v12;
  v23 = 0;
  v14 = CSingleViewShellExperience::ShowBorder((char *)this + 16, v13, v11, 0LL);
  if ( v14 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x489,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v14,
      0);
  v15 = CActionCenterExperienceManager::RegisterWithLightDismiss((CActionCenterExperienceManager *)((char *)this - 104));
  if ( v15 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x48A,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v15,
      v23);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_XamlShowHideAnimations>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_XamlShowHideAnimations>::GetImpl'::`2'::impl,
    0,
    v16);
  if ( !*((_BYTE *)this + 312) )
  {
    ViewPosition = CActionCenterExperienceManager::GetViewPosition(
                     (CActionCenterExperienceManager *)((char *)this - 104),
                     &v25);
    v18 = retaddr;
    if ( ViewPosition < 0 )
    {
      v22 = 1167LL;
    }
    else
    {
      rc = v25;
      v19 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v25, 8)) - _mm_cvtsi128_si32((__m128i)v25);
      v20 = GetThreadUILanguage();
      if ( (unsigned int)IsBiDiLocale(v20) )
        v19 = -v19;
      OffsetRect(&rc, v19, 0);
      ViewPosition = CExperienceManagerAnimationHelper::Begin(
                       (__int64)this + 248,
                       a2[3],
                       0x1A0002Au,
                       (__int64)&rc,
                       (int)&rc);
      v18 = retaddr;
      if ( ViewPosition >= 0 )
        goto LABEL_16;
      v22 = 1184LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v18,
      (void *)v22,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)ViewPosition,
      v23);
  }
LABEL_16:
  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v26, 0);
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewUncloakingActivity::~EM_ViewUncloakingActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewUncloakingActivity *)v26);
  return 0LL;
}
