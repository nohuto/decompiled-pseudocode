/*
 * XREFs of WPP_RECORDER_SF_ss @ 0x1C0184264
 * Callers:
 *     rimObsCheckForRegistrationConflicts @ 0x1C0183D70 (rimObsCheckForRegistrationConflicts.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
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
  __int64 v12; // rdx
  const char *v13; // r9
  __int64 v14; // r8
  __int64 v15; // r8
  const char *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rbx
  int v21; // [rsp+20h] [rbp-48h]
  __int64 v22; // [rsp+50h] [rbp-18h]
  __int64 v23; // [rsp+58h] [rbp-10h]

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
      v12 = v11 + 1;
    }
    else
    {
      v12 = 5LL;
    }
    v13 = a7;
    if ( !a7 )
      v13 = "NULL";
    if ( a6 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( a6[v14] );
      v15 = v14 + 1;
    }
    else
    {
      v15 = 5LL;
    }
    v16 = a6;
    if ( !a6 )
      v16 = "NULL";
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, void *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids,
      39LL,
      v16,
      v15,
      v13,
      v12,
      0LL);
  }
  if ( a7 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( a7[v17] );
    v18 = v17 + 1;
  }
  else
  {
    v18 = 5LL;
  }
  if ( !a7 )
    v9 = "NULL";
  if ( a6 )
  {
    do
      ++v8;
    while ( a6[v8] );
    v19 = v8 + 1;
  }
  else
  {
    v19 = 5LL;
  }
  if ( !a6 )
    v10 = "NULL";
  LOWORD(v21) = 39;
  return WppAutoLogTrace(
           Flink,
           3LL,
           23LL,
           &WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids,
           v21,
           v10,
           v19,
           v9,
           v18,
           0LL,
           v22,
           v23);
}
