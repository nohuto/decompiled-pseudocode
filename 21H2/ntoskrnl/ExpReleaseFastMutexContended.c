/*
 * XREFs of ExpReleaseFastMutexContended @ 0x140359548
 * Callers:
 *     ExReleaseFastMutexUnsafeAndLeaveCriticalRegion @ 0x14022A110 (ExReleaseFastMutexUnsafeAndLeaveCriticalRegion.c)
 *     CcUnpinFileDataEx @ 0x14028A370 (CcUnpinFileDataEx.c)
 *     CcSetDirtyPinnedData @ 0x14029D3D0 (CcSetDirtyPinnedData.c)
 *     CcSetDirtyInMask @ 0x14029D860 (CcSetDirtyInMask.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     FsRtlCheckOplockEx2 @ 0x1402A5D00 (FsRtlCheckOplockEx2.c)
 *     FsRtlReleaseHeaderMutex @ 0x1402AE130 (FsRtlReleaseHeaderMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     CcPinFileData @ 0x14032AD00 (CcPinFileData.c)
 *     FsRtlReleaseEofLock @ 0x140358CC0 (FsRtlReleaseEofLock.c)
 *     FsRtlAcquireEofLock @ 0x14035D230 (FsRtlAcquireEofLock.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1407350A0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1407362A0 (CmpDoParseKey.c)
 *     CmpDelayCloseWorker @ 0x1407C0D40 (CmpDelayCloseWorker.c)
 *     CmpDeleteKeyObject @ 0x1407C2680 (CmpDeleteKeyObject.c)
 * Callees:
 *     KeSetEventBoostPriorityEx @ 0x1403595B4 (KeSetEventBoostPriorityEx.c)
 */

__int64 __fastcall ExpReleaseFastMutexContended(volatile signed __int32 *a1, signed __int32 a2)
{
  int v3; // ecx
  bool v4; // zf
  __int64 result; // rax

  do
  {
    v3 = a2 & 2;
    result = (unsigned int)_InterlockedCompareExchange(a1, a2 + (v3 != 0 ? 1 : -1), a2);
    v4 = a2 == (_DWORD)result;
    a2 = result;
  }
  while ( !v4 );
  if ( !v3 )
    return KeSetEventBoostPriorityEx((PVOID)(a1 + 6), 1, 1);
  return result;
}
