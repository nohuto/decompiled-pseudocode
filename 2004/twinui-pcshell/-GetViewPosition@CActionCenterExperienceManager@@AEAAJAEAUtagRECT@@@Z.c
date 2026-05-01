/*
 * XREFs of ?GetViewPosition@CActionCenterExperienceManager@@AEAAJAEAUtagRECT@@@Z @ 0x180019928
 * Callers:
 *     ?PositionView@CActionCenterExperienceManager@@AEAAJXZ @ 0x18001857C (-PositionView@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnViewUncloaking@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800656D0 (-OnViewUncloaking@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x18001BD54 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z @ 0x18001BD94 (-GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ActionCenterFlyoutHeight@@@details@wil@@QEAA_NXZ @ 0x180095E44 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ActionCenterFlyoutHeight@@@detail.c)
 *     ?ScaleByDPI@ExperienceManagerUtils@@YAHHH@Z @ 0x180136EA0 (-ScaleByDPI@ExperienceManagerUtils@@YAHHH@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18013B538 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CActionCenterExperienceManager::GetViewPosition(
        CActionCenterExperienceManager *this,
        struct tagRECT *a2)
{
  HMONITOR v4; // rsi
  const char *v5; // r9
  __int64 v6; // rdx
  HMONITOR v8; // rdx
  int PerMonitorDpi; // eax
  int v10; // r8d
  double v11; // xmm0_8
  int v12; // esi
  int v13; // r8d
  double v14; // xmm0_8
  unsigned __int64 v15; // rcx
  int v16; // edi
  LANGID ThreadUILanguage; // ax
  tagMONITORINFO mi; // [rsp+28h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  SetRectEmpty(a2);
  if ( *((_QWORD *)this + 18) )
  {
    v4 = MonitorFromPoint(0LL, 1u);
    if ( v4 == (HMONITOR)-1LL )
    {
      v6 = 1036LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v6,
               (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
               v5);
    }
    mi.cbSize = 40;
    memset(&mi.rcMonitor, 0, 36);
    if ( !GetMonitorInfoW(v4, &mi) )
    {
      v6 = 1039LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v6,
               (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
               v5);
    }
    *a2 = mi.rcMonitor;
    if ( *((_BYTE *)this + 440) )
      *a2 = mi.rcWork;
    PerMonitorDpi = ExperienceManagerUtils::GetPerMonitorDpi((ExperienceManagerUtils *)v4, v8);
    v11 = *((double *)this + 68);
    v12 = PerMonitorDpi;
    if ( v11 > 0.0 )
      a2->bottom -= ExperienceManagerUtils::ScaleByDPI(
                      (ExperienceManagerUtils *)(unsigned int)(int)v11,
                      PerMonitorDpi,
                      v10);
    if ( *((_BYTE *)this + 441) )
    {
      if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ActionCenterFlyoutHeight>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ActionCenterFlyoutHeight>::GetImpl'::`2'::impl)
        || (v14 = *((double *)this + 69), v15 = (unsigned int)(int)v14, v14 <= 0.0) )
      {
        v15 = (unsigned int)(int)*((float *)this + 42);
      }
      a2->top = a2->bottom - ExperienceManagerUtils::ScaleByDPI((ExperienceManagerUtils *)v15, v12, v13);
    }
    v16 = ExperienceManagerUtils::ScaleByDPI(
            (ExperienceManagerUtils *)(unsigned int)(int)*((float *)this + 41),
            v12,
            v10);
    ThreadUILanguage = GetThreadUILanguage();
    if ( (unsigned int)IsBiDiLocale(ThreadUILanguage) )
      a2->right = v16 + a2->left;
    else
      a2->left = a2->right - v16;
  }
  return 0LL;
}
