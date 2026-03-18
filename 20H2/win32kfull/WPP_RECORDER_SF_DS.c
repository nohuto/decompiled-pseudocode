/*
 * XREFs of WPP_RECORDER_SF_DS @ 0x1C0013D4C
 * Callers:
 *     SetAppCompatFlags @ 0x1C0013670 (SetAppCompatFlags.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_DS(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, char a6, const char *a7)
{
  struct _LIST_ENTRY *Flink; // rsi
  const char *v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  const char *v14; // rcx
  int v15; // [rsp+20h] [rbp-48h]

  Flink = WPP_MAIN_CB.Queue.ListEntry.Flink;
  v8 = a7;
  v9 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a7 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( *(_WORD *)&a7[2 * v12] );
      v13 = 2 * v12 + 2;
    }
    else
    {
      v13 = 10LL;
    }
    v14 = a7;
    if ( !a7 )
      v14 = L"NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_811a652833763f23ebf15cc2f37cd811_Traceguids,
      10LL,
      &a6,
      4LL,
      v14,
      v13,
      0LL);
  }
  if ( v8 )
  {
    do
      ++v9;
    while ( *(_WORD *)&v8[2 * v9] );
    v10 = 2 * v9 + 2;
  }
  else
  {
    v10 = 10LL;
  }
  if ( !v8 )
    v8 = L"NULL";
  LOWORD(v15) = 10;
  return WppAutoLogTrace(Flink, 4LL, 5LL, &WPP_811a652833763f23ebf15cc2f37cd811_Traceguids, v15, &a6, 4LL, v8, v10, 0LL);
}
