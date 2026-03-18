/*
 * XREFs of Usbh_OvercurrentDerefHubBusy @ 0x1C002FE20
 * Callers:
 *     UsbhAutoOvercurrentResetWorker @ 0x1C002F6C0 (UsbhAutoOvercurrentResetWorker.c)
 *     UsbhDeviceOvercurrentPopup @ 0x1C002F764 (UsbhDeviceOvercurrentPopup.c)
 *     UsbhDriverOvercurrentResetWorker @ 0x1C002F830 (UsbhDriverOvercurrentResetWorker.c)
 *     UsbhOvercurrentResetWorker @ 0x1C002F8C0 (UsbhOvercurrentResetWorker.c)
 *     UsbhQueueDriverOvercurrent @ 0x1C002FB30 (UsbhQueueDriverOvercurrent.c)
 *     UsbhQueueOvercurrentReset @ 0x1C002FCB0 (UsbhQueueOvercurrentReset.c)
 * Callees:
 *     UsbhDecHubBusy @ 0x1C0003610 (UsbhDecHubBusy.c)
 */

LONG __fastcall Usbh_OvercurrentDerefHubBusy(__int64 a1, __int64 a2, char a3)
{
  struct _KEVENT *v3; // rsi
  __int64 v7; // rdx
  int v8; // eax

  v3 = (struct _KEVENT *)(a2 + 2888);
  KeWaitForSingleObject((PVOID)(a2 + 2888), Executive, 0, 0, 0LL);
  v8 = *(_DWORD *)(a2 + 2912);
  if ( a3 == 1 )
    *(_DWORD *)(a2 + 2912) = --v8;
  else
    *(_BYTE *)(a2 + 2916) = 0;
  if ( !v8 && !*(_BYTE *)(a2 + 2916) )
  {
    UsbhDecHubBusy(a1, v7, *(_QWORD **)(a2 + 2880));
    *(_QWORD *)(a2 + 2880) = 0LL;
  }
  return KeSetEvent(v3, 0, 0);
}
