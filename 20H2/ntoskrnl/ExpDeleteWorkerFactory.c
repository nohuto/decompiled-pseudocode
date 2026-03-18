/*
 * XREFs of ExpDeleteWorkerFactory @ 0x14035D9C0
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402950F0 (KeReleaseInStackQueuedSpinLock.c)
 *     ObCloseHandle @ 0x140627D70 (ObCloseHandle.c)
 *     IoFreeMiniCompletionPacket @ 0x140711120 (IoFreeMiniCompletionPacket.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall ExpDeleteWorkerFactory(PVOID *a1)
{
  KSPIN_LOCK *v2; // rcx
  PVOID v3; // rax
  struct _DMA_ADAPTER *v4; // rbx
  char v5; // di
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = (KSPIN_LOCK *)a1[2];
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(v2, &LockHandle);
  *((_BYTE *)a1[2] + 34) = 1;
  v3 = a1[2];
  v4 = (struct _DMA_ADAPTER *)*((_QWORD *)v3 + 1);
  v5 = *((_BYTE *)v3 + 32);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  ObfDereferenceObjectWithTag(a1[6], 0x66577845u);
  ObCloseHandle(a1[5], 0);
  HalPutDmaAdapter(v4);
  if ( !v5 )
  {
    IoFreeMiniCompletionPacket(*((_QWORD *)a1[2] + 2));
    ExFreePoolWithTag(a1[2], 0);
  }
}
