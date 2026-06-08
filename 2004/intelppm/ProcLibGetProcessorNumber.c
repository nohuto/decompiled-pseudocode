/*
 * XREFs of ProcLibGetProcessorNumber @ 0x1C0003830
 * Callers:
 *     ProcLibGetEventDescriptorAndProcessorId @ 0x1C00037BC (ProcLibGetEventDescriptorAndProcessorId.c)
 *     ProcLibTraceEnergyCounterUpdate @ 0x1C0008020 (ProcLibTraceEnergyCounterUpdate.c)
 *     ProcLibTraceGetProcessorIdleStates @ 0x1C002B944 (ProcLibTraceGetProcessorIdleStates.c)
 *     ProcLibTraceGetProcessorIdleStatesV2 @ 0x1C002BB68 (ProcLibTraceGetProcessorIdleStatesV2.c)
 *     ProcLibTracePepPerfCapabilities @ 0x1C002BF1C (ProcLibTracePepPerfCapabilities.c)
 *     ProcLibTracePerfConstraintChange @ 0x1C002C208 (ProcLibTracePerfConstraintChange.c)
 *     ProcLibTraceProcessorIds @ 0x1C002C71C (ProcLibTraceProcessorIds.c)
 *     ProcLibTraceQueryCapabilities @ 0x1C002CD20 (ProcLibTraceQueryCapabilities.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcLibGetProcessorNumber(__int64 a1, struct _PROCESSOR_NUMBER *a2)
{
  unsigned int v2; // r8d

  if ( dword_1C001C84C == 1 )
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
