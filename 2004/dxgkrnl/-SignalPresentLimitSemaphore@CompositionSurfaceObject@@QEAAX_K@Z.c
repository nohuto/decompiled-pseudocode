/*
 * XREFs of ?SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z @ 0x1C001C218
 * Callers:
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C0002F70 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 *     ?Discard@CFlipToken@@UEAAXXZ @ 0x1C001AB90 (-Discard@CFlipToken@@UEAAXXZ.c)
 *     ?SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z @ 0x1C001C1BC (-SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z.c)
 *     ?CreateFlipToken@CToken@@CAJ_KPEAVCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C006369C (-CreateFlipToken@CToken@@CAJ_KPEAVCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORY.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000EDCC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0010C50 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C0010E70 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CompositionSurfaceObject::SignalPresentLimitSemaphore(CompositionSurfaceObject *this, __int64 a2)
{
  struct CCompositionBuffer *v4; // [rsp+30h] [rbp+8h] BYREF

  if ( (int)CPushLock::AcquireLockShared((CompositionSurfaceObject *)((char *)this + 48)) >= 0 )
  {
    v4 = 0LL;
    if ( (int)CCompositionSurface::FindBuffer((CompositionSurfaceObject *)((char *)this + 40), a2, &v4) >= 0 )
      (*(void (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)v4 + 112LL))(v4);
    CPushLock::ReleaseLock((CompositionSurfaceObject *)((char *)this + 48));
  }
}
