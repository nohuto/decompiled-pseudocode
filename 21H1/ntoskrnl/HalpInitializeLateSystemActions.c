/*
 * XREFs of HalpInitializeLateSystemActions @ 0x1403A92DC
 * Callers:
 *     HalpDispatchPnp @ 0x14074EA40 (HalpDispatchPnp.c)
 * Callees:
 *     HalpInitSystemHelper @ 0x140997708 (HalpInitSystemHelper.c)
 */

__int64 HalpInitializeLateSystemActions()
{
  return HalpInitSystemHelper(31LL);
}
