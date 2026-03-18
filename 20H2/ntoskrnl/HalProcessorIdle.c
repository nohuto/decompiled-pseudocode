/*
 * XREFs of HalProcessorIdle @ 0x1403F7A70
 * Callers:
 *     PoIdle @ 0x140281800 (PoIdle.c)
 *     PpmIdleGuestExecute @ 0x140390220 (PpmIdleGuestExecute.c)
 *     PpmIdleDefaultExecute @ 0x1403BC480 (PpmIdleDefaultExecute.c)
 * Callees:
 *     HalpTimerResetProfileAdjustment @ 0x140395E30 (HalpTimerResetProfileAdjustment.c)
 */

void __noreturn HalProcessorIdle()
{
  HalpTimerResetProfileAdjustment();
  _enable();
  __halt();
}
