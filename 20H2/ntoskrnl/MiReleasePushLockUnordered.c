/*
 * XREFs of MiReleasePushLockUnordered @ 0x1403146C4
 * Callers:
 *     MiCoalesceFreePages @ 0x1402C44C0 (MiCoalesceFreePages.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 */

char __fastcall MiReleasePushLockUnordered(signed __int64 *BugCheckParameter2)
{
  if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(BugCheckParameter2);
  return KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
}
