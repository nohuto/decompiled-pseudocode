/*
 * XREFs of MonitorSetAppOverride @ 0x1C03B0ED4
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01A0EB0 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?AcquireMonitorExclusive@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@PEAUHDXGMONITOR__@@@Z @ 0x1C001E350 (-AcquireMonitorExclusive@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@PEAUHDXGMONIT.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z @ 0x1C0203160 (-RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z.c)
 *     ??1MonitorEventDeferral@@UEAA@XZ @ 0x1C0208A3C (--1MonitorEventDeferral@@UEAA@XZ.c)
 *     ?FlushEventsWithContext@MonitorEventDeferral@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0208AB8 (-FlushEventsWithContext@MonitorEventDeferral@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?OnUsageUpdated@DXGMONITOR@@QEAAXAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z @ 0x1C020B690 (-OnUsageUpdated@DXGMONITOR@@QEAAXAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z.c)
 *     ?SetAppOverride@MonitorUsageState@DxgMonitor@@QEAAJU_GUID@@0I_K_NPEBU_UNICODE_STRING@@@Z @ 0x1C03B8F5C (-SetAppOverride@MonitorUsageState@DxgMonitor@@QEAAJU_GUID@@0I_K_NPEBU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall MonitorSetAppOverride(
        struct HDXGMONITOR__ *a1,
        GUID *a2,
        struct _GUID *a3,
        unsigned int a4,
        unsigned __int64 a5,
        bool a6,
        struct _UNICODE_STRING *a7)
{
  __int64 v11; // rbx
  unsigned int v12; // edi
  __int64 v13; // rax
  GUID v14; // xmm1
  int v15; // eax
  unsigned int v16; // esi
  __int64 v17; // rax
  struct DXGGLOBAL *Global; // rax
  int v19; // edi
  struct _GUID v20; // [rsp+40h] [rbp-C0h] BYREF
  GUID Guid; // [rsp+50h] [rbp-B0h] BYREF
  void **v22; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v23; // [rsp+68h] [rbp-98h]
  __int128 v24; // [rsp+78h] [rbp-88h]
  __int128 v25; // [rsp+88h] [rbp-78h]
  __int64 v26; // [rsp+98h] [rbp-68h]
  int v27; // [rsp+A0h] [rbp-60h]
  _QWORD v28[10]; // [rsp+B0h] [rbp-50h] BYREF

  if ( a1 )
  {
    v22 = &MonitorEventDeferral::`vftable';
    v27 = 0;
    v26 = 0LL;
    v23 = 0LL;
    v24 = 0LL;
    v25 = 0LL;
    MONITOR_MGR::AcquireMonitorExclusive(&v20, a1);
    v11 = *(_QWORD *)&v20.Data1;
    if ( *(_QWORD *)&v20.Data1 )
    {
      v13 = *(_QWORD *)(*(_QWORD *)&v20.Data1 + 168LL);
      v14 = *a2;
      v20 = *a3;
      Guid = v14;
      *(_QWORD *)&v23 = (v13 + 8) & -(__int64)(v13 != 0);
      v15 = DxgMonitor::MonitorUsageState::SetAppOverride(
              *(DxgMonitor::MonitorUsageState **)(v11 + 240),
              &Guid,
              &v20,
              a4,
              a5,
              a6,
              a7);
      v16 = v15;
      if ( v15 >= 0 )
      {
        v17 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_MONITOR_OVERRIDE_PSEUDO_SPECIALIZED.Data1;
        if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_MONITOR_OVERRIDE_PSEUDO_SPECIALIZED.Data1 )
          v17 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_MONITOR_OVERRIDE_PSEUDO_SPECIALIZED.Data4;
        if ( !v17 )
        {
          Global = DXGGLOBAL_GetGlobal();
          DXGGLOBAL::RecordFeatureUsage((__int64)Global, 12, 1);
        }
        DXGMONITOR::OnUsageUpdated((DXGMONITOR *)v11, (struct DxgMonitor::IMonitorDeferredEventSource *)&v22, 1);
        v19 = *(_DWORD *)(*(_QWORD *)(v11 + 240) + 16LL);
        ExReleaseResourceLite((PERESOURCE)(v11 + 24));
        KeLeaveCriticalRegion();
        memset(v28, 0, 0x48uLL);
        EtwActivityIdControl(3u, (LPGUID)&v28[1]);
        v28[8] = MEMORY[0xFFFFF78000000014];
        LODWORD(v28[3]) = 67;
        LOBYTE(v28[6]) = -1;
        LODWORD(v28[4]) = v19;
        MonitorEventDeferral::FlushEventsWithContext(
          (MonitorEventDeferral *)&v22,
          (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v28);
        v12 = 0;
      }
      else
      {
        WdLogSingleEntry1(2LL, v15);
        v12 = v16;
        ExReleaseResourceLite((PERESOURCE)(v11 + 24));
        KeLeaveCriticalRegion();
      }
    }
    else
    {
      v12 = -1073741275;
      WdLogSingleEntry1(2LL, -1073741275LL);
    }
    MonitorEventDeferral::~MonitorEventDeferral((MonitorEventDeferral *)&v22);
    return v12;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    return 3221225485LL;
  }
}
