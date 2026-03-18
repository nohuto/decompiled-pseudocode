/*
 * XREFs of ?EnableStablePState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x1C0056A80
 * Callers:
 *     ?EnableStablePowerState@DXGADAPTER@@QEAAXXZ @ 0x1C02BB714 (-EnableStablePowerState@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?RequestPState@DXGPOWERSTATISTICSTRANSITIONENGINE@@AEAAXI@Z @ 0x1C0056FD4 (-RequestPState@DXGPOWERSTATISTICSTRANSITIONENGINE@@AEAAXI@Z.c)
 */

void __fastcall DXGPOWERSTATISTICSTRANSITIONENGINE::EnableStablePState(KSPIN_LOCK *this)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(this + 3, &LockHandle);
  *((_BYTE *)this + 89) = 1;
  DXGPOWERSTATISTICSTRANSITIONENGINE::RequestPState((DXGPOWERSTATISTICSTRANSITIONENGINE *)this, 0);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
