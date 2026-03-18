/*
 * XREFs of PiDmaGuardQueueFlush @ 0x14095EB04
 * Callers:
 *     PipDmgFlushQueueAndRestartDevices @ 0x140956ADC (PipDmgFlushQueueAndRestartDevices.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 */

void __fastcall PiDmaGuardQueueFlush(__int64 a1)
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
    v3 = *(PBOOLEAN *)((char *)&KdDebuggerEnabled + 7);
    if ( *(PBOOLEAN *)((char *)&KdDebuggerEnabled + 7) == (PBOOLEAN)((char *)&KdDebuggerEnabled + 7) )
      break;
    if ( (*(PBOOLEAN ***)((char *)&KdDebuggerEnabled + 7))[1] != (PBOOLEAN *)((char *)&KdDebuggerEnabled + 7)
      || (v4 = **(_QWORD **)((char *)&KdDebuggerEnabled + 7),
          *(PBOOLEAN *)(**(_QWORD **)((char *)&KdDebuggerEnabled + 7) + 8LL) != *(PBOOLEAN *)((char *)&KdDebuggerEnabled
                                                                                            + 7))
      || (*(PBOOLEAN *)((char *)&KdDebuggerEnabled + 7) = **(PBOOLEAN **)((char *)&KdDebuggerEnabled + 7),
          *(_QWORD *)(v4 + 8) = (char *)&KdDebuggerEnabled + 7,
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
  KeLeaveCriticalRegion();
}
