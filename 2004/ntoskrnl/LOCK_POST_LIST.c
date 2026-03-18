/*
 * XREFs of LOCK_POST_LIST @ 0x1405E21BC
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x1405E2200 (NtNotifyChangeMultipleKeys.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140202D60 (ExAcquireFastMutexUnsafe.c)
 */

void LOCK_POST_LIST()
{
  ExAcquireFastMutexUnsafe(&CmpPostLock);
}
