/*
 * XREFs of WPP_RECORDER_SF_Ds @ 0x1C002A144
 * Callers:
 *     LogError @ 0x1C002A08C (LogError.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0031E80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_Ds(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, char a6, const char *a7)
{
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v11; // rdx
  const char *v12; // rcx
  int v13; // [rsp+20h] [rbp-38h]

  v7 = (__int64)a7;
  v8 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a7 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( a7[v11] );
    }
    v12 = a7;
    if ( !a7 )
      v12 = "NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_3f854a48a7fd3e8a088f2c9698da0c76_Traceguids,
      10LL,
      &a6,
      4LL,
      v12);
  }
  if ( v7 )
  {
    do
      ++v8;
    while ( *(_BYTE *)(v7 + v8) );
  }
  LOWORD(v13) = 10;
  return WppAutoLogTrace(a1, 2LL, 21LL, &WPP_3f854a48a7fd3e8a088f2c9698da0c76_Traceguids, v13, &a6);
}
