/*
 * XREFs of MiFreeReservationRuns @ 0x1406D056C
 * Callers:
 *     MmOutSwapWorkingSet @ 0x14030DD64 (MmOutSwapWorkingSet.c)
 *     MmOutSwapVirtualAddresses @ 0x1403100C0 (MmOutSwapVirtualAddresses.c)
 *     MiReserveWorkingSetSwapSpace @ 0x1406D28EC (MiReserveWorkingSetSwapSpace.c)
 * Callees:
 *     MiFreeReservationRun @ 0x14069BFF8 (MiFreeReservationRun.c)
 */

void __fastcall MiFreeReservationRuns(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 i; // rbx

  v2 = a2 + 80;
  for ( i = a2; i < v2; i += 16LL )
    MiFreeReservationRun(a1, i);
}
