/*
 * XREFs of ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C013EA84
 * Callers:
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C013E42C (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0148CB4 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C014AF68 (-DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCEN.c)
 *     ?PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0171FE4 (-PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DpIndicateConnectorChange @ 0x1C004FF70 (DpIndicateConnectorChange.c)
 *     ?DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C010FA44 (-DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0113708 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02134E8 (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
 */

void __fastcall DmmHandleSetTimingsResult(
        ADAPTER_DISPLAY **this,
        struct _DMM_SET_TIMING_RESULT *a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  DXGSESSIONMGR *v11; // rdi
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  int updated; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  struct _DEVICE_OBJECT *v18; // rdx
  struct _DEVICE_OBJECT *v19; // rcx
  int v20; // [rsp+50h] [rbp+8h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)this) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7, v6);
    WdLogEvent5_WdAssertion(v8);
  }
  if ( *((_DWORD *)this + 50) == 1 && !*((_BYTE *)this + 2609) )
  {
    if ( (*(_BYTE *)a2 & 2) != 0 )
    {
      v11 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v7, v6) + 102);
      if ( v11 )
      {
        CurrentProcessSessionId = PsGetCurrentProcessSessionId(v10, v9);
        SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v11, CurrentProcessSessionId);
      }
      else
      {
        SessionDataForSpecifiedSession = 0LL;
      }
      if ( SessionDataForSpecifiedSession && *((_BYTE *)SessionDataForSpecifiedSession + 18491) )
      {
        v20 = PsGetCurrentProcessSessionId(v10, v9);
        updated = ZwUpdateWnfStateData(&WNF_DXGK_PATH_FAILED_OR_INVALIDATED, 0LL, 0LL, 0LL, &v20, 0, 0);
      }
      else
      {
        updated = ADAPTER_DISPLAY::RequestAsyncDisplaySwitchCallout(this[337], 0LL, a3);
      }
      if ( updated < 0 )
      {
        v17 = WdLogNewEntry5_WdError(v16, v15);
        *(_QWORD *)(v17 + 24) = this;
        WdLogEvent5_WdError(v17);
      }
    }
    if ( (*(_BYTE *)a2 & 1) != 0 )
    {
      if ( DXGADAPTER::DriverSupportSetTimingsFromVidPn((DXGADAPTER *)this) )
      {
        DpIndicateConnectorChange(v18, (__int64)v18);
      }
      else
      {
        v19 = (struct _DEVICE_OBJECT *)*((_QWORD *)v18->DeviceExtension + 19);
        if ( v19 )
          IoInvalidateDeviceRelations(v19, BusRelations);
      }
    }
  }
}
