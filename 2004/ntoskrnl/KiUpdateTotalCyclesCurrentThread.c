/*
 * XREFs of KiUpdateTotalCyclesCurrentThread @ 0x1402ED9C0
 * Callers:
 *     KeSetActualBasePriorityThread @ 0x140213990 (KeSetActualBasePriorityThread.c)
 *     PspRevertContainerImpersonation @ 0x1402149A0 (PspRevertContainerImpersonation.c)
 *     KeRemovePriQueue @ 0x1402B8840 (KeRemovePriQueue.c)
 *     KeDelayExecutionThread @ 0x1402BC230 (KeDelayExecutionThread.c)
 *     KiCompleteDirectSwitchThread @ 0x1402EBF18 (KiCompleteDirectSwitchThread.c)
 *     KeSetPriorityThread @ 0x1402EBF90 (KeSetPriorityThread.c)
 *     KeSetBasePriorityThread @ 0x1402ED310 (KeSetBasePriorityThread.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x1402ED880 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1402F049C (KeSetPriorityAndQuantumProcess.c)
 *     KeYieldExecution @ 0x1402F1580 (KeYieldExecution.c)
 *     KeBoostPriorityThread @ 0x14030AEC4 (KeBoostPriorityThread.c)
 *     KiReduceByEffectiveIdleSmtSet @ 0x140342AB4 (KiReduceByEffectiveIdleSmtSet.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x14034E618 (KiRemoveThreadFromSchedulingGroup.c)
 *     KeUpdateTotalCyclesCurrentThread @ 0x14050E058 (KeUpdateTotalCyclesCurrentThread.c)
 *     KiStartDebugAccumulation @ 0x140518FBC (KiStartDebugAccumulation.c)
 * Callees:
 *     KiStartThreadCycleAccumulation @ 0x140214640 (KiStartThreadCycleAccumulation.c)
 *     KiEndThreadAccountingPeriod @ 0x140214760 (KiEndThreadAccountingPeriod.c)
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
