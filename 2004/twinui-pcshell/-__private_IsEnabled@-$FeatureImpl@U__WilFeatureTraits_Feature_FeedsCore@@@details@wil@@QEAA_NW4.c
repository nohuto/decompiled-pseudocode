/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsCore@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18009E430
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18009A510 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@.c)
 *     ?GetCurrentVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18009A8A8 (-GetCurrentVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@details.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsCore@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180099958 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_FeedsCore@@@details@wil@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsCore@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18009BEFC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_FeedsCore@@@details@wil@@QEAAX_NW4Reporti.c)
 */

unsigned __int8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_FeedsCore>::__private_IsEnabled(
        wil::details *a1)
{
  unsigned __int8 v2; // bl
  signed __int32 v4; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_FeedsCore>::GetCachedFeatureEnabledState(a1, &v4);
  v2 = (v4 & 8) != 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_FeedsCore>::ReportUsage(a1, v2, 0);
  return v2;
}
