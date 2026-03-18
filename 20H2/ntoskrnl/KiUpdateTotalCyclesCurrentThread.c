/*
 * XREFs of KiUpdateTotalCyclesCurrentThread @ 0x1402DC410
 * Callers:
 *     PspRevertContainerImpersonation @ 0x14027F410 (PspRevertContainerImpersonation.c)
 *     KeRemovePriQueue @ 0x14028E810 (KeRemovePriQueue.c)
 *     KeSetActualBasePriorityThread @ 0x1402BE010 (KeSetActualBasePriorityThread.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x1402DA1B0 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     KeDelayExecutionThread @ 0x1402DA450 (KeDelayExecutionThread.c)
 *     KeSetPriorityThread @ 0x1402DAB40 (KeSetPriorityThread.c)
 *     KeSetBasePriorityThread @ 0x1402DBEC0 (KeSetBasePriorityThread.c)
 *     KiCompleteDirectSwitchThread @ 0x1402DCDC8 (KiCompleteDirectSwitchThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1402E8FE4 (KeSetPriorityAndQuantumProcess.c)
 *     KeYieldExecution @ 0x140302FA0 (KeYieldExecution.c)
 *     KiReduceByEffectiveIdleSmtSet @ 0x140313918 (KiReduceByEffectiveIdleSmtSet.c)
 *     KeBoostPriorityThread @ 0x140336FA0 (KeBoostPriorityThread.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x14035F0EC (KiRemoveThreadFromSchedulingGroup.c)
 *     KeUpdateTotalCyclesCurrentThread @ 0x140511988 (KeUpdateTotalCyclesCurrentThread.c)
 *     KiStartDebugAccumulation @ 0x14051C98C (KiStartDebugAccumulation.c)
 * Callees:
 *     KiStartThreadCycleAccumulation @ 0x1402BECC0 (KiStartThreadCycleAccumulation.c)
 *     KiEndThreadAccountingPeriod @ 0x1402BEDE0 (KiEndThreadAccountingPeriod.c)
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
