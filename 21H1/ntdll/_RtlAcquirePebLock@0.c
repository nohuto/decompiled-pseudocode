/*
 * XREFs of _RtlAcquirePebLock@0 @ 0x4B2EA840
 * Callers:
 *     <none>
 * Callees:
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 */

NTSTATUS RtlAcquirePebLock(void)
{
  return RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
}
