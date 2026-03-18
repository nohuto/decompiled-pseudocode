/*
 * XREFs of SepInformFileSystemsOfDeletedLogon @ 0x140926124
 * Callers:
 *     SepDeReferenceLogonSession @ 0x1406C8580 (SepDeReferenceLogonSession.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402089E0 (ObfReferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x1402D49A0 (ExQueueWorkItem.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 */

void __fastcall SepInformFileSystemsOfDeletedLogon(struct _LIST_ENTRY **a1, struct _LIST_ENTRY *a2)
{
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  struct _WORK_QUEUE_ITEM *v5; // rbx

  PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x53466553u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[1].List.Flink = *a1;
    PoolWithTag[1].List.Blink = a2;
    if ( a2 )
      ObfReferenceObjectWithTag(a2, 0x53466553u);
    v5->List.Flink = 0LL;
    v5->WorkerRoutine = (void (__fastcall *)(void *))SepNotifyFileSystems;
    v5->Parameter = v5;
    ExQueueWorkItem(v5, DelayedWorkQueue);
  }
}
