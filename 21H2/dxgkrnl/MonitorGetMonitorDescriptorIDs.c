/*
 * XREFs of MonitorGetMonitorDescriptorIDs @ 0x1C0206E54
 * Callers:
 *     DpiPdoGetDeviceIdFromDescriptor @ 0x1C0206D64 (DpiPdoGetDeviceIdFromDescriptor.c)
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAXI_N@Z @ 0x1C000F304 (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAXI_N@Z.c)
 *     ?GetMonitorDescriptorPnpIds@MonitorDescriptorState@DxgMonitor@@QEBAJPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z @ 0x1C0207120 (-GetMonitorDescriptorPnpIds@MonitorDescriptorState@DxgMonitor@@QEBAJPEAU_DXGK_GENERIC_DESCRIPTOR.c)
 */

__int64 __fastcall MonitorGetMonitorDescriptorIDs(__int64 a1, __int64 a2, struct _DXGK_GENERIC_DESCRIPTOR *a3)
{
  __int64 v4; // rbx
  __int64 v6; // rax
  DxgMonitor::MonitorDescriptorState **v7; // rbx
  unsigned int MonitorDescriptorPnpIds; // edi
  DxgMonitor::MonitorDescriptorState **v10; // [rsp+30h] [rbp+8h] BYREF

  v4 = (unsigned int)a2;
  v6 = WdLogNewEntry5_WdTrace(a1, a2);
  *(_QWORD *)(v6 + 24) = v4;
  *(_QWORD *)(v6 + 32) = a1;
  if ( !a1 || !a3 || (_DWORD)v4 == -1 )
    return 3221225485LL;
  MONITOR_MGR::AcquireMonitorShared((struct DXGMONITOR **)&v10, a1, v4);
  v7 = v10;
  if ( v10 )
  {
    MonitorDescriptorPnpIds = DxgMonitor::MonitorDescriptorState::GetMonitorDescriptorPnpIds(v10[27], a3);
    ExReleaseResourceLite((PERESOURCE)(v7 + 3));
    KeLeaveCriticalRegion();
  }
  else
  {
    MonitorDescriptorPnpIds = -1073741275;
    WdLogSingleEntry1(2LL, -1073741275LL);
  }
  return MonitorDescriptorPnpIds;
}
