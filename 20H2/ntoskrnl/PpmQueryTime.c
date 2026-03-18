/*
 * XREFs of PpmQueryTime @ 0x1403C1BB0
 * Callers:
 *     PpmIdleInitializeConcurrency @ 0x1407B5EC8 (PpmIdleInitializeConcurrency.c)
 *     PopPdcIdleResiliencyCallback @ 0x1408F284C (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x140266AF0 (KeQueryPerformanceCounter.c)
 */

void __noreturn PpmQueryTime()
{
  KeQueryPerformanceCounter(0LL);
}
