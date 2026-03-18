/*
 * XREFs of WPP_RECORDER_SF_S @ 0x1C004BCCC
 * Callers:
 *     xxxSwitchDesktop @ 0x1C004CE38 (xxxSwitchDesktop.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_S(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, const char *a6)
{
  struct _LIST_ENTRY *Flink; // rbp
  const char *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rsi
  bool v10; // zf
  __int64 v12; // rax
  __int64 v13; // rdx
  const char *v14; // rcx
  int v15; // [rsp+20h] [rbp-38h]
  __int64 v16; // [rsp+40h] [rbp-18h]
  __int64 v17; // [rsp+48h] [rbp-10h]
  __int64 v18; // [rsp+50h] [rbp-8h]

  Flink = WPP_MAIN_CB.Queue.ListEntry.Flink;
  v7 = a6;
  v8 = -1LL;
  v9 = 10LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a6 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( *(_WORD *)&a6[2 * v12] );
      v13 = 2 * v12 + 2;
    }
    else
    {
      v13 = 10LL;
    }
    v14 = a6;
    if ( !a6 )
      v14 = L"NULL";
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, void *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_88e56cbdc8ae3b99b735fb320356d567_Traceguids,
      27LL,
      v14,
      v13,
      0LL);
  }
  v10 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v8;
    while ( *(_WORD *)&a6[2 * v8] );
    v9 = 2 * v8 + 2;
    v10 = a6 == 0LL;
  }
  if ( v10 )
    v7 = L"NULL";
  LOWORD(v15) = 27;
  return WppAutoLogTrace(
           Flink,
           4LL,
           3LL,
           &WPP_88e56cbdc8ae3b99b735fb320356d567_Traceguids,
           v15,
           v7,
           v9,
           0LL,
           v16,
           v17,
           v18);
}
