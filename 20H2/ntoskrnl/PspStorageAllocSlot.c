/*
 * XREFs of PspStorageAllocSlot @ 0x14078B328
 * Callers:
 *     PsAllocSiloContextSlot @ 0x14078B200 (PsAllocSiloContextSlot.c)
 *     PsRegisterSiloMonitor @ 0x14078B220 (PsRegisterSiloMonitor.c)
 *     CmpInitSiloSupport @ 0x14079B640 (CmpInitSiloSupport.c)
 *     VRegSetup @ 0x1407C6BD0 (VRegSetup.c)
 *     PspInitializeSiloStructures @ 0x140A3F044 (PspInitializeSiloStructures.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     RtlFindClearBitsAndSet @ 0x1402E3170 (RtlFindClearBitsAndSet.c)
 */

__int64 __fastcall PspStorageAllocSlot(ULONG *a1)
{
  int v2; // edi
  ULONG ClearBitsAndSet; // ebx
  char v4; // al

  v2 = 0;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspStorageBitmapLock, 0LL);
  ClearBitsAndSet = RtlFindClearBitsAndSet(&PspStorageBitmap, 1u, 0);
  if ( ClearBitsAndSet == -1 )
  {
    ClearBitsAndSet = RtlFindClearBitsAndSet(&PspStorageExpansionBitmap, 1u, 0);
    if ( ClearBitsAndSet == -1 )
      v2 = -1073741670;
    else
      ClearBitsAndSet += 32;
  }
  v4 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PspStorageBitmapLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v4 & 2) != 0 && (v4 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspStorageBitmapLock);
  KeAbPostRelease((ULONG_PTR)&PspStorageBitmapLock);
  if ( v2 >= 0 )
    *a1 = ClearBitsAndSet;
  return (unsigned int)v2;
}
