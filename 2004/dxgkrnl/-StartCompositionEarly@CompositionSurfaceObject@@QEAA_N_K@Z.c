/*
 * XREFs of ?StartCompositionEarly@CompositionSurfaceObject@@QEAA_N_K@Z @ 0x1C006315C
 * Callers:
 *     ?InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NW4TokenState@CTokenBase@@@Z @ 0x1C000E4D0 (-InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NW4TokenState@.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000EDCC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0010C50 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C0010E70 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CompositionSurfaceObject::StartCompositionEarly(CompositionSurfaceObject *this, __int64 a2)
{
  char v4; // bl
  struct CCompositionBuffer *v6; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  if ( (int)CPushLock::AcquireLockShared((CompositionSurfaceObject *)((char *)this + 48)) >= 0 )
  {
    v6 = 0LL;
    if ( (int)CCompositionSurface::FindBuffer((CompositionSurfaceObject *)((char *)this + 40), a2, &v6) >= 0 )
      v4 = (*(__int64 (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)v6 + 32LL))(v6);
    CPushLock::ReleaseLock((CompositionSurfaceObject *)((char *)this + 48));
  }
  return v4;
}
