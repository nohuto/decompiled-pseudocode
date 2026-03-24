/*
 * XREFs of ExpReleaseFastMutexContended @ 0x1402F171C
 * Callers:
 *     ExReleaseFastMutexUnsafe @ 0x140206970 (ExReleaseFastMutexUnsafe.c)
 *     KeReleaseGuardedMutex @ 0x140265CD0 (KeReleaseGuardedMutex.c)
 *     FsRtlAcquireEofLock @ 0x1402907F0 (FsRtlAcquireEofLock.c)
 *     ExReleaseFastMutexUnsafeAndLeaveCriticalRegion @ 0x14029F330 (ExReleaseFastMutexUnsafeAndLeaveCriticalRegion.c)
 *     FsRtlReleaseEofLock @ 0x1402EEC80 (FsRtlReleaseEofLock.c)
 *     CcUnpinFileDataEx @ 0x1402F4630 (CcUnpinFileDataEx.c)
 *     CcSetDirtyPinnedData @ 0x1402F9310 (CcSetDirtyPinnedData.c)
 *     CcPinFileData @ 0x14031F630 (CcPinFileData.c)
 *     CcSetDirtyInMask @ 0x140336470 (CcSetDirtyInMask.c)
 *     FsRtlReleaseHeaderMutex @ 0x140348BA0 (FsRtlReleaseHeaderMutex.c)
 *     FsRtlCheckOplockEx2 @ 0x140353D20 (FsRtlCheckOplockEx2.c)
 *     CmpPerformSingleKcbCacheLookup @ 0x1406F2EB0 (CmpPerformSingleKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x1406FB610 (CmpDereferenceKeyControlBlock.c)
 * Callees:
 *     KeSetEventBoostPriorityEx @ 0x1402F1788 (KeSetEventBoostPriorityEx.c)
 */

__int64 __fastcall ExpReleaseFastMutexContended(volatile signed __int32 *a1, signed __int32 a2)
{
  int v3; // ecx
  bool v4; // zf
  __int64 result; // rax
  char v6; // [rsp+40h] [rbp+8h] BYREF
  int Priority; // [rsp+48h] [rbp+10h] BYREF

  do
  {
    v3 = a2 & 2;
    result = (unsigned int)_InterlockedCompareExchange(a1, a2 + (v3 != 0 ? 1 : -1), a2);
    v4 = a2 == (_DWORD)result;
    a2 = result;
  }
  while ( !v4 );
  if ( !v3 )
  {
    Priority = KeGetCurrentThread()->Priority;
    return KeSetEventBoostPriorityEx((int)a1 + 24, (unsigned int)&v6, (unsigned int)&Priority, (_DWORD)a1, 1, 1);
  }
  return result;
}
