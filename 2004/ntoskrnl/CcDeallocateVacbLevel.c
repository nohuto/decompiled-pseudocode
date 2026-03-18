/*
 * XREFs of CcDeallocateVacbLevel @ 0x14035001C
 * Callers:
 *     CcSetVacbLargeOffset @ 0x1402C5060 (CcSetVacbLargeOffset.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140269FBC (ExFreeToNPagedLookasideList.c)
 */

void __fastcall CcDeallocateVacbLevel(PVOID Entry, int a2)
{
  struct _NPAGED_LOOKASIDE_LIST *v3; // rcx

  v3 = &CcVacbLevelWithBcbListHeadsLookasideList;
  if ( !a2 )
    v3 = &CcVacbLevelLookasideList;
  ExFreeToNPagedLookasideList(v3, Entry);
}
