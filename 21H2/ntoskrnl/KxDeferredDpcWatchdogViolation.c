/*
 * XREFs of KxDeferredDpcWatchdogViolation @ 0x140420B30
 * Callers:
 *     KiDeferredDpcWatchdogViolation @ 0x140420B10 (KiDeferredDpcWatchdogViolation.c)
 * Callees:
 *     KiInvokeDeferredDpcWatchdogViolation @ 0x140579410 (KiInvokeDeferredDpcWatchdogViolation.c)
 */

void __noreturn KxDeferredDpcWatchdogViolation()
{
  KiInvokeDeferredDpcWatchdogViolation();
}
