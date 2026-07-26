/*
 * XREFs of PplpFreeOneLookasideList @ 0x1C00C50A8
 * Callers:
 *     PplCreateLookasideList @ 0x1C0033E84 (PplCreateLookasideList.c)
 *     PplDestroyLookasideList @ 0x1C00C4E40 (PplDestroyLookasideList.c)
 *     PplHotAddProcCompleteNotify @ 0x1C00C4EE8 (PplHotAddProcCompleteNotify.c)
 *     PplHotAddProcStartNotify @ 0x1C00C4F94 (PplHotAddProcStartNotify.c)
 * Callees:
 *     <none>
 */

void __fastcall PplpFreeOneLookasideList(struct _LOOKASIDE_LIST_EX *P, ULONG Tag)
{
  if ( LOBYTE(P[1].L.Depth) )
    ExDeleteLookasideListEx(P);
  ExFreePoolWithTag(P, Tag);
}
