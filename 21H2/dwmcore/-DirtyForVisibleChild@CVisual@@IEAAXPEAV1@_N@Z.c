/*
 * XREFs of ?DirtyForVisibleChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x1801AD9AC
 * Callers:
 *     ?SetVisible@CVisual@@QEAAX_N@Z @ 0x18001F5C0 (-SetVisible@CVisual@@QEAAX_N@Z.c)
 * Callees:
 *     ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x18009EDE0 (-NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18009F678 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 */

void __fastcall CVisual::DirtyForVisibleChild(CVisual *this, struct CVisual *a2, char a3)
{
  CVisual::PropagateFlags((__int64)this, 1u);
  CVisual::PropagateFlags((__int64)a2, 4u);
  if ( !a3 )
    CVisual::NotifyMidManipulationUpdate((__int64)this, 2u, (__int64)a2);
}
