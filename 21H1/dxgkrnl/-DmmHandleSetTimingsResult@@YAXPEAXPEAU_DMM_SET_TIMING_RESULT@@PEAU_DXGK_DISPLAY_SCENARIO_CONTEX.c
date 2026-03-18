/*
 * XREFs of ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00DE9BC
 * Callers:
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00DE364 (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 *     ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C013D338 (-DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCEN.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C013FBA0 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0163744 (-PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DpIndicateConnectorChange @ 0x1C004F020 (DpIndicateConnectorChange.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0116DB4 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C011B334 (-DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0210448 (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
 */

void __fastcall DmmHandleSetTimingsResult(
        ADAPTER_DISPLAY **this,
        struct _DMM_SET_TIMING_RESULT *a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  DXGSESSIONMGR *v9; // rdi
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  int updated; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  struct _DEVICE_OBJECT *v16; // rdx
  struct _DEVICE_OBJECT *v17; // rcx
  int v18; // [rsp+50h] [rbp+8h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)this) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7, v6);
    WdLogEvent5_WdAssertion(v8);
  }
  if ( *((_DWORD *)this + 50) == 1 && !*((_BYTE *)this + 2585) )
  {
    if ( (*(_BYTE *)a2 & 2) != 0 )
    {
      v9 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v7, v6) + 88);
      if ( v9 )
      {
        CurrentProcessSessionId = PsGetCurrentProcessSessionId();
        SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v9, CurrentProcessSessionId);
      }
      else
      {
        SessionDataForSpecifiedSession = 0LL;
      }
      if ( SessionDataForSpecifiedSession && *((_BYTE *)SessionDataForSpecifiedSession + 18491) )
      {
        v18 = PsGetCurrentProcessSessionId();
        updated = ZwUpdateWnfStateData(&WNF_DXGK_PATH_FAILED_OR_INVALIDATED, 0LL, 0LL, 0LL, &v18, 0, 0);
      }
      else
      {
        updated = ADAPTER_DISPLAY::RequestAsyncDisplaySwitchCallout(this[334], 0LL, a3);
      }
      if ( updated < 0 )
      {
        v15 = WdLogNewEntry5_WdError(v14, v13);
        *(_QWORD *)(v15 + 24) = this;
        WdLogEvent5_WdError(v15);
      }
    }
    if ( (*(_BYTE *)a2 & 1) != 0 )
    {
      if ( DXGADAPTER::DriverSupportSetTimingsFromVidPn((DXGADAPTER *)this) )
      {
        DpIndicateConnectorChange(v16, (__int64)v16);
      }
      else
      {
        v17 = (struct _DEVICE_OBJECT *)*((_QWORD *)v16->DeviceExtension + 19);
        if ( v17 )
          IoInvalidateDeviceRelations(v17, BusRelations);
      }
    }
  }
}
