/*
 * XREFs of MonitorIsMonitorVirtualModeDisabled @ 0x1C03B07D0
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01A0EB0 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAXI_N@Z @ 0x1C000F304 (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAXI_N@Z.c)
 *     ?_IsVirtualModeSupportDisabled@DXGMONITOR@@QEBA_NXZ @ 0x1C01A5490 (-_IsVirtualModeSupportDisabled@DXGMONITOR@@QEBA_NXZ.c)
 */

__int64 __fastcall MonitorIsMonitorVirtualModeDisabled(__int64 a1, unsigned int a2, char *a3)
{
  DXGMONITOR *v4; // rbx
  unsigned int v5; // edi
  DXGMONITOR *v7; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 || a2 == -1 || !a3 )
    return 3221225485LL;
  MONITOR_MGR::AcquireMonitorShared(&v7, a1, a2);
  v4 = v7;
  if ( v7 )
  {
    if ( *((_DWORD *)v7 + 78) != 1 )
      WdLogSingleEntry0(1LL);
    *a3 = DXGMONITOR::_IsVirtualModeSupportDisabled(v4);
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
