/*
 * XREFs of KeSetTargetProcessorDpcEx @ 0x14032F690
 * Callers:
 *     KeMaskInterrupt @ 0x140376AB0 (KeMaskInterrupt.c)
 *     HalpHvInitMcaPcrContext @ 0x1403C4D90 (HalpHvInitMcaPcrContext.c)
 *     KeSetTargetProcessorDpc @ 0x140518230 (KeSetTargetProcessorDpc.c)
 *     HalpMcaInitializePcrContext @ 0x1409A2A1C (HalpMcaInitializePcrContext.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x14033E1A0 (KeGetProcessorIndexFromNumber.c)
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
