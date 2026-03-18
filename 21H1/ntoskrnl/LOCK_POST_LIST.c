/*
 * XREFs of LOCK_POST_LIST @ 0x14061828C
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x1405F4060 (NtNotifyChangeMultipleKeys.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x14025BC80 (ExAcquireFastMutexUnsafe.c)
 */

void LOCK_POST_LIST()
{
  ExAcquireFastMutexUnsafe(&CmpPostLock);
}
