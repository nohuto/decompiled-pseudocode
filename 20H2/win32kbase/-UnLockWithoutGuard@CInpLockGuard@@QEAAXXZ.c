/*
 * XREFs of ?UnLockWithoutGuard@CInpLockGuard@@QEAAXXZ @ 0x1C00D1E80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CInpLockGuard::UnLockWithoutGuard(CInpLockGuard *this)
{
  *((_QWORD *)this + 4) = 0LL;
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)this);
}
