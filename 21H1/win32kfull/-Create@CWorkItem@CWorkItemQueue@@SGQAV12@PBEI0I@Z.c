/*
 * XREFs of ?Create@CWorkItem@CWorkItemQueue@@SGQAV12@PBEI0I@Z @ 0x97A7E
 * Callers:
 *     ?CreateAndQueueWorkItem@CMultipleConsumerWorkQueue@@QAEQAVCWaitableWorkItem@1@PAEI@Z @ 0x8753E (-CreateAndQueueWorkItem@CMultipleConsumerWorkQueue@@QAEQAVCWaitableWorkItem@1@PAEI@Z.c)
 * Callees:
 *     <none>
 */

struct CWorkItemQueue::CWorkItem *__userpurge CWorkItemQueue::CWorkItem::Create@<eax>(
        _DWORD *a1@<ecx>,
        const unsigned __int8 *a2,
        unsigned int a3,
        const unsigned __int8 *a4,
        unsigned int a5)
{
  struct CWorkItemQueue::CWorkItem *result; // eax

  result = (struct CWorkItemQueue::CWorkItem *)EngAllocMem(0, 0x20u, 0x676D6466u);
  if ( !result )
    return 0;
  *((_DWORD *)result + 3) = 4;
  *((_DWORD *)result + 5) = *a1;
  *((_DWORD *)result + 4) = 4;
  *((_DWORD *)result + 2) = (char *)result + 28;
  *((_DWORD *)result + 7) = *(_DWORD *)a2;
  *((_DWORD *)result + 1) = 0;
  return result;
}
