/*
 * XREFs of EtwpQueueReply @ 0x1406BB3D0
 * Callers:
 *     EtwpDeleteRegistrationObject @ 0x1405FC900 (EtwpDeleteRegistrationObject.c)
 *     EtwpSendReplyDataBlock @ 0x1406BB2E8 (EtwpSendReplyDataBlock.c)
 * Callees:
 *     KeInsertQueue @ 0x1402CCD30 (KeInsertQueue.c)
 *     EtwpAllocDataBlock @ 0x1406E1760 (EtwpAllocDataBlock.c)
 *     EtwpUnreferenceDataBlock @ 0x1406E4984 (EtwpUnreferenceDataBlock.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpQueueReply(PRKQUEUE Queue, unsigned int *a2)
{
  int v3; // edi
  struct _LIST_ENTRY *PoolWithTag; // rax

  v3 = EtwpAllocDataBlock(a2[1], a2);
  if ( v3 < 0 )
  {
    _InterlockedIncrement(&Queue[1].Header.Lock);
  }
  else
  {
    PoolWithTag = (struct _LIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x72777445u);
    if ( PoolWithTag )
    {
      *PoolWithTag = 0LL;
      PoolWithTag[1] = 0LL;
      PoolWithTag[2] = 0LL;
      PoolWithTag[3].Flink = 0LL;
      PoolWithTag[1].Flink = 0LL;
      KeInsertQueue(Queue, PoolWithTag);
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
