/*
 * XREFs of WPP_RECORDER_SF__guid_d @ 0x1C00031A8
 * Callers:
 *     PropertyGetBoolean @ 0x1C0028DD0 (PropertyGetBoolean.c)
 *     PropertyGetDbLevel @ 0x1C00294D0 (PropertyGetDbLevel.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012930 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF__guid_d(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, int a5, __int64 a6, ...)
{
  int v9; // [rsp+20h] [rbp-38h]
  va_list va; // [rsp+90h] [rbp+38h] BYREF

  va_start(va, a6);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) != 0 )
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, void *, _QWORD, __int64, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_daa3c8234111352579d92ba3cb45b39f_Traceguids,
      a4,
      a6,
      16LL,
      va,
      4LL,
      0LL);
  LOWORD(v9) = a4;
  return WppAutoLogTrace(a1, 0LL, 10LL, &WPP_daa3c8234111352579d92ba3cb45b39f_Traceguids, v9, a6);
}
