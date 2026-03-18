/*
 * XREFs of ?AcquireNextPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEBU3@@Z @ 0x1C01EC640
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??$AcquireDdiEnumeratorCachedPathInfo@V?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1C0189510 (--$AcquireDdiEnumeratorCachedPathInfo@V-$binder2nd@V-$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::AcquireNextPathInfo(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL **this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *const a3,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH **a4)
{
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  _DWORD *v12; // rsi
  char *v13; // r8
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v14; // rcx
  char *v15; // rcx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // edi
  __int64 v20; // rcx
  __int64 v21; // r8
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v23; // rax
  __int64 v24; // rbx
  __int128 v25; // [rsp+20h] [rbp-50h]
  __int64 v26; // [rsp+30h] [rbp-40h]
  int v27; // [rsp+38h] [rbp-38h] BYREF
  __int64 v28; // [rsp+40h] [rbp-30h]
  char v29; // [rsp+48h] [rbp-28h]
  __int128 v30; // [rsp+50h] [rbp-20h] BYREF
  __int64 v31; // [rsp+60h] [rbp-10h]
  __int64 v32; // [rsp+A0h] [rbp+30h] BYREF

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL_GetGlobal() + 33);
  v27 = -1;
  v28 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v29 = 1;
    v27 = 7037;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v7, &EventProfilerEnter, v8, 7037);
  }
  else
  {
    v29 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v27, 7037);
  v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9);
  v11[3] = a2;
  v11[4] = this;
  v11[5] = a3;
  if ( !a3 )
  {
    WdLogSingleEntry3(2LL, 0LL, a2, this);
    v19 = -1073741811;
    goto LABEL_16;
  }
  *(_QWORD *)&a3->VidPnSourceId = 0LL;
  if ( !this || *((_DWORD *)this + 46) != 1833173002 )
  {
    WdLogSingleEntry1(2LL, this);
    v19 = -1071774976;
    goto LABEL_16;
  }
  v12 = (_DWORD *)((unsigned __int64)(a2 - 4) & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64));
  if ( !v12 || *v12 != 305419896 )
  {
    WdLogSingleEntry1(2LL, v12);
    v19 = -1071774951;
    goto LABEL_16;
  }
  v13 = *(char **)(((unsigned __int64)(a2 - 4) & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64)) + 8);
  if ( !v13 )
  {
    WdLogSingleEntry0(1LL);
LABEL_22:
    WdLogSingleEntry2(2LL, v12, this);
    v19 = -1071774928;
    goto LABEL_16;
  }
  v14 = this[3];
  if ( v14 == (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)(this + 3) )
    goto LABEL_22;
  v15 = (char *)v14 - 8;
  if ( !v15 )
    goto LABEL_22;
  while ( v15 != v13 )
  {
    v23 = (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)*((_QWORD *)v15 + 1);
    v15 = (char *)v23 - 8;
    if ( v23 == (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)(this + 3) )
      v15 = 0LL;
    if ( !v15 )
      goto LABEL_22;
  }
  v26 = *(_QWORD *)(((unsigned __int64)(a2 - 4) & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64)) + 8);
  *(_QWORD *)&v25 = DMMVIDPNTOPOLOGY::GetNextPath;
  DWORD2(v25) = 0;
  v32 = 0LL;
  v30 = v25;
  v31 = v26;
  v16 = DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::binder2nd<KM_STL::const_mem_fun1_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY,DMMVIDPNPRESENTPATH const *>>>(
          (__int64)this,
          (__int64)&v30,
          &v32,
          1);
  v19 = v16;
  if ( v16 == -1071774937 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v18, v17) + 24) = this;
    if ( v32 )
      WdLogSingleEntry0(1LL);
    v19 = 1075708748;
  }
  else if ( v16 >= 0 )
  {
    v24 = v32;
    if ( !v32 )
      WdLogSingleEntry0(1LL);
    *(_QWORD *)&a3->VidPnSourceId = v24;
    v19 = 0;
  }
  else
  {
    WdLogSingleEntry3(2LL, v12, this, v16);
  }
LABEL_16:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
  if ( v29 )
  {
    LOBYTE(v20) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v27);
  }
  return v19;
}
