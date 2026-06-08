/*
 * XREFs of WPP_RECORDER_SF_sDs @ 0x1C000CF30
 * Callers:
 *     DisplayGenAddr @ 0x1C0002698 (DisplayGenAddr.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00044E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_sDs(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        const char *a6,
        char a7,
        __int64 a8)
{
  __int64 v8; // rdi
  __int64 v9; // rbx
  const char *v10; // rsi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r8
  const char *v15; // rcx
  __int64 v16; // rax
  int v18; // [rsp+20h] [rbp-58h]

  v8 = a8;
  v9 = -1LL;
  v10 = a6;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
  {
    if ( a8 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( *(_BYTE *)(a8 + v12) );
    }
    if ( a6 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( a6[v13] );
      v14 = v13 + 1;
    }
    else
    {
      v14 = 5LL;
    }
    v15 = a6;
    if ( !a6 )
      v15 = "NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids,
      150LL,
      v15,
      v14,
      &a7);
  }
  if ( v8 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( *(_BYTE *)(v8 + v16) );
  }
  if ( a6 )
  {
    do
      ++v9;
    while ( a6[v9] );
  }
  if ( !a6 )
    v10 = "NULL";
  LOWORD(v18) = 150;
  return WppAutoLogTrace(a1, 5LL, 2LL, &WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids, v18, v10);
}
