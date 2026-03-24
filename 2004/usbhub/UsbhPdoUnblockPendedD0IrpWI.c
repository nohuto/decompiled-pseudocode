/*
 * XREFs of UsbhPdoUnblockPendedD0IrpWI @ 0x1C0018660
 * Callers:
 *     UsbhFdoUnblockAllPendedPdoD0Irps @ 0x1C001B724 (UsbhFdoUnblockAllPendedPdoD0Irps.c)
 * Callees:
 *     UsbhDecHubBusy @ 0x1C0003610 (UsbhDecHubBusy.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     UsbhEtwLogDevicePowerEvent @ 0x1C0013DA0 (UsbhEtwLogDevicePowerEvent.c)
 *     UsbhDecPdoIoCount @ 0x1C0014E84 (UsbhDecPdoIoCount.c)
 *     UsbhPdoSetD0_Finish @ 0x1C001820C (UsbhPdoSetD0_Finish.c)
 *     UsbhReleasePowerContext @ 0x1C0018750 (UsbhReleasePowerContext.c)
 */

__int64 __fastcall UsbhPdoUnblockPendedD0IrpWI(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // r9
  struct _DEVICE_OBJECT *v6; // rsi
  _DWORD *v7; // rax
  __int64 v8; // r8
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v13; // [rsp+20h] [rbp-18h]

  Log(a1, 16, 1970291760, a3, a2);
  v6 = *(struct _DEVICE_OBJECT **)(v5 + 48);
  v7 = PdoExt((__int64)v6);
  v8 = *(_QWORD *)(a3 + 64);
  v9 = (__int64)v7;
  v10 = *(_QWORD *)(v8 + 184);
  UsbhPdoSetD0_Finish(*(_QWORD *)(a3 + 72), v6, v8);
  *(_QWORD *)(v9 + 2560) = MEMORY[0xFFFFF78000000014];
  UsbhDecHubBusy(a1, v11, *(_QWORD **)(a3 + 112));
  *(_QWORD *)(a3 + 112) = 0LL;
  LODWORD(v13) = 0;
  UsbhEtwLogDevicePowerEvent(
    v9,
    *(_QWORD *)(a3 + 64),
    &USBHUB_ETW_EVENT_DEVICE_POWER_SET_D0_COMPLETE,
    *(_DWORD *)(v10 + 24),
    v13);
  *(_DWORD *)(*(_QWORD *)(a3 + 64) + 48LL) = 0;
  IofCompleteRequest(*(PIRP *)(a3 + 64), 0);
  UsbhDecPdoIoCount((ULONG_PTR)v6, *(_QWORD *)(a3 + 64));
  return UsbhReleasePowerContext(a1, a3);
}
