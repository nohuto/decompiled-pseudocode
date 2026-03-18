/*
 * XREFs of HalProcessorIdle @ 0x1403F2EC0
 * Callers:
 *     PoIdle @ 0x140216D90 (PoIdle.c)
 *     PpmIdleGuestExecute @ 0x14038DD30 (PpmIdleGuestExecute.c)
 *     PpmIdleDefaultExecute @ 0x1403BA000 (PpmIdleDefaultExecute.c)
 * Callees:
 *     HalpTimerResetProfileAdjustment @ 0x140393970 (HalpTimerResetProfileAdjustment.c)
 */

void __noreturn HalProcessorIdle()
{
  HalpTimerResetProfileAdjustment();
  _enable();
  __halt();
}
