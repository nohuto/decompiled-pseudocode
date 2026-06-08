/*
 * XREFs of WPP_RECORDER_SF_sss @ 0x1C000D500
 * Callers:
 *     AcpiParseCore @ 0x1C0023454 (AcpiParseCore.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00044E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_sss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        const char *a6,
        const char *a7,
        const char *a8)
{
  __int64 v8; // rbx
  const char *v10; // rbp
  __int64 v11; // r8
  __int64 v12; // r8
  const char *v13; // r11
  __int64 v14; // r9
  __int64 v15; // r9
  const char *v16; // r10
  __int64 v17; // rdx
  __int64 v18; // rdx
  const char *v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rax
  int v23; // [rsp+20h] [rbp-58h]

  v8 = -1LL;
  v10 = a6;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a8 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( a8[v11] );
      v12 = v11 + 1;
    }
    else
    {
      v12 = 5LL;
    }
    v13 = a8;
    if ( !a8 )
      v13 = "NULL";
    if ( a7 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( a7[v14] );
      v15 = v14 + 1;
    }
    else
    {
      v15 = 5LL;
    }
    v16 = a7;
    if ( !a7 )
      v16 = "NULL";
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
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, const char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids,
      64LL,
      v19,
      v18,
      v16,
      v15,
      v13,
      v12,
      0LL);
  }
  if ( a8 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( a8[v20] );
  }
  if ( a7 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( a7[v21] );
  }
  if ( a6 )
  {
    do
      ++v8;
    while ( a6[v8] );
  }
  if ( !a6 )
    v10 = "NULL";
  LOWORD(v23) = 64;
  return WppAutoLogTrace(a1, 2LL, 1LL, &WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids, v23, v10);
}
