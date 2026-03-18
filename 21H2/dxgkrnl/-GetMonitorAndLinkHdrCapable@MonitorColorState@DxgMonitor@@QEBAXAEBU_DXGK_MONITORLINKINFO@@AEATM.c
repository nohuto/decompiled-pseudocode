/*
 * XREFs of ?GetMonitorAndLinkHdrCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLINKINFO@@AEATMONITOR_AND_LINK_HDR_CAPS@@@Z @ 0x1C01631B4
 * Callers:
 *     DxgkGetMonitorInternalInfo @ 0x1C01659C0 (DxgkGetMonitorInternalInfo.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01A0EB0 (DxgkDisplayConfigDeviceInfo.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C01B1560 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     ?TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C020BB20 (-TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C0216DB4 (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 *     MonitorIsMonitorAndLinkHDRCapable @ 0x1C03B06F4 (MonitorIsMonitorAndLinkHDRCapable.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?EdidSupportsHDR@MonitorColorState@DxgMonitor@@QEBA_NXZ @ 0x1C0209C5C (-EdidSupportsHDR@MonitorColorState@DxgMonitor@@QEBA_NXZ.c)
 */

void __fastcall DxgMonitor::MonitorColorState::GetMonitorAndLinkHdrCapable(
        DxgMonitor::MonitorColorState *this,
        const struct _DXGK_MONITORLINKINFO *a2,
        union MONITOR_AND_LINK_HDR_CAPS *a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // r9d
  int v9; // r11d
  int v10; // r10d
  int v11; // eax
  unsigned int v12; // ecx
  bool v13; // zf
  DXGK_MONITORLINKINFO_CAPABILITIES v14; // r11d
  int v15; // r10d
  unsigned int v16; // [rsp+30h] [rbp+8h] BYREF

  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
  if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6) < 2500 )
  {
    v14.0 = (struct _DXGK_MONITORLINKINFO_CAPABILITIES::$9E3BB2B9C51DA1466203AB97776F201E)a2->Capabilities;
    v8 = 4;
    if ( (*(_BYTE *)&v14.0 & 4) != 0 && DxgMonitor::MonitorColorState::EdidSupportsHDR(this) )
      v15 = v8 - 3;
    else
      v15 = 0;
    v12 = (v15 | *(_DWORD *)a3 & 0xFFFFFFFE) ^ (*((_BYTE *)&v14.0 + 1) ^ (unsigned __int8)(v15 | *(_DWORD *)a3)) & 2;
    v13 = (*(_WORD *)&v14.0 & 0x400) == 0;
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v7 + 40LL))(v7, &v16);
    v8 = 4;
    v9 = (v16 >> 2) & 1;
    if ( !v9 && (v16 & 8) == 0
      || (*(_BYTE *)&a2->Capabilities.0 & 4) == 0
      || !DxgMonitor::MonitorColorState::EdidSupportsHDR(this) )
    {
      v10 = 0;
    }
    if ( v9 && (a2->Capabilities.Value & 0x200) != 0 )
      v11 = 2;
    else
      v11 = 0;
    v12 = v11 | v10 & 0xFFFFFFFD | *(_DWORD *)a3 & 0xFFFFFFFC;
    if ( !v9 )
      goto LABEL_9;
    v13 = (a2->Capabilities.Value & 0x400) == 0;
  }
  if ( v13 || !*((_BYTE *)this + 340) )
LABEL_9:
    v8 = 0;
  *(_DWORD *)a3 = v8 | v12 & 0xFFFFFFFB;
}
