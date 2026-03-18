/*
 * XREFs of WPP_RECORDER_SF_diS @ 0x1C0016DC0
 * Callers:
 *     Controller_PopulateDeviceFlagsFromKse @ 0x1C00169B8 (Controller_PopulateDeviceFlagsFromKse.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_diS(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        char a6,
        char a7,
        const wchar_t *a8)
{
  const wchar_t *v8; // rbx
  __int64 v9; // rdi
  __int64 v12; // rsi
  bool v13; // zf
  __int64 v15; // rax
  int v16; // [rsp+20h] [rbp-58h]

  v8 = a8;
  v9 = -1LL;
  v12 = 10LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a8 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a8[v15] );
    }
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids,
      a4,
      &a6,
      4LL,
      &a7);
  }
  v13 = v8 == 0LL;
  if ( v8 )
  {
    do
      ++v9;
    while ( v8[v9] );
    v12 = 2 * v9 + 2;
    v13 = v8 == 0LL;
  }
  if ( v13 )
    v8 = L"NULL";
  LOWORD(v16) = a4;
  return WppAutoLogTrace(
           a1,
           4LL,
           4LL,
           &WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids,
           v16,
           &a6,
           4LL,
           &a7,
           8LL,
           v8,
           v12,
           0LL);
}
