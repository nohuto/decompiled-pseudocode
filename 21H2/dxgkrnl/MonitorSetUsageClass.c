/*
 * XREFs of MonitorSetUsageClass @ 0x1C03B14A8
 * Callers:
 *     ?DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02CEE60 (-DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_.c)
 * Callees:
 *     ?AcquireMonitorExclusive@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@PEAXI_N@Z @ 0x1C001356C (-AcquireMonitorExclusive@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@PEAXI_N@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??1MonitorEventDeferral@@UEAA@XZ @ 0x1C0208A3C (--1MonitorEventDeferral@@UEAA@XZ.c)
 *     ?FlushEventsWithContext@MonitorEventDeferral@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0208AB8 (-FlushEventsWithContext@MonitorEventDeferral@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?OnUsageUpdated@DXGMONITOR@@QEAAXAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z @ 0x1C020B690 (-OnUsageUpdated@DXGMONITOR@@QEAAXAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z.c)
 */

__int64 __fastcall MonitorSetUsageClass(__int64 a1, unsigned int a2, int a3, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  unsigned int v6; // ebx
  DXGMONITOR *v7; // rbx
  __int64 v8; // rax
  DXGMONITOR *v10; // [rsp+20h] [rbp-29h] BYREF
  void **v11; // [rsp+30h] [rbp-19h] BYREF
  __int128 v12; // [rsp+38h] [rbp-11h]
  __int128 v13; // [rsp+48h] [rbp-1h]
  __int128 v14; // [rsp+58h] [rbp+Fh]
  __int64 v15; // [rsp+68h] [rbp+1Fh]
  int v16; // [rsp+70h] [rbp+27h]

  if ( a1 )
  {
    v11 = &MonitorEventDeferral::`vftable';
    v16 = 0;
    v15 = 0LL;
    v12 = 0LL;
    v13 = 0LL;
    v14 = 0LL;
    MONITOR_MGR::AcquireMonitorExclusive(&v10, a1, a2, 1u);
    v7 = v10;
    if ( v10 )
    {
      *(_QWORD *)&v12 = (*((_QWORD *)v10 + 21) + 8LL) & -(__int64)(*((_QWORD *)v10 + 21) != 0LL);
      if ( *((_DWORD *)v10 + 78) != 1 )
        WdLogSingleEntry0(1LL);
      v8 = *((_QWORD *)v7 + 30);
      if ( a3 != *(_DWORD *)(v8 + 16) || *(_BYTE *)(v8 + 20) )
      {
        *(_DWORD *)(v8 + 16) = a3;
        *(_BYTE *)(v8 + 20) = 0;
        DXGMONITOR::OnUsageUpdated(v7, (struct DxgMonitor::IMonitorDeferredEventSource *)&v11, 1);
      }
      ExReleaseResourceLite((PERESOURCE)((char *)v7 + 24));
      KeLeaveCriticalRegion();
      MonitorEventDeferral::FlushEventsWithContext((MonitorEventDeferral *)&v11, a4);
      v6 = 0;
    }
    else
    {
      v6 = -1073741632;
      WdLogSingleEntry1(2LL, -1073741632LL);
    }
    MonitorEventDeferral::~MonitorEventDeferral((MonitorEventDeferral *)&v11);
  }
  else
  {
    v6 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
  }
  return v6;
}
