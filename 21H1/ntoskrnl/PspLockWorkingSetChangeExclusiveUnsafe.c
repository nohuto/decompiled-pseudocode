/*
 * XREFs of PspLockWorkingSetChangeExclusiveUnsafe @ 0x14057BEA4
 * Callers:
 *     NtSetInformationJobObject @ 0x140660620 (NtSetInformationJobObject.c)
 *     PspSetQuotaLimits @ 0x1406D3274 (PspSetQuotaLimits.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 */

void PspLockWorkingSetChangeExclusiveUnsafe()
{
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C13070, 0LL);
}
