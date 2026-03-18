/*
 * XREFs of ?SignalGpuFence@CompositionSurfaceObject@@QEAAJ_K0_N@Z @ 0x1C0004FF8
 * Callers:
 *     ?SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z @ 0x1C00056EC (-SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z.c)
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C000AC70 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 *     ?Discard@CFlipToken@@UEAAXXZ @ 0x1C0019150 (-Discard@CFlipToken@@UEAAXXZ.c)
 *     ?CreateClonedFlipToken@CToken@@SAJ_K0PEAVCompositionSurfaceObject@@PEBUtagCloneableFlipTokenData@@PEAPEAV1@@Z @ 0x1C0076544 (-CreateClonedFlipToken@CToken@@SAJ_K0PEAVCompositionSurfaceObject@@PEBUtagCloneableFlipTokenData.c)
 *     ?CreateFlipToken@CToken@@CAJ_KPEAVCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C00765C8 (-CreateFlipToken@CToken@@CAJ_KPEAVCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORY.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00069FC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0006A48 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CompositionSurfaceObject::SignalGpuFence(
        CompositionSurfaceObject *this,
        __int64 a2,
        __int64 a3,
        char a4)
{
  int v8; // ebx
  __int64 v9; // r8
  CompositionSurfaceObject *i; // rax

  v8 = CPushLock::AcquireLockShared((CompositionSurfaceObject *)((char *)this + 48));
  if ( v8 >= 0 )
  {
    if ( *((_DWORD *)this + 32) )
    {
      for ( i = (CompositionSurfaceObject *)*((_QWORD *)this + 14);
            i != (CompositionSurfaceObject *)((char *)this + 112);
            i = *(CompositionSurfaceObject **)i )
      {
        if ( *((_QWORD *)i - 1) == a2 )
        {
          LOBYTE(v9) = a4;
          v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*((_QWORD *)i - 3) + 104LL))(
                 (__int64)i - 24,
                 a3,
                 v9);
          goto LABEL_7;
        }
      }
    }
    v8 = -1073741275;
LABEL_7:
    CPushLock::ReleaseLock((CompositionSurfaceObject *)((char *)this + 48));
  }
  return (unsigned int)v8;
}
