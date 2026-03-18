/*
 * XREFs of ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02076C0
 * Callers:
 *     MonitorCreatePhysicalMonitor @ 0x1C0205ED8 (MonitorCreatePhysicalMonitor.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?_EnterMonitorPendingState@MONITOR_MGR@@QEAAXXZ @ 0x1C006B4A4 (-_EnterMonitorPendingState@MONITOR_MGR@@QEAAXXZ.c)
 *     ?ReleaseGlobalResources@DXGMONITOR@@QEBAXXZ @ 0x1C0157914 (-ReleaseGlobalResources@DXGMONITOR@@QEBAXXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C01A2ECC (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1C01A7544 (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C01BE8BC (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@UEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01F3F00 (-_IssueMonitorEvent@MONITOR_MGR@@UEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_GetEmergencySimulatedMonitor@MONITOR_MGR@@QEAAJPEAPEAVDXGMONITOR@@@Z @ 0x1C0207674 (-_GetEmergencySimulatedMonitor@MONITOR_MGR@@QEAAJPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0207AD0 (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C0208748 (-_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02087D4 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_CO.c)
 *     ?_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C0208A68 (-_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02C218C (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
 *     ?_ChangeLIDStatus@DXGMONITOR@@QEAAX_N@Z @ 0x1C03B5124 (-_ChangeLIDStatus@DXGMONITOR@@QEAAX_N@Z.c)
 *     ?_SetAttachedPhysicalMonitor@DXGMONITOR@@QEAAXPEAV1@@Z @ 0x1C03B5C54 (-_SetAttachedPhysicalMonitor@DXGMONITOR@@QEAAXPEAV1@@Z.c)
 *     ?UnregisterPnPTargetDeviceNotification@MonitorPnpState@DxgMonitor@@QEAAJXZ @ 0x1C03B6CE0 (-UnregisterPnPTargetDeviceNotification@MonitorPnpState@DxgMonitor@@QEAAJXZ.c)
 */

__int64 __fastcall MONITOR_MGR::_HandleCreatePhysicalMonitor(
        MONITOR_MGR *this,
        unsigned int a2,
        struct _DEVICE_OBJECT *a3,
        unsigned __int8 a4,
        char a5,
        struct _DXGK_CONNECTION_USB4_INFO *a6,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a7)
{
  __int64 v7; // r12
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v9; // r13
  int EmergencySimulatedMonitor; // eax
  struct DXGMONITOR *v11; // rsi
  DXGMONITOR *v12; // rdi
  int MonitorInstance; // eax
  __int64 v14; // rdx
  DXGMONITOR *v15; // rbx
  int v16; // r15d
  unsigned __int8 v17; // r15
  __int64 v18; // rax
  __int64 v20; // rax
  _QWORD *v21; // r9
  int SourceConnectedToTargetInClientVidPn; // eax
  struct DXGMONITOR *v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // r15d
  DXGMONITOR *v27; // r15
  char v28; // cl
  DXGMONITOR *v29; // [rsp+90h] [rbp+48h] BYREF
  unsigned int v30; // [rsp+98h] [rbp+50h] BYREF
  struct _DEVICE_OBJECT *v31; // [rsp+A0h] [rbp+58h]
  unsigned __int8 v32; // [rsp+A8h] [rbp+60h]

