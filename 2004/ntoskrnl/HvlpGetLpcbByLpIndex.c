/*
 * XREFs of HvlpGetLpcbByLpIndex @ 0x14038E338
 * Callers:
 *     HvlReadPerformanceStateCounters @ 0x14038E2E0 (HvlReadPerformanceStateCounters.c)
 *     HvlEnlightenProcessor @ 0x1403A4CD8 (HvlEnlightenProcessor.c)
 *     KiQueryProcessorNode @ 0x1403B1CAC (KiQueryProcessorNode.c)
 *     HvlSharedIsr @ 0x1404ECAF0 (HvlSharedIsr.c)
 *     HvlQueryHypervisorProcessorNodeNumber @ 0x1404ECE90 (HvlQueryHypervisorProcessorNodeNumber.c)
 *     HvlQueryProcessorTopologyEx @ 0x1404ED040 (HvlQueryProcessorTopologyEx.c)
 *     HvlGetStatsUpdateCounter @ 0x1404F2980 (HvlGetStatsUpdateCounter.c)
 *     PpmHvSnapPerformanceAccumulation @ 0x1405770A0 (PpmHvSnapPerformanceAccumulation.c)
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
