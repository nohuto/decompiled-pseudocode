/*
 * XREFs of MonitorIsMonitorAndDriverWCGCapable @ 0x1C01A68E8
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01A0EB0 (DxgkDisplayConfigDeviceInfo.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C01B1560 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONITOR__@@@Z @ 0x1C0010D08 (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONI.c)
 *     ?_GetLinkInfo@DXGMONITOR@@QEBAJPEAU_DXGK_MONITORLINKINFO@@@Z @ 0x1C01A69AC (-_GetLinkInfo@DXGMONITOR@@QEBAJPEAU_DXGK_MONITORLINKINFO@@@Z.c)
 *     ?GetMonitorAndLinkWcgCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLINKINFO@@AEA_N@Z @ 0x1C01DE228 (-GetMonitorAndLinkWcgCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLINKINFO@@AEA_N.c)
 */

__int64 __fastcall MonitorIsMonitorAndDriverWCGCapable(__int64 a1, _BYTE *a2)
{
  DXGMONITOR *v3; // rbx
  int LinkInfo; // eax
  DxgMonitor::MonitorColorState *v5; // rcx
  unsigned int v6; // edi
  struct _DXGK_MONITORLINKINFO v8; // [rsp+20h] [rbp-18h] BYREF
  DXGMONITOR *v9; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  *a2 = 0;
  MONITOR_MGR::AcquireMonitorShared(&v9, a1);
  v3 = v9;
  if ( !v9 )
  {
    v6 = -1073741275;
    WdLogSingleEntry1(2LL, -1073741275LL);
    goto LABEL_7;
  }
  *(_QWORD *)&v8.UsageHints.0 = 0LL;
  v8.DitheringSupport.Value = 0;
  LinkInfo = DXGMONITOR::_GetLinkInfo(v9, &v8);
  if ( LinkInfo != -1073741275 )
  {
    if ( LinkInfo < 0 )
    {
      v6 = LinkInfo;
      goto LABEL_7;
    }
    v5 = (DxgMonitor::MonitorColorState *)*((_QWORD *)v3 + 28);
    LOBYTE(v9) = *a2 != 0;
    DxgMonitor::MonitorColorState::GetMonitorAndLinkWcgCapable(v5, &v8, (bool *)&v9);
    *a2 = (_BYTE)v9;
  }
  v6 = 0;
LABEL_7:
  if ( v3 )
  {
    ExReleaseResourceLite((PERESOURCE)((char *)v3 + 24));
    KeLeaveCriticalRegion();
  }
  return v6;
}