  v32 = a4;
  v31 = a3;
  v7 = a2;
  if ( a2 == -1 )
    WdLogSingleEntry0(1LL);
  if ( *((_BYTE *)this + 21) && (Microsoft_Windows_DxgKrnlEnableBits & 4) != 0 )
    McTemplateK0q_EtwWriteTransfer(
      (__int64)this,
      &Dxgk_PerfTrack_DMM_Hotplug_Monitor_Set_VideoMode_Start,
      (__int64)a3,
      v7);
  v9 = a7;
  MONITOR_MGR::_IssueMonitorEvent((_QWORD *)this + 1, v7, 0, 0LL, 1, (__int64)a7);
  v29 = 0LL;
  EmergencySimulatedMonitor = MONITOR_MGR::_GetEmergencySimulatedMonitor(this, &v29);
  if ( EmergencySimulatedMonitor < 0 )
  {
    if ( EmergencySimulatedMonitor != -1073741275 )
      WdLogSingleEntry0(1LL);
    v11 = v29;
    if ( v29 )
      WdLogSingleEntry0(1LL);
  }
  else
  {
    v11 = v29;
    if ( !v29 )
      WdLogSingleEntry0(1LL);
    MONITOR_MGR::_RemoveMonitorFromList(this, v11);
  }
  v29 = 0LL;
  v12 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(this, v7, 0, &v29);
  v15 = v29;
  v16 = MonitorInstance;
  if ( MonitorInstance < 0 )
  {
    if ( v29 )
      WdLogSingleEntry0(1LL);
    if ( v16 != -1073741275 )
      WdLogSingleEntry0(1LL);
    v17 = v32;
  }
  else
  {
    if ( !v29 )
      WdLogSingleEntry0(1LL);
    if ( v11 )
      WdLogSingleEntry0(1LL);
    if ( *((_DWORD *)v15 + 78) == 1 )
    {
      if ( *(struct _DEVICE_OBJECT **)(*((_QWORD *)v15 + 25) + 8LL) == v31 )
      {
        if ( *(_BYTE *)(*((_QWORD *)v15 + 33) + 8LL) )
        {
          v18 = WdLogNewEntry5_WdTrace(v31, v14);
          *(_QWORD *)(v18 + 24) = v15;
          *(_QWORD *)(v18 + 32) = v7;
          return 0LL;
        }
        v17 = v32;
        if ( v32 )
        {
          DXGMONITOR::_ChangeLIDStatus(v15, 1);
          v20 = *((_QWORD *)this + 3);
          if ( *(_DWORD *)(*(_QWORD *)(v20 + 16) + 412LL) == 32902 )
          {
            if ( DXGADAPTER::UsingSetTimingsFromVidPn(*(DXGADAPTER **)(v20 + 16)) )
            {
              SourceConnectedToTargetInClientVidPn = DmmGetSourceConnectedToTargetInClientVidPn(v21, v7, &v30);
              if ( SourceConnectedToTargetInClientVidPn == -1071774884
                || SourceConnectedToTargetInClientVidPn == -1071774912 )
              {
                ADAPTER_DISPLAY::RequestAsyncDisplaySwitchCallout(*((ADAPTER_DISPLAY **)this + 3), 0LL, v9);
              }
            }
          }
          return 0LL;
        }
      }
      else
      {
        v17 = v32;
      }
      v12 = v15;
      v23 = v15;
      v15 = 0LL;
      MONITOR_MGR::_RemoveMonitorFromList(this, v23);
    }
    else
    {
      v12 = (DXGMONITOR *)*((_QWORD *)v15 + 40);
      DXGMONITOR::_SetAttachedPhysicalMonitor(v15, 0LL);
      v17 = v32;
    }
    if ( v12 )
    {
      if ( ((*((unsigned __int8 *)v12 + 176) >> 1) & 1) != (v17 != 0) )
        WdLogSingleEntry0(1LL);
      DxgMonitor::MonitorPnpState::UnregisterPnPTargetDeviceNotification(*((DxgMonitor::MonitorPnpState **)v12 + 25));
      DXGMONITOR::ReleaseGlobalResources(v12);
    }
  }
  v29 = 0LL;
  v26 = MONITOR_MGR::_CreatePhysicalMonitor(this, v7, v31, v17, a5, &v29, a6, v9);
  if ( v26 >= 0 )
  {
    v27 = v29;
    if ( !v29 )
      WdLogSingleEntry0(1LL);
    if ( v15 )
    {
      *((_BYTE *)v15 + 176) ^= (*((_BYTE *)v27 + 176) ^ *((_BYTE *)v15 + 176)) & 2;
      v28 = *((_BYTE *)v15 + 176) ^ (*((_BYTE *)v27 + 176) ^ *((_BYTE *)v15 + 176)) & 4;
      *((_BYTE *)v15 + 176) = v28;
      *((_BYTE *)v27 + 176) ^= (*((_BYTE *)v27 + 176) ^ v28) & 0x20;
      DXGMONITOR::_SetAttachedPhysicalMonitor(v15, v27);
    }
    else
    {
      MONITOR_MGR::_InsertMonitorToList(this, v27);
    }
    if ( !MONITOR_MGR::_DelayNotifyClient )
    {
      if ( v12 )
        v11 = v12;
      return MONITOR_MGR::_HandleCreateMonitorStep2(this, v7, v11, v27, v9);
    }
    if ( *((_QWORD *)v27 + 47) )
      WdLogSingleEntry0(1LL);
    *((_BYTE *)v27 + 368) = 1;
    if ( v12 )
      v11 = v12;
    *((_QWORD *)v27 + 47) = v11;
    MONITOR_MGR::_EnterMonitorPendingState(this);
    return 0LL;
  }
  if ( v29 )
    WdLogSingleEntry0(1LL);
  if ( v12 )
    MONITOR_MGR::_HandleCreateMonitorStep2(this, v7, v12, 0LL, v9);
  if ( v11 )
    MONITOR_MGR::_InsertMonitorToList(this, v11);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 4) != 0 )
    McTemplateK0q_EtwWriteTransfer(v24, &Dxgk_PerfTrack_DMM_Hotplug_Monitor_Set_VideoMode_Cancel, v25, v7);
  return (unsigned int)v26;
}
