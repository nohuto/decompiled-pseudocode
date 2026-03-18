/*
 * XREFs of PpmCheckUpdateDeliveredPerformanceIfTracingEnabled @ 0x14037B7C0
 * Callers:
 *     <none>
 * Callees:
 *     EtwEventEnabled @ 0x14026B690 (EtwEventEnabled.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x14026EAE0 (PpmCheckSnapAllDeliveredPerformance.c)
 */

char PpmCheckUpdateDeliveredPerformanceIfTracingEnabled()
{
  if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_DELIVERED_PERF_CHANGE) )
    return PpmCheckSnapAllDeliveredPerformance();
  else
    return 1;
}
