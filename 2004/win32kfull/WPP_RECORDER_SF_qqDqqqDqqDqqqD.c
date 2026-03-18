/*
 * XREFs of WPP_RECORDER_SF_qqDqqqDqqDqqqD @ 0x1C01E2A8C
 * Callers:
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C00B340C (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_qqDqqqDqqDqqqD(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  struct _LIST_ENTRY *Flink; // rbx
  int v7; // [rsp+28h] [rbp-170h]
  __int64 v8; // [rsp+150h] [rbp-48h] BYREF
  va_list va; // [rsp+150h] [rbp-48h]
  __int64 v10; // [rsp+158h] [rbp-40h] BYREF
  va_list va1; // [rsp+158h] [rbp-40h]
  __int64 v12; // [rsp+160h] [rbp-38h] BYREF
  va_list va2; // [rsp+160h] [rbp-38h]
  __int64 v14; // [rsp+168h] [rbp-30h] BYREF
  va_list va3; // [rsp+168h] [rbp-30h]
  __int64 v16; // [rsp+170h] [rbp-28h] BYREF
  va_list va4; // [rsp+170h] [rbp-28h]
  __int64 v18; // [rsp+178h] [rbp-20h] BYREF
  va_list va5; // [rsp+178h] [rbp-20h]
  __int64 v20; // [rsp+180h] [rbp-18h] BYREF
  va_list va6; // [rsp+180h] [rbp-18h]
  __int64 v22; // [rsp+188h] [rbp-10h] BYREF
  va_list va7; // [rsp+188h] [rbp-10h]
  __int64 v24; // [rsp+190h] [rbp-8h] BYREF
  va_list va8; // [rsp+190h] [rbp-8h]
  __int64 v26; // [rsp+198h] [rbp+0h] BYREF
  va_list va9; // [rsp+198h] [rbp+0h]
  __int64 v28; // [rsp+1A0h] [rbp+8h] BYREF
  va_list va10; // [rsp+1A0h] [rbp+8h]
  __int64 v30; // [rsp+1A8h] [rbp+10h] BYREF
  va_list va11; // [rsp+1A8h] [rbp+10h]
  __int64 v32; // [rsp+1B0h] [rbp+18h] BYREF
  va_list va12; // [rsp+1B0h] [rbp+18h]
  va_list va13; // [rsp+1B8h] [rbp+20h] BYREF

  va_start(va13, a5);
  va_start(va12, a5);
  va_start(va11, a5);
  va_start(va10, a5);
  va_start(va9, a5);
  va_start(va8, a5);
  va_start(va7, a5);
  va_start(va6, a5);
  va_start(va5, a5);
  va_start(va4, a5);
  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v8 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v10 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v12 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v14 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v16 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v18 = va_arg(va6, _QWORD);
  va_copy(va7, va6);
  v20 = va_arg(va7, _QWORD);
  va_copy(va8, va7);
  v22 = va_arg(va8, _QWORD);
  va_copy(va9, va8);
  v24 = va_arg(va9, _QWORD);
  va_copy(va10, va9);
  v26 = va_arg(va10, _QWORD);
  va_copy(va11, va10);
  v28 = va_arg(va11, _QWORD);
  va_copy(va12, va11);
  v30 = va_arg(va12, _QWORD);
  va_copy(va13, va12);
  v32 = va_arg(va13, _QWORD);
  Flink = WPP_MAIN_CB.Queue.ListEntry.Flink;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_3f6cd7edd7993c9a5fb877f8c3b6394a_Traceguids,
      22LL,
      (__int64 *)va,
      8LL,
      (__int64 *)va1,
      8LL,
      (__int64 *)va2,
      4LL,
      (__int64 *)va3,
      8LL,
      (__int64 *)va4,
      8LL,
      (__int64 *)va5,
      8LL,
      (__int64 *)va6,
      4LL,
      (__int64 *)va7,
      8LL,
      (__int64 *)va8,
      8LL,
      (__int64 *)va9,
      4LL,
      (__int64 *)va10,
      8LL,
      (__int64 *)va11,
      8LL,
      (__int64 *)va12,
      8LL,
      va13,
      4LL,
      0LL);
  LOWORD(v7) = 22;
  return WppAutoLogTrace(
           Flink,
           4LL,
           18LL,
           &WPP_3f6cd7edd7993c9a5fb877f8c3b6394a_Traceguids,
           v7,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           8LL,
           (__int64 *)va2,
           4LL);
}
