/*
 * XREFs of DxgkSetProtectedSessionStatusCB @ 0x1C0289F30
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?SetSessionStatus@DXGPROTECTEDSESSION@@QEAAJW4_DXGK_PROTECTED_SESSION_STATUS@@@Z @ 0x1C0047FA0 (-SetSessionStatus@DXGPROTECTEDSESSION@@QEAAJW4_DXGK_PROTECTED_SESSION_STATUS@@@Z.c)
 */

__int64 __fastcall DxgkSetProtectedSessionStatusCB(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+28h] [rbp-20h]
  char v12; // [rsp+30h] [rbp-18h]

  if ( KeGetCurrentIrql() >= 2u )
  {
    v4 = WdLogNewEntry5_WdCriticalError(a1, a2);
    *(_QWORD *)(v4 + 40) = DxgkSetProtectedSessionStatusCB;
    *(_QWORD *)(v4 + 24) = 275LL;
    *(_QWORD *)(v4 + 32) = 20LL;
    *(_OWORD *)(v4 + 48) = 0LL;
    WdLogEvent5_WdCriticalError(v4);
  }
  v10 = -1;
  v11 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v12 = 1;
    v10 = 15000;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 15000);
  }
  else
  {
    v12 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v10, 15000LL);
  if ( *(_QWORD *)a1 )
    v6 = DXGPROTECTEDSESSION::SetSessionStatus(
           *(DXGPROTECTEDSESSION **)a1,
           (enum _DXGK_PROTECTED_SESSION_STATUS)*(_DWORD *)(a1 + 8));
  else
    v6 = -1073741811;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v10, v5);
  if ( v12 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v7, &EventProfilerExit, v8, v10);
  return v6;
}
