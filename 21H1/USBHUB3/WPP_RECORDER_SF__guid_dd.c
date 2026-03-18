/*
 * XREFs of WPP_RECORDER_SF__guid_dd @ 0x1C0013468
 * Callers:
 *     HUBPDO_ReEnumerationCallback @ 0x1C001ACF0 (HUBPDO_ReEnumerationCallback.c)
 *     HUBPDO_IdleResiliencyCallback @ 0x1C001AEE0 (HUBPDO_IdleResiliencyCallback.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
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
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, _QWORD, __int64, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_9f8e321b0e16315429714d1dd54efe91_Traceguids,
      a4,
      a6,
      16LL,
      (__int64 *)va,
      4LL,
      va1,
      4LL,
      0LL);
  LOWORD(v9) = a4;
  return WppAutoLogTrace(a1, 4LL, 5LL, &WPP_9f8e321b0e16315429714d1dd54efe91_Traceguids, v9, a6);
}
