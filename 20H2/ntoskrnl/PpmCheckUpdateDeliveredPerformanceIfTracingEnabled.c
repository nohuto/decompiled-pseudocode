/*
 * XREFs of PpmCheckUpdateDeliveredPerformanceIfTracingEnabled @ 0x14037E270
 * Callers:
 *     <none>
 * Callees:
 *     EtwEventEnabled @ 0x14027E3D0 (EtwEventEnabled.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140280500 (PpmCheckSnapAllDeliveredPerformance.c)
 */

char PpmCheckUpdateDeliveredPerformanceIfTracingEnabled()
{
  if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_DELIVERED_PERF_CHANGE) )
    return PpmCheckSnapAllDeliveredPerformance();
  else
    return 1;
}
