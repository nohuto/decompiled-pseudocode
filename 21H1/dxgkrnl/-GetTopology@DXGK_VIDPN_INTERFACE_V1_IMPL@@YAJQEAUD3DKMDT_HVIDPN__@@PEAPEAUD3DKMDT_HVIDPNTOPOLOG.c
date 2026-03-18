/*
 * XREFs of ?GetTopology@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@PEAPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEAPEBU_DXGK_VIDPNTOPOLOGY_INTERFACE@@@Z @ 0x1C0148130
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::GetTopology(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        struct D3DKMDT_HVIDPNTOPOLOGY__ **a3,
        const struct _DXGK_VIDPNTOPOLOGY_INTERFACE **a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  DXGK_VIDPN_INTERFACE_V1_IMPL *v14; // rcx
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v15; // rdx
  unsigned int v16; // ebx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // [rsp+20h] [rbp-28h] BYREF
  __int64 v23; // [rsp+28h] [rbp-20h]
  char v24; // [rsp+30h] [rbp-18h]

  v22 = -1;
  v23 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v24 = 1;
    v22 = 7042;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 7042);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v22, 7042LL);
  v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
  v11[3] = this;
  v11[4] = a2;
  v11[5] = a3;
  if ( a2 && a3 )
  {
    *(_QWORD *)a2 = 0LL;
    *a3 = 0LL;
    if ( this && *((_DWORD *)this + 16) == 1833172997 )
      v14 = this;
    else
      v14 = 0LL;
    if ( v14 )
    {
      v15 = *(struct D3DKMDT_HVIDPNTOPOLOGY__ **)(*((_QWORD *)v14 + 6) + 376LL);
      *(_QWORD *)a2 = ((unsigned __int64)v14 + 96) & -(__int64)((DXGK_VIDPN_INTERFACE_V1_IMPL *)((char *)v14 + 289) != 0LL);
      v16 = 0;
      *a3 = v15;
    }
    else
    {
      v21 = WdLogNewEntry5_WdError(0LL, v12);
      *(_QWORD *)(v21 + 24) = this;
      WdLogEvent5_WdError(v21);
      v16 = -1071774973;
    }
  }
  else
  {
    v20 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v20 + 24) = 0LL;
    *(_QWORD *)(v20 + 32) = this;
    WdLogEvent5_WdError(v20);
    v16 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22, (__int64)v15);
  if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v22);
  return v16;
}
