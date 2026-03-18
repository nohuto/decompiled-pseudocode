/*
 * XREFs of ?ProcessForceLowColor@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_FORCELOWCOLOR@@@Z @ 0x1801AFB5C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x1800A28A8 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?SetColorSpace@CVisual@@QEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801B008C (-SetColorSpace@CVisual@@QEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 */

__int64 __fastcall CVisual::ProcessForceLowColor(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_FORCELOWCOLOR *a3)
{
  CVisual::SetColorSpace(this, (enum DXGI_COLOR_SPACE_TYPE)(*((_BYTE *)a3 + 8) == 0));
  CVisual::PropagateFlags((__int64)this, 4u);
  return 0LL;
}
