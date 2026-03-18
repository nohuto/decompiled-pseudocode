/*
 * XREFs of WmipNotificationIrpCancel @ 0x14032FD10
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140226AC0 (KxAcquireQueuedSpinLock.c)
 *     IofCompleteRequest @ 0x140292560 (IofCompleteRequest.c)
 *     KeReleaseQueuedSpinLock @ 0x1402981B0 (KeReleaseQueuedSpinLock.c)
 *     WmipClearIrpObjectList @ 0x14032FD7C (WmipClearIrpObjectList.c)
 */

void __fastcall WmipNotificationIrpCancel(__int64 a1, IRP *a2)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = &WmipCancelSpinLock;
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)&WmipCancelSpinLock);
  WmipClearIrpObjectList(a2);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  KeReleaseQueuedSpinLock(7uLL, a2->CancelIrql);
  a2->IoStatus.Information = 0LL;
  a2->IoStatus.Status = -1073741536;
  IofCompleteRequest(a2, 0);
}
