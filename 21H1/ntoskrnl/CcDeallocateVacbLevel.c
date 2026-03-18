/*
 * XREFs of CcDeallocateVacbLevel @ 0x1402EF350
 * Callers:
 *     CcSetVacbLargeOffset @ 0x140232230 (CcSetVacbLargeOffset.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1402D7298 (ExFreeToNPagedLookasideList.c)
 */

void __fastcall CcDeallocateVacbLevel(PVOID Entry, int a2)
{
  struct _NPAGED_LOOKASIDE_LIST *v3; // rcx

  v3 = &CcVacbLevelWithBcbListHeadsLookasideList;
  if ( !a2 )
    v3 = &CcVacbLevelLookasideList;
  ExFreeToNPagedLookasideList(v3, Entry);
}
