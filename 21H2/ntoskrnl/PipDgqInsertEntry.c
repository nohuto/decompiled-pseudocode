/*
 * XREFs of PipDgqInsertEntry @ 0x14095EC4C
 * Callers:
 *     PiDmaGuardQueueInsertEntry @ 0x14095EB98 (PiDmaGuardQueueInsertEntry.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 */

void __fastcall PipDgqInsertEntry(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PipDgqListLock, 1u);
  v3 = (_QWORD *)qword_140C44538;
  if ( *(PBOOLEAN **)qword_140C44538 != (PBOOLEAN *)((char *)&KdDebuggerEnabled + 7) )
    __fastfail(3u);
  *a1 = (char *)&KdDebuggerEnabled + 7;
  a1[1] = v3;
  *v3 = a1;
  qword_140C44538 = (__int64)a1;
  ExReleaseResourceLite(&PipDgqListLock);
  KeLeaveCriticalRegion();
}
