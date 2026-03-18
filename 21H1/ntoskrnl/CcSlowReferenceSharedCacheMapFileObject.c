/*
 * XREFs of CcSlowReferenceSharedCacheMapFileObject @ 0x140232684
 * Callers:
 *     CcReferenceSharedCacheMapFileObject @ 0x140232654 (CcReferenceSharedCacheMapFileObject.c)
 * Callees:
 *     ObFastReferenceObjectLocked @ 0x14025B058 (ObFastReferenceObjectLocked.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall CcSlowReferenceSharedCacheMapFileObject(__int64 a1)
{
  __int64 v2; // rbx

  ExAcquirePushLockSharedEx((ULONG_PTR)&CcChangeSharedCacheMapFileLock, 0LL);
  v2 = ObFastReferenceObjectLocked(a1 + 96);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(&CcChangeSharedCacheMapFileLock);
  KeAbPostRelease((ULONG_PTR)&CcChangeSharedCacheMapFileLock);
  return v2;
}
