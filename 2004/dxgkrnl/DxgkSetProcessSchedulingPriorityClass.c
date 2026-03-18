/*
 * XREFs of DxgkSetProcessSchedulingPriorityClass @ 0x1C00DFB40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C0001FDC (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?SetProcessSchedulingPriorityClass@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULINGPRIORITYCLASS@@_N@Z @ 0x1C00DF94C (-SetProcessSchedulingPriorityClass@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULINGPRIORITYCLASS@@_N@Z.c)
 *     ?Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ @ 0x1C00E2880 (-Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C00E2920 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 */

__int64 __fastcall DxgkSetProcessSchedulingPriorityClass(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // rdx
  int v6; // ebx
  DXGPROCESS *Process; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  int v11; // [rsp+20h] [rbp-29h] BYREF
  __int64 v12; // [rsp+28h] [rbp-21h]
  char v13; // [rsp+30h] [rbp-19h]
  _BYTE v14[8]; // [rsp+40h] [rbp-9h] BYREF
  __int64 v15; // [rsp+48h] [rbp-1h]
  __int64 v16; // [rsp+50h] [rbp+7h]
  int v17; // [rsp+58h] [rbp+Fh]
  __int16 v18; // [rsp+5Ch] [rbp+13h]
  bool v19; // [rsp+5Eh] [rbp+15h]

  v11 = -1;
  v12 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v13 = 1;
    v11 = 2031;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2031);
  }
  else
  {
    v13 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v11, 2031LL);
  v16 = 0LL;
  v18 = 0;
  v15 = a1;
  v17 = 512;
  v19 = 0;
  v6 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v14, 0);
  if ( v6 >= 0 )
  {
    Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v14);
    v6 = DXGPROCESS::SetProcessSchedulingPriorityClass(Process, a2, v19);
    DXGPROCESSMUTEXBYHANDLE::Release((DXGPROCESSMUTEXBYHANDLE *)v14);
  }
  if ( (_BYTE)v18 )
    DXGPROCESSMUTEXBYHANDLE::Release((DXGPROCESSMUTEXBYHANDLE *)v14);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v11, v5);
  if ( v13 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v8, &EventProfilerExit, v9, v11);
  return (unsigned int)v6;
}
