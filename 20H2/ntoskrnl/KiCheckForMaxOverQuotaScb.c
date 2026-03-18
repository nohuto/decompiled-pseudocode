/*
 * XREFs of KiCheckForMaxOverQuotaScb @ 0x1402D9A24
 * Callers:
 *     KiSchedulerApc @ 0x1402D7C50 (KiSchedulerApc.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1402DB840 (KiGroupSchedulingQuantumEnd.c)
 *     KiQueueReadyThread @ 0x1402DC4D0 (KiQueueReadyThread.c)
 *     KiFindReadyThread @ 0x1402E9C40 (KiFindReadyThread.c)
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
