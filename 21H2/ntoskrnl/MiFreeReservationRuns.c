/*
 * XREFs of MiFreeReservationRuns @ 0x1407106D0
 * Callers:
 *     MmOutSwapVirtualAddresses @ 0x14035BCDC (MmOutSwapVirtualAddresses.c)
 *     MmOutSwapWorkingSet @ 0x14035C7D0 (MmOutSwapWorkingSet.c)
 *     MiReserveWorkingSetSwapSpace @ 0x14070FCE8 (MiReserveWorkingSetSwapSpace.c)
 * Callees:
 *     MiFreeReservationRun @ 0x140645CA8 (MiFreeReservationRun.c)
 */

void __fastcall MiFreeReservationRuns(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 i; // rbx

  v2 = a2 + 80;
  for ( i = a2; i < v2; i += 16LL )
    MiFreeReservationRun(a1, i);
}
