/*
 * XREFs of KeGetProcessorNumberFromIndex @ 0x1402FDDF0
 * Callers:
 *     KeMaskInterrupt @ 0x140374B20 (KeMaskInterrupt.c)
 *     HalGetProcessorIdByNtNumber @ 0x140375130 (HalGetProcessorIdByNtNumber.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x140378944 (KeSetIdealProcessorThreadByNumber.c)
 *     IoGetAffinityInterrupt @ 0x14037F990 (IoGetAffinityInterrupt.c)
 *     HalpInterruptInitializeIpis @ 0x1403ACD34 (HalpInterruptInitializeIpis.c)
 *     PspWriteTebIdealProcessor @ 0x1406B559C (PspWriteTebIdealProcessor.c)
 *     PnprAddProcessorResources @ 0x1408A9F64 (PnprAddProcessorResources.c)
 *     EtwpProcessorRundown @ 0x14093B28C (EtwpProcessorRundown.c)
 *     PnprQuiesceProcessorDpc @ 0x1409AB520 (PnprQuiesceProcessorDpc.c)
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
