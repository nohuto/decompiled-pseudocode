/*
 * XREFs of MonitorGetNumConnectedMonitor @ 0x1C01D47C8
 * Callers:
 *     DxgkReportAdapterPowerRapidHpdTrigerEvent @ 0x1C0023838 (DxgkReportAdapterPowerRapidHpdTrigerEvent.c)
 *     ?GetNumTargetsWithMonitorObjects@VIDPN_MGR@@QEBA_KXZ @ 0x1C0029D40 (-GetNumTargetsWithMonitorObjects@VIDPN_MGR@@QEBA_KXZ.c)
 *     ?IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z @ 0x1C01D476C (-IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z.c)
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE@Z @ 0x1C0399E6C (-CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_D.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MonitorGetNumConnectedMonitor(__int64 a1, _DWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx

  *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2) + 24) = a1;
  if ( a1 && a2 )
  {
    v4 = *(_QWORD *)(a1 + 2792);
    if ( v4 )
    {
      v5 = *(_QWORD *)(v4 + 112);
      if ( v5 )
      {
        *a2 = *(_DWORD *)(v5 + 32);
        return 0LL;
      }
    }
    WdLogSingleEntry1(2LL, a1);
  }
  return 3221225485LL;
}
