/*
 * XREFs of ?DxgkOpenAdapterFromLuidImpl@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@E@Z @ 0x1C00E3A48
 * Callers:
 *     DxgkOpenAdapterFromLuidInternal @ 0x1C00D88E0 (DxgkOpenAdapterFromLuidInternal.c)
 *     DxgkOpenAdapterFromLuid @ 0x1C00E3A30 (DxgkOpenAdapterFromLuid.c)
 * Callees:
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C0008D70 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D3D0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D42C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000E2A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C0116E44 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x1C0125214 (-CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z.c)
 *     ?IsProcessGpuAccessBlocked@ADAPTER_RENDER@@QEAAEPEAVDXGPROCESS@@@Z @ 0x1C01254A8 (-IsProcessGpuAccessBlocked@ADAPTER_RENDER@@QEAAEPEAVDXGPROCESS@@@Z.c)
 */

__int64 __fastcall DxgkOpenAdapterFromLuidImpl(struct _D3DKMT_OPENADAPTERFROMLUID *a1, char a2, __int64 a3)
{
  struct _D3DKMT_OPENADAPTERFROMLUID *v5; // rax
  DXGPROCESS *Current; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGPROCESS *v9; // rsi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct DXGADAPTER *v15; // rbx
  ADAPTER_RENDER *v16; // rcx
  unsigned int v17; // esi
  ULONG64 v18; // rdx
  _DWORD *p_hAdapter; // r8
  __int64 v20; // rcx
  __int64 v21; // r8
  int v23; // eax
  __int64 v24; // r8
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  _QWORD *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r8
  LUID AdapterLuid; // [rsp+20h] [rbp-58h]
  unsigned int hAdapter; // [rsp+28h] [rbp-50h] BYREF
  int v42; // [rsp+30h] [rbp-48h] BYREF
  __int64 v43; // [rsp+38h] [rbp-40h]
  char v44; // [rsp+40h] [rbp-38h]
  _BYTE v45[8]; // [rsp+48h] [rbp-30h] BYREF
  struct DXGADAPTER *v46; // [rsp+50h] [rbp-28h]
  char v47; // [rsp+58h] [rbp-20h]
  unsigned __int64 v48; // [rsp+90h] [rbp+18h] BYREF

  v42 = -1;
  v43 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v44 = 1;
    v42 = 2082;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2082);
  }
  else
  {
    v44 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v42, 2082LL);
  if ( a2 )
  {
    v5 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v5 = (struct _D3DKMT_OPENADAPTERFROMLUID *)MmUserProbeAddress;
    AdapterLuid = v5->AdapterLuid;
    hAdapter = v5->hAdapter;
  }
  else
  {
    AdapterLuid = a1->AdapterLuid;
    hAdapter = a1->hAdapter;
  }
  hAdapter = 0;
  Current = DXGPROCESS::GetCurrent();
  v9 = Current;
  if ( !Current )
  {
    v26 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v26 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v26);
    goto LABEL_36;
  }
  if ( a2 )
  {
    if ( DXGPROCESS::IsRemoteConnection(Current) )
    {
      v23 = (*(__int64 (__fastcall **)(LUID))(*((_QWORD *)v9 + 11) + 448LL))(AdapterLuid);
      v25 = v23;
      if ( v23 < 0 )
      {
        v28 = WdLogNewEntry5_WdWarning(v8, v7, v24);
        *(_QWORD *)(v28 + 24) = v25;
        WdLogEvent5_WdWarning(v28);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42, v29);
        if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v30, &EventProfilerExit, v31, v42);
        return (unsigned int)v25;
      }
    }
  }
  Global = DXGGLOBAL::GetGlobal(v8, v7);
  v11 = DXGGLOBAL::ReferenceAdapterByLuid(Global, AdapterLuid, &v48);
  v15 = v11;
  if ( !v11 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v14);
    v32[3] = AdapterLuid.LowPart;
    v32[4] = AdapterLuid.HighPart;
    v32[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v32);
LABEL_36:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42, v27);
    if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v33, &EventProfilerExit, v34, v42);
    return 3221225485LL;
  }
  if ( (*((_DWORD *)v11 + 636) & 4) != 0 )
  {
    v35 = WdLogNewEntry5_WdWarning(v13, v12, v14);
    *(_QWORD *)(v35 + 24) = v15;
    WdLogEvent5_WdWarning(v35);
    DXGADAPTER::ReleaseReferenceNoTracking(v15);
  }
  else
  {
    v46 = v11;
    v47 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v45);
    if ( *((_DWORD *)v15 + 50) != 1
      || *((_BYTE *)v15 + 2585)
      || (v16 = (ADAPTER_RENDER *)*((_QWORD *)v15 + 335)) == 0LL
      || !ADAPTER_RENDER::IsProcessGpuAccessBlocked(v16, v9) )
    {
      v17 = DXGADAPTER::CreateHandle(v15, v9, &hAdapter);
      DXGADAPTER::ReleaseReferenceNoTracking(v15);
      if ( a2 )
      {
        p_hAdapter = &a1->hAdapter;
        v18 = MmUserProbeAddress;
        if ( (unsigned __int64)&a1->hAdapter >= MmUserProbeAddress )
          p_hAdapter = (_DWORD *)MmUserProbeAddress;
        *p_hAdapter = hAdapter;
      }
      else
      {
        a1->hAdapter = hAdapter;
      }
      if ( v47 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v45);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42, v18);
      if ( v44 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v42);
      }
      return v17;
    }
    v37 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v37 + 24) = v15;
    *(_QWORD *)(v37 + 32) = v9;
    WdLogEvent5_WdEvent(v37);
    DXGADAPTER::ReleaseReferenceNoTracking(v15);
    if ( v47 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v45);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42, v36);
  if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v38, &EventProfilerExit, v39, v42);
  return 3221225506LL;
}
