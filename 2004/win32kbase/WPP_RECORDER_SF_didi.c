/*
 * XREFs of WPP_RECORDER_SF_didi @ 0x1C016C954
 * Callers:
 *     RIMIDEGetTimeStampDelta @ 0x1C016A9A0 (RIMIDEGetTimeStampDelta.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_didi(_DWORD a1, _DWORD a2, _DWORD a3, _DWORD a4, __int64 a5, ...)
{
  struct RECORDER_LOG__ *v5; // rbx
  int v7; // [rsp+20h] [rbp-58h]
  __int64 v8; // [rsp+A8h] [rbp+30h] BYREF
  va_list va; // [rsp+A8h] [rbp+30h]
  __int64 v10; // [rsp+B0h] [rbp+38h] BYREF
  va_list va1; // [rsp+B0h] [rbp+38h]
  __int64 v12; // [rsp+B8h] [rbp+40h] BYREF
  va_list va2; // [rsp+B8h] [rbp+40h]
  va_list va3; // [rsp+C0h] [rbp+48h] BYREF

  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v8 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v10 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v12 = va_arg(va3, _QWORD);
  v5 = gRimLog;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids,
      57LL,
      (__int64 *)va,
      4LL,
      (__int64 *)va1,
      8LL,
      (__int64 *)va2,
      4LL,
      va3,
      8LL,
      0LL);
  LOWORD(v7) = 57;
  return WppAutoLogTrace(
           v5,
           2LL,
           1LL,
           &WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids,
           v7,
           (__int64 *)va,
           4LL,
           (__int64 *)va1,
           8LL,
           (__int64 *)va2,
           4LL,
           va3);
}
