/*
 * XREFs of ?ConsumerQueryBufferInfo@FlipManagerObject@@QEAAJ_KPEAU_LUID@@PEAPEAX@Z @ 0x1C0079D70
 * Callers:
 *     NtFlipObjectConsumerQueryBufferInfo @ 0x1C007AAE0 (NtFlipObjectConsumerQueryBufferInfo.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00069FC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0007EB4 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?CreateDxSharedSurfaceHandle@CPoolBufferResource@@QEAAJPEAPEAX@Z @ 0x1C007F294 (-CreateDxSharedSurfaceHandle@CPoolBufferResource@@QEAAJPEAPEAX@Z.c)
 *     ?FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@@@Z @ 0x1C007F9EC (-FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@.c)
 */

__int64 __fastcall FlipManagerObject::ConsumerQueryBufferInfo(
        FlipManagerObject *this,
        unsigned __int64 a2,
        struct _LUID *a3,
        void **a4)
{
  CPushLock *v4; // rsi
  CEndpointResourceStateManager *v9; // rcx
  int DxSharedSurfaceHandle; // ebx
  struct CFlipResourceState *ResourceState; // rax
  struct CFlipResourceState *v12; // rdi

  v4 = (FlipManagerObject *)((char *)this + 40);
  DxSharedSurfaceHandle = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 40));
  if ( DxSharedSurfaceHandle >= 0 )
  {
    ResourceState = CEndpointResourceStateManager::FindResourceState(v9, a2, (struct _LIST_ENTRY *)((char *)this + 136));
    v12 = ResourceState;
    if ( ResourceState )
    {
      DxSharedSurfaceHandle = CPoolBufferResource::CreateDxSharedSurfaceHandle(
                                *((CPoolBufferResource **)ResourceState + 3),
                                a4);
      if ( DxSharedSurfaceHandle >= 0 )
        *a3 = *(struct _LUID *)(*((_QWORD *)v12 + 3) + 72LL);
    }
    else
    {
      DxSharedSurfaceHandle = -1073741811;
    }
    CPushLock::ReleaseLock(v4);
  }
  return (unsigned int)DxSharedSurfaceHandle;
}
