/*
 * XREFs of UsbDevice_HandleUnhandledEventReceivedState @ 0x1C0046F14
 * Callers:
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C000239C (UsbDevice_QueueConfigureEndpointEvent.c)
 * Callees:
 *     UsbDevice_CompleteConfigureEndpointRequest @ 0x1C00025C0 (UsbDevice_CompleteConfigureEndpointRequest.c)
 *     WPP_RECORDER_SF_sds @ 0x1C003609C (WPP_RECORDER_SF_sds.c)
 */

__int64 __fastcall UsbDevice_HandleUnhandledEventReceivedState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // edx
  int v6; // r8d
  int v7; // r9d
  __int64 v9; // [rsp+20h] [rbp-28h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_sds(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      a3,
      a4,
      v9,
      "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\usbdevice.c",
      210,
      "Unhandled event/transition encountered");
  if ( !KdRefreshDebuggerNotPresent() )
    __debugbreak();
  if ( *(_DWORD *)(a1 + 448) == 259 )
    *(_DWORD *)(a1 + 448) = -1073741595;
  return UsbDevice_CompleteConfigureEndpointRequest(a1, v5, v6, v7);
}
