/*
 * XREFs of sub_18003C630 @ 0x18003C630
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003C668 @ 0x18003C668 (sub_18003C668.c)
 *     j_free @ 0x1800448FC (j_free.c)
 */

void *__fastcall sub_18003C630(void *Block, char a2)
{
  sub_18003C668();
  if ( (a2 & 1) != 0 )
    j_free(Block);
  return Block;
}
