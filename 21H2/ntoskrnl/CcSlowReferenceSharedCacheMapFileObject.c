/*
 * XREFs of CcSlowReferenceSharedCacheMapFileObject @ 0x14027B4B8
 * Callers:
 *     CcReferenceSharedCacheMapFileObject @ 0x14027A1B4 (CcReferenceSharedCacheMapFileObject.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 */

void *__fastcall CcSlowReferenceSharedCacheMapFileObject(__int64 a1)
{
  void *v2; // rbx

  ExAcquirePushLockSharedEx((ULONG_PTR)&CcChangeSharedCacheMapFileLock, 0LL);
  v2 = (void *)(*(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF0uLL);
  if ( v2 )
    ObfReferenceObjectWithTag(v2, 0x63536343u);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(&CcChangeSharedCacheMapFileLock);
  KeAbPostRelease((ULONG_PTR)&CcChangeSharedCacheMapFileLock);
  return v2;
}
