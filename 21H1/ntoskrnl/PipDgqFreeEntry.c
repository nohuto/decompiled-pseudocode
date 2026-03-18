/*
 * XREFs of PipDgqFreeEntry @ 0x1408B4E38
 * Callers:
 *     PiDmaGuardQueueRemoveEntry @ 0x14050AB38 (PiDmaGuardQueueRemoveEntry.c)
 *     PipDmgFlushQueueAndRestartDevices @ 0x1408AD048 (PipDmgFlushQueueAndRestartDevices.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall PipDgqFreeEntry(PVOID *P)
{
  ObfDereferenceObjectWithTag(P[2], 0x64706E50u);
  P[2] = 0LL;
  ExFreePoolWithTag(P, 0x64706E50u);
}
