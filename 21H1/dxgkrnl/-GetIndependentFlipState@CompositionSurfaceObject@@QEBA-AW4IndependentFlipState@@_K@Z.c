/*
 * XREFs of ?GetIndependentFlipState@CompositionSurfaceObject@@QEBA?AW4IndependentFlipState@@_K@Z @ 0x1C0004004
 * Callers:
 *     ?InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z @ 0x1C0004090 (-InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z.c)
 * Callees:
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0004618 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0004704 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C0004758 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CompositionSurfaceObject::GetIndependentFlipState(__int64 a1, unsigned __int64 a2)
{
  unsigned int v4; // ebx
  struct CCompositionBuffer *v6; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  if ( (int)CPushLock::AcquireLockShared((CPushLock *)(a1 + 48)) >= 0 )
  {
    v6 = 0LL;
    if ( (int)CCompositionSurface::FindBuffer((CCompositionSurface *)(a1 + 40), a2, &v6) >= 0 )
      v4 = (*(__int64 (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)v6 + 176LL))(v6);
    CPushLock::ReleaseLock((CPushLock *)(a1 + 48));
  }
  return v4;
}
