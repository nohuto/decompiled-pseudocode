/*
 * XREFs of KiUpdateTotalCyclesCurrentThread @ 0x140332B00
 * Callers:
 *     KeRemovePriQueue @ 0x140225BC0 (KeRemovePriQueue.c)
 *     KeDelayExecutionThread @ 0x1402295B0 (KeDelayExecutionThread.c)
 *     KeSetActualBasePriorityThread @ 0x14026C9E0 (KeSetActualBasePriorityThread.c)
 *     PspRevertContainerImpersonation @ 0x14026D9F0 (PspRevertContainerImpersonation.c)
 *     KeBoostPriorityThread @ 0x1402C94E4 (KeBoostPriorityThread.c)
 *     KiReduceByEffectiveIdleSmtSet @ 0x140305054 (KiReduceByEffectiveIdleSmtSet.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x140311544 (KiRemoveThreadFromSchedulingGroup.c)
 *     KiCompleteDirectSwitchThread @ 0x140331058 (KiCompleteDirectSwitchThread.c)
 *     KeSetPriorityThread @ 0x1403310D0 (KeSetPriorityThread.c)
 *     KeSetBasePriorityThread @ 0x140332450 (KeSetBasePriorityThread.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x1403329C0 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1403355DC (KeSetPriorityAndQuantumProcess.c)
 *     KeYieldExecution @ 0x1403366C0 (KeYieldExecution.c)
 *     KeUpdateTotalCyclesCurrentThread @ 0x14050DA08 (KeUpdateTotalCyclesCurrentThread.c)
 *     KiStartDebugAccumulation @ 0x14051896C (KiStartDebugAccumulation.c)
 * Callees:
 *     KiStartThreadCycleAccumulation @ 0x14026D690 (KiStartThreadCycleAccumulation.c)
 *     KiEndThreadAccountingPeriod @ 0x14026D7B0 (KiEndThreadAccountingPeriod.c)
 */

unsigned __int64 __fastcall KiUpdateTotalCyclesCurrentThread(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rcx
  bool v10; // zf

  *(_BYTE *)(a1 + 32) = 1;
  v6 = __rdtsc();
  v7 = v6 - *(_QWORD *)(a1 + 32448);
  v8 = v7 + *(_QWORD *)(a2 + 72);
  v9 = v7 + *(unsigned int *)(a2 + 80);
  *(_QWORD *)(a2 + 72) = v8;
  if ( v9 > 0xFFFFFFFF )
    LODWORD(v9) = -1;
  *(_QWORD *)(a1 + 32448) = v6;
  v10 = (*(_BYTE *)(a2 + 2) & 0x3E) == 0;
  *(_DWORD *)(a2 + 80) = v9;
  if ( !v10 )
    KiEndThreadAccountingPeriod(a1, a2, v7);
  if ( a3 )
    *a3 = v6;
  KiStartThreadCycleAccumulation(a1, a2, 0);
  return v8;
}
