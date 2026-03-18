/*
 * XREFs of PipDgqFreeEntry @ 0x1408BBD78
 * Callers:
 *     PiDmaGuardQueueRemoveEntry @ 0x14050EAB8 (PiDmaGuardQueueRemoveEntry.c)
 *     PipDmgFlushQueueAndRestartDevices @ 0x1408B3E98 (PipDmgFlushQueueAndRestartDevices.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall PipDgqFreeEntry(PVOID *P)
{
  ObfDereferenceObjectWithTag(P[2], 0x64706E50u);
  P[2] = 0LL;
  ExFreePoolWithTag(P, 0x64706E50u);
}
