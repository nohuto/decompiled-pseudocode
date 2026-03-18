/*
 * XREFs of ?AcquireExclusive@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C003AE30
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01142B4 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?SignalCrossAdapterSyncObjects@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0216EF0 (-SignalCrossAdapterSyncObjects@ADAPTER_RENDER@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGSYNCOBJECTLOCK::AcquireExclusive(DXGSYNCOBJECTLOCK *this, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx

  if ( *((_BYTE *)this + 8) )
  {
    v3 = WdLogNewEntry5_WdCriticalError(this, a2);
    *(_QWORD *)(v3 + 24) = 275LL;
    *(_QWORD *)(v3 + 32) = 4LL;
    *(_QWORD *)(v3 + 40) = this;
    *(_OWORD *)(v3 + 48) = 0LL;
    WdLogEvent5_WdCriticalError(v3);
  }
  v4 = *(_QWORD *)this;
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v4 + 520), 1u);
  *((_BYTE *)this + 8) = 1;
}
