/*
 * XREFs of ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_StartInWin32Host@@@wil@@SA_NXZ @ 0x1800AA4B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_StartInWin32Host@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18022B3F8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_StartInWin32Host@@@details@wil@@QEAAX_NW4.c)
 */

char wil::Feature<__WilFeatureTraits_Feature_StartInWin32Host>::IsEnabled()
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_StartInWin32Host>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_StartInWin32Host>::GetImpl'::`2'::impl,
    0LL);
  return 0;
}
