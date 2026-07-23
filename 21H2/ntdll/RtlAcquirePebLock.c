/*
 * XREFs of RtlAcquirePebLock @ 0x18007AAC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS RtlAcquirePebLock(void)
{
  return RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
}
