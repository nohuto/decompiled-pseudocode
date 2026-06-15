/*
 * XREFs of sub_1800C2408 @ 0x1800C2408
 * Callers:
 *     sub_1800C0948 @ 0x1800C0948 (sub_1800C0948.c)
 *     sub_1800CA8B0 @ 0x1800CA8B0 (sub_1800CA8B0.c)
 *     sub_1800CB980 @ 0x1800CB980 (sub_1800CB980.c)
 *     sub_1800CC0B0 @ 0x1800CC0B0 (sub_1800CC0B0.c)
 * Callees:
 *     <none>
 */

__int64 sub_1800C2408(__int64 a1, unsigned __int16 a2, __int64 a3, const wchar_t *a4, ...)
{
  __int64 v4; // rax

  if ( a4 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a4[v4] );
  }
  if ( !a4 )
    a4 = L"NULL";
  return EtwTraceMessage(a1, 43LL, a3, a2, a4);
}
