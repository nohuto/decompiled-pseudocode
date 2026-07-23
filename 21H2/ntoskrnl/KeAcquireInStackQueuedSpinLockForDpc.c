/*
 * XREFs of KeAcquireInStackQueuedSpinLockForDpc @ 0x140516890
 * Callers:
 *     KeInsertByKeyDeviceQueue @ 0x14051AB00 (KeInsertByKeyDeviceQueue.c)
 *     KeInsertDeviceQueue @ 0x14051ABC0 (KeInsertDeviceQueue.c)
 *     KeRemoveByKeyDeviceQueue @ 0x14051AC50 (KeRemoveByKeyDeviceQueue.c)
 *     KeRemoveByKeyDeviceQueueIfBusy @ 0x14051AD30 (KeRemoveByKeyDeviceQueueIfBusy.c)
 *     KeRemoveDeviceQueue @ 0x14051AE10 (KeRemoveDeviceQueue.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 */

void __stdcall KeAcquireInStackQueuedSpinLockForDpc(PKSPIN_LOCK SpinLock, PKLOCK_QUEUE_HANDLE LockHandle)
{
  if ( (KeGetCurrentPrcb()->DpcRequestSummary & 0x10000) != 0 )
  {
    KeAcquireInStackQueuedSpinLock(SpinLock, LockHandle);
  }
  else
  {
    LockHandle->LockQueue.Next = 0LL;
    LockHandle->LockQueue.Lock = SpinLock;
    KxAcquireQueuedSpinLock((__int64)LockHandle, (volatile __int64 *)SpinLock);
  }
}
