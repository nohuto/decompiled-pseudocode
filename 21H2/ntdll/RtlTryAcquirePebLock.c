/*
 * XREFs of RtlTryAcquirePebLock @ 0x18007C5C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LOGICAL RtlTryAcquirePebLock(void)
{
  return RtlTryEnterCriticalSection(NtCurrentPeb()->FastPebLock);
}
