/*
 * XREFs of KiReleaseThreadLockSafe @ 0x1402F9ED0
 * Callers:
 *     KeRemoveQueueEx @ 0x140207B10 (KeRemoveQueueEx.c)
 *     KeQueryTotalCycleTimeThread @ 0x140208B30 (KeQueryTotalCycleTimeThread.c)
 *     KeQueryBasePriorityThread @ 0x140208C34 (KeQueryBasePriorityThread.c)
 *     KiDeferredReadySingleThread @ 0x140219BA0 (KiDeferredReadySingleThread.c)
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     KiCommitThreadWait @ 0x14021BDA0 (KiCommitThreadWait.c)
 *     KiSwapThread @ 0x14021C4C0 (KiSwapThread.c)
 *     KeAlertThreadByThreadId @ 0x14023F1C0 (KeAlertThreadByThreadId.c)
 *     KiAbApplyWakeupBoost @ 0x140242F4C (KiAbApplyWakeupBoost.c)
 *     KiAbSetMinimumThreadPriority @ 0x140243354 (KiAbSetMinimumThreadPriority.c)
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     KiAttachProcess @ 0x140268660 (KiAttachProcess.c)
 *     KiDetachProcess @ 0x140268920 (KiDetachProcess.c)
 *     PsImpersonateContainerOfThread @ 0x14027E130 (PsImpersonateContainerOfThread.c)
 *     KeRemovePriQueue @ 0x14028E810 (KeRemovePriQueue.c)
 *     KiBeginThreadWait @ 0x14028EC70 (KiBeginThreadWait.c)
 *     KiRundownMutants @ 0x1402D5C98 (KiRundownMutants.c)
 *     KiAcquireReleaseThreadLock @ 0x1402D5E70 (KiAcquireReleaseThreadLock.c)
 *     KeTerminateThread @ 0x1402D602C (KeTerminateThread.c)
 *     KiFlushQueueApc @ 0x1402D6494 (KiFlushQueueApc.c)
 *     KiStackAttachProcess @ 0x1402D6FA0 (KiStackAttachProcess.c)
 *     KiResumeThread @ 0x1402D7924 (KiResumeThread.c)
 *     KiSchedulerApc @ 0x1402D7C50 (KiSchedulerApc.c)
 *     KiFastReadyThread @ 0x1402D80A0 (KiFastReadyThread.c)
 *     KiFastExitThreadWait @ 0x1402D8158 (KiFastExitThreadWait.c)
 *     KeDelayExecutionThread @ 0x1402DA450 (KeDelayExecutionThread.c)
 *     KeSetPriorityThread @ 0x1402DAB40 (KeSetPriorityThread.c)
 *     KiQuantumEnd @ 0x1402DAD50 (KiQuantumEnd.c)
 *     KeSetBasePriorityThread @ 0x1402DBEC0 (KeSetBasePriorityThread.c)
 *     KiQueueReadyThread @ 0x1402DC4D0 (KiQueueReadyThread.c)
 *     KeWaitForMultipleObjects @ 0x1402DCE40 (KeWaitForMultipleObjects.c)
 *     KiDeliverApc @ 0x1402DDAB0 (KiDeliverApc.c)
 *     KiWakeQueueWaiter @ 0x1402E07D0 (KiWakeQueueWaiter.c)
 *     KeTestAlertThread @ 0x1402E75F0 (KeTestAlertThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1402E8FE4 (KeSetPriorityAndQuantumProcess.c)
 *     KiProcessPendingForegroundBoosts @ 0x1402E9570 (KiProcessPendingForegroundBoosts.c)
 *     KeInsertQueueApc @ 0x1402EBBB0 (KeInsertQueueApc.c)
 *     KiSuspendThread @ 0x1402EC150 (KiSuspendThread.c)
 *     KiInsertDeferredPreemptionApc @ 0x1402EC410 (KiInsertDeferredPreemptionApc.c)
 *     KeRequestTerminationThread @ 0x1402EC780 (KeRequestTerminationThread.c)
 *     KeAlertThread @ 0x1402EC8E0 (KeAlertThread.c)
 *     KiWaitSatisfyAny @ 0x1402F5810 (KiWaitSatisfyAny.c)
 *     KiAbThreadUnboostCpuPriority @ 0x1402F7278 (KiAbThreadUnboostCpuPriority.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x1402F754C (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiSetAffinityThread @ 0x1402F7A00 (KiSetAffinityThread.c)
 *     KeYieldExecution @ 0x140302FA0 (KeYieldExecution.c)
 *     KiPriQueueThreadPriorityChanged @ 0x1403034BC (KiPriQueueThreadPriorityChanged.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x140303618 (KiActivateWaiterQueueWithNoLocks.c)
 *     KeRundownQueueCommon @ 0x14030B17C (KeRundownQueueCommon.c)
 *     KeDeleteMutant @ 0x14030B3F8 (KeDeleteMutant.c)
 *     KiTryToUpdateVPBackingThreadPriority @ 0x14031DC54 (KiTryToUpdateVPBackingThreadPriority.c)
 *     KeRemoveQueueApc @ 0x1403240DC (KeRemoveQueueApc.c)
 *     MiSwapStackPage @ 0x14032576C (MiSwapStackPage.c)
 *     KiAbThreadInsertList @ 0x140326E40 (KiAbThreadInsertList.c)
 *     KiSwitchPriQueue @ 0x14032D42C (KiSwitchPriQueue.c)
 *     KeQueryAffinityThread @ 0x1403300B0 (KeQueryAffinityThread.c)
 *     KeSetIdealProcessorThreadEx @ 0x140333B58 (KeSetIdealProcessorThreadEx.c)
 *     KeBoostPriorityThread @ 0x140336FA0 (KeBoostPriorityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14033CF00 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14033D060 (KeSetSystemGroupAffinityThread.c)
 *     KiSetThreadSchedulingGroup @ 0x14035F01C (KiSetThreadSchedulingGroup.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x14035F0EC (KiRemoveThreadFromSchedulingGroup.c)
 *     KiInitializeMutant @ 0x14036093C (KiInitializeMutant.c)
 *     KeUpdateThreadTag @ 0x14036BC30 (KeUpdateThreadTag.c)
 *     KiUpdateThreadCpuSetAffinitiesFromDpcLevel @ 0x1403C57FC (KiUpdateThreadCpuSetAffinitiesFromDpcLevel.c)
 *     KeQueryActualAffinityThread @ 0x140511540 (KeQueryActualAffinityThread.c)
 *     KeTryToFreezeThreadStack @ 0x140511848 (KeTryToFreezeThreadStack.c)
 *     KeEnumerateQueueApc @ 0x140518AF0 (KeEnumerateQueueApc.c)
 *     KeTryToInsertQueueApc @ 0x140518CD0 (KeTryToInsertQueueApc.c)
 *     KeQueryCpuSetsThread @ 0x14051ACB0 (KeQueryCpuSetsThread.c)
 *     KeSetSelectedCpuSetsThread @ 0x14051B100 (KeSetSelectedCpuSetsThread.c)
 *     KeSetThreadSchedulerAssist @ 0x14051CAE8 (KeSetThreadSchedulerAssist.c)
 *     KiAdjustThreadTimer @ 0x14051D4F4 (KiAdjustThreadTimer.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x14051E510 (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiSetHeteroPolicyThread @ 0x14051E884 (KiSetHeteroPolicyThread.c)
 *     KiUpdateVpBackingThreadPriorityDpcRoutine @ 0x14051F040 (KiUpdateVpBackingThreadPriorityDpcRoutine.c)
 *     KeAbCrossThreadDelete @ 0x14051F398 (KeAbCrossThreadDelete.c)
 *     KiMonitorCacheErrata @ 0x1405207B0 (KiMonitorCacheErrata.c)
 *     KiSatisfyThreadWait @ 0x140521014 (KiSatisfyThreadWait.c)
 *     KiIsPrimaryPresent @ 0x140524244 (KiIsPrimaryPresent.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
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
