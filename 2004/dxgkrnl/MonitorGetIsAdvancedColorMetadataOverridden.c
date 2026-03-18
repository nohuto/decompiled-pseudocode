/*
 * XREFs of MonitorGetIsAdvancedColorMetadataOverridden @ 0x1C02F390C
 * Callers:
 *     ?PopulateHDRMetadataFromDisplay@@YAJIPEAVADAPTER_DISPLAY@@PEAU_D3DDDI_HDR_METADATA_HDR10@@PEAW4_D3DDDI_HDR_METADATA_TYPE@@@Z @ 0x1C00DB840 (-PopulateHDRMetadataFromDisplay@@YAJIPEAVADAPTER_DISPLAY@@PEAU_D3DDDI_HDR_METADATA_HDR10@@PEAW4_.c)
 *     ?PopulateHDRMetadataFromDisplay@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAPEAEPEAW4_D3DDDI_HDR_METADATA_TYPE@@PEAI@Z @ 0x1C02A3B70 (-PopulateHDRMetadataFromDisplay@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAPEAEPEAW4_D3DDDI.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0009754 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetIsAdvancedColorMetadataOverridden(struct HDXGMONITOR__ *a1, bool *a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGMONITOR *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  struct DXGMONITOR *v11; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  v11 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v11);
  if ( (int)result >= 0 )
  {
    v6 = v11;
    if ( !v11 )
    {
      v7 = WdLogNewEntry5_WdAssertion(v5, v4);
      WdLogEvent5_WdAssertion(v7);
      v10 = WdLogNewEntry5_WdAssertion(v9, v8);
      WdLogEvent5_WdAssertion(v10);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v6 + 296), 1u);
    *a2 = *((_BYTE *)v6 + 796) != 0;
    ExReleaseResourceLite((PERESOURCE)((char *)v6 + 296));
    KeLeaveCriticalRegion();
    return 0LL;
  }
  return result;
}
