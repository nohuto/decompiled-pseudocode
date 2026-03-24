/*
 * XREFs of MonitorDRTTest @ 0x1C02F334C
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C025F574 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004448 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DmmEnableModeResetOnMonitorEvent@@YAJQEAXE@Z @ 0x1C02DC518 (-DmmEnableModeResetOnMonitorEvent@@YAJQEAXE@Z.c)
 *     ?_DRTGetTargetInformation@MONITOR_MGR@@QEAAJPEAU_D3DKMT_DRT_MONITOR@@@Z @ 0x1C02F1E1C (-_DRTGetTargetInformation@MONITOR_MGR@@QEAAJPEAU_D3DKMT_DRT_MONITOR@@@Z.c)
 *     MonitorCreateSimulatedMonitor @ 0x1C02F31C4 (MonitorCreateSimulatedMonitor.c)
 *     MonitorDestroySimulatedMonitor @ 0x1C02F352C (MonitorDestroySimulatedMonitor.c)
 */

__int64 __fastcall MonitorDRTTest(
        DXGADAPTER *this,
        struct _D3DKMT_DRT_MONITOR *a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3,
        __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // r9d
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  int v19; // ecx
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned int v22; // ebx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned int SimulatedMonitor; // eax
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r9
  __int64 v31; // rax
  MONITOR_MGR *v32; // rcx
  __int64 v33; // rax
  int v34; // [rsp+20h] [rbp-28h]
  int v35; // [rsp+30h] [rbp-18h]

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( !this || !a2 )
    return 3221225485LL;
  if ( *((_DWORD *)a2 + 1) < 0x20u )
  {
    v10 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    *(_QWORD *)(v10 + 24) = a2;
    *(_QWORD *)(v10 + 32) = *((unsigned int *)a2 + 1);
    WdLogEvent5_WdWarning(v10);
    return 3221225485LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v13, v12);
    WdLogEvent5_WdAssertion(v16);
  }
  v17 = *((_QWORD *)this + 337);
  if ( !v17 )
  {
    v18 = WdLogNewEntry5_WdError(v13, 0LL);
    *(_QWORD *)(v18 + 24) = this;
    WdLogEvent5_WdError(v18);
    return 3221225659LL;
  }
  v19 = *((_DWORD *)a2 + 3);
  if ( !v19 )
  {
    v32 = *(MONITOR_MGR **)(v17 + 96);
    if ( !v32 )
    {
      v33 = WdLogNewEntry5_WdError(0LL, v17);
      *(_QWORD *)(v33 + 24) = this;
      WdLogEvent5_WdError(v33);
      return 3221225485LL;
    }
    return (unsigned int)MONITOR_MGR::_DRTGetTargetInformation(v32, a2, v14, v15);
  }
  v20 = (unsigned int)(v19 - 1);
  if ( !(_DWORD)v20 )
  {
    if ( (int)DmmEnableModeResetOnMonitorEvent((PERESOURCE *)this, 0LL) < 0 )
    {
      v31 = WdLogNewEntry5_WdAssertion(v29, v28);
      WdLogEvent5_WdAssertion(v31);
    }
    SimulatedMonitor = MonitorCreateSimulatedMonitor(
                         (PERESOURCE *)this,
                         *((unsigned int *)a2 + 4),
                         *((unsigned int *)a2 + 5),
                         v30,
                         v34,
                         0,
                         v35,
                         a3);
    goto LABEL_20;
  }
  if ( (_DWORD)v20 == 1 )
  {
    if ( (int)DmmEnableModeResetOnMonitorEvent((PERESOURCE *)this, 0LL) < 0 )
    {
      v25 = WdLogNewEntry5_WdAssertion(v24, v23);
      WdLogEvent5_WdAssertion(v25);
    }
    SimulatedMonitor = MonitorDestroySimulatedMonitor(this, *((_DWORD *)a2 + 4), a3);
LABEL_20:
    LOBYTE(v27) = 1;
    v22 = SimulatedMonitor;
    DmmEnableModeResetOnMonitorEvent((PERESOURCE *)this, v27);
    return v22;
  }
  v21 = WdLogNewEntry5_WdWarning(v20, v17, v14);
  *(_QWORD *)(v21 + 24) = *((unsigned int *)a2 + 3);
  *(_QWORD *)(v21 + 32) = a2;
  WdLogEvent5_WdWarning(v21);
  return (unsigned int)-1073741811;
}
