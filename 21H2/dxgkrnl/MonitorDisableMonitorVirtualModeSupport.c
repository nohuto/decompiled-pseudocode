/*
 * XREFs of MonitorDisableMonitorVirtualModeSupport @ 0x1C03B013C
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01A0EB0 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?AcquireMonitorExclusive@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@PEAXI_N@Z @ 0x1C001356C (-AcquireMonitorExclusive@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@PEAXI_N@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?_IsVirtualModeSupportDisabled@DXGMONITOR@@QEBA_NXZ @ 0x1C01A5490 (-_IsVirtualModeSupportDisabled@DXGMONITOR@@QEBA_NXZ.c)
 *     ??1MonitorEventDeferral@@UEAA@XZ @ 0x1C0208A3C (--1MonitorEventDeferral@@UEAA@XZ.c)
 *     ?FlushEventsWithContext@MonitorEventDeferral@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0208AB8 (-FlushEventsWithContext@MonitorEventDeferral@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_DisableVirtualModeSupport@DXGMONITOR@@QEAAX_NAEAVIMonitorDeferredEventSource@DxgMonitor@@@Z @ 0x1C03B5458 (-_DisableVirtualModeSupport@DXGMONITOR@@QEAAX_NAEAVIMonitorDeferredEventSource@DxgMonitor@@@Z.c)
 */

__int64 __fastcall MonitorDisableMonitorVirtualModeSupport(
        __int64 a1,
        unsigned int a2,
        char a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  __int64 v4; // rdi
  DXGMONITOR *v7; // rbx
  unsigned int v8; // edi
  DXGMONITOR *v10; // [rsp+20h] [rbp-39h] BYREF
  void **v11; // [rsp+30h] [rbp-29h] BYREF
  __int128 v12; // [rsp+38h] [rbp-21h]
  __int128 v13; // [rsp+48h] [rbp-11h]
  __int128 v14; // [rsp+58h] [rbp-1h]
  __int64 v15; // [rsp+68h] [rbp+Fh]
  int v16; // [rsp+70h] [rbp+17h]

  v4 = a2;
  if ( !a1 || a2 == -1 )
    return 3221225485LL;
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
    if ( (*((_BYTE *)v7 + 176) & 2) != 0 )
    {
      WdLogSingleEntry1(2LL, v4);
      v8 = -1073741790;
      ExReleaseResourceLite((PERESOURCE)((char *)v7 + 24));
      KeLeaveCriticalRegion();
    }
    else
    {
      if ( DXGMONITOR::_IsVirtualModeSupportDisabled(v7) != (a3 != 0) )
        DXGMONITOR::_DisableVirtualModeSupport(v7, a3 != 0, (struct DxgMonitor::IMonitorDeferredEventSource *)&v11);
      ExReleaseResourceLite((PERESOURCE)((char *)v7 + 24));
      KeLeaveCriticalRegion();
      MonitorEventDeferral::FlushEventsWithContext((MonitorEventDeferral *)&v11, a4);
      v8 = 0;
    }
  }
  else
  {
    v8 = -1073741632;
    WdLogSingleEntry1(2LL, -1073741632LL);
  }
  MonitorEventDeferral::~MonitorEventDeferral((MonitorEventDeferral *)&v11);
  return v8;
}
