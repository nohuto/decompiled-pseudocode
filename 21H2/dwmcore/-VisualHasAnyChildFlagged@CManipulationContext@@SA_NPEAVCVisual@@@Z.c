/*
 * XREFs of ?VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z @ 0x180185408
 * Callers:
 *     ?QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x18017E7E8 (-QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 *     ?CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NW4InputType@@@Z @ 0x1801826E0 (-CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NW4InputType.c)
 *     ?PropagateVisualManipulationNotificationFlag@CManipulationContext@@SAXPEAVCVisual@@_NPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@I@Z @ 0x1801839D8 (-PropagateVisualManipulationNotificationFlag@CManipulationContext@@SAXPEAVCVisual@@_NPEAV-$vecto.c)
 * Callees:
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x180062474 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800D18A0 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 */

char __fastcall CManipulationContext::VisualHasAnyChildFlagged(struct CVisual *a1)
{
  CPtrArrayBase *v1; // rbx
  unsigned __int64 Count; // rax
  unsigned __int64 v3; // rdx
  __int64 *v4; // rcx
  char v5; // r10
  unsigned __int64 v6; // rax
  char v7; // r10

  v1 = (struct CVisual *)((char *)a1 + 80);
  while ( 1 )
  {
    Count = CPtrArrayBase::GetCount(v1);
    if ( v3 >= Count )
      break;
    v6 = CPtrArrayBase::operator[](v4, v3);
    if ( v6 && *(char *)(v6 + 101) < v7 )
      return 1;
  }
  return v5;
}
