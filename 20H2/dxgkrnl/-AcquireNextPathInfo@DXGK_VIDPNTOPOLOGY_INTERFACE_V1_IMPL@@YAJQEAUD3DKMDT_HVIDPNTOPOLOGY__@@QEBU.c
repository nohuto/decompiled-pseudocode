/*
 * XREFs of ?AcquireNextPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEBU3@@Z @ 0x1C010D5D0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??$AcquireDdiEnumeratorCachedPathInfo@V?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1C010D790 (--$AcquireDdiEnumeratorCachedPathInfo@V-$binder2nd@V-$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::AcquireNextPathInfo(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *const a3,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH **a4)
{
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v17; // rsi
  _QWORD *v18; // rdx
  _QWORD *v19; // rcx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rbp
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // r8
  _QWORD *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v33; // rax
  __int64 v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rbx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int128 v40; // [rsp+20h] [rbp-68h]
  __int64 v41; // [rsp+30h] [rbp-58h]
  int v42; // [rsp+38h] [rbp-50h] BYREF
  __int64 v43; // [rsp+40h] [rbp-48h]
  char v44; // [rsp+48h] [rbp-40h]
  __int128 v45; // [rsp+50h] [rbp-38h] BYREF
  __int64 v46; // [rsp+60h] [rbp-28h]
  __int64 v47; // [rsp+90h] [rbp+8h] BYREF

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2) + 19);
  v9 = 0;
  v42 = -1;
  v43 = 0LL;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v44 = 1;
    v42 = 7037;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v7, &EventProfilerEnter, v8, 7037);
  }
  else
  {
    v44 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v42, 7037LL);
  v14 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v10, v12, v13);
  v14[3] = a2;
  v14[4] = this;
  v14[5] = a3;
  if ( !a3 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdError(v16, v15);
    v30[3] = 0LL;
    v30[4] = a2;
    v30[5] = this;
    WdLogEvent5_WdError(v30);
    LODWORD(v25) = -1073741811;
LABEL_18:
    v9 = v25;
    goto LABEL_19;
  }
  *(_QWORD *)&a3->VidPnSourceId = 0LL;
  if ( !this || *((_DWORD *)this + 46) != 1833173002 )
  {
    v39 = WdLogNewEntry5_WdError(v16, v15);
    *(_QWORD *)(v39 + 24) = this;
    WdLogEvent5_WdError(v39);
    LODWORD(v25) = -1071774976;
    goto LABEL_18;
  }
  if ( !a2 )
  {
    v17 = 0LL;
LABEL_36:
    v38 = WdLogNewEntry5_WdError(v16, v15);
    *(_QWORD *)(v38 + 24) = v17;
    WdLogEvent5_WdError(v38);
    LODWORD(v25) = -1071774951;
    goto LABEL_18;
  }
  v17 = a2 - 4;
  if ( !v17 || *(_DWORD *)v17 != 305419896 )
    goto LABEL_36;
  v18 = (_QWORD *)*((_QWORD *)v17 + 1);
  if ( !v18 )
  {
    v31 = WdLogNewEntry5_WdAssertion(v16, 0LL);
    WdLogEvent5_WdAssertion(v31);
LABEL_25:
    v32 = WdLogNewEntry5_WdError(v19, v18);
    *(_QWORD *)(v32 + 24) = v17;
    *(_QWORD *)(v32 + 32) = this;
    WdLogEvent5_WdError(v32);
    LODWORD(v25) = -1071774928;
    goto LABEL_18;
  }
  v19 = (_QWORD *)*((_QWORD *)this + 3);
  if ( v19 == (_QWORD *)((char *)this + 24) )
    goto LABEL_25;
  if ( !--v19 )
    goto LABEL_25;
  do
  {
    if ( v19 == v18 )
      break;
    v33 = (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)v19[1];
    v19 = (_QWORD *)((char *)v33 - 8);
    if ( v33 == (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)((char *)this + 24) )
      v19 = 0LL;
  }
  while ( v19 );
  if ( !v19 )
    goto LABEL_25;
  v41 = *((_QWORD *)v17 + 1);
  *(_QWORD *)&v40 = DMMVIDPNTOPOLOGY::GetNextPath;
  DWORD2(v40) = 0;
  v47 = 0LL;
  v45 = v40;
  v46 = v41;
  v20 = DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::binder2nd<KM_STL::const_mem_fun1_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY,DMMVIDPNPRESENTPATH const *>>>(
          this,
          &v45,
          &v47,
          1LL);
  v25 = v20;
  if ( v20 == -1071774937 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v22, v21, v23, v24) + 24) = this;
    if ( v47 )
    {
      v34 = WdLogNewEntry5_WdAssertion(v26, v21);
      WdLogEvent5_WdAssertion(v34);
    }
    LODWORD(v25) = 1075708748;
    goto LABEL_18;
  }
  if ( v20 < 0 )
  {
    v35 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21);
    v35[3] = v17;
    v35[4] = this;
    v35[5] = v25;
    WdLogEvent5_WdError(v35);
    goto LABEL_18;
  }
  v36 = v47;
  if ( !v47 )
  {
    v37 = WdLogNewEntry5_WdAssertion(v22, v21);
    WdLogEvent5_WdAssertion(v37);
  }
  *(_QWORD *)&a3->VidPnSourceId = v36;
LABEL_19:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42, v21);
  if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v27, &EventProfilerExit, v28, v42);
  return v9;
}
