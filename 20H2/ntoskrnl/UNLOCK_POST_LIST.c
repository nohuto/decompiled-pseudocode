/*
 * XREFs of UNLOCK_POST_LIST @ 0x1405F784C
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x1405F7BF0 (NtNotifyChangeMultipleKeys.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140209BE0 (ExReleaseFastMutexUnsafe.c)
 */

void UNLOCK_POST_LIST()
{
  ExReleaseFastMutexUnsafe(&CmpPostLock);
}
