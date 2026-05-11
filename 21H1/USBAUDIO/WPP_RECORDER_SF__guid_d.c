/*
 * XREFs of WPP_RECORDER_SF__guid_d @ 0x1C0003138
 * Callers:
 *     PropertyGetBoolean @ 0x1C00289B0 (PropertyGetBoolean.c)
 *     PropertyGetDbLevel @ 0x1C0029010 (PropertyGetDbLevel.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00133D0 (_guard_dispatch_icall_nop.c)
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
      &WPP_06d71a5b906232def5af5bab196a5a62_Traceguids,
      a4,
      a6,
      16LL,
      va,
      4LL,
      0LL);
  LOWORD(v9) = a4;
  return WppAutoLogTrace(a1, 0LL, 10LL, &WPP_06d71a5b906232def5af5bab196a5a62_Traceguids, v9, a6);
}
