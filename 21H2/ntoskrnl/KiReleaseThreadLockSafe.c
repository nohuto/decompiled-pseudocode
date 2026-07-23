/*
 * XREFs of KiReleaseThreadLockSafe @ 0x1402121F0
 * Callers:
 *     KiAbThreadUnboostCpuPriority @ 0x1402119C0 (KiAbThreadUnboostCpuPriority.c)
 *     KeYieldExecution @ 0x14021B710 (KeYieldExecution.c)
 *     KiPriQueueThreadPriorityChanged @ 0x14021C900 (KiPriQueueThreadPriorityChanged.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x14021CA5C (KiActivateWaiterQueueWithNoLocks.c)
 *     KeQueryBasePriorityThread @ 0x140225600 (KeQueryBasePriorityThread.c)
 *     KeRundownQueueCommon @ 0x140227F1C (KeRundownQueueCommon.c)
 *     KeDeleteMutant @ 0x140228198 (KeDeleteMutant.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x140229114 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiWaitSatisfyAny @ 0x14022A9EC (KiWaitSatisfyAny.c)
 *     KiTryToUpdateVPBackingThreadPriority @ 0x14023DB64 (KiTryToUpdateVPBackingThreadPriority.c)
 *     KeRemoveQueueApc @ 0x1402432CC (KeRemoveQueueApc.c)
 *     MiSwapStackPage @ 0x14024483C (MiSwapStackPage.c)
 *     KiAbThreadInsertList @ 0x14024652C (KiAbThreadInsertList.c)
 *     KiSwitchPriQueue @ 0x14024D43C (KiSwitchPriQueue.c)
 *     KeQueryAffinityThread @ 0x1402504F0 (KeQueryAffinityThread.c)
 *     KeTestAlertThread @ 0x1402654D0 (KeTestAlertThread.c)
 *     KiRundownMutants @ 0x1402655F0 (KiRundownMutants.c)
 *     KiFastReadyThread @ 0x140266130 (KiFastReadyThread.c)
 *     KiFastExitThreadWait @ 0x1402661E8 (KiFastExitThreadWait.c)
 *     KeTerminateThread @ 0x140266490 (KeTerminateThread.c)
 *     KiFlushQueueApc @ 0x1402668F8 (KiFlushQueueApc.c)
 *     KiResumeThread @ 0x140267870 (KiResumeThread.c)
 *     KiSchedulerApc @ 0x140267BA0 (KiSchedulerApc.c)
 *     KiAcquireReleaseThreadLock @ 0x140267FF0 (KiAcquireReleaseThreadLock.c)
 *     KiSuspendThread @ 0x1402682C4 (KiSuspendThread.c)
 *     KiInsertDeferredPreemptionApc @ 0x140268584 (KiInsertDeferredPreemptionApc.c)
 *     KeDelayExecutionThread @ 0x140278A00 (KeDelayExecutionThread.c)
 *     KeSetPriorityThread @ 0x140279050 (KeSetPriorityThread.c)
 *     KiQuantumEnd @ 0x140279260 (KiQuantumEnd.c)
 *     KeSetBasePriorityThread @ 0x14027A3D0 (KeSetBasePriorityThread.c)
 *     KiQueueReadyThread @ 0x14027A920 (KiQueueReadyThread.c)
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     KeAlertThreadByThreadId @ 0x14027E000 (KeAlertThreadByThreadId.c)
 *     KeInsertQueueApc @ 0x14027E260 (KeInsertQueueApc.c)
 *     KeBoostPriorityThread @ 0x140293860 (KeBoostPriorityThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x14029AC94 (KeSetPriorityAndQuantumProcess.c)
 *     KiProcessPendingForegroundBoosts @ 0x14029B220 (KiProcessPendingForegroundBoosts.c)
 *     KeRequestTerminationThread @ 0x14029BB18 (KeRequestTerminationThread.c)
 *     KeAlertThread @ 0x14029BC80 (KeAlertThread.c)
 *     KeSetIdealProcessorThreadEx @ 0x14029C098 (KeSetIdealProcessorThreadEx.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14029C6E0 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14029C840 (KeSetSystemGroupAffinityThread.c)
 *     KiSetThreadSchedulingGroup @ 0x14029D3A8 (KiSetThreadSchedulingGroup.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x14029D508 (KiRemoveThreadFromSchedulingGroup.c)
 *     KiSetAffinityThread @ 0x14029D724 (KiSetAffinityThread.c)
 *     KiInitializeMutant @ 0x14029E52C (KiInitializeMutant.c)
 *     KeRemoveQueueEx @ 0x1402A9110 (KeRemoveQueueEx.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     KiAttachProcess @ 0x1402ABC40 (KiAttachProcess.c)
 *     KiDetachProcess @ 0x1402ABF00 (KiDetachProcess.c)
 *     PsImpersonateContainerOfThread @ 0x1402C0590 (PsImpersonateContainerOfThread.c)
 *     KeQueryTotalCycleTimeThread @ 0x1402D3740 (KeQueryTotalCycleTimeThread.c)
 *     KeRemovePriQueue @ 0x1402E6A20 (KeRemovePriQueue.c)
 *     KiBeginThreadWait @ 0x1402E6E80 (KiBeginThreadWait.c)
 *     KiDeliverApc @ 0x1402EEFA0 (KiDeliverApc.c)
 *     KeWaitForMultipleObjects @ 0x1402F03E0 (KeWaitForMultipleObjects.c)
 *     KiWakeQueueWaiter @ 0x1402F0D40 (KiWakeQueueWaiter.c)
 *     KiAbApplyWakeupBoost @ 0x1402FC6CC (KiAbApplyWakeupBoost.c)
 *     KiAbSetMinimumThreadPriority @ 0x1402FCAD4 (KiAbSetMinimumThreadPriority.c)
 *     KiDeferredReadySingleThread @ 0x14034EC10 (KiDeferredReadySingleThread.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     KiCommitThreadWait @ 0x140350D00 (KiCommitThreadWait.c)
 *     KiSwapThread @ 0x140351420 (KiSwapThread.c)
 *     KeUpdateThreadTag @ 0x14036C100 (KeUpdateThreadTag.c)
 *     KiUpdateThreadCpuSetAffinitiesFromDpcLevel @ 0x1403C638C (KiUpdateThreadCpuSetAffinitiesFromDpcLevel.c)
 *     KeQueryActualAffinityThread @ 0x1405132C0 (KeQueryActualAffinityThread.c)
 *     KeTryToFreezeThreadStack @ 0x1405135C8 (KeTryToFreezeThreadStack.c)
 *     KeEnumerateQueueApc @ 0x14051A870 (KeEnumerateQueueApc.c)
 *     KeTryToInsertQueueApc @ 0x14051AA50 (KeTryToInsertQueueApc.c)
 *     KeQueryCpuSetsThread @ 0x14051C9D0 (KeQueryCpuSetsThread.c)
 *     KeSetSelectedCpuSetsThread @ 0x14051CE20 (KeSetSelectedCpuSetsThread.c)
 *     KeSetThreadSchedulerAssist @ 0x14051E808 (KeSetThreadSchedulerAssist.c)
 *     KiAdjustThreadTimer @ 0x14051F214 (KiAdjustThreadTimer.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x140520230 (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiSetHeteroPolicyThread @ 0x1405205A4 (KiSetHeteroPolicyThread.c)
 *     KiUpdateVpBackingThreadPriorityDpcRoutine @ 0x140520D60 (KiUpdateVpBackingThreadPriorityDpcRoutine.c)
 *     KeAbCrossThreadDelete @ 0x1405210B8 (KeAbCrossThreadDelete.c)
 *     KiMonitorCacheErrata @ 0x1405224D0 (KiMonitorCacheErrata.c)
 *     KiSatisfyThreadWait @ 0x140522D34 (KiSatisfyThreadWait.c)
 *     KiIsPrimaryPresent @ 0x140525F64 (KiIsPrimaryPresent.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiReleaseThreadLockSafe(__int64 a1)
{
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  __int64 result; // rax

  *(_QWORD *)(a1 + 64) = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist && CurrentPrcb->NestingLevel <= 1u )
  {
    result = (unsigned int)(SchedulerAssist[6] - 1);
    SchedulerAssist[6] = result;
    if ( !(_DWORD)result )
      return KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  return result;
}
