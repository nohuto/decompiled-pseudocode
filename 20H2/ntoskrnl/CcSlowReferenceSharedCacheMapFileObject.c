/*
 * XREFs of CcSlowReferenceSharedCacheMapFileObject @ 0x140248024
 * Callers:
 *     CcReferenceSharedCacheMapFileObject @ 0x140247FF4 (CcReferenceSharedCacheMapFileObject.c)
 * Callees:
 *     ObFastReferenceObjectLocked @ 0x140209828 (ObFastReferenceObjectLocked.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
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
