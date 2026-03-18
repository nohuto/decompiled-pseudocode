/*
 * XREFs of ?_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C03B40B8
 * Callers:
 *     MonitorRemovePhysicalMonitor @ 0x1C03B0AD0 (MonitorRemovePhysicalMonitor.c)
 * Callees:
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C00123E4 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C006B314 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?ReportHpdDepartureSkipped@MonitorUsb4State@DxgMonitor@@QEAAXXZ @ 0x1C01584E4 (-ReportHpdDepartureSkipped@MonitorUsb4State@DxgMonitor@@QEAAXXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C01A2ECC (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@UEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01F3F00 (-_IssueMonitorEvent@MONITOR_MGR@@UEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C0208A68 (-_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0225FB8 (-_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@.c)
 *     ?_ChangeLIDStatus@DXGMONITOR@@QEAAX_N@Z @ 0x1C03B5124 (-_ChangeLIDStatus@DXGMONITOR@@QEAAX_N@Z.c)
 *     ?_SetAttachedPhysicalMonitor@DXGMONITOR@@QEAAXPEAV1@@Z @ 0x1C03B5C54 (-_SetAttachedPhysicalMonitor@DXGMONITOR@@QEAAXPEAV1@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_HandleRemovePhysicalMonitor(
        MONITOR_MGR *this,
        unsigned int a2,
        char a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  __int64 v4; // rbp
  int MonitorInstance; // ebx
  __int64 v9; // r14
  DXGMONITOR *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  DxgMonitor::MonitorUsb4State *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // r15d
  DXGMONITOR *v23; // rcx
  _QWORD *v24; // rcx
  DXGMONITOR *v25[2]; // [rsp+30h] [rbp-38h] BYREF
  int v26; // [rsp+78h] [rbp+10h] BYREF

  v4 = a2;
  if ( a2 == -1 )
    WdLogSingleEntry0(1LL);
  v25[0] = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(this, v4, 0, v25);
  v9 = 2LL;
  if ( MonitorInstance < 0 )
    goto LABEL_17;
  v10 = v25[0];
  if ( !v25[0] )
    WdLogSingleEntry0(1LL);
  if ( (*((_BYTE *)v10 + 176) & 2) != 0 )
  {
    DXGMONITOR::_ChangeLIDStatus(v10, 0);
    if ( a3 )
    {
      v13 = WdLogNewEntry5_WdTrace(v12, v11);
      *(_QWORD *)(v13 + 24) = v4;
      *(_QWORD *)(v13 + 32) = this;
      return 0LL;
    }
  }
  v15 = (DxgMonitor::MonitorUsb4State *)*((_QWORD *)v10 + 33);
  if ( !*((_BYTE *)v15 + 8) || !*((_BYTE *)v15 + 56) )
  {
    v22 = *((_DWORD *)v10 + 78);
    if ( v22 == 1 )
    {
      if ( (int)MONITOR_MGR::_RemoveMonitorFromList(this, v10) < 0 )
        WdLogSingleEntry0(1LL);
      v24 = (_QWORD *)((char *)this + 8);
      if ( *(_DWORD *)(*((_QWORD *)v10 + 30) + 16LL) )
        v9 = 5LL;
      v22 = 1;
    }
    else
    {
      v23 = v10;
      v10 = (DXGMONITOR *)*((_QWORD *)v10 + 40);
      DXGMONITOR::_SetAttachedPhysicalMonitor(v23, 0LL);
      if ( !v10 )
      {
        MonitorInstance = -1073741275;
LABEL_17:
        WdLogSingleEntry2(2LL, v4, this);
        return (unsigned int)MonitorInstance;
      }
      v9 = 3LL;
      v24 = (_QWORD *)((char *)this + 8);
    }
    MONITOR_MGR::_IssueMonitorEvent(v24, *((_DWORD *)v10 + 45), 0, v9, v22, (__int64)a4);
    return MONITOR_MGR::_DestroyPhysicalMonitor(this, v10, a4);
  }
  DxgMonitor::MonitorUsb4State::ReportHpdDepartureSkipped(v15);
  DxgkLogCodePointPacket(
    0x7Bu,
    *((_DWORD *)v10 + 45),
    0,
    0,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 404LL));
  if ( (unsigned int)dword_1C012F8A8 > 5 )
  {
    v20 = *(_QWORD *)(*((_QWORD *)this + 3) + 16LL);
    v25[0] = *(DXGMONITOR **)(v20 + 404);
    v26 = *((_DWORD *)v10 + 45);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v20,
      byte_1C009A814,
      v18,
      v19,
      (__int64)&v26,
      (__int64)v25);
  }
  v21 = WdLogNewEntry5_WdTrace(v17, v16);
  *(_QWORD *)(v21 + 24) = v4;
  *(_QWORD *)(v21 + 32) = this;
  return 128LL;
}
