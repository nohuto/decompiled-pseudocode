/*
 * XREFs of StorRemoveEventQueue @ 0x1C00346F4
 * Callers:
 *     RaUnitRemoveFromPendingList @ 0x1C0007634 (RaUnitRemoveFromPendingList.c)
 *     RaidUnitCompleteRequest @ 0x1C00079D0 (RaidUnitCompleteRequest.c)
 * Callees:
 *     StorRemoveEventQueueInternal @ 0x1C00347B0 (StorRemoveEventQueueInternal.c)
 */

void __fastcall StorRemoveEventQueue(unsigned int *a1, __int64 a2)
{
  unsigned int *v3; // rbx
  KSPIN_LOCK *v5; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = &a1[16 * *(unsigned int *)(a2 + 36) + 16];
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = (KSPIN_LOCK *)(v3 + 10);
  if ( KeGetCurrentIrql() == 2 )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel(v5, &LockHandle);
    StorRemoveEventQueueInternal(v3, *a1, a2);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  else
  {
    KeAcquireInStackQueuedSpinLock(v5, &LockHandle);
    StorRemoveEventQueueInternal(v3, *a1, a2);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
