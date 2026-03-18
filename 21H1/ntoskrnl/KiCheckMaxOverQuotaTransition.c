/*
 * XREFs of KiCheckMaxOverQuotaTransition @ 0x1403348C4
 * Callers:
 *     KiSwapThread @ 0x140265350 (KiSwapThread.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140331DD0 (KiGroupSchedulingQuantumEnd.c)
 *     KiQueueReadyThread @ 0x140333090 (KiQueueReadyThread.c)
 * Callees:
 *     KiChargeSchedulingGroupCycleTime @ 0x140333020 (KiChargeSchedulingGroupCycleTime.c)
 */

char __fastcall KiCheckMaxOverQuotaTransition(__int64 a1, volatile signed __int64 *a2)
{
  if ( (*(_BYTE *)(a1 + 112) & 0x12) != 0 || !KiChargeSchedulingGroupCycleTime(a2, (_QWORD *)a1) )
    return 0;
  *(_BYTE *)(a1 + 112) |= 2u;
  return 1;
}
