/*
 * XREFs of ?AcquireSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_DXGK_VIDPNSOURCEMODESET_INTERFACE@@@Z @ 0x1C0147740
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::AcquireSourceModeSet(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        __int64 *a3,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ **a4)
{
  __int64 v6; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  DXGK_VIDPN_INTERFACE_V1_IMPL *v15; // rdi
  char *v16; // r8
  DXGK_VIDPN_INTERFACE_V1_IMPL *v17; // rcx
  _QWORD *v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rcx
  unsigned int v23; // ebx
  __int64 v24; // rcx
  __int64 v25; // r8
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  int v33; // [rsp+20h] [rbp-48h] BYREF
  __int64 v34; // [rsp+28h] [rbp-40h]
  char v35; // [rsp+30h] [rbp-38h]
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v36; // [rsp+70h] [rbp+8h]

  v33 = -1;
  v6 = (unsigned int)a2;
  v34 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v35 = 1;
    v33 = 7043;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 7043);
  }
  else
  {
    v35 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v33, 7043LL);
  v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
  v12[3] = this;
  v12[4] = v6;
  v12[5] = a3;
  v12[6] = a4;
  if ( !a3 || !a4 )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
    v28[3] = 0LL;
    v28[4] = v6;
    v28[5] = this;
    WdLogEvent5_WdError(v28);
    v23 = -1073741811;
    goto LABEL_20;
  }
  *a3 = 0LL;
  *a4 = 0LL;
  if ( !this || (v15 = this, *((_DWORD *)this + 16) != 1833172997) )
    v15 = 0LL;
  if ( !v15 )
  {
    v29 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v29 + 24) = this;
    WdLogEvent5_WdError(v29);
    v23 = -1071774973;
    goto LABEL_20;
  }
  v16 = 0LL;
  v17 = (DXGK_VIDPN_INTERFACE_V1_IMPL *)*((_QWORD *)v15 + 15);
  if ( v17 != (DXGK_VIDPN_INTERFACE_V1_IMPL *)((char *)v15 + 120) )
    v16 = (char *)v17 - 8;
  if ( !v16 )
    goto LABEL_35;
  do
  {
    if ( *(_DWORD *)(*((_QWORD *)v16 + 11) + 24LL) == (_DWORD)v6 )
      break;
    v17 = (DXGK_VIDPN_INTERFACE_V1_IMPL *)*((_QWORD *)v16 + 1);
    v16 = (char *)v17 - 8;
    if ( v17 == (DXGK_VIDPN_INTERFACE_V1_IMPL *)((char *)v15 + 120) )
      v16 = 0LL;
  }
  while ( v16 );
  if ( !v16 )
  {
LABEL_35:
    v30 = WdLogNewEntry5_WdError(v17, (char *)v15 + 120);
    *(_QWORD *)(v30 + 24) = v6;
    *(_QWORD *)(v30 + 32) = v15;
    WdLogEvent5_WdError(v30);
  }
  v18 = (_QWORD *)(*((_QWORD *)v15 + 38) + 24LL);
  v36 = *(struct D3DKMDT_HVIDPNSOURCEMODESET__ **)(*((_QWORD *)v15 + 6) + 384LL);
  if ( (_QWORD *)*v18 == v18 )
  {
    v19 = 0LL;
  }
  else
  {
    v19 = *v18 - 8LL;
    if ( *v18 == 8LL )
    {
LABEL_39:
      v32 = WdLogNewEntry5_WdError(v19, v18);
      *(_QWORD *)(v32 + 24) = v6;
      WdLogEvent5_WdError(v32);
      v23 = -1071774972;
      goto LABEL_20;
    }
    do
    {
      if ( *(_DWORD *)(v19 + 24) == (_DWORD)v6 )
        break;
      v27 = *(_QWORD **)(v19 + 8);
      v19 = (__int64)(v27 - 1);
      if ( v27 == v18 )
        v19 = 0LL;
    }
    while ( v19 );
  }
  if ( !v19 )
    goto LABEL_39;
  v20 = *(_QWORD *)(v19 + 104);
  if ( !v20 )
  {
    v21 = 0LL;
    goto LABEL_38;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v20 + 96));
  v21 = *(_QWORD *)(v19 + 104);
  if ( !v21 )
  {
LABEL_38:
    v31 = WdLogNewEntry5_WdAssertion(v19, v18);
    WdLogEvent5_WdAssertion(v31);
  }
  v22 = v21 & -(__int64)(v21 != -137);
  v23 = 0;
  *a3 = v22;
  *a4 = v36;
LABEL_20:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33, (__int64)v18);
  if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v24, &EventProfilerExit, v25, v33);
  return v23;
}
