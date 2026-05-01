/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FamilySafetyJavaIdFix_34860019@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800BCCC8
 * Callers:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FamilySafetyJavaIdFix_34860019@@@details@wil@@QEAA_NXZ @ 0x1800BCFE4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FamilySafetyJavaIdFix_3.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18002CA60 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FamilySafetyJavaIdFix_34860019@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800BC6DC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FamilySafetyJa.c)
 */

void wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_FamilySafetyJavaIdFix_34860019>::ReportUsage(
        wil::details *a1,
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
  LODWORD(v3) = *(_DWORD *)a1;
  v5 = a2;
  if ( (*(_DWORD *)a1 & 2) == 0 )
  {
    v3 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_FamilySafetyJavaIdFix_34860019>::GetCachedFeatureEnabledState(
                      a1,
                      (signed __int32 *)&v6);
    v6 = v3;
  }
  LODWORD(v7) = 0;
  BYTE4(v7) = 2;
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)a1 + 8,
    0x213EBF3u,
    ((unsigned int)v3 >> 8) & 1,
    ((unsigned int)v3 >> 9) & 1,
    (const struct FEATURE_LOGGED_TRAITS *)va,
    v5,
    3);
}
