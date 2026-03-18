/*
 * XREFs of ?AcquireTargetModeSetImpl@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IW4_DXGK_VIDPN_INTERFACE_VERSION@@PEAPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_DXGK_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x1C03A66EC
 * Callers:
 *     ?AcquireTargetModeSet@DXGK_VIDPN_INTERFACE_V2_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_DXGK_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x1C0225F30 (-AcquireTargetModeSet@DXGK_VIDPN_INTERFACE_V2_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVI.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C0010BF0 (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0010C30 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0010C68 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?QueryDxgMiniportVidPnTargetModeSetInterface@VIDPN_MGR@@QEAAXW4_DXGK_VIDPN_INTERFACE_VERSION@@PEAPEBU_DXGK_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x1C01A89EC (-QueryDxgMiniportVidPnTargetModeSetInterface@VIDPN_MGR@@QEAAXW4_DXGK_VIDPN_INTERFACE_VERSION@@PE.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::AcquireTargetModeSetImpl(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        __int64 a3,
        __int64 *a4,
        struct D3DKMDT_HVIDPNTARGETMODESET__ **a5)
{
  enum _DXGK_VIDPN_INTERFACE_VERSION v6; // r13d
  __int64 v7; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  struct D3DKMDT_HVIDPNTARGETMODESET__ **v12; // r14
  unsigned int v13; // ebx
  __int64 v14; // rax
  __int64 v15; // rsi
  VIDPN_MGR *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rbx
  struct D3DKMDT_HVIDPNTARGETMODESET__ **v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  int v25; // [rsp+20h] [rbp-20h] BYREF
  __int64 v26; // [rsp+28h] [rbp-18h]
  char v27; // [rsp+30h] [rbp-10h]

  v25 = -1;
  v26 = 0LL;
  v6 = (int)a3;
  v7 = (unsigned int)a2;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v27 = 1;
    v25 = 7048;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 7048);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v25, 7048);
  v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9);
  v12 = a5;
  v11[3] = this;
  v11[4] = v7;
  v11[5] = a4;
  v11[6] = v12;
  if ( a4 && v12 )
  {
    *a4 = 0LL;
    *v12 = 0LL;
    v14 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this);
    v15 = v14;
    if ( !v14 )
    {
      WdLogSingleEntry1(2LL, this);
      v13 = -1071774973;
      goto LABEL_19;
    }
    if ( !DMMVIDPNTOPOLOGY::IsTargetInTopology((DMMVIDPNTOPOLOGY *)(v14 + 96), v7) )
      WdLogSingleEntry2(2LL, v7, v15);
    v16 = *(VIDPN_MGR **)(v15 + 48);
    a5 = 0LL;
    VIDPN_MGR::QueryDxgMiniportVidPnTargetModeSetInterface(
      v16,
      v6,
      (const struct _DXGK_VIDPNTARGETMODESET_INTERFACE **)&a5);
    v17 = IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(v15 + 312), v7);
    v18 = v17;
    if ( !v17 )
    {
      WdLogSingleEntry1(2LL, v7);
      v13 = -1071774971;
      goto LABEL_19;
    }
    v19 = *(_QWORD *)(v17 + 104);
    if ( v19 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v19 + 96));
      v20 = *(_QWORD *)(v18 + 104);
      if ( v20 )
      {
LABEL_18:
        v21 = a5;
        *a4 = v20 & -(__int64)(v20 != -137);
        v13 = 0;
        *v12 = (struct D3DKMDT_HVIDPNTARGETMODESET__ *)v21;
        goto LABEL_19;
      }
    }
    else
    {
      v20 = 0LL;
    }
    WdLogSingleEntry0(1LL);
    goto LABEL_18;
  }
  WdLogSingleEntry3(2LL, 0LL, v7, this);
  v13 = -1073741811;
LABEL_19:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
  if ( v27 )
  {
    LOBYTE(v22) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v25);
  }
  return v13;
}
