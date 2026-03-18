/*
 * XREFs of PspScheduleEnforcementWorker @ 0x14069FBC0
 * Callers:
 *     NtSetInformationJobObject @ 0x140661780 (NtSetInformationJobObject.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x14069F850 (PspChangeJobMemoryUsageByProcess.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402D49A0 (ExQueueWorkItem.c)
 */

void __fastcall PspScheduleEnforcementWorker(__int64 a1)
{
  _InterlockedOr((volatile signed __int32 *)(a1 + 1320), 0x100000u);
  _m_prefetchw(&PspJobTimeLimitsWorkItemFlags);
  if ( (_InterlockedOr(&PspJobTimeLimitsWorkItemFlags, 6u) & 4) == 0 )
    ExQueueWorkItem(&PspJobTimeLimitsWorkItem, DelayedWorkQueue);
}
