/*
 * XREFs of WPP_RECORDER_SF_dDd @ 0x1C003F040
 * Callers:
 *     RootHub_DetectAndAcknowledgePortResume @ 0x1C0011EE8 (RootHub_DetectAndAcknowledgePortResume.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_dDd(__int64 a1, _DWORD a2, _DWORD a3, _DWORD a4, __int64 a5, ...)
{
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
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
      204LL,
      (__int64 *)va,
      4LL,
      (__int64 *)va1,
      4LL,
      va2,
      4LL,
      0LL);
  LOWORD(v7) = 204;
  return WppAutoLogTrace(
           a1,
           3LL,
           11LL,
           &WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
           v7,
           (__int64 *)va,
           4LL,
           (__int64 *)va1,
           4LL,
           va2,
           4LL,
           0LL);
}
