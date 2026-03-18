/*
 * XREFs of UNLOCK_POST_LIST @ 0x1405E21D8
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x1405E2200 (NtNotifyChangeMultipleKeys.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140202EF0 (ExReleaseFastMutexUnsafe.c)
 */

void UNLOCK_POST_LIST()
{
  ExReleaseFastMutexUnsafe(&CmpPostLock);
}
