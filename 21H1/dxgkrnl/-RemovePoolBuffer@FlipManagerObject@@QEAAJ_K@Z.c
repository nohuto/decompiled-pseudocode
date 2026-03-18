/*
 * XREFs of ?RemovePoolBuffer@FlipManagerObject@@QEAAJ_K@Z @ 0x1C0066B60
 * Callers:
 *     NtFlipObjectRemovePoolBuffer @ 0x1C0067F40 (NtFlipObjectRemovePoolBuffer.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0004688 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0004704 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@@@Z @ 0x1C006A76C (-FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@.c)
 *     ?RemovePoolBufferState@CEndpointResourceStateManager@@QEAAXPEAVCPoolBufferResourceState@@@Z @ 0x1C006B5B0 (-RemovePoolBufferState@CEndpointResourceStateManager@@QEAAXPEAVCPoolBufferResourceState@@@Z.c)
 */

__int64 __fastcall FlipManagerObject::RemovePoolBuffer(FlipManagerObject *this, unsigned __int64 a2)
{
  CEndpointResourceStateManager *v4; // rcx
  int v5; // ebx
  struct CPoolBufferResourceState *ResourceState; // rax
  CEndpointResourceStateManager *v7; // r8

  v5 = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 40));
  if ( v5 >= 0 )
  {
    v5 = 0;
    ResourceState = CEndpointResourceStateManager::FindResourceState(v4, a2, (struct _LIST_ENTRY *)((char *)this + 88));
    if ( ResourceState )
      CEndpointResourceStateManager::RemovePoolBufferState(v7, ResourceState);
    else
      v5 = -1073741811;
    CPushLock::ReleaseLock((FlipManagerObject *)((char *)this + 40));
  }
  return (unsigned int)v5;
}
