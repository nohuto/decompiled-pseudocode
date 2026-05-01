/*
 * XREFs of ?GetDefaultTitlebarHeightInLogicalPixels@@YAHXZ @ 0x18003F594
 * Callers:
 *     ?_GetOffsetRectFromSize@CDesktopPositioner@@AEAAJPEBUtagRECT@@0UtagSIZE@@PEAU2@@Z @ 0x18003E780 (-_GetOffsetRectFromSize@CDesktopPositioner@@AEAAJPEBUtagRECT@@0UtagSIZE@@PEAU2@@Z.c)
 *     _anonymous_namespace_::GetWindowTitlebarSize @ 0x180286FE0 (_anonymous_namespace_--GetWindowTitlebarSize.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_NormalizeTitlebarHeight@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18003F5B8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_NormalizeTitlebarHeight@@@details@wil@@QE.c)
 */

__int64 GetDefaultTitlebarHeightInLogicalPixels(void)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_NormalizeTitlebarHeight>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_NormalizeTitlebarHeight>::GetImpl'::`2'::impl,
    0LL);
  return 32LL;
}
