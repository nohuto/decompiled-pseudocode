/*
 * XREFs of WPP_RECORDER_SF_Dq @ 0x1C02204C4
 * Callers:
 *     UserJobCallout @ 0x1C010AAA0 (UserJobCallout.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_Dq(_DWORD a1, _DWORD a2, _DWORD a3, _DWORD a4, __int64 a5, ...)
{
  struct _LIST_ENTRY *Flink; // rbx
  int v7; // [rsp+20h] [rbp-38h]
  __int64 v8; // [rsp+88h] [rbp+30h] BYREF
  va_list va; // [rsp+88h] [rbp+30h]
  va_list va1; // [rsp+90h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v8 = va_arg(va1, _QWORD);
  Flink = WPP_MAIN_CB.Queue.ListEntry.Flink;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_8d1b82f3b1933447d2872340d476a1f2_Traceguids,
      14LL,
      (__int64 *)va,
      4LL,
      va1,
      8LL,
      0LL);
  LOWORD(v7) = 14;
  return WppAutoLogTrace(
           Flink,
           4LL,
           13LL,
           &WPP_8d1b82f3b1933447d2872340d476a1f2_Traceguids,
           v7,
           (__int64 *)va,
           4LL,
           va1,
           8LL,
           0LL);
}
