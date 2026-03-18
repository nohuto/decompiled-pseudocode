/*
 * XREFs of HvlpGetLpcbByLpIndex @ 0x14039E528
 * Callers:
 *     HvlReadPerformanceStateCounters @ 0x14039E4D0 (HvlReadPerformanceStateCounters.c)
 *     HvlEnlightenProcessor @ 0x1403B6B58 (HvlEnlightenProcessor.c)
 *     HvlSharedIsr @ 0x140459B00 (HvlSharedIsr.c)
 *     HvlGetApicIdFromLpIndex @ 0x1405439E0 (HvlGetApicIdFromLpIndex.c)
 *     HvlQueryHypervisorProcessorNodeNumber @ 0x140543B00 (HvlQueryHypervisorProcessorNodeNumber.c)
 *     HvlQueryProcessorTopologyEx @ 0x140543CA0 (HvlQueryProcessorTopologyEx.c)
 *     HvlGetStatsUpdateCounter @ 0x1405499F8 (HvlGetStatsUpdateCounter.c)
 *     PpmHvSnapPerformanceAccumulation @ 0x1405DC4F8 (PpmHvSnapPerformanceAccumulation.c)
 * Callees:
 *     <none>
 */

int *__fastcall HvlpGetLpcbByLpIndex(unsigned int a1)
{
  int *v1; // rdx
  int *result; // rax
  unsigned int v3; // r9d

  v1 = HvlpLogicalProcessorRegions;
  if ( a1 >= (unsigned int)HvlpLogicalProcessorCount
    || (result = &HvlpLogicalProcessorRegions[30 * a1], result[1] != a1) )
  {
    result = 0LL;
    v3 = 0;
    if ( (_DWORD)HvlpLogicalProcessorCount )
    {
      while ( v1[1] != a1 )
      {
        ++v3;
        v1 += 30;
        if ( v3 >= (unsigned int)HvlpLogicalProcessorCount )
          goto LABEL_6;
      }
      return v1;
    }
    else
    {
LABEL_6:
      if ( !a1 )
        return v1;
    }
  }
  return result;
}
