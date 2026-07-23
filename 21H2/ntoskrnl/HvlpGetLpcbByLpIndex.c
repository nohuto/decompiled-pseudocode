/*
 * XREFs of HvlpGetLpcbByLpIndex @ 0x140390E48
 * Callers:
 *     HvlReadPerformanceStateCounters @ 0x140390DF0 (HvlReadPerformanceStateCounters.c)
 *     HvlEnlightenProcessor @ 0x1403A7AE8 (HvlEnlightenProcessor.c)
 *     KiQueryProcessorNode @ 0x1403B5E0C (KiQueryProcessorNode.c)
 *     HvlSharedIsr @ 0x1404F1E80 (HvlSharedIsr.c)
 *     HvlQueryHypervisorProcessorNodeNumber @ 0x1404F2220 (HvlQueryHypervisorProcessorNodeNumber.c)
 *     HvlQueryProcessorTopologyEx @ 0x1404F23D0 (HvlQueryProcessorTopologyEx.c)
 *     HvlGetStatsUpdateCounter @ 0x1404F7D10 (HvlGetStatsUpdateCounter.c)
 *     PpmHvSnapPerformanceAccumulation @ 0x14057C720 (PpmHvSnapPerformanceAccumulation.c)
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
