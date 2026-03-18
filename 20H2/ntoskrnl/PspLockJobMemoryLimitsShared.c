/*
 * XREFs of PspLockJobMemoryLimitsShared @ 0x140665F6C
 * Callers:
 *     PspApplyJobLimitsToProcess @ 0x14062EEB4 (PspApplyJobLimitsToProcess.c)
 *     NtQueryInformationJobObject @ 0x140663E00 (NtQueryInformationJobObject.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1406658A0 (PspEnforceLimitsJobPostCallback.c)
 *     PsReportProcessMemoryLimitViolation @ 0x14090B164 (PsReportProcessMemoryLimitViolation.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall PspLockJobMemoryLimitsShared(__int64 a1, __int64 a2)
{
  if ( a2 )
    --*(_WORD *)(a2 + 486);
  return ExAcquirePushLockSharedEx(a1 + 1032, 0LL);
}
