/*
 * XREFs of ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01BC204
 * Callers:
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01BBB3C (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C4C30 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01E8324 (-DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCEN.c)
 *     ?PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01F1820 (-PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_.c)
 *     ?_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z @ 0x1C03B62E0 (-_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DpIndicateConnectorChange @ 0x1C0025880 (DpIndicateConnectorChange.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0183C78 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C01A9544 (-DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02C218C (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
 */

void __fastcall DmmHandleSetTimingsResult(
        ADAPTER_DISPLAY **this,
        struct _DMM_SET_TIMING_RESULT *a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  __int64 v6; // rcx
  DXGSESSIONMGR *v7; // rdi
  unsigned int v8; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v10; // rcx
  struct _DEVICE_OBJECT *v11; // rdx
  struct _DEVICE_OBJECT *v12; // rcx
  int CurrentProcessSessionId; // [rsp+50h] [rbp+8h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)this) )
    WdLogSingleEntry0(1LL);
  if ( *((_DWORD *)this + 50) == 1 && !*((_BYTE *)this + 2705) )
  {
    if ( (*(_BYTE *)a2 & 2) == 0 )
      goto LABEL_6;
    v7 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
    if ( v7
      && (v8 = PsGetCurrentProcessSessionId(v6),
          (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v7, v8)) != 0LL)
      && *((_BYTE *)SessionDataForSpecifiedSession + 18499) )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v10);
      if ( (int)ZwUpdateWnfStateData(
                  &WNF_DXGK_PATH_FAILED_OR_INVALIDATED,
                  0LL,
                  0LL,
                  0LL,
                  &CurrentProcessSessionId,
                  0,
                  0) >= 0 )
        goto LABEL_6;
    }
    else if ( ADAPTER_DISPLAY::RequestAsyncDisplaySwitchCallout(this[349], 0LL, a3) >= 0 )
    {
LABEL_6:
      if ( (*(_BYTE *)a2 & 1) != 0 )
      {
        if ( DXGADAPTER::DriverSupportSetTimingsFromVidPn((DXGADAPTER *)this) )
        {
          DpIndicateConnectorChange(v11);
        }
        else
        {
          v12 = (struct _DEVICE_OBJECT *)*((_QWORD *)v11->DeviceExtension + 19);
          if ( v12 )
            IoInvalidateDeviceRelations(v12, BusRelations);
        }
      }
      return;
    }
    WdLogSingleEntry1(2LL, this);
    goto LABEL_6;
  }
}
