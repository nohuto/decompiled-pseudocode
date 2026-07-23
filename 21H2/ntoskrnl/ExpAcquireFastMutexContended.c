/*
 * XREFs of ExpAcquireFastMutexContended @ 0x1402FD910
 * Callers:
 *     FsRtlAcquireEofLock @ 0x14020E760 (FsRtlAcquireEofLock.c)
 *     ExEnterCriticalRegionAndAcquireFastMutexUnsafe @ 0x14021B630 (ExEnterCriticalRegionAndAcquireFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402AB110 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlReleaseEofLock @ 0x1402F99D0 (FsRtlReleaseEofLock.c)
 *     KeAcquireGuardedMutex @ 0x1402FA0B0 (KeAcquireGuardedMutex.c)
 *     CcUnpinFileDataEx @ 0x1402FF380 (CcUnpinFileDataEx.c)
 *     CcSetDirtyPinnedData @ 0x140304060 (CcSetDirtyPinnedData.c)
 *     CcPinFileData @ 0x14032A380 (CcPinFileData.c)
 *     CcSetDirtyInMask @ 0x1403411C0 (CcSetDirtyInMask.c)
 *     FsRtlAcquireHeaderMutex @ 0x140353DC0 (FsRtlAcquireHeaderMutex.c)
 *     ExAcquireFastMutex @ 0x140354DD0 (ExAcquireFastMutex.c)
 *     FsRtlCheckOplockEx2 @ 0x14035EA70 (FsRtlCheckOplockEx2.c)
 *     CmpPerformSingleKcbCacheLookup @ 0x14070A290 (CmpPerformSingleKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x1407129F0 (CmpDereferenceKeyControlBlock.c)
 * Callees:
 *     KeAbPreWait @ 0x1402FDE10 (KeAbPreWait.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     KeAbPreAcquire @ 0x140354F80 (KeAbPreAcquire.c)
 */

__int64 __fastcall ExpAcquireFastMutexContended(ULONG_PTR BugCheckParameter2, PRTL_BALANCED_NODE Node)
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
        if ( Node )
          KeAbPreWait(Node);
        KeWaitForSingleObject((PVOID)(BugCheckParameter2 + 24), WrFastMutex, 0, 0, 0LL);
        _m_prefetchw((const void *)BugCheckParameter2);
        v2 = 3;
        v5 = 2;
        if ( Node )
          Node = (PRTL_BALANCED_NODE)KeAbPreAcquire(BugCheckParameter2, Node);
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
