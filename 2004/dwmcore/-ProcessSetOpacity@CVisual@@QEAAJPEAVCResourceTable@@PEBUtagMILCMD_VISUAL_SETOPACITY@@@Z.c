/*
 * XREFs of ?ProcessSetOpacity@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOPACITY@@@Z @ 0x1801AFE90
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?SetOpacity@CVisual@@QEAAXM@Z @ 0x180040284 (-SetOpacity@CVisual@@QEAAXM@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetOpacity(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETOPACITY *a3)
{
  CVisual::SetOpacity(this, *((float *)a3 + 2));
  return 0LL;
}
