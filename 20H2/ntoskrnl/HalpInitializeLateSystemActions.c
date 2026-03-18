/*
 * XREFs of HalpInitializeLateSystemActions @ 0x1403A7A0C
 * Callers:
 *     HalpDispatchPnp @ 0x140761CB0 (HalpDispatchPnp.c)
 * Callees:
 *     HalpInitSystemHelper @ 0x14099E7A8 (HalpInitSystemHelper.c)
 */

__int64 HalpInitializeLateSystemActions()
{
  return HalpInitSystemHelper(31LL);
}
