/*
 * XREFs of WPP_RECORDER_SF_qqS @ 0x1C00BEF0C
 * Callers:
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00BC9B8 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qqS(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        char a7,
        const char *a8)
{
  struct _LIST_ENTRY *Flink; // rbp
  const char *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rsi
  bool v12; // zf
  __int64 v14; // rax
  __int64 v15; // rdx
  const char *v16; // rcx
  int v17; // [rsp+20h] [rbp-68h]

  Flink = WPP_MAIN_CB.Queue.ListEntry.Flink;
  v9 = a8;
  v10 = -1LL;
  v11 = 10LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a8 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( *(_WORD *)&a8[2 * v14] );
      v15 = 2 * v14 + 2;
    }
    else
    {
      v15 = 10LL;
    }
    v16 = a8;
    if ( !a8 )
      v16 = L"NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_88e56cbdc8ae3b99b735fb320356d567_Traceguids,
      17LL,
      &a6,
      8LL,
      &a7,
      8LL,
      v16,
      v15,
      0LL);
  }
  v12 = v9 == 0LL;
  if ( v9 )
  {
    do
      ++v10;
    while ( *(_WORD *)&v9[2 * v10] );
    v11 = 2 * v10 + 2;
    v12 = v9 == 0LL;
  }
  if ( v12 )
    v9 = L"NULL";
  LOWORD(v17) = 17;
  return WppAutoLogTrace(
           Flink,
           4LL,
           8LL,
           &WPP_88e56cbdc8ae3b99b735fb320356d567_Traceguids,
           v17,
           &a6,
           8LL,
           &a7,
           8LL,
           v9,
           v11);
}
