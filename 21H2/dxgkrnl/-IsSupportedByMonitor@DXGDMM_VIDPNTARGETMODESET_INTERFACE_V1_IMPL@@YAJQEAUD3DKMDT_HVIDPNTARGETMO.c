/*
 * XREFs of ?IsSupportedByMonitor@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@IQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C0125100
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@I@Z @ 0x1C0006114 (-FindById@-$IndexedSet@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@I@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C0008424 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C0125218 (-IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::IsSupportedByMonitor(
        DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        unsigned __int8 *a3,
        unsigned __int8 *const a4)
{
  __int64 v6; // rbx
  __int64 v7; // r12
  unsigned __int8 v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r10
  DMMVIDPNTARGETMODE *v17; // r14
  unsigned int v18; // eax
  int IsSupportedByMonitor; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  _D3DKMDT_MODE_PRUNING_REASON v29; // [rsp+20h] [rbp-20h] BYREF
  int v30; // [rsp+28h] [rbp-18h] BYREF
  __int64 v31; // [rsp+30h] [rbp-10h]
  char v32; // [rsp+38h] [rbp-8h]
  unsigned __int8 v33; // [rsp+80h] [rbp+40h] BYREF

  v30 = -1;
  v31 = 0LL;
  v6 = (__int64)this;
  v7 = (unsigned int)a2;
  v8 = 1;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v32 = 1;
    v30 = 6017;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 6017);
  }
  else
  {
    v32 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v30, 6017LL);
  if ( !a3 )
  {
    v25 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v25 + 24) = 0LL;
LABEL_19:
    WdLogEvent5_WdError(v25);
    LODWORD(v6) = -1073741811;
    goto LABEL_11;
  }
  if ( !a4 )
  {
    v25 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v25 + 24) = a3;
    goto LABEL_19;
  }
  *a3 = 0;
  *(_DWORD *)a4 = 0;
  v11 = ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle(v6);
  if ( v11 )
  {
    v17 = (DMMVIDPNTARGETMODE *)IndexedSet<DMMVIDPNTARGETMODE>::FindById(v11 + 24, v7);
    if ( v17 )
    {
      v18 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 112) + 96LL) + 84LL);
      if ( v18 < 0xF || v18 > 0x11 )
        v8 = 0;
      v29 = D3DKMDT_MPR_UNINITIALIZED;
      v33 = 0;
      IsSupportedByMonitor = DMMVIDPNTARGETMODE::IsSupportedByMonitor(v17, v8, &v33, &v29);
      v6 = IsSupportedByMonitor;
      if ( IsSupportedByMonitor < 0 )
      {
        v28 = WdLogNewEntry5_WdDmmEvent(v21, v20);
        *(_QWORD *)(v28 + 24) = v17;
        *(_QWORD *)(v28 + 32) = v6;
        WdLogEvent5_WdDmmEvent(v28);
      }
      else
      {
        LODWORD(v6) = 0;
        *a3 = v33;
        *(_DWORD *)a4 = v29;
      }
    }
    else
    {
      v27 = WdLogNewEntry5_WdError(v15, v14);
      *(_QWORD *)(v27 + 24) = v7;
      *(_QWORD *)(v27 + 32) = v6;
      WdLogEvent5_WdError(v27);
      LODWORD(v6) = -1071774959;
    }
  }
  else
  {
    v26 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v26 + 24) = v6;
    WdLogEvent5_WdError(v26);
    LODWORD(v6) = -1071774967;
  }
LABEL_11:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30, v20);
  if ( v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v30);
  return (unsigned int)v6;
}
