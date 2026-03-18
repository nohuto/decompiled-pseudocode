/*
 * XREFs of ?AcquirePinnedModeInfo@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@PEAU_D3DDDI_RATIONAL@@PEAI@Z @ 0x1C01E5D30
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C001123C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??$AcquireDdiEnumeratorCachedModeInfo@V?$mem_fun_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@@KM_STL@@@DMMVIDPNTARGETMODESET@@QEAAJV?$mem_fun_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C01A9B50 (--$AcquireDdiEnumeratorCachedModeInfo@V-$mem_fun_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESE.c)
 */

__int64 __fastcall DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::AcquirePinnedModeInfo(
        DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_TARGET_MODE **a3,
        struct _D3DDDI_RATIONAL *a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // ebx
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v21; // rax
  bool v22; // zf
  struct DMMVIDPNTARGETMODE *(__fastcall *v23)(DMMVIDPNTARGETMODESET *); // [rsp+20h] [rbp-30h] BYREF
  int v24; // [rsp+28h] [rbp-28h]
  int v25; // [rsp+30h] [rbp-20h] BYREF
  __int64 v26; // [rsp+38h] [rbp-18h]
  char v27; // [rsp+40h] [rbp-10h]
  __int64 v28; // [rsp+88h] [rbp+38h] BYREF

  v25 = -1;
  v26 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v27 = 1;
    v25 = 6005;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 6005);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v25, 6005);
  if ( !a2 )
  {
    WdLogSingleEntry2(2LL, 0LL, this);
    v16 = -1073741811;
    goto LABEL_11;
  }
  *(_QWORD *)a2 = 0LL;
  v8 = ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)this);
  v11 = v8;
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL, this);
    v16 = -1071774967;
    goto LABEL_11;
  }
  v12 = *(_QWORD *)(v8 + 144);
  if ( !v12 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v10, v9) + 24) = v8;
LABEL_20:
    v16 = 1075708679;
    goto LABEL_11;
  }
  v24 = 0;
  v28 = 0LL;
  v23 = DMMVIDPNTARGETMODESET::GetPinnedMode;
  v13 = DMMVIDPNTARGETMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::mem_fun_t<DMMVIDPNTARGETMODE *,DMMVIDPNTARGETMODESET>>(
          v8,
          (__int64)&v23,
          &v28);
  v16 = v13;
  if ( v13 == -1071774902 )
  {
    v21 = WdLogNewEntry5_WdTrace(v15, v14);
    v22 = v28 == 0;
    *(_QWORD *)(v21 + 24) = v11;
    if ( !v22 )
      WdLogSingleEntry0(1LL);
    goto LABEL_20;
  }
  if ( v13 < 0 )
  {
    WdLogSingleEntry1(7LL, v11);
  }
  else
  {
    v17 = v28;
    if ( !v28 )
      WdLogSingleEntry0(1LL);
    *(_QWORD *)a2 = v17;
    v16 = 0;
    *a3 = *(const struct _D3DKMDT_VIDPN_TARGET_MODE **)(v12 + 152);
    a4->Numerator = *(_DWORD *)(v12 + 160);
  }
LABEL_11:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
  if ( v27 )
  {
    LOBYTE(v18) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v25);
  }
  return v16;
}
