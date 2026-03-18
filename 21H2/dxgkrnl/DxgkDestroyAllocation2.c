/*
 * XREFs of DxgkDestroyAllocation2 @ 0x1C019AE00
 * Callers:
 *     ?VmBusDestroyAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C036BB80 (-VmBusDestroyAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C019B070 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 */

__int64 __fastcall DxgkDestroyAllocation2(ULONG64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  char v4; // si
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v11; // rbx
  struct DXGPROCESS *v12; // rcx
  struct _D3DDDICB_DESTROYALLOCATION2FLAGS v13; // r8^4
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int v17; // ebx
  __int64 v18; // r8
  struct DXGTHREAD *Current; // rax
  __int64 v20; // r8
  int v21; // [rsp+50h] [rbp-98h] BYREF
  __int64 v22; // [rsp+58h] [rbp-90h]
  char v23; // [rsp+60h] [rbp-88h]
  unsigned int *v24[2]; // [rsp+68h] [rbp-80h]
  unsigned int v25[2]; // [rsp+78h] [rbp-70h]
  _QWORD v26[10]; // [rsp+80h] [rbp-68h] BYREF

  memset(v26, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v26[1]);
  v26[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v26[3]) = 52;
  LOBYTE(v26[6]) = -1;
  v21 = -1;
  v22 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v23 = 1;
    v21 = 2105;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, &EventProfilerEnter, v3, 2105);
  }
  else
  {
    v23 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v21, 2105);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  CurrentProcess = PsGetCurrentProcess(v6, v5, v7, v8);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v11 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( (!ProcessDxgProcess || (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) != 0)
    && (Current = DXGTHREAD::GetCurrent()) != 0LL
    && (v12 = (struct DXGPROCESS *)*((_QWORD *)Current + 3)) != 0LL
    || (v12 = v11) != 0LL )
  {
    if ( v4 )
    {
      if ( a1 >= MmUserProbeAddress )
        a1 = MmUserProbeAddress;
      *(_OWORD *)v24 = *(_OWORD *)a1;
      *(_QWORD *)v25 = *(_QWORD *)(a1 + 16);
      v13.0 = (struct _D3DDDICB_DESTROYALLOCATION2FLAGS::$D35BDED8E381779C59C0009B00E168F7::$815964D178D3487C3146BEBBE8BF611F)v25[1];
      if ( (v25[1] & 0x7FFFFFFC) != 0 )
      {
        WdLogSingleEntry1(3LL, 10425LL);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
        if ( v23 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v21);
        }
        return 3221225485LL;
      }
    }
    else
    {
      *(_OWORD *)v24 = *(_OWORD *)a1;
      *(_QWORD *)v25 = *(_QWORD *)(a1 + 16);
      v13.0 = (struct _D3DDDICB_DESTROYALLOCATION2FLAGS::$D35BDED8E381779C59C0009B00E168F7::$815964D178D3487C3146BEBBE8BF611F)v25[1];
    }
    v17 = DxgkDestroyAllocationHelper(
            v12,
            (unsigned int)v24[0],
            HIDWORD(v24[0]),
            v24[1],
            v25[0],
            v13,
            (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v26,
            v4);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
    if ( v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v18, v21);
    return v17;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
    if ( v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v20, v21);
    return 3221225485LL;
  }
}
