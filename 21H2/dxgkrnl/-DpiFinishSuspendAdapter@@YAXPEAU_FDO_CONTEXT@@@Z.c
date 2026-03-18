/*
 * XREFs of ?DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x1C0023E3C
 * Callers:
 *     DpiPowerArbiterThread @ 0x1C0217840 (DpiPowerArbiterThread.c)
 * Callees:
 *     DpiSetDevicePowerTransitionState @ 0x1C00242A8 (DpiSetDevicePowerTransitionState.c)
 *     DpiCancelSuspendAdapterTimer @ 0x1C00244F0 (DpiCancelSuspendAdapterTimer.c)
 *     DpiRequestDevicePowerIrp @ 0x1C005F6B4 (DpiRequestDevicePowerIrp.c)
 */

void __fastcall DpiFinishSuspendAdapter(struct _FDO_CONTEXT *a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 510, &LockHandle);
  if ( *((_DWORD *)a1 + 1036) == 2 )
  {
    WdLogSingleEntry3(9LL, a1, 0LL, 0LL);
    *((_DWORD *)a1 + 996) = 1;
    KeResetEvent((PRKEVENT)((char *)a1 + 4096));
    if ( *((_DWORD *)a1 + 1037) )
    {
      WdLogSingleEntry3(9LL, a1, 0LL, 0LL);
      DpiRequestDevicePowerIrp(a1, 4LL);
      DpiSetDevicePowerTransitionState(a1, 4LL);
      DpiCancelSuspendAdapterTimer(a1);
    }
    else
    {
      DpiSetDevicePowerTransitionState(a1, 3LL);
    }
  }
  else
  {
    WdLogSingleEntry3(9LL, a1, 1LL, 0LL);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
