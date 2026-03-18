/*
 * XREFs of PiDmaGuardQueueFlush @ 0x1408B4D34
 * Callers:
 *     PipDmgFlushQueueAndRestartDevices @ 0x1408AD048 (PipDmgFlushQueueAndRestartDevices.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 */

_QWORD *__fastcall PiDmaGuardQueueFlush(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PipDgqListLock, 1u);
  while ( 1 )
  {
    v3 = PipDgqListHead;
    if ( PipDgqListHead == &PipDgqListHead )
      break;
    if ( *((PVOID **)PipDgqListHead + 1) != &PipDgqListHead
      || (v4 = *(_QWORD *)PipDgqListHead, *(PVOID *)(*(_QWORD *)PipDgqListHead + 8LL) != PipDgqListHead)
      || (PipDgqListHead = *(PVOID *)PipDgqListHead,
          *(_QWORD *)(v4 + 8) = &PipDgqListHead,
          v5 = *(_QWORD **)(a1 + 8),
          *v5 != a1) )
    {
      __fastfail(3u);
    }
    *v3 = a1;
    v3[1] = v5;
    *v5 = v3;
    *(_QWORD *)(a1 + 8) = v3;
  }
  ExReleaseResourceLite(&PipDgqListLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v6, v7, v8);
}
