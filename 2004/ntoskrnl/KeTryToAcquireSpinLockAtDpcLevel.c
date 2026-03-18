/*
 * XREFs of KeTryToAcquireSpinLockAtDpcLevel @ 0x14035E080
 * Callers:
 *     <none>
 * Callees:
 *     KxTryToAcquireSpinLock @ 0x14035E098 (KxTryToAcquireSpinLock.c)
 */

BOOLEAN __stdcall KeTryToAcquireSpinLockAtDpcLevel(PKSPIN_LOCK SpinLock)
{
  return KxTryToAcquireSpinLock(SpinLock);
}
