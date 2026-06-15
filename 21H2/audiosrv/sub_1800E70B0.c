/*
 * XREFs of sub_1800E70B0 @ 0x1800E70B0
 * Callers:
 *     sub_18002F780 @ 0x18002F780 (sub_18002F780.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800E70B0(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4)
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
  return EtwTraceMessage(a1, 43LL, &unk_180171568, 11LL, a4);
}
