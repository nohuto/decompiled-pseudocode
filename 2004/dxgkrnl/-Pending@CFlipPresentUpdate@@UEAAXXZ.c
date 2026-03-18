/*
 * XREFs of ?Pending@CFlipPresentUpdate@@UEAAXXZ @ 0x1C006DCD0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000EDCC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0010BD4 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ClearAllContentBindings@CEndpointResourceStateManager@@QEAAXXZ @ 0x1C006B6B0 (-ClearAllContentBindings@CEndpointResourceStateManager@@QEAAXXZ.c)
 *     ?CommitPendingUpdates@CEndpointResourceStateManager@@QEAAXXZ @ 0x1C006B734 (-CommitPendingUpdates@CEndpointResourceStateManager@@QEAAXXZ.c)
 */

void __fastcall CFlipPresentUpdate::Pending(CFlipPresentUpdate *this)
{
  _QWORD *v1; // rbx

  v1 = (_QWORD *)*((_QWORD *)this + 1);
  if ( (int)CPushLock::AcquireLockExclusive((CPushLock *)(v1 + 5)) >= 0 )
  {
    CEndpointResourceStateManager::CommitPendingUpdates((CEndpointResourceStateManager *)(v1 + 11));
    ++v1[26];
    if ( !*((_BYTE *)this + 72) )
      CEndpointResourceStateManager::ClearAllContentBindings((CEndpointResourceStateManager *)(v1 + 11));
    CPushLock::ReleaseLock((CPushLock *)(v1 + 5));
  }
}
