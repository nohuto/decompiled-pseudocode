/*
 * XREFs of WPP_RECORDER_SF_qsLLdqss @ 0x1C000FE70
 * Callers:
 *     ACPIIsPowerRequestBlocked @ 0x1C000DEE0 (ACPIIsPowerRequestBlocked.c)
 *     ACPIDevicePowerDpc @ 0x1C000F880 (ACPIDevicePowerDpc.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qsLLdqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        const char *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  __int64 v13; // rbx
  __int64 v14; // rsi
  __int64 v16; // rbp
  const char *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  const char *v24; // rcx
  int v25; // [rsp+20h] [rbp-B8h]

  v13 = -1LL;
  v14 = a13;
  v16 = a12;
  v17 = a7;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a13 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( *(_BYTE *)(a13 + v21) );
    }
    if ( a12 )
    {
      v22 = -1LL;
      do
        ++v22;
      while ( *(_BYTE *)(v22 + a12) );
    }
    if ( a7 )
    {
      v23 = -1LL;
      do
        ++v23;
      while ( a7[v23] );
    }
    v24 = a7;
    if ( !a7 )
      v24 = "NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_a8f7cd0141bb322231380cc24ac7ac02_Traceguids,
      48LL,
      &a6,
      8LL,
      v24);
  }
  if ( v14 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( *(_BYTE *)(v14 + v18) );
  }
  if ( v16 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( *(_BYTE *)(v19 + v16) );
  }
  if ( v17 )
  {
    do
      ++v13;
    while ( v17[v13] );
  }
  else
  {
    v17 = "NULL";
  }
  LOWORD(v25) = 48;
  return WppAutoLogTrace(a1, 4LL, 10LL, &WPP_a8f7cd0141bb322231380cc24ac7ac02_Traceguids, v25, &a6, 8LL, v17);
}
