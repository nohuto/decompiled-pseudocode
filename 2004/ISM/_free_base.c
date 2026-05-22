/*
 * XREFs of _free_base @ 0x18003C3EA
 * Callers:
 *     __dyn_tls_dtor @ 0x18003D400 (__dyn_tls_dtor.c)
 *     __tlregdtor @ 0x18003D4AC (__tlregdtor.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl free_base(void *Block)
{
  _o__free_base(Block);
}
