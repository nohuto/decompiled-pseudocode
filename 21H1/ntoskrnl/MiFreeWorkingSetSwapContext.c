/*
 * XREFs of MiFreeWorkingSetSwapContext @ 0x140655F9C
 * Callers:
 *     MmInSwapWorkingSet @ 0x1402CBE58 (MmInSwapWorkingSet.c)
 *     MmOutSwapWorkingSet @ 0x1402CC124 (MmOutSwapWorkingSet.c)
 *     MiBeginProcessClean @ 0x1402CC91C (MiBeginProcessClean.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x1408D51B0 (MiInSwapSharedWorkingSetWorker.c)
 * Callees:
 *     MiFreeReservationRun @ 0x1407048F4 (MiFreeReservationRun.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeWorkingSetSwapContext(__int64 a1, __int64 a2)
{
  void *v4; // rcx
  void *v5; // rcx

  if ( *(_QWORD *)a2 )
    ExFreePoolWithTag(*(PVOID *)a2, 0);
  v4 = *(void **)(a2 + 8);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  v5 = *(void **)(a2 + 56);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  MiFreeReservationRun(a1, a2 + 64);
  ExFreePoolWithTag((PVOID)a2, 0);
}
