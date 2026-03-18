/*
 * XREFs of MonitorSerializeMonitor @ 0x1C03B0C40
 * Callers:
 *     ?SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_MONITORSET_SERIALIZATION@@@DMM@@@Z @ 0x1C03A0444 (-SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_MONITORSET_SER.c)
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONITOR__@@@Z @ 0x1C0010D08 (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONI.c)
 *     ?_SerializeMonitor@DXGMONITOR@@QEBAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z @ 0x1C03B59EC (-_SerializeMonitor@DXGMONITOR@@QEBAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z.c)
 */

__int64 __fastcall MonitorSerializeMonitor(__int64 a1, unsigned __int64 *a2, struct _DMM_MONITOR_SERIALIZATION *a3)
{
  DXGMONITOR *v5; // rbx
  unsigned int v6; // edi
  DXGMONITOR *v8; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  MONITOR_MGR::AcquireMonitorShared(&v8, a1);
  v5 = v8;
  if ( v8 )
  {
    v6 = DXGMONITOR::_SerializeMonitor(v8, a2, a3);
    ExReleaseResourceLite((PERESOURCE)((char *)v5 + 24));
    KeLeaveCriticalRegion();
  }
  else
  {
    v6 = -1073741275;
    WdLogSingleEntry1(2LL, -1073741275LL);
  }
  return v6;
}
