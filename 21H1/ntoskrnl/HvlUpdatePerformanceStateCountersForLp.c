/*
 * XREFs of HvlUpdatePerformanceStateCountersForLp @ 0x14038CC40
 * Callers:
 *     PpmCheckSnapAllDeliveredPerformance @ 0x14026EAE0 (PpmCheckSnapAllDeliveredPerformance.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038CF90 (HvcallInitiateHypercall.c)
 *     HvlpHvToNtStatus @ 0x1404F5274 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlUpdatePerformanceStateCountersForLp(unsigned int a1)
{
  unsigned __int16 v1; // ax

  v1 = HvcallInitiateHypercall(65774LL, a1, 0LL);
  if ( v1 )
    return HvlpHvToNtStatus(v1);
  else
    return 0LL;
}
