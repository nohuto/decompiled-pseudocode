/*
 * XREFs of HalpInitializeLateSystemActions @ 0x1403AD6CC
 * Callers:
 *     HalpDispatchPnp @ 0x140765140 (HalpDispatchPnp.c)
 * Callees:
 *     HalpInitSystemHelper @ 0x14099D0C8 (HalpInitSystemHelper.c)
 */

__int64 HalpInitializeLateSystemActions()
{
  return HalpInitSystemHelper(31LL);
}
