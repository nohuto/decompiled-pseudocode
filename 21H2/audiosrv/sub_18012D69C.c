/*
 * XREFs of sub_18012D69C @ 0x18012D69C
 * Callers:
 *     sub_18012D5F0 @ 0x18012D5F0 (sub_18012D5F0.c)
 * Callees:
 *     <none>
 */

ULONG sub_18012D69C(TRACEHANDLE a1, __int64 a2, __int64 a3, const wchar_t *a4, ...)
{
  __int64 v4; // rax
  __int64 v5; // rax
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  if ( a4 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a4[v4] );
    v5 = 2 * v4 + 2;
  }
  else
  {
    v5 = 10LL;
  }
  if ( !a4 )
    a4 = L"NULL";
  return TraceMessage(a1, 0x2Bu, &MessageGuid, 0x11u, a4, v5, va, 4LL, 0LL);
}
