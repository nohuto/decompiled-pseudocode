/*
 * XREFs of ?UnmetTabRequirementsMaybeUpdated@CWindowData@@QEAAXXZ @ 0x180024E5C
 * Callers:
 *     ?SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z @ 0x180025FA8 (-SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z.c)
 *     ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x1800283DC (-OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180029200 (-ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CWindowData::UnmetTabRequirementsMaybeUpdated(CWindowData *this)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabShell>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetImpl'::`2'::impl,
    0,
    3u);
}
