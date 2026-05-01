/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SettingsSearchCFR@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18034F9D8
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopTouchImprovementForTabletPosture@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180349E30 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopTouchImprovement.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180093334 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SettingsSearchCFR@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1803499B0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_SettingsSearchCFR@@@deta.c)
 */

void wil::details::FeatureImpl<__WilFeatureTraits_Feature_SettingsSearchCFR>::ReportUsage(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        ...)
{
  volatile unsigned __int32 v3; // r8d
  __int64 v5; // [rsp+50h] [rbp+8h] BYREF
  __int64 v6; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v6 = va_arg(va1, _QWORD);
  v3 = *a1;
  if ( (*a1 & 2) == 0 )
  {
    v5 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SettingsSearchCFR>::GetCachedFeatureEnabledState(
                      a1,
                      (signed __int32 *)&v5);
    v3 = v5;
  }
  BYTE4(v6) = 3;
  LODWORD(v6) = 0;
  wil::details::ReportUsageToService(
    (__int64)(a1 + 2),
    0x1400A73u,
    (v3 >> 8) & 1,
    (v3 >> 9) & 1,
    (const struct FEATURE_LOGGED_TRAITS *)va,
    1,
    0);
}
