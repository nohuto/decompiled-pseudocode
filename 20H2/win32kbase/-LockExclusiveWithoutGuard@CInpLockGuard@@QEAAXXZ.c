/*
 * XREFs of ?LockExclusiveWithoutGuard@CInpLockGuard@@QEAAXXZ @ 0x1C019F700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CInpLockGuard::LockExclusiveWithoutGuard(PERESOURCE *this)
{
  ExEnterCriticalRegionAndAcquireResourceExclusive(*this);
  this[4] = (PERESOURCE)KeGetCurrentThread();
}
