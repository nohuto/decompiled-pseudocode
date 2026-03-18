/*
 * XREFs of KeTryToAcquireSpinLockAtDpcLevel @ 0x14032EA30
 * Callers:
 *     <none>
 * Callees:
 *     KxTryToAcquireSpinLock @ 0x14032EA48 (KxTryToAcquireSpinLock.c)
 */

BOOLEAN __stdcall KeTryToAcquireSpinLockAtDpcLevel(PKSPIN_LOCK SpinLock)
{
  return KxTryToAcquireSpinLock(SpinLock);
}
