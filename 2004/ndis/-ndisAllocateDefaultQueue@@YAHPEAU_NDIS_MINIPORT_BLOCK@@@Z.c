/*
 * XREFs of ?ndisAllocateDefaultQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0021560
 * Callers:
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1C012C504 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     memset @ 0x1C003FE40 (memset.c)
 */

__int64 __fastcall ndisAllocateDefaultQueue(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_RECEIVE_QUEUE_BLOCK *PoolWithTag; // rax
  _LIST_ENTRY *p_FilterList; // rax
  _LIST_ENTRY *p_SharedMemoryList; // rax

  PoolWithTag = (_NDIS_RECEIVE_QUEUE_BLOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x4C8uLL, 0x7571444Eu);
  a1->DefaultReceiveQueue = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, sizeof(_NDIS_RECEIVE_QUEUE_BLOCK));
  p_FilterList = &a1->DefaultReceiveQueue->FilterList;
  p_FilterList->Blink = p_FilterList;
  p_FilterList->Flink = p_FilterList;
  p_SharedMemoryList = &a1->DefaultReceiveQueue->SharedMemoryList;
  p_SharedMemoryList->Blink = p_SharedMemoryList;
  p_SharedMemoryList->Flink = p_SharedMemoryList;
  a1->DefaultReceiveQueue->QueueId = 0;
  a1->DefaultReceiveQueue->QueuePnPState = NdisReceiveQueuePnPStateAllocated;
  a1->DefaultReceiveQueue->QueueState = NdisReceiveQueueOperationalStateRunning;
  a1->DefaultReceiveQueue->Miniport = a1;
  a1->DefaultReceiveQueue->Reference = 1;
  return 0LL;
}
