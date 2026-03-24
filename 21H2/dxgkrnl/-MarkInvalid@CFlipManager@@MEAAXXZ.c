/*
 * XREFs of ?MarkInvalid@CFlipManager@@MEAAXXZ @ 0x1C006B790
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000EEBC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0010CC4 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ?FreeCancels@CFlipManager@@AEAAXXZ @ 0x1C006B3A0 (-FreeCancels@CFlipManager@@AEAAXXZ.c)
 *     ?FreeCurrentUpdates@CFlipManager@@AEAAXXZ @ 0x1C006B424 (-FreeCurrentUpdates@CFlipManager@@AEAAXXZ.c)
 *     ?FreeQueuedUpdates@CFlipManager@@AEAAXXZ @ 0x1C006B498 (-FreeQueuedUpdates@CFlipManager@@AEAAXXZ.c)
 *     ?DestroyAllResourceStates@CEndpointResourceStateManager@@QEAAXXZ @ 0x1C006C618 (-DestroyAllResourceStates@CEndpointResourceStateManager@@QEAAXXZ.c)
 */

void __fastcall CFlipManager::MarkInvalid(CFlipManager *this)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx
  void *v3; // rcx
  void *v4; // rcx

  if ( (**(unsigned __int8 (__fastcall ***)(CFlipManager *))this)(this) )
  {
    CPushLock::AcquireLockExclusive((CFlipManager *)((char *)this + 8));
    v2 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 21);
    if ( v2 )
    {
      (**v2)(v2, 1LL);
      *((_QWORD *)this + 21) = 0LL;
    }
    v3 = (void *)*((_QWORD *)this + 26);
    if ( v3 )
    {
      ObfDereferenceObject(v3);
      *((_QWORD *)this + 26) = 0LL;
    }
    v4 = (void *)*((_QWORD *)this + 27);
    if ( v4 )
    {
      ObfDereferenceObject(v4);
      *((_QWORD *)this + 27) = 0LL;
    }
    CFlipManager::FreeCurrentUpdates(this);
    CEndpointResourceStateManager::DestroyAllResourceStates((CFlipManager *)((char *)this + 56));
    CEndpointResourceStateManager::DestroyAllResourceStates((CFlipManager *)((char *)this + 88));
    CFlipManager::FreeQueuedUpdates(this);
    CFlipManager::FreeCancels(this);
    *((_BYTE *)this + 32) &= ~1u;
    CPushLock::ReleaseLock((CFlipManager *)((char *)this + 8));
  }
}
