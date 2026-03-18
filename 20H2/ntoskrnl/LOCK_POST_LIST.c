/*
 * XREFs of LOCK_POST_LIST @ 0x1405F7868
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x1405F7BF0 (NtNotifyChangeMultipleKeys.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140209A50 (ExAcquireFastMutexUnsafe.c)
 */

void LOCK_POST_LIST()
{
  ExAcquireFastMutexUnsafe(&CmpPostLock);
}
