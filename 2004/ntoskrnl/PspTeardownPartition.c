/*
 * XREFs of PspTeardownPartition @ 0x140909CC0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     PsDereferencePartition @ 0x14026AD90 (PsDereferencePartition.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     MiDeletePartition @ 0x14053020C (MiDeletePartition.c)
 *     ObCloseHandle @ 0x140602510 (ObCloseHandle.c)
 *     PsTerminateMinimalProcess @ 0x14090793C (PsTerminateMinimalProcess.c)
 *     ExpPartitionDestroy @ 0x1409528E4 (ExpPartitionDestroy.c)
 */

LONG_PTR __fastcall PspTeardownPartition(PVOID Object)
{
  unsigned __int16 *v2; // rcx
  void *v3; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // r15
  struct _DMA_ADAPTER *v6; // rbp
  void *v7; // r12
  PVOID v8; // rax

  if ( Object == PspSystemPartition )
    KeBugCheckEx(0x18Eu, 1uLL, (ULONG_PTR)Object, 0LL, 0LL);
  v2 = *(unsigned __int16 **)Object;
  if ( v2 )
  {
    MiDeletePartition(v2);
    *(_QWORD *)Object = 0LL;
  }
  v3 = (void *)*((_QWORD *)Object + 2);
  if ( v3 )
  {
    ExpPartitionDestroy(v3);
    *((_QWORD *)Object + 2) = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)Object + 96, 0LL);
  v5 = *((_QWORD *)Object + 7);
  v6 = (struct _DMA_ADAPTER *)*((_QWORD *)Object + 13);
  v7 = (void *)*((_QWORD *)Object + 14);
  *((_QWORD *)Object + 7) = MmBadPointer;
  v8 = MmBadPointer;
  *((_QWORD *)Object + 14) = 0LL;
  *((_QWORD *)Object + 13) = v8;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)Object + 12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)Object + 12);
  KeAbPostRelease((ULONG_PTR)Object + 96);
  KeLeaveCriticalRegion();
  if ( v6 )
  {
    PsTerminateMinimalProcess(v6, 0);
    KeWaitForSingleObject(v6, Executive, 0, 0, 0LL);
    HalPutDmaAdapter(v6);
    ObCloseHandle(v7, 0);
  }
  PsDereferencePartition(v5);
  return ObfDereferenceObjectWithTag(Object, 0x64726148u);
}
