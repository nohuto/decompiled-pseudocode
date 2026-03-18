/*
 * XREFs of ?GetVisualEffectiveParentImpl@CManipulationContext@@CAPEBVCVisual@@PEBV2@PEA_N@Z @ 0x18023298C
 * Callers:
 *     ?BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCDesktopTree@@PEAVCInteraction@@IW4InputType@@_NPEAVCInteractionChain@@PEA_N@Z @ 0x180231E18 (-BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCDesktopTree@@PEAVCInteraction@.c)
 *     ?CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NW4InputType@@@Z @ 0x180232480 (-CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NW4InputType.c)
 *     ?GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z @ 0x1802326D4 (-GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z.c)
 *     ?IsInteractionDescendantOfVisual@CManipulationContext@@CA_NPEBVCInteraction@@PEBVCVisual@@@Z @ 0x180232D80 (-IsInteractionDescendantOfVisual@CManipulationContext@@CA_NPEBVCInteraction@@PEBVCVisual@@@Z.c)
 * Callees:
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x1800A2F98 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?IsStrictlyHoverPointerSource@CInteraction@@QEBA_NXZ @ 0x180232DD0 (-IsStrictlyHoverPointerSource@CInteraction@@QEBA_NXZ.c)
 */

const struct CVisual *__fastcall CManipulationContext::GetVisualEffectiveParentImpl(const struct CVisual *a1, bool *a2)
{
  const struct CVisual *v2; // rdi
  struct CInteraction *InteractionInternal; // rax
  struct CInteraction *v5; // rax
  char v6; // bl
  bool IsStrictlyHoverPointerSource; // al

  v2 = a1;
  InteractionInternal = CVisual::GetInteractionInternal(a1);
  if ( !InteractionInternal || (*((_BYTE *)InteractionInternal + 184) & 0x10) == 0 )
  {
    while ( 1 )
    {
      v2 = (const struct CVisual *)*((_QWORD *)v2 + 10);
      if ( !v2 )
        break;
      v5 = CVisual::GetInteractionInternal(v2);
      if ( v5 )
      {
        v6 = *((_BYTE *)v5 + 184);
        IsStrictlyHoverPointerSource = CInteraction::IsStrictlyHoverPointerSource(v5);
        if ( (v6 & 0x10) != 0 || IsStrictlyHoverPointerSource )
          continue;
      }
      return v2;
    }
  }
  return 0LL;
}
