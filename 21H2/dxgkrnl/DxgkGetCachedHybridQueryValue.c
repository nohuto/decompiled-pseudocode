/*
 * XREFs of DxgkGetCachedHybridQueryValue @ 0x1C01DC8E0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C002B250 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C002C1E0 (--0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetGpuPreferenceDListState@DXGPROCESS@@QEAA?AW4_D3DKMT_GPU_PREFERENCE_QUERY_STATE@@I@Z @ 0x1C0057B50 (-GetGpuPreferenceDListState@DXGPROCESS@@QEAA-AW4_D3DKMT_GPU_PREFERENCE_QUERY_STATE@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C01A442C (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall DxgkGetCachedHybridQueryValue(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // r15
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct DXGPROCESS *Current; // r14
  ULONG64 v9; // rax
  int v10; // ebx
  int v11; // ebx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r8
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v17; // rax
  struct DXGADAPTER *v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rbx
  __int64 HighPart; // rdi
  __int64 LowPart; // rbx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rbx
  _BYTE v26[16]; // [rsp+50h] [rbp-78h] BYREF
  struct _LUID v27[2]; // [rsp+60h] [rbp-68h]
  int v28; // [rsp+78h] [rbp-50h] BYREF
  __int64 v29; // [rsp+80h] [rbp-48h]
  char v30; // [rsp+88h] [rbp-40h]
  _BYTE v31[8]; // [rsp+90h] [rbp-38h] BYREF
  struct DXGADAPTER *v32; // [rsp+98h] [rbp-30h]
  char v33; // [rsp+A0h] [rbp-28h]
  int GpuPreferenceDListState; // [rsp+D8h] [rbp+10h]
  unsigned __int64 v35; // [rsp+E0h] [rbp+18h] BYREF

  v3 = (_DWORD *)a1;
  v28 = -1;
  v29 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v30 = 1;
    v28 = 2090;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2090);
  }
  else
  {
    v30 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v28, 2090);
  Current = DXGPROCESS::GetCurrent(v5, v4, v6, v7);
  if ( Current )
  {
    v9 = (ULONG64)v3;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v9 = MmUserProbeAddress;
    *(_OWORD *)&v27[0].LowPart = *(_OWORD *)v9;
    v10 = *(_DWORD *)(v9 + 16);
    GpuPreferenceDListState = 0;
    DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v26, Current);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v26);
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        if ( v11 != 1 )
        {
          WdLogSingleEntry1(1LL, 3865LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"Invalid D3DKMT_HYBRID_LIST QueryType!",
            3865LL,
            0LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_11;
        }
        v12 = *((_DWORD *)Current + 134);
      }
      else
      {
        v12 = *((_DWORD *)Current + 135);
      }
      GpuPreferenceDListState = v12;
LABEL_11:
      if ( (unsigned __int64)v3 >= MmUserProbeAddress )
        v3 = (_DWORD *)MmUserProbeAddress;
      *v3 = GpuPreferenceDListState;
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v26);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
      if ( v30 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerExit, v14, v28);
      }
      return 0LL;
    }
    Global = DXGGLOBAL_GetGlobal();
    v17 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)&v27[0].HighPart, &v35);
    v18 = v17;
    if ( v17 )
    {
      v32 = v17;
      v33 = 0;
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v31);
      DXGADAPTER::ReleaseReference(v18);
      if ( *((_QWORD *)v18 + 350) )
      {
        if ( *((_DWORD *)v18 + 50) == 1 )
        {
          v25 = *((_QWORD *)v18 + 350);
          KeEnterCriticalRegion();
          ExAcquirePushLockSharedEx(v25 + 72, 0LL);
          GpuPreferenceDListState = DXGPROCESS::GetGpuPreferenceDListState(Current, *((_DWORD *)v18 + 60));
          ExReleasePushLockSharedEx(v25 + 72, 0LL);
          KeLeaveCriticalRegion();
        }
        if ( v33 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v31);
        goto LABEL_11;
      }
      HighPart = (unsigned int)v27[0].HighPart;
      LowPart = (int)v27[1].LowPart;
      WdLogSingleEntry2(2LL, (int)v27[1].LowPart, (unsigned int)v27[0].HighPart);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"D3DKMTGetCachedHybridQueryValue called with a display-only adapter with LUID (0x%I64x%08I64x).",
        LowPart,
        HighPart,
        0LL,
        0LL,
        0LL);
      if ( v33 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v31);
    }
    else
    {
      v19 = (unsigned int)v27[0].HighPart;
      v20 = (int)v27[1].LowPart;
      WdLogSingleEntry2(2LL, (int)v27[1].LowPart, (unsigned int)v27[0].HighPart);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to reference adapter by LUID (0x%I64x%08I64x).",
        v20,
        v19,
        0LL,
        0LL,
        0LL);
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v26);
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
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
  if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v28);
  return 3221225485LL;
}
