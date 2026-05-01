/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_UpdateSearchBoxWidthFromServer@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180097584
 * Callers:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_UpdateSearchBoxWidthFromServer@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800976D4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_UpdateSearchBoxWidthFro.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_UpdateSearchBoxWidthFromServer@@@details@wil@@QEAA_NXZ @ 0x180097718 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_UpdateSear_ea_180097718.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180093334 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_UpdateSearchBoxWidthFromServer@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18009691C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_UpdateSearchBo.c)
 */

void wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_UpdateSearchBoxWidthFromServer>::ReportUsage(
        wil::details *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        ...)
{
  int v3; // edi
  unsigned int v5; // r8d
  int v6; // esi
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v8 = va_arg(va1, _QWORD);
  v3 = a3;
  v5 = *(_DWORD *)a1;
  v6 = a2;
  if ( (*(_DWORD *)a1 & 2) == 0 )
  {
    v7 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_UpdateSearchBoxWidthFromServer>::GetCachedFeatureEnabledState(
                      a1,
                      (signed __int32 *)&v7);
    v5 = v7;
  }
  LODWORD(v8) = 0;
  BYTE4(v8) = 2;
  wil::details::ReportUsageToService(
    (__int64)a1 + 8,
    0x25CD4F5u,
    (v5 >> 8) & 1,
    (v5 >> 9) & 1,
    (const struct FEATURE_LOGGED_TRAITS *)va,
    v6,
    v3);
}
