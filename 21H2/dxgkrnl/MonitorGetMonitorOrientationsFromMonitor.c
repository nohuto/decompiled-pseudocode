/*
 * XREFs of MonitorGetMonitorOrientationsFromMonitor @ 0x1C0165F90
 * Callers:
 *     DxgkGetMonitorInternalInfo @ 0x1C01659C0 (DxgkGetMonitorInternalInfo.c)
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONITOR__@@@Z @ 0x1C0010D08 (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONI.c)
 *     ?_GetMonitorOrientation@DXGMONITOR@@QEBAJPEAK0@Z @ 0x1C0166004 (-_GetMonitorOrientation@DXGMONITOR@@QEBAJPEAK0@Z.c)
 */

__int64 __fastcall MonitorGetMonitorOrientationsFromMonitor(__int64 a1, unsigned int *a2, __int64 a3)
{
  __int64 v5; // rcx
  DXGMONITOR *v7; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
  {
    a3 = -1073741811LL;
LABEL_7:
    WdLogSingleEntry1(2LL, a3);
    return (unsigned int)a3;
  }
  MONITOR_MGR::AcquireMonitorShared(&v7, a1);
  if ( !v7 )
  {
    a3 = -1073741275LL;
    goto LABEL_7;
  }
  LODWORD(a3) = DXGMONITOR::_GetMonitorOrientation(v7, a2, (unsigned int *)a3);
  ExReleaseResourceLite((PERESOURCE)(v5 + 24));
  KeLeaveCriticalRegion();
  return (unsigned int)a3;
}
