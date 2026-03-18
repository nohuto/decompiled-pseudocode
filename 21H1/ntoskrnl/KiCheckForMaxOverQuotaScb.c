/*
 * XREFs of KiCheckForMaxOverQuotaScb @ 0x140333674
 * Callers:
 *     KiGroupSchedulingQuantumEnd @ 0x140331DD0 (KiGroupSchedulingQuantumEnd.c)
 *     KiQueueReadyThread @ 0x140333090 (KiQueueReadyThread.c)
 *     KiFindReadyThread @ 0x140337CC0 (KiFindReadyThread.c)
 *     KiSchedulerApc @ 0x1403564C0 (KiSchedulerApc.c)
 * Callees:
 *     <none>
 */

char __fastcall KiCheckForMaxOverQuotaScb(__int64 a1)
{
  while ( (*(_BYTE *)(a1 + 112) & 2) == 0 )
  {
    a1 = *(_QWORD *)(a1 + 408);
    if ( !a1 )
      return 0;
  }
  return 1;
}
