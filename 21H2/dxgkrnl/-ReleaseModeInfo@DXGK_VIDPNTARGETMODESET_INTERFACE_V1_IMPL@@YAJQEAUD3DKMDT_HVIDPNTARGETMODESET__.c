/*
 * XREFs of ?ReleaseModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C018A910
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::ReleaseModeInfo(
        DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL **this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_TARGET_MODE *const a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  struct D3DKMDT_HVIDPNTARGETMODESET__ *v8; // rdx
  char *v9; // r9
  DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *v10; // rcx
  char *v11; // rcx
  DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *v12; // rax
  unsigned int v13; // ebx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v17; // [rsp+20h] [rbp-28h] BYREF
  __int64 v18; // [rsp+28h] [rbp-20h]
  char v19; // [rsp+30h] [rbp-18h]

  v17 = -1;
  v18 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v19 = 1;
    v17 = 7012;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 7012);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v17, 7012);
  v7 = WdLogNewEntry5_WdTrace(v6, v5);
  *(_QWORD *)(v7 + 24) = a2;
  *(_QWORD *)(v7 + 32) = this;
  if ( !a2 )
  {
    WdLogSingleEntry1(2LL, 0LL);
LABEL_22:
    v13 = -1071774959;
    goto LABEL_16;
  }
  if ( !this || *((_DWORD *)this + 32) != 1833173005 )
  {
    WdLogSingleEntry1(2LL, this);
    v13 = -1071774967;
    goto LABEL_16;
  }
  v8 = a2 - 4;
  if ( *((_DWORD *)a2 - 4) != 305419896 )
  {
    WdLogSingleEntry1(2LL, v8);
    goto LABEL_22;
  }
  v9 = (char *)*((_QWORD *)v8 + 1);
  if ( v9 )
  {
    v10 = this[6];
    if ( v10 == (DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *)(this + 6) || (v11 = (char *)v10 - 8) == 0LL )
    {
LABEL_23:
      WdLogSingleEntry2(2LL, v8, this);
      v13 = -1071774928;
      goto LABEL_16;
    }
    while ( v11 != v9 )
    {
      v12 = (DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *)*((_QWORD *)v11 + 1);
      v11 = (char *)v12 - 8;
      if ( v12 == (DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *)(this + 6) )
        v11 = 0LL;
      if ( !v11 )
        goto LABEL_23;
    }
  }
  operator delete(a2 - 4);
  v13 = 0;
LABEL_16:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
  if ( v19 )
  {
    LOBYTE(v14) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v17);
  }
  return v13;
}
