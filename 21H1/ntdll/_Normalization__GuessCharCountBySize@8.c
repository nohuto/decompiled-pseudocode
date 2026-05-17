/*
 * XREFs of _Normalization__GuessCharCountBySize@8 @ 0x4B3676E1
 * Callers:
 *     _Normalization__GuessBetterCharCount@16 @ 0x4B367676 (_Normalization__GuessBetterCharCount@16.c)
 *     _Normalization__GuessCharCount@16 @ 0x4B3676B1 (_Normalization__GuessCharCount@16.c)
 * Callees:
 *     <none>
 */

int __fastcall Normalization__GuessCharCountBySize(int a1, int a2)
{
  int result; // eax

  result = a2 + (a2 >> 3);
  if ( result < 64 )
  {
    result = a2 * *(_DWORD *)(a1 + 12);
    if ( result > 64 )
      return 64;
  }
  return result;
}
