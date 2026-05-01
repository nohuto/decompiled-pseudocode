/*
 * XREFs of sub_180073C30 @ 0x180073C30
 * Callers:
 *     <none>
 * Callees:
 *     sub_180002400 @ 0x180002400 (sub_180002400.c)
 *     j_free @ 0x1800448FC (j_free.c)
 */

_QWORD *__fastcall sub_180073C30(_QWORD *Block, char a2)
{
  *Block = off_1800880A8;
  sub_180002400((__int64)(Block + 5));
  if ( (a2 & 1) != 0 )
    j_free(Block);
  return Block;
}
