/*
 * XREFs of sub_18002262C @ 0x18002262C
 * Callers:
 *     sub_180022FD8 @ 0x180022FD8 (sub_180022FD8.c)
 *     sub_18002BB70 @ 0x18002BB70 (sub_18002BB70.c)
 *     sub_18002C120 @ 0x18002C120 (sub_18002C120.c)
 * Callees:
 *     <none>
 */

ULONG sub_18002262C(TRACEHANDLE LoggerHandle, USHORT a2, const GUID *a3, ...)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  const wchar_t *v6; // rax
  __int64 v8; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  const wchar_t *v10; // [rsp+90h] [rbp+28h]
  va_list va1; // [rsp+98h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v8 = va_arg(va1, _QWORD);
  v10 = va_arg(va1, const wchar_t *);
  if ( v10 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( v10[v4] );
    v5 = 2 * v4 + 2;
  }
  else
  {
    v5 = 10LL;
  }
  v6 = L"NULL";
  if ( v10 )
    v6 = v10;
  return TraceMessage(LoggerHandle, 0x2Bu, a3, a2, va, 4LL, v6, v5, va1, 4LL, 0LL);
}
