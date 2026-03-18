/*
 * XREFs of KiReleaseThreadLockSafe @ 0x1402EE520
 * Callers:
 *     KiUpdateGlobalCpuSetConfiguration @ 0x140202694 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KeAlertThreadByThreadId @ 0x140204570 (KeAlertThreadByThreadId.c)
 *     KeRemovePriQueue @ 0x140225BC0 (KeRemovePriQueue.c)
 *     KiBeginThreadWait @ 0x140226020 (KiBeginThreadWait.c)
 *     KeDelayExecutionThread @ 0x1402295B0 (KeDelayExecutionThread.c)
 *     KiWakeQueueWaiter @ 0x140243980 (KiWakeQueueWaiter.c)
 *     KeWaitForMultipleObjects @ 0x140243AA0 (KeWaitForMultipleObjects.c)
 *     KiDeferredReadySingleThread @ 0x14024AB50 (KiDeferredReadySingleThread.c)
 *     KeQueryTotalCycleTimeThread @ 0x14025A360 (KeQueryTotalCycleTimeThread.c)
 *     KeQueryBasePriorityThread @ 0x14025A464 (KeQueryBasePriorityThread.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     KiAttachProcess @ 0x14025E630 (KiAttachProcess.c)
 *     KiDetachProcess @ 0x14025E8F0 (KiDetachProcess.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     KiCommitThreadWait @ 0x140264C30 (KiCommitThreadWait.c)
 *     KiSwapThread @ 0x140265350 (KiSwapThread.c)
 *     KiDeliverApc @ 0x140267B30 (KiDeliverApc.c)
 *     KeRemoveQueueEx @ 0x140268450 (KeRemoveQueueEx.c)
 *     PsImpersonateContainerOfThread @ 0x14026B3F0 (PsImpersonateContainerOfThread.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     KeBoostPriorityThread @ 0x1402C94E4 (KeBoostPriorityThread.c)
 *     KiSetAffinityThread @ 0x1402CA140 (KiSetAffinityThread.c)
 *     KiWaitSatisfyAny @ 0x1402CD4E0 (KiWaitSatisfyAny.c)
 *     KiAbSetMinimumThreadPriority @ 0x1402DD594 (KiAbSetMinimumThreadPriority.c)
 *     KiInitializeMutant @ 0x1402DEBE8 (KiInitializeMutant.c)
 *     KeRundownQueueCommon @ 0x1402FBA2C (KeRundownQueueCommon.c)
 *     KeDeleteMutant @ 0x1402FBCA8 (KeDeleteMutant.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140303FF4 (KiAbThreadUnboostCpuPriority.c)
 *     KiPriQueueThreadPriorityChanged @ 0x14030F7B4 (KiPriQueueThreadPriorityChanged.c)
 *     KiTryToUpdateVPBackingThreadPriority @ 0x14030F9B4 (KiTryToUpdateVPBackingThreadPriority.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x140311544 (KiRemoveThreadFromSchedulingGroup.c)
 *     MiSwapStackPage @ 0x140316FFC (MiSwapStackPage.c)
 *     KiAbThreadInsertList @ 0x1403189FC (KiAbThreadInsertList.c)
 *     KiSwitchPriQueue @ 0x14031EF94 (KiSwitchPriQueue.c)
 *     KeQueryAffinityThread @ 0x140321900 (KeQueryAffinityThread.c)
 *     KeSetIdealProcessorThreadEx @ 0x140326AA4 (KeSetIdealProcessorThreadEx.c)
 *     KiFastReadyThread @ 0x1403299AC (KiFastReadyThread.c)
 *     KiFastExitThreadWait @ 0x140329A64 (KiFastExitThreadWait.c)
 *     KeTestAlertThread @ 0x14032FC90 (KeTestAlertThread.c)
 *     KeSetPriorityThread @ 0x1403310D0 (KeSetPriorityThread.c)
 *     KiQuantumEnd @ 0x1403312E0 (KiQuantumEnd.c)
 *     KeSetBasePriorityThread @ 0x140332450 (KeSetBasePriorityThread.c)
 *     KiQueueReadyThread @ 0x140333090 (KiQueueReadyThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1403355DC (KeSetPriorityAndQuantumProcess.c)
 *     KiProcessPendingForegroundBoosts @ 0x140335D50 (KiProcessPendingForegroundBoosts.c)
 *     KeYieldExecution @ 0x1403366C0 (KeYieldExecution.c)
 *     KeSetSystemGroupAffinityThread @ 0x140336D80 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1403374F0 (KeRevertToUserGroupAffinityThread.c)
 *     KeRemoveQueueApc @ 0x14033EBA0 (KeRemoveQueueApc.c)
 *     KeTerminateThread @ 0x140355A18 (KeTerminateThread.c)
 *     KiFlushQueueApc @ 0x140355E80 (KiFlushQueueApc.c)
 *     KiResumeThread @ 0x140356190 (KiResumeThread.c)
 *     KiSchedulerApc @ 0x1403564C0 (KiSchedulerApc.c)
 *     KiAcquireReleaseThreadLock @ 0x140356910 (KiAcquireReleaseThreadLock.c)
 *     KiRundownMutants @ 0x140356A08 (KiRundownMutants.c)
 *     KiSuspendThread @ 0x140356DBC (KiSuspendThread.c)
 *     KiInsertDeferredPreemptionApc @ 0x14035707C (KiInsertDeferredPreemptionApc.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x1403573EC (KiActivateWaiterQueueWithNoLocks.c)
 *     KeInsertQueueApc @ 0x1403575C0 (KeInsertQueueApc.c)
 *     KeRequestTerminationThread @ 0x140357C10 (KeRequestTerminationThread.c)
 *     KeAlertThread @ 0x140357D70 (KeAlertThread.c)
 *     KiAbApplyWakeupBoost @ 0x14035AA8C (KiAbApplyWakeupBoost.c)
 *     KiSetThreadSchedulingGroup @ 0x14035B1E8 (KiSetThreadSchedulingGroup.c)
 *     KeUpdateThreadTag @ 0x140369290 (KeUpdateThreadTag.c)
 *     KiUpdateThreadCpuSetAffinitiesFromDpcLevel @ 0x1403C21CC (KiUpdateThreadCpuSetAffinitiesFromDpcLevel.c)
 *     KeQueryActualAffinityThread @ 0x14050D5C0 (KeQueryActualAffinityThread.c)
 *     KeTryToFreezeThreadStack @ 0x14050D8C8 (KeTryToFreezeThreadStack.c)
 *     KeEnumerateQueueApc @ 0x140514B70 (KeEnumerateQueueApc.c)
 *     KeTryToInsertQueueApc @ 0x140514D50 (KeTryToInsertQueueApc.c)
 *     KeQueryCpuSetsThread @ 0x140516C90 (KeQueryCpuSetsThread.c)
 *     KeSetSelectedCpuSetsThread @ 0x1405170E0 (KeSetSelectedCpuSetsThread.c)
 *     KeSetThreadSchedulerAssist @ 0x140518AC8 (KeSetThreadSchedulerAssist.c)
 *     KiAdjustThreadTimer @ 0x1405194D4 (KiAdjustThreadTimer.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x14051A4F0 (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiSetHeteroPolicyThread @ 0x14051A864 (KiSetHeteroPolicyThread.c)
 *     KiUpdateVpBackingThreadPriorityDpcRoutine @ 0x14051B020 (KiUpdateVpBackingThreadPriorityDpcRoutine.c)
 *     KeAbCrossThreadDelete @ 0x14051B378 (KeAbCrossThreadDelete.c)
 *     KiMonitorCacheErrata @ 0x14051C790 (KiMonitorCacheErrata.c)
 *     KiSatisfyThreadWait @ 0x14051CFF4 (KiSatisfyThreadWait.c)
 *     KiIsPrimaryPresent @ 0x140520224 (KiIsPrimaryPresent.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
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
