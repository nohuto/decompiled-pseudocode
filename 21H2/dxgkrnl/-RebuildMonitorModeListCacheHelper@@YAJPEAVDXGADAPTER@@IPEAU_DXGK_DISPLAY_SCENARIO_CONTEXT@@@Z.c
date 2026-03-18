/*
 * XREFs of ?RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C03AFC58
 * Callers:
 *     MonitorRebuildMonitorModeListCache @ 0x1C03B0A28 (MonitorRebuildMonitorModeListCache.c)
 * Callees:
 *     ?AcquireMonitorExclusive@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@PEAXI_N@Z @ 0x1C001356C (-AcquireMonitorExclusive@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@PEAXI_N@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??1MonitorEventDeferral@@UEAA@XZ @ 0x1C0208A3C (--1MonitorEventDeferral@@UEAA@XZ.c)
 *     ?FlushEventsWithContext@MonitorEventDeferral@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0208AB8 (-FlushEventsWithContext@MonitorEventDeferral@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z @ 0x1C02095AC (-OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z.c)
 */

__int64 __fastcall RebuildMonitorModeListCacheHelper(
        struct DXGADAPTER *a1,
        unsigned int a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  DXGMONITOR *v4; // rbx
  unsigned int v5; // ebx
  unsigned int v6; // edi
  DXGMONITOR *v8; // [rsp+20h] [rbp-29h] BYREF
  void **v9; // [rsp+30h] [rbp-19h] BYREF
  __int128 v10; // [rsp+38h] [rbp-11h]
  __int128 v11; // [rsp+48h] [rbp-1h]
  __int128 v12; // [rsp+58h] [rbp+Fh]
  __int64 v13; // [rsp+68h] [rbp+1Fh]
  int v14; // [rsp+70h] [rbp+27h]

  v9 = &MonitorEventDeferral::`vftable';
  v14 = 0;
  v13 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  MONITOR_MGR::AcquireMonitorExclusive(&v8, (__int64)a1, a2, 0);
  v4 = v8;
  if ( v8 )
  {
    *(_QWORD *)&v10 = (*((_QWORD *)v8 + 21) + 8LL) & -(__int64)(*((_QWORD *)v8 + 21) != 0LL);
    v6 = DXGMONITOR::OnDescriptorUpdated(
           (DxgMonitor::MonitorColorState **)v8,
           (struct DxgMonitor::IMonitorDeferredEventSource *)&v9);
    ExReleaseResourceLite((PERESOURCE)((char *)v4 + 24));
    KeLeaveCriticalRegion();
    MonitorEventDeferral::FlushEventsWithContext((MonitorEventDeferral *)&v9, a3);
    v5 = v6;
  }
  else
  {
    v5 = -1073741275;
    WdLogSingleEntry1(2LL, -1073741275LL);
  }
  MonitorEventDeferral::~MonitorEventDeferral((MonitorEventDeferral *)&v9);
  return v5;
}
