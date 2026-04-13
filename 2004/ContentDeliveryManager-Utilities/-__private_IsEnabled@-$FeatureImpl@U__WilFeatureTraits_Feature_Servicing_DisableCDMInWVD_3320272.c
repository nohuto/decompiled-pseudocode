/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_DisableCDMInWVD_33202726@@@details@wil@@QEAA_NXZ @ 0x18001788C
 * Callers:
 *     ??R_lambda_13a45783cb3309e666fe0ee3fbf2f736_@@QEBAXXZ @ 0x18000E474 (--R_lambda_13a45783cb3309e666fe0ee3fbf2f736_@@QEBAXXZ.c)
 *     ?GetLockScreenEnabled@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEA_N1@Z @ 0x18002D7B0 (-GetLockScreenEnabled@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEA_N1@Z.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180008764 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_DisableCDMInWVD_33202726@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800180DC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_DisableCDMInWV.c)
 */

bool __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_DisableCDMInWVD_33202726>::__private_IsEnabled(
        _DWORD *a1)
{
  unsigned int v2; // r8d
  bool v3; // bl
  int v5; // [rsp+50h] [rbp+8h] BYREF
  char v6; // [rsp+54h] [rbp+Ch]
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF
  char v8; // [rsp+60h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_DisableCDMInWVD_33202726>::GetCachedFeatureEnabledState(
    a1,
    &v7);
  v2 = *a1;
  v3 = (v7 & 8) != 0;
  if ( (*a1 & 2) == 0 )
  {
    v7 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_DisableCDMInWVD_33202726>::GetCachedFeatureEnabledState(
                      a1,
                      &v8);
    v2 = v7;
  }
  v5 = 0;
  v6 = 2;
  wil_details_FeatureReporting_ReportUsageToService(
    a1 + 2,
    0x1FAA226u,
    (v2 >> 8) & 1,
    (v2 >> 9) & 1,
    (const struct FEATURE_LOGGED_TRAITS *)&v5,
    v3,
    3);
  return v3;
}
