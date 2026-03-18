/*
 * XREFs of DxgkReleaseAdapterOpmI2CSync @ 0x1C016F31C
 * Callers:
 *     ?DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z @ 0x1C001C6B4 (-DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z.c)
 *     ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX2@Z @ 0x1C0057154 (-CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTI.c)
 *     DpiIndirectCbOpmGetSrmListVersion @ 0x1C0057450 (DpiIndirectCbOpmGetSrmListVersion.c)
 *     DpiIndirectCbOpmSetSrmList @ 0x1C00575E0 (DpiIndirectCbOpmSetSrmList.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C0164280 (DpiPdoDispatchInternalIoctl.c)
 * Callees:
 *     ?ReleaseOpmI2CSync@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C016F354 (-ReleaseOpmI2CSync@ADAPTER_DISPLAY@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkReleaseAdapterOpmI2CSync(__int64 a1, __int64 a2)
{
  ADAPTER_DISPLAY *v3; // rcx
  __int64 v5; // rax
  unsigned int v6; // ebx

  if ( a1 )
  {
    v3 = *(ADAPTER_DISPLAY **)(a1 + 2696);
    if ( v3 )
    {
      ADAPTER_DISPLAY::ReleaseOpmI2CSync(v3);
      return 0LL;
    }
    v5 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v5 + 24) = a1;
    v6 = -1073741637;
    *(_QWORD *)(v5 + 32) = -1073741637LL;
  }
  else
  {
    v5 = WdLogNewEntry5_WdError(0LL, a2);
    v6 = -1073741811;
    *(_QWORD *)(v5 + 24) = -1073741811LL;
  }
  WdLogEvent5_WdError(v5);
  return v6;
}
