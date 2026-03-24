/*
 * XREFs of ?AcquireTargetModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_DXGDMM_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x1C0126580
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0007DB8 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0007F58 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0008444 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGDMM_VIDPN_INTERFACE_V1_IMPL::AcquireTargetModeSet(
        DXGDMM_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        __int64 *a3,
        struct D3DKMDT_HVIDPNTARGETMODESET__ **a4)
{
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r10
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rbx
  unsigned int v23; // ebx
  __int64 v24; // rcx
  __int64 v25; // r8
  _QWORD *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  int v33; // [rsp+20h] [rbp-38h] BYREF
  __int64 v34; // [rsp+28h] [rbp-30h]
  char v35; // [rsp+30h] [rbp-28h]
  struct D3DKMDT_HVIDPNTARGETMODESET__ *v36; // [rsp+70h] [rbp+18h]

  v33 = -1;
  v34 = 0LL;
  v7 = (unsigned int)a2;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v35 = 1;
    v33 = 6036;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 6036);
  }
  else
  {
    v35 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v33, 6036LL);
  if ( !a3 || !a4 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8);
    v27[3] = 0LL;
    v27[4] = v7;
    v27[5] = this;
    WdLogEvent5_WdError(v27);
    v23 = -1073741811;
    goto LABEL_12;
  }
  *a3 = 0LL;
  *a4 = 0LL;
  v10 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this);
  v13 = v10;
  if ( !v10 )
  {
    v28 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v28 + 24) = this;
    WdLogEvent5_WdError(v28);
    v23 = -1071774973;
    goto LABEL_12;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v10 + 48) + 88LL) == v10 )
  {
    v29 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v29 + 24) = v7;
    *(_QWORD *)(v29 + 32) = v13;
    WdLogEvent5_WdError(v29);
    v23 = -1071774909;
    goto LABEL_12;
  }
  if ( !DMMVIDPNTOPOLOGY::IsTargetInTopology((DMMVIDPNTOPOLOGY *)(v10 + 96), v7) )
  {
    v30 = WdLogNewEntry5_WdError(v15, v14);
    *(_QWORD *)(v30 + 24) = v7;
    *(_QWORD *)(v30 + 32) = v13;
    WdLogEvent5_WdError(v30);
    v23 = -1071774912;
    goto LABEL_12;
  }
  v36 = *(struct D3DKMDT_HVIDPNTARGETMODESET__ **)(v16 + 448);
  v17 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(*(_QWORD *)(v13 + 312), v7);
  v20 = v17;
  if ( !v17 )
  {
    v31 = WdLogNewEntry5_WdError(v19, v18);
    *(_QWORD *)(v31 + 24) = v7;
    WdLogEvent5_WdError(v31);
    v23 = -1071774971;
    goto LABEL_12;
  }
  v21 = *(_QWORD *)(v17 + 104);
  if ( !v21 )
  {
    v22 = 0LL;
    goto LABEL_22;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v21 + 96));
  v22 = *(_QWORD *)(v20 + 104);
  if ( !v22 )
  {
LABEL_22:
    v32 = WdLogNewEntry5_WdAssertion(v19, v18);
    WdLogEvent5_WdAssertion(v32);
  }
  *a3 = v22 & -(__int64)(v22 != -137);
  v23 = 0;
  *a4 = v36;
LABEL_12:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33, v18);
  if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v24, &EventProfilerExit, v25, v33);
  return v23;
}
