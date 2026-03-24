/*
 * XREFs of MonitorNotifyDXGIGammaRampChange @ 0x1C013D720
 * Callers:
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C013D14C (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     DxgkAdjustFullscreenGamma @ 0x1C0222680 (DxgkAdjustFullscreenGamma.c)
 *     DxgkSetGammaRamp @ 0x1C0259E30 (DxgkSetGammaRamp.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004448 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0129B38 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_NotifyDXGIGammaRampChange@DXGMONITOR@@QEAAJXZ @ 0x1C013D7B4 (-_NotifyDXGIGammaRampChange@DXGMONITOR@@QEAAJXZ.c)
 */

__int64 __fastcall MonitorNotifyDXGIGammaRampChange(DXGADAPTER *a1, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  struct _FAST_MUTEX *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  int MonitorInstance; // ebx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  struct DXGMONITOR *v16; // [rsp+30h] [rbp+8h] BYREF

  v2 = a2;
  if ( !a1 || a2 == -1 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v5, v4);
    WdLogEvent5_WdAssertion(v12);
  }
  v6 = *((_QWORD *)a1 + 337);
  if ( !v6 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v5, v4);
    WdLogEvent5_WdAssertion(v13);
    v6 = *((_QWORD *)a1 + 337);
  }
  v7 = *(struct _FAST_MUTEX **)(v6 + 96);
  if ( !v7 )
  {
    v14 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v14 + 24) = a1;
    WdLogEvent5_WdError(v14);
    return 3221225485LL;
  }
  v16 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v7, (unsigned int)v2, 1, &v16);
  if ( MonitorInstance < 0 )
  {
    v15 = WdLogNewEntry5_WdDmmEvent(v9, v8);
    *(_QWORD *)(v15 + 24) = v2;
    *(_QWORD *)(v15 + 32) = v7;
    WdLogEvent5_WdDmmEvent(v15);
  }
  else
  {
    DXGMONITOR::_NotifyDXGIGammaRampChange(v16);
  }
  return (unsigned int)MonitorInstance;
}
