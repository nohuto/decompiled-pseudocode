/*
 * XREFs of ExpAcquireFastMutexContended @ 0x1402F2BC0
 * Callers:
 *     ExAcquireFastMutexUnsafe @ 0x1402067E0 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlAcquireEofLock @ 0x1402907F0 (FsRtlAcquireEofLock.c)
 *     ExEnterCriticalRegionAndAcquireFastMutexUnsafe @ 0x14029E0D0 (ExEnterCriticalRegionAndAcquireFastMutexUnsafe.c)
 *     FsRtlReleaseEofLock @ 0x1402EEC80 (FsRtlReleaseEofLock.c)
 *     KeAcquireGuardedMutex @ 0x1402EF360 (KeAcquireGuardedMutex.c)
 *     CcUnpinFileDataEx @ 0x1402F4630 (CcUnpinFileDataEx.c)
 *     CcSetDirtyPinnedData @ 0x1402F9310 (CcSetDirtyPinnedData.c)
 *     CcPinFileData @ 0x14031F630 (CcPinFileData.c)
 *     CcSetDirtyInMask @ 0x140336470 (CcSetDirtyInMask.c)
 *     FsRtlAcquireHeaderMutex @ 0x140349070 (FsRtlAcquireHeaderMutex.c)
 *     ExAcquireFastMutex @ 0x14034A080 (ExAcquireFastMutex.c)
 *     FsRtlCheckOplockEx2 @ 0x140353D20 (FsRtlCheckOplockEx2.c)
 *     CmpPerformSingleKcbCacheLookup @ 0x1406F2EB0 (CmpPerformSingleKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x1406FB610 (CmpDereferenceKeyControlBlock.c)
 * Callees:
 *     KeAbPreWait @ 0x1402F30C0 (KeAbPreWait.c)
 *     KeWaitForSingleObject @ 0x140345770 (KeWaitForSingleObject.c)
 *     KeAbPreAcquire @ 0x14034A230 (KeAbPreAcquire.c)
 */

__int64 __fastcall ExpAcquireFastMutexContended(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  int v2; // ebp
  int v5; // esi
  __int64 result; // rax
  int v7; // ett
  int v8; // ett

  ++*(_DWORD *)(BugCheckParameter2 + 16);
  v2 = 1;
  v5 = 4;
LABEL_2:
  LODWORD(result) = *(_DWORD *)BugCheckParameter2;
  do
  {
    while ( (result & 1) == 0 )
    {
      v8 = result;
      LODWORD(result) = _InterlockedCompareExchange((volatile signed __int32 *)BugCheckParameter2, v5 + result, result);
      if ( v8 == (_DWORD)result )
      {
        if ( a2 )
          KeAbPreWait(a2);
        KeWaitForSingleObject((PVOID)(BugCheckParameter2 + 24), WrFastMutex, 0, 0, 0LL);
        _m_prefetchw((const void *)BugCheckParameter2);
        v2 = 3;
        v5 = 2;
        if ( a2 )
          a2 = KeAbPreAcquire(BugCheckParameter2);
        goto LABEL_2;
      }
    }
    v7 = result;
    result = (unsigned int)_InterlockedCompareExchange(
                             (volatile signed __int32 *)BugCheckParameter2,
                             v2 ^ result,
                             result);
  }
  while ( v7 != (_DWORD)result );
  return result;
}
