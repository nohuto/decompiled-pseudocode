/*
 * XREFs of ?GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ @ 0x1C0006928
 * Callers:
 *     ?InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@PEAVDXGDEVICE@@@Z @ 0x1C00DAE14 (-InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@PEAVDXGDEVICE@@@Z.c)
 *     ?MapGpuVaForPagingProcess@DXGDEVICESYNCOBJECT@@QEAAJIPEA_K@Z @ 0x1C00E5B48 (-MapGpuVaForPagingProcess@DXGDEVICESYNCOBJECT@@QEAAJIPEA_K@Z.c)
 *     ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C0112F20 (-DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x1C026C59C (-Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z.c)
 *     ?DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C02934BC (-DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?UnmapGpuVaForPagingProcess@DXGDEVICESYNCOBJECT@@QEAAXI@Z @ 0x1C02935C4 (-UnmapGpuVaForPagingProcess@DXGDEVICESYNCOBJECT@@QEAAXI@Z.c)
 * Callees:
 *     <none>
 */

struct VIDMM_MONITORED_FENCE_STORAGE *__fastcall DXGSYNCOBJECT::GetMonitoredFenceStorage(
        DXGSYNCOBJECT *this,
        __int64 a2)
{
  __int64 v4; // rax

  if ( (unsigned int)(*((_DWORD *)this + 48) - 5) > 1 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v4 + 24) = 353LL;
    WdLogEvent5_WdAssertion(v4);
  }
  return (DXGSYNCOBJECT *)((char *)this + 120);
}
