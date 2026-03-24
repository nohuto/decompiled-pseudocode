/*
 * XREFs of HalProcessorIdle @ 0x1403F9CA0
 * Callers:
 *     PoIdle @ 0x140221ED0 (PoIdle.c)
 *     PpmIdleGuestExecute @ 0x1403906F0 (PpmIdleGuestExecute.c)
 *     PpmIdleDefaultExecute @ 0x1403BCF60 (PpmIdleDefaultExecute.c)
 * Callees:
 *     HalpTimerResetProfileAdjustment @ 0x1403962A0 (HalpTimerResetProfileAdjustment.c)
 */

void __noreturn HalProcessorIdle()
{
  HalpTimerResetProfileAdjustment();
  _enable();
  __halt();
}
