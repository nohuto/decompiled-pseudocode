/*
 * XREFs of UsbhSshEnterSx @ 0x1C00021C0
 * Callers:
 *     UsbhFdoSetPowerSx_Action @ 0x1C000200C (UsbhFdoSetPowerSx_Action.c)
 * Callees:
 *     UsbhDecHubBusy @ 0x1C0003610 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C0004060 (UsbhIncHubBusy.c)
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     UsbhDisableTimerObject @ 0x1C0011260 (UsbhDisableTimerObject.c)
 */

LONG __fastcall UsbhSshEnterSx(__int64 a1, int a2)
{
  __int64 v4; // rsi
  signed __int64 v5; // rbx
  __int64 v6; // r9
  int v7; // r10d
  __int64 v9; // rdx

  v4 = FdoExt(a1);
  v5 = UsbhIncHubBusy(a1, a2, a1, 2018734963, 1);
  KeWaitForSingleObject((PVOID)(v4 + 3160), Executive, 0, 0, 0LL);
  Log(a1, 0x10000, 1213429803, _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 3304), v5, 0LL), v5);
  if ( v6 )
  {
    Log(a1, v7, 1213429810, v6, v5);
    UsbhDecHubBusy(a1, v9, v5);
  }
  UsbhDisableTimerObject(a1, v4 + 3200);
  return KeReleaseSemaphore((PRKSEMAPHORE)(v4 + 3160), 16, 1, 0);
}
