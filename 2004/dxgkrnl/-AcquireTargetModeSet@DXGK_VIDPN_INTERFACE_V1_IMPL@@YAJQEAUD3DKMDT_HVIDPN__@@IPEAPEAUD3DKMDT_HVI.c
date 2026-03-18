/*
 * XREFs of ?AcquireTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_DXGK_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x1C0154DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::AcquireTargetModeSet(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        _QWORD *a3,
        struct D3DKMDT_HVIDPNTARGETMODESET__ **a4)
{
  unsigned int v4; // edi
  __int64 v5; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rax
  __int64 v14; // rdx
  DXGK_VIDPN_INTERFACE_V1_IMPL *v15; // rcx
  _QWORD *v16; // rdx
  _QWORD *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // [rsp+20h] [rbp-38h] BYREF
  __int64 v33; // [rsp+28h] [rbp-30h]
  char v34; // [rsp+30h] [rbp-28h]
  struct D3DKMDT_HVIDPNTARGETMODESET__ *v35; // [rsp+60h] [rbp+8h]

  v4 = 0;
  v5 = (unsigned int)a2;
  v32 = -1;
  v33 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v34 = 1;
    v32 = 7048;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 7048);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v32, 7048LL);
  v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9, v11, v12);
  v13[3] = this;
  v13[4] = v5;
  v13[5] = a3;
  v13[6] = a4;
  if ( !a3 || !a4 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdError(v15, v14);
    v26[3] = 0LL;
    v26[4] = v5;
    v26[5] = this;
    WdLogEvent5_WdError(v26);
    v27 = -1073741811;
LABEL_38:
    v4 = v27;
    goto LABEL_19;
  }
  *a3 = 0LL;
  *a4 = 0LL;
  if ( !this || *((_DWORD *)this + 16) != 1833172997 )
  {
    v31 = WdLogNewEntry5_WdError(v15, v14);
    *(_QWORD *)(v31 + 24) = this;
    WdLogEvent5_WdError(v31);
    v27 = -1071774973;
    goto LABEL_38;
  }
  v16 = (_QWORD *)*((_QWORD *)this + 15);
  if ( v16 == (_QWORD *)((char *)this + 120) || --v16 == 0LL )
  {
LABEL_32:
    v28 = WdLogNewEntry5_WdError(v15, v16);
    *(_QWORD *)(v28 + 24) = v5;
    *(_QWORD *)(v28 + 32) = this;
    WdLogEvent5_WdError(v28);
  }
  else
  {
    while ( *(_DWORD *)(v16[12] + 24LL) != (_DWORD)v5 )
    {
      v15 = (DXGK_VIDPN_INTERFACE_V1_IMPL *)v16[1];
      v16 = (_QWORD *)((char *)v15 - 8);
      if ( v15 == (DXGK_VIDPN_INTERFACE_V1_IMPL *)((char *)this + 120) )
        v16 = 0LL;
      if ( !v16 )
        goto LABEL_32;
    }
  }
  v35 = *(struct D3DKMDT_HVIDPNTARGETMODESET__ **)(*((_QWORD *)this + 6) + 392LL);
  v17 = (_QWORD *)(*((_QWORD *)this + 39) + 24LL);
  if ( (_QWORD *)*v17 == v17 )
  {
    v18 = 0LL;
  }
  else
  {
    v18 = *v17 - 8LL;
    if ( *v17 == 8LL )
    {
LABEL_36:
      v30 = WdLogNewEntry5_WdError(v17, v16);
      *(_QWORD *)(v30 + 24) = v5;
      WdLogEvent5_WdError(v30);
      v27 = -1071774971;
      goto LABEL_38;
    }
    while ( *(_DWORD *)(v18 + 24) != (_DWORD)v5 )
    {
      v25 = *(_QWORD **)(v18 + 8);
      if ( v25 == v17 )
        v18 = 0LL;
      else
        v18 = (__int64)(v25 - 1);
      if ( !v18 )
        goto LABEL_36;
    }
  }
  if ( !v18 )
    goto LABEL_36;
  v19 = *(_QWORD *)(v18 + 104);
  if ( !v19 )
  {
    v20 = 0LL;
    goto LABEL_35;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v19 + 96));
  v20 = *(_QWORD *)(v18 + 104);
  if ( !v20 )
  {
LABEL_35:
    v29 = WdLogNewEntry5_WdAssertion(v19, v16);
    WdLogEvent5_WdAssertion(v29);
  }
  v21 = 0LL;
  if ( v20 != -137 )
    v21 = v20;
  *a3 = v21;
  *a4 = v35;
LABEL_19:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32, (__int64)v16);
  if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v32);
  return v4;
}
