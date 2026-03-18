/*
 * XREFs of ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0014690
 * Callers:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0005C90 (VidSchSignalSyncObjectsFromGpu.c)
 *     ?VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z @ 0x1C0013D94 (-VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x1C00143B8 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4.c)
 *     VidSchiCleanupDeferredWaiterContext @ 0x1C001453C (VidSchiCleanupDeferredWaiterContext.c)
 *     VidSchDestroyDeviceSyncObject @ 0x1C00145C0 (VidSchDestroyDeviceSyncObject.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_CONTEXT@@@@YAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x1C0014754 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_CONTEXT@@@@YAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_GLOBAL@@.c)
 *     VidSchiClearFlipDevice @ 0x1C00147A8 (VidSchiClearFlipDevice.c)
 *     VidSchMarkDeviceAsError @ 0x1C0018900 (VidSchMarkDeviceAsError.c)
 *     VidSchExitIndependentFlip @ 0x1C0019340 (VidSchExitIndependentFlip.c)
 *     VidSchTimeoutSyncObject @ 0x1C001A0C0 (VidSchTimeoutSyncObject.c)
 *     ?VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z @ 0x1C001A8AC (-VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z.c)
 *     VidSchSetMonitorPowerState @ 0x1C001AFC0 (VidSchSetMonitorPowerState.c)
 *     ?VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z @ 0x1C001B5B8 (-VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C001BBC0 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 *     VidSchiUnwaitFlipQueueUnderSchedulerSpinLock @ 0x1C001C228 (VidSchiUnwaitFlipQueueUnderSchedulerSpinLock.c)
 *     VidSchiProcessMonitoredFenceSignaledDpc @ 0x1C001F6F4 (VidSchiProcessMonitoredFenceSignaledDpc.c)
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x1C001F79E (VidSchiSubmitCommandPacketToHwQueue.c)
 *     ?VidSchiCaptureRunningProcess@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C003496C (-VidSchiCaptureRunningProcess@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     VidSchiProcessCrossAdapterSignaledSyncObjects @ 0x1C0038B38 (VidSchiProcessCrossAdapterSignaledSyncObjects.c)
 *     VidSchiProcessPeriodicNotificationCookie @ 0x1C0038FAC (VidSchiProcessPeriodicNotificationCookie.c)
 *     VidSchiRedirectedFlipWaitOnSyncObject @ 0x1C00394DC (VidSchiRedirectedFlipWaitOnSyncObject.c)
 *     VidSchiRunningDeviceAllowsLongRunningPackets @ 0x1C003A478 (VidSchiRunningDeviceAllowsLongRunningPackets.c)
 *     ??$VidSchRundownUnorderedWaiter@UVIDSCH_HW_QUEUE@@@@YAJPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x1C003B27C (--$VidSchRundownUnorderedWaiter@UVIDSCH_HW_QUEUE@@@@YAJPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_GLOBAL@@.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_GLOBAL@@@@YAJPEAU_VIDSCH_GLOBAL@@0W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x1C003B328 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_GLOBAL@@@@YAJPEAU_VIDSCH_GLOBAL@@0W4_VIDSCH_FLUSH_STAGE.c)
 *     ?VidSchRundownUnorderedWaiterGlobal@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C003BB54 (-VidSchRundownUnorderedWaiterGlobal@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     ?VidSchiProcessCrossAdapterSignaledSyncObjectsFromPassiveLevel@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C003BC24 (-VidSchiProcessCrossAdapterSignaledSyncObjectsFromPassiveLevel@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     VidSchCancelPresentAtFlips @ 0x1C003C650 (VidSchCancelPresentAtFlips.c)
 *     VidSchConfirmToken @ 0x1C003C800 (VidSchConfirmToken.c)
 *     VidSchDestroyPeriodicFrameNotification @ 0x1C003CE00 (VidSchDestroyPeriodicFrameNotification.c)
 *     VidSchEscape @ 0x1C003D0F0 (VidSchEscape.c)
 *     VidSchHasReadyPackets @ 0x1C003D4C0 (VidSchHasReadyPackets.c)
 *     VidSchPresentDurationPlane @ 0x1C003D840 (VidSchPresentDurationPlane.c)
 *     VidSchSignalSyncObjectsFromCpu @ 0x1C003DF40 (VidSchSignalSyncObjectsFromCpu.c)
 *     ?VidSchiCheckHwSchNodeProgress@@YAEPEAU_VIDSCH_NODE@@_N@Z @ 0x1C003ED08 (-VidSchiCheckHwSchNodeProgress@@YAEPEAU_VIDSCH_NODE@@_N@Z.c)
 *     ?VidSchiIsDeviceSuspended@@YA_NPEAU_VIDSCH_DEVICE@@@Z @ 0x1C0040168 (-VidSchiIsDeviceSuspended@@YA_NPEAU_VIDSCH_DEVICE@@@Z.c)
 *     ?VidSchiRemoveHwQueueFromSyncPoints@@YAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0040338 (-VidSchiRemoveHwQueueFromSyncPoints@@YAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     ?VidSchiRundownHardwareScheduledContexts@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C00405FC (-VidSchiRundownHardwareScheduledContexts@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     ?VidSchiStartHwSchNodeProgressMonitoring@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C0040804 (-VidSchiStartHwSchNodeProgressMonitoring@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     VidSchSubmitSignalToHwQueue @ 0x1C0042100 (VidSchSubmitSignalToHwQueue.c)
 *     VidSchiCreateNodeSchedulingLog @ 0x1C0042A90 (VidSchiCreateNodeSchedulingLog.c)
 *     VidSchiProcessGpuEngineTimeoutDpc @ 0x1C0042CC0 (VidSchiProcessGpuEngineTimeoutDpc.c)
 *     VidSchiProcessHwQueuePageFaultedDpc @ 0x1C0042D28 (VidSchiProcessHwQueuePageFaultedDpc.c)
 *     VidSchiProcessSuspendContextCompletedDpc @ 0x1C00435F8 (VidSchiProcessSuspendContextCompletedDpc.c)
 *     VidSchiResetHwEngine @ 0x1C0043770 (VidSchiResetHwEngine.c)
 *     VidSchiSuspendResumeHwContext @ 0x1C0043E14 (VidSchiSuspendResumeHwContext.c)
 *     VidSchiCleanupQueuedCommand @ 0x1C00445A8 (VidSchiCleanupQueuedCommand.c)
 *     VidSchiCompleteAllPendingCommand @ 0x1C0044610 (VidSchiCompleteAllPendingCommand.c)
 *     ?VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_N@Z @ 0x1C0045F30 (-VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall AcquireSpinLock::Acquire(Acquire *this)
{
  struct _KLOCK_QUEUE_HANDLE *v2; // rdx
  KSPIN_LOCK *v3; // rcx

  v2 = (struct _KLOCK_QUEUE_HANDLE *)((char *)this + 8);
  v3 = *(KSPIN_LOCK **)this;
  if ( *((_BYTE *)this + 33) )
    KeAcquireInStackQueuedSpinLockAtDpcLevel(v3, v2);
  else
    KeAcquireInStackQueuedSpinLock(v3, v2);
  *((_BYTE *)this + 32) = 1;
}
