/*
 * XREFs of ?AcquirePinnedModeInfo@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C01E4A00
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@SAPEAVDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C0011B2C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@S.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??$AcquireDdiEnumeratorCachedModeInfo@V?$mem_fun_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@@KM_STL@@@DMMVIDPNSOURCEMODESET@@QEAAJV?$mem_fun_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C01E4AF0 (--$AcquireDdiEnumeratorCachedModeInfo@V-$mem_fun_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESE.c)
 */

__int64 __fastcall DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AcquirePinnedModeInfo(
        DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE **a3)
{
  __int64 v5; // rdi
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v14; // rax
  bool v15; // zf
  struct DMMVIDPNTARGETMODE *(__fastcall *v16)(DMMVIDPNTARGETMODESET *); // [rsp+20h] [rbp-30h] BYREF
  int v17; // [rsp+28h] [rbp-28h]
  int v18; // [rsp+30h] [rbp-20h] BYREF
  __int64 v19; // [rsp+38h] [rbp-18h]
  char v20; // [rsp+40h] [rbp-10h]
  __int64 v21; // [rsp+68h] [rbp+18h] BYREF

  v18 = -1;
  v19 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v20 = 1;
    v18 = 6005;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 6005);
  }
  else
  {
    v20 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v18, 6005);
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    v5 = ExposedViaHandle<DMMVIDPNSOURCEMODESET,D3DKMDT_HVIDPNSOURCEMODESET__ *>::GetFromHandle((__int64)this);
    if ( v5 )
    {
      v17 = 0;
      v21 = 0LL;
      v16 = DMMVIDPNTARGETMODESET::GetPinnedMode;
      v6 = DMMVIDPNSOURCEMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::mem_fun_t<DMMVIDPNSOURCEMODE *,DMMVIDPNSOURCEMODESET>>(
             v5,
             &v16,
             &v21);
      v9 = v6;
      if ( v6 == -1071774902 )
      {
        v14 = WdLogNewEntry5_WdTrace(v8, v7);
        v15 = v21 == 0;
        *(_QWORD *)(v14 + 24) = v5;
        if ( !v15 )
          WdLogSingleEntry0(1LL);
        v9 = 1075708679;
      }
      else if ( v6 < 0 )
      {
        WdLogSingleEntry1(7LL, v5);
      }
      else
      {
        v10 = v21;
        if ( !v21 )
          WdLogSingleEntry0(1LL);
        *(_QWORD *)a2 = v10;
        v9 = 0;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, this);
      v9 = -1071774968;
    }
  }
  else
  {
    WdLogSingleEntry2(2LL, 0LL, this);
    v9 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
  if ( v20 )
  {
    LOBYTE(v11) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v11, &EventProfilerExit, v12, v18);
  }
  return v9;
}
