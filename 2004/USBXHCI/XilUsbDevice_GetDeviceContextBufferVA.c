/*
 * XREFs of XilUsbDevice_GetDeviceContextBufferVA @ 0x1C00057C4
 * Callers:
 *     UsbDevice_InitializeInputContextForDropEndpoints @ 0x1C00059D8 (UsbDevice_InitializeInputContextForDropEndpoints.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C0006F40 (UsbDevice_EndpointsConfigureCompletion.c)
 *     XilCoreDeviceSlot_SetDeviceContext @ 0x1C000EC04 (XilCoreDeviceSlot_SetDeviceContext.c)
 *     UsbDevice_SetAddressCompletion @ 0x1C000F010 (UsbDevice_SetAddressCompletion.c)
 *     UsbDevice_GetXhciEndpointDequeuePointer @ 0x1C000F590 (UsbDevice_GetXhciEndpointDequeuePointer.c)
 *     UsbDevice_GetEndpointState @ 0x1C000F5F8 (UsbDevice_GetEndpointState.c)
 *     UsbDevice_UcxEvtReset @ 0x1C000F9F0 (UsbDevice_UcxEvtReset.c)
 *     Endpoint_OnCancelEndpointConfigure @ 0x1C0037F38 (Endpoint_OnCancelEndpointConfigure.c)
 *     Endpoint_OnResetEndpointConfigure @ 0x1C00384B8 (Endpoint_OnResetEndpointConfigure.c)
 *     Endpoint_SetUpConfigureEndpointCommand @ 0x1C003980C (Endpoint_SetUpConfigureEndpointCommand.c)
 *     UsbDevice_GetEndpointOffloadInformation @ 0x1C0045A8C (UsbDevice_GetEndpointOffloadInformation.c)
 *     Crashdump_InitializeDeviceContext @ 0x1C0049BA0 (Crashdump_InitializeDeviceContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XilUsbDevice_GetDeviceContextBufferVA(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  result = 0LL;
  if ( *(_BYTE *)(a1 + 657) )
    v2 = *(_QWORD *)(a1 + 640);
  else
    v2 = *(_QWORD *)(a1 + 632);
  if ( v2 )
    return *(_QWORD *)(v2 + 16);
  return result;
}
