/*
 * XREFs of MiInSwapStore @ 0x1407103DC
 * Callers:
 *     MmInSwapWorkingSet @ 0x14035C504 (MmInSwapWorkingSet.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402056A0 (ObfReferenceObjectWithTag.c)
 *     MiGetProcessPartition @ 0x14021AD40 (MiGetProcessPartition.c)
 *     MiAllocatePool @ 0x14025AD70 (MiAllocatePool.c)
 *     KeQueryPriorityThread @ 0x1402DA450 (KeQueryPriorityThread.c)
 *     ExQueueWorkItemToPartition @ 0x1402F78AC (ExQueueWorkItemToPartition.c)
 *     KeWaitForSingleObject @ 0x140345770 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x1403538F0 (KeInitializeEvent.c)
 *     MiInSwapStoreContextDereference @ 0x140710578 (MiInSwapStoreContextDereference.c)
 */

__int64 __fastcall MiInSwapStore(PVOID Object)
{
  char *Pool; // rax
  char *v3; // rdi
  __int64 ProcessPartition; // rax
  int v5; // r8d
  int v6; // edx

  Pool = (char *)MiAllocatePool(64, 0x48uLL, 0x73536D4Du);
  v3 = Pool;
  if ( !Pool )
    return 3221225626LL;
  KeInitializeEvent((PRKEVENT)(Pool + 40), NotificationEvent, 0);
  *(_QWORD *)v3 = 0LL;
  *((_QWORD *)v3 + 2) = MiInSwapStoreWorker;
  *((_QWORD *)v3 + 3) = v3;
  ObfReferenceObjectWithTag(Object, 0x73576D4Du);
  *((_QWORD *)v3 + 4) = Object;
  *((_DWORD *)v3 + 16) = 2;
  KeQueryPriorityThread(KeGetCurrentThread());
  ProcessPartition = MiGetProcessPartition((__int64)Object);
  v6 = v5 + 1;
  if ( v5 >= 15 )
    v6 = v5;
  ExQueueWorkItemToPartition(v3, v6 + 32, 0xFFFFFFFF, *(_QWORD *)(ProcessPartition + 176));
  KeWaitForSingleObject(v3 + 40, WrKernel, 0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
  MiInSwapStoreContextDereference(v3);
  return 0LL;
}
