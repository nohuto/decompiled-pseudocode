/*
 * XREFs of ?ProcessSetExcludeSubtree@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETEXCLUDESUBTREE@@@Z @ 0x1800D6848
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x1800A28A8 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetExcludeSubtree(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETEXCLUDESUBTREE *a3)
{
  char v3; // r9
  char v4; // r8

  v3 = *((_BYTE *)a3 + 8) != 0;
  v4 = (*((_BYTE *)this + 94) & 4) != 0;
  *((_BYTE *)this + 94) = *((_BYTE *)this + 94) & 0xFB | (4 * v3);
  if ( v4 != v3 )
    CVisual::PropagateFlags((__int64)this, 4u);
  return 0LL;
}
