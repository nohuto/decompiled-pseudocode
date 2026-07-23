/*
 * XREFs of KeSetTargetProcessorDpcEx @ 0x14024FAD0
 * Callers:
 *     KeMaskInterrupt @ 0x140376A90 (KeMaskInterrupt.c)
 *     HalpHvInitMcaPcrContext @ 0x1403C5920 (HalpHvInitMcaPcrContext.c)
 *     KeSetTargetProcessorDpc @ 0x140519FB0 (KeSetTargetProcessorDpc.c)
 *     HalpMcaInitializePcrContext @ 0x1409A116C (HalpMcaInitializePcrContext.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x140269E20 (KeGetProcessorIndexFromNumber.c)
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
