/*
 * XREFs of ?ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C01886E4
 * Callers:
 *     ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C01645F8 (-_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 *     ConvertFrequencyRange @ 0x1C01880D0 (ConvertFrequencyRange.c)
 *     ?_ParseEDIDBaseBlock@DXGMONITOR@@AEAAJXZ @ 0x1C01882FC (-_ParseEDIDBaseBlock@DXGMONITOR@@AEAAJXZ.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0188BF4 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?_SerializeMonitor@DXGMONITOR@@QEAAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z @ 0x1C02F9028 (-_SerializeMonitor@DXGMONITOR@@QEAAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z.c)
 *     ?_GetFirstMonitorDescriptorEnumerator@DXGMONITOR@@AEAAJPEAPEBU_D3DKMDT_MONITOR_DESCRIPTOR@@@Z @ 0x1C02F9D0C (-_GetFirstMonitorDescriptorEnumerator@DXGMONITOR@@AEAAJPEAPEBU_D3DKMDT_MONITOR_DESCRIPTOR@@@Z.c)
 *     ?_GetNextMonitorDescriptorEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_DESCRIPTOR@@PEAPEBU2@@Z @ 0x1C02F9FB0 (-_GetNextMonitorDescriptorEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_DESCRIPTOR@@PEAPEBU2@.c)
 *     ?_ParseDisplayIDForMonitorModes@DXGMONITOR@@AEAAJXZ @ 0x1C02FA674 (-_ParseDisplayIDForMonitorModes@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConvertMonitorCapablitiesOrigin(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rdi
  __int64 v5; // rax

  v2 = (int)a1;
  switch ( (_DWORD)a1 )
  {
    case 1:
      *a2 = 1;
      return 0LL;
    case 2:
      *a2 = 2;
      return 0LL;
    case 3:
      *a2 = 3;
      return 0LL;
    case 4:
      *a2 = 4;
      return 0LL;
  }
  v5 = WdLogNewEntry5_WdError(a1, a2);
  *(_QWORD *)(v5 + 24) = v2;
  WdLogEvent5_WdError(v5);
  *a2 = 0;
  return 3223192407LL;
}
