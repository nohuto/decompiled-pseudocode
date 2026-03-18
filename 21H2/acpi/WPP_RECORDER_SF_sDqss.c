/*
 * XREFs of WPP_RECORDER_SF_sDqss @ 0x1C0055DD8
 * Callers:
 *     ACPIFilterIrpSurpriseRemoval @ 0x1C00AED70 (ACPIFilterIrpSurpriseRemoval.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_sDqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        const char *a6,
        char a7,
        char a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rsi
  const char *v14; // rbp
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rdx
  const char *v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rax
  int v23; // [rsp+20h] [rbp-78h]

  v10 = a10;
  v11 = -1LL;
  v12 = a9;
  v14 = a6;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a10 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( *(_BYTE *)(a10 + v15) );
    }
    if ( a9 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( *(_BYTE *)(a9 + v16) );
    }
    if ( a6 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( a6[v17] );
      v18 = v17 + 1;
    }
    else
    {
      v18 = 5LL;
    }
    v19 = a6;
    if ( !a6 )
      v19 = "NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_e895f2808a1832dc95c5c4714d739d11_Traceguids,
      31LL,
      v19,
      v18,
      &a7);
  }
  if ( v10 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( *(_BYTE *)(v10 + v20) );
  }
  if ( v12 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( *(_BYTE *)(v12 + v21) );
  }
  if ( a6 )
  {
    do
      ++v11;
    while ( a6[v11] );
  }
  if ( !a6 )
    v14 = "NULL";
  LOWORD(v23) = 31;
  return WppAutoLogTrace(a1, 4LL, 12LL, &WPP_e895f2808a1832dc95c5c4714d739d11_Traceguids, v23, v14);
}
