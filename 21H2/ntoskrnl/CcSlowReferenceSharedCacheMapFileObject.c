/*
 * XREFs of CcSlowReferenceSharedCacheMapFileObject @ 0x140300550
 * Callers:
 *     CcReferenceSharedCacheMapFileObject @ 0x140300520 (CcReferenceSharedCacheMapFileObject.c)
 * Callees:
 *     ObFastReferenceObjectLocked @ 0x1402AAC68 (ObFastReferenceObjectLocked.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 */

unsigned __int64 __fastcall CcSlowReferenceSharedCacheMapFileObject(__int64 a1)
{
  unsigned __int64 v2; // rbx

  ExAcquirePushLockSharedEx((ULONG_PTR)&CcChangeSharedCacheMapFileLock, 0LL);
  v2 = ObFastReferenceObjectLocked((_QWORD *)(a1 + 96));
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&CcChangeSharedCacheMapFileLock);
  KeAbPostRelease((ULONG_PTR)&CcChangeSharedCacheMapFileLock);
  return v2;
}
