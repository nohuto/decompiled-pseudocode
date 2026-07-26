/*
 * XREFs of PplpFreeOneLookasideList @ 0x1C00C5568
 * Callers:
 *     PplCreateLookasideList @ 0x1C00340C4 (PplCreateLookasideList.c)
 *     PplDestroyLookasideList @ 0x1C00C5300 (PplDestroyLookasideList.c)
 *     PplHotAddProcCompleteNotify @ 0x1C00C53A8 (PplHotAddProcCompleteNotify.c)
 *     PplHotAddProcStartNotify @ 0x1C00C5454 (PplHotAddProcStartNotify.c)
 * Callees:
 *     <none>
 */

void __fastcall PplpFreeOneLookasideList(struct _LOOKASIDE_LIST_EX *P, ULONG Tag)
{
  if ( LOBYTE(P[1].L.Depth) )
    ExDeleteLookasideListEx(P);
  ExFreePoolWithTag(P, Tag);
}
