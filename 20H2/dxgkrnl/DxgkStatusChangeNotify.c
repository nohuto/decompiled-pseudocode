/*
 * XREFs of DxgkStatusChangeNotify @ 0x1C0140680
 * Callers:
 *     ?NotifyStatusChange@?$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C000BA90 (-NotifyStatusChange@-$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TY.c)
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C012E940 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C013B32C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C013F778 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     DxgkSetDisplayMode @ 0x1C0147C10 (DxgkSetDisplayMode.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z @ 0x1C0148988 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0148CB4 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0171FE4 (-PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_.c)
 *     ?SetTargetOwnership@VIDPN_MGR@@QEAAJIW4_DMM_VIDEO_PRESENT_TARGET_OWNERSHIP@@@Z @ 0x1C017226C (-SetTargetOwnership@VIDPN_MGR@@QEAAJIW4_DMM_VIDEO_PRESENT_TARGET_OWNERSHIP@@@Z.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C018AB0C (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0253630 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0qp_EtwWriteTransfer @ 0x1C000BAC4 (McTemplateK0qp_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall DxgkStatusChangeNotify(int *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 CurrentProcess; // rax
  __int64 CurrentServerSilo; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // eax
  unsigned int updated; // ebx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  void *v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  int v33; // [rsp+40h] [rbp-20h] BYREF
  __int64 v34; // [rsp+48h] [rbp-18h]
  char v35; // [rsp+50h] [rbp-10h]
  unsigned int ProcessSessionId; // [rsp+80h] [rbp+20h] BYREF
  unsigned int ActiveConsoleId; // [rsp+88h] [rbp+28h] BYREF
  unsigned int ServerSiloServiceSessionId; // [rsp+90h] [rbp+30h] BYREF

  v33 = -1;
  v34 = 0LL;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v35 = 1;
    v33 = 2195;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2195);
  }
  else
  {
    v35 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v33, 2195LL);
  CurrentProcess = PsGetCurrentProcess(v5, v4);
  ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
  CurrentServerSilo = PsGetCurrentServerSilo();
  ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(CurrentServerSilo);
  ActiveConsoleId = RtlGetActiveConsoleId();
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10) != 0 )
    McTemplateK0qp_EtwWriteTransfer(v9, v8, v10, *a1);
  v11 = *a1;
  if ( *a1 == 1 )
  {
    v16 = WdLogNewEntry5_WdEvent(v9, v8);
    *(_QWORD *)(v16 + 24) = ProcessSessionId;
    WdLogEvent5_WdEvent(v16);
    updated = ZwUpdateWnfStateData(&WNF_DX_OCCLUSION_CHANGE_NOTIFICATION, 0LL, 0LL, 0LL, &ProcessSessionId, 0, 0);
    if ( ProcessSessionId == ServerSiloServiceSessionId && ActiveConsoleId != -1 )
    {
      v18 = WdLogNewEntry5_WdEvent(v17, v8);
      *(_QWORD *)(v18 + 24) = ActiveConsoleId;
      WdLogEvent5_WdEvent(v18);
      v19 = &WNF_DX_OCCLUSION_CHANGE_NOTIFICATION;
LABEL_16:
      v20 = ZwUpdateWnfStateData(v19, 0LL, 0LL, 0LL, &ActiveConsoleId, 0, 0);
      v22 = v20;
      if ( v20 >= 0 )
        goto LABEL_11;
      v31 = WdLogNewEntry5_WdError(v21, v8);
      v32 = ActiveConsoleId;
      goto LABEL_32;
    }
  }
  else
  {
    if ( v11 <= 1 )
      goto LABEL_31;
    if ( v11 <= 6 )
    {
LABEL_10:
      updated = 0;
      goto LABEL_11;
    }
    if ( v11 == 7 )
      goto LABEL_18;
    if ( v11 <= 10 )
      goto LABEL_10;
    if ( v11 == 11 )
    {
LABEL_18:
      v23 = WdLogNewEntry5_WdEvent(v9, v8);
      *(_QWORD *)(v23 + 24) = ProcessSessionId;
      WdLogEvent5_WdEvent(v23);
      updated = ZwUpdateWnfStateData(&WNF_DX_MODE_CHANGE_NOTIFICATION, 0LL, 0LL, 0LL, &ProcessSessionId, 0, 0);
      if ( ServerSiloServiceSessionId == -1 )
      {
        v31 = WdLogNewEntry5_WdError(v24, v8);
        *(_QWORD *)(v31 + 24) = ProcessSessionId;
LABEL_33:
        WdLogEvent5_WdError(v31);
        goto LABEL_11;
      }
      if ( ServerSiloServiceSessionId != ProcessSessionId )
      {
        v25 = ZwUpdateWnfStateData(&WNF_DX_MODE_CHANGE_NOTIFICATION, 0LL, 0LL, 0LL, &ServerSiloServiceSessionId, 0, 0);
        v22 = v25;
        if ( v25 < 0 )
        {
          v31 = WdLogNewEntry5_WdError(v26, v8);
          v32 = ServerSiloServiceSessionId;
LABEL_32:
          *(_QWORD *)(v31 + 24) = v32;
          *(_QWORD *)(v31 + 32) = v22;
          goto LABEL_33;
        }
      }
      goto LABEL_11;
    }
    if ( v11 != 12 )
    {
LABEL_31:
      v30 = WdLogNewEntry5_WdAssertion(v9, v8);
      *(_QWORD *)(v30 + 24) = *a1;
      WdLogEvent5_WdAssertion(v30);
      updated = -1073741637;
      goto LABEL_11;
    }
    v27 = WdLogNewEntry5_WdEvent(v9, v8);
    *(_QWORD *)(v27 + 24) = ProcessSessionId;
    WdLogEvent5_WdEvent(v27);
    updated = ZwUpdateWnfStateData(&WNF_DX_MONITOR_CHANGE_NOTIFICATION, 0LL, 0LL, 0LL, &ProcessSessionId, 0, 0);
    if ( ProcessSessionId != ActiveConsoleId && ActiveConsoleId != -1 )
    {
      v29 = WdLogNewEntry5_WdEvent(v28, v8);
      *(_QWORD *)(v29 + 24) = ActiveConsoleId;
      WdLogEvent5_WdEvent(v29);
      v19 = &WNF_DX_MONITOR_CHANGE_NOTIFICATION;
      goto LABEL_16;
    }
  }
LABEL_11:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33, v8);
  if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerExit, v14, v33);
  return updated;
}
