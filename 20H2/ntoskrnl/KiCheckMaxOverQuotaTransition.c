/*
 * XREFs of KiCheckMaxOverQuotaTransition @ 0x1402D8DD8
 * Callers:
 *     KiSwapThread @ 0x14021C4C0 (KiSwapThread.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1402DB840 (KiGroupSchedulingQuantumEnd.c)
 *     KiQueueReadyThread @ 0x1402DC4D0 (KiQueueReadyThread.c)
 * Callees:
 *     KiChargeSchedulingGroupCycleTime @ 0x1402D9730 (KiChargeSchedulingGroupCycleTime.c)
 */

char __fastcall KiCheckMaxOverQuotaTransition(__int64 a1, __int64 a2)
{
  if ( (*(_BYTE *)(a1 + 112) & 0x12) != 0 || !(unsigned __int8)KiChargeSchedulingGroupCycleTime(a2, a1) )
    return 0;
  *(_BYTE *)(a1 + 112) |= 2u;
  return 1;
}
