/*
 * XREFs of ?DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x1C00500EC
 * Callers:
 *     DpiPowerArbiterThread @ 0x1C0186430 (DpiPowerArbiterThread.c)
 * Callees:
 *     DpiCancelSuspendAdapterTimer @ 0x1C004F4D4 (DpiCancelSuspendAdapterTimer.c)
 *     DpiRequestDevicePowerIrp @ 0x1C004F738 (DpiRequestDevicePowerIrp.c)
 *     DpiSetDevicePowerTransitionState @ 0x1C004FDC0 (DpiSetDevicePowerTransitionState.c)
 */

void __fastcall DpiFinishSuspendAdapter(struct _FDO_CONTEXT *a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 509, &LockHandle);
  if ( *((_DWORD *)a1 + 1034) == 2 )
  {
    v3 = WdLogNewEntry5_WdPower();
    *(_QWORD *)(v3 + 24) = a1;
    *(_OWORD *)(v3 + 32) = 0LL;
    WdLogEvent5_WdPower(v3);
    *((_DWORD *)a1 + 994) = 1;
    KeResetEvent((PRKEVENT)((char *)a1 + 4088));
    if ( *((_DWORD *)a1 + 1035) )
    {
      v4 = WdLogNewEntry5_WdPower();
      *(_QWORD *)(v4 + 24) = a1;
      *(_OWORD *)(v4 + 32) = 0LL;
      WdLogEvent5_WdPower(v4);
      DpiRequestDevicePowerIrp((__int64)a1, 4);
      DpiSetDevicePowerTransitionState((__int64)a1, 4);
      DpiCancelSuspendAdapterTimer((__int64)a1);
    }
    else
    {
      DpiSetDevicePowerTransitionState((__int64)a1, 3);
    }
  }
  else
  {
    v2 = (_QWORD *)WdLogNewEntry5_WdPower();
    v2[5] = 0LL;
    v2[3] = a1;
    v2[4] = 1LL;
    WdLogEvent5_WdPower(v2);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
