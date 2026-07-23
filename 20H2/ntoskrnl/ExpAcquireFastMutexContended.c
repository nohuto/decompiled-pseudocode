/*
 * XREFs of ExpAcquireFastMutexContended @ 0x140241B40
 * Callers:
 *     ExAcquireFastMutexUnsafe @ 0x140209A50 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlCheckOplockEx2 @ 0x14020C800 (FsRtlCheckOplockEx2.c)
 *     FsRtlAcquireHeaderMutex @ 0x14021F120 (FsRtlAcquireHeaderMutex.c)
 *     ExAcquireFastMutex @ 0x140220130 (ExAcquireFastMutex.c)
 *     FsRtlReleaseEofLock @ 0x1402404B0 (FsRtlReleaseEofLock.c)
 *     CcSetDirtyPinnedData @ 0x140241270 (CcSetDirtyPinnedData.c)
 *     KeAcquireGuardedMutex @ 0x140241970 (KeAcquireGuardedMutex.c)
 *     CcUnpinFileDataEx @ 0x14029D060 (CcUnpinFileDataEx.c)
 *     CcPinFileData @ 0x1402A2D80 (CcPinFileData.c)
 *     CcSetDirtyInMask @ 0x1402B96C0 (CcSetDirtyInMask.c)
 *     FsRtlAcquireEofLock @ 0x1402F4650 (FsRtlAcquireEofLock.c)
 *     ExEnterCriticalRegionAndAcquireFastMutexUnsafe @ 0x140302B90 (ExEnterCriticalRegionAndAcquireFastMutexUnsafe.c)
 *     CmpPerformSingleKcbCacheLookup @ 0x140613BB0 (CmpPerformSingleKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x14061B720 (CmpDereferenceKeyControlBlock.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     KeAbPreAcquire @ 0x1402202E0 (KeAbPreAcquire.c)
 *     KeAbPreWait @ 0x140242040 (KeAbPreWait.c)
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
          a2 = KeAbPreAcquire(BugCheckParameter2, a2, 0);
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
