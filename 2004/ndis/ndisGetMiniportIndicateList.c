/*
 * XREFs of ndisGetMiniportIndicateList @ 0x1C00A2CDC
 * Callers:
 *     ?ndisPeriodicReceivesWorker@@YAXPEAX@Z @ 0x1C00A3AB0 (-ndisPeriodicReceivesWorker@@YAXPEAX@Z.c)
 * Callees:
 *     ?ndisPeriodicReceivesGetMaxNblCount@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A3820 (-ndisPeriodicReceivesGetMaxNblCount@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

_NET_BUFFER_LIST *__fastcall ndisGetMiniportIndicateList(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NET_BUFFER_LIST *v2; // rdi
  unsigned int MaxNblCount; // esi
  _NET_BUFFER_LIST *QueuedHead; // rcx
  int v5; // edx

  v2 = 0LL;
  MaxNblCount = ndisPeriodicReceivesGetMaxNblCount(a1);
  KeAcquireSpinLockAtDpcLevel(&a1->PeriodicReceiveQueue.SpinLock);
  a1->PeriodicReceiveQueue.LockThread = KeGetCurrentThread();
  if ( a1->PeriodicReceiveQueue.NumMQueuedNbls )
  {
    QueuedHead = a1->PeriodicReceiveQueue.QueuedHead;
    v5 = 0;
    while ( QueuedHead )
    {
      ++a1->PeriodicReceiveQueue.TrackingDequeued;
      ++v5;
      if ( !--MaxNblCount )
        break;
      QueuedHead = (_NET_BUFFER_LIST *)QueuedHead->Link.Alignment;
    }
    v2 = a1->PeriodicReceiveQueue.QueuedHead;
    if ( QueuedHead )
    {
      a1->PeriodicReceiveQueue.QueuedHead = (_NET_BUFFER_LIST *)QueuedHead->Link.Alignment;
      QueuedHead->Link.Alignment = 0LL;
      if ( a1->PeriodicReceiveQueue.QueuedHead )
      {
LABEL_10:
        a1->PeriodicReceiveQueue.NumMQueuedNbls -= v5;
        a1->PeriodicReceiveQueue.NumNblsDequeued += v5;
        goto LABEL_11;
      }
    }
    else
    {
      a1->PeriodicReceiveQueue.QueuedHead = 0LL;
    }
    a1->PeriodicReceiveQueue.QueuedTail = 0LL;
    goto LABEL_10;
  }
LABEL_11:
  a1->PeriodicReceiveQueue.LockThread = 0LL;
  KeReleaseSpinLockFromDpcLevel(&a1->PeriodicReceiveQueue.SpinLock);
  return v2;
}
