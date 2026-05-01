/*
 * XREFs of free @ 0x180044F05
 * Callers:
 *     j_free @ 0x1800448FC (j_free.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl free(void *Block)
{
  __imp_free(Block);
}
