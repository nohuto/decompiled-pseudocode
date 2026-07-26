/*
 * XREFs of ?ndisInsertInWorkQueue@@YAXPEAU_NDIS_WORK_QUEUE@@PEAU_WORK_QUEUE_ITEM@@E@Z @ 0x1C00AC278
 * Callers:
 *     ndisReceiveWorkerThread @ 0x1C0037490 (ndisReceiveWorkerThread.c)
 *     ndisQueueDpcWorkItem @ 0x1C0067280 (ndisQueueDpcWorkItem.c)
 *     ndisKillReceiveWorkerThreadPool @ 0x1C00A2F44 (ndisKillReceiveWorkerThreadPool.c)
 *     ndisQueuePeriodicReceivesWorkItem @ 0x1C00A3DA4 (ndisQueuePeriodicReceivesWorkItem.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisInsertInWorkQueue(struct _KSEMAPHORE *a1, struct _WORK_QUEUE_ITEM *a2, char a3)
{
  KSPIN_LOCK *p_Blink; // rdi
  KSPIN_LOCK *v5; // rcx
  KIRQL v8; // bp
  _LIST_ENTRY *Flink; // rcx

  p_Blink = (KSPIN_LOCK *)&a1->Header.WaitListHead.Blink;
  v5 = (KSPIN_LOCK *)&a1->Header.WaitListHead.Blink;
  v8 = 2;
  if ( a3 )
    KeAcquireSpinLockAtDpcLevel(v5);
  else
    v8 = KeAcquireSpinLockRaiseToDpc(v5);
  Flink = a1->Header.WaitListHead.Flink;
  if ( (struct _KSEMAPHORE *)Flink->Flink != a1 )
    __fastfail(3u);
  a2->List.Blink = Flink;
  a2->List.Flink = (_LIST_ENTRY *)a1;
  Flink->Flink = &a2->List;
  a1->Header.WaitListHead.Flink = &a2->List;
  ++a1->Limit;
  if ( a3 )
    KeReleaseSpinLockFromDpcLevel(p_Blink);
  else
    KeReleaseSpinLock(p_Blink, v8);
  KeReleaseSemaphore(a1 + 1, 0, 1, 0);
}
