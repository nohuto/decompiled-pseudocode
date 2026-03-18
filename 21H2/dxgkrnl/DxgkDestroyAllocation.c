/*
 * XREFs of DxgkDestroyAllocation @ 0x1C01DFF70
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C019B070 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 */

__int64 __fastcall DxgkDestroyAllocation(ULONG64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct DXGPROCESS *Current; // r10
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v13; // [rsp+50h] [rbp-98h] BYREF
  __int64 v14; // [rsp+58h] [rbp-90h]
  char v15; // [rsp+60h] [rbp-88h]
  unsigned int *v16[2]; // [rsp+68h] [rbp-80h]
  unsigned int v17[2]; // [rsp+78h] [rbp-70h]
  _QWORD v18[10]; // [rsp+80h] [rbp-68h] BYREF

  memset(v18, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v18[1]);
  v18[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v18[3]) = 51;
  LOBYTE(v18[6]) = -1;
  v13 = -1;
  v14 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v15 = 1;
    v13 = 2006;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, &EventProfilerEnter, v3, 2006);
  }
  else
  {
    v15 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v13, 2006);
  Current = DXGPROCESS::GetCurrent(v5, v4, v6, v7);
  if ( Current )
  {
    if ( a1 >= MmUserProbeAddress )
      a1 = MmUserProbeAddress;
    *(_OWORD *)v16 = *(_OWORD *)a1;
    *(_QWORD *)v17 = *(_QWORD *)(a1 + 16);
    v9 = DxgkDestroyAllocationHelper(
           Current,
           (unsigned int)v16[0],
           HIDWORD(v16[0]),
           v16[1],
           v17[0],
           0,
           (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v18,
           1);
  }
  else
  {
    v9 = -1073741811;
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
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v13);
  if ( v15 )
  {
    LOBYTE(v10) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v10, &EventProfilerExit, v11, v13);
  }
  return v9;
}
