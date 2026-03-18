/*
 * XREFs of ?AcquireSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_DXGK_VIDPNSOURCEMODESET_INTERFACE@@@Z @ 0x1C01D0850
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::AcquireSourceModeSet(
        DXGK_VIDPN_INTERFACE_V1_IMPL **this,
        struct D3DKMDT_HVIDPN__ *const a2,
        __int64 *a3,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ **a4)
{
  __int64 v5; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  DXGK_VIDPN_INTERFACE_V1_IMPL *v11; // rdx
  char *v12; // rdx
  _QWORD *v13; // rdx
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v14; // rbp
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rcx
  unsigned int v19; // ebx
  __int64 v20; // rcx
  __int64 v21; // r8
  _QWORD *v23; // rax
  DXGK_VIDPN_INTERFACE_V1_IMPL *v24; // rcx
  int v25; // [rsp+20h] [rbp-48h] BYREF
  __int64 v26; // [rsp+28h] [rbp-40h]
  char v27; // [rsp+30h] [rbp-38h]

  v25 = -1;
  v5 = (unsigned int)a2;
  v26 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v27 = 1;
    v25 = 7043;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 7043);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v25, 7043);
  v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8);
  v10[3] = this;
  v10[4] = v5;
  v10[5] = a3;
  v10[6] = a4;
  if ( !a3 || !a4 )
  {
    WdLogSingleEntry3(2LL, 0LL, v5, this);
    v19 = -1073741811;
    goto LABEL_16;
  }
  *a3 = 0LL;
  *a4 = 0LL;
  if ( !this || *((_DWORD *)this + 16) != 1833172997 )
  {
    WdLogSingleEntry1(2LL, this);
    v19 = -1071774973;
    goto LABEL_16;
  }
  v11 = this[15];
  if ( v11 == (DXGK_VIDPN_INTERFACE_V1_IMPL *)(this + 15) || (v12 = (char *)v11 - 8) == 0LL )
  {
LABEL_28:
    WdLogSingleEntry2(2LL, v5, this);
  }
  else
  {
    while ( *(_DWORD *)(*((_QWORD *)v12 + 11) + 24LL) != (_DWORD)v5 )
    {
      v24 = (DXGK_VIDPN_INTERFACE_V1_IMPL *)*((_QWORD *)v12 + 1);
      v12 = (char *)v24 - 8;
      if ( v24 == (DXGK_VIDPN_INTERFACE_V1_IMPL *)(this + 15) )
        v12 = 0LL;
      if ( !v12 )
        goto LABEL_28;
    }
  }
  v13 = (_QWORD *)((char *)this[38] + 24);
  v14 = (struct D3DKMDT_HVIDPNSOURCEMODESET__ *)*((_QWORD *)this[6] + 54);
  if ( (_QWORD *)*v13 == v13 || (v15 = *v13 - 8LL, *v13 == 8LL) )
  {
LABEL_31:
    WdLogSingleEntry1(2LL, v5);
    v19 = -1071774972;
    goto LABEL_16;
  }
  while ( *(_DWORD *)(v15 + 24) != (_DWORD)v5 )
  {
    v23 = *(_QWORD **)(v15 + 8);
    v15 = (__int64)(v23 - 1);
    if ( v23 == v13 )
      v15 = 0LL;
    if ( !v15 )
      goto LABEL_31;
  }
  v16 = *(_QWORD *)(v15 + 104);
  if ( !v16 )
  {
    v17 = 0LL;
    goto LABEL_30;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v16 + 96));
  v17 = *(_QWORD *)(v15 + 104);
  if ( !v17 )
LABEL_30:
    WdLogSingleEntry0(1LL);
  v18 = v17 & -(__int64)(v17 != -137);
  v19 = 0;
  *a3 = v18;
  *a4 = v14;
LABEL_16:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
  if ( v27 )
  {
    LOBYTE(v20) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v25);
  }
  return v19;
}
