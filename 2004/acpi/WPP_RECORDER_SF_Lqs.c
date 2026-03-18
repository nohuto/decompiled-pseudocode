/*
 * XREFs of WPP_RECORDER_SF_Lqs @ 0x1C002E7F0
 * Callers:
 *     ACPIBuildProcessPowerResourcePhasePep @ 0x1C002E6F0 (ACPIBuildProcessPowerResourcePhasePep.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0031E80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_Lqs(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        char a7,
        __int64 a8)
{
  __int64 v8; // rdi
  __int64 v9; // rbx
  unsigned int v12; // esi
  __int64 v14; // rcx
  int v15; // [rsp+20h] [rbp-48h]

  v8 = a8;
  v9 = -1LL;
  v12 = a2;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= a2 )
  {
    if ( a8 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( *(_BYTE *)(a8 + v14) );
    }
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_b4b4781ea129315cb23d4156eeab8ce7_Traceguids,
      a4,
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
  LOWORD(v15) = a4;
  return WppAutoLogTrace(a1, v12, 1LL, &WPP_b4b4781ea129315cb23d4156eeab8ce7_Traceguids, v15, &a6);
}
