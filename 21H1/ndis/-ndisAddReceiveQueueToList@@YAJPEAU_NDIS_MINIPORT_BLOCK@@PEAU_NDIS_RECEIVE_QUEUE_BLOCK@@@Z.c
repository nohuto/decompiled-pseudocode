/*
 * XREFs of ?ndisAddReceiveQueueToList@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_QUEUE_BLOCK@@@Z @ 0x1C0084334
 * Callers:
 *     ?ndisAllocateReceiveQueue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00843A4 (-ndisAllocateReceiveQueue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisAddReceiveQueueToList(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_RECEIVE_QUEUE_BLOCK *a2)
{
  unsigned int v2; // r8d
  struct _NDIS_MINIPORT_BLOCK *Flink; // rax
  unsigned int QueueId; // r11d
  _LIST_ENTRY *NextMiniport; // rcx
  _LIST_ENTRY *v7; // rax

  v2 = 0;
  Flink = (struct _NDIS_MINIPORT_BLOCK *)a1->ReceiveQueueList.Flink;
  if ( Flink == (struct _NDIS_MINIPORT_BLOCK *)&a1->ReceiveQueueList )
  {
LABEL_6:
    NextMiniport = (_LIST_ENTRY *)Flink->NextMiniport;
    v7 = NextMiniport->Flink;
    if ( NextMiniport->Flink->Blink != NextMiniport )
      __fastfail(3u);
    a2->AdapterLink.Flink = v7;
    a2->AdapterLink.Blink = NextMiniport;
    v7->Blink = &a2->AdapterLink;
    NextMiniport->Flink = &a2->AdapterLink;
    ++a1->NumReceiveQueues;
  }
  else
  {
    QueueId = a2->QueueId;
    while ( Flink->PcwDatapathEventMask != QueueId )
    {
      if ( Flink->PcwDatapathEventMask <= QueueId )
      {
        Flink = *(struct _NDIS_MINIPORT_BLOCK **)&Flink->Header.Type;
        if ( Flink != (struct _NDIS_MINIPORT_BLOCK *)&a1->ReceiveQueueList )
          continue;
      }
      goto LABEL_6;
    }
    return (unsigned int)-1073741270;
  }
  return v2;
}
