/*
 * XREFs of sub_180063500 @ 0x180063500
 * Callers:
 *     <none>
 * Callees:
 *     j_free @ 0x1800448FC (j_free.c)
 *     sub_1800634A4 @ 0x1800634A4 (sub_1800634A4.c)
 */

_QWORD *__fastcall sub_180063500(_QWORD *Block, char a2)
{
  sub_1800634A4(Block);
  if ( (a2 & 1) != 0 )
    j_free(Block);
  return Block;
}
