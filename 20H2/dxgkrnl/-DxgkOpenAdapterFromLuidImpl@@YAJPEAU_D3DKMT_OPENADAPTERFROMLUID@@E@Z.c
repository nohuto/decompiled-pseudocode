/*
 * XREFs of ?DxgkOpenAdapterFromLuidImpl@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@E@Z @ 0x1C01358B8
 * Callers:
 *     DxgkOpenAdapterFromLuid @ 0x1C01358A0 (DxgkOpenAdapterFromLuid.c)
 *     DxgkOpenAdapterFromLuidInternal @ 0x1C01505A0 (DxgkOpenAdapterFromLuidInternal.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0003F80 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00063E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006444 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C000A5C4 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C011BF7C (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x1C011C294 (-CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z.c)
 *     ?IsProcessGpuAccessBlocked@ADAPTER_RENDER@@QEAAEPEAVDXGPROCESS@@@Z @ 0x1C011C528 (-IsProcessGpuAccessBlocked@ADAPTER_RENDER@@QEAAEPEAVDXGPROCESS@@@Z.c)
 */

__int64 __fastcall DxgkOpenAdapterFromLuidImpl(struct _D3DKMT_OPENADAPTERFROMLUID *a1, char a2, __int64 a3)
{
  __int64 v5; // rdx
  ULONG64 v6; // rcx
  struct _D3DKMT_OPENADAPTERFROMLUID *v7; // rax
  DXGPROCESS *Current; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DXGPROCESS *v11; // rsi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  struct DXGADAPTER *v17; // rbx
  VIDSCH_EXPORT **v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int v21; // esi
  ULONG64 v22; // rdx
  _DWORD *p_hAdapter; // r8
  __int64 v24; // rcx
  __int64 v25; // r8
  int v27; // eax
  __int64 v28; // r8
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  _QWORD *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // r8
  LUID AdapterLuid; // [rsp+20h] [rbp-58h]
  unsigned int hAdapter; // [rsp+28h] [rbp-50h] BYREF
  int v46; // [rsp+30h] [rbp-48h] BYREF
  __int64 v47; // [rsp+38h] [rbp-40h]
  char v48; // [rsp+40h] [rbp-38h]
  _BYTE v49[8]; // [rsp+48h] [rbp-30h] BYREF
  struct DXGADAPTER *v50; // [rsp+50h] [rbp-28h]
  char v51; // [rsp+58h] [rbp-20h]
  unsigned __int64 v52; // [rsp+90h] [rbp+18h] BYREF

  v46 = -1;
  v47 = 0LL;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v48 = 1;
    v46 = 2082;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2082);
  }
  else
  {
    v48 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v46, 2082LL);
  if ( a2 )
  {
    v6 = MmUserProbeAddress;
    v7 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v7 = (struct _D3DKMT_OPENADAPTERFROMLUID *)MmUserProbeAddress;
    AdapterLuid = v7->AdapterLuid;
    hAdapter = v7->hAdapter;
  }
  else
  {
    AdapterLuid = a1->AdapterLuid;
    hAdapter = a1->hAdapter;
  }
  hAdapter = 0;
  Current = DXGPROCESS::GetCurrent(v6, v5);
  v11 = Current;
  if ( !Current )
  {
    v30 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v30 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v30);
    goto LABEL_36;
  }
  if ( a2 )
  {
    if ( DXGPROCESS::IsRemoteConnection(Current) )
    {
      v27 = (*(__int64 (__fastcall **)(LUID))(*((_QWORD *)v11 + 11) + 448LL))(AdapterLuid);
      v29 = v27;
      if ( v27 < 0 )
      {
        v32 = WdLogNewEntry5_WdWarning(v10, v9, v28);
        *(_QWORD *)(v32 + 24) = v29;
        WdLogEvent5_WdWarning(v32);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46, v33);
        if ( v48 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v34, &EventProfilerExit, v35, v46);
        return (unsigned int)v29;
      }
    }
  }
  Global = DXGGLOBAL::GetGlobal(v10, v9);
  v13 = DXGGLOBAL::ReferenceAdapterByLuid(Global, AdapterLuid, &v52);
  v17 = v13;
  if ( !v13 )
  {
    v36 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v14, v16);
    v36[3] = AdapterLuid.LowPart;
    v36[4] = AdapterLuid.HighPart;
    v36[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v36);
LABEL_36:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46, v31);
    if ( v48 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v37, &EventProfilerExit, v38, v46);
    return 3221225485LL;
  }
  if ( (*((_DWORD *)v13 + 642) & 4) != 0 )
  {
    v39 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    *(_QWORD *)(v39 + 24) = v17;
    WdLogEvent5_WdWarning(v39);
    DXGADAPTER::ReleaseReference(v17);
  }
  else
  {
    v50 = v13;
    v51 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v49);
    if ( *((_DWORD *)v17 + 50) != 1
      || *((_BYTE *)v17 + 2609)
      || (v18 = (VIDSCH_EXPORT **)*((_QWORD *)v17 + 338)) == 0LL
      || !ADAPTER_RENDER::IsProcessGpuAccessBlocked(v18, v11) )
    {
      v21 = DXGADAPTER::CreateHandle(v17, v11, &hAdapter);
      DXGADAPTER::ReleaseReference(v17);
      if ( a2 )
      {
        p_hAdapter = &a1->hAdapter;
        v22 = MmUserProbeAddress;
        if ( (unsigned __int64)&a1->hAdapter >= MmUserProbeAddress )
          p_hAdapter = (_DWORD *)MmUserProbeAddress;
        *p_hAdapter = hAdapter;
      }
      else
      {
        a1->hAdapter = hAdapter;
      }
      if ( v51 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v49);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46, v22);
      if ( v48 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v24, &EventProfilerExit, v25, v46);
      }
      return v21;
    }
    v41 = WdLogNewEntry5_WdEvent(v20, v19);
    *(_QWORD *)(v41 + 24) = v17;
    *(_QWORD *)(v41 + 32) = v11;
    WdLogEvent5_WdEvent(v41);
    DXGADAPTER::ReleaseReference(v17);
    if ( v51 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v49);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46, v40);
  if ( v48 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v42, &EventProfilerExit, v43, v46);
  return 3221225506LL;
}
