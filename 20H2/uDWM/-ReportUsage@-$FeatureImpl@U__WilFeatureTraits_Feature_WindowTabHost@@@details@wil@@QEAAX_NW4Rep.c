/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800557F8
 * Callers:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@details@wil@@QEAA_NXZ @ 0x1800559AC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@details@wil@@QEAA.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180055DE8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@deta_ea_180055DE8.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180054BE0 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18005517C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@details@.c)
 */

void wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowTabHost>::ReportUsage(
        wil::details *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        ...)
{
  int v3; // edi
  unsigned int v5; // r8d
  int v6; // esi
  int v7; // [rsp+50h] [rbp+8h] BYREF
  __int16 v8; // [rsp+54h] [rbp+Ch]
  __int64 v9; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v9 = va_arg(va1, _QWORD);
  v3 = a3;
  v5 = *(_DWORD *)a1;
  v6 = a2;
  if ( (*(_DWORD *)a1 & 2) == 0 )
  {
    v9 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowTabHost>::GetCachedFeatureEnabledState(
                      a1,
                      (signed __int32 *)va);
    v5 = v9;
  }
  LODWORD(v9) = 0;
  v7 = 0;
  BYTE4(v9) = 2;
  v8 = WORD2(v9);
  wil::details::ReportUsageToService(
    (__int64)a1 + 8,
    0x181ED72u,
    (v5 >> 8) & 1,
    (v5 >> 9) & 1,
    (const struct FEATURE_LOGGED_TRAITS *)&v7,
    v6,
    v3);
}
