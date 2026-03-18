/*
 * XREFs of ?DirtyForVisibleChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x1800488D8
 * Callers:
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x1800487B4 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ?SetVisible@CVisual@@QEAAX_N@Z @ 0x1800E69D0 (-SetVisible@CVisual@@QEAAX_N@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180048C04 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x180048F38 (-NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z.c)
 */

void __fastcall CVisual::DirtyForVisibleChild(CVisual *this, struct CVisual *a2, char a3)
{
  CVisual::PropagateFlags(this, 17LL);
  CVisual::PropagateFlags(a2, 4LL);
  if ( !a3 )
    CVisual::NotifyMidManipulationUpdate(this, 2LL, a2);
}
