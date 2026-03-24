/*
 * XREFs of KeGetProcessorNumberFromIndex @ 0x1402754F0
 * Callers:
 *     KeMaskInterrupt @ 0x140376F40 (KeMaskInterrupt.c)
 *     HalGetProcessorIdByNtNumber @ 0x140377550 (HalGetProcessorIdByNtNumber.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x14037A874 (KeSetIdealProcessorThreadByNumber.c)
 *     IoGetAffinityInterrupt @ 0x140381DC0 (IoGetAffinityInterrupt.c)
 *     HalpInterruptInitializeIpis @ 0x1403A92CC (HalpInterruptInitializeIpis.c)
 *     PspWriteTebIdealProcessor @ 0x1406476C8 (PspWriteTebIdealProcessor.c)
 *     PnprAddProcessorResources @ 0x1408AD064 (PnprAddProcessorResources.c)
 *     EtwpProcessorRundown @ 0x14093E88C (EtwpProcessorRundown.c)
 *     PnprQuiesceProcessorDpc @ 0x1409AE390 (PnprQuiesceProcessorDpc.c)
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
