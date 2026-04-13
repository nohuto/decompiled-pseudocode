/*
 * XREFs of ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_SettingsAccountsInfoProgrammablePromoCard@@@wil@@SA_NXZ @ 0x1800333F0
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180008764 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SettingsAccountsInfoProgrammablePromoCard@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180038E8C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_SettingsAccountsInfoProg.c)
 */

char wil::Feature<__WilFeatureTraits_Feature_SettingsAccountsInfoProgrammablePromoCard>::IsEnabled()
{
  unsigned int v0; // r8d
  int v2; // [rsp+50h] [rbp+8h] BYREF
  char v3; // [rsp+54h] [rbp+Ch]
  __int64 v4; // [rsp+58h] [rbp+10h]
  char v5; // [rsp+60h] [rbp+18h] BYREF

  v0 = `wil::Feature<__WilFeatureTraits_Feature_SettingsAccountsInfoProgrammablePromoCard>::GetImpl'::`2'::impl;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_SettingsAccountsInfoProgrammablePromoCard>::GetImpl'::`2'::impl & 2) == 0 )
  {
    v4 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SettingsAccountsInfoProgrammablePromoCard>::GetCachedFeatureEnabledState(
                      &`wil::Feature<__WilFeatureTraits_Feature_SettingsAccountsInfoProgrammablePromoCard>::GetImpl'::`2'::impl,
                      &v5);
    v0 = v4;
  }
  v2 = 0;
  v3 = 3;
  wil_details_FeatureReporting_ReportUsageToService(
    (signed __int32 *)&unk_180199128,
    0xC4F697u,
    (v0 >> 8) & 1,
    (v0 >> 9) & 1,
    (const struct FEATURE_LOGGED_TRAITS *)&v2,
    1,
    3);
  return 1;
}
