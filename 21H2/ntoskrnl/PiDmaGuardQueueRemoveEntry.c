/*
 * XREFs of PiDmaGuardQueueRemoveEntry @ 0x1405105E8
 * Callers:
 *     PiDmaGuardProcessPostRemove @ 0x1407386D0 (PiDmaGuardProcessPostRemove.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14034B3F0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14034BBA0 (ExAcquireResourceExclusiveLite.c)
 *     PipDgqFreeEntry @ 0x1408B9258 (PipDgqFreeEntry.c)
 */

_QWORD *__fastcall PiDmaGuardQueueRemoveEntry(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // rcx
  _QWORD *v4; // rax
  _QWORD *v6; // rdx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PipDgqListLock, 1u);
  v3 = *(PBOOLEAN *)((char *)&KdDebuggerNotPresent + 7);
  if ( *(PBOOLEAN *)((char *)&KdDebuggerNotPresent + 7) != (PBOOLEAN)((char *)&KdDebuggerNotPresent + 7) )
  {
    while ( 1 )
    {
      v4 = (_QWORD *)*v3;
      if ( v3[2] == a1 )
        break;
      v3 = (_QWORD *)*v3;
      if ( v4 == (PBOOLEAN *)((char *)&KdDebuggerNotPresent + 7) )
        goto LABEL_4;
    }
    if ( (_QWORD *)v4[1] != v3 || (v6 = (_QWORD *)v3[1], (_QWORD *)*v6 != v3) )
      __fastfail(3u);
    *v6 = v4;
    v4[1] = v6;
    PipDgqFreeEntry(v3);
  }
LABEL_4:
  ExReleaseResourceLite(&PipDgqListLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
