/*
 * XREFs of ?AcquireSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_DXGDMM_VIDPNSOURCEMODESET_INTERFACE@@@Z @ 0x1C01E3EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0010C68 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C00114BC (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0011D9C (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGDMM_VIDPN_INTERFACE_V1_IMPL::AcquireSourceModeSet(
        DXGDMM_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        __int64 *a3,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ **a4)
{
  __int64 v6; // rbx
  __int64 v8; // rax
  __int64 v9; // r10
  __int64 v10; // r11
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // r10
  __int64 v14; // r11
  __int64 v15; // rax
  __int64 v16; // rbx
  unsigned int v17; // ebx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v21; // [rsp+20h] [rbp-28h] BYREF
  __int64 v22; // [rsp+28h] [rbp-20h]
  char v23; // [rsp+30h] [rbp-18h]

  v21 = -1;
  v22 = 0LL;
  v6 = (unsigned int)a2;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v23 = 1;
    v21 = 6034;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 6034);
  }
  else
  {
    v23 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v21, 6034);
  if ( !a3 || !a4 )
  {
    WdLogSingleEntry3(2LL, 0LL, v6, this);
    v17 = -1073741811;
    goto LABEL_12;
  }
  *a3 = 0LL;
  *a4 = 0LL;
  v8 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this);
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL, this);
    v17 = -1071774973;
    goto LABEL_12;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v8 + 48) + 128LL) == v8 )
  {
    WdLogSingleEntry2(2LL, v6, v8);
    v17 = -1071774909;
    goto LABEL_12;
  }
  if ( !DMMVIDPNTOPOLOGY::IsSourceInTopology((DMMVIDPNTOPOLOGY *)(v8 + 96), v6) )
  {
    WdLogSingleEntry2(2LL, v6, v9);
    v17 = -1071774919;
    goto LABEL_12;
  }
  v11 = *(struct D3DKMDT_HVIDPNSOURCEMODESET__ **)(v10 + 496);
  v12 = IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(v9 + 304), v6);
  v14 = v12;
  if ( !v12 )
  {
    WdLogSingleEntry2(2LL, v6, v13);
    v17 = -1071774972;
    goto LABEL_12;
  }
  v15 = *(_QWORD *)(v12 + 104);
  if ( !v15 )
  {
    v16 = 0LL;
    goto LABEL_22;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v15 + 96));
  v16 = *(_QWORD *)(v14 + 104);
  if ( !v16 )
LABEL_22:
    WdLogSingleEntry0(1LL);
  *a3 = v16 & -(__int64)(v16 != -137);
  v17 = 0;
  *a4 = v11;
LABEL_12:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
  if ( v23 )
  {
    LOBYTE(v18) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v21);
  }
  return v17;
}
