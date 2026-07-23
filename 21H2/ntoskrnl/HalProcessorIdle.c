/*
 * XREFs of HalProcessorIdle @ 0x1403F9E80
 * Callers:
 *     PoIdle @ 0x1402C67D0 (PoIdle.c)
 *     PpmIdleGuestExecute @ 0x140390840 (PpmIdleGuestExecute.c)
 *     PpmIdleDefaultExecute @ 0x1403BD0D0 (PpmIdleDefaultExecute.c)
 * Callees:
 *     HalpTimerResetProfileAdjustment @ 0x1403963F0 (HalpTimerResetProfileAdjustment.c)
 */

void __noreturn HalProcessorIdle()
{
  HalpTimerResetProfileAdjustment();
  _enable();
  __halt();
}
