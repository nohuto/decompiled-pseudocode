/*
 * XREFs of MonitorIsPhysicalMonitor @ 0x1C02172D0
 * Callers:
 *     ?SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z @ 0x1C0029D98 (-SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z.c)
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONITOR__@@@Z @ 0x1C0010D08 (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONI.c)
 */

bool __fastcall MonitorIsPhysicalMonitor(__int64 a1)
{
  bool v1; // bl
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( !a1 )
    return 0;
  MONITOR_MGR::AcquireMonitorShared(&v3, a1);
  if ( v3 )
  {
    v1 = *(_DWORD *)(v3 + 312) == 1;
    ExReleaseResourceLite((PERESOURCE)(v3 + 24));
    KeLeaveCriticalRegion();
  }
  return v1;
}
