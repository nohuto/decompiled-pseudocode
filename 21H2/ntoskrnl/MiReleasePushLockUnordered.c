/*
 * XREFs of MiReleasePushLockUnordered @ 0x140235604
 * Callers:
 *     MiCoalesceFreePages @ 0x1402DA4F0 (MiCoalesceFreePages.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 */

__int64 __fastcall MiReleasePushLockUnordered(volatile signed __int64 *BugCheckParameter2)
{
  if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(BugCheckParameter2);
  return KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
}
