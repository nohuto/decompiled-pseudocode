/*
 * XREFs of WPP_RECORDER_SF_qqS @ 0x1C007F2EC
 * Callers:
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C007D268 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
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
  bool v11; // zf
  __int64 v13; // rax
  const char *v14; // rcx
  int v15; // [rsp+20h] [rbp-68h]

  Flink = WPP_MAIN_CB.Queue.ListEntry.Flink;
  v9 = a8;
  v10 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a8 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( *(_WORD *)&a8[2 * v13] );
    }
    v14 = a8;
    if ( !a8 )
      v14 = L"NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_9563cc11843c38630c872e630d898c35_Traceguids,
      17LL,
      &a6,
      8LL,
      &a7,
      8LL,
      v14);
  }
  v11 = v9 == 0LL;
  if ( v9 )
  {
    do
      ++v10;
    while ( *(_WORD *)&v9[2 * v10] );
    v11 = v9 == 0LL;
  }
  if ( v11 )
    v9 = L"NULL";
  LOWORD(v15) = 17;
  return WppAutoLogTrace(Flink, 4LL, 8LL, &WPP_9563cc11843c38630c872e630d898c35_Traceguids, v15, &a6, 8LL, &a7, 8LL, v9);
}
