/*
 * XREFs of sub_18006EA58 @ 0x18006EA58
 * Callers:
 *     sub_18006E160 @ 0x18006E160 (sub_18006E160.c)
 *     sub_18006EF94 @ 0x18006EF94 (sub_18006EF94.c)
 * Callees:
 *     sub_18006EA3C @ 0x18006EA3C (sub_18006EA3C.c)
 */

char __fastcall sub_18006EA58(__int64 a1)
{
  __int64 v1; // rcx
  char result; // al

  if ( !sub_18006EA3C(a1) )
    return 0;
  result = 1;
  if ( (*(_BYTE *)(v1 + 144) & 1) != 0 )
    return 0;
  return result;
}
