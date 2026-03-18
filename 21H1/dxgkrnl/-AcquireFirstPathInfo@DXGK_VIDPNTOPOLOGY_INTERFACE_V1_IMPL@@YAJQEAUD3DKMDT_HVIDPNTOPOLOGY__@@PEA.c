/*
 * XREFs of ?AcquireFirstPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00EDB70
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??$AcquireDdiEnumeratorCachedPathInfo@V?$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1C00EDC90 (--$AcquireDdiEnumeratorCachedPathInfo@V-$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOL.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::AcquireFirstPathInfo(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH **a3)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rbp
  __int64 v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  struct DMMVIDPNPRESENTPATH *(__fastcall *v31)(DMMVIDPNTOPOLOGY *); // [rsp+20h] [rbp-38h] BYREF
  int v32; // [rsp+28h] [rbp-30h]
  int v33; // [rsp+30h] [rbp-28h] BYREF
  __int64 v34; // [rsp+38h] [rbp-20h]
  char v35; // [rsp+40h] [rbp-18h]
  __int64 v36; // [rsp+60h] [rbp+8h] BYREF

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2) + 18);
  v7 = 0;
  v33 = -1;
  v34 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v35 = 1;
    v33 = 7036;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v5, &EventProfilerEnter, v6, 7036);
  }
  else
  {
    v35 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v33, 7036LL);
  v12 = WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
  *(_QWORD *)(v12 + 24) = this;
  *(_QWORD *)(v12 + 32) = a2;
  if ( !a2 )
  {
    v25 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v25 + 24) = 0LL;
    *(_QWORD *)(v25 + 32) = this;
    WdLogEvent5_WdError(v25);
    LODWORD(v20) = -1073741811;
LABEL_21:
    v7 = v20;
    goto LABEL_11;
  }
  *(_QWORD *)a2 = 0LL;
  if ( !this || *((_DWORD *)this + 46) != 1833173002 )
  {
    v30 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v30 + 24) = this;
    WdLogEvent5_WdError(v30);
    LODWORD(v20) = -1071774976;
    goto LABEL_21;
  }
  v32 = 0;
  v31 = DMMVIDPNTOPOLOGY::GetFirstPath;
  v36 = 0LL;
  v15 = DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::const_mem_fun_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY>>(
          this,
          &v31,
          &v36);
  v20 = v15;
  if ( v15 == -1071774937 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v17, v16, v18, v19) + 24) = this;
    if ( v36 )
    {
      v27 = WdLogNewEntry5_WdAssertion(v26, v16);
      WdLogEvent5_WdAssertion(v27);
    }
    LODWORD(v20) = 1075708747;
    goto LABEL_21;
  }
  if ( v15 < 0 )
  {
    v28 = WdLogNewEntry5_WdError(v17, v16);
    *(_QWORD *)(v28 + 24) = this;
    *(_QWORD *)(v28 + 32) = v20;
    WdLogEvent5_WdError(v28);
    goto LABEL_21;
  }
  v21 = v36;
  if ( !v36 )
  {
    v29 = WdLogNewEntry5_WdAssertion(v17, v16);
    WdLogEvent5_WdAssertion(v29);
  }
  *(_QWORD *)a2 = v21;
LABEL_11:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33, v16);
  if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v33);
  return v7;
}
