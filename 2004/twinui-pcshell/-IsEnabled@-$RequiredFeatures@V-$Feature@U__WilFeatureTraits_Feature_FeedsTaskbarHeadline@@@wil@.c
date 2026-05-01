/*
 * XREFs of ?IsEnabled@?$RequiredFeatures@V?$Feature@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@wil@@@details@wil@@SA_NXZ @ 0x18009B1F8
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsHoverClickOptions@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18009A3A0 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_FeedsHoverClickOptions@.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsPerfImprovements@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18009A460 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_FeedsPerfImprovements@@.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsTestability@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18009A5DC (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_FeedsTestability@@@deta.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsCTACompliance@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800DC7CC (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_FeedsCTACompliance@@@de.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18009E4F4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@details@wi.c)
 */

bool wil::details::RequiredFeatures<wil::Feature<__WilFeatureTraits_Feature_FeedsTaskbarHeadline>>::IsEnabled()
{
  return (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_FeedsTaskbarHeadline>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_FeedsTaskbarHeadline>::GetImpl'::`2'::impl) != 0;
}
