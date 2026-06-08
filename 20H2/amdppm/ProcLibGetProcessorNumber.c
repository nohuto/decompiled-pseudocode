/*
 * XREFs of ProcLibGetProcessorNumber @ 0x1C0001BF0
 * Callers:
 *     ComputeProcessorEnergyUsingMsr @ 0x1C00013A0 (ComputeProcessorEnergyUsingMsr.c)
 *     ComputeHyperThreadedProcessorEnergyUsingMsr @ 0x1C0001560 (ComputeHyperThreadedProcessorEnergyUsingMsr.c)
 *     ProcLibGetEventDescriptorAndProcessorId @ 0x1C0003404 (ProcLibGetEventDescriptorAndProcessorId.c)
 *     ProcLibTraceProcessorIds @ 0x1C001D2B8 (ProcLibTraceProcessorIds.c)
 *     ProcLibTraceGetProcessorIdleStatesV2 @ 0x1C001D3CC (ProcLibTraceGetProcessorIdleStatesV2.c)
 *     ProcLibTraceQueryCapabilities @ 0x1C001E240 (ProcLibTraceQueryCapabilities.c)
 *     ProcLibTraceGetProcessorIdleStates @ 0x1C001E8E8 (ProcLibTraceGetProcessorIdleStates.c)
 *     ProcLibTracePepPerfCapabilities @ 0x1C001F5D0 (ProcLibTracePepPerfCapabilities.c)
 *     ProcLibTracePerfConstraintChange @ 0x1C0020508 (ProcLibTracePerfConstraintChange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcLibGetProcessorNumber(__int64 a1, struct _PROCESSOR_NUMBER *a2)
{
  unsigned int v2; // r8d

  if ( dword_1C0013834 == 1 )
  {
    if ( *(_DWORD *)(a1 + 72) == -1 )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      v2 = 0;
      a2->Reserved = 0;
      a2->Group = 0;
      a2->Number = *(_BYTE *)(a1 + 72);
    }
  }
  else
  {
    return (unsigned int)KeGetProcessorNumberFromIndex(*(_DWORD *)(a1 + 56), a2);
  }
  return v2;
}
