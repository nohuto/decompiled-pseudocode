/*
 * XREFs of KeSetTargetProcessorDpcEx @ 0x14035E9A0
 * Callers:
 *     KeMaskInterrupt @ 0x140374B20 (KeMaskInterrupt.c)
 *     HalpHvInitMcaPcrContext @ 0x1403C2620 (HalpHvInitMcaPcrContext.c)
 *     KeSetTargetProcessorDpc @ 0x140514900 (KeSetTargetProcessorDpc.c)
 *     HalpMcaInitializePcrContext @ 0x14099C91C (HalpMcaInitializePcrContext.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x1402981D0 (KeGetProcessorIndexFromNumber.c)
 */

NTSTATUS __stdcall KeSetTargetProcessorDpcEx(PKDPC Dpc, PPROCESSOR_NUMBER ProcNumber)
{
  ULONG ProcessorIndexFromNumber; // eax

  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(ProcNumber);
  if ( ProcessorIndexFromNumber == -1 )
    return -1073741811;
  if ( !Dpc->DpcData )
    Dpc->Number = ProcessorIndexFromNumber + 1280;
  return 0;
}
