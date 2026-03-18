/*
 * XREFs of DxgkCloseAdapterImpl @ 0x1C0112710
 * Callers:
 *     DxgkCloseAdapter @ 0x1C01126F0 (DxgkCloseAdapter.c)
 *     DxgkOpenAdapterFromDeviceName @ 0x1C0135B70 (DxgkOpenAdapterFromDeviceName.c)
 *     DxgkCloseAdapterInternal @ 0x1C01505B8 (DxgkCloseAdapterInternal.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C00E1F44 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00F9DB0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCloseAdapterImpl(__int64 a1, char a2, __int64 a3)
{
  unsigned int *v4; // rbx
  __int64 v5; // rdx
  ULONG64 v6; // rcx
  unsigned int v7; // ebx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct _KTHREAD **v12; // rdi
  struct _KTHREAD **v13; // rcx
  unsigned int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  struct DXGTHREAD *Current; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // [rsp+20h] [rbp-28h] BYREF
  __int64 v25; // [rsp+28h] [rbp-20h]
  char v26; // [rsp+30h] [rbp-18h]

  v4 = (unsigned int *)a1;
  v24 = -1;
  v25 = 0LL;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v26 = 1;
    v24 = 2002;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2002);
  }
  else
  {
    v26 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v24, 2002LL);
  if ( a2 )
  {
    v6 = MmUserProbeAddress;
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (unsigned int *)MmUserProbeAddress;
    v7 = *v4;
  }
  else
  {
    v7 = *v4;
  }
  CurrentProcess = PsGetCurrentProcess(v6, v5);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v12 = (struct _KTHREAD **)ProcessDxgProcess;
  if ( (!ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) != 0)
    && (Current = DXGTHREAD::GetCurrent(v11, v10)) != 0LL
    && (v13 = (struct _KTHREAD **)*((_QWORD *)Current + 1)) != 0LL
    || (v13 = v12) != 0LL )
  {
    v14 = DXGADAPTER::DestroyHandle(v13, v7);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24, v15);
    if ( v26 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerExit, v17, v24);
    }
    return v14;
  }
  else
  {
    v20 = WdLogNewEntry5_WdError(0LL, v10);
    *(_QWORD *)(v20 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v20);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24, v21);
    if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v24);
    return 3221225485LL;
  }
}
