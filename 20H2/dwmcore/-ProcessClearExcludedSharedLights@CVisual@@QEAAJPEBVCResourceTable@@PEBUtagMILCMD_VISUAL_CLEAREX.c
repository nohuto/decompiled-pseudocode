/*
 * XREFs of ?ProcessClearExcludedSharedLights@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_CLEAREXCLUDEDSHAREDLIGHTS@@@Z @ 0x1801ADC3C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisual::ProcessClearExcludedSharedLights(
        CVisual *this,
        const struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_CLEAREXCLUDEDSHAREDLIGHTS *a3)
{
  return CVisual::RemoveAllSharedLights(this, 1);
}
