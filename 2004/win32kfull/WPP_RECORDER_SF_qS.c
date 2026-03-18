/*
 * XREFs of WPP_RECORDER_SF_qS @ 0x1C00BC268
 * Callers:
 *     ?DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z @ 0x1C00BC134 (-DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qS(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        const char *a7)
{
  struct _LIST_ENTRY *Flink; // rbp
  const char *v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rsi
  bool v11; // zf
  __int64 v13; // rax
  __int64 v14; // rdx
  const char *v15; // rcx
  int v16; // [rsp+20h] [rbp-48h]
  __int64 v17; // [rsp+50h] [rbp-18h]

  Flink = WPP_MAIN_CB.Queue.ListEntry.Flink;
  v8 = a7;
  v9 = -1LL;
  v10 = 10LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a7 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( *(_WORD *)&a7[2 * v13] );
      v14 = 2 * v13 + 2;
    }
    else
    {
      v14 = 10LL;
    }
    v15 = a7;
    if ( !a7 )
      v15 = L"NULL";
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, void *, __int64, char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_88e56cbdc8ae3b99b735fb320356d567_Traceguids,
      23LL,
      &a6,
      8LL,
      v15,
      v14,
      0LL);
  }
  v11 = v8 == 0LL;
  if ( v8 )
  {
    do
      ++v9;
    while ( *(_WORD *)&v8[2 * v9] );
    v10 = 2 * v9 + 2;
    v11 = v8 == 0LL;
  }
  if ( v11 )
    v8 = L"NULL";
  LOWORD(v16) = 23;
  return WppAutoLogTrace(
           Flink,
           4LL,
           8LL,
           &WPP_88e56cbdc8ae3b99b735fb320356d567_Traceguids,
           v16,
           &a6,
           8LL,
           v8,
           v10,
           0LL,
           v17);
}
