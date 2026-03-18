/*
 * XREFs of MonitorIsBoostRefreshRateEnabledByDefault @ 0x1C01E316C
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01A0EB0 (DxgkDisplayConfigDeviceInfo.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C01B1560 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAXI_N@Z @ 0x1C000F304 (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAXI_N@Z.c)
 */

__int64 __fastcall MonitorIsBoostRefreshRateEnabledByDefault(__int64 a1, unsigned int a2, bool *a3)
{
  struct DXGMONITOR *v4; // rbx
  unsigned int v5; // edi
  struct DXGMONITOR *v7; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 || a2 == -1 || !a3 )
    return 3221225485LL;
  MONITOR_MGR::AcquireMonitorShared(&v7, a1, a2);
  v4 = v7;
  if ( v7 )
  {
    if ( *((_DWORD *)v7 + 78) != 1 )
      WdLogSingleEntry0(1LL);
    *a3 = *((_DWORD *)v4 + 88) != 0;
    v5 = 0;
    ExReleaseResourceLite((PERESOURCE)((char *)v4 + 24));
    KeLeaveCriticalRegion();
  }
  else
  {
    v5 = -1073741632;
    WdLogSingleEntry1(2LL, -1073741632LL);
  }
  return v5;
}
