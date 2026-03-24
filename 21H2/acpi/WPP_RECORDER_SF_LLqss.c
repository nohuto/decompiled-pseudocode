/*
 * XREFs of WPP_RECORDER_SF_LLqss @ 0x1C0020B00
 * Callers:
 *     ACPIBuildProcessDeviceGenericEval @ 0x1C001E890 (ACPIBuildProcessDeviceGenericEval.c)
 *     ACPIBuildProcessDeviceGenericEvalStrict @ 0x1C001F290 (ACPIBuildProcessDeviceGenericEvalStrict.c)
 *     ACPIBuildProcessDeviceFailure @ 0x1C004BDF0 (ACPIBuildProcessDeviceFailure.c)
 *     ACPIBuildProcessThermalZoneFailure @ 0x1C004C030 (ACPIBuildProcessThermalZoneFailure.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0032180 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_LLqss(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        char a6,
        char a7,
        char a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v13; // rbx
  unsigned int v14; // r14d
  unsigned int v15; // ebp
  __int64 v16; // rax
  __int64 v18; // r9
  __int64 v19; // r8
  int v20; // [rsp+20h] [rbp-78h]

  v10 = a10;
  v11 = a9;
  v13 = -1LL;
  v14 = a4;
  v15 = a2;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= a2 )
  {
    if ( a10 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( *(_BYTE *)(a10 + v18) );
    }
    if ( a9 )
    {
      v19 = -1LL;
      do
        ++v19;
      while ( *(_BYTE *)(a9 + v19) );
    }
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_b4b4781ea129315cb23d4156eeab8ce7_Traceguids,
      v14,
      &a6,
      4LL,
      &a7);
  }
  if ( v10 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( *(_BYTE *)(v10 + v16) );
  }
  if ( v11 )
  {
    do
      ++v13;
    while ( *(_BYTE *)(v11 + v13) );
  }
  LOWORD(v20) = v14;
  return WppAutoLogTrace(a1, v15, 6LL, &WPP_b4b4781ea129315cb23d4156eeab8ce7_Traceguids, v20, &a6);
}
