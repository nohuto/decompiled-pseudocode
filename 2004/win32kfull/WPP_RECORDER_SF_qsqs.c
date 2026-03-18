/*
 * XREFs of WPP_RECORDER_SF_qsqs @ 0x1C0028914
 * Callers:
 *     _anonymous_namespace_::RemoveForegroundActivate @ 0x1C002C684 (_anonymous_namespace_--RemoveForegroundActivate.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qsqs(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        const char *a7,
        char a8,
        const char *a9)
{
  struct _LIST_ENTRY *Flink; // rbp
  __int64 v10; // rbx
  const char *v11; // rdi
  const char *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v16; // r8
  const char *v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rdx
  const char *v20; // rcx
  int v21; // [rsp+20h] [rbp-68h]

  Flink = WPP_MAIN_CB.Queue.ListEntry.Flink;
  v10 = -1LL;
  v11 = a9;
  v12 = a7;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a9 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( a9[v16] );
    }
    v17 = a9;
    if ( !a9 )
      v17 = "NULL";
    if ( a7 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( a7[v18] );
      v19 = v18 + 1;
    }
    else
    {
      v19 = 5LL;
    }
    v20 = a7;
    if ( !a7 )
      v20 = "NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_7679130e9343316c2b67b07ec3410afc_Traceguids,
      10LL,
      &a6,
      8LL,
      v20,
      v19,
      &a8,
      8LL,
      v17);
  }
  if ( v11 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( v11[v13] );
  }
  if ( !v11 )
    v11 = "NULL";
  if ( v12 )
  {
    do
      ++v10;
    while ( v12[v10] );
    v14 = v10 + 1;
  }
  else
  {
    v14 = 5LL;
  }
  if ( !v12 )
    v12 = "NULL";
  LOWORD(v21) = 10;
  return WppAutoLogTrace(
           Flink,
           4LL,
           2LL,
           &WPP_7679130e9343316c2b67b07ec3410afc_Traceguids,
           v21,
           &a6,
           8LL,
           v12,
           v14,
           &a8,
           8LL,
           v11);
}
