/*
 * XREFs of KeSetTargetProcessorDpcEx @ 0x1402D1640
 * Callers:
 *     KeMaskInterrupt @ 0x140376F40 (KeMaskInterrupt.c)
 *     HalpHvInitMcaPcrContext @ 0x1403C54F0 (HalpHvInitMcaPcrContext.c)
 *     KeSetTargetProcessorDpc @ 0x140519D70 (KeSetTargetProcessorDpc.c)
 *     HalpMcaInitializePcrContext @ 0x1409A023C (HalpMcaInitializePcrContext.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x14027BE80 (KeGetProcessorIndexFromNumber.c)
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
