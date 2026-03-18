/*
 * XREFs of MiReleasePushLockUnordered @ 0x140343214
 * Callers:
 *     MiCoalesceFreePages @ 0x14023EE10 (MiCoalesceFreePages.c)
 * Callees:
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 */

char __fastcall MiReleasePushLockUnordered(signed __int64 *BugCheckParameter2)
{
  if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(BugCheckParameter2);
  return KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
}
