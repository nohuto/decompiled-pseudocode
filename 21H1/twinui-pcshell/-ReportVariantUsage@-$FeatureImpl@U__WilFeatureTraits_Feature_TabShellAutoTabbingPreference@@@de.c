/*
 * XREFs of ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TabShellAutoTabbingPreference@@@details@wil@@QEAAX_NW4Variant_TabShellAutoTabbingPreference@@W4VariantReportingKind@3@_K@Z @ 0x1802616F8
 * Callers:
 *     ?ChooseTargetViewUsingHeuristic@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAAXPEAUIApplicationViewCollection@@@Z @ 0x180260A48 (-ChooseTargetViewUsingHeuristic@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAAXPEAUIApplication.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportVariantUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HEIW4wil_VariantReportingKind@@_K@Z @ 0x18007D21C (-wil_details_FeatureReporting_ReportVariantUsageToService@@YAXPEAUwil_details_FeatureReportingCa.c)
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_TabShellAutoTabbingPreference@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180260EA4 (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_TabShellAutoTabbingPreference@@.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabShellAutoTabbingPreference>::ReportVariantUsage(
        unsigned int *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        __int64 a4,
        unsigned __int64 a5)
{
  int v6; // esi
  unsigned int v7; // r8d
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // [rsp+50h] [rbp-18h] BYREF
  int v12; // [rsp+70h] [rbp+8h] BYREF
  char v13; // [rsp+74h] [rbp+Ch]

  v6 = a2;
  v7 = *a1;
  HIDWORD(a5) = a1[1];
  LODWORD(a5) = v7;
  if ( (v7 & 2) != 0 )
  {
    v9 = a5;
  }
  else
  {
    v9 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabShellAutoTabbingPreference>::GetCachedVariantState(
                      (volatile signed __int64 *)a1,
                      (__int64)&v11);
    a5 = v9;
    v7 = v9;
  }
  if ( a3 )
    v10 = HIDWORD(v9);
  else
    LODWORD(v10) = 0;
  v12 = 0;
  v13 = 0;
  wil_details_FeatureReporting_ReportVariantUsageToService(
    (__int64)(a1 + 2),
    0x10447E5u,
    (v7 >> 8) & 1,
    (v7 >> 9) & 1,
    (const struct FEATURE_LOGGED_TRAITS *)&v12,
    v6,
    a3,
    v10,
    2);
}
