/*
 * XREFs of DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel @ 0x1C00046A0
 * Callers:
 *     DpiEnableD3Requests @ 0x1C00E28DC (DpiEnableD3Requests.c)
 *     DpiGetDxgAdapterSafe @ 0x1C010CBD0 (DpiGetDxgAdapterSafe.c)
 *     DpiPowerArbiterThread @ 0x1C019D6B0 (DpiPowerArbiterThread.c)
 * Callees:
 *     ?DpiScheduleDelayedDevicePowerRequired@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x1C00512A0 (-DpiScheduleDelayedDevicePowerRequired@@YAXPEAU_FDO_CONTEXT@@@Z.c)
 */

void __fastcall DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel(KSPIN_LOCK *a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(a1 + 509, &LockHandle);
  if ( *((_DWORD *)a1 + 1034) != 4 && *((_DWORD *)a1 + 1035) == 1 )
    DpiScheduleDelayedDevicePowerRequired((struct _FDO_CONTEXT *)a1);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
