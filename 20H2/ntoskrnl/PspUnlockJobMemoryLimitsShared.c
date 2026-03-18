/*
 * XREFs of PspUnlockJobMemoryLimitsShared @ 0x140665EBC
 * Callers:
 *     PspApplyJobLimitsToProcess @ 0x14062EEB4 (PspApplyJobLimitsToProcess.c)
 *     NtSetInformationJobObject @ 0x140661780 (NtSetInformationJobObject.c)
 *     NtQueryInformationJobObject @ 0x140663E00 (NtQueryInformationJobObject.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1406658A0 (PspEnforceLimitsJobPostCallback.c)
 *     PsReportProcessMemoryLimitViolation @ 0x14090B164 (PsReportProcessMemoryLimitViolation.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 */

char __fastcall PspUnlockJobMemoryLimitsShared(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rbx
  char result; // al

  v2 = a1 + 1032;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1032), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 1032));
  result = KeAbPostRelease(v2);
  if ( a2 )
    return KiLeaveGuardedRegionUnsafe(a2);
  return result;
}
