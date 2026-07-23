/*
 * XREFs of KiUpdateTotalCyclesCurrentThread @ 0x1402D4110
 * Callers:
 *     KeYieldExecution @ 0x14021B710 (KeYieldExecution.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x140225090 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     KiReduceByEffectiveIdleSmtSet @ 0x140234654 (KiReduceByEffectiveIdleSmtSet.c)
 *     KeDelayExecutionThread @ 0x140278A00 (KeDelayExecutionThread.c)
 *     KeSetPriorityThread @ 0x140279050 (KeSetPriorityThread.c)
 *     KeSetBasePriorityThread @ 0x14027A3D0 (KeSetBasePriorityThread.c)
 *     KiCompleteDirectSwitchThread @ 0x140284918 (KiCompleteDirectSwitchThread.c)
 *     KeBoostPriorityThread @ 0x140293860 (KeBoostPriorityThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x14029AC94 (KeSetPriorityAndQuantumProcess.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x14029D508 (KiRemoveThreadFromSchedulingGroup.c)
 *     PspRevertContainerImpersonation @ 0x1402C43E0 (PspRevertContainerImpersonation.c)
 *     KeSetActualBasePriorityThread @ 0x1402D4E00 (KeSetActualBasePriorityThread.c)
 *     KeRemovePriQueue @ 0x1402E6A20 (KeRemovePriQueue.c)
 *     KeUpdateTotalCyclesCurrentThread @ 0x140513708 (KeUpdateTotalCyclesCurrentThread.c)
 *     KiStartDebugAccumulation @ 0x14051E6AC (KiStartDebugAccumulation.c)
 * Callees:
 *     KiStartThreadCycleAccumulation @ 0x1402D5AB0 (KiStartThreadCycleAccumulation.c)
 *     KiEndThreadAccountingPeriod @ 0x1402D5BD0 (KiEndThreadAccountingPeriod.c)
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
    KiEndThreadAccountingPeriod(a1, a2);
  if ( a3 )
    *a3 = v6;
  KiStartThreadCycleAccumulation(a1, a2, 0LL);
  return v8;
}
