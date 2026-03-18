/*
 * XREFs of KiReleaseThreadLockSafe @ 0x140327E50
 * Callers:
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     KiAttachProcess @ 0x140205710 (KiAttachProcess.c)
 *     KiDetachProcess @ 0x1402059D0 (KiDetachProcess.c)
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     KiCommitThreadWait @ 0x14020BBE0 (KiCommitThreadWait.c)
 *     KiSwapThread @ 0x14020C300 (KiSwapThread.c)
 *     KiDeliverApc @ 0x14020EAE0 (KiDeliverApc.c)
 *     KeRemoveQueueEx @ 0x14020F400 (KeRemoveQueueEx.c)
 *     PsImpersonateContainerOfThread @ 0x1402123A0 (PsImpersonateContainerOfThread.c)
 *     KiStackAttachProcess @ 0x14024F890 (KiStackAttachProcess.c)
 *     KiAbApplyWakeupBoost @ 0x140274DEC (KiAbApplyWakeupBoost.c)
 *     KeAlertThreadByThreadId @ 0x14027D880 (KeAlertThreadByThreadId.c)
 *     KiWakeQueueWaiter @ 0x140280080 (KiWakeQueueWaiter.c)
 *     KeWaitForMultipleObjects @ 0x1402801A0 (KeWaitForMultipleObjects.c)
 *     KiDeferredReadySingleThread @ 0x1402873F0 (KiDeferredReadySingleThread.c)
 *     KeQueryTotalCycleTimeThread @ 0x140296BE0 (KeQueryTotalCycleTimeThread.c)
 *     KeQueryBasePriorityThread @ 0x140296CE4 (KeQueryBasePriorityThread.c)
 *     KeRemovePriQueue @ 0x1402B8840 (KeRemovePriQueue.c)
 *     KiBeginThreadWait @ 0x1402B8CA0 (KiBeginThreadWait.c)
 *     KeDelayExecutionThread @ 0x1402BC230 (KeDelayExecutionThread.c)
 *     KeSetIdealProcessorThreadEx @ 0x1402DF608 (KeSetIdealProcessorThreadEx.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1402E44A0 (KeRevertToUserGroupAffinityThread.c)
 *     KiFastReadyThread @ 0x1402E4884 (KiFastReadyThread.c)
 *     KiFastExitThreadWait @ 0x1402E493C (KiFastExitThreadWait.c)
 *     KeTestAlertThread @ 0x1402EAB50 (KeTestAlertThread.c)
 *     KeSetPriorityThread @ 0x1402EBF90 (KeSetPriorityThread.c)
 *     KiQuantumEnd @ 0x1402EC1A0 (KiQuantumEnd.c)
 *     KeSetBasePriorityThread @ 0x1402ED310 (KeSetBasePriorityThread.c)
 *     KiQueueReadyThread @ 0x1402EDF50 (KiQueueReadyThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1402F049C (KeSetPriorityAndQuantumProcess.c)
 *     KiProcessPendingForegroundBoosts @ 0x1402F0C10 (KiProcessPendingForegroundBoosts.c)
 *     KeYieldExecution @ 0x1402F1580 (KeYieldExecution.c)
 *     KeSetSystemGroupAffinityThread @ 0x1402F1C40 (KeSetSystemGroupAffinityThread.c)
 *     KeTerminateThread @ 0x1402F9A38 (KeTerminateThread.c)
 *     KiFlushQueueApc @ 0x1402F9EA0 (KiFlushQueueApc.c)
 *     KiResumeThread @ 0x1402FA1B0 (KiResumeThread.c)
 *     KiSchedulerApc @ 0x1402FA4E0 (KiSchedulerApc.c)
 *     KiAcquireReleaseThreadLock @ 0x1402FA930 (KiAcquireReleaseThreadLock.c)
 *     KiRundownMutants @ 0x1402FAA28 (KiRundownMutants.c)
 *     KiSuspendThread @ 0x1402FADDC (KiSuspendThread.c)
 *     KiInsertDeferredPreemptionApc @ 0x1402FB09C (KiInsertDeferredPreemptionApc.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x1402FB40C (KiActivateWaiterQueueWithNoLocks.c)
 *     KeInsertQueueApc @ 0x1402FB5E0 (KeInsertQueueApc.c)
 *     KeRequestTerminationThread @ 0x1402FBC30 (KeRequestTerminationThread.c)
 *     KeAlertThread @ 0x1402FBD90 (KeAlertThread.c)
 *     KiInitializeMutant @ 0x1402FF79C (KiInitializeMutant.c)
 *     KeRemoveQueueApc @ 0x14030050C (KeRemoveQueueApc.c)
 *     KeBoostPriorityThread @ 0x14030AEC4 (KeBoostPriorityThread.c)
 *     KiSetAffinityThread @ 0x14030BB20 (KiSetAffinityThread.c)
 *     KiWaitSatisfyAny @ 0x14030EEAC (KiWaitSatisfyAny.c)
 *     KiAbSetMinimumThreadPriority @ 0x14032A364 (KiAbSetMinimumThreadPriority.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14032B6EC (KiUpdateGlobalCpuSetConfiguration.c)
 *     KeRundownQueueCommon @ 0x140338A5C (KeRundownQueueCommon.c)
 *     KeDeleteMutant @ 0x140338CD8 (KeDeleteMutant.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140340DC4 (KiAbThreadUnboostCpuPriority.c)
 *     KiPriQueueThreadPriorityChanged @ 0x14034CE84 (KiPriQueueThreadPriorityChanged.c)
 *     KiTryToUpdateVPBackingThreadPriority @ 0x14034D084 (KiTryToUpdateVPBackingThreadPriority.c)
 *     KiSetThreadSchedulingGroup @ 0x14034E548 (KiSetThreadSchedulingGroup.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x14034E618 (KiRemoveThreadFromSchedulingGroup.c)
 *     MiSwapStackPage @ 0x140354AAC (MiSwapStackPage.c)
 *     KiAbThreadInsertList @ 0x1403565EC (KiAbThreadInsertList.c)
 *     KiSwitchPriQueue @ 0x14035CAA4 (KiSwitchPriQueue.c)
 *     KeQueryAffinityThread @ 0x14035F2B0 (KeQueryAffinityThread.c)
 *     KeUpdateThreadTag @ 0x140369C50 (KeUpdateThreadTag.c)
 *     KiUpdateThreadCpuSetAffinitiesFromDpcLevel @ 0x1403C308C (KiUpdateThreadCpuSetAffinitiesFromDpcLevel.c)
 *     KeQueryActualAffinityThread @ 0x14050DC10 (KeQueryActualAffinityThread.c)
 *     KeTryToFreezeThreadStack @ 0x14050DF18 (KeTryToFreezeThreadStack.c)
 *     KeEnumerateQueueApc @ 0x1405151C0 (KeEnumerateQueueApc.c)
 *     KeTryToInsertQueueApc @ 0x1405153A0 (KeTryToInsertQueueApc.c)
 *     KeQueryCpuSetsThread @ 0x1405172E0 (KeQueryCpuSetsThread.c)
 *     KeSetSelectedCpuSetsThread @ 0x140517730 (KeSetSelectedCpuSetsThread.c)
 *     KeSetThreadSchedulerAssist @ 0x140519118 (KeSetThreadSchedulerAssist.c)
 *     KiAdjustThreadTimer @ 0x140519B24 (KiAdjustThreadTimer.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x14051AB40 (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiSetHeteroPolicyThread @ 0x14051AEB4 (KiSetHeteroPolicyThread.c)
 *     KiUpdateVpBackingThreadPriorityDpcRoutine @ 0x14051B670 (KiUpdateVpBackingThreadPriorityDpcRoutine.c)
 *     KeAbCrossThreadDelete @ 0x14051B9C8 (KeAbCrossThreadDelete.c)
 *     KiMonitorCacheErrata @ 0x14051CDE0 (KiMonitorCacheErrata.c)
 *     KiSatisfyThreadWait @ 0x14051D644 (KiSatisfyThreadWait.c)
 *     KiIsPrimaryPresent @ 0x140520874 (KiIsPrimaryPresent.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
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
