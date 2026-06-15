/*
 * XREFs of sub_1800FFF80 @ 0x1800FFF80
 * Callers:
 *     sub_180035850 @ 0x180035850 (sub_180035850.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800FFF80(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4)
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
  return EtwTraceMessage(a1, 43LL, &unk_180172650, 36LL, a4);
}
