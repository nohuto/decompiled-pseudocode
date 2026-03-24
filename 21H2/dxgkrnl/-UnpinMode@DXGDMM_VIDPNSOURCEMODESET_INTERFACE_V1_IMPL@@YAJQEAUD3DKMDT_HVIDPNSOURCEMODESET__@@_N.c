/*
 * XREFs of ?UnpinMode@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@_N@Z @ 0x1C016C630
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ @ 0x1C00093A8 (-UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@SAPEAVDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C000A5A8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@S.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0018798 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C0110FD4 (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 */

__int64 __fastcall DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::UnpinMode(
        DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
        __int64 a3)
{
  char v3; // r14
  DMMVIDPNTARGETMODESET *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  DMMVIDPNTARGETMODESET *v8; // rdi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 Container; // rax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v18; // edx
  __int64 v19; // rsi
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  _QWORD *v31; // rax
  int v32; // [rsp+30h] [rbp-20h] BYREF
  __int64 v33; // [rsp+38h] [rbp-18h]
  char v34; // [rsp+40h] [rbp-10h]
  DXGK_ENUM_PIVOT v35; // [rsp+80h] [rbp+30h] BYREF

  v32 = -1;
  v3 = (char)a2;
  v33 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v34 = 1;
    v32 = 6008;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 6008);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v32, 6008LL);
  v5 = (DMMVIDPNTARGETMODESET *)ExposedViaHandle<DMMVIDPNSOURCEMODESET,D3DKMDT_HVIDPNSOURCEMODESET__ *>::GetFromHandle((__int64)this);
  v8 = v5;
  if ( v5 )
  {
    v9 = DMMVIDPNTARGETMODESET::UnpinMode(v5);
    v14 = v9;
    if ( v9 < 0 )
    {
      v28 = WdLogNewEntry5_WdTrace(v11, v10, v12, v13);
      *(_QWORD *)(v28 + 24) = this;
      *(_QWORD *)(v28 + 32) = v14;
    }
    else
    {
      v15 = *((_QWORD *)v8 + 14);
      if ( !v15 )
      {
        v29 = WdLogNewEntry5_WdAssertion(v11, v10);
        WdLogEvent5_WdAssertion(v29);
      }
      v16 = *(_QWORD *)(v15 + 40);
      if ( !v16 )
      {
        v30 = WdLogNewEntry5_WdAssertion(0LL, v10);
        WdLogEvent5_WdAssertion(v30);
        v16 = *(_QWORD *)(v15 + 40);
      }
      Container = ContainedBy<DMMVIDPN>::GetContainer(v16 + 64, v10);
      v18 = *(_DWORD *)(v15 + 24);
      v19 = Container;
      v20 = *(_QWORD *)(Container + 48);
      v35.VidPnTargetId = -1;
      v35.VidPnSourceId = v18;
      v21 = VIDPN_MGR::FormalizeVidPnChange(
              v20,
              (D3DKMDT_HVIDPN)(Container & -(__int64)(Container != -88)),
              4LL,
              v3,
              &v35);
      v14 = v21;
      if ( v21 < 0 )
      {
        v31 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22);
        v31[3] = *(unsigned int *)(v15 + 24);
        v31[4] = v19;
        v31[5] = v14;
        WdLogEvent5_WdError(v31);
      }
      else
      {
        LODWORD(v14) = 0;
      }
    }
  }
  else
  {
    v27 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v27 + 24) = this;
    WdLogEvent5_WdError(v27);
    LODWORD(v14) = -1071774968;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32, v22);
  if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v24, &EventProfilerExit, v25, v32);
  return (unsigned int)v14;
}
