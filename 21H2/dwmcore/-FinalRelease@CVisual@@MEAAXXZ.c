/*
 * XREFs of ?FinalRelease@CVisual@@MEAAXXZ @ 0x1800472A0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x180048F38 (-NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180049584 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z @ 0x1800E6EA8 (-SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z.c)
 */

void __fastcall CVisual::FinalRelease(CVisual *this)
{
  CInteraction *InteractionInternal; // rax

  InteractionInternal = CVisual::GetInteractionInternal(this);
  if ( InteractionInternal )
  {
    CInteraction::SetVisual(InteractionInternal, 0LL);
    CVisual::NotifyMidManipulationUpdate(this, 1LL, this);
    CVisual::ClearInteraction(this);
  }
}
