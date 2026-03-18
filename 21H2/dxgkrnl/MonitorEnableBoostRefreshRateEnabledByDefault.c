/*
 * XREFs of MonitorEnableBoostRefreshRateEnabledByDefault @ 0x1C03B02CC
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01A0EB0 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?AcquireMonitorExclusive@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@PEAXI_N@Z @ 0x1C001356C (-AcquireMonitorExclusive@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@PEAXI_N@Z.c)
 *     ?_EnableBoostRefreshRateEnabled@DXGMONITOR@@QEAAJ_N@Z @ 0x1C03B5528 (-_EnableBoostRefreshRateEnabled@DXGMONITOR@@QEAAJ_N@Z.c)
 */

__int64 __fastcall MonitorEnableBoostRefreshRateEnabledByDefault(__int64 a1, unsigned int a2, bool a3)
{
  unsigned int v3; // edi
  DXGMONITOR *v5; // rbx
  int refreshed; // eax
  DXGMONITOR *v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  if ( !a1 || a2 == -1 )
    return 3221225485LL;
  MONITOR_MGR::AcquireMonitorExclusive(&v8, a1, a2, 1u);
  v5 = v8;
  if ( v8 )
  {
    if ( *((_DWORD *)v8 + 78) != 1 )
      WdLogSingleEntry0(1LL);
    if ( (*((_DWORD *)v5 + 88) != 0) != a3 )
    {
      refreshed = DXGMONITOR::_EnableBoostRefreshRateEnabled(v5, a3);
      if ( refreshed >= 0 )
        refreshed = -1073741802;
      v3 = refreshed;
    }
    ExReleaseResourceLite((PERESOURCE)((char *)v5 + 24));
    KeLeaveCriticalRegion();
  }
  else
  {
    v3 = -1073741632;
    WdLogSingleEntry1(2LL, -1073741632LL);
  }
  return v3;
}
