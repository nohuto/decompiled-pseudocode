/*
 * XREFs of PiDmaGuardQueueRemoveEntry @ 0x140564DE8
 * Callers:
 *     PiDmaGuardProcessPostRemove @ 0x1407669D4 (PiDmaGuardProcessPostRemove.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     PipDgqFreeEntry @ 0x14095EC14 (PipDgqFreeEntry.c)
 */

void __fastcall PiDmaGuardQueueRemoveEntry(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // rcx
  _QWORD *v4; // rax
  _QWORD *v5; // rdx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PipDgqListLock, 1u);
  v3 = *(PBOOLEAN *)((char *)&KdDebuggerEnabled + 7);
  if ( *(PBOOLEAN *)((char *)&KdDebuggerEnabled + 7) != (PBOOLEAN)((char *)&KdDebuggerEnabled + 7) )
  {
    while ( 1 )
    {
      v4 = (_QWORD *)*v3;
      if ( v3[2] == a1 )
        break;
      v3 = (_QWORD *)*v3;
      if ( v4 == (PBOOLEAN *)((char *)&KdDebuggerEnabled + 7) )
        goto LABEL_4;
    }
    if ( (_QWORD *)v4[1] != v3 || (v5 = (_QWORD *)v3[1], (_QWORD *)*v5 != v3) )
      __fastfail(3u);
    *v5 = v4;
    v4[1] = v5;
    PipDgqFreeEntry(v3);
  }
LABEL_4:
  ExReleaseResourceLite(&PipDgqListLock);
  KeLeaveCriticalRegion();
}
