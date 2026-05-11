/*
 * XREFs of WPP_RECORDER_SF__guid_dd @ 0x1C000320C
 * Callers:
 *     PropertySetBoolean @ 0x1C00287A0 (PropertySetBoolean.c)
 *     PropertySetDbLevel @ 0x1C0028DF0 (PropertySetDbLevel.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00133D0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF__guid_dd(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, int a5, __int64 a6, ...)
{
  int v9; // [rsp+20h] [rbp-48h]
  __int64 v10; // [rsp+A0h] [rbp+38h] BYREF
  va_list va; // [rsp+A0h] [rbp+38h]
  va_list va1; // [rsp+A8h] [rbp+40h] BYREF

  va_start(va1, a6);
  va_start(va, a6);
  v10 = va_arg(va1, _QWORD);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) != 0 )
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_06d71a5b906232def5af5bab196a5a62_Traceguids,
      a4,
      a6,
      16LL,
      (__int64 *)va,
      4LL,
      va1,
      4LL,
      0LL);
  LOWORD(v9) = a4;
  return WppAutoLogTrace(a1, 0LL, 10LL, &WPP_06d71a5b906232def5af5bab196a5a62_Traceguids, v9, a6);
}
