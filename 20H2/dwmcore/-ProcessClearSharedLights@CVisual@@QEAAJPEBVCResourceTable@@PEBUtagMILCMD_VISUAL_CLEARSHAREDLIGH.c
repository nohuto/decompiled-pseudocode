/*
 * XREFs of ?ProcessClearSharedLights@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_CLEARSHAREDLIGHTS@@@Z @ 0x1800C8F44
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisual::ProcessClearSharedLights(
        CVisual *this,
        const struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_CLEARSHAREDLIGHTS *a3)
{
  return CVisual::RemoveAllSharedLights(this, 0LL, a3);
}
