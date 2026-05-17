/*
 * XREFs of _Normalization__GuessBetterCharCount@16 @ 0x4B367676
 * Callers:
 *     _Normalization__Normalize@24 @ 0x4B367CF9 (_Normalization__Normalize@24.c)
 * Callees:
 *     _Normalization__GuessCharCountBySize@8 @ 0x4B3676E1 (_Normalization__GuessCharCountBySize@8.c)
 */

int __fastcall Normalization__GuessBetterCharCount(int a1, int a2, int a3, int a4)
{
  int v4; // esi
  int v5; // edi
  __int64 v6; // rax
  int v7; // ecx

  v4 = a4;
  v5 = a2;
  if ( !a2 )
  {
    v5 = 1;
    v4 = *(_DWORD *)(a1 + 12) + a4;
  }
  v6 = Normalization__GuessCharCountBySize(a1, a3);
  v7 = v6;
  if ( v4 * HIDWORD(v6) / v5 > (int)v6 )
    v7 = v4 * HIDWORD(v6) / v5;
  return v4 + v7 + (v7 >> 3);
}
