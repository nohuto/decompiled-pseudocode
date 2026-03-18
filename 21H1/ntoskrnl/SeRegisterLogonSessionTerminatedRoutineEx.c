/*
 * XREFs of SeRegisterLogonSessionTerminatedRoutineEx @ 0x1407BB2E0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireFastMutexUnsafe @ 0x14025BC80 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x14025BE10 (ExReleaseFastMutexUnsafe.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SeRegisterLogonSessionTerminatedRoutineEx(__int64 a1, __int64 a2)
{
  _QWORD *PoolWithTag; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

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
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v6, v7, v8);
  return 0LL;
}
