/*
 * XREFs of KiAcquireReleaseObjectRundownLockExclusive @ 0x140228354
 * Callers:
 *     KeRundownQueueEx @ 0x140227E38 (KeRundownQueueEx.c)
 *     KeDeleteMutant @ 0x140228198 (KeDeleteMutant.c)
 *     KeReleaseMutant @ 0x14034D200 (KeReleaseMutant.c)
 *     KeRundownPriQueue @ 0x1405246AC (KeRundownPriQueue.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031FAE0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall KiAcquireReleaseObjectRundownLockExclusive(unsigned __int64 a1)
{
  volatile LONG *v1; // rbx

  v1 = (volatile LONG *)((char *)&KiObjectRundownLocks + 64 * ((a1 >> 4) & 0x3F));
  ExAcquireSpinLockExclusiveAtDpcLevel(v1);
  ExReleaseSpinLockExclusiveFromDpcLevel(v1);
}
