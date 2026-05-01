/*
 * XREFs of ?ShouldHandleFrameworkViewTypeChange@HolographicPositioner@@UEAAHPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x18021FD70
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_HolographicUserExperiences@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180051C70 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_HolographicUserExperiences@@@details@wil@.c)
 */

__int64 HolographicPositioner::ShouldHandleFrameworkViewTypeChange()
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_HolographicUserExperiences>::ReportUsage(
    (unsigned int *)&`wil::Feature<__WilFeatureTraits_Feature_HolographicUserExperiences>::GetImpl'::`2'::impl,
    1u,
    3u);
  return 1LL;
}
