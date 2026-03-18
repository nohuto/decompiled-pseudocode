/*
 * XREFs of PspLockJobExclusive @ 0x140665CF4
 * Callers:
 *     PspJobDelete @ 0x14035D490 (PspJobDelete.c)
 *     PspCreateSilo @ 0x1405D613C (PspCreateSilo.c)
 *     PspGetNextJobProcess @ 0x14062C0F0 (PspGetNextJobProcess.c)
 *     PspAssignProcessToJob @ 0x14062CE24 (PspAssignProcessToJob.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x14062F0C4 (PspEvaluateAndNotifyEmptyJob.c)
 *     PspLockRootJobFromProcess @ 0x140663854 (PspLockRootJobFromProcess.c)
 *     NtQueryInformationJobObject @ 0x140663E00 (NtQueryInformationJobObject.c)
 *     PspCallJobHierarchyCallbacks @ 0x140665774 (PspCallJobHierarchyCallbacks.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1406658A0 (PspEnforceLimitsJobPostCallback.c)
 *     PspJobNotificationWorker @ 0x1406A0750 (PspJobNotificationWorker.c)
 *     PspNotificationPacketCallback @ 0x1406D6510 (PspNotificationPacketCallback.c)
 *     PspJobClose @ 0x1406D7000 (PspJobClose.c)
 *     PspConvertSiloToServerSilo @ 0x1409088A4 (PspConvertSiloToServerSilo.c)
 *     PspQuitNextJobProcess @ 0x14090BA4C (PspQuitNextJobProcess.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140221C70 (ExAcquireResourceExclusiveLite.c)
 */

BOOLEAN __fastcall PspLockJobExclusive(__int64 a1, __int64 a2)
{
  if ( a2 )
    --*(_WORD *)(a2 + 486);
  return ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
}
