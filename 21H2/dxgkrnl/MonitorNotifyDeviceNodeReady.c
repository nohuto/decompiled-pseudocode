/*
 * XREFs of MonitorNotifyDeviceNodeReady @ 0x1C020643C
 * Callers:
 *     DpiPdoDispatchPnp @ 0x1C01E4250 (DpiPdoDispatchPnp.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1C02164B8 (DpiPdoHandleChildConnectionChange.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00131F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@PEAVDXGMONITOR@@_N@Z @ 0x1C00135F8 (--0-$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@PEAVDXGMONITOR@@_N@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01579C0 (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXG.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C01A2ECC (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C01E285C (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_GetMonitorDiagInfo@DXGMONITOR@@QEBAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C0207244 (-_GetMonitorDiagInfo@DXGMONITOR@@QEBAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z.c)
 *     ??1MonitorEventDeferral@@UEAA@XZ @ 0x1C0208A3C (--1MonitorEventDeferral@@UEAA@XZ.c)
 *     ?FlushEventsWithContext@MonitorEventDeferral@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0208AB8 (-FlushEventsWithContext@MonitorEventDeferral@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C03B5278 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z.c)
 */

__int64 __fastcall MonitorNotifyDeviceNodeReady(PERESOURCE *this, unsigned int a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  PERESOURCE v9; // rsi
  MONITOR_MGR *Blink; // rsi
  int MonitorInstance; // ebx
  DXGMONITOR *v13; // rbx
  DXGMONITOR *v14; // rdi
  int v15; // r14d
  int v16; // ebx
  DXGMONITOR *v17; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v18; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v22[2]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v23[2]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v24; // [rsp+90h] [rbp-70h]
  __int128 v25; // [rsp+A0h] [rbp-60h]
  __int128 v26; // [rsp+B0h] [rbp-50h]
  int v27; // [rsp+C0h] [rbp-40h]
  _QWORD v28[10]; // [rsp+D0h] [rbp-30h] BYREF

  v3 = a2;
  memset(v28, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v28[1]);
  v28[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v28[3]) = 8;
  LOBYTE(v28[6]) = -1;
  v8 = WdLogNewEntry5_WdTrace(v7, v6);
  *(_QWORD *)(v8 + 24) = v3;
  *(_QWORD *)(v8 + 32) = this;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
    WdLogSingleEntry0(1LL);
  v9 = this[349];
  if ( !v9 )
  {
    WdLogSingleEntry0(1LL);
    v9 = this[349];
  }
  Blink = (MONITOR_MGR *)v9[1].SystemResourcesList.Blink;
  if ( !Blink )
  {
    WdLogSingleEntry1(2LL, this);
    return 3221225485LL;
  }
  v17 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(Blink, v3, 0, &v17);
  if ( MonitorInstance < 0 )
  {
    if ( v17 )
      WdLogSingleEntry0(1LL);
    if ( MonitorInstance != -1073741275 )
      WdLogSingleEntry0(1LL);
    goto LABEL_31;
  }
  v13 = v17;
  if ( !v17 )
    WdLogSingleEntry0(1LL);
  if ( *((_DWORD *)v13 + 78) == 1 )
  {
    v14 = v13;
    v13 = 0LL;
  }
  else
  {
    v14 = (DXGMONITOR *)*((_QWORD *)v13 + 40);
  }
  if ( !v14 || *(_QWORD *)(*((_QWORD *)v14 + 25) + 8LL) != a3 )
  {
LABEL_31:
    WdLogSingleEntry1(7LL, v3);
    return 3221226021LL;
  }
  v27 = 0;
  v23[0] = &MonitorEventDeferral::`vftable';
  v23[1] = (char *)Blink + 8;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  RESOURCE_LOCK<DXGMONITOR>::RESOURCE_LOCK<DXGMONITOR>(&v18, (__int64)v14, 1);
  v15 = DXGMONITOR::_OnMonitorDeviceNodeReady(
          v14,
          (struct DxgMonitor::IMonitorDeferredEventSource *)v23,
          (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v28);
  if ( v18 )
  {
    ExReleaseResourceLite((PERESOURCE)(v18 + 24));
    KeLeaveCriticalRegion();
  }
  MonitorEventDeferral::FlushEventsWithContext(
    (MonitorEventDeferral *)v23,
    (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v28);
  if ( v15 >= 0 && v13 )
  {
    RESOURCE_LOCK<DXGMONITOR>::RESOURCE_LOCK<DXGMONITOR>(&v20, (__int64)v13, 1);
    RESOURCE_LOCK<DXGMONITOR>::RESOURCE_LOCK<DXGMONITOR>(&v19, (__int64)v14, 0);
    DXGMONITOR::_CopyMonitorInformation(v13, v14);
    if ( v19 )
    {
      ExReleaseResourceLite((PERESOURCE)(v19 + 24));
      KeLeaveCriticalRegion();
    }
    if ( v20 )
    {
      ExReleaseResourceLite((PERESOURCE)(v20 + 24));
      KeLeaveCriticalRegion();
    }
  }
  v17 = 0LL;
  memset(v22, 0, sizeof(v22));
  v16 = MONITOR_MGR::_GetMonitorInstance(Blink, v3, 1, &v17);
  if ( v16 >= 0 )
  {
    RESOURCE_LOCK<DXGMONITOR>::RESOURCE_LOCK<DXGMONITOR>(&v21, (__int64)v17, 0);
    DXGMONITOR::_GetMonitorDiagInfo(v17, (struct _DXGK_DIAG_MONITOR_MGR_EXTRA_INFO *)v22);
    if ( v21 )
    {
      ExReleaseResourceLite((PERESOURCE)(v21 + 24));
      KeLeaveCriticalRegion();
    }
  }
  MONITOR_MGR::_LogMonitorPresentEvent((__int64)Blink, 7, v3, v16, v22);
  MonitorEventDeferral::~MonitorEventDeferral((MonitorEventDeferral *)v23);
  return (unsigned int)v16;
}
