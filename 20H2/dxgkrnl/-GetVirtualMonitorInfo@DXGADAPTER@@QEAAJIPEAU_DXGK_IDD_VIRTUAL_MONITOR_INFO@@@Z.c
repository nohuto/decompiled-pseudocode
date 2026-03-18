/*
 * XREFs of ?GetVirtualMonitorInfo@DXGADAPTER@@QEAAJIPEAU_DXGK_IDD_VIRTUAL_MONITOR_INFO@@@Z @ 0x1C020C53C
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01277D0 (DxgkDisplayConfigDeviceInfo.c)
 *     ?IsVirtualSlate@CCD_TOPOLOGY@@AEAA_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C0161CA8 (-IsVirtualSlate@CCD_TOPOLOGY@@AEAA_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0185C9C (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 *     ?_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ @ 0x1C0188FEC (-_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGADAPTER::GetVirtualMonitorInfo(
        DXGADAPTER *this,
        __int64 a2,
        struct _DXGK_IDD_VIRTUAL_MONITOR_INFO *a3)
{
  __int64 (__fastcall *v4)(_QWORD, __int64, struct _DXGK_IDD_VIRTUAL_MONITOR_INFO *); // rax
  __int64 v6; // rax

  if ( (*((_DWORD *)this + 87) & 0x40000) != 0 )
  {
    v4 = (__int64 (__fastcall *)(_QWORD, __int64, struct _DXGK_IDD_VIRTUAL_MONITOR_INFO *))*((_QWORD *)this + 247);
    if ( v4 )
      return v4(*((_QWORD *)this + 236), a2, a3);
  }
  v6 = WdLogNewEntry5_WdError(this, a2);
  *(_QWORD *)(v6 + 24) = this;
  *(_QWORD *)(v6 + 32) = -1073741822LL;
  WdLogEvent5_WdError(v6);
  return 3221225474LL;
}
