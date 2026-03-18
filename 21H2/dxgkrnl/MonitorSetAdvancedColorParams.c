/*
 * XREFs of MonitorSetAdvancedColorParams @ 0x1C03B0D88
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01A0EB0 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?AcquireMonitorExclusive@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@PEAUHDXGMONITOR__@@@Z @ 0x1C001E350 (-AcquireMonitorExclusive@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@PEAUHDXGMONIT.c)
 *     ?SetColorProfile@MonitorColorState@DxgMonitor@@QEAAJAEBUDISPLAY_COLOR_DATA_RAW@@KKK@Z @ 0x1C03B89A8 (-SetColorProfile@MonitorColorState@DxgMonitor@@QEAAJAEBUDISPLAY_COLOR_DATA_RAW@@KKK@Z.c)
 */

__int64 __fastcall MonitorSetAdvancedColorParams(
        struct HDXGMONITOR__ *a1,
        _DWORD *a2,
        _DWORD *a3,
        _DWORD *a4,
        _DWORD *a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8)
{
  unsigned int v11; // edi
  unsigned int v12; // esi
  __int64 v13; // rbx
  unsigned int v14; // edi
  DxgMonitor::MonitorColorState *v15; // rcx
  _DWORD v17[8]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v18; // [rsp+70h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  v11 = a7;
  if ( !a7 )
    return 3221225485LL;
  v12 = a8;
  if ( !a8 || a8 > a7 || a6 >= a7 || a6 >= a8 )
    return 3221225485LL;
  MONITOR_MGR::AcquireMonitorExclusive(&v18, a1);
  v13 = v18;
  if ( v18 )
  {
    v17[0] = *a2;
    v17[1] = a2[1];
    v17[2] = *a3;
    v17[3] = a3[1];
    v17[4] = *a4;
    v17[5] = a4[1];
    v17[6] = *a5;
    v15 = *(DxgMonitor::MonitorColorState **)(v18 + 224);
    v17[7] = a5[1];
    v14 = DxgMonitor::MonitorColorState::SetColorProfile(v15, (const struct DISPLAY_COLOR_DATA_RAW *)v17, a6, v11, v12);
    ExReleaseResourceLite((PERESOURCE)(v13 + 24));
    KeLeaveCriticalRegion();
  }
  else
  {
    v14 = -1073741275;
    WdLogSingleEntry1(2LL, -1073741275LL);
  }
  return v14;
}
