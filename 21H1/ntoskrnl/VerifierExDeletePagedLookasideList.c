/*
 * XREFs of VerifierExDeletePagedLookasideList @ 0x1409DE100
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     ViLookasideDelete @ 0x1409DE66C (ViLookasideDelete.c)
 */

__int64 __fastcall VerifierExDeletePagedLookasideList(ULONG_PTR a1)
{
  ViLookasideDelete(a1);
  return ((__int64 (__fastcall *)(ULONG_PTR))pXdvExDeletePagedLookasideList)(a1);
}
