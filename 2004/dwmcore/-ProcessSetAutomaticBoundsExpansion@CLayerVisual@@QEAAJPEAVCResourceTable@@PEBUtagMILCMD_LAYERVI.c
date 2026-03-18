/*
 * XREFs of ?ProcessSetAutomaticBoundsExpansion@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISUAL_SETAUTOMATICBOUNDSEXPANSION@@@Z @ 0x1800D4F04
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CLayerVisual::ProcessSetAutomaticBoundsExpansion(
        CLayerVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_LAYERVISUAL_SETAUTOMATICBOUNDSEXPANSION *a3)
{
  *((_BYTE *)this + 632) = *((_DWORD *)a3 + 2) != 0;
  return 0LL;
}
