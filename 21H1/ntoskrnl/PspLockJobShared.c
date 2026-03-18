/*
 * XREFs of PspLockJobShared @ 0x1406129DC
 * Callers:
 *     NtQueryInformationJobObject @ 0x1405EFAA0 (NtQueryInformationJobObject.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140612238 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspCallJobHierarchyCallbacks @ 0x14061243C (PspCallJobHierarchyCallbacks.c)
 *     PspEnforceLimitsJobPostCallback @ 0x140612560 (PspEnforceLimitsJobPostCallback.c)
 *     PspGetNextChildJob @ 0x140612F18 (PspGetNextChildJob.c)
 *     PspQueryJobHierarchyProcessIdList @ 0x1406D7B64 (PspQueryJobHierarchyProcessIdList.c)
 *     PsInsertPermanentSiloContextEx @ 0x1406EC374 (PsInsertPermanentSiloContextEx.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x140901D40 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x1409049A0 (PspQueryJobHierarchyInterferenceCount.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140261FD0 (ExAcquireResourceSharedLite.c)
 */

BOOLEAN __fastcall PspLockJobShared(__int64 a1, __int64 a2)
{
  if ( a2 )
    --*(_WORD *)(a2 + 486);
  return ExAcquireResourceSharedLite((PERESOURCE)(a1 + 56), 1u);
}
