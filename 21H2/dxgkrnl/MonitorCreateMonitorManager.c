/*
 * XREFs of MonitorCreateMonitorManager @ 0x1C020FDD0
 * Callers:
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C020FEC0 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0MONITOR_MGR@@QEAA@PEAVADAPTER_DISPLAY@@@Z @ 0x1C0028228 (--0MONITOR_MGR@@QEAA@PEAVADAPTER_DISPLAY@@@Z.c)
 *     ??_EMONITOR_MGR@@UEAAPEAXI@Z @ 0x1C006B150 (--_EMONITOR_MGR@@UEAAPEAXI@Z.c)
 *     ?_InitializeMonitorManager@MONITOR_MGR@@QEAAJXZ @ 0x1C020FE6C (-_InitializeMonitorManager@MONITOR_MGR@@QEAAJXZ.c)
 */

__int64 __fastcall MonitorCreateMonitorManager(struct ADAPTER_DISPLAY *a1, MONITOR_MGR **a2)
{
  __int64 v4; // r9
  MONITOR_MGR *v5; // rax
  MONITOR_MGR *v6; // rax
  MONITOR_MGR *v7; // rbx
  __int64 result; // rax
  unsigned int v9; // esi

  *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2) + 24) = a1;
  if ( !a1 || !a2 )
  {
    WdLogSingleEntry2(2LL, a1, a2);
    return 3221225485LL;
  }
  *a2 = 0LL;
  v5 = (MONITOR_MGR *)operator new[](0x2A0uLL, 0x4D677844u, 64LL, v4);
  if ( !v5 || (v6 = MONITOR_MGR::MONITOR_MGR(v5, a1), (v7 = v6) == 0LL) )
  {
    WdLogSingleEntry1(2LL, *((_QWORD *)a1 + 2));
    return 3221225485LL;
  }
  result = MONITOR_MGR::_InitializeMonitorManager(v6);
  v9 = result;
  if ( (int)result < 0 )
  {
    MONITOR_MGR::`vector deleting destructor'(v7, 1);
    return v9;
  }
  else
  {
    *a2 = v7;
  }
  return result;
}
