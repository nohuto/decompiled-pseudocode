/*
 * XREFs of HalProcessorIdle @ 0x14041B080
 * Callers:
 *     PoIdle @ 0x140305BD0 (PoIdle.c)
 *     PpmIdleGuestExecute @ 0x14039E0F0 (PpmIdleGuestExecute.c)
 *     PpmIdleDefaultExecute @ 0x1403CAB40 (PpmIdleDefaultExecute.c)
 * Callees:
 *     HalpTimerResetProfileAdjustment @ 0x140229A90 (HalpTimerResetProfileAdjustment.c)
 */

void __noreturn HalProcessorIdle()
{
  HalpTimerResetProfileAdjustment();
  _enable();
  __halt();
}
