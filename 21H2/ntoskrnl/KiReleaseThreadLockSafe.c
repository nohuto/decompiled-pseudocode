/*
 * XREFs of KiReleaseThreadLockSafe @ 0x14029A860
 * Callers:
 *     KeRemoveQueueEx @ 0x1402047D0 (KeRemoveQueueEx.c)
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     KiAttachProcess @ 0x140207340 (KiAttachProcess.c)
 *     KiDetachProcess @ 0x140207600 (KiDetachProcess.c)
 *     PsImpersonateContainerOfThread @ 0x14021BC90 (PsImpersonateContainerOfThread.c)
 *     KeQueryTotalCycleTimeThread @ 0x14022EEF0 (KeQueryTotalCycleTimeThread.c)
 *     KeRemovePriQueue @ 0x1402421D0 (KeRemovePriQueue.c)
 *     KiBeginThreadWait @ 0x140242630 (KiBeginThreadWait.c)
 *     KiDeliverApc @ 0x14024A750 (KiDeliverApc.c)
 *     KeWaitForMultipleObjects @ 0x14024BB90 (KeWaitForMultipleObjects.c)
 *     KiWakeQueueWaiter @ 0x14024C4F0 (KiWakeQueueWaiter.c)
 *     KeDelayExecutionThread @ 0x140257490 (KeDelayExecutionThread.c)
 *     KeSetPriorityThread @ 0x140257AE0 (KeSetPriorityThread.c)
 *     KiQuantumEnd @ 0x140257CF0 (KiQuantumEnd.c)
 *     KeSetBasePriorityThread @ 0x140258E60 (KeSetBasePriorityThread.c)
 *     KiQueueReadyThread @ 0x1402593B0 (KiQueueReadyThread.c)
 *     KiStackAttachProcess @ 0x14025C2E0 (KiStackAttachProcess.c)
 *     KeAlertThreadByThreadId @ 0x14025CA90 (KeAlertThreadByThreadId.c)
 *     KeInsertQueueApc @ 0x14025F8C0 (KeInsertQueueApc.c)
 *     KeTestAlertThread @ 0x140277530 (KeTestAlertThread.c)
 *     KiRundownMutants @ 0x140277650 (KiRundownMutants.c)
 *     KiFastReadyThread @ 0x140278190 (KiFastReadyThread.c)
 *     KiFastExitThreadWait @ 0x140278248 (KiFastExitThreadWait.c)
 *     KeTerminateThread @ 0x1402784F0 (KeTerminateThread.c)
 *     KiFlushQueueApc @ 0x140278958 (KiFlushQueueApc.c)
 *     KiResumeThread @ 0x1402798D0 (KiResumeThread.c)
 *     KiSchedulerApc @ 0x140279C00 (KiSchedulerApc.c)
 *     KiAcquireReleaseThreadLock @ 0x14027A050 (KiAcquireReleaseThreadLock.c)
 *     KiSuspendThread @ 0x14027A324 (KiSuspendThread.c)
 *     KiInsertDeferredPreemptionApc @ 0x14027A5E4 (KiInsertDeferredPreemptionApc.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140293A50 (KiAbThreadUnboostCpuPriority.c)
 *     KiWaitSatisfyAny @ 0x14029A47C (KiWaitSatisfyAny.c)
 *     KeYieldExecution @ 0x14029E1B0 (KeYieldExecution.c)
 *     KiPriQueueThreadPriorityChanged @ 0x14029F3A0 (KiPriQueueThreadPriorityChanged.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x14029F4FC (KiActivateWaiterQueueWithNoLocks.c)
 *     KeQueryBasePriorityThread @ 0x1402A74C0 (KeQueryBasePriorityThread.c)
 *     KeRundownQueueCommon @ 0x1402A9DDC (KeRundownQueueCommon.c)
 *     KeDeleteMutant @ 0x1402AA058 (KeDeleteMutant.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x1402AAFD4 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiTryToUpdateVPBackingThreadPriority @ 0x1402BF714 (KiTryToUpdateVPBackingThreadPriority.c)
 *     KeRemoveQueueApc @ 0x1402C4D4C (KeRemoveQueueApc.c)
 *     MiSwapStackPage @ 0x1402C605C (MiSwapStackPage.c)
 *     KiAbThreadInsertList @ 0x1402C7CCC (KiAbThreadInsertList.c)
 *     KiSwitchPriQueue @ 0x1402CEF3C (KiSwitchPriQueue.c)
 *     KeQueryAffinityThread @ 0x1402D2120 (KeQueryAffinityThread.c)
 *     KeBoostPriorityThread @ 0x1402E2510 (KeBoostPriorityThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1402E9944 (KeSetPriorityAndQuantumProcess.c)
 *     KiProcessPendingForegroundBoosts @ 0x1402E9ED0 (KiProcessPendingForegroundBoosts.c)
 *     KeRequestTerminationThread @ 0x1402EA7C8 (KeRequestTerminationThread.c)
 *     KeAlertThread @ 0x1402EA930 (KeAlertThread.c)
 *     KeSetIdealProcessorThreadEx @ 0x1402EAD48 (KeSetIdealProcessorThreadEx.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1402EB390 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1402EB4F0 (KeSetSystemGroupAffinityThread.c)
 *     KiSetThreadSchedulingGroup @ 0x1402EC058 (KiSetThreadSchedulingGroup.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1402EC1B8 (KiRemoveThreadFromSchedulingGroup.c)
 *     KiSetAffinityThread @ 0x1402EC3D4 (KiSetAffinityThread.c)
 *     KiInitializeMutant @ 0x1402ED1DC (KiInitializeMutant.c)
 *     KiAbApplyWakeupBoost @ 0x1402F197C (KiAbApplyWakeupBoost.c)
 *     KiAbSetMinimumThreadPriority @ 0x1402F1D84 (KiAbSetMinimumThreadPriority.c)
 *     KiDeferredReadySingleThread @ 0x140343EC0 (KiDeferredReadySingleThread.c)
 *     KeWaitForSingleObject @ 0x140345770 (KeWaitForSingleObject.c)
 *     KiCommitThreadWait @ 0x140345FB0 (KiCommitThreadWait.c)
 *     KiSwapThread @ 0x1403466D0 (KiSwapThread.c)
 *     KeUpdateThreadTag @ 0x14036BF50 (KeUpdateThreadTag.c)
 *     KiUpdateThreadCpuSetAffinitiesFromDpcLevel @ 0x1403C61EC (KiUpdateThreadCpuSetAffinitiesFromDpcLevel.c)
 *     KeQueryActualAffinityThread @ 0x140513080 (KeQueryActualAffinityThread.c)
 *     KeTryToFreezeThreadStack @ 0x140513388 (KeTryToFreezeThreadStack.c)
 *     KeEnumerateQueueApc @ 0x14051A630 (KeEnumerateQueueApc.c)
 *     KeTryToInsertQueueApc @ 0x14051A810 (KeTryToInsertQueueApc.c)
 *     KeQueryCpuSetsThread @ 0x14051C790 (KeQueryCpuSetsThread.c)
 *     KeSetSelectedCpuSetsThread @ 0x14051CBE0 (KeSetSelectedCpuSetsThread.c)
 *     KeSetThreadSchedulerAssist @ 0x14051E5C8 (KeSetThreadSchedulerAssist.c)
 *     KiAdjustThreadTimer @ 0x14051EFD4 (KiAdjustThreadTimer.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x14051FFF0 (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiSetHeteroPolicyThread @ 0x140520364 (KiSetHeteroPolicyThread.c)
 *     KiUpdateVpBackingThreadPriorityDpcRoutine @ 0x140520B20 (KiUpdateVpBackingThreadPriorityDpcRoutine.c)
 *     KeAbCrossThreadDelete @ 0x140520E78 (KeAbCrossThreadDelete.c)
 *     KiMonitorCacheErrata @ 0x140522290 (KiMonitorCacheErrata.c)
 *     KiSatisfyThreadWait @ 0x140522AF4 (KiSatisfyThreadWait.c)
 *     KiIsPrimaryPresent @ 0x140525D24 (KiIsPrimaryPresent.c)
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
