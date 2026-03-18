/*
 * XREFs of DxgkSetYieldPercentage @ 0x1C0338F80
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CheckTokenForResourceManagerAccess@@YA_NXZ @ 0x1C0218D54 (-CheckTokenForResourceManagerAccess@@YA_NXZ.c)
 *     ?ApplyResourceManagerPolicyToRenderAdapters@@YAXW4_GLOBAL_RM_POLICY_TYPE@@PEAX@Z @ 0x1C0334F40 (-ApplyResourceManagerPolicyToRenderAdapters@@YAXW4_GLOBAL_RM_POLICY_TYPE@@PEAX@Z.c)
 */

__int64 __fastcall DxgkSetYieldPercentage(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct DXGPROCESS *Current; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int *v12; // rax
  unsigned int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // [rsp+20h] [rbp-48h] BYREF
  __int64 v21; // [rsp+28h] [rbp-40h]
  char v22; // [rsp+30h] [rbp-38h]
  unsigned int v23; // [rsp+38h] [rbp-30h]
  __int128 v24; // [rsp+40h] [rbp-28h] BYREF

  v3 = (unsigned int *)a1;
  v20 = -1;
  v21 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v22 = 1;
    v20 = 2139;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2139);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v20, 2139);
  if ( !CheckTokenForResourceManagerAccess() )
  {
    Current = DXGPROCESS::GetCurrent(v5, v4, v6, v7);
    WdLogSingleEntry2(3LL, Current, -1073741790LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
    if ( v22 )
    {
      LOBYTE(v9) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v9, &EventProfilerExit, v10, v20);
    }
    return 3221225506LL;
  }
  v24 = 0LL;
  v12 = v3;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v12 = (unsigned int *)MmUserProbeAddress;
  v23 = *v12;
  v13 = v23;
  if ( v23 < 0x10 )
  {
    WdLogSingleEntry1(3LL, 4414LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
    if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v20);
    return 3221225485LL;
  }
  if ( v23 > 0x10 )
    v13 = 16;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (unsigned int *)MmUserProbeAddress;
  memmove(&v24, v3, v13);
  if ( (unsigned int)(HIDWORD(v24) - 1) > 0x62 )
  {
    WdLogSingleEntry2(3LL, HIDWORD(v24), -1073741811LL);
  }
  else
  {
    if ( (DWORD2(v24) & 0xFFFFFFFE) == 0 && !DWORD1(v24) )
    {
      ApplyResourceManagerPolicyToRenderAdapters(0, (__int64)&v24);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
      if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerExit, v17, v20);
      return 0LL;
    }
    WdLogSingleEntry1(3LL, -1073741811LL);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
  if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v20);
  return 3221225485LL;
}
