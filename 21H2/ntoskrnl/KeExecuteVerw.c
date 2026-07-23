/*
 * XREFs of KeExecuteVerw @ 0x140414000
 * Callers:
 *     PoIdle @ 0x1402C67D0 (PoIdle.c)
 *     PpmIdleDefaultExecute @ 0x1403BD0D0 (PpmIdleDefaultExecute.c)
 * Callees:
 *     <none>
 */

void KeExecuteVerw()
{
  __asm { verw    word ptr gs:902Ah }
}
