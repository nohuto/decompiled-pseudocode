/*
 * XREFs of PspLockWorkingSetChangeExclusiveUnsafe @ 0x14057C4E4
 * Callers:
 *     NtSetInformationJobObject @ 0x14061AF00 (NtSetInformationJobObject.c)
 *     PspSetQuotaLimits @ 0x1406F5E44 (PspSetQuotaLimits.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 */

void PspLockWorkingSetChangeExclusiveUnsafe()
{
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C130B0, 0LL);
}
