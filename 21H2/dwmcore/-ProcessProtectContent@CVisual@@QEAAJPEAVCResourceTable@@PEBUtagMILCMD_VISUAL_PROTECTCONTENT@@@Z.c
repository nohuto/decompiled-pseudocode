/*
 * XREFs of ?ProcessProtectContent@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_PROTECTCONTENT@@@Z @ 0x1801AE650
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A325C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18009F678 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 */

__int64 __fastcall CVisual::ProcessProtectContent(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_PROTECTCONTENT *a3)
{
  char v3; // r9

  v3 = *((_BYTE *)a3 + 8);
  if ( ((*((unsigned __int8 *)this + 95) >> 2) & 1) != (v3 != 0) )
  {
    *((_BYTE *)this + 95) = *((_BYTE *)this + 95) & 0xFB | (v3 != 0 ? 4 : 0);
    CVisual::PropagateFlags((__int64)this, 5u);
  }
  return 0LL;
}
