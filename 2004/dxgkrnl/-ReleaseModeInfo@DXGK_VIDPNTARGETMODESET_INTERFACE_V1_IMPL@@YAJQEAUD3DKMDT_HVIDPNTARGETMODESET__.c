/*
 * XREFs of ?ReleaseModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C0154CD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00027E4 (--3@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::ReleaseModeInfo(
        DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_TARGET_MODE *const a3)
{
  unsigned int v3; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct D3DKMDT_HVIDPNTARGETMODESET__ *v13; // rdi
  char *v14; // rcx
  DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *v15; // rax
  char *v16; // rdx
  char *v17; // rax
  char *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  int v27; // [rsp+20h] [rbp-28h] BYREF
  __int64 v28; // [rsp+28h] [rbp-20h]
  char v29; // [rsp+30h] [rbp-18h]

  v3 = 0;
  v27 = -1;
  v28 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v29 = 1;
    v27 = 7012;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 7012);
  }
  else
  {
    v29 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v27, 7012LL);
  v10 = WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
  *(_QWORD *)(v10 + 24) = a2;
  *(_QWORD *)(v10 + 32) = this;
  if ( a2 )
  {
    if ( !this || *((_DWORD *)this + 32) != 1833173005 )
    {
      v26 = WdLogNewEntry5_WdError(v12, v11);
      *(_QWORD *)(v26 + 24) = this;
      WdLogEvent5_WdError(v26);
      v3 = -1071774967;
      goto LABEL_15;
    }
    v13 = a2 - 4;
    if ( *(_DWORD *)v13 == 305419896 )
    {
      v14 = (char *)*((_QWORD *)v13 + 1);
      if ( v14 )
      {
        v15 = (DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *)*((_QWORD *)this + 6);
        v16 = (char *)this + 48;
        if ( v15 == (DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *)((char *)this + 48) || (v17 = (char *)v15 - 8) == 0LL )
        {
LABEL_21:
          v25 = WdLogNewEntry5_WdError(v14, v16);
          *(_QWORD *)(v25 + 24) = v13;
          *(_QWORD *)(v25 + 32) = this;
          WdLogEvent5_WdError(v25);
          v3 = -1071774928;
          goto LABEL_15;
        }
        while ( v17 != v14 )
        {
          v18 = (char *)*((_QWORD *)v17 + 1);
          if ( v18 != v16 )
          {
            v17 = v18 - 8;
            if ( v17 )
              continue;
          }
          goto LABEL_21;
        }
      }
      operator delete(v13);
    }
    else
    {
      v24 = WdLogNewEntry5_WdError(v12, v11);
      *(_QWORD *)(v24 + 24) = v13;
      WdLogEvent5_WdError(v24);
      v3 = -1071774959;
    }
  }
  else
  {
    v23 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v23 + 24) = 0LL;
    WdLogEvent5_WdError(v23);
    v3 = -1071774959;
  }
LABEL_15:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27, v19);
  if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v27);
  return v3;
}
