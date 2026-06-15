/*
 * XREFs of sub_1800257D4 @ 0x1800257D4
 * Callers:
 *     TS_SessionChanged @ 0x18002A7F0 (TS_SessionChanged.c)
 * Callees:
 *     <none>
 */

ULONG sub_1800257D4(TRACEHANDLE a1, USHORT a2, __int64 a3, const char *a4, ...)
{
  __int64 v4; // r8
  __int64 v5; // r8
  const char *v6; // rax
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  if ( a4 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a4[v4] );
    v5 = v4 + 1;
  }
  else
  {
    v5 = 5LL;
  }
  v6 = "NULL";
  if ( a4 )
    v6 = a4;
  return TraceMessage(a1, 0x2Bu, &stru_180044DE8, a2, v6, v5, va, 4LL, 0LL);
}
