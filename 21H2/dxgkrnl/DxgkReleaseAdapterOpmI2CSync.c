/*
 * XREFs of DxgkReleaseAdapterOpmI2CSync @ 0x1C0173AB4
 * Callers:
 *     ?DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z @ 0x1C001CC94 (-DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z.c)
 *     ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX2@Z @ 0x1C0057FA4 (-CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTI.c)
 *     DpiIndirectCbOpmGetSrmListVersion @ 0x1C00582A0 (DpiIndirectCbOpmGetSrmListVersion.c)
 *     DpiIndirectCbOpmSetSrmList @ 0x1C0058430 (DpiIndirectCbOpmSetSrmList.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C0169250 (DpiPdoDispatchInternalIoctl.c)
 * Callees:
 *     ?ReleaseOpmI2CSync@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C0173AEC (-ReleaseOpmI2CSync@ADAPTER_DISPLAY@@QEAAXXZ.c)
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
