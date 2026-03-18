/*
 * XREFs of DxgkCompleteTopologyTransition @ 0x1C01DACE0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DxgkMiracastEnforceInactiveMonitorPolicy @ 0x1C001C290 (DxgkMiracastEnforceInactiveMonitorPolicy.c)
 *     ?ToggleTopologyTransition@DXGGLOBAL@@QEAAEE@Z @ 0x1C001C364 (-ToggleTopologyTransition@DXGGLOBAL@@QEAAEE@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C01985C4 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     DxgkInvalidateMonitorConnections @ 0x1C01DAE20 (DxgkInvalidateMonitorConnections.c)
 */

__int64 DxgkCompleteTopologyTransition()
{
  __int64 v0; // rcx
  __int64 v1; // r8
  int v2; // ebx
  DXGGLOBAL *Global; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGGLOBAL *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  int v10; // [rsp+20h] [rbp-39h] BYREF
  __int64 v11; // [rsp+28h] [rbp-31h]
  char v12; // [rsp+30h] [rbp-29h]
  _QWORD v13[3]; // [rsp+38h] [rbp-21h] BYREF
  _QWORD v14[10]; // [rsp+50h] [rbp-9h] BYREF

  memset(v14, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v14[1]);
  v10 = -1;
  v11 = 0LL;
  v14[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v14[3]) = 38;
  LOBYTE(v14[6]) = -1;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v12 = 1;
    v10 = 2173;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v0, &EventProfilerEnter, v1, 2173);
  }
  else
  {
    v12 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v10, 2173);
  v2 = 0;
  Global = DXGGLOBAL_GetGlobal();
  if ( DXGGLOBAL::ToggleTopologyTransition(Global, 0) )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v5, v4) + 24) = 8070LL;
  }
  else
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v5, v4) + 24) = 8074LL;
    v13[0] = 0LL;
    v13[1] = v14;
    v6 = DXGGLOBAL_GetGlobal();
    v2 = DXGGLOBAL::IterateAdaptersWithCallback(
           (__int64)v6,
           (__int64 (__fastcall *)(_QWORD *, __int64))CompleteTopologyTransitionCallback,
           (__int64)v13,
           4LL);
    if ( v2 >= 0 )
      DxgkMiracastEnforceInactiveMonitorPolicy(v13);
  }
  DxgkInvalidateMonitorConnections(1uLL);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v10);
  if ( v12 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v7, &EventProfilerExit, v8, v10);
  return (unsigned int)v2;
}
