/*
 * XREFs of ?AcquireTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_DXGK_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x1C01A8890
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C0010BF0 (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0010C30 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0010C68 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?QueryDxgMiniportVidPnTargetModeSetInterface@VIDPN_MGR@@QEAAXW4_DXGK_VIDPN_INTERFACE_VERSION@@PEAPEBU_DXGK_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x1C01A89EC (-QueryDxgMiniportVidPnTargetModeSetInterface@VIDPN_MGR@@QEAAXW4_DXGK_VIDPN_INTERFACE_VERSION@@PE.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::AcquireTargetModeSet(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        __int64 *a3,
        struct _DXGK_VIDPNTARGETMODESET_INTERFACE **a4)
{
  unsigned int v4; // ebx
  __int64 v7; // r13
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rax
  __int64 v13; // r14
  VIDPN_MGR *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rdi
  struct _DXGK_VIDPNTARGETMODESET_INTERFACE *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // r8
  int v29; // [rsp+20h] [rbp-20h] BYREF
  __int64 v30; // [rsp+28h] [rbp-18h]
  char v31; // [rsp+30h] [rbp-10h]
  struct _DXGK_VIDPNTARGETMODESET_INTERFACE *v32; // [rsp+70h] [rbp+30h] BYREF

  v29 = -1;
  v4 = 0;
  v7 = (unsigned int)a2;
  v30 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v31 = 1;
    v29 = 7048;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 7048);
  }
  else
  {
    v31 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v29, 7048);
  v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9);
  v11[3] = this;
  v11[4] = v7;
  v11[5] = a3;
  v11[6] = a4;
  if ( a3 && a4 )
  {
    *a3 = 0LL;
    *a4 = 0LL;
    v12 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this);
    v13 = v12;
    if ( v12 )
    {
      if ( !DMMVIDPNTOPOLOGY::IsTargetInTopology((DMMVIDPNTOPOLOGY *)(v12 + 96), v7) )
        WdLogSingleEntry2(2LL, v7, v13);
      v14 = *(VIDPN_MGR **)(v13 + 48);
      v32 = 0LL;
      VIDPN_MGR::QueryDxgMiniportVidPnTargetModeSetInterface(
        v14,
        DXGK_VIDPN_INTERFACE_VERSION_V1,
        (const struct _DXGK_VIDPNTARGETMODESET_INTERFACE **)&v32);
      v15 = IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(v13 + 312), v7);
      v16 = v15;
      if ( v15 )
      {
        v17 = *(_QWORD *)(v15 + 104);
        if ( v17 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v17 + 96));
          v18 = *(_QWORD *)(v16 + 104);
          if ( v18 )
          {
LABEL_11:
            v19 = v32;
            *a3 = v18 & -(__int64)(v18 != -137);
            *a4 = v19;
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
            if ( v31 )
            {
              LOBYTE(v20) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
                McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v29);
            }
            return v4;
          }
        }
        else
        {
          v18 = 0LL;
        }
        WdLogSingleEntry0(1LL);
        goto LABEL_11;
      }
      WdLogSingleEntry1(2LL, v7);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
      if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v27, &EventProfilerExit, v28, v29);
      return (unsigned int)-1071774971;
    }
    else
    {
      WdLogSingleEntry1(2LL, this);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
      if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v25, &EventProfilerExit, v26, v29);
      return (unsigned int)-1071774973;
    }
  }
  else
  {
    WdLogSingleEntry3(2LL, 0LL, v7, this);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
    if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v29);
    return (unsigned int)-1073741811;
  }
}
