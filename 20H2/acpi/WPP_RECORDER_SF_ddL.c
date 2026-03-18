/*
 * XREFs of WPP_RECORDER_SF_ddL @ 0x1C0016D98
 * Callers:
 *     PnpiGrowResourceList @ 0x1C009C8D8 (PnpiGrowResourceList.c)
 *     PnpiGrowResourceDescriptor @ 0x1C009CACC (PnpiGrowResourceDescriptor.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0031E80 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_ddL(__int64 a1, unsigned __int8 a2, __int64 a3, unsigned __int16 a4, int a5, ...)
{
  unsigned int v7; // ebx
  int v9; // [rsp+20h] [rbp-48h]
  __int64 v10; // [rsp+98h] [rbp+30h] BYREF
  va_list va; // [rsp+98h] [rbp+30h]
  __int64 v12; // [rsp+A0h] [rbp+38h] BYREF
  va_list va1; // [rsp+A0h] [rbp+38h]
  va_list va2; // [rsp+A8h] [rbp+40h] BYREF

  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v10 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v12 = va_arg(va2, _QWORD);
  v7 = a2;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= a2 )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, _QWORD, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_fad942c932903a636e6a214bab40d1dd_Traceguids,
      a4,
      (__int64 *)va,
      4LL,
      (__int64 *)va1,
      4LL,
      va2,
      4LL,
      0LL);
  LOWORD(v9) = a4;
  return WppAutoLogTrace(
           a1,
           v7,
           14LL,
           &WPP_fad942c932903a636e6a214bab40d1dd_Traceguids,
           v9,
           (__int64 *)va,
           4LL,
           (__int64 *)va1);
}
