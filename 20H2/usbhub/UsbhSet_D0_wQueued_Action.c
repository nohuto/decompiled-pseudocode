/*
 * XREFs of UsbhSet_D0_wQueued_Action @ 0x1C0019404
 * Callers:
 *     UsbhPdoDevicePowerState @ 0x1C00109A0 (UsbhPdoDevicePowerState.c)
 * Callees:
 *     UsbhFdoScheduleDeferredPowerRequest @ 0x1C0017A30 (UsbhFdoScheduleDeferredPowerRequest.c)
 *     UsbhReleasePowerContext @ 0x1C0018750 (UsbhReleasePowerContext.c)
 *     UsbhAcquirePowerContext @ 0x1C0019484 (UsbhAcquirePowerContext.c)
 */

__int64 __fastcall UsbhSet_D0_wQueued_Action(__int64 a1, int a2, int a3, IRP *a4)
{
  __int64 v6; // rax
  __int64 v7; // rsi
  unsigned int v8; // ebx

  v6 = UsbhAcquirePowerContext(a1, a2, a3, 0, (__int64)a4, 1, 0);
  v7 = v6;
  if ( v6 )
  {
    v8 = UsbhFdoScheduleDeferredPowerRequest(a1, (int)UsbhPdoSetD0, v6, a4);
    if ( (v8 & 0xC0000000) == 0xC0000000 )
      UsbhReleasePowerContext(a1, v7);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v8;
}
