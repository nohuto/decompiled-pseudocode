/*
 * XREFs of HalpInitializeLateSystemActions @ 0x1403AD57C
 * Callers:
 *     HalpDispatchPnp @ 0x140764F80 (HalpDispatchPnp.c)
 * Callees:
 *     HalpInitSystemHelper @ 0x14099C0C8 (HalpInitSystemHelper.c)
 */

__int64 HalpInitializeLateSystemActions()
{
  return HalpInitSystemHelper(31LL);
}
