/*
 * XREFs of ?DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C028FFAC
 * Callers:
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C0112870 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 * Callees:
 *     ?GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ @ 0x1C000DC14 (-GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C011B948 (-DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICESYNCOBJECT::DetachGlobalSyncObjectOnError(DXGSYNCOBJECT **this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rbx
  struct VIDMM_MONITORED_FENCE_STORAGE *MonitoredFenceStorage; // rax
  DXGSYNCOBJECT *v7; // rax

  DXGDEVICESYNCOBJECT::DestroyCoreState((DXGDEVICESYNCOBJECT *)this);
  if ( this[7] )
  {
    v2 = (__int64)this[2];
    v3 = *(_QWORD *)(*(_QWORD *)(v2 + 40) + 64LL);
    if ( v3 )
      v4 = *(_QWORD *)(v3 + 8);
    else
      v4 = 0LL;
    v5 = *(_QWORD *)(*(_QWORD *)(v2 + 16) + 640LL);
    MonitoredFenceStorage = DXGSYNCOBJECT::GetMonitoredFenceStorage(this[4], v2);
    (*(void (__fastcall **)(__int64, struct VIDMM_MONITORED_FENCE_STORAGE *))(*(_QWORD *)(v5 + 8) + 960LL))(
      v4,
      MonitoredFenceStorage);
    this[7] = 0LL;
  }
  v7 = this[4];
  if ( v7 )
  {
    _InterlockedDecrement((volatile signed __int32 *)v7 + 6);
    this[4] = 0LL;
  }
}
