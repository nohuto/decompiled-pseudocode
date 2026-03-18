/*
 * XREFs of DxgkDestroyAllocation2 @ 0x1C010EA00
 * Callers:
 *     ?VmBusDestroyAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023BBE0 (-VmBusDestroyAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FBEF0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C010E330 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 */

__int64 __fastcall DxgkDestroyAllocation2(ULONG64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  char v4; // si
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct DXGPROCESS *v12; // rdi
  struct DXGPROCESS *v13; // r10
  struct _D3DDDICB_DESTROYALLOCATION2FLAGS v14; // rcx^4
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  struct DXGTHREAD *Current; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  int v29; // [rsp+40h] [rbp-98h] BYREF
  __int64 v30; // [rsp+48h] [rbp-90h]
  char v31; // [rsp+50h] [rbp-88h]
  unsigned int *v32[2]; // [rsp+58h] [rbp-80h]
  unsigned int v33[2]; // [rsp+68h] [rbp-70h]
  _QWORD v34[10]; // [rsp+70h] [rbp-68h] BYREF

  memset(v34, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v34[1]);
  v34[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v34[3]) = 52;
  LOBYTE(v34[6]) = -1;
  v29 = -1;
  v30 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v31 = 1;
    v29 = 2105;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, &EventProfilerEnter, v3, 2105);
  }
  else
  {
    v31 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v29, 2105LL);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  CurrentProcess = PsGetCurrentProcess(v6, v5);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v12 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( (!ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) != 0)
    && (Current = DXGTHREAD::GetCurrent(v10, v9)) != 0LL
    && (v13 = (struct DXGPROCESS *)*((_QWORD *)Current + 1)) != 0LL
    || (v13 = v12) != 0LL )
  {
    if ( v4 )
    {
      if ( a1 >= MmUserProbeAddress )
        a1 = MmUserProbeAddress;
      *(_OWORD *)v32 = *(_OWORD *)a1;
      *(_QWORD *)v33 = *(_QWORD *)(a1 + 16);
      v14.0 = (struct _D3DDDICB_DESTROYALLOCATION2FLAGS::$D35BDED8E381779C59C0009B00E168F7::$815964D178D3487C3146BEBBE8BF611F)v33[1];
      if ( (v33[1] & 0x7FFFFFFC) != 0 )
      {
        v15 = WdLogNewEntry5_WdWarning(*(_QWORD *)v33, v9, v11);
        *(_QWORD *)(v15 + 24) = 10083LL;
        WdLogEvent5_WdWarning(v15);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29, v16);
        if ( v31 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v29);
        }
        return 3221225485LL;
      }
    }
    else
    {
      *(_OWORD *)v32 = *(_OWORD *)a1;
      *(_QWORD *)v33 = *(_QWORD *)(a1 + 16);
      v14.0 = (struct _D3DDDICB_DESTROYALLOCATION2FLAGS::$D35BDED8E381779C59C0009B00E168F7::$815964D178D3487C3146BEBBE8BF611F)v33[1];
    }
    v20 = DxgkDestroyAllocationHelper(
            v13,
            (unsigned int)v32[0],
            HIDWORD(v32[0]),
            v32[1],
            v33[0],
            v14,
            (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v34,
            v4);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29, v21);
    if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v29);
    return v20;
  }
  else
  {
    v25 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v25 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v25);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29, v26);
    if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v27, &EventProfilerExit, v28, v29);
    return 3221225485LL;
  }
}
