/*
 * XREFs of PpmQueryTime @ 0x1403C03FC
 * Callers:
 *     PpmIdleInitializeConcurrency @ 0x1407A7EA4 (PpmIdleInitializeConcurrency.c)
 *     PopPdcIdleResiliencyCallback @ 0x1408ECC3C (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402F3FA0 (KeQueryPerformanceCounter.c)
 */

void __noreturn PpmQueryTime()
{
  KeQueryPerformanceCounter(0LL);
}
