/*
 * XREFs of MiUpdateWorkingSetPrivateSize @ 0x14036AC58
 * Callers:
 *     MiConvertPrivateToProto @ 0x140369DA0 (MiConvertPrivateToProto.c)
 *     MiDemoteCombinedPte @ 0x14036AFB0 (MiDemoteCombinedPte.c)
 *     MiBuildForkPte @ 0x1405567EC (MiBuildForkPte.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140226AC0 (KxAcquireQueuedSpinLock.c)
 *     MiGetSharedVm @ 0x14027C730 (MiGetSharedVm.c)
 */

void __fastcall MiUpdateWorkingSetPrivateSize(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !a4 )
  {
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(MiGetSharedVm(a1) + 16);
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)LockHandle.LockQueue.Lock);
  }
  *(_QWORD *)(a1 + 144) += a3;
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
    *(_QWORD *)(a1 + 128) += a3;
  if ( !a4 )
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
}
