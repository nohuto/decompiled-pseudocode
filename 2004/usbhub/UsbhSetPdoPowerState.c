/*
 * XREFs of UsbhSetPdoPowerState @ 0x1C0017660
 * Callers:
 *     UsbhPdoDevicePowerState @ 0x1C00109A0 (UsbhPdoDevicePowerState.c)
 *     UsbhPdoSystemPowerState @ 0x1C0010E28 (UsbhPdoSystemPowerState.c)
 *     UsbhSS_PdoWakeWorker @ 0x1C0016F40 (UsbhSS_PdoWakeWorker.c)
 *     UsbhPdoSetD0 @ 0x1C00173C0 (UsbhPdoSetD0.c)
 *     UsbhPdoSetD0_Finish @ 0x1C001820C (UsbhPdoSetD0_Finish.c)
 *     UsbhPdoSetDx @ 0x1C0018BE0 (UsbhPdoSetDx.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C003AEF8 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x1C0056E30 (UsbhPdoPnp_RemoveDevice.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C002DC78 (UsbhTrapFatal_Dbg.c)
 */

_DWORD *__fastcall UsbhSetPdoPowerState(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  _DWORD *result; // rax
  __int64 v6; // rcx
  _DWORD *v7; // rdx
  __int64 v8; // rdx

  if ( !a2 )
    goto LABEL_10;
  result = *(_DWORD **)(a2 + 64);
  if ( !result )
    UsbhTrapFatal_Dbg(a2, 0LL);
  if ( *result != 1329877064 )
    UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64));
  v6 = *(_QWORD *)(a1 + 8);
  if ( !v6 )
LABEL_10:
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v7 = *(_DWORD **)(v6 + 64);
  if ( !v7 )
    UsbhTrapFatal_Dbg(v6, 0LL);
  if ( *v7 != 541218120 )
    UsbhTrapFatal_Dbg(v6, v7);
  v8 = ((unsigned __int8)result[2] + 1) & 7;
  result[2] = v8;
  v8 *= 32LL;
  *(_DWORD *)((char *)result + v8 + 272) = a5;
  *(_DWORD *)((char *)result + v8 + 276) = result[282];
  *(_DWORD *)((char *)result + v8 + 280) = a4;
  result[282] = a4;
  return result;
}
