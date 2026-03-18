/*
 * XREFs of Endpoint_Disable @ 0x1C000A348
 * Callers:
 *     UsbDevice_ValidateEndpointConfigureRequest @ 0x1C0005BA4 (UsbDevice_ValidateEndpointConfigureRequest.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C0006F40 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_InitializeInputContextForAddEndpoints @ 0x1C00077E4 (UsbDevice_InitializeInputContextForAddEndpoints.c)
 *     UsbDevice_SetDeviceDisabled @ 0x1C000A1DC (UsbDevice_SetDeviceDisabled.c)
 *     UsbDevice_UcxEvtEnable @ 0x1C000DF00 (UsbDevice_UcxEvtEnable.c)
 *     UsbDevice_EnableCompletion @ 0x1C000EEE0 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_UcxEvtReset @ 0x1C000F9F0 (UsbDevice_UcxEvtReset.c)
 *     UsbDevice_DeviceResetCompletion @ 0x1C0045320 (UsbDevice_DeviceResetCompletion.c)
 *     UsbDevice_DisableCompletion @ 0x1C0045554 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C0046A60 (UsbDevice_UcxEvtDisable.c)
 * Callees:
 *     ESM_AddEvent @ 0x1C0007E70 (ESM_AddEvent.c)
 *     Endpoint_Disable_Internal @ 0x1C000A394 (Endpoint_Disable_Internal.c)
 *     Controller_DecrementNumberOfEndpointsOffloaded @ 0x1C0030984 (Controller_DecrementNumberOfEndpointsOffloaded.c)
 */

void __fastcall Endpoint_Disable(__int64 a1, __int64 a2)
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
  ESM_AddEvent((KSPIN_LOCK *)(a1 + 288), 27);
}
