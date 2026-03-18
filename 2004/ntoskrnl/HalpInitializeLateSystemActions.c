/*
 * XREFs of HalpInitializeLateSystemActions @ 0x1403A560C
 * Callers:
 *     HalpDispatchPnp @ 0x1407530D0 (HalpDispatchPnp.c)
 * Callees:
 *     HalpInitSystemHelper @ 0x140998768 (HalpInitSystemHelper.c)
 */

__int64 HalpInitializeLateSystemActions()
{
  return HalpInitSystemHelper(31LL);
}
