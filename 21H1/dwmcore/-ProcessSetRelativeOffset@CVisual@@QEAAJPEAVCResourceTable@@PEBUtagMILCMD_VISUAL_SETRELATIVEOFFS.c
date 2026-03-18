/*
 * XREFs of ?ProcessSetRelativeOffset@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETRELATIVEOFFSET@@@Z @ 0x1801B2880
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?SetRelativeOffset@CVisual@@QEAAXMMM@Z @ 0x1800C6F58 (-SetRelativeOffset@CVisual@@QEAAXMMM@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetRelativeOffset(CVisual *this, struct CResourceTable *a2, FLOAT *a3)
{
  CVisual::SetRelativeOffset(this, a3[2], a3[3], a3[4]);
  return 0LL;
}
