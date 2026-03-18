/*
 * XREFs of MonitorGetLinkInfoFromMonitor @ 0x1C021726C
 * Callers:
 *     ?SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z @ 0x1C0029D98 (-SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z.c)
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONITOR__@@@Z @ 0x1C0010D08 (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONI.c)
 *     ?_GetLinkInfo@DXGMONITOR@@QEBAJPEAU_DXGK_MONITORLINKINFO@@@Z @ 0x1C01A69AC (-_GetLinkInfo@DXGMONITOR@@QEBAJPEAU_DXGK_MONITORLINKINFO@@@Z.c)
 */

__int64 __fastcall MonitorGetLinkInfoFromMonitor(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  DXGMONITOR *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
  {
    a2 = -1073741811LL;
LABEL_7:
    WdLogSingleEntry1(2LL, a2);
    return (unsigned int)a2;
  }
  MONITOR_MGR::AcquireMonitorShared(&v5, a1);
  if ( !v5 )
  {
    a2 = -1073741275LL;
    goto LABEL_7;
  }
  LODWORD(a2) = DXGMONITOR::_GetLinkInfo(v5, (struct _DXGK_MONITORLINKINFO *)a2);
  ExReleaseResourceLite((PERESOURCE)(v3 + 24));
  KeLeaveCriticalRegion();
  return (unsigned int)a2;
}
