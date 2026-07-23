/*
 * XREFs of KeTryToAcquireSpinLockAtDpcLevel @ 0x14024EC00
 * Callers:
 *     <none>
 * Callees:
 *     KxTryToAcquireSpinLock @ 0x14024EC18 (KxTryToAcquireSpinLock.c)
 */

BOOLEAN __stdcall KeTryToAcquireSpinLockAtDpcLevel(PKSPIN_LOCK SpinLock)
{
  return KxTryToAcquireSpinLock(SpinLock);
}
