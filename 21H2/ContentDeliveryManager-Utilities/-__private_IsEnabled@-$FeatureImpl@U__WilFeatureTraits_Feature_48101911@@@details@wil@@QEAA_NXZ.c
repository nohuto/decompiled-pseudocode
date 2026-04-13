/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_48101911@@@details@wil@@QEAA_NXZ @ 0x180017B34
 * Callers:
 *     ??R_lambda_70c99accc36c2441dd5df81ec50ad134_@@QEBAJAEAVCHSTRINGResult@Internal@Windows@@@Z @ 0x180010ECC (--R_lambda_70c99accc36c2441dd5df81ec50ad134_@@QEBAJAEAVCHSTRINGResult@Internal@Windows@@@Z.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000CE30 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_48101911@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180018454 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_48101911@@@details@wil@@.c)
 */

unsigned __int8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_48101911>::__private_IsEnabled(int *a1)
{
  unsigned int v2; // r8d
  unsigned __int8 v3; // di
  int v5; // [rsp+50h] [rbp+8h] BYREF
  char v6; // [rsp+54h] [rbp+Ch]
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF
  char v8; // [rsp+60h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_48101911>::GetCachedFeatureEnabledState(a1, &v7);
  v2 = *a1;
  v3 = v7 & 1;
  if ( (*a1 & 4) == 0 )
  {
    v7 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_48101911>::GetCachedFeatureEnabledState(
                      a1,
                      &v8);
    v2 = v7;
  }
  v5 = 0;
  v6 = 2;
  wil::details::ReportUsageToService(a1 + 2, 0x2DDFA17u, (v2 >> 10) & 1, (v2 >> 11) & 1, (__int64)&v5, v3, 3);
  return v3;
}
