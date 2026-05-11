/*
 * XREFs of WPP_RECORDER_SF_l @ 0x1C00011B4
 * Callers:
 *     DeviceStart @ 0x1C00228C0 (DeviceStart.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012E90 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_l(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  int v7; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+78h] [rbp+30h] BYREF

  va_start(va, a5);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0 )
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, const union _LARGE_INTEGER *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_65ff8281dfdf3691e0ea7cf1d87927b7_Traceguids,
      20LL,
      va,
      4LL,
      0LL);
  LOWORD(v7) = 20;
  return WppAutoLogTrace(a1, 0LL, 9LL, &WPP_65ff8281dfdf3691e0ea7cf1d87927b7_Traceguids, v7, va);
}
