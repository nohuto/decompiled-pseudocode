/*
 * XREFs of KeGetProcessorNumberFromIndex @ 0x1402E55B0
 * Callers:
 *     KeMaskInterrupt @ 0x140376AB0 (KeMaskInterrupt.c)
 *     HalGetProcessorIdByNtNumber @ 0x1403770C0 (HalGetProcessorIdByNtNumber.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x14037A674 (KeSetIdealProcessorThreadByNumber.c)
 *     IoGetAffinityInterrupt @ 0x1403816C0 (IoGetAffinityInterrupt.c)
 *     HalpInterruptInitializeIpis @ 0x1403AF31C (HalpInterruptInitializeIpis.c)
 *     PspWriteTebIdealProcessor @ 0x14069319C (PspWriteTebIdealProcessor.c)
 *     PnprAddProcessorResources @ 0x1408AFA94 (PnprAddProcessorResources.c)
 *     EtwpProcessorRundown @ 0x1409410BC (EtwpProcessorRundown.c)
 *     PnprQuiesceProcessorDpc @ 0x1409B1490 (PnprQuiesceProcessorDpc.c)
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
