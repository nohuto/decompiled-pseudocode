/*
 * XREFs of KiTryToUpdateVPBackingThreadPriority @ 0x1402BF714
 * Callers:
 *     KiDeferredReadySingleThread @ 0x140343EC0 (KiDeferredReadySingleThread.c)
 * Callees:
 *     KiUpdateVPBackingThreadPriority @ 0x140258E10 (KiUpdateVPBackingThreadPriority.c)
 *     KiReleaseThreadLockSafe @ 0x14029A860 (KiReleaseThreadLockSafe.c)
 *     KiTryToAcquireThreadLock @ 0x1402AB270 (KiTryToAcquireThreadLock.c)
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
