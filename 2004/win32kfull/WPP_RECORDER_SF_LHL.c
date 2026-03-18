/*
 * XREFs of WPP_RECORDER_SF_LHL @ 0x1C01F0628
 * Callers:
 *     _DelegateCapturePointers @ 0x1C01F0934 (_DelegateCapturePointers.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_LHL(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, int a5, ...)
{
  struct _LIST_ENTRY *Flink; // rdi
  int v8; // [rsp+20h] [rbp-48h]
  __int64 v9; // [rsp+98h] [rbp+30h] BYREF
  va_list va; // [rsp+98h] [rbp+30h]
  __int64 v11; // [rsp+A0h] [rbp+38h] BYREF
  va_list va1; // [rsp+A0h] [rbp+38h]
  va_list va2; // [rsp+A8h] [rbp+40h] BYREF

  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v9 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v11 = va_arg(va2, _QWORD);
  Flink = WPP_MAIN_CB.Queue.ListEntry.Flink;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_b43beeb5a22232e36856aa8311da4939_Traceguids,
      a4,
      (__int64 *)va,
      4LL,
      (__int64 *)va1,
      2LL,
      va2,
      4LL,
      0LL);
  LOWORD(v8) = a4;
  return WppAutoLogTrace(
           Flink,
           4LL,
           19LL,
           &WPP_b43beeb5a22232e36856aa8311da4939_Traceguids,
           v8,
           (__int64 *)va,
           4LL,
           (__int64 *)va1,
           2LL,
           va2,
           4LL);
}
