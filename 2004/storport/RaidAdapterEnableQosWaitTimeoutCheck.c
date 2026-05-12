/*
 * XREFs of RaidAdapterEnableQosWaitTimeoutCheck @ 0x1C002B8C4
 * Callers:
 *     RaUnitSetQOSIoctl @ 0x1C0046D44 (RaUnitSetQOSIoctl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAdapterEnableQosWaitTimeoutCheck(__int64 a1)
{
  int v2; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 5648), &LockHandle);
  v2 = *(_DWORD *)(a1 + 5656);
  if ( !v2 )
  {
    KeSetCoalescableTimer((PKTIMER)(a1 + 5520), (LARGE_INTEGER)-5000000LL, 0x1F4u, 0x32u, (PKDPC)(a1 + 5584));
    v2 = *(_DWORD *)(a1 + 5656);
  }
  *(_DWORD *)(a1 + 5656) = v2 + 1;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
