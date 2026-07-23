/*
 * XREFs of KeGetProcessorNumberFromIndex @ 0x140263490
 * Callers:
 *     KeMaskInterrupt @ 0x140376A90 (KeMaskInterrupt.c)
 *     HalGetProcessorIdByNtNumber @ 0x1403770A0 (HalGetProcessorIdByNtNumber.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x14037A3C4 (KeSetIdealProcessorThreadByNumber.c)
 *     IoGetAffinityInterrupt @ 0x140381910 (IoGetAffinityInterrupt.c)
 *     HalpInterruptInitializeIpis @ 0x1403AA05C (HalpInterruptInitializeIpis.c)
 *     PspWriteTebIdealProcessor @ 0x14063C4B8 (PspWriteTebIdealProcessor.c)
 *     PnprAddProcessorResources @ 0x1408AD1C4 (PnprAddProcessorResources.c)
 *     EtwpProcessorRundown @ 0x14093EA5C (EtwpProcessorRundown.c)
 *     PnprQuiesceProcessorDpc @ 0x1409AF2C0 (PnprQuiesceProcessorDpc.c)
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
