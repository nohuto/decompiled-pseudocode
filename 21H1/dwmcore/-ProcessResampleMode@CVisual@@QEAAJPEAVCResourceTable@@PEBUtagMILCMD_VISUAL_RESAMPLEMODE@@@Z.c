/*
 * XREFs of ?ProcessResampleMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_RESAMPLEMODE@@@Z @ 0x1800D2CD0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18007CF48 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?SetResampleMode@CVisual@@QEAAXW4Enum@CompositionResampleMode@@@Z @ 0x1800D2D00 (-SetResampleMode@CVisual@@QEAAXW4Enum@CompositionResampleMode@@@Z.c)
 */

__int64 __fastcall CVisual::ProcessResampleMode(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_RESAMPLEMODE *a3)
{
  CVisual::SetResampleMode(this, *((unsigned int *)a3 + 2));
  CVisual::PropagateFlags((__int64)this, 4u);
  return 0LL;
}
