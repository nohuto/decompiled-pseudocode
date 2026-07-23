/*
 * XREFs of KiCheckForMaxOverQuotaScb @ 0x14027AF28
 * Callers:
 *     KiSchedulerApc @ 0x140267BA0 (KiSchedulerApc.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140279D50 (KiGroupSchedulingQuantumEnd.c)
 *     KiQueueReadyThread @ 0x14027A920 (KiQueueReadyThread.c)
 *     KiFindReadyThread @ 0x14029B920 (KiFindReadyThread.c)
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
