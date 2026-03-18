/*
 * XREFs of MiReleasePushLockUnordered @ 0x1403057C4
 * Callers:
 *     MiCoalesceFreePages @ 0x140297E40 (MiCoalesceFreePages.c)
 * Callees:
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 */

char __fastcall MiReleasePushLockUnordered(volatile signed __int64 *BugCheckParameter2)
{
  if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(BugCheckParameter2);
  return KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
}
