/*
 * XREFs of ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_TouchKeyboardExperienceManager@@@wil@@SA_NXZ @ 0x180214C50
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TouchKeyboardExperienceManager@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802155C0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TouchKeyboardExperienceManager@@@details@.c)
 */

char __fastcall wil::Feature<__WilFeatureTraits_Feature_TouchKeyboardExperienceManager>::IsEnabled(
        __int64 a1,
        __int64 a2)
{
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TouchKeyboardExperienceManager>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_TouchKeyboardExperienceManager>::GetImpl'::`2'::impl,
    a2);
  return 1;
}
