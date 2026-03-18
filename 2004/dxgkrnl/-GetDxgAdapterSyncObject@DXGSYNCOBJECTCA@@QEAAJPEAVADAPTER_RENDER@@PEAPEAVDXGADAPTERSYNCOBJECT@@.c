/*
 * XREFs of ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0290730
 * Callers:
 *     DxgkSignalSynchronizationObjectFromGpuByReference @ 0x1C00E8A20 (DxgkSignalSynchronizationObjectFromGpuByReference.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z @ 0x1C00EBBA0 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C00FAFA0 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C010E240 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C029069C (-GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_GDXGADAPTERSYNCOBJECTCA@@QEAAPEAXI@Z @ 0x1C00482F0 (--_GDXGADAPTERSYNCOBJECTCA@@QEAAPEAXI@Z.c)
 *     ?FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z @ 0x1C0048358 (-FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@PEAVDXGDEVICE@@@Z @ 0x1C00DBDA4 (-InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@PEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DXGSYNCOBJECTCA::GetDxgAdapterSyncObject(
        DXGSYNCOBJECTCA *this,
        struct ADAPTER_RENDER *a2,
        struct DXGADAPTERSYNCOBJECT **a3)
{
  int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  DXGADAPTERSYNCOBJECT *AdapterObject; // rbx
  __int64 v10; // rax
  DXGADAPTERSYNCOBJECT *v11; // rax

  v6 = 0;
  AdapterObject = DXGSYNCOBJECTCA::FindAdapterObject(this, a2);
  if ( AdapterObject || !v7 )
    goto LABEL_12;
  if ( (*(_DWORD *)(v8 + 196) & 4) == 0 )
  {
    v10 = WdLogNewEntry5_WdAssertion(v8, v7);
    *(_QWORD *)(v10 + 24) = 2175LL;
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = (DXGADAPTERSYNCOBJECT *)operator new[](0x48uLL, 0x4B677844u, PagedPool);
  AdapterObject = v11;
  if ( v11 )
  {
    *((_QWORD *)v11 + 2) = a2;
    *(_OWORD *)v11 = 0LL;
    *((_QWORD *)v11 + 4) = 0LL;
    *((_QWORD *)v11 + 5) = 0LL;
    *((_WORD *)v11 + 12) = 0;
    *((_BYTE *)v11 + 26) = 0;
    *((_QWORD *)v11 + 8) = this;
    *((_OWORD *)v11 + 3) = 0LL;
  }
  else
  {
    AdapterObject = 0LL;
  }
  if ( !AdapterObject )
    return 3221225495LL;
  v6 = DXGADAPTERSYNCOBJECT::InitializeAdapterObject(AdapterObject, this, 0LL);
  if ( v6 >= 0 )
LABEL_12:
    *a3 = AdapterObject;
  else
    DXGADAPTERSYNCOBJECTCA::`scalar deleting destructor'(AdapterObject);
  return (unsigned int)v6;
}
