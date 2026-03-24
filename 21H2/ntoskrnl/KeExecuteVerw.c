/*
 * XREFs of KeExecuteVerw @ 0x140413F00
 * Callers:
 *     PoIdle @ 0x140221ED0 (PoIdle.c)
 *     PpmIdleDefaultExecute @ 0x1403BCF60 (PpmIdleDefaultExecute.c)
 * Callees:
 *     <none>
 */

void KeExecuteVerw()
{
  __asm { verw    word ptr gs:902Ah }
}
