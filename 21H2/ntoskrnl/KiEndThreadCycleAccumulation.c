/*
 * XREFs of KiEndThreadCycleAccumulation @ 0x1402D28D0
 * Callers:
 *     KeSetSchedulingGroupRankBias @ 0x140205628 (KeSetSchedulingGroupRankBias.c)
 *     KiAbThreadUnboostCpuPriority @ 0x1402119C0 (KiAbThreadUnboostCpuPriority.c)
 *     KeYieldExecution @ 0x14021B710 (KeYieldExecution.c)
 *     KeCpuSetReportParkedProcessors @ 0x140228EDC (KeCpuSetReportParkedProcessors.c)
 *     KiCheckForThreadDispatch @ 0x140266354 (KiCheckForThreadDispatch.c)
 *     KiSchedulerApc @ 0x140267BA0 (KiSchedulerApc.c)
 *     KiIdleSchedule @ 0x140278140 (KiIdleSchedule.c)
 *     KeDelayExecutionThread @ 0x140278A00 (KeDelayExecutionThread.c)
 *     KiQuantumEnd @ 0x140279260 (KiQuantumEnd.c)
 *     KeSetBasePriorityThread @ 0x14027A3D0 (KeSetBasePriorityThread.c)
 *     KiGroupSchedulingGenerationEnd @ 0x14027AF4C (KiGroupSchedulingGenerationEnd.c)
 *     KeBoostPriorityThread @ 0x140293860 (KeBoostPriorityThread.c)
 *     KeSetLegacyAffinityThread @ 0x14029DE40 (KeSetLegacyAffinityThread.c)
 *     KeRemoveQueueEx @ 0x1402A9110 (KeRemoveQueueEx.c)
 *     PsImpersonateContainerOfThread @ 0x1402C0590 (PsImpersonateContainerOfThread.c)
 *     KiProcessDeferredReadyList @ 0x1402D5420 (KiProcessDeferredReadyList.c)
 *     KiReadyOutSwappedThreads @ 0x1402ECCB0 (KiReadyOutSwappedThreads.c)
 *     KiExitDispatcher @ 0x14034E810 (KiExitDispatcher.c)
 *     KeUpdateThreadTag @ 0x14036C100 (KeUpdateThreadTag.c)
 *     KiAbForceProcessLockEntry @ 0x14038FBD4 (KiAbForceProcessLockEntry.c)
 *     KeSetAffinityThread @ 0x14039951C (KeSetAffinityThread.c)
 *     KeSetCpuSetsProcess @ 0x1403C6154 (KeSetCpuSetsProcess.c)
 *     KeUpdateThreadCpuSets @ 0x1403C627C (KeUpdateThreadCpuSets.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x14051CB78 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x14051CE20 (KeSetSelectedCpuSetsThread.c)
 *     KeSetThreadSchedulerAssist @ 0x14051E808 (KeSetThreadSchedulerAssist.c)
 *     KiSetHeteroPolicyThread @ 0x1405205A4 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiEndThreadAccountingPeriod @ 0x1402D5BD0 (KiEndThreadAccountingPeriod.c)
 */

unsigned __int64 __fastcall KiEndThreadCycleAccumulation(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rcx
  bool v9; // zf
  unsigned __int64 result; // rax

  *(_BYTE *)(a1 + 32) = 1;
  v5 = __rdtsc();
  v6 = v5 - *(_QWORD *)(a1 + 32448);
  v7 = v6 + *(_QWORD *)(a2 + 72);
  v8 = v6 + *(unsigned int *)(a2 + 80);
  *(_QWORD *)(a2 + 72) = v7;
  *(_QWORD *)(a1 + 32448) = v5;
  if ( v8 > 0xFFFFFFFF )
    LODWORD(v8) = -1;
  v9 = (*(_BYTE *)(a2 + 2) & 0x3E) == 0;
  *(_DWORD *)(a2 + 80) = v8;
  if ( !v9 )
    KiEndThreadAccountingPeriod(a1, a2);
  result = v7;
  if ( a3 )
    *a3 = v5;
  return result;
}
