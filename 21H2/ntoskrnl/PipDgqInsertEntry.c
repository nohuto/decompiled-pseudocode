/*
 * XREFs of PipDgqInsertEntry @ 0x1408B9290
 * Callers:
 *     PiDmaGuardQueueInsertEntry @ 0x1408B91F0 (PiDmaGuardQueueInsertEntry.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14034B3F0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14034BBA0 (ExAcquireResourceExclusiveLite.c)
 */

_QWORD *__fastcall PipDgqInsertEntry(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PipDgqListLock, 1u);
  v3 = (_QWORD *)qword_140C430C8;
  if ( *(PBOOLEAN **)qword_140C430C8 != (PBOOLEAN *)((char *)&KdDebuggerNotPresent + 7) )
    __fastfail(3u);
  *a1 = (char *)&KdDebuggerNotPresent + 7;
  a1[1] = v3;
  *v3 = a1;
  qword_140C430C8 = (__int64)a1;
  ExReleaseResourceLite(&PipDgqListLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
