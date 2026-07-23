/*
 * XREFs of EtwpQueueReply @ 0x1406E5710
 * Callers:
 *     EtwpDeleteRegistrationObject @ 0x1405F7EF0 (EtwpDeleteRegistrationObject.c)
 *     EtwpSendReplyDataBlock @ 0x1406E5628 (EtwpSendReplyDataBlock.c)
 * Callees:
 *     KeInsertQueue @ 0x14031D0E0 (KeInsertQueue.c)
 *     EtwpAllocDataBlock @ 0x14067D36C (EtwpAllocDataBlock.c)
 *     EtwpUnreferenceDataBlock @ 0x1406801B0 (EtwpUnreferenceDataBlock.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpQueueReply(PRKQUEUE Queue, unsigned int *a2)
{
  int v3; // edi
  _LIST_ENTRY *PoolWithTag; // rax
  struct _LIST_ENTRY *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  v3 = EtwpAllocDataBlock(a2[1], a2, &v6);
  if ( v3 < 0 )
  {
    _InterlockedIncrement(&Queue[1].Header.Lock);
  }
  else
  {
    PoolWithTag = (_LIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x72777445u);
    if ( PoolWithTag )
    {
      *PoolWithTag = 0LL;
      PoolWithTag[1] = 0LL;
      PoolWithTag[2] = 0LL;
      PoolWithTag[3].Flink = 0LL;
      PoolWithTag[1].Flink = v6;
      KeInsertQueue(Queue, PoolWithTag);
    }
    else
    {
      v3 = -1073741801;
      _InterlockedIncrement(&Queue[1].Header.Lock);
      EtwpUnreferenceDataBlock((volatile signed __int32 *)v6);
    }
  }
  return (unsigned int)v3;
}
