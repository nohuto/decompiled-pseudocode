/*
 * XREFs of KiTryToUpdateVPBackingThreadPriority @ 0x14034D084
 * Callers:
 *     KiDeferredReadySingleThread @ 0x1402873F0 (KiDeferredReadySingleThread.c)
 * Callees:
 *     KiUpdateVPBackingThreadPriority @ 0x1402ED2C0 (KiUpdateVPBackingThreadPriority.c)
 *     KiTryToAcquireThreadLock @ 0x1402EF7AC (KiTryToAcquireThreadLock.c)
 *     KiReleaseThreadLockSafe @ 0x140327E50 (KiReleaseThreadLockSafe.c)
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
