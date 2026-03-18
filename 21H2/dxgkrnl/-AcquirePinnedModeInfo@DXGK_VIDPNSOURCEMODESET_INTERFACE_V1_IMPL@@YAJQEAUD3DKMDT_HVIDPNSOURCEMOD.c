/*
 * XREFs of ?AcquirePinnedModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C01D0680
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetPinnedMode@DMMVIDPNTARGETMODESET@@QEAAPEAVDMMVIDPNTARGETMODE@@XZ @ 0x1C0020480 (-GetPinnedMode@DMMVIDPNTARGETMODESET@@QEAAPEAVDMMVIDPNTARGETMODE@@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetTextInfo@DMMVIDPNSOURCEMODE@@QEBAPEBW4_D3DKMDT_TEXT_RENDERING_FORMAT@@XZ @ 0x1C0069144 (-GetTextInfo@DMMVIDPNSOURCEMODE@@QEBAPEBW4_D3DKMDT_TEXT_RENDERING_FORMAT@@XZ.c)
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
  __int64 v9; // rax
  bool v10; // zf
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DMMVIDPNTARGETMODE *PinnedMode; // rdi
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rsi
  int v17; // eax
  int v18; // ecx
  int v19; // edi
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v23; // rdx
  struct DMMVIDPNTARGETMODE *(__fastcall *v24)(DMMVIDPNTARGETMODESET *); // [rsp+20h] [rbp-38h] BYREF
  int v25; // [rsp+28h] [rbp-30h]
  int v26; // [rsp+30h] [rbp-28h] BYREF
  __int64 v27; // [rsp+38h] [rbp-20h]
  char v28; // [rsp+40h] [rbp-18h]

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL_GetGlobal() + 24);
  v26 = -1;
  v27 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v28 = 1;
    v26 = 7003;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v5, &EventProfilerEnter, v6, 7003);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v26, 7003);
  v9 = WdLogNewEntry5_WdTrace(v8, v7);
  *(_QWORD *)(v9 + 24) = this;
  *(_QWORD *)(v9 + 32) = a2;
  if ( !a2 )
  {
    WdLogSingleEntry2(2LL, 0LL, this);
    v19 = -1073741811;
    goto LABEL_14;
  }
  *(_QWORD *)a2 = 0LL;
  if ( !this || *((_DWORD *)this + 32) != 1833173004 )
  {
    WdLogSingleEntry1(2LL, this);
    v19 = -1071774968;
    goto LABEL_14;
  }
  v25 = 0;
  v10 = *((_BYTE *)this + 136) == 0;
  v24 = DMMVIDPNTARGETMODESET::GetPinnedMode;
  if ( v10 )
  {
    WdLogSingleEntry1(2LL, this);
    v19 = -1071774944;
LABEL_30:
    WdLogSingleEntry2(2LL, this, v19);
    goto LABEL_14;
  }
  PinnedMode = DMMVIDPNTARGETMODESET::GetPinnedMode(this);
  if ( !PinnedMode )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v12, v11) + 24) = &v24;
    v19 = 1075708679;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(&v24, v23) + 24) = this;
    goto LABEL_14;
  }
  v15 = operator new[](0x38uLL, 0x4E506456u, 256LL, v14);
  v16 = v15;
  if ( !v15 )
  {
    WdLogSingleEntry1(6LL, this);
    operator delete(0LL);
    v19 = -1073741801;
    goto LABEL_30;
  }
  *(_DWORD *)v15 = 305419896;
  *(_QWORD *)(v15 + 8) = PinnedMode;
  *(_OWORD *)(v15 + 16) = 0LL;
  *(_OWORD *)(v15 + 32) = 0LL;
  *(_QWORD *)(v15 + 48) = 0LL;
  operator delete(0LL);
  *(_DWORD *)(v16 + 16) = *((_DWORD *)PinnedMode + 6);
  v17 = *((_DWORD *)PinnedMode + 18);
  *(_DWORD *)(v16 + 20) = v17;
  if ( v17 == 1 )
  {
LABEL_10:
    v18 = *((_DWORD *)PinnedMode + 18);
    if ( ((v18 - 1) & 0xFFFFFFFC) != 0 || v18 == 2 )
      WdLogSingleEntry0(1LL);
    *(_OWORD *)(v16 + 24) = *(_OWORD *)((char *)PinnedMode + 76);
    *(_OWORD *)(v16 + 40) = *(_OWORD *)((char *)PinnedMode + 92);
    goto LABEL_13;
  }
  if ( v17 == 2 )
  {
    *(enum _D3DKMDT_TEXT_RENDERING_FORMAT *)(v16 + 24) = *DMMVIDPNSOURCEMODE::GetTextInfo(PinnedMode);
  }
  else
  {
    if ( v17 <= 2 )
    {
      if ( (unsigned int)(v17 - 3) <= 1 )
        WdLogSingleEntry0(1LL);
      goto LABEL_13;
    }
    if ( v17 <= 4 )
      goto LABEL_10;
  }
LABEL_13:
  operator delete(0LL);
  v19 = 0;
  *(_QWORD *)a2 = v16 + 16;
LABEL_14:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
  if ( v28 )
  {
    LOBYTE(v20) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v26);
  }
  return (unsigned int)v19;
}
