/*
 * XREFs of WPP_RECORDER_SF_qqSd @ 0x1C01619C4
 * Callers:
 *     RIMOnPnpNotification @ 0x1C00A0F20 (RIMOnPnpNotification.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_qqSd(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  struct RECORDER_LOG__ *v5; // rbp
  const wchar_t *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdx
  const wchar_t *v11; // rcx
  bool v12; // zf
  int v14; // [rsp+20h] [rbp-68h]
  __int64 v15; // [rsp+B8h] [rbp+30h] BYREF
  va_list va; // [rsp+B8h] [rbp+30h]
  __int64 v17; // [rsp+C0h] [rbp+38h] BYREF
  va_list va1; // [rsp+C0h] [rbp+38h]
  const wchar_t *v19; // [rsp+C8h] [rbp+40h]
  va_list va2; // [rsp+D0h] [rbp+48h] BYREF

  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v15 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v17 = va_arg(va2, _QWORD);
  v19 = va_arg(va2, const wchar_t *);
  v5 = gRimLog;
  v6 = v19;
  v7 = -1LL;
  v8 = 10LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( v19 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( v19[v9] );
      v10 = 2 * v9 + 2;
    }
    else
    {
      v10 = 10LL;
    }
    v11 = v19;
    if ( !v19 )
      v11 = L"NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids,
      57LL,
      (__int64 *)va,
      8LL,
      (__int64 *)va1,
      8LL,
      v11,
      v10,
      va2);
  }
  v12 = v6 == 0LL;
  if ( v6 )
  {
    do
      ++v7;
    while ( v6[v7] );
    v8 = 2 * v7 + 2;
    v12 = v6 == 0LL;
  }
  if ( v12 )
    v6 = L"NULL";
  LOWORD(v14) = 57;
  return WppAutoLogTrace(
           v5,
           4LL,
           1LL,
           &WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids,
           v14,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           8LL,
           v6,
           v8,
           va2);
}
