/*
 * XREFs of PiDmaGuardQueueRemoveEntry @ 0x14050B188
 * Callers:
 *     PiDmaGuardProcessPostRemove @ 0x14073222C (PiDmaGuardProcessPostRemove.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140208CF0 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     PipDgqFreeEntry @ 0x1408B6158 (PipDgqFreeEntry.c)
 */

_QWORD *__fastcall PiDmaGuardQueueRemoveEntry(PVOID a1)
{
  struct _KTHREAD *CurrentThread; // rax
  PVOID *v3; // rcx
  PVOID *v4; // rax
  PVOID **v6; // rdx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PipDgqListLock, 1u);
  v3 = (PVOID *)PipDgqListHead;
  if ( PipDgqListHead != &PipDgqListHead )
  {
    while ( 1 )
    {
      v4 = (PVOID *)*v3;
      if ( v3[2] == a1 )
        break;
      v3 = (PVOID *)*v3;
      if ( v4 == &PipDgqListHead )
        goto LABEL_4;
    }
    if ( v4[1] != v3 || (v6 = (PVOID **)v3[1], *v6 != v3) )
      __fastfail(3u);
    *v6 = v4;
    v4[1] = v6;
    PipDgqFreeEntry(v3);
  }
LABEL_4:
  ExReleaseResourceLite(&PipDgqListLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
