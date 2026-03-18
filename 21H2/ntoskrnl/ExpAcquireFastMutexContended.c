/*
 * XREFs of ExpAcquireFastMutexContended @ 0x14029EF4C
 * Callers:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     CcUnpinFileDataEx @ 0x14028A370 (CcUnpinFileDataEx.c)
 *     CcSetDirtyPinnedData @ 0x14029D3D0 (CcSetDirtyPinnedData.c)
 *     CcSetDirtyInMask @ 0x14029D860 (CcSetDirtyInMask.c)
 *     KeAcquireGuardedMutex @ 0x14029ECC0 (KeAcquireGuardedMutex.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlCheckOplockEx2 @ 0x1402A5D00 (FsRtlCheckOplockEx2.c)
 *     CcPinFileData @ 0x14032AD00 (CcPinFileData.c)
 *     FsRtlAcquireHeaderMutex @ 0x140347B70 (FsRtlAcquireHeaderMutex.c)
 *     FsRtlReleaseEofLock @ 0x140358CC0 (FsRtlReleaseEofLock.c)
 *     ExEnterCriticalRegionAndAcquireFastMutexUnsafe @ 0x140359B80 (ExEnterCriticalRegionAndAcquireFastMutexUnsafe.c)
 *     FsRtlAcquireEofLock @ 0x14035D230 (FsRtlAcquireEofLock.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1407350A0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1407362A0 (CmpDoParseKey.c)
 *     CmpDelayCloseWorker @ 0x1407C0D40 (CmpDelayCloseWorker.c)
 *     CmpDeleteKeyObject @ 0x1407C2680 (CmpDeleteKeyObject.c)
 * Callees:
 *     KeAbPreWait @ 0x14029F580 (KeAbPreWait.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 */

__int64 __fastcall ExpAcquireFastMutexContended(__int64 a1, __int64 a2)
{
  int v2; // ebp
  int v5; // esi
  __int64 result; // rax
  int v7; // ett
  int v8; // ett

  ++*(_DWORD *)(a1 + 16);
  v2 = 1;
  v5 = 4;
LABEL_2:
  LODWORD(result) = *(_DWORD *)a1;
  do
  {
    while ( (result & 1) == 0 )
    {
      v8 = result;
      LODWORD(result) = _InterlockedCompareExchange((volatile signed __int32 *)a1, v5 + result, result);
      if ( v8 == (_DWORD)result )
      {
        if ( a2 )
          KeAbPreWait(a2);
        KeWaitForSingleObject((PVOID)(a1 + 24), WrFastMutex, 0, 0, 0LL);
        _m_prefetchw((const void *)a1);
        v2 = 3;
        v5 = 2;
        if ( a2 )
          a2 = KeAbPreAcquire(a1, a2, 0LL);
        goto LABEL_2;
      }
    }
    v7 = result;
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)a1, v2 ^ result, result);
  }
  while ( v7 != (_DWORD)result );
  return result;
}
