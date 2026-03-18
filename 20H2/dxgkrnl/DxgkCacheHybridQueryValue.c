/*
 * XREFs of DxgkCacheHybridQueryValue @ 0x1C015BDE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002B94 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0003F80 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00063E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006444 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C002597C (--0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetGpuPreferenceDListState@DXGPROCESS@@QEAA?AW4_D3DKMT_GPU_PREFERENCE_QUERY_STATE@@I@Z @ 0x1C0047BBC (-GetGpuPreferenceDListState@DXGPROCESS@@QEAA-AW4_D3DKMT_GPU_PREFERENCE_QUERY_STATE@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C011BF7C (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall DxgkCacheHybridQueryValue(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // r14
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // rbx
  ULONG64 v9; // rax
  int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // edi
  DWORD v14; // eax
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
  struct DXGADAPTER *v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r15
  __int64 v34; // rdi
  __int64 v35; // r8
  DWORD GpuPreferenceDListState; // eax
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rcx
  __int64 v40; // rax
  _BYTE v41[16]; // [rsp+20h] [rbp-68h] BYREF
  struct _LUID v42[2]; // [rsp+30h] [rbp-58h]
  int v43; // [rsp+48h] [rbp-40h] BYREF
  __int64 v44; // [rsp+50h] [rbp-38h]
  char v45; // [rsp+58h] [rbp-30h]
  _BYTE v46[8]; // [rsp+60h] [rbp-28h] BYREF
  struct DXGADAPTER *v47; // [rsp+68h] [rbp-20h]
  char v48; // [rsp+70h] [rbp-18h]
  unsigned __int64 v49; // [rsp+98h] [rbp+10h] BYREF

  v3 = (_DWORD *)a1;
  v43 = -1;
  v44 = 0LL;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v45 = 1;
    v43 = 2091;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2091);
  }
  else
  {
    v45 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v43, 2091LL);
  Current = DXGPROCESS::GetCurrent(v5, v4);
  if ( Current )
  {
    v9 = (ULONG64)v3;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v9 = MmUserProbeAddress;
    *(_OWORD *)&v42[0].LowPart = *(_OWORD *)v9;
    v10 = *(_DWORD *)(v9 + 16);
    DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v41, (struct DXGFASTMUTEX *const *)Current);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v41);
    if ( v10 )
    {
      v13 = v10 - 1;
      if ( v13 )
      {
        if ( v13 != 1 )
        {
          v21 = WdLogNewEntry5_WdAssertion(v12, v11);
          *(_QWORD *)(v21 + 24) = 3907LL;
          WdLogEvent5_WdAssertion(v21);
          goto LABEL_11;
        }
        v14 = *((_DWORD *)Current + 114);
        if ( !v14 )
        {
          *((_DWORD *)Current + 114) = v42[0].LowPart;
LABEL_11:
          if ( (unsigned __int64)v3 >= MmUserProbeAddress )
            v3 = (_DWORD *)MmUserProbeAddress;
          *v3 = v42[0].LowPart;
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v41);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43, v15);
          if ( v45 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerExit, v17, v43);
          }
          return 0LL;
        }
      }
      else
      {
        v14 = *((_DWORD *)Current + 115);
        if ( !v14 )
        {
          *((_DWORD *)Current + 115) = v42[0].LowPart;
          goto LABEL_11;
        }
      }
      v42[0].LowPart = v14;
      goto LABEL_11;
    }
    Global = DXGGLOBAL::GetGlobal(v12, v11);
    v23 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)&v42[0].HighPart, &v49);
    v26 = v23;
    if ( v23 )
    {
      v47 = v23;
      v48 = 0;
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v46);
      DXGADAPTER::ReleaseReference(v26);
      if ( *((_QWORD *)v26 + 338) )
      {
        if ( *((_DWORD *)v26 + 50) == 1 )
        {
          v33 = *((_QWORD *)v26 + 338);
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx(v33 + 72, 0LL);
          *(_QWORD *)(v33 + 80) = KeGetCurrentThread();
          v34 = *((unsigned int *)v26 + 58);
          GpuPreferenceDListState = DXGPROCESS::GetGpuPreferenceDListState(Current, (unsigned int)v34, v35);
          if ( GpuPreferenceDListState )
          {
            v42[0].LowPart = GpuPreferenceDListState;
          }
          else
          {
            v39 = *(_QWORD *)(*((_QWORD *)Current + 6) + 8 * v34);
            if ( v39 )
            {
              *(_DWORD *)(v39 + 72) = v42[0].LowPart;
            }
            else
            {
              v40 = WdLogNewEntry5_WdWarning(0LL, v37, v38);
              *(_QWORD *)(v40 + 24) = v34;
              WdLogEvent5_WdWarning(v40);
            }
          }
          *(_QWORD *)(v33 + 80) = 0LL;
          ExReleasePushLockExclusiveEx(v33 + 72, 0LL);
          KeLeaveCriticalRegion();
        }
        if ( v48 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v46);
        goto LABEL_11;
      }
      v30 = WdLogNewEntry5_WdError(v29, v28);
      *(_QWORD *)(v30 + 24) = (int)v42[1].LowPart;
      *(_QWORD *)(v30 + 32) = (unsigned int)v42[0].HighPart;
      WdLogEvent5_WdError(v30);
      if ( v48 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v46);
    }
    else
    {
      v27 = WdLogNewEntry5_WdError(v25, v24);
      *(_QWORD *)(v27 + 24) = (int)v42[1].LowPart;
      *(_QWORD *)(v27 + 32) = (unsigned int)v42[0].HighPart;
      WdLogEvent5_WdError(v27);
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v41);
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v19 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v19);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43, v20);
  if ( v45 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v31, &EventProfilerExit, v32, v43);
  return 3221225485LL;
}
