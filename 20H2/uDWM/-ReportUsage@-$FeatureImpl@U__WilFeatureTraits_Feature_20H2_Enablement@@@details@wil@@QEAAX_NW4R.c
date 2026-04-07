/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_20H2_Enablement@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800556D8
 * Callers:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_20H2_Enablement@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18005592C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_20H2_Enablement@@@details@wil@@QE.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180054BE0 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_20H2_Enablement@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180054F74 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_20H2_Enablement@@@detail.c)
 */

void wil::details::FeatureImpl<__WilFeatureTraits_Feature_20H2_Enablement>::ReportUsage(
        wil::details *a1,
        unsigned __int8 a2,
        __int64 a3,
        ...)
{
  __int64 v3; // r8
  int v5; // edi
  int v6; // [rsp+50h] [rbp+8h] BYREF
  __int16 v7; // [rsp+54h] [rbp+Ch]
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v8 = va_arg(va1, _QWORD);
  LODWORD(v3) = *(_DWORD *)a1;
  v5 = a2;
  if ( (*(_DWORD *)a1 & 2) == 0 )
  {
    v3 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_20H2_Enablement>::GetCachedFeatureEnabledState(
                      a1,
                      (signed __int32 *)va);
    v8 = v3;
  }
  BYTE4(v8) = 1;
  v7 = WORD2(v8);
  LODWORD(v8) = 0;
  v6 = 0;
  wil::details::ReportUsageToService(
    (__int64)a1 + 8,
    0x16B553Eu,
    ((unsigned int)v3 >> 8) & 1,
    ((unsigned int)v3 >> 9) & 1,
    (const struct FEATURE_LOGGED_TRAITS *)&v6,
    v5,
    0);
}
