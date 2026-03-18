/*
 * XREFs of WPP_RECORDER_SF_LsHHsLLLL @ 0x1C01A485C
 * Callers:
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1C019C878 (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerIn.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_LsHHsLLLL(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        const char *a7,
        char a8,
        char a9,
        __int64 a10)
{
  struct _LIST_ENTRY *Flink; // r14
  __int64 v11; // rdi
  __int64 v12; // rbx
  const char *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r8
  const char *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rbx
  int v21; // [rsp+28h] [rbp-99h]

  Flink = WPP_MAIN_CB.Queue.ListEntry.Flink;
  v11 = a10;
  v12 = -1LL;
  v13 = a7;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a10 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( *(_BYTE *)(a10 + v14) );
    }
    if ( a7 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a7[v15] );
      v16 = v15 + 1;
    }
    else
    {
      v16 = 5LL;
    }
    v17 = a7;
    if ( !a7 )
      v17 = "NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids,
      284LL,
      &a6,
      4LL,
      v17,
      v16,
      &a8,
      2LL,
      &a9);
  }
  if ( v11 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( *(_BYTE *)(v11 + v18) );
  }
  if ( v13 )
  {
    do
      ++v12;
    while ( v13[v12] );
    v19 = v12 + 1;
  }
  else
  {
    v19 = 5LL;
  }
  if ( !v13 )
    v13 = "NULL";
  LOWORD(v21) = 284;
  return WppAutoLogTrace(
           Flink,
           4LL,
           7LL,
           &WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids,
           v21,
           &a6,
           4LL,
           v13,
           v19,
           &a8,
           2LL,
           &a9);
}
