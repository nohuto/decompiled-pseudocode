/*
 * XREFs of ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_PinWebsiteAction@@@wil@@SA_NXZ @ 0x180083FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PinWebsiteAction@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800841A4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PinWebsiteAction@@@details@wil@@QEAAX_NW4.c)
 */

char __fastcall wil::Feature<__WilFeatureTraits_Feature_PinWebsiteAction>::IsEnabled(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  LOBYTE(a3) = 3;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_PinWebsiteAction>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_PinWebsiteAction>::GetImpl'::`2'::impl,
    a2,
    a3);
  return 1;
}
