/*
 * XREFs of PiDmaGuardQueueFlush @ 0x1408B92B4
 * Callers:
 *     PipDmgFlushQueueAndRestartDevices @ 0x1408B15C8 (PipDmgFlushQueueAndRestartDevices.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
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
