/*
 * XREFs of KiTryToUpdateVPBackingThreadPriority @ 0x14023DB64
 * Callers:
 *     KiDeferredReadySingleThread @ 0x14034EC10 (KiDeferredReadySingleThread.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x1402121F0 (KiReleaseThreadLockSafe.c)
 *     KiTryToAcquireThreadLock @ 0x1402293B0 (KiTryToAcquireThreadLock.c)
 *     KiUpdateVPBackingThreadPriority @ 0x14027A380 (KiUpdateVPBackingThreadPriority.c)
 */

void __fastcall KiTryToUpdateVPBackingThreadPriority(ULONG_PTR BugCheckParameter1)
{
  char v2; // [rsp+40h] [rbp+18h] BYREF

  if ( (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) != 0 && KiTryToAcquireThreadLock(BugCheckParameter1, &v2) )
  {
    if ( (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) != 0 )
      KiUpdateVPBackingThreadPriority(BugCheckParameter1);
    KiReleaseThreadLockSafe(BugCheckParameter1);
  }
}
