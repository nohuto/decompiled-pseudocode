/*
 * XREFs of ?QueueWorkItem@CWorkItemQueue@@QAE_NQAVCWorkItem@1@@Z @ 0x875BA
 * Callers:
 *     ?CreateAndQueueWorkItem@CMultipleConsumerWorkQueue@@QAEQAVCWaitableWorkItem@1@PAEI@Z @ 0x8753E (-CreateAndQueueWorkItem@CMultipleConsumerWorkQueue@@QAEQAVCWaitableWorkItem@1@PAEI@Z.c)
 *     ?UmfdServerSendCompleteAndWaitReceive@@YGJPAX0K0PAK0@Z @ 0x8BBEE (-UmfdServerSendCompleteAndWaitReceive@@YGJPAX0K0PAK0@Z.c)
 * Callees:
 *     <none>
 */

char __thiscall CWorkItemQueue::QueueWorkItem(CWorkItemQueue *this, struct CWorkItemQueue::CWorkItem *const ListEntry)
{
  if ( *(_BYTE *)this )
    return 0;
  *((_DWORD *)ListEntry + 1) = 1;
  InterlockedPushEntrySList((PSLIST_HEADER)this + 1, (PSLIST_ENTRY)ListEntry);
  KeSetEvent(**((PRKEVENT **)this + 1), 1, 0);
  return 1;
}
