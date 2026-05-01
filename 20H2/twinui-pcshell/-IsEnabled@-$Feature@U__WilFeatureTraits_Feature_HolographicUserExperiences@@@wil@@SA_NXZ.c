/*
 * XREFs of ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_HolographicUserExperiences@@@wil@@SA_NXZ @ 0x1800AA2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_HolographicUserExperiences@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18005E800 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_HolographicUserExperiences@@@details@wil@.c)
 */

char wil::Feature<__WilFeatureTraits_Feature_HolographicUserExperiences>::IsEnabled()
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_HolographicUserExperiences>::ReportUsage(
    (unsigned int *)&`wil::Feature<__WilFeatureTraits_Feature_HolographicUserExperiences>::GetImpl'::`2'::impl,
    1u,
    3u);
  return 1;
}
