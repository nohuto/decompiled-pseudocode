/*
 * XREFs of sub_18009D404 @ 0x18009D404
 * Callers:
 *     sub_1800C6C30 @ 0x1800C6C30 (sub_1800C6C30.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18009D404(unsigned __int64 a1, char a2)
{
  int v2; // eax

  if ( a1 < 0x20 )
  {
    v2 = 1 << a1;
    if ( a2 )
      dword_180213698 |= v2;
    else
      dword_180213698 &= ~v2;
  }
}
