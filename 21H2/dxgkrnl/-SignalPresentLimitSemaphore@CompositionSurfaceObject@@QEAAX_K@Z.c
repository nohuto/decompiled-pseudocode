/*
 * XREFs of ?SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z @ 0x1C00057A0
 * Callers:
 *     ?SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z @ 0x1C00056EC (-SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z.c)
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C000AC70 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 *     ?Discard@CFlipToken@@UEAAXXZ @ 0x1C0019150 (-Discard@CFlipToken@@UEAAXXZ.c)
 *     ?CreateFlipToken@CToken@@CAJ_KPEAVCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C00765C8 (-CreateFlipToken@CToken@@CAJ_KPEAVCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORY.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00069FC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0006A48 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CompositionSurfaceObject::SignalPresentLimitSemaphore(CompositionSurfaceObject *this, __int64 a2)
{
  CompositionSurfaceObject *i; // rax

  if ( (int)CPushLock::AcquireLockShared((CompositionSurfaceObject *)((char *)this + 48)) >= 0 )
  {
    if ( *((_DWORD *)this + 32) )
    {
      for ( i = (CompositionSurfaceObject *)*((_QWORD *)this + 14);
            i != (CompositionSurfaceObject *)((char *)this + 112);
            i = *(CompositionSurfaceObject **)i )
      {
        if ( *((_QWORD *)i - 1) == a2 )
        {
          (*(void (__fastcall **)(__int64))(*((_QWORD *)i - 3) + 112LL))((__int64)i - 24);
          break;
        }
      }
    }
    CPushLock::ReleaseLock((CompositionSurfaceObject *)((char *)this + 48));
  }
}
