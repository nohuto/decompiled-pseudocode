/*
 * XREFs of WPP_RECORDER_SF_dDD @ 0x1C015D45C
 * Callers:
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C015C34C (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C015C704 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C015CA24 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     RIMIDEInjectDeviceInput @ 0x1C016AD1C (RIMIDEInjectDeviceInput.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C017AF40 (rimEndPointerDeviceStaleContacts.c)
 *     rimProcessPointerDeviceContact @ 0x1C017D71C (rimProcessPointerDeviceContact.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_dDD(__int64 a1, unsigned __int8 a2, __int64 a3, unsigned __int16 a4, __int64 a5, ...)
{
  struct RECORDER_LOG__ *v5; // rsi
  unsigned int v7; // ebx
  int v9; // [rsp+20h] [rbp-48h]
  __int64 v10; // [rsp+98h] [rbp+30h] BYREF
  va_list va; // [rsp+98h] [rbp+30h]
  __int64 v12; // [rsp+A0h] [rbp+38h] BYREF
  va_list va1; // [rsp+A0h] [rbp+38h]
  va_list va2; // [rsp+A8h] [rbp+40h] BYREF

  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v10 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v12 = va_arg(va2, _QWORD);
  v5 = gRimLog;
  v7 = a2;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= a2 )
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      a5,
      a4,
      (__int64 *)va,
      4LL,
      (__int64 *)va1,
      4LL,
      va2,
      4LL,
      0LL);
  LOWORD(v9) = a4;
  return WppAutoLogTrace(v5, v7, 1LL, a5, v9, (__int64 *)va, 4LL, (__int64 *)va1, 4LL, va2, 4LL, 0LL);
}
