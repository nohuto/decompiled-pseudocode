/*
 * XREFs of EtwpQueueReply @ 0x1406F20E8
 * Callers:
 *     EtwpSendReplyDataBlock @ 0x1406F2000 (EtwpSendReplyDataBlock.c)
 *     EtwpDeleteRegistrationObject @ 0x140796530 (EtwpDeleteRegistrationObject.c)
 * Callees:
 *     KeInsertQueue @ 0x1402624D0 (KeInsertQueue.c)
 *     EtwpAllocDataBlock @ 0x1406F21DC (EtwpAllocDataBlock.c)
 *     EtwpUnreferenceDataBlock @ 0x14078F0FC (EtwpUnreferenceDataBlock.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpQueueReply(PRKQUEUE Queue, unsigned int *a2)
{
  int v3; // edi
  struct _LIST_ENTRY *Pool2; // rax

  v3 = EtwpAllocDataBlock(a2[1], a2);
  if ( v3 < 0 )
  {
    _InterlockedIncrement(&Queue[1].Header.Lock);
  }
  else
  {
    Pool2 = (struct _LIST_ENTRY *)ExAllocatePool2(64LL, 56LL, 1920431173LL);
    if ( Pool2 )
    {
      Pool2[1].Flink = 0LL;
      KeInsertQueue(Queue, Pool2);
    }
    else
    {
      v3 = -1073741801;
      _InterlockedIncrement(&Queue[1].Header.Lock);
      EtwpUnreferenceDataBlock(0LL);
    }
  }
  return (unsigned int)v3;
}
