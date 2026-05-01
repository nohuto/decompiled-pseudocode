/*
 * XREFs of j_free @ 0x1800448FC
 * Callers:
 *     sub_180002110 @ 0x180002110 (sub_180002110.c)
 *     sub_180010430 @ 0x180010430 (sub_180010430.c)
 *     sub_180011430 @ 0x180011430 (sub_180011430.c)
 *     sub_1800148D0 @ 0x1800148D0 (sub_1800148D0.c)
 *     sub_180031940 @ 0x180031940 (sub_180031940.c)
 *     sub_180037490 @ 0x180037490 (sub_180037490.c)
 *     sub_18003C630 @ 0x18003C630 (sub_18003C630.c)
 *     j_j_free @ 0x1800460D8 (j_j_free.c)
 *     sub_180062EE0 @ 0x180062EE0 (sub_180062EE0.c)
 *     sub_1800632B0 @ 0x1800632B0 (sub_1800632B0.c)
 *     sub_180063500 @ 0x180063500 (sub_180063500.c)
 *     sub_180063538 @ 0x180063538 (sub_180063538.c)
 *     sub_180064410 @ 0x180064410 (sub_180064410.c)
 *     sub_1800674E0 @ 0x1800674E0 (sub_1800674E0.c)
 *     sub_180073C30 @ 0x180073C30 (sub_180073C30.c)
 *     sub_180076EC0 @ 0x180076EC0 (sub_180076EC0.c)
 *     sub_180076EF0 @ 0x180076EF0 (sub_180076EF0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl j_free(void *Block)
{
  free(Block);
}
