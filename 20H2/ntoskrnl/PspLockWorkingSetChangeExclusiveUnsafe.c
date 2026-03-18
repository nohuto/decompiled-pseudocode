/*
 * XREFs of PspLockWorkingSetChangeExclusiveUnsafe @ 0x14057FF14
 * Callers:
 *     NtSetInformationJobObject @ 0x140661780 (NtSetInformationJobObject.c)
 *     PspSetQuotaLimits @ 0x1406C8ED4 (PspSetQuotaLimits.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 */

void PspLockWorkingSetChangeExclusiveUnsafe()
{
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C130B0, 0LL);
}
