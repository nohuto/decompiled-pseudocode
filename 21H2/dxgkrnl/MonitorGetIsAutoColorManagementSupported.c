/*
 * XREFs of MonitorGetIsAutoColorManagementSupported @ 0x1C01A9AC4
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01A0EB0 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONITOR__@@@Z @ 0x1C0010D08 (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONI.c)
 *     ?IsAutoColorManagementSupported@MonitorColorState@DxgMonitor@@QEBA_NXZ @ 0x1C01A9B2C (-IsAutoColorManagementSupported@MonitorColorState@DxgMonitor@@QEBA_NXZ.c)
 */

__int64 __fastcall MonitorGetIsAutoColorManagementSupported(__int64 a1, __int64 a2)
{
  __int64 v3; // r10
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

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
  *(_BYTE *)a2 = DxgMonitor::MonitorColorState::IsAutoColorManagementSupported(*(DxgMonitor::MonitorColorState **)(v5 + 224));
  LODWORD(a2) = 0;
  ExReleaseResourceLite((PERESOURCE)(v3 + 24));
  KeLeaveCriticalRegion();
  return (unsigned int)a2;
}
