/*
 * XREFs of ?AcquireFirstModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C01ED450
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C001123C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??$AcquireDdiEnumeratorCachedModeInfo@V?$mem_fun_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@@KM_STL@@@DMMVIDPNTARGETMODESET@@QEAAJV?$mem_fun_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C01A9B50 (--$AcquireDdiEnumeratorCachedModeInfo@V-$mem_fun_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESE.c)
 */

__int64 __fastcall DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::AcquireFirstModeInfo(
        DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_TARGET_MODE **a3)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdi
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct DMMVIDPNTARGETMODE *(__fastcall *v17)(DMMVIDPNTARGETMODESET *); // [rsp+20h] [rbp-30h] BYREF
  int v18; // [rsp+28h] [rbp-28h]
  int v19; // [rsp+30h] [rbp-20h] BYREF
  __int64 v20; // [rsp+38h] [rbp-18h]
  char v21; // [rsp+40h] [rbp-10h]
  __int64 v22; // [rsp+60h] [rbp+10h] BYREF

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL_GetGlobal() + 30);
  v19 = -1;
  v20 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v21 = 1;
    v19 = 7009;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v5, &EventProfilerEnter, v6, 7009);
  }
  else
  {
    v21 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v19, 7009);
  v9 = WdLogNewEntry5_WdTrace(v8, v7);
  *(_QWORD *)(v9 + 24) = this;
  *(_QWORD *)(v9 + 32) = a2;
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    v10 = ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)this);
    if ( v10 )
    {
      v18 = 0;
      v22 = 0LL;
      v17 = DMMVIDPNTARGETMODESET::GetFirstMode;
      v11 = DMMVIDPNTARGETMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::mem_fun_t<DMMVIDPNTARGETMODE *,DMMVIDPNTARGETMODESET>>(
              v10,
              (__int64)&v17,
              &v22);
      v12 = v11;
      if ( v11 == -1071774902 )
      {
        WdLogSingleEntry1(3LL, v10);
        if ( v22 )
          WdLogSingleEntry0(1LL);
        v12 = 1075708747;
      }
      else if ( v11 < 0 )
      {
        WdLogSingleEntry2(2LL, v10, v11);
      }
      else
      {
        v13 = v22;
        if ( !v22 )
          WdLogSingleEntry0(1LL);
        *(_QWORD *)a2 = v13;
        v12 = 0;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, this);
      v12 = -1071774967;
    }
  }
  else
  {
    WdLogSingleEntry2(2LL, 0LL, this);
    v12 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
  if ( v21 )
  {
    LOBYTE(v14) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v19);
  }
  return v12;
}
