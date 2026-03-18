/*
 * XREFs of ExpReleaseFastMutexContended @ 0x14035A82C
 * Callers:
 *     CcSetDirtyPinnedData @ 0x14022FAB0 (CcSetDirtyPinnedData.c)
 *     CcUnpinFileDataEx @ 0x1402305D0 (CcUnpinFileDataEx.c)
 *     FsRtlCheckOplockEx2 @ 0x140254990 (FsRtlCheckOplockEx2.c)
 *     ExReleaseFastMutexUnsafe @ 0x14025BE10 (ExReleaseFastMutexUnsafe.c)
 *     FsRtlReleaseHeaderMutex @ 0x140263AD0 (FsRtlReleaseHeaderMutex.c)
 *     KeReleaseGuardedMutex @ 0x140263BB0 (KeReleaseGuardedMutex.c)
 *     CcSetDirtyInMask @ 0x14027B2A0 (CcSetDirtyInMask.c)
 *     CcPinFileData @ 0x140286B20 (CcPinFileData.c)
 *     FsRtlAcquireEofLock @ 0x1402EAD60 (FsRtlAcquireEofLock.c)
 *     ExReleaseFastMutexUnsafeAndLeaveCriticalRegion @ 0x1402F32A0 (ExReleaseFastMutexUnsafeAndLeaveCriticalRegion.c)
 *     FsRtlReleaseEofLock @ 0x14035AE20 (FsRtlReleaseEofLock.c)
 *     CmpDereferenceKeyControlBlock @ 0x140624030 (CmpDereferenceKeyControlBlock.c)
 *     CmpPerformSingleKcbCacheLookup @ 0x1406265A0 (CmpPerformSingleKcbCacheLookup.c)
 * Callees:
 *     KeSetEventBoostPriorityEx @ 0x14035A898 (KeSetEventBoostPriorityEx.c)
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
