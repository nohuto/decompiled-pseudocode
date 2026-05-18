/*
 * XREFs of sub_1800D5DBC @ 0x1800D5DBC
 * Callers:
 *     sub_18006B820 @ 0x18006B820 (sub_18006B820.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1800D5DBC(__int64 a1)
{
  char result; // al

  result = *(_BYTE *)(a1 + 184);
  if ( result )
    return sub_1800D5D34(a1, *(_QWORD *)(a1 + 192));
  return result;
}
