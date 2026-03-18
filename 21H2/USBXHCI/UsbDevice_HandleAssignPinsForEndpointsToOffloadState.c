/*
 * XREFs of UsbDevice_HandleAssignPinsForEndpointsToOffloadState @ 0x1C0046AD0
 * Callers:
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C000239C (UsbDevice_QueueConfigureEndpointEvent.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_sds @ 0x1C003609C (WPP_RECORDER_SF_sds.c)
 *     UsbDevice_SetResourceAssignment @ 0x1C0047420 (UsbDevice_SetResourceAssignment.c)
 */

char __fastcall UsbDevice_HandleAssignPinsForEndpointsToOffloadState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r14d
  int v5; // ebp
  unsigned int v6; // eax
  unsigned int *v8; // rdi
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v14; // [rsp+20h] [rbp-48h]
  unsigned int v15; // [rsp+70h] [rbp+8h]

  v4 = 0;
  *(_DWORD *)(a1 + 580) = *(_DWORD *)(a2 + 84);
  v5 = 0;
  v6 = *(_DWORD *)(a2 + 84);
  v8 = *(unsigned int **)(a2 + 88);
  v15 = 0;
  if ( v6 )
  {
    do
    {
      v10 = 0LL;
      if ( *(_DWORD *)(a2 + 24) )
      {
        do
        {
          v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                  WdfDriverGlobals,
                  *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8 * v10),
                  off_1C00611A8);
          v12 = v11;
          if ( *(unsigned __int8 *)(v11 + 98) == *((_WORD *)v8 + 2) )
          {
            ++v5;
            if ( *(_DWORD *)(v11 + 1352) )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_sds(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  a2,
                  a3,
                  a4,
                  v14,
                  "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\endpoint.h",
                  241,
                  "Invalid endpoint offload state before marking it as pending");
              if ( !KdRefreshDebuggerNotPresent() )
                __debugbreak();
            }
            else
            {
              *(_DWORD *)(v11 + 1352) = 1;
            }
            UsbDevice_SetResourceAssignment(a1, v12, *(unsigned int *)((char *)v8 + 6));
          }
          v10 = (unsigned int)(v10 + 1);
        }
        while ( (unsigned int)v10 < *(_DWORD *)(a2 + 24) );
        v4 = v15;
      }
      ++v4;
      v8 = (unsigned int *)((char *)v8 + *v8);
      v15 = v4;
      v6 = *(_DWORD *)(a2 + 84);
    }
    while ( v4 < v6 );
  }
  if ( v5 != v6 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        a2,
        a3,
        a4,
        v14,
        "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\usbdevice.c",
        241,
        "Mismatch encountered in AssignPinsForEndpointsToOffloadState");
    LOBYTE(v6) = KdRefreshDebuggerNotPresent();
    if ( !(_BYTE)v6 )
      __debugbreak();
  }
  return v6;
}
