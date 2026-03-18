/*
 * XREFs of KeGetProcessorNumberFromIndex @ 0x1402C1310
 * Callers:
 *     KeMaskInterrupt @ 0x140373D10 (KeMaskInterrupt.c)
 *     HalGetProcessorIdByNtNumber @ 0x140374320 (HalGetProcessorIdByNtNumber.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x140377B34 (KeSetIdealProcessorThreadByNumber.c)
 *     IoGetAffinityInterrupt @ 0x14037EFA0 (IoGetAffinityInterrupt.c)
 *     HalpInterruptInitializeIpis @ 0x1403A5C74 (HalpInterruptInitializeIpis.c)
 *     PspWriteTebIdealProcessor @ 0x14064C5BC (PspWriteTebIdealProcessor.c)
 *     PnprAddProcessorResources @ 0x1408A8C44 (PnprAddProcessorResources.c)
 *     EtwpProcessorRundown @ 0x140939FEC (EtwpProcessorRundown.c)
 *     PnprQuiesceProcessorDpc @ 0x1409AA6C0 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall KeGetProcessorNumberFromIndex(ULONG ProcIndex, PPROCESSOR_NUMBER ProcNumber)
{
  unsigned int v3; // ecx

  if ( !ProcIndex )
  {
    *ProcNumber = 0;
    return 0;
  }
  if ( ProcIndex < 0x500 )
  {
    v3 = KiProcessorIndexToNumberMappingTable[ProcIndex];
    if ( v3 )
    {
      ProcNumber->Reserved = 0;
      ProcNumber->Group = v3 >> 6;
      ProcNumber->Number = v3 & 0x3F;
      return 0;
    }
  }
  return -1073741811;
}
