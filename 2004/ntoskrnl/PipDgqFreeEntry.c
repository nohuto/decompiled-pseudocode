/*
 * XREFs of PipDgqFreeEntry @ 0x1408B6158
 * Callers:
 *     PiDmaGuardQueueRemoveEntry @ 0x14050B188 (PiDmaGuardQueueRemoveEntry.c)
 *     PipDmgFlushQueueAndRestartDevices @ 0x1408AE368 (PipDmgFlushQueueAndRestartDevices.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall PipDgqFreeEntry(PVOID *P)
{
  ObfDereferenceObjectWithTag(P[2], 0x64706E50u);
  P[2] = 0LL;
  ExFreePoolWithTag(P, 0x64706E50u);
}
