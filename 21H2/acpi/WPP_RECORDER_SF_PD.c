/*
 * XREFs of WPP_RECORDER_SF_PD @ 0x1C005CDF4
 * Callers:
 *     AcpiConvertObjDataToMethodArguments @ 0x1C005BB40 (AcpiConvertObjDataToMethodArguments.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_PD(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  int v7; // [rsp+20h] [rbp-48h]
  int v8[6]; // [rsp+50h] [rbp-18h] BYREF
  va_list va; // [rsp+98h] [rbp+30h] BYREF

  va_start(va, a5);
  v8[0] = -1073741670;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, char *, __int64, int *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_6b96f8ebb13c3b7665ec42abfcbc7cd5_Traceguids,
      22LL,
      va,
      8LL,
      v8,
      4LL,
      0LL);
  LOWORD(v7) = 22;
  return WppAutoLogTrace(a1, 2LL, 21LL, &WPP_6b96f8ebb13c3b7665ec42abfcbc7cd5_Traceguids, v7, va);
}
