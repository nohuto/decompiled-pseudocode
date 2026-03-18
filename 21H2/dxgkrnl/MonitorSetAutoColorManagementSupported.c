/*
 * XREFs of MonitorSetAutoColorManagementSupported @ 0x1C03B1114
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01A0EB0 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?AcquireMonitorExclusive@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@PEAUHDXGMONITOR__@@@Z @ 0x1C001E350 (-AcquireMonitorExclusive@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@PEAUHDXGMONIT.c)
 *     ?SetAutoColorManagementSupported@MonitorColorState@DxgMonitor@@QEAAJ_N@Z @ 0x1C020997C (-SetAutoColorManagementSupported@MonitorColorState@DxgMonitor@@QEAAJ_N@Z.c)
 *     ?EdidSupportsHDR@MonitorColorState@DxgMonitor@@QEBA_NXZ @ 0x1C0209C5C (-EdidSupportsHDR@MonitorColorState@DxgMonitor@@QEBA_NXZ.c)
 */

__int64 __fastcall MonitorSetAutoColorManagementSupported(struct HDXGMONITOR__ *a1, char a2)
{
  __int64 v4; // rbx
  unsigned int v5; // edi
  DxgMonitor::MonitorColorState *v6; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    MONITOR_MGR::AcquireMonitorExclusive(&v7, a1);
    v4 = v7;
    if ( v7 )
    {
      if ( !DxgMonitor::MonitorColorState::EdidSupportsHDR(*(DxgMonitor::MonitorColorState **)(v7 + 224)) )
        DxgMonitor::MonitorColorState::SetAutoColorManagementSupported(v6, a2 != 0);
      v5 = 0;
      ExReleaseResourceLite((PERESOURCE)(v4 + 24));
      KeLeaveCriticalRegion();
    }
    else
    {
      v5 = -1073741275;
      WdLogSingleEntry1(2LL, -1073741275LL);
    }
    return v5;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    return 3221225485LL;
  }
}
