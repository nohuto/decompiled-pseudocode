/*
 * XREFs of ?ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z @ 0x1C014495C
 * Callers:
 *     ?GetMonitorIdFromTargetId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z @ 0x1C01444F0 (-GetMonitorIdFromTargetId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z.c)
 *     ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C014459C (-DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 *     ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z @ 0x1C01447A4 (-_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z.c)
 *     ?IsUsingDefaultMonitorProfile@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXIPEAE@Z @ 0x1C02E3660 (-IsUsingDefaultMonitorProfile@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXIPEAE@Z.c)
 *     ??1DMMVIDEOPRESENTTARGET@@UEAA@XZ @ 0x1C02E4FB0 (--1DMMVIDEOPRESENTTARGET@@UEAA@XZ.c)
 * Callees:
 *     MonitorReleaseMonitorHandle @ 0x1C012C2CC (MonitorReleaseMonitorHandle.c)
 */

__int64 __fastcall VIDPN_MGR::ReleaseMonitorHandle(VIDPN_MGR *this, struct HDXGMONITOR__ *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  __int64 v8; // rax
  __int64 v9; // rax

  if ( !a2 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v8);
  }
  v6 = *((_QWORD *)this + 1);
  if ( !v6 )
  {
    v9 = WdLogNewEntry5_WdAssertion(0LL, a2);
    WdLogEvent5_WdAssertion(v9);
    v6 = *((_QWORD *)this + 1);
  }
  return MonitorReleaseMonitorHandle(*(_QWORD *)(v6 + 16), (__int64)a2, (void *)0x4E506456, a4);
}
