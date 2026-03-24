/*
 * XREFs of MiReleasePushLockUnordered @ 0x1402B7424
 * Callers:
 *     MiCoalesceFreePages @ 0x140235CA0 (MiCoalesceFreePages.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1402F1470 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 */

__int64 __fastcall MiReleasePushLockUnordered(volatile signed __int64 *BugCheckParameter2)
{
  if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(BugCheckParameter2);
  return KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
}
