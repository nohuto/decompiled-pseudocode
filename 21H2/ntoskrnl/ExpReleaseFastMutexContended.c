/*
 * XREFs of ExpReleaseFastMutexContended @ 0x1402FC46C
 * Callers:
 *     FsRtlAcquireEofLock @ 0x14020E760 (FsRtlAcquireEofLock.c)
 *     ExReleaseFastMutexUnsafeAndLeaveCriticalRegion @ 0x14021C890 (ExReleaseFastMutexUnsafeAndLeaveCriticalRegion.c)
 *     KeReleaseGuardedMutex @ 0x140253C70 (KeReleaseGuardedMutex.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402AB2A0 (ExReleaseFastMutexUnsafe.c)
 *     FsRtlReleaseEofLock @ 0x1402F99D0 (FsRtlReleaseEofLock.c)
 *     CcUnpinFileDataEx @ 0x1402FF380 (CcUnpinFileDataEx.c)
 *     CcSetDirtyPinnedData @ 0x140304060 (CcSetDirtyPinnedData.c)
 *     CcPinFileData @ 0x14032A380 (CcPinFileData.c)
 *     CcSetDirtyInMask @ 0x1403411C0 (CcSetDirtyInMask.c)
 *     FsRtlReleaseHeaderMutex @ 0x1403538F0 (FsRtlReleaseHeaderMutex.c)
 *     FsRtlCheckOplockEx2 @ 0x14035EA70 (FsRtlCheckOplockEx2.c)
 *     CmpPerformSingleKcbCacheLookup @ 0x14070A290 (CmpPerformSingleKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x1407129F0 (CmpDereferenceKeyControlBlock.c)
 * Callees:
 *     KeSetEventBoostPriorityEx @ 0x1402FC4D8 (KeSetEventBoostPriorityEx.c)
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
