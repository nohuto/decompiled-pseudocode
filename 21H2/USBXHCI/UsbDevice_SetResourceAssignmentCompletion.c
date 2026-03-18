/*
 * XREFs of UsbDevice_SetResourceAssignmentCompletion @ 0x1C00474F0
 * Callers:
 *     <none>
 * Callees:
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C000239C (UsbDevice_QueueConfigureEndpointEvent.c)
 *     Controller_IncrementNumberOfEndpointsOffloaded @ 0x1C0031D50 (Controller_IncrementNumberOfEndpointsOffloaded.c)
 *     WPP_RECORDER_SF_sds @ 0x1C003609C (WPP_RECORDER_SF_sds.c)
 */

void __fastcall UsbDevice_SetResourceAssignmentCompletion(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  int v6; // ecx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // [rsp+20h] [rbp-28h]

  v4 = *(_QWORD *)(a1 + 48);
  v5 = *(_QWORD *)(v4 + 16);
  --*(_DWORD *)(v5 + 580);
  if ( *(_BYTE *)(a1 + 60) == 1 )
  {
    if ( *(_DWORD *)(v5 + 600) == 8 )
    {
      v6 = *(_DWORD *)(v4 + 1352);
      if ( v6 == 2 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_sds(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            a2,
            a3,
            a4,
            v9,
            "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\endpoint.h",
            5,
            "Endpoint is already offloaded");
        if ( !KdRefreshDebuggerNotPresent() )
          __debugbreak();
      }
      else
      {
        if ( *(_DWORD *)(*(_QWORD *)v4 + 588LL) == 2 && v6 != 1 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_sds(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              a2,
              a3,
              a4,
              v9,
              "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\endpoint.h",
              12,
              "Invalid current offload state");
          if ( !KdRefreshDebuggerNotPresent() )
            __debugbreak();
        }
        v7 = *(_QWORD *)v4;
        *(_DWORD *)(v4 + 1352) = 2;
        Controller_IncrementNumberOfEndpointsOffloaded(v7);
      }
    }
  }
  else
  {
    if ( *(_DWORD *)(v5 + 448) == 259 )
      *(_DWORD *)(v5 + 448) = -1073741823;
    *(_BYTE *)(v5 + 584) = 1;
  }
  if ( !*(_DWORD *)(v5 + 580) )
  {
    v8 = 1LL;
    if ( *(_BYTE *)(v5 + 584) )
      v8 = 2LL;
    UsbDevice_QueueConfigureEndpointEvent(v5, v8);
  }
}
