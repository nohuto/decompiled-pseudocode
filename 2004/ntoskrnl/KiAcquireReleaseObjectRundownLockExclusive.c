/*
 * XREFs of KiAcquireReleaseObjectRundownLockExclusive @ 0x140338E94
 * Callers:
 *     KeReleaseMutant @ 0x140285BF0 (KeReleaseMutant.c)
 *     KeRundownQueueEx @ 0x140338978 (KeRundownQueueEx.c)
 *     KeDeleteMutant @ 0x140338CD8 (KeDeleteMutant.c)
 *     KeRundownPriQueue @ 0x14051EFBC (KeRundownPriQueue.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14024A7A0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall KiAcquireReleaseObjectRundownLockExclusive(unsigned __int64 a1)
{
  volatile LONG *v1; // rbx

  v1 = &KiObjectRundownLocks[16 * ((a1 >> 4) & 0x3F)];
  ExAcquireSpinLockExclusiveAtDpcLevel(v1);
  ExReleaseSpinLockExclusiveFromDpcLevel(v1);
}
