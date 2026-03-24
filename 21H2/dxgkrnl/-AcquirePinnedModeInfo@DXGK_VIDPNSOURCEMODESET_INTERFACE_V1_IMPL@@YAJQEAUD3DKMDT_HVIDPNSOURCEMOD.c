/*
 * XREFs of ?AcquirePinnedModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C0159E80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0002824 (--3@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetPinnedMode@DMMVIDPNTARGETMODESET@@QEAAPEAVDMMVIDPNTARGETMODE@@XZ @ 0x1C001B850 (-GetPinnedMode@DMMVIDPNTARGETMODESET@@QEAAPEAVDMMVIDPNTARGETMODE@@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetTextInfo@DMMVIDPNSOURCEMODE@@QEBAPEBW4_D3DKMDT_TEXT_RENDERING_FORMAT@@XZ @ 0x1C005C260 (-GetTextInfo@DMMVIDPNSOURCEMODE@@QEBAPEBW4_D3DKMDT_TEXT_RENDERING_FORMAT@@XZ.c)
 */

__int64 __fastcall DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AcquirePinnedModeInfo(
        DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE **a3)
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
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v14; // rdi
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
  _QWORD *v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  _QWORD *v29; // rbx
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rdx
  int v33; // ebx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  struct DMMVIDPNTARGETMODE *(__fastcall *v49)(DMMVIDPNTARGETMODESET *); // [rsp+20h] [rbp-30h] BYREF
  int v50; // [rsp+28h] [rbp-28h]
  int v51; // [rsp+30h] [rbp-20h] BYREF
  __int64 v52; // [rsp+38h] [rbp-18h]
  char v53; // [rsp+40h] [rbp-10h]

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2) + 10);
  v51 = -1;
  v52 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v53 = 1;
    v51 = 7003;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v5, &EventProfilerEnter, v6, 7003);
  }
  else
  {
    v53 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v51, 7003LL);
  v11 = WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
  *(_QWORD *)(v11 + 24) = this;
  *(_QWORD *)(v11 + 32) = a2;
  if ( !a2 )
  {
    v40 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v40 + 24) = 0LL;
    *(_QWORD *)(v40 + 32) = this;
    WdLogEvent5_WdError(v40);
    v33 = -1073741811;
    goto LABEL_18;
  }
  *(_QWORD *)a2 = 0LL;
  if ( this && *((_DWORD *)this + 32) == 1833173004 )
    v14 = this;
  else
    v14 = 0LL;
  if ( !v14 )
  {
    v41 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v41 + 24) = this;
    WdLogEvent5_WdError(v41);
    v33 = -1071774968;
    goto LABEL_18;
  }
  v50 = 0;
  v15 = *((_BYTE *)v14 + 136) == 0;
  v49 = DMMVIDPNTARGETMODESET::GetPinnedMode;
  if ( v15 )
  {
    v42 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v42 + 24) = v14;
    WdLogEvent5_WdError(v42);
    v33 = -1071774944;
LABEL_36:
    v48 = WdLogNewEntry5_WdError(v44, v43);
    *(_QWORD *)(v48 + 32) = v33;
    *(_QWORD *)(v48 + 24) = v14;
    WdLogEvent5_WdError(v48);
    goto LABEL_18;
  }
  PinnedMode = DMMVIDPNTARGETMODESET::GetPinnedMode(v14);
  if ( !PinnedMode )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v17, v16, v19, v20) + 24) = &v49;
    v33 = 1075708679;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(&v49, v37, v38, v39) + 24) = v14;
    goto LABEL_18;
  }
  v21 = operator new[](0x38uLL, 0x4E506456u, PagedPool);
  v26 = v21;
  if ( v21 )
  {
    *(_DWORD *)v21 = 305419896;
    v21[1] = PinnedMode;
    *((_OWORD *)v21 + 1) = 0LL;
    *((_OWORD *)v21 + 2) = 0LL;
    v21[6] = 0LL;
  }
  else
  {
    v26 = 0LL;
  }
  if ( !v26 )
  {
    v47 = WdLogNewEntry5_WdLowResource(v23, v22, v24, v25);
    *(_QWORD *)(v47 + 24) = v14;
    WdLogEvent5_WdLowResource(v47);
    operator delete(0LL);
    v33 = -1073741801;
    goto LABEL_36;
  }
  operator delete(0LL);
  v29 = v26 + 2;
  *(_DWORD *)v29 = *((_DWORD *)PinnedMode + 6);
  v30 = *((_DWORD *)PinnedMode + 18);
  *((_DWORD *)v29 + 1) = v30;
  if ( v30 == 1 )
  {
LABEL_14:
    v31 = *((unsigned int *)PinnedMode + 18);
    if ( (((_DWORD)v31 - 1) & 0xFFFFFFFC) != 0 || (_DWORD)v31 == 2 )
    {
      v46 = WdLogNewEntry5_WdAssertion(v31, v27);
      WdLogEvent5_WdAssertion(v46);
    }
    *(_OWORD *)(v29 + 1) = *(_OWORD *)((char *)PinnedMode + 76);
    *(_OWORD *)(v29 + 3) = *(_OWORD *)((char *)PinnedMode + 92);
    goto LABEL_17;
  }
  if ( v30 != 2 )
  {
    if ( v30 <= 2 || v30 > 4 )
    {
      if ( (unsigned int)(v30 - 3) <= 1 )
      {
        v45 = WdLogNewEntry5_WdAssertion(v28, v27);
        WdLogEvent5_WdAssertion(v45);
      }
      goto LABEL_17;
    }
    goto LABEL_14;
  }
  *((enum _D3DKMDT_TEXT_RENDERING_FORMAT *)v29 + 2) = *DMMVIDPNSOURCEMODE::GetTextInfo(PinnedMode, v27);
LABEL_17:
  operator delete(0LL);
  *(_QWORD *)a2 = v29;
  v33 = 0;
LABEL_18:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51, v32);
  if ( v53 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v34, &EventProfilerExit, v35, v51);
  return (unsigned int)v33;
}
