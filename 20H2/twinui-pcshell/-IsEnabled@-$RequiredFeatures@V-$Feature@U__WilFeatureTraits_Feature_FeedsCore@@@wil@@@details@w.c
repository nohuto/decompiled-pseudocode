/*
 * XREFs of ?IsEnabled@?$RequiredFeatures@V?$Feature@U__WilFeatureTraits_Feature_FeedsCore@@@wil@@@details@wil@@SA_NXZ @ 0x180099268
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsDynamicSearchBox@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800991A4 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_FeedsDynamicSearchBox@@.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18009BD50 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@.c)
 *     ?GetCurrentVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18009BEC8 (-GetCurrentVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@details.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsCore@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180099640 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_FeedsCore@@@details@wil@@QEAA_NW4.c)
 */

bool wil::details::RequiredFeatures<wil::Feature<__WilFeatureTraits_Feature_FeedsCore>>::IsEnabled()
{
  return (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_FeedsCore>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_FeedsCore>::GetImpl'::`2'::impl) != 0;
}
