/*
 * XREFs of ExpWorkerFactoryDeferredThreadCreation @ 0x14035A1F4
 * Callers:
 *     ExpWorkerFactoryManagerThread @ 0x1403B45A0 (ExpWorkerFactoryManagerThread.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1402826A0 (ExpWorkerFactoryCheckCreate.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402C0E10 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlpInterlockedFlushSList @ 0x1403FF070 (RtlpInterlockedFlushSList.c)
 */

LONG_PTR ExpWorkerFactoryDeferredThreadCreation()
{
  LONG_PTR result; // rax
  _QWORD *v1; // rdi
  _QWORD *v2; // rbx
  __int64 v3; // r8
  _DWORD *v4; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  ExpWorkerFactoryThreadCreationState = 0;
  result = (LONG_PTR)RtlpInterlockedFlushSList(&ExpWorkerFactoryThreadCreationList);
  v1 = (_QWORD *)result;
  if ( result )
  {
    do
    {
      v2 = v1;
      v1 = (_QWORD *)*v1;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v2[2], &LockHandle);
      *((_DWORD *)v2 + 78) &= ~8u;
      LOBYTE(v3) = 1;
      ExpWorkerFactoryCheckCreate((PSLIST_ENTRY)v2, (__int64)&LockHandle, v3, v4);
      result = ObfDereferenceObjectWithTag(v2, 0x746C6644u);
    }
    while ( v1 );
  }
  return result;
}
