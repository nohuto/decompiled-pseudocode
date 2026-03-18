/*
 * XREFs of WPP_RECORDER_SF_qqD @ 0x1C000A8B0
 * Callers:
 *     InitCreateSharedSection @ 0x1C0293218 (InitCreateSharedSection.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_qqD(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, ...)
{
  struct _LIST_ENTRY *Flink; // rbx
  int v8; // [rsp+20h] [rbp-58h]
  _QWORD v9[2]; // [rsp+60h] [rbp-18h] BYREF
  __int64 v10; // [rsp+B0h] [rbp+38h] BYREF
  va_list va; // [rsp+B0h] [rbp+38h]
  va_list va1; // [rsp+B8h] [rbp+40h] BYREF

  va_start(va1, a6);
  va_start(va, a6);
  v10 = va_arg(va1, _QWORD);
  Flink = WPP_MAIN_CB.Queue.ListEntry.Flink;
  v9[0] = gpvSharedBase;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, const union _LARGE_INTEGER *, __int64, _QWORD *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_343d128d714e312b04193adc3f9faf5c_Traceguids,
      13LL,
      v9,
      8LL,
      (__int64 *)va,
      8LL,
      va1,
      4LL,
      0LL);
  LOWORD(v8) = 13;
  return ((__int64 (__fastcall *)(struct _LIST_ENTRY *, __int64, __int64, const union _LARGE_INTEGER *, int, _QWORD *, __int64, __int64 *, __int64, char *, __int64, _QWORD))WppAutoLogTrace)(
           Flink,
           4LL,
           14LL,
           &WPP_343d128d714e312b04193adc3f9faf5c_Traceguids,
           v8,
           v9,
           8LL,
           (__int64 *)va,
           8LL,
           va1,
           4LL,
           0LL);
}
