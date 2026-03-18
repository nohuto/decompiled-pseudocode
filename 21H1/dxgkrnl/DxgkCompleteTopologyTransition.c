/*
 * XREFs of DxgkCompleteTopologyTransition @ 0x1C014B9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DxgkMiracastEnforceInactiveMonitorPolicy @ 0x1C0018850 (DxgkMiracastEnforceInactiveMonitorPolicy.c)
 *     ?ToggleTopologyTransition@DXGGLOBAL@@QEAAEE@Z @ 0x1C0018924 (-ToggleTopologyTransition@DXGGLOBAL@@QEAAEE@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C011739C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     DxgkInvalidateMonitorConnections @ 0x1C014BB30 (DxgkInvalidateMonitorConnections.c)
 */

__int64 DxgkCompleteTopologyTransition()
{
  __int64 v0; // rcx
  __int64 v1; // r8
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  DXGGLOBAL *Global; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct DXGGLOBAL *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v17; // [rsp+20h] [rbp-39h] BYREF
  __int64 v18; // [rsp+28h] [rbp-31h]
  char v19; // [rsp+30h] [rbp-29h]
  _QWORD v20[3]; // [rsp+38h] [rbp-21h] BYREF
  _QWORD v21[10]; // [rsp+50h] [rbp-9h] BYREF

  memset(v21, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v21[1]);
  v17 = -1;
  v18 = 0LL;
  v21[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v21[3]) = 38;
  LOBYTE(v21[6]) = -1;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v19 = 1;
    v17 = 2173;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v0, &EventProfilerEnter, v1, 2173);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v17, 2173LL);
  v2 = 0;
  Global = DXGGLOBAL::GetGlobal(v4, v3);
  if ( DXGGLOBAL::ToggleTopologyTransition(Global, 0LL) )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v7, v6, v8, v9) + 24) = 7535LL;
  }
  else
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v7, v6, v8, v9) + 24) = 7539LL;
    v20[0] = 0LL;
    v20[1] = v21;
    v12 = DXGGLOBAL::GetGlobal(v11, v10);
    v2 = DXGGLOBAL::IterateAdaptersWithCallback(
           (__int64)v12,
           (__int64 (__fastcall *)(_QWORD *, __int64))CompleteTopologyTransitionCallback,
           (__int64)v20,
           4);
    if ( v2 >= 0 )
      DxgkMiracastEnforceInactiveMonitorPolicy(v20);
  }
  DxgkInvalidateMonitorConnections(1uLL);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17, v13);
  if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v17);
  return (unsigned int)v2;
}
