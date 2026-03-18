/*
 * XREFs of IsSuperWetInkCompatibleVailContainer @ 0x180194EDC
 * Callers:
 *     ?RemoveSource@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z @ 0x180194F84 (-RemoveSource@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z.c)
 *     ?TryRegisterSuperWetForDraw@CSuperWetInkManager@@QEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x18019552C (-TryRegisterSuperWetForDraw@CSuperWetInkManager@@QEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VailSuperWetInk@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180195198 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VailSuperWetInk@@@details@wil@@QEAAX_NW4R.c)
 */

char IsSuperWetInkCompatibleVailContainer()
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VailSuperWetInk>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_VailSuperWetInk>::GetImpl'::`2'::impl,
    0LL);
  return 0;
}
