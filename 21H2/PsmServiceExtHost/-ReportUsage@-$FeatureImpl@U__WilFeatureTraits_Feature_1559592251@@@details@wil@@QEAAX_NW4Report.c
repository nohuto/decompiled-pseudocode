/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_1559592251@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180047538
 * Callers:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_1559592251@@@details@wil@@QEAA_NXZ @ 0x1800475C4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_1559592251@@@details@wil@@QEAA_NX.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180045E90 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_1559592251@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180047390 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_1559592251@@@details@wil.c)
 */

__int64 (__fastcall *wil::details::FeatureImpl<__WilFeatureTraits_Feature_1559592251>::ReportUsage(
        wil::details *a1,
        unsigned __int8 a2,
        __int64 a3,
        ...))(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD)
{
  __int64 v3; // r8
  unsigned int v5; // edi
  int v7; // [rsp+30h] [rbp-18h]
  int v8; // [rsp+50h] [rbp+8h] BYREF
  __int16 v9; // [rsp+54h] [rbp+Ch]
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v10 = va_arg(va1, _QWORD);
  LODWORD(v3) = *(_DWORD *)a1;
  v5 = a2;
  if ( (*(_DWORD *)a1 & 4) == 0 )
  {
    v3 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_1559592251>::GetCachedFeatureEnabledState(
                      a1,
                      (signed __int32 *)va);
    v10 = v3;
  }
  BYTE4(v10) = 2;
  LODWORD(v10) = 0;
  v8 = 0;
  v9 = WORD2(v10);
  return wil::details::ReportUsageToService(
           (__int64)a1 + 8,
           0x3036389u,
           ((unsigned int)v3 >> 10) & 1,
           ((unsigned int)v3 >> 11) & 1,
           (__int64)&v8,
           v5,
           v7);
}
