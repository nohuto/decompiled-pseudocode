/*
 * XREFs of PipDgqFreeEntry @ 0x14095EC14
 * Callers:
 *     PiDmaGuardQueueRemoveEntry @ 0x140564DE8 (PiDmaGuardQueueRemoveEntry.c)
 *     PipDmgFlushQueueAndRestartDevices @ 0x140956ADC (PipDmgFlushQueueAndRestartDevices.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall PipDgqFreeEntry(PVOID *P)
{
  ObfDereferenceObjectWithTag(P[2], 0x64706E50u);
  P[2] = 0LL;
  ExFreePoolWithTag(P, 0x64706E50u);
}
