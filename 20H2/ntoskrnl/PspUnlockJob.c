/*
 * XREFs of PspUnlockJob @ 0x140665CB0
 * Callers:
 *     PspJobDelete @ 0x14035D490 (PspJobDelete.c)
 *     PspSetJobIoRateControl @ 0x1405D4FDC (PspSetJobIoRateControl.c)
 *     PspCreateSilo @ 0x1405D613C (PspCreateSilo.c)
 *     PspGetNextJobProcess @ 0x14062C0F0 (PspGetNextJobProcess.c)
 *     PspAssignProcessToJob @ 0x14062CE24 (PspAssignProcessToJob.c)
 *     PspSendProcessNotificationToJobChain @ 0x14062EFB4 (PspSendProcessNotificationToJobChain.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x14062F0C4 (PspEvaluateAndNotifyEmptyJob.c)
 *     PspQueryJobHierarchyProcessIdList @ 0x140661680 (PspQueryJobHierarchyProcessIdList.c)
 *     NtSetInformationJobObject @ 0x140661780 (NtSetInformationJobObject.c)
 *     PspLockRootJobFromProcess @ 0x140663854 (PspLockRootJobFromProcess.c)
 *     PspRemoveProcessFromJobChain @ 0x140663918 (PspRemoveProcessFromJobChain.c)
 *     NtQueryInformationJobObject @ 0x140663E00 (NtQueryInformationJobObject.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x140664CEC (PspQueryJobHierarchyAccountingInformation.c)
 *     PspGetNextChildJob @ 0x1406652DC (PspGetNextChildJob.c)
 *     PspChargeJobWakeCounter @ 0x140665398 (PspChargeJobWakeCounter.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140665570 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspCallJobHierarchyCallbacks @ 0x140665774 (PspCallJobHierarchyCallbacks.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1406658A0 (PspEnforceLimitsJobPostCallback.c)
 *     PspJobNotificationWorker @ 0x1406A0750 (PspJobNotificationWorker.c)
 *     PsInsertPermanentSiloContextEx @ 0x1406A0B74 (PsInsertPermanentSiloContextEx.c)
 *     PspNotificationPacketCallback @ 0x1406D6510 (PspNotificationPacketCallback.c)
 *     PspJobClose @ 0x1406D7000 (PspJobClose.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1407112A0 (PspAllocateAndQueryNotificationChannel.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x1409087B0 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspConvertSiloToServerSilo @ 0x1409088A4 (PspConvertSiloToServerSilo.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x14090B8A0 (PspQueryJobHierarchyInterferenceCount.c)
 *     PspQuitNextJobProcess @ 0x14090BA4C (PspQuitNextJobProcess.c)
 *     PspSetNetRateControl @ 0x14090C114 (PspSetNetRateControl.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 */

void __fastcall PspUnlockJob(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx

  ExReleaseResourceLite((PERESOURCE)(a1 + 56));
  if ( a2 )
  {
    if ( (*(_WORD *)(a2 + 486))++ == 0xFFFF && *(_QWORD *)(a2 + 152) != a2 + 152 )
      KiCheckForKernelApcDelivery(v3);
  }
}
