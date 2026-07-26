/*
 * XREFs of PplpFreeOneLookasideList @ 0x1C00C56D8
 * Callers:
 *     PplCreateLookasideList @ 0x1C0034424 (PplCreateLookasideList.c)
 *     PplDestroyLookasideList @ 0x1C00C5470 (PplDestroyLookasideList.c)
 *     PplHotAddProcCompleteNotify @ 0x1C00C5518 (PplHotAddProcCompleteNotify.c)
 *     PplHotAddProcStartNotify @ 0x1C00C55C4 (PplHotAddProcStartNotify.c)
 * Callees:
 *     <none>
 */

void __fastcall PplpFreeOneLookasideList(struct _LOOKASIDE_LIST_EX *P, ULONG Tag)
{
  if ( LOBYTE(P[1].L.Depth) )
    ExDeleteLookasideListEx(P);
  ExFreePoolWithTag(P, Tag);
}
