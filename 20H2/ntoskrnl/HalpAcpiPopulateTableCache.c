/*
 * XREFs of HalpAcpiPopulateTableCache @ 0x140A6435C
 * Callers:
 *     HalpAcpiInitSystem @ 0x1409A2BD0 (HalpAcpiInitSystem.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402D49A0 (ExQueueWorkItem.c)
 *     HalpMmAllocCtxAlloc @ 0x14037C7B8 (HalpMmAllocCtxAlloc.c)
 */

__int64 __fastcall HalpAcpiPopulateTableCache(__int64 a1)
{
  struct _WORK_QUEUE_ITEM *v1; // rax
  unsigned int v2; // ebx

  v1 = (struct _WORK_QUEUE_ITEM *)HalpMmAllocCtxAlloc(a1, 32LL);
  v2 = 0;
  if ( v1 )
  {
    v1->Parameter = v1;
    v1->WorkerRoutine = (void (__fastcall *)(void *))HalpAcpiPopulateTableCacheWork;
    v1->List.Flink = 0LL;
    ExQueueWorkItem(v1, DelayedWorkQueue);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v2;
}
