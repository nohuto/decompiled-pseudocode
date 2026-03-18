/*
 * XREFs of WPP_RECORDER_SF_DD @ 0x1C01DCD6C
 * Callers:
 *     ?ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagRECT@@I@Z @ 0x1C01DC418 (-ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagRECT.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_DD(_DWORD a1, _DWORD a2, _DWORD a3, unsigned __int16 a4, __int64 a5, ...)
{
  struct _LIST_ENTRY *Flink; // rdi
  int v8; // [rsp+20h] [rbp-38h]
  __int64 v9; // [rsp+50h] [rbp-8h]
  __int64 v10; // [rsp+88h] [rbp+30h] BYREF
  va_list va; // [rsp+88h] [rbp+30h]
  va_list va1; // [rsp+90h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v10 = va_arg(va1, _QWORD);
  Flink = WPP_MAIN_CB.Queue.ListEntry.Flink;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, void *, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_a7556dcd6e523d00d7fcf3c18afb0c6e_Traceguids,
      a4,
      (__int64 *)va,
      4LL,
      va1,
      4LL,
      0LL);
  LOWORD(v8) = a4;
  return WppAutoLogTrace(
           Flink,
           2LL,
           20LL,
           &WPP_a7556dcd6e523d00d7fcf3c18afb0c6e_Traceguids,
           v8,
           (__int64 *)va,
           4LL,
           va1,
           4LL,
           0LL,
           v9);
}
