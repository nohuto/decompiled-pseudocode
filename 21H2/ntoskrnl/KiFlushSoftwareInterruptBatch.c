/*
 * XREFs of KiFlushSoftwareInterruptBatch @ 0x140340300
 * Callers:
 *     KeSetSchedulingGroupRankBias @ 0x140207F60 (KeSetSchedulingGroupRankBias.c)
 *     KeCpuSetReportParkedProcessors @ 0x14020E1DC (KeCpuSetReportParkedProcessors.c)
 *     KiSetLegacyAffinityThread @ 0x14020E6EC (KiSetLegacyAffinityThread.c)
 *     KeSetUserAffinityThread @ 0x14020E9E8 (KeSetUserAffinityThread.c)
 *     KiDirectSwitchThread @ 0x14020F360 (KiDirectSwitchThread.c)
 *     KiInswapAndReadyThread @ 0x140211410 (KiInswapAndReadyThread.c)
 *     KiAbThreadUnboostCpuPriority @ 0x14022B5D8 (KiAbThreadUnboostCpuPriority.c)
 *     KiNormalPriorityReadyScan @ 0x1402447EC (KiNormalPriorityReadyScan.c)
 *     KeBoostPriorityThread @ 0x140255110 (KeBoostPriorityThread.c)
 *     KiQuantumEnd @ 0x14028FFD0 (KiQuantumEnd.c)
 *     KiFastReadyThread @ 0x140294574 (KiFastReadyThread.c)
 *     KiExecuteAllDpcs @ 0x1402A9790 (KiExecuteAllDpcs.c)
 *     KiExitDispatcher @ 0x1402B0820 (KiExitDispatcher.c)
 *     KiSwapThread @ 0x1402B3140 (KiSwapThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x1402B4130 (KiSearchForNewThreadOnProcessor.c)
 *     KiAbProcessContextSwitch @ 0x1402B4EC0 (KiAbProcessContextSwitch.c)
 *     KiQueueReadyThread @ 0x1402B9970 (KiQueueReadyThread.c)
 *     KeSetBasePriorityThread @ 0x1402EBF30 (KeSetBasePriorityThread.c)
 *     PsImpersonateContainerOfThread @ 0x14030F330 (PsImpersonateContainerOfThread.c)
 *     KiProcessThreadWaitList @ 0x140340390 (KiProcessThreadWaitList.c)
 *     KiSearchForNewThread @ 0x140343DC0 (KiSearchForNewThread.c)
 *     KiProcessDeferredReadyList @ 0x140344800 (KiProcessDeferredReadyList.c)
 *     KiAbDeferredProcessingWorker @ 0x140359020 (KiAbDeferredProcessingWorker.c)
 *     KiAbApplyWakeupBoost @ 0x1403597CC (KiAbApplyWakeupBoost.c)
 *     KiSetThreadSchedulingGroup @ 0x14035EE9C (KiSetThreadSchedulingGroup.c)
 *     KiAbForceProcessLockEntry @ 0x14039C4BC (KiAbForceProcessLockEntry.c)
 *     KiProcessPendingForegroundBoosts @ 0x14039EE50 (KiProcessPendingForegroundBoosts.c)
 *     KeSetCpuSetsProcess @ 0x1403D2D98 (KeSetCpuSetsProcess.c)
 *     KeUpdateThreadCpuSets @ 0x1403D2F9C (KeUpdateThreadCpuSets.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x14056B410 (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KeSetSystemMultipleGroupAffinityThread @ 0x14056B9FC (KeSetSystemMultipleGroupAffinityThread.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140572774 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140572A90 (KeSetSelectedCpuSetsThread.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x140574B54 (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiSetHeteroPolicyThread @ 0x140574FA4 (KiSetHeteroPolicyThread.c)
 *     KeSetThreadSchedulerAssist @ 0x140576AA4 (KeSetThreadSchedulerAssist.c)
 *     KiUpdateVpBackingThreadPriorityDpcRoutine @ 0x1405777C0 (KiUpdateVpBackingThreadPriorityDpcRoutine.c)
 *     KeTransitionProcessorParkState @ 0x14057C888 (KeTransitionProcessorParkState.c)
 * Callees:
 *     HalRequestIpiSpecifyVector @ 0x140300100 (HalRequestIpiSpecifyVector.c)
 *     HalSendSoftwareInterrupt @ 0x140342650 (HalSendSoftwareInterrupt.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall KiFlushSoftwareInterruptBatch(unsigned __int8 *a1)
{
  __int64 result; // rax
  bool v3; // zf
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // r8d

  result = a1[1];
  if ( (_BYTE)result )
  {
    v3 = (_BYTE)result == 1;
    CurrentPrcb = KeGetCurrentPrcb();
    if ( v3 )
    {
      v5 = *a1;
      v6 = *((unsigned int *)a1 + 1);
      ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
      result = HalSendSoftwareInterrupt(v6, v5);
    }
    else
    {
      v7 = 47;
      if ( *a1 == 1 )
        v7 = 31;
      ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
      result = HalRequestIpiSpecifyVector(0, (_WORD *)a1 + 4, v7);
    }
    if ( a1[1] == 2 )
    {
      *((_QWORD *)a1 + 1) = 2097153LL;
      result = (__int64)memset(a1 + 16, 0, 0x100uLL);
    }
    a1[1] = 0;
    *((_DWORD *)a1 + 1) = 0xFFFF;
  }
  return result;
}
