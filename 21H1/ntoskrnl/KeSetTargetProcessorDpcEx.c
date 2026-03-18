/*
 * XREFs of KeSetTargetProcessorDpcEx @ 0x140320EE0
 * Callers:
 *     KeMaskInterrupt @ 0x140373D10 (KeMaskInterrupt.c)
 *     HalpHvInitMcaPcrContext @ 0x1403C1760 (HalpHvInitMcaPcrContext.c)
 *     KeSetTargetProcessorDpc @ 0x1405142B0 (KeSetTargetProcessorDpc.c)
 *     HalpMcaInitializePcrContext @ 0x14099B17C (HalpMcaInitializePcrContext.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x140205810 (KeGetProcessorIndexFromNumber.c)
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
