/*
 * XREFs of UNLOCK_POST_LIST @ 0x1406182A8
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x1405F4060 (NtNotifyChangeMultipleKeys.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x14025BE10 (ExReleaseFastMutexUnsafe.c)
 */

void UNLOCK_POST_LIST()
{
  ExReleaseFastMutexUnsafe(&CmpPostLock);
}
