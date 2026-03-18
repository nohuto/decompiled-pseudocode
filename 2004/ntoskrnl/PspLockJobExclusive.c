/*
 * XREFs of PspLockJobExclusive @ 0x14068AB34
 * Callers:
 *     PspJobDelete @ 0x14027ABB0 (PspJobDelete.c)
 *     PspCreateSilo @ 0x1405CFC8C (PspCreateSilo.c)
 *     PspJobClose @ 0x1406562A0 (PspJobClose.c)
 *     PspGetNextJobProcess @ 0x140657B30 (PspGetNextJobProcess.c)
 *     PspAssignProcessToJob @ 0x140658924 (PspAssignProcessToJob.c)
 *     PspLockRootJobFromProcess @ 0x14065A918 (PspLockRootJobFromProcess.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x14065ADD0 (PspEvaluateAndNotifyEmptyJob.c)
 *     PspCallJobHierarchyCallbacks @ 0x14068A5BC (PspCallJobHierarchyCallbacks.c)
 *     PspEnforceLimitsJobPostCallback @ 0x14068A6E0 (PspEnforceLimitsJobPostCallback.c)
 *     NtQueryInformationJobObject @ 0x140698FB0 (NtQueryInformationJobObject.c)
 *     PspJobNotificationWorker @ 0x1406FE770 (PspJobNotificationWorker.c)
 *     PspNotificationPacketCallback @ 0x1407034C0 (PspNotificationPacketCallback.c)
 *     PspConvertSiloToServerSilo @ 0x140902C94 (PspConvertSiloToServerSilo.c)
 *     PspQuitNextJobProcess @ 0x140905E2C (PspQuitNextJobProcess.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140208CF0 (ExAcquireResourceExclusiveLite.c)
 */

BOOLEAN __fastcall PspLockJobExclusive(__int64 a1, __int64 a2)
{
  if ( a2 )
    --*(_WORD *)(a2 + 486);
  return ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
}
