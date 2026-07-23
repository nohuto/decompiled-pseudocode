/*
 * XREFs of KeAcquireSpinLockForDpc @ 0x1405168E0
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x1402CDEB0 (KxAcquireSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 */

KIRQL __stdcall KeAcquireSpinLockForDpc(PKSPIN_LOCK SpinLock)
{
  KIRQL v1; // bl

  if ( (KeGetCurrentPrcb()->DpcRequestSummary & 0x10000) != 0 )
    return KeAcquireSpinLockRaiseToDpc(SpinLock);
  v1 = 2;
  KxAcquireSpinLock(SpinLock);
  return v1;
}
