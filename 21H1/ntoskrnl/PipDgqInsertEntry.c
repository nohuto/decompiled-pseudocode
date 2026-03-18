/*
 * XREFs of PipDgqInsertEntry @ 0x1408B4E70
 * Callers:
 *     PiDmaGuardQueueInsertEntry @ 0x1408B4DD0 (PiDmaGuardQueueInsertEntry.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 */

_QWORD *__fastcall PipDgqInsertEntry(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PipDgqListLock, 1u);
  v3 = (_QWORD *)qword_140C43098;
  if ( *(PVOID **)qword_140C43098 != &PipDgqListHead )
    __fastfail(3u);
  *a1 = &PipDgqListHead;
  a1[1] = v3;
  *v3 = a1;
  qword_140C43098 = (__int64)a1;
  ExReleaseResourceLite(&PipDgqListLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v4, v5, v6);
}
