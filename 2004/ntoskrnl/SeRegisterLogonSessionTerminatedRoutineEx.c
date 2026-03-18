/*
 * XREFs of SeRegisterLogonSessionTerminatedRoutineEx @ 0x1407BE450
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140202D60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140202EF0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SeRegisterLogonSessionTerminatedRoutineEx(__int64 a1, __int64 a2)
{
  _QWORD *PoolWithTag; // rbx
  struct _KTHREAD *CurrentThread; // rax

  if ( !a1 )
    return 3221225485LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x53466553u);
  if ( !PoolWithTag )
    return 3221225626LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&SepRmNotifyMutex);
  *PoolWithTag = SeFileSystemNotifyRoutinesExHead;
  PoolWithTag[1] = a1;
  PoolWithTag[2] = a2;
  SeFileSystemNotifyRoutinesExHead = PoolWithTag;
  ExReleaseFastMutexUnsafe(&SepRmNotifyMutex);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return 0LL;
}
