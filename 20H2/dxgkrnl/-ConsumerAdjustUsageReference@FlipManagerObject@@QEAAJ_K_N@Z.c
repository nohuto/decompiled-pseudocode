/*
 * XREFs of ?ConsumerAdjustUsageReference@FlipManagerObject@@QEAAJ_K_N@Z @ 0x1C0067648
 * Callers:
 *     NtFlipObjectConsumerAdjustUsageReference @ 0x1C00680F0 (NtFlipObjectConsumerAdjustUsageReference.c)
 *     ?Complete@CFlipWaitedConsumerReturn@@UEAAXXZ @ 0x1C006DCC0 (-Complete@CFlipWaitedConsumerReturn@@UEAAXXZ.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000EE2C (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0010C34 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@@@Z @ 0x1C006B7CC (-FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@.c)
 *     ?AddUsageReference@CPoolBufferResource@@QEAAXXZ @ 0x1C006CC54 (-AddUsageReference@CPoolBufferResource@@QEAAXXZ.c)
 *     ?RemoveUsageReference@CPoolBufferResource@@QEAAXXZ @ 0x1C006CF40 (-RemoveUsageReference@CPoolBufferResource@@QEAAXXZ.c)
 */

__int64 __fastcall FlipManagerObject::ConsumerAdjustUsageReference(
        FlipManagerObject *this,
        unsigned __int64 a2,
        char a3)
{
  CEndpointResourceStateManager *v6; // rcx
  int v7; // ebx
  struct CFlipResourceState *ResourceState; // rax
  CPoolBufferResource *v9; // rcx

  v7 = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 40));
  if ( v7 >= 0 )
  {
    v7 = 0;
    ResourceState = CEndpointResourceStateManager::FindResourceState(v6, a2, (struct _LIST_ENTRY *)((char *)this + 120));
    if ( ResourceState )
    {
      v9 = (CPoolBufferResource *)*((_QWORD *)ResourceState + 3);
      if ( a3 )
        CPoolBufferResource::AddUsageReference(v9);
      else
        CPoolBufferResource::RemoveUsageReference(v9);
    }
    else
    {
      v7 = -1073741811;
    }
    CPushLock::ReleaseLock((FlipManagerObject *)((char *)this + 40));
  }
  return (unsigned int)v7;
}
