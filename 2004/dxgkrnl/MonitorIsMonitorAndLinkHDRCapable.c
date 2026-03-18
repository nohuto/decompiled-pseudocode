/*
 * XREFs of MonitorIsMonitorAndLinkHDRCapable @ 0x1C01283E8
 * Callers:
 *     DxgkGetAdapterDeviceDesc @ 0x1C01112C0 (DxgkGetAdapterDeviceDesc.c)
 *     DxgkGetMonitorInternalInfo @ 0x1C01192D0 (DxgkGetMonitorInternalInfo.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C0128950 (DxgkDisplayConfigDeviceInfo.c)
 *     ?BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDMMVIDPN@@@Z @ 0x1C013A7DC (-BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDM.c)
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0189A20 (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SC.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C01950EC (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0009754 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?_GetDisplayCoreFromMonitor@MONITOR_MGR@@SAPEAVADAPTER_DISPLAY@@PEAUHDXGMONITOR__@@@Z @ 0x1C00222F0 (-_GetDisplayCoreFromMonitor@MONITOR_MGR@@SAPEAVADAPTER_DISPLAY@@PEAUHDXGMONITOR__@@@Z.c)
 *     ?EdidSupportsHDR@DXGMONITOR@@QEAAEXZ @ 0x1C018AB6C (-EdidSupportsHDR@DXGMONITOR@@QEAAEXZ.c)
 */

__int64 __fastcall MonitorIsMonitorAndLinkHDRCapable(struct HDXGMONITOR__ *a1, unsigned int *a2)
{
  unsigned int v2; // ebx
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  DXGMONITOR *v8; // rdi
  int v9; // esi
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  struct ADAPTER_DISPLAY *DisplayCoreFromMonitor; // rax
  __int64 v16; // rax
  int v17; // r9d
  __int16 v18; // r10
  int v19; // r11d
  int v20; // r11d
  int v21; // eax
  unsigned int v22; // ecx
  __int64 v23; // [rsp+20h] [rbp-28h]
  DXGMONITOR *v24; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  if ( !a1 )
    return 3221225485LL;
  *a2 = 0;
  v24 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v24);
  if ( (int)result >= 0 )
  {
    v8 = v24;
    if ( !v24 )
    {
      v11 = WdLogNewEntry5_WdAssertion(v7, v6);
      WdLogEvent5_WdAssertion(v11);
      v14 = WdLogNewEntry5_WdAssertion(v13, v12);
      WdLogEvent5_WdAssertion(v14);
    }
    KeEnterCriticalRegion();
    v9 = 1;
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v8 + 296), 1u);
    if ( (*((_DWORD *)v8 + 10) & 0x400) == 0 )
      goto LABEL_6;
    v23 = *(_QWORD *)((char *)v8 + 468);
    DisplayCoreFromMonitor = MONITOR_MGR::_GetDisplayCoreFromMonitor(a1, v10);
    if ( !DisplayCoreFromMonitor )
    {
      v2 = -1073741275;
LABEL_6:
      ExReleaseResourceLite((PERESOURCE)((char *)v8 + 296));
      KeLeaveCriticalRegion();
      return v2;
    }
    v16 = *((_QWORD *)DisplayCoreFromMonitor + 2);
    v17 = 4;
    v18 = WORD2(v23);
    if ( *(int *)(v16 + 2596) < 2500 )
    {
      if ( (v23 & 0x400000000LL) == 0 || !DXGMONITOR::EdidSupportsHDR(v8) )
        v9 = 0;
      v22 = (v9 | *a2 & 0xFFFFFFFE) ^ (HIBYTE(v18) ^ (unsigned __int8)(v9 | *a2)) & 2;
    }
    else
    {
      v19 = *(_DWORD *)(v16 + 2576);
      if ( (v19 & 0xC) == 0 || (v23 & 0x400000000LL) == 0 || !DXGMONITOR::EdidSupportsHDR(v8) )
        v9 = 0;
      v20 = v17 & v19;
      if ( !v20 || (v21 = 2, (v18 & 0x200) == 0) )
        v21 = 0;
      v22 = v21 | v9 & 0xFFFFFFFD | *a2 & 0xFFFFFFFC;
      if ( !v20 )
      {
LABEL_27:
        v17 = 0;
LABEL_28:
        *a2 = v17 | v22 & 0xFFFFFFFB;
        goto LABEL_6;
      }
    }
    if ( (v18 & 0x400) != 0 && *((_BYTE *)v8 + 702) )
      goto LABEL_28;
    goto LABEL_27;
  }
  return result;
}
