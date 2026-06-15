/*
 * XREFs of sub_18000A680 @ 0x18000A680
 * Callers:
 *     sub_18000B610 @ 0x18000B610 (sub_18000B610.c)
 *     sub_180010F18 @ 0x180010F18 (sub_180010F18.c)
 *     sub_180012518 @ 0x180012518 (sub_180012518.c)
 * Callees:
 *     <none>
 */

ULONG sub_18000A680(TRACEHANDLE LoggerHandle, USHORT a2, const GUID *a3, const wchar_t *a4, const wchar_t *a5, ...)
{
  __int64 v5; // rax
  __int64 v7; // r11
  __int64 v8; // r10
  __int64 v9; // r10
  const wchar_t *v10; // rcx
  const wchar_t *v11; // rax
  va_list va; // [rsp+98h] [rbp+30h] BYREF

  va_start(va, a5);
  v5 = -1LL;
  v7 = 10LL;
  if ( a5 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( a5[v8] );
    v9 = 2 * v8 + 2;
  }
  else
  {
    v9 = 10LL;
  }
  if ( a4 )
  {
    do
      ++v5;
    while ( a4[v5] );
    v7 = 2 * v5 + 2;
  }
  v10 = L"NULL";
  v11 = L"NULL";
  if ( a5 )
    v11 = a5;
  if ( a4 )
    v10 = a4;
  return TraceMessage(LoggerHandle, 0x2Bu, a3, a2, v10, v7, v11, v9, va, 4LL, 0LL);
}
