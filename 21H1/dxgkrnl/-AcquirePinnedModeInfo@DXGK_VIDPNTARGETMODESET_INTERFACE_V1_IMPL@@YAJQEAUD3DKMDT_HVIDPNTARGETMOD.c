/*
 * XREFs of ?AcquirePinnedModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C01478F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000BEAC (--3@YAXPEAX@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetPinnedMode@DMMVIDPNTARGETMODESET@@QEAAPEAVDMMVIDPNTARGETMODE@@XZ @ 0x1C001B080 (-GetPinnedMode@DMMVIDPNTARGETMODESET@@QEAAPEAVDMMVIDPNTARGETMODE@@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C0026840 (memset.c)
 */

__int64 __fastcall DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::AcquirePinnedModeInfo(
        DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_TARGET_MODE **a3)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *v14; // rbx
  bool v15; // zf
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct DMMVIDPNTARGETMODE *PinnedMode; // rsi
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  _QWORD *v26; // rdi
  _QWORD *v27; // rbx
  __int64 v28; // rdx
  int v29; // edi
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rax
  struct DMMVIDPNTARGETMODE *(__fastcall *v43)(DMMVIDPNTARGETMODESET *); // [rsp+20h] [rbp-30h] BYREF
  int v44; // [rsp+28h] [rbp-28h]
  int v45; // [rsp+30h] [rbp-20h] BYREF
  __int64 v46; // [rsp+38h] [rbp-18h]
  char v47; // [rsp+40h] [rbp-10h]

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2) + 14);
  v45 = -1;
  v46 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v47 = 1;
    v45 = 7011;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v5, &EventProfilerEnter, v6, 7011);
  }
  else
  {
    v47 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v45, 7011LL);
  v11 = WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
  *(_QWORD *)(v11 + 24) = this;
  *(_QWORD *)(v11 + 32) = a2;
  if ( !a2 )
  {
    v36 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v36 + 24) = 0LL;
    *(_QWORD *)(v36 + 32) = this;
    WdLogEvent5_WdError(v36);
    v29 = -1073741811;
    goto LABEL_14;
  }
  *(_QWORD *)a2 = 0LL;
  if ( this && *((_DWORD *)this + 32) == 1833173005 )
    v14 = this;
  else
    v14 = 0LL;
  if ( !v14 )
  {
    v37 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v37 + 24) = this;
    WdLogEvent5_WdError(v37);
    v29 = -1071774967;
    goto LABEL_14;
  }
  v44 = 0;
  v15 = *((_BYTE *)v14 + 136) == 0;
  v43 = DMMVIDPNTARGETMODESET::GetPinnedMode;
  if ( v15 )
  {
    v38 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v38 + 24) = v14;
    WdLogEvent5_WdError(v38);
    v29 = -1071774944;
LABEL_25:
    v42 = WdLogNewEntry5_WdError(v40, v39);
    *(_QWORD *)(v42 + 32) = v29;
    *(_QWORD *)(v42 + 24) = v14;
    WdLogEvent5_WdError(v42);
    goto LABEL_14;
  }
  PinnedMode = DMMVIDPNTARGETMODESET::GetPinnedMode(v14);
  if ( !PinnedMode )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v17, v16, v19, v20) + 24) = &v43;
    v29 = 1075708679;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(&v43, v33, v34, v35) + 24) = v14;
    goto LABEL_14;
  }
  v21 = operator new[](0x58uLL, 0x4E506456u, PagedPool);
  v26 = v21;
  if ( v21 )
  {
    *(_DWORD *)v21 = 305419896;
    v21[1] = PinnedMode;
    memset(v21 + 2, 0, 0x48uLL);
  }
  else
  {
    v26 = 0LL;
  }
  if ( !v26 )
  {
    v41 = WdLogNewEntry5_WdLowResource(v23, v22, v24, v25);
    *(_QWORD *)(v41 + 24) = v14;
    WdLogEvent5_WdLowResource(v41);
    operator delete(0LL);
    v29 = -1073741801;
    goto LABEL_25;
  }
  operator delete(0LL);
  v27 = v26 + 2;
  *((_DWORD *)v26 + 4) = *((_DWORD *)PinnedMode + 6);
  *(_OWORD *)(v26 + 3) = *(_OWORD *)((char *)PinnedMode + 72);
  *(_OWORD *)(v26 + 5) = *(_OWORD *)((char *)PinnedMode + 88);
  *(_OWORD *)(v26 + 7) = *(_OWORD *)((char *)PinnedMode + 104);
  v26[9] = *((_QWORD *)PinnedMode + 15);
  *((_DWORD *)v26 + 20) = *((_DWORD *)PinnedMode + 32);
  operator delete(0LL);
  v29 = 0;
  *(_QWORD *)a2 = v27;
LABEL_14:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45, v28);
  if ( v47 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v30, &EventProfilerExit, v31, v45);
  return (unsigned int)v29;
}
