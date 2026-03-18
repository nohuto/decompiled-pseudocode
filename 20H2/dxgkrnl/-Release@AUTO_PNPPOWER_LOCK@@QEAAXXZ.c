/*
 * XREFs of ?Release@AUTO_PNPPOWER_LOCK@@QEAAXXZ @ 0x1C001E370
 * Callers:
 *     DpiMiracastQueryMiracastSupportForFDO @ 0x1C0170784 (DpiMiracastQueryMiracastSupportForFDO.c)
 *     ?DpiIndirectCbDisableRenderD3RequestsWorker@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C02D33E0 (-DpiIndirectCbDisableRenderD3RequestsWorker@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 *     ?DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LOCK@@PEAPEAU_FDO_CONTEXT@@@Z @ 0x1C02D3998 (-DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LO.c)
 *     DxgkHandleIndirectEscape @ 0x1C02D4700 (DxgkHandleIndirectEscape.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C00E103C (DpiEnableD3Requests.c)
 */

void __fastcall AUTO_PNPPOWER_LOCK::Release(AUTO_PNPPOWER_LOCK *this)
{
  __int64 v2; // rcx

  if ( *((_BYTE *)this + 10) )
  {
    v2 = *(_QWORD *)this;
    if ( *(_BYTE *)(v2 + 484) )
    {
      DpiEnableD3Requests(*(_QWORD *)(v2 + 24));
      v2 = *(_QWORD *)this;
    }
    ExReleaseResourceLite(*(PERESOURCE *)(v2 + 168));
    KeLeaveCriticalRegion();
    *((_BYTE *)this + 10) = 0;
  }
}
