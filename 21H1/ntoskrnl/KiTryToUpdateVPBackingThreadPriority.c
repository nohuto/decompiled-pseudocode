/*
 * XREFs of KiTryToUpdateVPBackingThreadPriority @ 0x14030F9B4
 * Callers:
 *     KiDeferredReadySingleThread @ 0x14024AB50 (KiDeferredReadySingleThread.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x1402EE520 (KiReleaseThreadLockSafe.c)
 *     KiUpdateVPBackingThreadPriority @ 0x140332400 (KiUpdateVPBackingThreadPriority.c)
 *     KiTryToAcquireThreadLock @ 0x1403348EC (KiTryToAcquireThreadLock.c)
 */

void __fastcall KiTryToUpdateVPBackingThreadPriority(ULONG_PTR BugCheckParameter1)
{
  char v2; // [rsp+40h] [rbp+18h] BYREF

  if ( (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) != 0
    && (unsigned __int8)KiTryToAcquireThreadLock(BugCheckParameter1, &v2) )
  {
    if ( (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) != 0 )
      KiUpdateVPBackingThreadPriority(BugCheckParameter1);
    KiReleaseThreadLockSafe(BugCheckParameter1);
  }
}
