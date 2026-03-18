/*
 * XREFs of ExpReleaseFastMutexContended @ 0x140274B8C
 * Callers:
 *     ExReleaseFastMutexUnsafe @ 0x140202EF0 (ExReleaseFastMutexUnsafe.c)
 *     FsRtlReleaseHeaderMutex @ 0x14020ABB0 (FsRtlReleaseHeaderMutex.c)
 *     KeReleaseGuardedMutex @ 0x14020AC90 (KeReleaseGuardedMutex.c)
 *     CcSetDirtyInMask @ 0x140222250 (CcSetDirtyInMask.c)
 *     CcPinFileData @ 0x14022DAD0 (CcPinFileData.c)
 *     FsRtlReleaseEofLock @ 0x140273750 (FsRtlReleaseEofLock.c)
 *     FsRtlCheckOplockEx2 @ 0x140291210 (FsRtlCheckOplockEx2.c)
 *     CcSetDirtyPinnedData @ 0x1402C28E0 (CcSetDirtyPinnedData.c)
 *     CcUnpinFileDataEx @ 0x1402C3400 (CcUnpinFileDataEx.c)
 *     FsRtlAcquireEofLock @ 0x140324690 (FsRtlAcquireEofLock.c)
 *     ExReleaseFastMutexUnsafeAndLeaveCriticalRegion @ 0x14032FEA0 (ExReleaseFastMutexUnsafeAndLeaveCriticalRegion.c)
 *     CmpDereferenceKeyControlBlock @ 0x1405EEA10 (CmpDereferenceKeyControlBlock.c)
 *     CmpPerformSingleKcbCacheLookup @ 0x1405F0F80 (CmpPerformSingleKcbCacheLookup.c)
 * Callees:
 *     KeSetEventBoostPriorityEx @ 0x140274BF8 (KeSetEventBoostPriorityEx.c)
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
