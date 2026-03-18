/*
 * XREFs of IntPartFree @ 0x1C002E8BC
 * Callers:
 *     ProcessorpFindIdtEntriesApic @ 0x1C0099330 (ProcessorpFindIdtEntriesApic.c)
 *     IntPartArbInit @ 0x1C009D7C4 (IntPartArbInit.c)
 * Callees:
 *     <none>
 */

void __fastcall IntPartFree(void *a1)
{
  ExFreePoolWithTag(a1, 0);
}
