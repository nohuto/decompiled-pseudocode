/*
 * XREFs of HalpInitializeLateSystemActions @ 0x1403BF770
 * Callers:
 *     HalpDispatchPnp @ 0x14081A830 (HalpDispatchPnp.c)
 * Callees:
 *     HalpInitSystemHelper @ 0x140A56C48 (HalpInitSystemHelper.c)
 */

__int64 HalpInitializeLateSystemActions()
{
  return HalpInitSystemHelper(31LL);
}
