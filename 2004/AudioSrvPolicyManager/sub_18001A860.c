/*
 * XREFs of sub_18001A860 @ 0x18001A860
 * Callers:
 *     sub_1800209A0 @ 0x1800209A0 (sub_1800209A0.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall sub_18001A860(TRACEHANDLE LoggerHandle, __int64 a2, __int64 a3, const wchar_t *a4, const char *a5)
{
  __int64 v5; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r10
  const char *v10; // rcx
  const wchar_t *v11; // rax

  v5 = -1LL;
  if ( a5 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( a5[v7] );
    v8 = v7 + 1;
  }
  else
  {
    v8 = 5LL;
  }
  if ( a4 )
  {
    do
      ++v5;
    while ( a4[v5] );
    v9 = 2 * v5 + 2;
  }
  else
  {
    v9 = 10LL;
  }
  v10 = "NULL";
  if ( a5 )
    v10 = a5;
  v11 = L"NULL";
  if ( a4 )
    v11 = a4;
  return TraceMessage(LoggerHandle, 0x2Bu, &stru_1800445C8, 0x3Du, v11, v9, v10, v8, 0LL);
}
