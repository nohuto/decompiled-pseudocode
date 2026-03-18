/*
 * XREFs of KeTryToAcquireSpinLockAtDpcLevel @ 0x140320460
 * Callers:
 *     <none>
 * Callees:
 *     KxTryToAcquireSpinLock @ 0x140320478 (KxTryToAcquireSpinLock.c)
 */

BOOLEAN __stdcall KeTryToAcquireSpinLockAtDpcLevel(PKSPIN_LOCK SpinLock)
{
  return KxTryToAcquireSpinLock(SpinLock);
}
