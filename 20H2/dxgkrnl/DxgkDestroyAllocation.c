/*
 * XREFs of DxgkDestroyAllocation @ 0x1C0109C80
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C0027400 (memset.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00F9DB0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0108EE0 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 */

__int64 __fastcall DxgkDestroyAllocation(ULONG64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct DXGPROCESS *v10; // rbx
  struct DXGPROCESS *v11; // r10
  __int64 v12; // rdx
  unsigned int v13; // ebx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct DXGTHREAD *Current; // rax
  __int64 v18; // rax
  int v19; // [rsp+40h] [rbp-98h] BYREF
  __int64 v20; // [rsp+48h] [rbp-90h]
  char v21; // [rsp+50h] [rbp-88h]
  unsigned int *v22[2]; // [rsp+58h] [rbp-80h]
  unsigned int v23[2]; // [rsp+68h] [rbp-70h]
  _QWORD v24[10]; // [rsp+70h] [rbp-68h] BYREF

  memset(v24, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v24[1]);
  v24[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v24[3]) = 51;
  LOBYTE(v24[6]) = -1;
  v19 = -1;
  v20 = 0LL;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v21 = 1;
    v19 = 2006;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, &EventProfilerEnter, v3, 2006);
  }
  else
  {
    v21 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v19, 2006LL);
  CurrentProcess = PsGetCurrentProcess(v5, v4);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v10 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( (!ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) != 0)
    && (Current = DXGTHREAD::GetCurrent(v9, v8)) != 0LL
    && (v11 = (struct DXGPROCESS *)*((_QWORD *)Current + 1)) != 0LL
    || (v11 = v10) != 0LL )
  {
    if ( a1 >= MmUserProbeAddress )
      a1 = MmUserProbeAddress;
    *(_OWORD *)v22 = *(_OWORD *)a1;
    *(_QWORD *)v23 = *(_QWORD *)(a1 + 16);
    v13 = DxgkDestroyAllocationHelper(
            v11,
            (unsigned int)v22[0],
            HIDWORD(v22[0]),
            v22[1],
            v23[0],
            0,
            (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v24,
            1);
  }
  else
  {
    v18 = WdLogNewEntry5_WdError(v9, v8);
    v13 = -1073741811;
    *(_QWORD *)(v18 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v18);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19, v12);
  if ( v21 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v19);
  return v13;
}
