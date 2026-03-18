/*
 * XREFs of PspUnlockJob @ 0x14068AAF0
 * Callers:
 *     PspJobDelete @ 0x14027ABB0 (PspJobDelete.c)
 *     PspSetJobIoRateControl @ 0x1405CEB38 (PspSetJobIoRateControl.c)
 *     PspCreateSilo @ 0x1405CFC8C (PspCreateSilo.c)
 *     NtSetInformationJobObject @ 0x14061AF00 (NtSetInformationJobObject.c)
 *     PspJobClose @ 0x1406562A0 (PspJobClose.c)
 *     PspGetNextJobProcess @ 0x140657B30 (PspGetNextJobProcess.c)
 *     PspAssignProcessToJob @ 0x140658924 (PspAssignProcessToJob.c)
 *     PspSendProcessNotificationToJobChain @ 0x14065A560 (PspSendProcessNotificationToJobChain.c)
 *     PspRemoveProcessFromJobChain @ 0x14065A624 (PspRemoveProcessFromJobChain.c)
 *     PspLockRootJobFromProcess @ 0x14065A918 (PspLockRootJobFromProcess.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x14065ADD0 (PspEvaluateAndNotifyEmptyJob.c)
 *     PspChargeJobWakeCounter @ 0x14068A1E0 (PspChargeJobWakeCounter.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x14068A3B8 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspCallJobHierarchyCallbacks @ 0x14068A5BC (PspCallJobHierarchyCallbacks.c)
 *     PspEnforceLimitsJobPostCallback @ 0x14068A6E0 (PspEnforceLimitsJobPostCallback.c)
 *     PspGetNextChildJob @ 0x14068B098 (PspGetNextChildJob.c)
 *     NtQueryInformationJobObject @ 0x140698FB0 (NtQueryInformationJobObject.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x140699E9C (PspQueryJobHierarchyAccountingInformation.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406ECDEC (PspAllocateAndQueryNotificationChannel.c)
 *     PspQueryJobHierarchyProcessIdList @ 0x1406FB4B4 (PspQueryJobHierarchyProcessIdList.c)
 *     PspJobNotificationWorker @ 0x1406FE770 (PspJobNotificationWorker.c)
 *     PspNotificationPacketCallback @ 0x1407034C0 (PspNotificationPacketCallback.c)
 *     PsInsertPermanentSiloContextEx @ 0x14070FE94 (PsInsertPermanentSiloContextEx.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x140902BA0 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspConvertSiloToServerSilo @ 0x140902C94 (PspConvertSiloToServerSilo.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x140905C80 (PspQueryJobHierarchyInterferenceCount.c)
 *     PspQuitNextJobProcess @ 0x140905E2C (PspQuitNextJobProcess.c)
 *     PspSetNetRateControl @ 0x1409064F4 (PspSetNetRateControl.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
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
