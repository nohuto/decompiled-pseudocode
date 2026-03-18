/*
 * XREFs of ?ProcessSetRelativeOffset@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETRELATIVEOFFSET@@@Z @ 0x180113796
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?SetRelativeOffset@CVisual@@QEAAXMMM@Z @ 0x1800E941C (-SetRelativeOffset@CVisual@@QEAAXMMM@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetRelativeOffset(CVisual *this, struct CResourceTable *a2, FLOAT *a3)
{
  CVisual::SetRelativeOffset(this, a3[2], a3[3], a3[4]);
  return 0LL;
}
