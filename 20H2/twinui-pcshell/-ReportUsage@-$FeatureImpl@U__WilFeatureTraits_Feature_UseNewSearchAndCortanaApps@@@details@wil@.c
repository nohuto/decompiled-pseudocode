/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180098CD0
 * Callers:
 *     ?ShellAppLaunchWNFCallback@CCortanaWNFService@Cortana@TwinUI@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180079CA0 (-ShellAppLaunchWNFCallback@CCortanaWNFService@Cortana@TwinUI@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYP.c)
 *     ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps@@@wil@@SA_NXZ @ 0x180098CB0 (-IsEnabled@-$Feature@U__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps@@@wil@@SA_NXZ.c)
 *     ?CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z @ 0x1801F9E68 (-CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z.c)
 *     ?InitializeCortanaExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@@Z @ 0x18032B9B4 (-InitializeCortanaExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experi.c)
 *     ?LogErrorIfStartOrCortanaArentInstalled@XamlLauncher@@CAXXZ @ 0x18032C670 (-LogErrorIfStartOrCortanaArentInstalled@XamlLauncher@@CAXXZ.c)
 *     ?PearlRectMayHaveChanged@XamlLauncher@@UEAAJPEAUHMONITOR__@@@Z @ 0x18032D1E0 (-PearlRectMayHaveChanged@XamlLauncher@@UEAAJPEAUHMONITOR__@@@Z.c)
 *     ?StopTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ @ 0x180336730 (-StopTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180093334 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1801F29AC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_UseNewSearchAndCortanaAp.c)
 */

void wil::details::FeatureImpl<__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps>::ReportUsage(
        _DWORD *a1,
        unsigned __int8 a2,
        __int64 a3,
        ...)
{
  __int64 v3; // r8
  int v5; // edi
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF
  __int64 v7; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v7 = va_arg(va1, _QWORD);
  LODWORD(v3) = *a1;
  v5 = a2;
  if ( (*a1 & 2) == 0 )
  {
    v3 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps>::GetCachedFeatureEnabledState(
                      a1,
                      &v6);
    v6 = v3;
  }
  LODWORD(v7) = 0;
  BYTE4(v7) = 3;
  wil::details::ReportUsageToService(
    (__int64)(a1 + 2),
    0x125F087u,
    ((unsigned int)v3 >> 8) & 1,
    ((unsigned int)v3 >> 9) & 1,
    (const struct FEATURE_LOGGED_TRAITS *)va,
    v5,
    3);
}
