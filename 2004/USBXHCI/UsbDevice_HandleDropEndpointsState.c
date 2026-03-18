/*
 * XREFs of UsbDevice_HandleDropEndpointsState @ 0x1C0045F1C
 * Callers:
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C00071A4 (UsbDevice_QueueConfigureEndpointEvent.c)
 * Callees:
 *     UsbDevice_InitializeInputContextForAddDropEndpoints @ 0x1C0005A48 (UsbDevice_InitializeInputContextForAddDropEndpoints.c)
 *     UsbDevice_SendConfigureEndpointCommand @ 0x1C0005C40 (UsbDevice_SendConfigureEndpointCommand.c)
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C00071A4 (UsbDevice_QueueConfigureEndpointEvent.c)
 */

__int64 __fastcall UsbDevice_HandleDropEndpointsState(__int64 a1, __int64 a2)
{
  int v3; // eax

  v3 = UsbDevice_InitializeInputContextForAddDropEndpoints(a1, a2, 1u);
  if ( v3 >= 0 )
  {
    *(_BYTE *)(a1 + 452) = 0;
    return UsbDevice_SendConfigureEndpointCommand(a1, 1);
  }
  else
  {
    if ( *(_DWORD *)(a1 + 448) == 259 )
      *(_DWORD *)(a1 + 448) = v3;
    return UsbDevice_QueueConfigureEndpointEvent(a1, 2LL);
  }
}
