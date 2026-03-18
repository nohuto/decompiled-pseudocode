/*
 * XREFs of PspLockJobMemoryLimitsShared @ 0x14065A4F0
 * Callers:
 *     PspApplyJobLimitsToProcess @ 0x14065A394 (PspApplyJobLimitsToProcess.c)
 *     PspEnforceLimitsJobPostCallback @ 0x14068A6E0 (PspEnforceLimitsJobPostCallback.c)
 *     NtQueryInformationJobObject @ 0x140698FB0 (NtQueryInformationJobObject.c)
 *     PsReportProcessMemoryLimitViolation @ 0x140905544 (PsReportProcessMemoryLimitViolation.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall PspLockJobMemoryLimitsShared(__int64 a1, __int64 a2)
{
  if ( a2 )
    --*(_WORD *)(a2 + 486);
  return ExAcquirePushLockSharedEx(a1 + 1032, 0LL);
}
