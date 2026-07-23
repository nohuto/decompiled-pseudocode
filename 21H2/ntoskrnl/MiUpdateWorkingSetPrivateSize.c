/*
 * XREFs of MiUpdateWorkingSetPrivateSize @ 0x14036B0B8
 * Callers:
 *     MiConvertPrivateToProto @ 0x14036A200 (MiConvertPrivateToProto.c)
 *     MiDemoteCombinedPte @ 0x14036B410 (MiDemoteCombinedPte.c)
 *     MiBuildForkPte @ 0x1405584FC (MiBuildForkPte.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiGetSharedVm @ 0x1402BF850 (MiGetSharedVm.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
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
