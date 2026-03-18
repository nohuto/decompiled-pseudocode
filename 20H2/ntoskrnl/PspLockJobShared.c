/*
 * XREFs of PspLockJobShared @ 0x140665D1C
 * Callers:
 *     PspQueryJobHierarchyProcessIdList @ 0x140661680 (PspQueryJobHierarchyProcessIdList.c)
 *     NtQueryInformationJobObject @ 0x140663E00 (NtQueryInformationJobObject.c)
 *     PspGetNextChildJob @ 0x1406652DC (PspGetNextChildJob.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140665570 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspCallJobHierarchyCallbacks @ 0x140665774 (PspCallJobHierarchyCallbacks.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1406658A0 (PspEnforceLimitsJobPostCallback.c)
 *     PsInsertPermanentSiloContextEx @ 0x1406A0B74 (PsInsertPermanentSiloContextEx.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x1409087B0 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x14090B8A0 (PspQueryJobHierarchyInterferenceCount.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140222030 (ExAcquireResourceSharedLite.c)
 */

BOOLEAN __fastcall PspLockJobShared(__int64 a1, __int64 a2)
{
  if ( a2 )
    --*(_WORD *)(a2 + 486);
  return ExAcquireResourceSharedLite((PERESOURCE)(a1 + 56), 1u);
}
