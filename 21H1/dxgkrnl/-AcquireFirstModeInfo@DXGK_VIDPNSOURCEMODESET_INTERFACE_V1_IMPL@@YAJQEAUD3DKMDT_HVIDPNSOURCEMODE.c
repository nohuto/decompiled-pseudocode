/*
 * XREFs of ?AcquireFirstModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C02E2B00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@SAPEAVDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C0010CD0 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@S.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??$AcquireDdiEnumeratorCachedModeInfo@V?$mem_fun_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@@KM_STL@@@DMMVIDPNSOURCEMODESET@@QEAAJV?$mem_fun_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C0155170 (--$AcquireDdiEnumeratorCachedModeInfo@V-$mem_fun_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESE.c)
 */

__int64 __fastcall DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AcquireFirstModeInfo(
        DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE **a3)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r8
  struct DMMVIDPNTARGETMODE *(__fastcall *v31)(DMMVIDPNTARGETMODESET *); // [rsp+20h] [rbp-30h] BYREF
  int v32; // [rsp+28h] [rbp-28h]
  int v33; // [rsp+30h] [rbp-20h] BYREF
  __int64 v34; // [rsp+38h] [rbp-18h]
  char v35; // [rsp+40h] [rbp-10h]
  __int64 v36; // [rsp+60h] [rbp+10h] BYREF

  v4 = (__int64)this;
  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2) + 12);
  v33 = -1;
  v34 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v35 = 1;
    v33 = 7001;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v5, &EventProfilerEnter, v6, 7001);
  }
  else
  {
    v35 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v33, 7001LL);
  v11 = WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
  *(_QWORD *)(v11 + 24) = v4;
  *(_QWORD *)(v11 + 32) = a2;
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    v18 = ExposedViaHandle<DMMVIDPNSOURCEMODESET,D3DKMDT_HVIDPNSOURCEMODESET__ *>::GetFromHandle(v4);
    if ( v18 )
    {
      v32 = 0;
      v36 = 0LL;
      v31 = DMMVIDPNTARGETMODESET::GetFirstMode;
      v20 = DMMVIDPNSOURCEMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::mem_fun_t<DMMVIDPNSOURCEMODE *,DMMVIDPNSOURCEMODESET>>(
              v18,
              (__int64)&v31,
              &v36);
      v4 = v20;
      if ( v20 == -1071774902 )
      {
        v23 = WdLogNewEntry5_WdWarning(v21, v15, v22);
        *(_QWORD *)(v23 + 24) = v18;
        WdLogEvent5_WdWarning(v23);
        if ( v36 )
        {
          v25 = WdLogNewEntry5_WdAssertion(v24, v15);
          WdLogEvent5_WdAssertion(v25);
        }
        LODWORD(v4) = 1075708747;
      }
      else if ( v20 >= 0 )
      {
        v4 = v36;
        if ( !v36 )
        {
          v27 = WdLogNewEntry5_WdAssertion(v21, v15);
          WdLogEvent5_WdAssertion(v27);
        }
        *(_QWORD *)a2 = v4;
        LODWORD(v4) = 0;
      }
      else
      {
        v26 = WdLogNewEntry5_WdError(v21, v15);
        *(_QWORD *)(v26 + 24) = v18;
        *(_QWORD *)(v26 + 32) = v4;
        WdLogEvent5_WdError(v26);
      }
    }
    else
    {
      v19 = WdLogNewEntry5_WdError(v17, v16);
      *(_QWORD *)(v19 + 24) = v4;
      WdLogEvent5_WdError(v19);
      LODWORD(v4) = -1071774968;
    }
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v14 + 24) = 0LL;
    *(_QWORD *)(v14 + 32) = v4;
    WdLogEvent5_WdError(v14);
    LODWORD(v4) = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33, v15);
  if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v28, &EventProfilerExit, v29, v33);
  return (unsigned int)v4;
}
