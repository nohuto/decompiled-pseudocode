/*
 * XREFs of ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_SignalManager@@@wil@@SA_NXZ @ 0x1801F23E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SignalManager@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801F2CDC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SignalManager@@@details@wil@@QEAAX_NW4Rep.c)
 */

char __fastcall wil::Feature<__WilFeatureTraits_Feature_SignalManager>::IsEnabled(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SignalManager>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_SignalManager>::GetImpl'::`2'::impl,
    a2);
  return 1;
}
