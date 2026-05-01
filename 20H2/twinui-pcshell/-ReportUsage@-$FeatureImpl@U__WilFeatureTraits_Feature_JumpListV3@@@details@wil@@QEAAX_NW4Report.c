/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_JumpListV3@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801D918C
 * Callers:
 *     ?OnViewUncloaking@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801D8EA0 (-OnViewUncloaking@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180093334 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_JumpListV3@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1801D7B10 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_JumpListV3@@@details@wil.c)
 */

void wil::details::FeatureImpl<__WilFeatureTraits_Feature_JumpListV3>::ReportUsage(
        volatile signed __int32 *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        ...)
{
  int v3; // edi
  volatile unsigned __int32 v5; // r8d
  int v6; // esi
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v8 = va_arg(va1, _QWORD);
  v3 = a3;
  v5 = *a1;
  v6 = a2;
  if ( (*a1 & 2) == 0 )
  {
    v7 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_JumpListV3>::GetCachedFeatureEnabledState(
                      a1,
                      (signed __int32 *)&v7);
    v5 = v7;
  }
  LODWORD(v8) = 1;
  BYTE4(v8) = 3;
  wil::details::ReportUsageToService(
    (__int64)(a1 + 2),
    0x1182058u,
    (v5 >> 8) & 1,
    (v5 >> 9) & 1,
    (const struct FEATURE_LOGGED_TRAITS *)va,
    v6,
    v3);
}
