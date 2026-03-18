/*
 * XREFs of ?ProcessDiscardedProducerPresentUpdate@FlipManagerObject@@QEAAJPEAVCFlipPresentUpdate@@@Z @ 0x1C006CBAC
 * Callers:
 *     ?Discard@CFlipPresentUpdate@@UEAAXXZ @ 0x1C006CB00 (-Discard@CFlipPresentUpdate@@UEAAXXZ.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0004688 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0004704 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C0069D78 (-ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     ?CancelPendingUpdates@CEndpointResourceStateManager@@QEAAXXZ @ 0x1C006A4A8 (-CancelPendingUpdates@CEndpointResourceStateManager@@QEAAXXZ.c)
 *     ?ClearAllContentBindings@CEndpointResourceStateManager@@QEAAXXZ @ 0x1C006A520 (-ClearAllContentBindings@CEndpointResourceStateManager@@QEAAXXZ.c)
 */

__int64 __fastcall FlipManagerObject::ProcessDiscardedProducerPresentUpdate(
        FlipManagerObject *this,
        struct CFlipPresentUpdate *a2)
{
  CFlipManager *v4; // rcx
  int v5; // edi

  v5 = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 40));
  if ( v5 >= 0 )
  {
    CFlipManager::ReleaseKernelPresentUpdateReferences(v4, a2);
    CEndpointResourceStateManager::CancelPendingUpdates((FlipManagerObject *)((char *)this + 88));
    if ( !*((_BYTE *)a2 + 72) )
      CEndpointResourceStateManager::ClearAllContentBindings((FlipManagerObject *)((char *)this + 88));
    CPushLock::ReleaseLock((FlipManagerObject *)((char *)this + 40));
  }
  return (unsigned int)v5;
}
