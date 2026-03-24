/*
 * XREFs of WPP_RECORDER_SF_qd @ 0x1C0006534
 * Callers:
 *     KeyboardClassWaitWakeComplete @ 0x1C0005BC0 (KeyboardClassWaitWakeComplete.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002ED0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_qd(__int64 a1, _DWORD a2, _DWORD a3, _DWORD a4, __int64 a5, ...)
{
  int v7; // [rsp+20h] [rbp-38h]
  __int64 v8; // [rsp+88h] [rbp+30h] BYREF
  va_list va; // [rsp+88h] [rbp+30h]
  va_list va1; // [rsp+90h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v8 = va_arg(va1, _QWORD);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, void *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_ad73c0fec8af37c73e7c85b872b2d615_Traceguids,
      95LL,
      (__int64 *)va,
      8LL,
      va1,
      4LL,
      0LL);
  LOWORD(v7) = 95;
  return WppAutoLogTrace(
           a1,
           2LL,
           5LL,
           &WPP_ad73c0fec8af37c73e7c85b872b2d615_Traceguids,
           v7,
           (__int64 *)va,
           8LL,
           va1,
           4LL,
           0LL);
}
