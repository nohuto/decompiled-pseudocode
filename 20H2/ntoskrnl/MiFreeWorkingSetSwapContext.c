/*
 * XREFs of MiFreeWorkingSetSwapContext @ 0x1406F0B5C
 * Callers:
 *     MmInSwapWorkingSet @ 0x140339228 (MmInSwapWorkingSet.c)
 *     MmOutSwapWorkingSet @ 0x1403394F4 (MmOutSwapWorkingSet.c)
 *     MiBeginProcessClean @ 0x14033B300 (MiBeginProcessClean.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x1408DC340 (MiInSwapSharedWorkingSetWorker.c)
 * Callees:
 *     MiFreeReservationRun @ 0x1406F0C14 (MiFreeReservationRun.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
