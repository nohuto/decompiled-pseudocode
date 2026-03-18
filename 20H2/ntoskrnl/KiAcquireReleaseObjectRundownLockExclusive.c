/*
 * XREFs of KiAcquireReleaseObjectRundownLockExclusive @ 0x14030B5B4
 * Callers:
 *     KeReleaseMutant @ 0x140218050 (KeReleaseMutant.c)
 *     KeRundownQueueEx @ 0x14030B098 (KeRundownQueueEx.c)
 *     KeDeleteMutant @ 0x14030B3F8 (KeDeleteMutant.c)
 *     KeRundownPriQueue @ 0x14052298C (KeRundownPriQueue.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14022EA40 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall KiAcquireReleaseObjectRundownLockExclusive(unsigned __int64 a1)
{
  volatile LONG *v1; // rbx

  v1 = &KiObjectRundownLocks[16 * ((a1 >> 4) & 0x3F)];
  ExAcquireSpinLockExclusiveAtDpcLevel(v1);
  ExReleaseSpinLockExclusiveFromDpcLevel(v1);
}
