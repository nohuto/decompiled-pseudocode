/*
 * XREFs of WPP_RECORDER_SF_sscc @ 0x1C01BC710
 * Callers:
 *     _anonymous_namespace_::IsMouseButtonSwapped @ 0x1C00A6A08 (_anonymous_namespace_--IsMouseButtonSwapped.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_sscc(_DWORD a1, _BYTE a2, _DWORD a3, _BYTE a4, __int64 a5, const char *a6, const char *a7, ...)
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
  int v20; // [rsp+20h] [rbp-68h]
  __int64 v21; // [rsp+C8h] [rbp+40h] BYREF
  va_list va; // [rsp+C8h] [rbp+40h]
  va_list va1; // [rsp+D0h] [rbp+48h] BYREF

  va_start(va1, a7);
  va_start(va, a7);
  v21 = va_arg(va1, _QWORD);
  Flink = WPP_MAIN_CB.Queue.ListEntry.Flink;
  v8 = -1LL;
  v9 = a7;
  v10 = a6;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
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
      &WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids,
      11LL,
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
  LOWORD(v20) = 11;
  return WppAutoLogTrace(
           Flink,
           4LL,
           6LL,
           &WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids,
           v20,
           v10,
           v18,
           v9,
           v17,
           (__int64 *)va,
           1LL,
           va1);
}
