/*
 * XREFs of WPP_RECORDER_SF_qHL @ 0x1C01A4C68
 * Callers:
 *     ?NotifyCaptureChangedIfCaptured@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@@Z @ 0x1C019B530 (-NotifyCaptureChangedIfCaptured@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_qHL(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  struct _LIST_ENTRY *Flink; // rbx
  int v7; // [rsp+20h] [rbp-48h]
  __int64 v8; // [rsp+98h] [rbp+30h] BYREF
  va_list va; // [rsp+98h] [rbp+30h]
  __int64 v10; // [rsp+A0h] [rbp+38h] BYREF
  va_list va1; // [rsp+A0h] [rbp+38h]
  va_list va2; // [rsp+A8h] [rbp+40h] BYREF

  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v8 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v10 = va_arg(va2, _QWORD);
  Flink = WPP_MAIN_CB.Queue.ListEntry.Flink;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids,
      309LL,
      (__int64 *)va,
      8LL,
      (__int64 *)va1,
      2LL,
      va2,
      4LL,
      0LL);
  LOWORD(v7) = 309;
  return WppAutoLogTrace(
           Flink,
           4LL,
           7LL,
           &WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids,
           v7,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           2LL,
           va2,
           4LL,
           0LL);
}
