/*
 * XREFs of MiFreeReservationRuns @ 0x1406BED20
 * Callers:
 *     MmOutSwapVirtualAddresses @ 0x1402A0C0C (MmOutSwapVirtualAddresses.c)
 *     MmOutSwapWorkingSet @ 0x1402A1700 (MmOutSwapWorkingSet.c)
 *     MiReserveWorkingSetSwapSpace @ 0x1406BE338 (MiReserveWorkingSetSwapSpace.c)
 * Callees:
 *     MiFreeReservationRun @ 0x14063AA94 (MiFreeReservationRun.c)
 */

void __fastcall MiFreeReservationRuns(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 i; // rbx

  v2 = a2 + 80;
  for ( i = a2; i < v2; i += 16LL )
    MiFreeReservationRun(a1, i);
}
