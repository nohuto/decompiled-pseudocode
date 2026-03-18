/*
 * XREFs of ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C00115E0
 * Callers:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0007440 (VidSchSignalSyncObjectsFromGpu.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x1C0011188 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4.c)
 *     VidSchiClearFlipDevice @ 0x1C0011408 (VidSchiClearFlipDevice.c)
 *     VidSchiCleanupDeferredWaiterContext @ 0x1C001148C (VidSchiCleanupDeferredWaiterContext.c)
 *     VidSchDestroyDeviceSyncObject @ 0x1C0011510 (VidSchDestroyDeviceSyncObject.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_CONTEXT@@@@YAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x1C00116A4 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_CONTEXT@@@@YAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_GLOBAL@@.c)
 *     ?VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z @ 0x1C0012038 (-VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z.c)
 *     VidSchMarkDeviceAsError @ 0x1C00140D0 (VidSchMarkDeviceAsError.c)
 *     VidSchTimeoutSyncObject @ 0x1C001508C (VidSchTimeoutSyncObject.c)
 *     ?VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z @ 0x1C001516C (-VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z.c)
 *     ?VidSchiCaptureRunningProcess@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C002A714 (-VidSchiCaptureRunningProcess@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     ?VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z @ 0x1C002C270 (-VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C002F6A0 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 *     VidSchiProcessCrossAdapterSignaledSyncObjects @ 0x1C002FE5C (VidSchiProcessCrossAdapterSignaledSyncObjects.c)
 *     VidSchiProcessPeriodicNotificationCookie @ 0x1C0030554 (VidSchiProcessPeriodicNotificationCookie.c)
 *     VidSchiRedirectedFlipWaitOnSyncObject @ 0x1C00309B0 (VidSchiRedirectedFlipWaitOnSyncObject.c)
 *     VidSchiRunningDeviceAllowsLongRunningPackets @ 0x1C00317EC (VidSchiRunningDeviceAllowsLongRunningPackets.c)
 *     VidSchiUnwaitFlipQueueUnderSchedulerSpinLock @ 0x1C0032320 (VidSchiUnwaitFlipQueueUnderSchedulerSpinLock.c)
 *     ??$VidSchRundownUnorderedWaiter@UVIDSCH_HW_QUEUE@@@@YAJPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x1C00327D4 (--$VidSchRundownUnorderedWaiter@UVIDSCH_HW_QUEUE@@@@YAJPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_GLOBAL@@.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_GLOBAL@@@@YAJPEAU_VIDSCH_GLOBAL@@0W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x1C0032880 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_GLOBAL@@@@YAJPEAU_VIDSCH_GLOBAL@@0W4_VIDSCH_FLUSH_STAGE.c)
 *     ?VidSchRundownUnorderedWaiterGlobal@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0033118 (-VidSchRundownUnorderedWaiterGlobal@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     ?VidSchiProcessCrossAdapterSignaledSyncObjectsFromPassiveLevel@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0033248 (-VidSchiProcessCrossAdapterSignaledSyncObjectsFromPassiveLevel@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     VidSchConfirmToken @ 0x1C0033BD0 (VidSchConfirmToken.c)
 *     VidSchDestroyPeriodicFrameNotification @ 0x1C0034160 (VidSchDestroyPeriodicFrameNotification.c)
 *     VidSchExitIndependentFlip @ 0x1C0034920 (VidSchExitIndependentFlip.c)
 *     VidSchHasReadyPackets @ 0x1C0034FB0 (VidSchHasReadyPackets.c)
 *     VidSchSetMonitorPowerState @ 0x1C0035400 (VidSchSetMonitorPowerState.c)
 *     VidSchSignalSyncObjectsFromCpu @ 0x1C0035850 (VidSchSignalSyncObjectsFromCpu.c)
 *     ?VidSchiIsDeviceSuspended@@YA_NPEAU_VIDSCH_DEVICE@@@Z @ 0x1C0037E78 (-VidSchiIsDeviceSuspended@@YA_NPEAU_VIDSCH_DEVICE@@@Z.c)
 *     ?VidSchiRemoveHwQueueFromSyncPoints@@YAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0038384 (-VidSchiRemoveHwQueueFromSyncPoints@@YAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     ?VidSchiRundownHardwareScheduledContexts@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C00385F8 (-VidSchiRundownHardwareScheduledContexts@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     VidSchSubmitSignalToHwQueue @ 0x1C003A480 (VidSchSubmitSignalToHwQueue.c)
 *     VidSchiCreateNodeSchedulingLog @ 0x1C003AD70 (VidSchiCreateNodeSchedulingLog.c)
 *     VidSchiProcessGpuEngineTimeoutDpc @ 0x1C003AFA0 (VidSchiProcessGpuEngineTimeoutDpc.c)
 *     VidSchiProcessHwQueuePageFaultedDpc @ 0x1C003B008 (VidSchiProcessHwQueuePageFaultedDpc.c)
 *     VidSchiProcessMonitoredFenceSignaledDpc @ 0x1C003B8C0 (VidSchiProcessMonitoredFenceSignaledDpc.c)
 *     VidSchiProcessSuspendContextCompletedDpc @ 0x1C003B96C (VidSchiProcessSuspendContextCompletedDpc.c)
 *     VidSchiResetHwEngine @ 0x1C003BAE0 (VidSchiResetHwEngine.c)
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x1C003C194 (VidSchiSubmitCommandPacketToHwQueue.c)
 *     VidSchiSuspendResumeHwContext @ 0x1C003C2B8 (VidSchiSuspendResumeHwContext.c)
 *     VidSchiCleanupQueuedCommand @ 0x1C003C988 (VidSchiCleanupQueuedCommand.c)
 *     VidSchiCompleteAllPendingCommand @ 0x1C003C9F0 (VidSchiCompleteAllPendingCommand.c)
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
