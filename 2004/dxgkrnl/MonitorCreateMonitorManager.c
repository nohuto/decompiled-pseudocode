/*
 * XREFs of MonitorCreateMonitorManager @ 0x1C0176AB0
 * Callers:
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C017A4C0 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0MONITOR_MGR@@QEAA@PEAVADAPTER_DISPLAY@@@Z @ 0x1C0021158 (--0MONITOR_MGR@@QEAA@PEAVADAPTER_DISPLAY@@@Z.c)
 *     ??_GMONITOR_MGR@@QEAAPEAXI@Z @ 0x1C005CFE0 (--_GMONITOR_MGR@@QEAAPEAXI@Z.c)
 *     ?_InitializeMonitorManager@MONITOR_MGR@@QEAAJXZ @ 0x1C0176B4C (-_InitializeMonitorManager@MONITOR_MGR@@QEAAJXZ.c)
 */

__int64 __fastcall MonitorCreateMonitorManager(struct ADAPTER_DISPLAY *a1, MONITOR_MGR **a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  MONITOR_MGR *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  MONITOR_MGR *v11; // rbx
  __int64 result; // rax
  unsigned int v13; // esi
  __int64 v14; // rax

  *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2, a3, a4) + 24) = a1;
  if ( !a1 || !a2 )
  {
    v14 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v14 + 24) = a1;
    *(_QWORD *)(v14 + 32) = a2;
    goto LABEL_12;
  }
  *a2 = 0LL;
  v8 = (MONITOR_MGR *)operator new[](0x308uLL, 0x4D677844u, (POOL_TYPE)512);
  if ( v8 )
    v11 = MONITOR_MGR::MONITOR_MGR(v8, a1);
  else
    v11 = 0LL;
  if ( !v11 )
  {
    v14 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v14 + 24) = *((_QWORD *)a1 + 2);
LABEL_12:
    WdLogEvent5_WdError(v14);
    return 3221225485LL;
  }
  result = MONITOR_MGR::_InitializeMonitorManager(v11);
  v13 = result;
  if ( (int)result < 0 )
  {
    MONITOR_MGR::`scalar deleting destructor'(v11);
    return v13;
  }
  else
  {
    *a2 = v11;
  }
  return result;
}
