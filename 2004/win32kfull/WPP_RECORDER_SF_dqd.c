/*
 * XREFs of WPP_RECORDER_SF_dqd @ 0x1C003ABA4
 * Callers:
 *     NtUserSendInput @ 0x1C003A7E0 (NtUserSendInput.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_dqd(_DWORD a1, _DWORD a2, _DWORD a3, _DWORD a4, __int64 a5, ...)
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
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_8d5a59efe0a33d1aba6a7f19e91869d8_Traceguids,
      10LL,
      (__int64 *)va,
      4LL,
      (__int64 *)va1,
      8LL,
      va2,
      4LL,
      0LL);
  LOWORD(v7) = 10;
  return WppAutoLogTrace(
           Flink,
           4LL,
           20LL,
           &WPP_8d5a59efe0a33d1aba6a7f19e91869d8_Traceguids,
           v7,
           (__int64 *)va,
           4LL,
           (__int64 *)va1,
           8LL,
           va2,
           4LL,
           0LL);
}
