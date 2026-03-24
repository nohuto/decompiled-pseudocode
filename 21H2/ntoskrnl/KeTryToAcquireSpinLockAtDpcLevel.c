/*
 * XREFs of KeTryToAcquireSpinLockAtDpcLevel @ 0x1402D0770
 * Callers:
 *     <none>
 * Callees:
 *     KxTryToAcquireSpinLock @ 0x1402D0788 (KxTryToAcquireSpinLock.c)
 */

BOOLEAN __stdcall KeTryToAcquireSpinLockAtDpcLevel(PKSPIN_LOCK SpinLock)
{
  return KxTryToAcquireSpinLock(SpinLock);
}
