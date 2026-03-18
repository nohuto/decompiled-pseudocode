/*
 * XREFs of ?VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z @ 0x1802377FC
 * Callers:
 *     ?QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x1802279CC (-QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 *     ?CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NW4InputType@@@Z @ 0x180234E40 (-CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NW4InputType.c)
 *     ?PropagateVisualManipulationNotificationFlag@CManipulationContext@@SAXPEAVCVisual@@_NI@Z @ 0x180235FB8 (-PropagateVisualManipulationNotificationFlag@CManipulationContext@@SAXPEAVCVisual@@_NI@Z.c)
 * Callees:
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800B3290 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800B32C8 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 */

char __fastcall CManipulationContext::VisualHasAnyChildFlagged(struct CVisual *a1)
{
  CPtrArrayBase *v1; // rcx
  unsigned __int64 Count; // rax
  CPtrArrayBase *v3; // rcx
  char v4; // r8
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax

  v1 = (struct CVisual *)((char *)a1 + 72);
  while ( 1 )
  {
    Count = CPtrArrayBase::GetCount(v1);
    if ( v5 >= Count )
      break;
    v6 = CPtrArrayBase::operator[](v3);
    if ( v6 && (*(_BYTE *)(v6 + 94) & 1) != 0 )
      return 1;
  }
  return v4;
}
