/*
 * XREFs of NdisAllocateSpinLockExported @ 0x1C00BCA10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisAllocateSpinLockExported(PNDIS_SPIN_LOCK SpinLock)
{
  KeInitializeSpinLock(&SpinLock->SpinLock);
}
