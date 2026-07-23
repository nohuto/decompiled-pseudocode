/*
 * XREFs of KiCheckMaxOverQuotaTransition @ 0x1402344D0
 * Callers:
 *     KiGroupSchedulingQuantumEnd @ 0x140279D50 (KiGroupSchedulingQuantumEnd.c)
 *     KiQueueReadyThread @ 0x14027A920 (KiQueueReadyThread.c)
 *     KiSwapThread @ 0x140351420 (KiSwapThread.c)
 * Callees:
 *     KiChargeSchedulingGroupCycleTime @ 0x14027B610 (KiChargeSchedulingGroupCycleTime.c)
 */

char __fastcall KiCheckMaxOverQuotaTransition(__int64 a1, __int64 a2)
{
  if ( (*(_BYTE *)(a1 + 112) & 0x12) != 0 || !(unsigned __int8)KiChargeSchedulingGroupCycleTime(a2, a1) )
    return 0;
  *(_BYTE *)(a1 + 112) |= 2u;
  return 1;
}
