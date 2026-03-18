/*
 * XREFs of DxgkSetProcessSchedulingPriorityBand @ 0x1C03386A0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C001D8C0 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C0164280 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1C01DF770 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ?CheckTokenForResourceManagerAccess@@YA_NXZ @ 0x1C0218D54 (-CheckTokenForResourceManagerAccess@@YA_NXZ.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C0334C04 (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ?SetProcessSchedulingPriorityBand@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULING_PRIORITYBAND@@@Z @ 0x1C0337318 (-SetProcessSchedulingPriorityBand@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULING_PRIORITYBAND@@@Z.c)
 */

__int64 __fastcall DxgkSetProcessSchedulingPriorityBand(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct DXGPROCESS *Current; // rax
  unsigned int v9; // edi
  __int64 v10; // rcx
  __int64 v11; // r8
  bool v12; // sf
  unsigned int *v14; // rax
  unsigned int v15; // edx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r8
  struct DXGPROCESS *Process; // rax
  int v22; // eax
  int v23; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+28h] [rbp-A0h]
  char v25; // [rsp+30h] [rbp-98h]
  unsigned int v26; // [rsp+38h] [rbp-90h]
  void *v27[2]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v28; // [rsp+50h] [rbp-78h]
  _BYTE v29[80]; // [rsp+60h] [rbp-68h] BYREF

  v3 = (unsigned int *)a1;
  v23 = -1;
  v24 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v25 = 1;
    v23 = 2140;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2140);
  }
  else
  {
    v25 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v23, 2140);
  if ( !CheckTokenForResourceManagerAccess() )
  {
    Current = DXGPROCESS::GetCurrent(v5, v4, v6, v7);
    v9 = -1073741790;
    WdLogSingleEntry2(3LL, Current, -1073741790LL);
    goto LABEL_7;
  }
  if ( !*((_DWORD *)DXGGLOBAL_GetGlobal() + 432) )
  {
    v9 = -1073741823;
    WdLogSingleEntry1(3LL, -1073741823LL);
LABEL_7:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
    if ( v25 )
    {
      LOBYTE(v10) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      v12 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
      goto LABEL_9;
    }
    return v9;
  }
  *(_OWORD *)v27 = 0LL;
  v28 = 0LL;
  v14 = v3;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v14 = (unsigned int *)MmUserProbeAddress;
  v26 = *v14;
  v15 = v26;
  if ( v26 < 0x18 )
  {
    WdLogSingleEntry1(3LL, 4601LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
    if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerExit, v17, v23);
    return 3221225485LL;
  }
  if ( v26 > 0x18 )
    v15 = 24;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (unsigned int *)MmUserProbeAddress;
  memmove(v27, v3, v15);
  DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v29, v27[1], 0x2000);
  v18 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v29, 0);
  v9 = v18;
  if ( v18 < 0 )
  {
    WdLogSingleEntry2(3LL, v27[1], v18);
    goto LABEL_27;
  }
  if ( (unsigned int)v28 <= 1 && !HIDWORD(v27[0]) )
  {
    Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v29);
    v22 = DXGPROCESS::SetProcessSchedulingPriorityBand((__int64)Process, v28);
    v9 = v22;
    if ( v22 < 0 )
      WdLogSingleEntry1(3LL, v22);
LABEL_27:
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v29);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
    if ( v25 )
    {
      v12 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_9:
      if ( v12 )
        McTemplateK0q_EtwWriteTransfer(v10, &EventProfilerExit, v11, v23);
    }
    return v9;
  }
  WdLogSingleEntry1(3LL, -1073741811LL);
  DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v29);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
  if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v19, &EventProfilerExit, v20, v23);
  return 3221225485LL;
}
