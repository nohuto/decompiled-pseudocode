/*
 * XREFs of ?DxgkOpenAdapterFromLuidImpl@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@E@Z @ 0x1C01DA4A8
 * Callers:
 *     DxgkOpenAdapterFromLuidInternal @ 0x1C01DA470 (DxgkOpenAdapterFromLuidInternal.c)
 *     DxgkOpenAdapterFromLuid @ 0x1C01DA490 (DxgkOpenAdapterFromLuid.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C000F538 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x1C0183ED4 (-CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C01A442C (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?IsProcessGpuAccessBlocked@ADAPTER_RENDER@@QEAAEPEAVDXGPROCESS@@@Z @ 0x1C01DA754 (-IsProcessGpuAccessBlocked@ADAPTER_RENDER@@QEAAEPEAVDXGPROCESS@@@Z.c)
 */

__int64 __fastcall DxgkOpenAdapterFromLuidImpl(struct _D3DKMT_OPENADAPTERFROMLUID *a1, char a2, __int64 a3)
{
  __int64 v5; // rdx
  ULONG64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct _D3DKMT_OPENADAPTERFROMLUID *v9; // rax
  DXGPROCESS *Current; // rax
  struct DXGPROCESS *v11; // rsi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v13; // rax
  struct DXGADAPTER *v14; // rbx
  ADAPTER_RENDER *v15; // rcx
  unsigned int v16; // esi
  _DWORD *p_hAdapter; // r8
  __int64 v18; // rcx
  __int64 v19; // r8
  int v21; // eax
  unsigned int v22; // ebx
  __int64 v23; // rcx
  __int64 v24; // r8
  bool v25; // sf
  __int64 v26; // rcx
  __int64 v27; // r8
  LUID AdapterLuid; // [rsp+50h] [rbp-58h]
  unsigned int hAdapter; // [rsp+58h] [rbp-50h] BYREF
  int v30; // [rsp+60h] [rbp-48h] BYREF
  __int64 v31; // [rsp+68h] [rbp-40h]
  char v32; // [rsp+70h] [rbp-38h]
  _BYTE v33[8]; // [rsp+78h] [rbp-30h] BYREF
  struct DXGADAPTER *v34; // [rsp+80h] [rbp-28h]
  char v35; // [rsp+88h] [rbp-20h]
  unsigned __int64 v36; // [rsp+C0h] [rbp+18h] BYREF

  v30 = -1;
  v31 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v32 = 1;
    v30 = 2082;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2082);
  }
  else
  {
    v32 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v30, 2082);
  if ( a2 )
  {
    v6 = MmUserProbeAddress;
    v9 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v9 = (struct _D3DKMT_OPENADAPTERFROMLUID *)MmUserProbeAddress;
    AdapterLuid = v9->AdapterLuid;
    hAdapter = v9->hAdapter;
  }
  else
  {
    AdapterLuid = a1->AdapterLuid;
    hAdapter = a1->hAdapter;
  }
  hAdapter = 0;
  Current = DXGPROCESS::GetCurrent(v6, v5, v7, v8);
  v11 = Current;
  if ( !Current )
  {
    v22 = -1073741811;
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
LABEL_31:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
    if ( v32 )
    {
      v25 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
      goto LABEL_33;
    }
    return v22;
  }
  if ( a2 )
  {
    if ( DXGPROCESS::IsRemoteConnection(Current) )
    {
      v21 = (*(__int64 (__fastcall **)(LUID))(*((_QWORD *)v11 + 11) + 448LL))(AdapterLuid);
      v22 = v21;
      if ( v21 < 0 )
      {
        WdLogSingleEntry1(3LL, v21);
        goto LABEL_31;
      }
    }
  }
  Global = DXGGLOBAL_GetGlobal();
  v13 = DXGGLOBAL::ReferenceAdapterByLuid(Global, AdapterLuid, &v36);
  v14 = v13;
  if ( !v13 )
  {
    v22 = -1073741811;
    WdLogSingleEntry3(3LL, AdapterLuid.LowPart, AdapterLuid.HighPart, -1073741811LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
    if ( v32 )
    {
      LOBYTE(v23) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      v25 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_33:
      if ( v25 )
        McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v30);
    }
    return v22;
  }
  if ( (*((_DWORD *)v13 + 666) & 4) != 0 )
  {
    WdLogSingleEntry1(3LL, v13);
    DXGADAPTER::ReleaseReference(v14);
  }
  else
  {
    v34 = v13;
    v35 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v33);
    if ( *((_DWORD *)v14 + 50) != 1
      || *((_BYTE *)v14 + 2705)
      || (v15 = (ADAPTER_RENDER *)*((_QWORD *)v14 + 350)) == 0LL
      || !ADAPTER_RENDER::IsProcessGpuAccessBlocked(v15, v11) )
    {
      v16 = DXGADAPTER::CreateHandle(v14, v11, &hAdapter);
      DXGADAPTER::ReleaseReference(v14);
      if ( a2 )
      {
        p_hAdapter = &a1->hAdapter;
        if ( (unsigned __int64)&a1->hAdapter >= MmUserProbeAddress )
          p_hAdapter = (_DWORD *)MmUserProbeAddress;
        *p_hAdapter = hAdapter;
      }
      else
      {
        a1->hAdapter = hAdapter;
      }
      if ( v35 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v33);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
      if ( v32 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v30);
      }
      return v16;
    }
    WdLogSingleEntry2(4LL, v14, v11);
    DXGADAPTER::ReleaseReference(v14);
    if ( v35 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v33);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
  if ( v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v26, &EventProfilerExit, v27, v30);
  return 3221225506LL;
}
