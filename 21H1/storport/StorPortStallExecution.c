/*
 * XREFs of StorPortStallExecution @ 0x1C000EB40
 * Callers:
 *     StorPortStallExecutionVrfy @ 0x1C007E7C0 (StorPortStallExecutionVrfy.c)
 * Callees:
 *     <none>
 */

void __fastcall StorPortStallExecution(ULONG a1)
{
  KeStallExecutionProcessor(a1);
}
