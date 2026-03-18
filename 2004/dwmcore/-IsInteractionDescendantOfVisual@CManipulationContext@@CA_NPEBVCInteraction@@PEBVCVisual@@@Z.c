/*
 * XREFs of ?IsInteractionDescendantOfVisual@CManipulationContext@@CA_NPEBVCInteraction@@PEBVCVisual@@@Z @ 0x180232D80
 * Callers:
 *     ?InvalidateMCs@CManipulationContext@@SAXPEAUMCCollections@@PEAVCVisual@@PEAVCInteraction@@W4MidManipulationUpdateType@@PEAI@Z @ 0x180232B70 (-InvalidateMCs@CManipulationContext@@SAXPEAUMCCollections@@PEAVCVisual@@PEAVCInteraction@@W4MidM.c)
 *     ?TotalContactsCapturedUnderVisual@CManipulationContext@@SAIPEBUMCCollections@@PEAVCVisual@@PEAPEAVCInteraction@@@Z @ 0x180234CC0 (-TotalContactsCapturedUnderVisual@CManipulationContext@@SAIPEBUMCCollections@@PEAVCVisual@@PEAPE.c)
 * Callees:
 *     ?GetVisualEffectiveParentImpl@CManipulationContext@@CAPEBVCVisual@@PEBV2@PEA_N@Z @ 0x18023298C (-GetVisualEffectiveParentImpl@CManipulationContext@@CAPEBVCVisual@@PEBV2@PEA_N@Z.c)
 */

bool __fastcall CManipulationContext::IsInteractionDescendantOfVisual(
        const struct CInteraction *a1,
        const struct CVisual *a2)
{
  __int64 v2; // r8
  const struct CVisual *VisualEffectiveParentImpl; // rax
  bool i; // cl
  const struct CVisual *v6; // rbx

  v2 = *((_QWORD *)a1 + 13);
  VisualEffectiveParentImpl = 0LL;
  if ( v2 )
    VisualEffectiveParentImpl = *(const struct CVisual **)(v2 + 16);
  for ( i = 0; VisualEffectiveParentImpl; i = v6 == a2 )
  {
    v6 = VisualEffectiveParentImpl;
    if ( i )
      break;
    VisualEffectiveParentImpl = CManipulationContext::GetVisualEffectiveParentImpl(
                                  VisualEffectiveParentImpl,
                                  (bool *)a2);
  }
  return i;
}
