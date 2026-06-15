/*
 * XREFs of sub_180025744 @ 0x180025744
 * Callers:
 *     sub_180029CD0 @ 0x180029CD0 (sub_180029CD0.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall sub_180025744(TRACEHANDLE a1, __int64 a2, __int64 a3, int a4, const char *a5)
{
  __int64 v5; // rdx
  __int64 v6; // rdx
  const char *v7; // rax
  int v9; // [rsp+78h] [rbp+20h] BYREF

  v9 = a4;
  if ( a5 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a5[v5] );
    v6 = v5 + 1;
  }
  else
  {
    v6 = 5LL;
  }
  v7 = "NULL";
  if ( a5 )
    v7 = a5;
  return TraceMessage(a1, 0x2Bu, &stru_180044DE8, 0x18u, &v9, 4LL, v7, v6, 0LL);
}
