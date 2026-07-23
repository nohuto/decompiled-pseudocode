/*
 * XREFs of _RtlTryAcquirePebLock@0 @ 0x4B2E0940
 * Callers:
 *     <none>
 * Callees:
 *     _RtlTryEnterCriticalSection@4 @ 0x4B2E0960 (_RtlTryEnterCriticalSection@4.c)
 */

LOGICAL RtlTryAcquirePebLock(void)
{
  return RtlTryEnterCriticalSection(NtCurrentPeb()->FastPebLock);
}
