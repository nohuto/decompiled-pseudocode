/*
 * XREFs of sub_18000FB0C @ 0x18000FB0C
 * Callers:
 *     sub_180010BC0 @ 0x180010BC0 (sub_180010BC0.c)
 *     sub_18001FA04 @ 0x18001FA04 (sub_18001FA04.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall sub_18000FB0C(
        TRACEHANDLE LoggerHandle,
        USHORT a2,
        const GUID *a3,
        const wchar_t *a4,
        const wchar_t *a5)
{
  __int64 v5; // rax
  __int64 v7; // r11
  __int64 v8; // r10
  __int64 v9; // r10
  const wchar_t *v10; // rcx
  const wchar_t *v11; // rax

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
  return TraceMessage(LoggerHandle, 0x2Bu, a3, a2, v10, v7, v11, v9, 0LL);
}
