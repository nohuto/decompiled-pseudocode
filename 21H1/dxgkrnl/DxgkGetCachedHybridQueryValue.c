/*
 * XREFs of DxgkGetCachedHybridQueryValue @ 0x1C014CDB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C000D034 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D3D0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D42C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000E2A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00251CC (--0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetGpuPreferenceDListState@DXGPROCESS@@QEAA?AW4_D3DKMT_GPU_PREFERENCE_QUERY_STATE@@I@Z @ 0x1C0046CAC (-GetGpuPreferenceDListState@DXGPROCESS@@QEAA-AW4_D3DKMT_GPU_PREFERENCE_QUERY_STATE@@I@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C0116E44 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkGetCachedHybridQueryValue(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // r15
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // r14
  ULONG64 v9; // rax
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // ebx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  struct DXGADAPTER *v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rbx
  __int64 v34; // r8
  _BYTE v35[16]; // [rsp+20h] [rbp-78h] BYREF
  struct _LUID v36[2]; // [rsp+30h] [rbp-68h]
  int v37; // [rsp+48h] [rbp-50h] BYREF
  __int64 v38; // [rsp+50h] [rbp-48h]
  char v39; // [rsp+58h] [rbp-40h]
  _BYTE v40[8]; // [rsp+60h] [rbp-38h] BYREF
  struct DXGADAPTER *v41; // [rsp+68h] [rbp-30h]
  char v42; // [rsp+70h] [rbp-28h]
  int GpuPreferenceDListState; // [rsp+A8h] [rbp+10h]
  unsigned __int64 v44; // [rsp+B0h] [rbp+18h] BYREF

  v3 = (_DWORD *)a1;
  v37 = -1;
  v38 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v39 = 1;
    v37 = 2090;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2090);
  }
  else
  {
    v39 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v37, 2090LL);
  Current = DXGPROCESS::GetCurrent(v5, v4);
  if ( Current )
  {
    v9 = (ULONG64)v3;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v9 = MmUserProbeAddress;
    *(_OWORD *)&v36[0].LowPart = *(_OWORD *)v9;
    v10 = *(_DWORD *)(v9 + 16);
    GpuPreferenceDListState = 0;
    DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v35, (struct DXGFASTMUTEX *const *)Current);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v35);
    if ( v10 )
    {
      v13 = v10 - 1;
      if ( v13 )
      {
        if ( v13 != 1 )
        {
          v21 = WdLogNewEntry5_WdAssertion(v12, v11);
          *(_QWORD *)(v21 + 24) = 3742LL;
          WdLogEvent5_WdAssertion(v21);
          goto LABEL_11;
        }
        v14 = *((_DWORD *)Current + 114);
      }
      else
      {
        v14 = *((_DWORD *)Current + 115);
      }
      GpuPreferenceDListState = v14;
LABEL_11:
      if ( (unsigned __int64)v3 >= MmUserProbeAddress )
        v3 = (_DWORD *)MmUserProbeAddress;
      *v3 = GpuPreferenceDListState;
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v35, v11);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37, v15);
      if ( v39 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerExit, v17, v37);
      }
      return 0LL;
    }
    Global = DXGGLOBAL::GetGlobal(v12, v11);
    v23 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)&v36[0].HighPart, &v44);
    v26 = v23;
    if ( v23 )
    {
      v41 = v23;
      v42 = 0;
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v40);
      DXGADAPTER::ReleaseReferenceNoTracking(v26);
      if ( *((_QWORD *)v26 + 335) )
      {
        if ( *((_DWORD *)v26 + 50) == 1 )
        {
          v33 = *((_QWORD *)v26 + 335);
          KeEnterCriticalRegion();
          ExAcquirePushLockSharedEx(v33 + 72, 0LL);
          GpuPreferenceDListState = DXGPROCESS::GetGpuPreferenceDListState(Current, *((unsigned int *)v26 + 58), v34);
          ExReleasePushLockSharedEx(v33 + 72, 0LL);
          KeLeaveCriticalRegion();
        }
        if ( v42 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v40);
        goto LABEL_11;
      }
      v30 = WdLogNewEntry5_WdError(v29, v11);
      *(_QWORD *)(v30 + 24) = (int)v36[1].LowPart;
      *(_QWORD *)(v30 + 32) = (unsigned int)v36[0].HighPart;
      WdLogEvent5_WdError(v30);
      if ( v42 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v40);
    }
    else
    {
      v27 = WdLogNewEntry5_WdError(v25, v24);
      *(_QWORD *)(v27 + 24) = (int)v36[1].LowPart;
      *(_QWORD *)(v27 + 32) = (unsigned int)v36[0].HighPart;
      WdLogEvent5_WdError(v27);
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v35, v28);
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v19 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v19);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37, v20);
  if ( v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v31, &EventProfilerExit, v32, v37);
  return 3221225485LL;
}
