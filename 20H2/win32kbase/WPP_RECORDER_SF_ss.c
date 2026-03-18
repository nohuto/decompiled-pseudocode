/*
 * XREFs of WPP_RECORDER_SF_ss @ 0x1C017C134
 * Callers:
 *     rimObsCheckForRegistrationConflicts @ 0x1C017BC40 (rimObsCheckForRegistrationConflicts.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_ss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        const char *a6,
        const char *a7)
{
  struct _LIST_ENTRY *Flink; // rbp
  __int64 v8; // rbx
  const char *v9; // rdi
  const char *v10; // rsi
  __int64 v11; // rdx
  const char *v12; // r9
  __int64 v13; // r8
  __int64 v14; // r8
  const char *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rbx
  int v20; // [rsp+20h] [rbp-48h]
  __int64 v21; // [rsp+50h] [rbp-18h]
  __int64 v22; // [rsp+58h] [rbp-10h]

  Flink = WPP_MAIN_CB.Queue.ListEntry.Flink;
  v8 = -1LL;
  v9 = a7;
  v10 = a6;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    if ( a7 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( a7[v11] );
    }
    v12 = a7;
    if ( !a7 )
      v12 = "NULL";
    if ( a6 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( a6[v13] );
      v14 = v13 + 1;
    }
    else
    {
      v14 = 5LL;
    }
    v15 = a6;
    if ( !a6 )
      v15 = "NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids,
      39LL,
      v15,
      v14,
      v12);
  }
  if ( a7 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( a7[v16] );
    v17 = v16 + 1;
  }
  else
  {
    v17 = 5LL;
  }
  if ( !a7 )
    v9 = "NULL";
  if ( a6 )
  {
    do
      ++v8;
    while ( a6[v8] );
    v18 = v8 + 1;
  }
  else
  {
    v18 = 5LL;
  }
  if ( !a6 )
    v10 = "NULL";
  LOWORD(v20) = 39;
  return WppAutoLogTrace(
           Flink,
           3LL,
           23LL,
           &WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids,
           v20,
           v10,
           v18,
           v9,
           v17,
           0LL,
           v21,
           v22);
}
