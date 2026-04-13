/*
 * XREFs of ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_SilentInstalledApps@@@wil@@SA_NXZ @ 0x180033210
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000CC90 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SilentInstalledApps@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800390F0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_SilentInstalledApps@@@de.c)
 */

char wil::Feature<__WilFeatureTraits_Feature_SilentInstalledApps>::IsEnabled()
{
  unsigned int v0; // r8d
  int v2; // [rsp+50h] [rbp+8h] BYREF
  char v3; // [rsp+54h] [rbp+Ch]
  __int64 v4; // [rsp+58h] [rbp+10h]
  char v5; // [rsp+60h] [rbp+18h] BYREF

  v0 = `wil::Feature<__WilFeatureTraits_Feature_SilentInstalledApps>::GetImpl'::`2'::impl;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_SilentInstalledApps>::GetImpl'::`2'::impl & 2) == 0 )
  {
    v4 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SilentInstalledApps>::GetCachedFeatureEnabledState(
                      &`wil::Feature<__WilFeatureTraits_Feature_SilentInstalledApps>::GetImpl'::`2'::impl,
                      &v5);
    v0 = v4;
  }
  v2 = 0;
  v3 = 3;
  wil::details::ReportUsageToService(
    (signed __int32 *)&unk_1801990E0,
    0x7A7721u,
    (v0 >> 8) & 1,
    (v0 >> 9) & 1,
    (const struct FEATURE_LOGGED_TRAITS *)&v2,
    1,
    3);
  return 1;
}
