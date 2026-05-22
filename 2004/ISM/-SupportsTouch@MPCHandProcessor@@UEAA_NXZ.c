/*
 * XREFs of ?SupportsTouch@MPCHandProcessor@@UEAA_NXZ @ 0x18007F150
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ArticulatedHand2DInteraction@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18007ED9C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ArticulatedHand2DInteraction@@@details@wi.c)
 */

char __fastcall MPCHandProcessor::SupportsTouch(MPCHandProcessor *this, __int64 a2, __int64 a3)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ArticulatedHand2DInteraction>::ReportUsage(
    (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_ArticulatedHand2DInteraction>::GetImpl'::`2'::impl,
    1u,
    a3);
  return 1;
}
