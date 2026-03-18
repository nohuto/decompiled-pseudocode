/*
 * XREFs of WPP_RECORDER_SF_dqq @ 0x1C0011570
 * Callers:
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C00020D0 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_InitializeInputContextForAddEndpoints @ 0x1C00045DC (UsbDevice_InitializeInputContextForAddEndpoints.c)
 *     UsbDevice_SetAddress @ 0x1C00111BC (UsbDevice_SetAddress.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_dqq(__int64 a1, _DWORD a2, _DWORD a3, unsigned __int16 a4, __int64 a5, ...)
{
  int v8; // [rsp+20h] [rbp-48h]
  __int64 v9; // [rsp+98h] [rbp+30h] BYREF
  va_list va; // [rsp+98h] [rbp+30h]
  __int64 v11; // [rsp+A0h] [rbp+38h] BYREF
  va_list va1; // [rsp+A0h] [rbp+38h]
  va_list va2; // [rsp+A8h] [rbp+40h] BYREF

  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v9 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v11 = va_arg(va2, _QWORD);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, _QWORD, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_5cc87a4a737631244eec1c43efcd9051_Traceguids,
      a4,
      (__int64 *)va,
      4LL,
      (__int64 *)va1,
      8LL,
      va2,
      8LL,
      0LL);
  LOWORD(v8) = a4;
  return WppAutoLogTrace(
           a1,
           4LL,
           12LL,
           &WPP_5cc87a4a737631244eec1c43efcd9051_Traceguids,
           v8,
           (__int64 *)va,
           4LL,
           (__int64 *)va1,
           8LL,
           va2,
           8LL,
           0LL);
}
