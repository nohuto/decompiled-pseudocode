/*
 * XREFs of ?DisableStablePowerState@DXGADAPTER@@QEAAXXZ @ 0x1C02085DC
 * Callers:
 *     ?DisableStablePowerState@DXGGLOBAL@@QEAAXXZ @ 0x1C02649E4 (-DisableStablePowerState@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ?ReleaseStablePowerReferenceWithoutLock@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0036EE8 (-ReleaseStablePowerReferenceWithoutLock@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXIK@Z @ 0x1C00379D4 (-SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXIK@Z.c)
 *     ?DisableStablePState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x1C0045ADC (-DisableStablePState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::DisableStablePowerState(DXGADAPTER *this)
{
  unsigned int i; // edi
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx
  ADAPTER_RENDER *v6; // rcx

  if ( *((_BYTE *)this + 3215) )
  {
    for ( i = 0; i < *((_DWORD *)this + 730); ++i )
    {
      v3 = 520LL * i;
      v4 = *((_QWORD *)this + 347);
      if ( !*(_DWORD *)(v3 + v4 + 208) )
      {
        v5 = *(_QWORD *)(v3 + v4 + 512);
        if ( v5 )
          DXGPOWERSTATISTICSTRANSITIONENGINE::DisableStablePState((KSPIN_LOCK *)(v5 + 136));
        DXGADAPTER::SetPowerComponentIdleCBInternal(this, i, 0);
      }
    }
    v6 = (ADAPTER_RENDER *)*((_QWORD *)this + 335);
    if ( v6 )
      ADAPTER_RENDER::ReleaseStablePowerReferenceWithoutLock(v6);
    *((_BYTE *)this + 3215) = 0;
  }
}
