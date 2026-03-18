/*
 * XREFs of ?EnableStablePowerState@DXGADAPTER@@QEAAXXZ @ 0x1C02BB714
 * Callers:
 *     ?EnableStablePowerState@DXGGLOBAL@@QEAAXXZ @ 0x1C0309E28 (-EnableStablePowerState@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ?SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z @ 0x1C0014C64 (-SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z.c)
 *     ?EnableStablePState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x1C0056A80 (-EnableStablePState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ.c)
 *     ?AddStablePowerReference@ADAPTER_RENDER@@QEAAXXZ @ 0x1C02C314C (-AddStablePowerReference@ADAPTER_RENDER@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::EnableStablePowerState(ADAPTER_RENDER **this)
{
  unsigned int i; // edi
  __int64 v3; // rsi
  __int64 v4; // rcx
  ADAPTER_RENDER *v5; // rdi

  for ( i = 0; i < *((_DWORD *)this + 760); ++i )
  {
    v3 = 520LL * i;
    if ( !*(_DWORD *)((char *)this[362] + v3 + 208) )
    {
      DXGADAPTER::SetPowerComponentActiveCBInternal((DXGADAPTER *)this, i, 1u, 0);
      v4 = *(_QWORD *)((char *)this[362] + v3 + 512);
      if ( v4 )
        DXGPOWERSTATISTICSTRANSITIONENGINE::EnableStablePState((KSPIN_LOCK *)(v4 + 136));
    }
  }
  v5 = this[350];
  *((_BYTE *)this + 3335) = 1;
  if ( v5 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)v5 + 1672, 0LL);
    *((_QWORD *)v5 + 210) = KeGetCurrentThread();
    ADAPTER_RENDER::AddStablePowerReference(v5);
    *((_QWORD *)v5 + 210) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v5 + 1672, 0LL);
    KeLeaveCriticalRegion();
  }
}
