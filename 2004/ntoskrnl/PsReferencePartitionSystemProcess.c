/*
 * XREFs of PsReferencePartitionSystemProcess @ 0x140767F78
 * Callers:
 *     ExSwapinWorkerThreads @ 0x140767E14 (ExSwapinWorkerThreads.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     ObfReferenceObject @ 0x140208380 (ObfReferenceObject.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall PsReferencePartitionSystemProcess(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v5; // rbx
  PVOID v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // edi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (signed __int64 *)(a1 + 96);
  ExAcquirePushLockSharedEx(a1 + 96, 0LL);
  v6 = *(PVOID *)(a1 + 104);
  if ( v6 == MmBadPointer )
  {
    v8 = -1073740640;
  }
  else
  {
    ObfReferenceObject(v6);
    v7 = *(_QWORD *)(a1 + 104);
    v8 = 0;
    *a2 = v7;
  }
  if ( _InterlockedCompareExchange64(v5, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v5);
  KeAbPostRelease((ULONG_PTR)v5);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v8;
}
