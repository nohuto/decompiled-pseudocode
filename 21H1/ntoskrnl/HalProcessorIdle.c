/*
 * XREFs of HalProcessorIdle @ 0x1403F1C30
 * Callers:
 *     PoIdle @ 0x14026FDE0 (PoIdle.c)
 *     PpmIdleGuestExecute @ 0x14038D1C0 (PpmIdleGuestExecute.c)
 *     PpmIdleDefaultExecute @ 0x1403B8C90 (PpmIdleDefaultExecute.c)
 * Callees:
 *     HalpTimerResetProfileAdjustment @ 0x140392DA0 (HalpTimerResetProfileAdjustment.c)
 */

void __noreturn HalProcessorIdle()
{
  HalpTimerResetProfileAdjustment();
  _enable();
  __halt();
}
