/*
 * XREFs of KiAcquireReleaseObjectRundownLockExclusive @ 0x1402FBE64
 * Callers:
 *     KeReleaseMutant @ 0x140249450 (KeReleaseMutant.c)
 *     KeRundownQueueEx @ 0x1402FB948 (KeRundownQueueEx.c)
 *     KeDeleteMutant @ 0x1402FBCA8 (KeDeleteMutant.c)
 *     KeRundownPriQueue @ 0x14051E96C (KeRundownPriQueue.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402A37D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall KiAcquireReleaseObjectRundownLockExclusive(unsigned __int64 a1)
{
  volatile LONG *v1; // rbx

  v1 = (volatile LONG *)((char *)&KiObjectRundownLocks + 64 * ((a1 >> 4) & 0x3F));
  ExAcquireSpinLockExclusiveAtDpcLevel(v1);
  ExReleaseSpinLockExclusiveFromDpcLevel(v1);
}
