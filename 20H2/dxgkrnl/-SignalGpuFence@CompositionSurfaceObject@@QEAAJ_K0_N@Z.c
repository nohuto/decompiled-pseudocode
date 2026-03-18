/*
 * XREFs of ?SignalGpuFence@CompositionSurfaceObject@@QEAAJ_K0_N@Z @ 0x1C001C340
 * Callers:
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C0002F70 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 *     ?Discard@CFlipToken@@UEAAXXZ @ 0x1C001ABF0 (-Discard@CFlipToken@@UEAAXXZ.c)
 *     ?SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z @ 0x1C001C21C (-SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z.c)
 *     ?CreateClonedFlipToken@CToken@@SAJ_K0PEAVCompositionSurfaceObject@@PEBUtagCloneableFlipTokenData@@PEAPEAV1@@Z @ 0x1C00634E8 (-CreateClonedFlipToken@CToken@@SAJ_K0PEAVCompositionSurfaceObject@@PEBUtagCloneableFlipTokenData.c)
 *     ?CreateFlipToken@CToken@@CAJ_KPEAVCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C006356C (-CreateFlipToken@CToken@@CAJ_KPEAVCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORY.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000EE2C (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0010CB0 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C0010ED0 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
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
