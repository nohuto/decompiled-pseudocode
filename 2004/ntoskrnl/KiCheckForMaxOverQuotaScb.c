/*
 * XREFs of KiCheckForMaxOverQuotaScb @ 0x1402EE534
 * Callers:
 *     KiGroupSchedulingQuantumEnd @ 0x1402ECC90 (KiGroupSchedulingQuantumEnd.c)
 *     KiQueueReadyThread @ 0x1402EDF50 (KiQueueReadyThread.c)
 *     KiSchedulerApc @ 0x1402FA4E0 (KiSchedulerApc.c)
 *     KiFindReadyThread @ 0x14032BB40 (KiFindReadyThread.c)
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
