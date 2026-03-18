/*
 * XREFs of DxgkCacheHybridQueryValue @ 0x1C01DDFF0
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

__int64 __fastcall DxgkCacheHybridQueryValue(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // r15
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct DXGPROCESS *Current; // rbx
  ULONG64 v9; // rax
  int v10; // edi
  int v11; // edi
  DWORD v12; // eax
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
  __int64 v25; // r14
  __int64 v26; // rdi
  DWORD GpuPreferenceDListState; // eax
  __int64 v28; // rcx
  _BYTE v29[16]; // [rsp+50h] [rbp-78h] BYREF
  struct _LUID v30[2]; // [rsp+60h] [rbp-68h]
  int v31; // [rsp+78h] [rbp-50h] BYREF
  __int64 v32; // [rsp+80h] [rbp-48h]
  char v33; // [rsp+88h] [rbp-40h]
  _BYTE v34[8]; // [rsp+90h] [rbp-38h] BYREF
  struct DXGADAPTER *v35; // [rsp+98h] [rbp-30h]
  char v36; // [rsp+A0h] [rbp-28h]
  unsigned __int64 v37; // [rsp+D8h] [rbp+10h] BYREF

  v3 = (_DWORD *)a1;
  v31 = -1;
  v32 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v33 = 1;
    v31 = 2091;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2091);
  }
  else
  {
    v33 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v31, 2091);
  Current = DXGPROCESS::GetCurrent(v5, v4, v6, v7);
  if ( Current )
  {
    v9 = (ULONG64)v3;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v9 = MmUserProbeAddress;
    *(_OWORD *)&v30[0].LowPart = *(_OWORD *)v9;
    v10 = *(_DWORD *)(v9 + 16);
    DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v29, Current);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v29);
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        if ( v11 != 1 )
        {
          WdLogSingleEntry1(1LL, 4015LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"Invalid D3DKMT_HYBRID_LIST QueryType!",
            4015LL,
            0LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_11;
        }
        v12 = *((_DWORD *)Current + 134);
        if ( !v12 )
        {
          *((_DWORD *)Current + 134) = v30[0].LowPart;
LABEL_11:
          if ( (unsigned __int64)v3 >= MmUserProbeAddress )
            v3 = (_DWORD *)MmUserProbeAddress;
          *v3 = v30[0].LowPart;
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v29);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
          if ( v33 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerExit, v14, v31);
          }
          return 0LL;
        }
      }
      else
      {
        v12 = *((_DWORD *)Current + 135);
        if ( !v12 )
        {
          *((_DWORD *)Current + 135) = v30[0].LowPart;
          goto LABEL_11;
        }
      }
      v30[0].LowPart = v12;
      goto LABEL_11;
    }
    Global = DXGGLOBAL_GetGlobal();
    v17 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)&v30[0].HighPart, &v37);
    v18 = v17;
    if ( v17 )
    {
      v35 = v17;
      v36 = 0;
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v34);
      DXGADAPTER::ReleaseReference(v18);
      if ( *((_QWORD *)v18 + 350) )
      {
        if ( *((_DWORD *)v18 + 50) == 1 )
        {
          v25 = *((_QWORD *)v18 + 350);
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx(v25 + 72, 0LL);
          *(_QWORD *)(v25 + 80) = KeGetCurrentThread();
          v26 = *((unsigned int *)v18 + 60);
          GpuPreferenceDListState = DXGPROCESS::GetGpuPreferenceDListState(Current, v26);
          if ( GpuPreferenceDListState )
          {
            v30[0].LowPart = GpuPreferenceDListState;
          }
          else
          {
            v28 = *(_QWORD *)(*((_QWORD *)Current + 6) + 8 * v26);
            if ( v28 )
              *(_DWORD *)(v28 + 72) = v30[0].LowPart;
            else
              WdLogSingleEntry1(3LL, (unsigned int)v26);
          }
          *(_QWORD *)(v25 + 80) = 0LL;
          ExReleasePushLockExclusiveEx(v25 + 72, 0LL);
          KeLeaveCriticalRegion();
        }
        if ( v36 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v34);
        goto LABEL_11;
      }
      HighPart = (unsigned int)v30[0].HighPart;
      LowPart = (int)v30[1].LowPart;
      WdLogSingleEntry2(2LL, (int)v30[1].LowPart, (unsigned int)v30[0].HighPart);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"D3DKMTCacheHybridQueryValue called with a display-only adapter with LUID (0x%I64x%08I64x).",
        LowPart,
        HighPart,
        0LL,
        0LL,
        0LL);
      if ( v36 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v34);
    }
    else
    {
      v19 = (unsigned int)v30[0].HighPart;
      v20 = (int)v30[1].LowPart;
      WdLogSingleEntry2(2LL, (int)v30[1].LowPart, (unsigned int)v30[0].HighPart);
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
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v29);
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
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
  if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v31);
  return 3221225485LL;
}
