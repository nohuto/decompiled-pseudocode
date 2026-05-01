/*
 * XREFs of sub_18006F614 @ 0x18006F614
 * Callers:
 *     sub_180032644 @ 0x180032644 (sub_180032644.c)
 *     sub_18006EC58 @ 0x18006EC58 (sub_18006EC58.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_18006F614(__int64 a1)
{
  char result; // al

  if ( *(_DWORD *)(a1 + 104) != 2 )
    return 0;
  result = 1;
  if ( (*(_BYTE *)(a1 + 170) & 5) != 1 )
    return 0;
  return result;
}
