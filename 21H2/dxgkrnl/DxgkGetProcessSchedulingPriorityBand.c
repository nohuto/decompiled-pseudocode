/*
 * XREFs of DxgkGetProcessSchedulingPriorityBand @ 0x1C0337D40
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
 *     ?GetProcessSchedulingPriorityBand@DXGPROCESS@@QEAA?AW4_D3DKMT_SCHEDULING_PRIORITYBAND@@XZ @ 0x1C03364C8 (-GetProcessSchedulingPriorityBand@DXGPROCESS@@QEAA-AW4_D3DKMT_SCHEDULING_PRIORITYBAND@@XZ.c)
 */

__int64 __fastcall DxgkGetProcessSchedulingPriorityBand(ULONG64 a1, __int64 a2, __int64 a3)
{
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
  size_t v15; // r8
  __int64 v16; // rcx
  __int64 v17; // r8
  const void *v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // eax
  struct DXGPROCESS *Process; // r14
  int ProcessSchedulingPriorityBand; // edx
  _DWORD *v24; // rcx
  int v25; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+28h] [rbp-A0h]
  char v27; // [rsp+30h] [rbp-98h]
  unsigned int v28; // [rsp+38h] [rbp-90h]
  int v29; // [rsp+3Ch] [rbp-8Ch]
  void *v30[2]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v31; // [rsp+50h] [rbp-78h]
  _BYTE v32[80]; // [rsp+60h] [rbp-68h] BYREF

  v25 = -1;
  v26 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v27 = 1;
    v25 = 2143;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2143);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v25, 2143);
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
    goto LABEL_7;
  }
  *(_OWORD *)v30 = 0LL;
  v31 = 0LL;
  v14 = (unsigned int *)a1;
  if ( a1 >= MmUserProbeAddress )
    v14 = (unsigned int *)MmUserProbeAddress;
  v28 = *v14;
  v15 = v28;
  if ( v28 >= 0x18 )
  {
    if ( v28 > 0x18 )
      v15 = 24LL;
    v28 = v15;
    v18 = (const void *)a1;
    if ( a1 >= MmUserProbeAddress )
      v18 = (const void *)MmUserProbeAddress;
    memmove(v30, v18, v15);
    if ( !HIDWORD(v30[0]) )
    {
      DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v32, v30[1], 0x2000);
      v21 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v32, 0);
      v9 = v21;
      if ( v21 >= 0 )
      {
        Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v32);
        ProcessSchedulingPriorityBand = DXGPROCESS::GetProcessSchedulingPriorityBand((__int64)Process);
        v29 = ProcessSchedulingPriorityBand;
        if ( ProcessSchedulingPriorityBand == 3 )
        {
          v9 = -1073741595;
          WdLogSingleEntry2(3LL, Process, -1073741595LL);
          DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v32);
LABEL_7:
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
          if ( v27 )
          {
            LOBYTE(v10) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
            v12 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
            goto LABEL_9;
          }
          return v9;
        }
        v24 = (_DWORD *)(a1 + 16);
        if ( a1 + 20 > MmUserProbeAddress || a1 + 20 <= (unsigned __int64)v24 )
          *(_BYTE *)MmUserProbeAddress = 0;
        *v24 = ProcessSchedulingPriorityBand;
      }
      else
      {
        WdLogSingleEntry2(3LL, v30[1], v21);
      }
      DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v32);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
      if ( v27 )
      {
        v12 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_9:
        if ( v12 )
          McTemplateK0q_EtwWriteTransfer(v10, &EventProfilerExit, v11, v25);
      }
      return v9;
    }
    WdLogSingleEntry1(3LL, -1073741811LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
    if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v19, &EventProfilerExit, v20, v25);
    return 3221225485LL;
  }
  else
  {
    WdLogSingleEntry1(3LL, 4937LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
    if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerExit, v17, v25);
    return 3221225485LL;
  }
}
