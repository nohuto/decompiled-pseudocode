/*
 * XREFs of DxgkInvalidateMonitorConnections @ 0x1C014BB30
 * Callers:
 *     DxgkCompleteTopologyTransition @ 0x1C014B9F0 (DxgkCompleteTopologyTransition.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02925C8 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0292A64 (-HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCEN.c)
 *     DxgkHandleForceProjectionMonitor @ 0x1C0293330 (DxgkHandleForceProjectionMonitor.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C00E444C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C014BC90 (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 */

__int64 __fastcall DxgkInvalidateMonitorConnections(unsigned __int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // edi
  __int64 v10; // rcx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v16; // rax
  int v17; // [rsp+20h] [rbp-89h] BYREF
  __int64 v18; // [rsp+28h] [rbp-81h]
  char v19; // [rsp+30h] [rbp-79h]
  _QWORD v20[12]; // [rsp+40h] [rbp-69h] BYREF
  _QWORD v21[10]; // [rsp+A0h] [rbp-9h] BYREF

  memset(v21, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v21[1]);
  v17 = -1;
  v18 = 0LL;
  v21[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v21[3]) = 37;
  LOBYTE(v21[6]) = -1;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v19 = 1;
    v17 = 2165;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, &EventProfilerEnter, v3, 2165);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v17, 2165LL);
  v6 = WdLogNewEntry5_WdEvent(v5, v4);
  *(_QWORD *)(v6 + 24) = a1;
  WdLogEvent5_WdEvent(v6);
  if ( (a1 & 1) == 0 && (a1 & 2) == 0 )
  {
    v16 = WdLogNewEntry5_WdAssertion(v8, v7);
    *(_QWORD *)(v16 + 24) = 2831LL;
    WdLogEvent5_WdAssertion(v16);
  }
  v9 = DisplayConfigHandleMonitorInvalidation(a1, 0LL, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v21);
  memset(v20, 0, sizeof(v20));
  LODWORD(v20[6]) |= 2u;
  memset(&v20[1], 0, 36);
  v20[0] = 0x6000000002LL;
  v20[7] = a1;
  LODWORD(v20[10]) = v9;
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v10);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v20, CurrentProcessSessionId);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17, v12);
  if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerExit, v14, v17);
  return v9;
}
