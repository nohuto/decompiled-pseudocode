/*
 * XREFs of WPP_RECORDER_SF_i @ 0x1C000CE84
 * Callers:
 *     Display_PSS @ 0x1C0002238 (Display_PSS.c)
 *     Display_LPI @ 0x1C000C058 (Display_LPI.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00044E0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_i(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, int a5, ...)
{
  int v8; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+78h] [rbp+30h] BYREF

  va_start(va, a5);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids,
      a4,
      va,
      8LL,
      0LL);
  LOWORD(v8) = a4;
  return WppAutoLogTrace(a1, 5LL, 2LL, &WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids, v8, va);
}
