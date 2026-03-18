/*
 * XREFs of WPP_RECORDER_SF_dq @ 0x1C0010E7C
 * Callers:
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C00020D0 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_ValidateEndpointConfigureRequest @ 0x1C00029BC (UsbDevice_ValidateEndpointConfigureRequest.c)
 *     UsbDevice_SetDeviceDisabled @ 0x1C000D1B0 (UsbDevice_SetDeviceDisabled.c)
 *     XilCoreDeviceSlot_SetDeviceContext @ 0x1C0010670 (XilCoreDeviceSlot_SetDeviceContext.c)
 *     UsbDevice_EnableCompletion @ 0x1C00109B0 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_UcxEvtAddress @ 0x1C0010AE0 (UsbDevice_UcxEvtAddress.c)
 *     UsbDevice_SetAddressCompletion @ 0x1C0010C30 (UsbDevice_SetAddressCompletion.c)
 *     UsbDevice_UcxEvtReset @ 0x1C0010F60 (UsbDevice_UcxEvtReset.c)
 *     UsbDevice_UpdateCompletion @ 0x1C0018310 (UsbDevice_UpdateCompletion.c)
 *     UsbDevice_ConfigureEndpointCompletion @ 0x1C0045DA0 (UsbDevice_ConfigureEndpointCompletion.c)
 *     UsbDevice_DeviceResetCompletion @ 0x1C0046070 (UsbDevice_DeviceResetCompletion.c)
 *     UsbDevice_DisableCompletion @ 0x1C00462A4 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_DropEndpointsCompletion @ 0x1C00465E0 (UsbDevice_DropEndpointsCompletion.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C00476E0 (UsbDevice_UcxEvtDisable.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_dq(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v7; // rdi
  unsigned int v8; // esi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-48h]
  __int64 v13; // [rsp+50h] [rbp-18h]
  __int64 v14; // [rsp+58h] [rbp-10h]
  __int64 v15; // [rsp+98h] [rbp+30h] BYREF
  va_list va; // [rsp+98h] [rbp+30h]
  va_list va1; // [rsp+A0h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v15 = va_arg(va1, _QWORD);
  v7 = (unsigned __int64)a3 >> 16;
  v8 = a2;
  v10 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v7 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v7 + 1) >= a2 )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v7),
      43LL,
      a5,
      a4,
      (__int64 *)va,
      4LL,
      va1,
      8LL,
      0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, v8, a3, a5, v12, (__int64 *)va, 4LL, va1, 8LL, 0LL, v13, v14);
}
