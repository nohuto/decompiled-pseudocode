/*
 * XREFs of PpmCheckUpdateDeliveredPerformanceIfTracingEnabled @ 0x14037C540
 * Callers:
 *     <none>
 * Callees:
 *     EtwEventEnabled @ 0x140212640 (EtwEventEnabled.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140215A90 (PpmCheckSnapAllDeliveredPerformance.c)
 */

char PpmCheckUpdateDeliveredPerformanceIfTracingEnabled()
{
  if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_DELIVERED_PERF_CHANGE) )
    return PpmCheckSnapAllDeliveredPerformance();
  else
    return 1;
}
