/*
 * XREFs of PpmQueryTime @ 0x1403BF46C
 * Callers:
 *     PpmIdleInitializeConcurrency @ 0x1407A5754 (PpmIdleInitializeConcurrency.c)
 *     PopPdcIdleResiliencyCallback @ 0x1408EB9BC (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x140240CA0 (KeQueryPerformanceCounter.c)
 */

void __noreturn PpmQueryTime()
{
  KeQueryPerformanceCounter(0LL);
}
