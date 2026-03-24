/*
 * XREFs of WPP_RECORDER_SF_qssdddd @ 0x1C0060648
 * Callers:
 *     ACPIThermalRereadTemperature @ 0x1C0060164 (ACPIThermalRereadTemperature.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0032180 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qssdddd(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        const char *a7,
        __int64 a8)
{
  __int64 v8; // rdi
  const char *v9; // rsi
  __int64 v10; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  const char *v14; // rcx
  __int64 v15; // rax
  int v17; // [rsp+20h] [rbp-98h]

  v8 = a8;
  v9 = a7;
  v10 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a8 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( *(_BYTE *)(a8 + v12) );
    }
    if ( a7 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( a7[v13] );
    }
    v14 = a7;
    if ( !a7 )
      v14 = "NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_18eab87a8b67317afec152b8fbe84dda_Traceguids,
      18LL,
      &a6,
      8LL,
      v14);
  }
  if ( v8 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( *(_BYTE *)(v8 + v15) );
  }
  if ( v9 )
  {
    do
      ++v10;
    while ( v9[v10] );
  }
  LOWORD(v17) = 18;
  return WppAutoLogTrace(a1, 4LL, 16LL, &WPP_18eab87a8b67317afec152b8fbe84dda_Traceguids, v17, &a6);
}
