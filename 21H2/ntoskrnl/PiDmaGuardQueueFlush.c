/*
 * XREFs of PiDmaGuardQueueFlush @ 0x1408B9154
 * Callers:
 *     PipDmgFlushQueueAndRestartDevices @ 0x1408B1468 (PipDmgFlushQueueAndRestartDevices.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14034B3F0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14034BBA0 (ExAcquireResourceExclusiveLite.c)
 */

_QWORD *__fastcall PiDmaGuardQueueFlush(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PipDgqListLock, 1u);
  while ( 1 )
  {
    v3 = *(PBOOLEAN *)((char *)&KdDebuggerNotPresent + 7);
    if ( *(PBOOLEAN *)((char *)&KdDebuggerNotPresent + 7) == (PBOOLEAN)((char *)&KdDebuggerNotPresent + 7) )
      break;
    if ( (*(PBOOLEAN ***)((char *)&KdDebuggerNotPresent + 7))[1] != (PBOOLEAN *)((char *)&KdDebuggerNotPresent + 7)
      || (v4 = **(_QWORD **)((char *)&KdDebuggerNotPresent + 7),
          *(PBOOLEAN *)(**(_QWORD **)((char *)&KdDebuggerNotPresent + 7) + 8LL) != *(PBOOLEAN *)((char *)&KdDebuggerNotPresent
                                                                                               + 7))
      || (*(PBOOLEAN *)((char *)&KdDebuggerNotPresent + 7) = **(PBOOLEAN **)((char *)&KdDebuggerNotPresent + 7),
          *(_QWORD *)(v4 + 8) = (char *)&KdDebuggerNotPresent + 7,
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
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
