/*
 * XREFs of MonitorNotifyDXGIGammaRampChange @ 0x1C00DFFEC
 * Callers:
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C012A464 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     DxgkAdjustFullscreenGamma @ 0x1C021E6F0 (DxgkAdjustFullscreenGamma.c)
 *     DxgkSetGammaRamp @ 0x1C0255830 (DxgkSetGammaRamp.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_NotifyDXGIGammaRampChange@DXGMONITOR@@QEAAJXZ @ 0x1C00E0080 (-_NotifyDXGIGammaRampChange@DXGMONITOR@@QEAAJXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00EFE18 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorNotifyDXGIGammaRampChange(DXGADAPTER *a1, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  MONITOR_MGR *v7; // rdi
  int MonitorInstance; // ebx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  struct DXGMONITOR *v14; // [rsp+30h] [rbp+8h] BYREF

  v2 = a2;
  if ( !a1 || a2 == -1 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v5, v4);
    WdLogEvent5_WdAssertion(v10);
  }
  v6 = *((_QWORD *)a1 + 334);
  if ( !v6 )
  {
    v11 = WdLogNewEntry5_WdAssertion(v5, v4);
    WdLogEvent5_WdAssertion(v11);
    v6 = *((_QWORD *)a1 + 334);
  }
  v7 = *(MONITOR_MGR **)(v6 + 96);
  if ( !v7 )
  {
    v12 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v12 + 24) = a1;
    WdLogEvent5_WdError(v12);
    return 3221225485LL;
  }
  v14 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v7, v2, 1u, &v14);
  if ( MonitorInstance < 0 )
  {
    v13 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v13 + 24) = v2;
    *(_QWORD *)(v13 + 32) = v7;
    WdLogEvent5_WdDmmEvent(v13);
  }
  else
  {
    DXGMONITOR::_NotifyDXGIGammaRampChange(v14);
  }
  return (unsigned int)MonitorInstance;
}
