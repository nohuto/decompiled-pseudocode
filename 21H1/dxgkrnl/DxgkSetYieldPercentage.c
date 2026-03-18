/*
 * XREFs of DxgkSetYieldPercentage @ 0x1C0283290
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CheckTokenForResourceManagerAccess@@YA_NXZ @ 0x1C0185E58 (-CheckTokenForResourceManagerAccess@@YA_NXZ.c)
 *     ?ApplyResourceManagerPolicyToRenderAdapters@@YAXW4_GLOBAL_RM_POLICY_TYPE@@PEAX@Z @ 0x1C027FB68 (-ApplyResourceManagerPolicyToRenderAdapters@@YAXW4_GLOBAL_RM_POLICY_TYPE@@PEAX@Z.c)
 */

__int64 __fastcall DxgkSetYieldPercentage(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int *v16; // rax
  unsigned int v17; // edx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  int v33; // [rsp+20h] [rbp-48h] BYREF
  __int64 v34; // [rsp+28h] [rbp-40h]
  char v35; // [rsp+30h] [rbp-38h]
  unsigned int v36; // [rsp+38h] [rbp-30h]
  __int128 v37; // [rsp+40h] [rbp-28h] BYREF

  v3 = (unsigned int *)a1;
  v33 = -1;
  v34 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v35 = 1;
    v33 = 2139;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2139);
  }
  else
  {
    v35 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v33, 2139LL);
  if ( !CheckTokenForResourceManagerAccess(v5, v4) )
  {
    v9 = WdLogNewEntry5_WdWarning(v7, v6, v8);
    *(_QWORD *)(v9 + 24) = DXGPROCESS::GetCurrent(v11, v10);
    *(_QWORD *)(v9 + 32) = -1073741790LL;
    WdLogEvent5_WdWarning(v9);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33, v12);
    if ( v35 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerExit, v14, v33);
    }
    return 3221225506LL;
  }
  v37 = 0LL;
  v16 = v3;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v16 = (unsigned int *)MmUserProbeAddress;
  v36 = *v16;
  v17 = v36;
  if ( v36 < 0x10 )
  {
    v18 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v36, v8);
    *(_QWORD *)(v18 + 24) = 4291LL;
    WdLogEvent5_WdWarning(v18);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33, v19);
    if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v33);
    return 3221225485LL;
  }
  if ( v36 > 0x10 )
    v17 = 16;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (unsigned int *)MmUserProbeAddress;
  memmove(&v37, v3, v17);
  v25 = HIDWORD(v37);
  if ( (unsigned int)(HIDWORD(v37) - 1) > 0x62 )
  {
    v26 = WdLogNewEntry5_WdWarning(v23, v22, v24);
    *(_QWORD *)(v26 + 24) = v25;
    *(_QWORD *)(v26 + 32) = -1073741811LL;
  }
  else
  {
    if ( (DWORD2(v37) & 0xFFFFFFFE) == 0 && !DWORD1(v37) )
    {
      ApplyResourceManagerPolicyToRenderAdapters(0LL, (__int64)&v37);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33, v27);
      if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v28, &EventProfilerExit, v29, v33);
      return 0LL;
    }
    v26 = WdLogNewEntry5_WdWarning(v23, v22, v24);
    *(_QWORD *)(v26 + 24) = -1073741811LL;
  }
  WdLogEvent5_WdWarning(v26);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33, v30);
  if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v31, &EventProfilerExit, v32, v33);
  return 3221225485LL;
}
