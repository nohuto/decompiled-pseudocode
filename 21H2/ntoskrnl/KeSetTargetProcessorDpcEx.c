/*
 * XREFs of KeSetTargetProcessorDpcEx @ 0x14025ACA0
 * Callers:
 *     KeMaskInterrupt @ 0x1403AED64 (KeMaskInterrupt.c)
 *     HalpHvInitMcaPcrContext @ 0x1403D2700 (HalpHvInitMcaPcrContext.c)
 *     KeSetTargetProcessorDpc @ 0x14056F980 (KeSetTargetProcessorDpc.c)
 *     KiAltContextWorkQueueAddItem @ 0x14057C248 (KiAltContextWorkQueueAddItem.c)
 *     WheaFlushETWEventsAddWorkRtn @ 0x140645DC0 (WheaFlushETWEventsAddWorkRtn.c)
 *     HalpMcaInitializePcrContext @ 0x140A5B2F8 (HalpMcaInitializePcrContext.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x140293580 (KeGetProcessorIndexFromNumber.c)
 */

NTSTATUS __stdcall KeSetTargetProcessorDpcEx(PKDPC Dpc, PPROCESSOR_NUMBER ProcNumber)
{
  ULONG ProcessorIndexFromNumber; // eax

  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(ProcNumber);
  if ( ProcessorIndexFromNumber == -1 )
    return -1073741811;
  if ( !Dpc->DpcData )
    Dpc->Number = ProcessorIndexFromNumber + 2048;
  return 0;
}
