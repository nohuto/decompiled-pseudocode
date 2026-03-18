/*
 * XREFs of ?GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ @ 0x1C000C188
 * Callers:
 *     ?MapGpuVaForPagingProcess@DXGDEVICESYNCOBJECT@@QEAAJIPEA_K@Z @ 0x1C016A964 (-MapGpuVaForPagingProcess@DXGDEVICESYNCOBJECT@@QEAAJIPEA_K@Z.c)
 *     ?Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I@Z @ 0x1C018654C (-Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I.c)
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C018692C (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 *     ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C0186AFC (-DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x1C030EDA0 (-Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z.c)
 *     ?DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C03441C0 (-DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?UnmapGpuVaForPagingProcess@DXGDEVICESYNCOBJECT@@QEAAXI@Z @ 0x1C03442C4 (-UnmapGpuVaForPagingProcess@DXGDEVICESYNCOBJECT@@QEAAXI@Z.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

struct VIDMM_MONITORED_FENCE_STORAGE *__fastcall DXGSYNCOBJECT::GetMonitoredFenceStorage(DXGSYNCOBJECT *this)
{
  int v3; // edx
  int v4; // r8d

  if ( (unsigned int)(*((_DWORD *)this + 50) - 5) > 1 )
  {
    WdLogSingleEntry1(1LL, 353LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          0,
          v3,
          v4,
          0,
          2,
          -1,
          (__int64)L"GetSyncObjectType() == D3DDDI_MONITORED_FENCE || GetSyncObjectType() == D3DDDI_PERIODIC_MONITORED_FENCE",
          353LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  return (DXGSYNCOBJECT *)((char *)this + 128);
}
