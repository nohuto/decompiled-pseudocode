/*
 * XREFs of ?LockExclusiveWithoutGuard@CInpLockGuard@@QEAAXXZ @ 0x1C01A1AA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CInpLockGuard::LockExclusiveWithoutGuard(PERESOURCE *this)
{
  ExEnterCriticalRegionAndAcquireResourceExclusive(*this);
}
