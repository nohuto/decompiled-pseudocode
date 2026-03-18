/*
 * XREFs of PspUnlockJob @ 0x140612970
 * Callers:
 *     PspJobDelete @ 0x1402D96F0 (PspJobDelete.c)
 *     PspSetJobIoRateControl @ 0x1405CD768 (PspSetJobIoRateControl.c)
 *     PspCreateSilo @ 0x1405CE8BC (PspCreateSilo.c)
 *     NtQueryInformationJobObject @ 0x1405EFAA0 (NtQueryInformationJobObject.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x1405F098C (PspQueryJobHierarchyAccountingInformation.c)
 *     PspChargeJobWakeCounter @ 0x140612060 (PspChargeJobWakeCounter.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140612238 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspCallJobHierarchyCallbacks @ 0x14061243C (PspCallJobHierarchyCallbacks.c)
 *     PspEnforceLimitsJobPostCallback @ 0x140612560 (PspEnforceLimitsJobPostCallback.c)
 *     PspGetNextChildJob @ 0x140612F18 (PspGetNextChildJob.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x14065DDF0 (PspEvaluateAndNotifyEmptyJob.c)
 *     PspSendProcessNotificationToJobChain @ 0x14065DED8 (PspSendProcessNotificationToJobChain.c)
 *     PspRemoveProcessFromJobChain @ 0x14065DF9C (PspRemoveProcessFromJobChain.c)
 *     PspLockRootJobFromProcess @ 0x14065E290 (PspLockRootJobFromProcess.c)
 *     NtSetInformationJobObject @ 0x140660620 (NtSetInformationJobObject.c)
 *     PspAssignProcessToJob @ 0x1406741DC (PspAssignProcessToJob.c)
 *     PspGetNextJobProcess @ 0x140675270 (PspGetNextJobProcess.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406CBAEC (PspAllocateAndQueryNotificationChannel.c)
 *     PspQueryJobHierarchyProcessIdList @ 0x1406D7B64 (PspQueryJobHierarchyProcessIdList.c)
 *     PspJobNotificationWorker @ 0x1406DB700 (PspJobNotificationWorker.c)
 *     PspNotificationPacketCallback @ 0x1406E0730 (PspNotificationPacketCallback.c)
 *     PspJobClose @ 0x1406E0FD0 (PspJobClose.c)
 *     PsInsertPermanentSiloContextEx @ 0x1406EC374 (PsInsertPermanentSiloContextEx.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x140901D40 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspConvertSiloToServerSilo @ 0x140901E34 (PspConvertSiloToServerSilo.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x1409049A0 (PspQueryJobHierarchyInterferenceCount.c)
 *     PspQuitNextJobProcess @ 0x140904B4C (PspQuitNextJobProcess.c)
 *     PspSetNetRateControl @ 0x140905214 (PspSetNetRateControl.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 */

void __fastcall PspUnlockJob(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  _DWORD *v6; // r9

  ExReleaseResourceLite((PERESOURCE)(a1 + 56));
  if ( a2 )
  {
    if ( (*(_WORD *)(a2 + 486))++ == 0xFFFF && *(_QWORD *)(a2 + 152) != a2 + 152 )
      KiCheckForKernelApcDelivery(v4, v3, v5, v6);
  }
}
