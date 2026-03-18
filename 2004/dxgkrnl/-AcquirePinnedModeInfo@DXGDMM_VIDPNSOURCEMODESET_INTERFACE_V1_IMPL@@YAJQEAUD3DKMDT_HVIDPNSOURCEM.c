/*
 * XREFs of ?AcquirePinnedModeInfo@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C0164D80
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@SAPEAVDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C000A258 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@S.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??$AcquireDdiEnumeratorCachedModeInfo@V?$mem_fun_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@@KM_STL@@@DMMVIDPNSOURCEMODESET@@QEAAJV?$mem_fun_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C0164E70 (--$AcquireDdiEnumeratorCachedModeInfo@V-$mem_fun_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESE.c)
 */

__int64 __fastcall DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AcquirePinnedModeInfo(
        DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE **a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // ebx
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  bool v24; // zf
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  struct DMMVIDPNTARGETMODE *(__fastcall *v28)(DMMVIDPNTARGETMODESET *); // [rsp+20h] [rbp-30h] BYREF
  int v29; // [rsp+28h] [rbp-28h]
  int v30; // [rsp+30h] [rbp-20h] BYREF
  __int64 v31; // [rsp+38h] [rbp-18h]
  char v32; // [rsp+40h] [rbp-10h]
  __int64 v33; // [rsp+68h] [rbp+18h] BYREF

  v30 = -1;
  v31 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v32 = 1;
    v30 = 6005;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 6005);
  }
  else
  {
    v32 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v30, 6005LL);
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    v9 = ExposedViaHandle<DMMVIDPNSOURCEMODESET,D3DKMDT_HVIDPNSOURCEMODESET__ *>::GetFromHandle((__int64)this);
    if ( v9 )
    {
      v29 = 0;
      v33 = 0LL;
      v28 = DMMVIDPNTARGETMODESET::GetPinnedMode;
      v10 = DMMVIDPNSOURCEMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::mem_fun_t<DMMVIDPNSOURCEMODE *,DMMVIDPNSOURCEMODESET>>(
              v9,
              &v28,
              &v33);
      v15 = v10;
      if ( v10 == -1071774902 )
      {
        v22 = WdLogNewEntry5_WdTrace(v12, v11, v13, v14);
        v24 = v33 == 0;
        *(_QWORD *)(v22 + 24) = v9;
        if ( !v24 )
        {
          v25 = WdLogNewEntry5_WdAssertion(v23, v11);
          WdLogEvent5_WdAssertion(v25);
        }
        v15 = 1075708679;
      }
      else if ( v10 < 0 )
      {
        v26 = WdLogNewEntry5_WdDmmEvent(v12, v11);
        *(_QWORD *)(v26 + 24) = v9;
        WdLogEvent5_WdDmmEvent(v26);
      }
      else
      {
        v16 = v33;
        if ( !v33 )
        {
          v27 = WdLogNewEntry5_WdAssertion(v12, v11);
          WdLogEvent5_WdAssertion(v27);
        }
        *(_QWORD *)a2 = v16;
        v15 = 0;
      }
    }
    else
    {
      v21 = WdLogNewEntry5_WdError(v8, v7);
      *(_QWORD *)(v21 + 24) = this;
      WdLogEvent5_WdError(v21);
      v15 = -1071774968;
    }
  }
  else
  {
    v20 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v20 + 24) = 0LL;
    *(_QWORD *)(v20 + 32) = this;
    WdLogEvent5_WdError(v20);
    v15 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30, v11);
  if ( v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v30);
  return v15;
}
