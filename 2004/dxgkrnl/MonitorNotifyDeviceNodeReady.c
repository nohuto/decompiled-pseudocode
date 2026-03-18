/*
 * XREFs of MonitorNotifyDeviceNodeReady @ 0x1C018AF40
 * Callers:
 *     DpiPdoDispatchPnp @ 0x1C0163780 (DpiPdoDispatchPnp.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1C0175228 (DpiPdoHandleChildConnectionChange.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000B3EC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     ?_GetAttachedPhysicalMonitor@DXGMONITOR@@QEAAPEAV1@XZ @ 0x1C005D0E8 (-_GetAttachedPhysicalMonitor@DXGMONITOR@@QEAAPEAV1@XZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0126488 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C015CCDC (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0187EFC (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_GetMonitorDiagInfo@DXGMONITOR@@QEAAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C018A8C4 (-_GetMonitorDiagInfo@DXGMONITOR@@QEAAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z.c)
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C02F9678 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z.c)
 */

__int64 __fastcall MonitorNotifyDeviceNodeReady(PERESOURCE *this, unsigned int a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  PERESOURCE v13; // rax
  struct _FAST_MUTEX *SpinLock; // r14
  struct DXGMONITOR *AttachedPhysicalMonitor; // rsi
  int MonitorInstance; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  DXGMONITOR *v19; // rdi
  int v20; // ebx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // ebx
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // esi
  struct DXGMONITOR *v27; // rdi
  __int64 v28; // r8
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  DXGMONITOR *v38; // [rsp+30h] [rbp-69h] BYREF
  struct DXGMONITOR *v39; // [rsp+38h] [rbp-61h] BYREF
  _OWORD v40[2]; // [rsp+40h] [rbp-59h] BYREF
  _QWORD v41[10]; // [rsp+60h] [rbp-39h] BYREF

  v3 = a2;
  memset(v41, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v41[1]);
  v41[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v41[3]) = 8;
  LOBYTE(v41[6]) = -1;
  v10 = WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
  *(_QWORD *)(v10 + 24) = v3;
  *(_QWORD *)(v10 + 32) = this;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    v30 = WdLogNewEntry5_WdAssertion(v12, v11);
    WdLogEvent5_WdAssertion(v30);
  }
  v13 = this[337];
  if ( !v13 )
  {
    v31 = WdLogNewEntry5_WdAssertion(v12, v11);
    WdLogEvent5_WdAssertion(v31);
    v13 = this[337];
  }
  SpinLock = (struct _FAST_MUTEX *)v13->SpinLock;
  if ( !SpinLock )
  {
    v32 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v32 + 24) = this;
    WdLogEvent5_WdError(v32);
    return 3221225485LL;
  }
  v38 = 0LL;
  AttachedPhysicalMonitor = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(SpinLock, (unsigned int)v3, 0, &v38);
  v19 = v38;
  v20 = MonitorInstance;
  if ( MonitorInstance < 0 )
  {
    if ( v38 )
    {
      v34 = WdLogNewEntry5_WdAssertion(v18, v17);
      WdLogEvent5_WdAssertion(v34);
    }
    if ( v20 == -1073741275 )
      goto LABEL_27;
    v35 = WdLogNewEntry5_WdAssertion(v18, v17);
    WdLogEvent5_WdAssertion(v35);
  }
  else
  {
    if ( !v38 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v18, v17);
      WdLogEvent5_WdAssertion(v33);
    }
    if ( *((_DWORD *)v19 + 108) == 1 )
    {
      AttachedPhysicalMonitor = v19;
      v19 = 0LL;
    }
    else
    {
      AttachedPhysicalMonitor = DXGMONITOR::_GetAttachedPhysicalMonitor(v19, v17);
    }
  }
  if ( !AttachedPhysicalMonitor || *((_QWORD *)AttachedPhysicalMonitor + 7) != a3 )
  {
LABEL_27:
    v37 = WdLogNewEntry5_WdDmmEvent(v18, v17);
    *(_QWORD *)(v37 + 24) = v3;
    WdLogEvent5_WdDmmEvent(v37);
    return 3221226021LL;
  }
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)((char *)AttachedPhysicalMonitor + 296), 1u);
  v23 = DXGMONITOR::_OnMonitorDeviceNodeReady(
          AttachedPhysicalMonitor,
          (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v41,
          v21,
          v22);
  ExReleaseResourceLite((PERESOURCE)((char *)AttachedPhysicalMonitor + 296));
  KeLeaveCriticalRegion();
  if ( v23 >= 0 && v19 )
  {
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v19 + 296), 1u);
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)AttachedPhysicalMonitor + 296), 1u);
    DXGMONITOR::_CopyMonitorInformation(v19, AttachedPhysicalMonitor);
    ExReleaseResourceLite((PERESOURCE)((char *)AttachedPhysicalMonitor + 296));
    KeLeaveCriticalRegion();
    ExReleaseResourceLite((PERESOURCE)((char *)v19 + 296));
    KeLeaveCriticalRegion();
  }
  v39 = 0LL;
  memset(v40, 0, sizeof(v40));
  v26 = MONITOR_MGR::_GetMonitorInstance(SpinLock, (unsigned int)v3, 1, &v39);
  if ( v26 >= 0 )
  {
    v27 = v39;
    if ( !v39 )
    {
      v36 = WdLogNewEntry5_WdAssertion(v25, v24);
      WdLogEvent5_WdAssertion(v36);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v27 + 296), 1u);
    DXGMONITOR::_GetMonitorDiagInfo(v27, (struct _DXGK_DIAG_MONITOR_MGR_EXTRA_INFO *)v40, v28);
    ExReleaseResourceLite((PERESOURCE)((char *)v27 + 296));
    KeLeaveCriticalRegion();
  }
  MONITOR_MGR::_LogMonitorPresentEvent((__int64)SpinLock, 7LL, v3, v26, v40);
  return (unsigned int)v26;
}
