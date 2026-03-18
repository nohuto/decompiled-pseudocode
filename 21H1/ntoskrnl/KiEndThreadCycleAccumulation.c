/*
 * XREFs of KiEndThreadCycleAccumulation @ 0x140330660
 * Callers:
 *     KeCpuSetReportParkedProcessors @ 0x14020245C (KeCpuSetReportParkedProcessors.c)
 *     KeDelayExecutionThread @ 0x1402295B0 (KeDelayExecutionThread.c)
 *     KiReadyOutSwappedThreads @ 0x140244A20 (KiReadyOutSwappedThreads.c)
 *     KiExitDispatcher @ 0x14024A750 (KiExitDispatcher.c)
 *     KeRemoveQueueEx @ 0x140268450 (KeRemoveQueueEx.c)
 *     PsImpersonateContainerOfThread @ 0x14026B3F0 (PsImpersonateContainerOfThread.c)
 *     KiProcessDeferredReadyList @ 0x14026D000 (KiProcessDeferredReadyList.c)
 *     KeBoostPriorityThread @ 0x1402C94E4 (KeBoostPriorityThread.c)
 *     KeSetLegacyAffinityThread @ 0x1402C9F30 (KeSetLegacyAffinityThread.c)
 *     KeSetSchedulingGroupRankBias @ 0x1402DC40C (KeSetSchedulingGroupRankBias.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140303FF4 (KiAbThreadUnboostCpuPriority.c)
 *     KiCheckForThreadDispatch @ 0x140329BD4 (KiCheckForThreadDispatch.c)
 *     KiGroupSchedulingGenerationEnd @ 0x140330300 (KiGroupSchedulingGenerationEnd.c)
 *     KiIdleSchedule @ 0x140330570 (KiIdleSchedule.c)
 *     KiQuantumEnd @ 0x1403312E0 (KiQuantumEnd.c)
 *     KeSetBasePriorityThread @ 0x140332450 (KeSetBasePriorityThread.c)
 *     KeYieldExecution @ 0x1403366C0 (KeYieldExecution.c)
 *     KiSchedulerApc @ 0x1403564C0 (KiSchedulerApc.c)
 *     KeUpdateThreadTag @ 0x140369290 (KeUpdateThreadTag.c)
 *     KiAbForceProcessLockEntry @ 0x14038C554 (KiAbForceProcessLockEntry.c)
 *     KeSetAffinityThread @ 0x140395ECC (KeSetAffinityThread.c)
 *     KeSetCpuSetsProcess @ 0x1403C1F94 (KeSetCpuSetsProcess.c)
 *     KeUpdateThreadCpuSets @ 0x1403C20BC (KeUpdateThreadCpuSets.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140516E38 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x1405170E0 (KeSetSelectedCpuSetsThread.c)
 *     KeSetThreadSchedulerAssist @ 0x140518AC8 (KeSetThreadSchedulerAssist.c)
 *     KiSetHeteroPolicyThread @ 0x14051A864 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiEndThreadAccountingPeriod @ 0x14026D7B0 (KiEndThreadAccountingPeriod.c)
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
    KiEndThreadAccountingPeriod(a1, a2, v6);
  result = v7;
  if ( a3 )
    *a3 = v5;
  return result;
}
