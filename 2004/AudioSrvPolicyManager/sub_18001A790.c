/*
 * XREFs of sub_18001A790 @ 0x18001A790
 * Callers:
 *     sub_18001F850 @ 0x18001F850 (sub_18001F850.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall sub_18001A790(
        TRACEHANDLE LoggerHandle,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        char a5,
        const char *a6)
{
  __int64 v6; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // r10
  const char *v11; // rax
  const wchar_t *v12; // rcx

  v6 = -1LL;
  if ( a6 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( a6[v8] );
    v9 = v8 + 1;
  }
  else
  {
    v9 = 5LL;
  }
  if ( a4 )
  {
    do
      ++v6;
    while ( a4[v6] );
    v10 = 2 * v6 + 2;
  }
  else
  {
    v10 = 10LL;
  }
  v11 = "NULL";
  v12 = L"NULL";
  if ( a6 )
    v11 = a6;
  if ( a4 )
    v12 = a4;
  return TraceMessage(LoggerHandle, 0x2Bu, &stru_1800445C8, 0x2Fu, v12, v10, &a5, 8LL, v11, v9, 0LL);
}
