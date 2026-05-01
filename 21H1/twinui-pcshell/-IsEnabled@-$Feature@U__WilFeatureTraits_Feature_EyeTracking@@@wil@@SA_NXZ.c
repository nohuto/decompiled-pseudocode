/*
 * XREFs of ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_EyeTracking@@@wil@@SA_NXZ @ 0x1801F2360
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_EyeTracking@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801F2A8C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_EyeTracking@@@details@wil@@QEAAX_NW4Repor.c)
 */

char __fastcall wil::Feature<__WilFeatureTraits_Feature_EyeTracking>::IsEnabled(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_EyeTracking>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_EyeTracking>::GetImpl'::`2'::impl,
    a2);
  return 1;
}
