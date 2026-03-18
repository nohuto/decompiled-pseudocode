/*
 * XREFs of ?PinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I_N@Z @ 0x1C011E570
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C000DC40 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0018388 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C011CA6C (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z @ 0x1C011D8DC (-PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::PinMode(
        DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        __int64 a3)
{
  char v3; // r14
  __int64 v5; // rbp
  DMMVIDPNTARGETMODESET *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DMMVIDPNTARGETMODESET *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 Container; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // [rsp+20h] [rbp-28h] BYREF
  __int64 v29; // [rsp+28h] [rbp-20h]
  char v30; // [rsp+30h] [rbp-18h]

  v28 = -1;
  v3 = a3;
  v29 = 0LL;
  v5 = (unsigned int)a2;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v30 = 1;
    v28 = 6014;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 6014);
  }
  else
  {
    v30 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v28, 6014LL);
  v6 = (DMMVIDPNTARGETMODESET *)ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)this);
  v9 = v6;
  if ( v6 )
  {
    v12 = DMMVIDPNTARGETMODESET::PinMode(v6, v5);
    if ( v12 < 0 )
    {
      v24 = WdLogNewEntry5_WdTrace(v11, v10, v13, v14);
      *(_QWORD *)(v24 + 24) = v5;
      *(_QWORD *)(v24 + 32) = this;
    }
    else
    {
      v15 = *((_QWORD *)v9 + 14);
      if ( !v15 )
      {
        v25 = WdLogNewEntry5_WdAssertion(v11, v10);
        WdLogEvent5_WdAssertion(v25);
      }
      v16 = *(_QWORD *)(v15 + 40);
      if ( !v16 )
      {
        v26 = WdLogNewEntry5_WdAssertion(0LL, v10);
        WdLogEvent5_WdAssertion(v26);
        v16 = *(_QWORD *)(v15 + 40);
      }
      Container = ContainedBy<DMMVIDPN>::GetContainer(v16 + 64, v10);
      v12 = VIDPN_MGR::PinVidPnTargetMode(*(VIDPN_MGR **)(Container + 48), v9, v5, v3);
      if ( v12 < 0 )
      {
        v27 = WdLogNewEntry5_WdDmmEvent(v19);
        *(_QWORD *)(v27 + 24) = v5;
        *(_QWORD *)(v27 + 32) = this;
        WdLogEvent5_WdDmmEvent(v27);
      }
      else
      {
        v12 = 0;
      }
    }
  }
  else
  {
    v23 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v23 + 24) = this;
    WdLogEvent5_WdError(v23);
    v12 = -1071774967;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28, v18);
  if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v28);
  return (unsigned int)v12;
}
