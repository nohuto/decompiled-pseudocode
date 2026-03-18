/*
 * XREFs of ?ProcessSetVisible@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETVISIBLE@@@Z @ 0x1801AE0B4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?SetVisible@CVisual@@QEAAX_N@Z @ 0x180020580 (-SetVisible@CVisual@@QEAAX_N@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetVisible(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETVISIBLE *a3)
{
  CVisual::SetVisible(this, *((_BYTE *)a3 + 8));
  return 0LL;
}
