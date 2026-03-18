/*
 * XREFs of ?IncrementWaiters@CInpLockGuard@@QEAAXXZ @ 0x1C019F660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CInpLockGuard::IncrementWaiters(CInpLockGuard *this)
{
  _InterlockedIncrement((volatile signed __int32 *)this + 4);
}
