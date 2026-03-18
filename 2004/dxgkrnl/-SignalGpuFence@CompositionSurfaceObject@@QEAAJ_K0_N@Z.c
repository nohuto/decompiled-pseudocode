/*
 * XREFs of ?SignalGpuFence@CompositionSurfaceObject@@QEAAJ_K0_N@Z @ 0x1C001C2E0
 * Callers:
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C0002F70 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 *     ?Discard@CFlipToken@@UEAAXXZ @ 0x1C001AB90 (-Discard@CFlipToken@@UEAAXXZ.c)
 *     ?SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z @ 0x1C001C1BC (-SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z.c)
 *     ?CreateClonedFlipToken@CToken@@SAJ_K0PEAVCompositionSurfaceObject@@PEBUtagCloneableFlipTokenData@@PEAPEAV1@@Z @ 0x1C0063618 (-CreateClonedFlipToken@CToken@@SAJ_K0PEAVCompositionSurfaceObject@@PEBUtagCloneableFlipTokenData.c)
 *     ?CreateFlipToken@CToken@@CAJ_KPEAVCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C006369C (-CreateFlipToken@CToken@@CAJ_KPEAVCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORY.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000EDCC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0010C50 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C0010E70 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CompositionSurfaceObject::SignalGpuFence(
        CompositionSurfaceObject *this,
        __int64 a2,
        __int64 a3,
        char a4)
{
  int Buffer; // ebx
  __int64 v9; // r8
  struct CCompositionBuffer *v11; // [rsp+40h] [rbp+8h] BYREF

  Buffer = CPushLock::AcquireLockShared((CompositionSurfaceObject *)((char *)this + 48));
  if ( Buffer >= 0 )
  {
    v11 = 0LL;
    Buffer = CCompositionSurface::FindBuffer((CompositionSurfaceObject *)((char *)this + 40), a2, &v11);
    if ( Buffer >= 0 )
    {
      LOBYTE(v9) = a4;
      Buffer = (*(__int64 (__fastcall **)(struct CCompositionBuffer *, __int64, __int64))(*(_QWORD *)v11 + 104LL))(
                 v11,
                 a3,
                 v9);
    }
    CPushLock::ReleaseLock((CompositionSurfaceObject *)((char *)this + 48));
  }
  return (unsigned int)Buffer;
}
