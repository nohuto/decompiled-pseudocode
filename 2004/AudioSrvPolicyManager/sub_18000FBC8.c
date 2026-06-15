/*
 * XREFs of sub_18000FBC8 @ 0x18000FBC8
 * Callers:
 *     sub_1800094B0 @ 0x1800094B0 (sub_1800094B0.c)
 *     sub_180009670 @ 0x180009670 (sub_180009670.c)
 *     sub_180012044 @ 0x180012044 (sub_180012044.c)
 *     sub_180012270 @ 0x180012270 (sub_180012270.c)
 *     sub_18001F6D0 @ 0x18001F6D0 (sub_18001F6D0.c)
 *     sub_1800203F4 @ 0x1800203F4 (sub_1800203F4.c)
 *     sub_18002C770 @ 0x18002C770 (sub_18002C770.c)
 * Callees:
 *     <none>
 */

ULONG sub_18000FBC8(TRACEHANDLE LoggerHandle, USHORT a2, const GUID *a3, const wchar_t *a4, ...)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  const wchar_t *v7; // rax
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  if ( a4 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a4[v5] );
    v6 = 2 * v5 + 2;
  }
  else
  {
    v6 = 10LL;
  }
  v7 = L"NULL";
  if ( a4 )
    v7 = a4;
  return TraceMessage(LoggerHandle, 0x2Bu, a3, a2, v7, v6, va, 4LL, 0LL);
}
