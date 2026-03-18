/*
 * XREFs of ?ProcessProtectContent@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_PROTECTCONTENT@@@Z @ 0x1801F7B50
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180048C04 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 */

__int64 __fastcall CVisual::ProcessProtectContent(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_PROTECTCONTENT *a3)
{
  char v3; // r9

  v3 = *((_BYTE *)a3 + 8);
  if ( ((*((unsigned __int8 *)this + 103) >> 2) & 1) != (v3 != 0) )
  {
    *((_BYTE *)this + 103) = *((_BYTE *)this + 103) & 0xFB | (v3 != 0 ? 4 : 0);
    CVisual::PropagateFlags((__int64)this, 5u);
  }
  return 0LL;
}
