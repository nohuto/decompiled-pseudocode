/*
 * XREFs of WPP_RECORDER_SF_SqLL @ 0x1C000692C
 * Callers:
 *     ACPIMatchHardwareId @ 0x1C00930D8 (ACPIMatchHardwareId.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_SqLL(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, const wchar_t *a6, ...)
{
  const wchar_t *v6; // rbx
  __int64 v7; // rdi
  __int64 v9; // rsi
  bool v10; // zf
  __int64 v12; // rax
  __int64 v13; // rdx
  const wchar_t *v14; // rcx
  int v15; // [rsp+20h] [rbp-68h]
  va_list va; // [rsp+C0h] [rbp+38h] BYREF

  va_start(va, a6);
  v6 = a6;
  v7 = -1LL;
  v9 = 10LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a6 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( a6[v12] );
      v13 = 2 * v12 + 2;
    }
    else
    {
      v13 = 10LL;
    }
    v14 = a6;
    if ( !a6 )
      v14 = L"NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_e31de8e794e03abc169a9744a0587e03_Traceguids,
      12LL,
      v14,
      v13,
      va);
  }
  v10 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v7;
    while ( a6[v7] );
    v9 = 2 * v7 + 2;
    v10 = a6 == 0LL;
  }
  if ( v10 )
    v6 = L"NULL";
  LOWORD(v15) = 12;
  return WppAutoLogTrace(a1, 4LL, 6LL, &WPP_e31de8e794e03abc169a9744a0587e03_Traceguids, v15, v6, v9, va);
}
