/*
 * XREFs of Endpoint_Disable @ 0x1C0004D70
 * Callers:
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C00020D0 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_ValidateEndpointConfigureRequest @ 0x1C00029BC (UsbDevice_ValidateEndpointConfigureRequest.c)
 *     UsbDevice_InitializeInputContextForAddEndpoints @ 0x1C00045DC (UsbDevice_InitializeInputContextForAddEndpoints.c)
 *     UsbDevice_SetDeviceDisabled @ 0x1C000D1B0 (UsbDevice_SetDeviceDisabled.c)
 *     UsbDevice_UcxEvtEnable @ 0x1C000FC10 (UsbDevice_UcxEvtEnable.c)
 *     UsbDevice_EnableCompletion @ 0x1C00109B0 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_UcxEvtReset @ 0x1C0010F60 (UsbDevice_UcxEvtReset.c)
 *     UsbDevice_DeviceResetCompletion @ 0x1C0046070 (UsbDevice_DeviceResetCompletion.c)
 *     UsbDevice_DisableCompletion @ 0x1C00462A4 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C00476E0 (UsbDevice_UcxEvtDisable.c)
 * Callees:
 *     Endpoint_Disable_Internal @ 0x1C0004DBC (Endpoint_Disable_Internal.c)
 *     ESM_AddEvent @ 0x1C0005174 (ESM_AddEvent.c)
 *     Controller_DecrementNumberOfEndpointsOffloaded @ 0x1C003142C (Controller_DecrementNumberOfEndpointsOffloaded.c)
 */

__int64 __fastcall Endpoint_Disable(__int64 a1, __int64 a2)
{
  char v2; // di

  v2 = a2;
  if ( *(_DWORD *)(a1 + 1352) == 2 )
  {
    *(_DWORD *)(a1 + 1352) = 0;
    Controller_DecrementNumberOfEndpointsOffloaded(*(_QWORD *)a1);
  }
  LOBYTE(a2) = v2;
  Endpoint_Disable_Internal(a1, a2);
  return ESM_AddEvent((PVOID)(a1 + 288));
}
