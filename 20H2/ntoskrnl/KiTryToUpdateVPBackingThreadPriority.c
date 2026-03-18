/*
 * XREFs of KiTryToUpdateVPBackingThreadPriority @ 0x14031DC54
 * Callers:
 *     KiDeferredReadySingleThread @ 0x140219BA0 (KiDeferredReadySingleThread.c)
 * Callees:
 *     KiTryToAcquireThreadLock @ 0x1402D8D68 (KiTryToAcquireThreadLock.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1402DBE70 (KiUpdateVPBackingThreadPriority.c)
 *     KiReleaseThreadLockSafe @ 0x1402F9ED0 (KiReleaseThreadLockSafe.c)
 */

void __fastcall KiTryToUpdateVPBackingThreadPriority(ULONG_PTR BugCheckParameter1, __int64 a2)
{
  char v4; // [rsp+40h] [rbp+18h] BYREF

  if ( (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) != 0 && KiTryToAcquireThreadLock(BugCheckParameter1, &v4) )
  {
    if ( (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) != 0 )
      KiUpdateVPBackingThreadPriority(BugCheckParameter1, a2, 0);
    KiReleaseThreadLockSafe(BugCheckParameter1);
  }
}
