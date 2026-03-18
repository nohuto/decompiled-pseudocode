/*
 * XREFs of DpiSetDevicePowerTransitionStateAtPassiveLevel @ 0x1C0050E4C
 * Callers:
 *     DpiFdoHandleDevicePower @ 0x1C0172950 (DpiFdoHandleDevicePower.c)
 *     DpiPowerArbiterThread @ 0x1C0196790 (DpiPowerArbiterThread.c)
 *     DpiLdaPowerUpAdapterInChain @ 0x1C02D7D18 (DpiLdaPowerUpAdapterInChain.c)
 * Callees:
 *     DxgkReportDevicePoweredOn @ 0x1C003B3DC (DxgkReportDevicePoweredOn.c)
 */

void __fastcall DpiSetDevicePowerTransitionStateAtPassiveLevel(__int64 a1, int a2, char a3)
{
  __int64 v3; // rsi
  __int64 v6; // rdi
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = a2;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 4072), &LockHandle);
  v6 = 5LL;
  if ( (_DWORD)v3 != 5 || *(_DWORD *)(a1 + 4136) == 4 )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdPower();
    v6 = v3;
    v7[5] = 0LL;
    v7[3] = a1;
    v7[4] = v3;
    WdLogEvent5_WdPower(v7);
    *(_DWORD *)(a1 + 4136) = v3;
  }
  if ( a3 && !*(_DWORD *)(a1 + 4140) )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdPower();
    v8[3] = a1;
    v8[4] = v6;
    v8[5] = 1LL;
    WdLogEvent5_WdPower(v8);
    DxgkReportDevicePoweredOn(*(_QWORD *)(a1 + 3896));
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
