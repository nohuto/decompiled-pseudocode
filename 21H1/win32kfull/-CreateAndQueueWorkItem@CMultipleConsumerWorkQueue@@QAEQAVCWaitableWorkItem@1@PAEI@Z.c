/*
 * XREFs of ?CreateAndQueueWorkItem@CMultipleConsumerWorkQueue@@QAEQAVCWaitableWorkItem@1@PAEI@Z @ 0x8753E
 * Callers:
 *     _lambda_95c27c6d3719cab4b30ebc7bb5fd2a18_::operator() @ 0x87504 (_lambda_95c27c6d3719cab4b30ebc7bb5fd2a18_--operator().c)
 * Callees:
 *     ?QueueWorkItem@CWorkItemQueue@@QAE_NQAVCWorkItem@1@@Z @ 0x875BA (-QueueWorkItem@CWorkItemQueue@@QAE_NQAVCWorkItem@1@@Z.c)
 *     ?Create@CWorkItem@CWorkItemQueue@@SGQAV12@PBEI0I@Z @ 0x97A7E (-Create@CWorkItem@CWorkItemQueue@@SGQAV12@PBEI0I@Z.c)
 *     ?Destroy@CManualResetEvent@@SGXQAV1@@Z @ 0xD3388 (-Destroy@CManualResetEvent@@SGXQAV1@@Z.c)
 *     ?Create@CEventPoolEntry@CEventPool@@SGQAV12@XZ @ 0xE5E08 (-Create@CEventPoolEntry@CEventPool@@SGQAV12@XZ.c)
 */

struct CMultipleConsumerWorkQueue::CWaitableWorkItem *__thiscall CMultipleConsumerWorkQueue::CreateAndQueueWorkItem(
        CMultipleConsumerWorkQueue *this,
        unsigned __int8 *a2,
        unsigned int a3)
{
  int v4; // edi
  unsigned int v5; // ecx
  PSLIST_ENTRY v6; // esi
  struct CWorkItemQueue::CWorkItem *v7; // eax
  struct CWorkItemQueue::CWorkItem *v8; // edi
  struct CWorkItemQueue::CWorkItem *v9; // ebx
  const unsigned __int8 *v11; // [esp+0h] [ebp-10h]
  struct CManualResetEvent *v12; // [esp+0h] [ebp-10h]
  unsigned int v13; // [esp+4h] [ebp-Ch]

  v4 = *((_DWORD *)this + 1);
  v6 = InterlockedPopEntrySList((PSLIST_HEADER)(v4 + 8));
  if ( v6 )
  {
    _InterlockedDecrement((volatile signed __int32 *)v4);
  }
  else
  {
    v6 = (PSLIST_ENTRY)CEventPool::CEventPoolEntry::Create();
    if ( !v6 )
      return 0;
  }
  v7 = CWorkItemQueue::CWorkItem::Create(a2, v5, v11, v13);
  v8 = v7;
  if ( v7 && CWorkItemQueue::QueueWorkItem(*(CWorkItemQueue **)this, v7) )
  {
    v6 = 0;
    v9 = v8;
    v8 = 0;
  }
  else
  {
    v9 = 0;
  }
  if ( v8 )
    EngFreeMem(v8);
  if ( v6 )
  {
    if ( v6[1].Next )
      CManualResetEvent::Destroy(v12);
    EngFreeMem(v6);
  }
  return v9;
}
