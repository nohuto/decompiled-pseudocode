/*
 * XREFs of WPP_RECORDER_SF_ddsddd @ 0x1C000AABC
 * Callers:
 *     ValidatePssSymmetry @ 0x1C0025078 (ValidatePssSymmetry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00044E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_ddsddd(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        char a7,
        __int64 a8)
{
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v11; // rdx
  int v13; // [rsp+20h] [rbp-88h]

  v8 = a8;
  v9 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a8 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( *(_BYTE *)(a8 + v11) );
    }
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_ba3a613378173fc61268b8e1c1c8ad8d_Traceguids,
      61LL,
      &a6,
      4LL,
      &a7);
  }
  if ( v8 )
  {
    do
      ++v9;
    while ( *(_BYTE *)(v8 + v9) );
  }
  LOWORD(v13) = 61;
  return WppAutoLogTrace(a1, 2LL, 1LL, &WPP_ba3a613378173fc61268b8e1c1c8ad8d_Traceguids, v13, &a6);
}
