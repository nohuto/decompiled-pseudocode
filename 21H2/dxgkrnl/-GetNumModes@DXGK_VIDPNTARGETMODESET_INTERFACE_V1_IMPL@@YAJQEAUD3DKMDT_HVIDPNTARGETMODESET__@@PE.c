/*
 * XREFs of ?GetNumModes@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEA_K@Z @ 0x1C01A9C80
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C001123C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::GetNumModes(
        DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        unsigned __int64 *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+28h] [rbp-20h]
  char v15; // [rsp+30h] [rbp-18h]

  v13 = -1;
  v14 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v15 = 1;
    v13 = 7008;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 7008);
  }
  else
  {
    v15 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v13, 7008);
  v7 = WdLogNewEntry5_WdTrace(v6, v5);
  *(_QWORD *)(v7 + 24) = this;
  *(_QWORD *)(v7 + 32) = a2;
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    v8 = ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)this);
    if ( v8 )
    {
      v9 = 0;
      *(_QWORD *)a2 = *(_QWORD *)(v8 + 64);
    }
    else
    {
      WdLogSingleEntry1(2LL, this);
      v9 = -1071774967;
    }
  }
  else
  {
    WdLogSingleEntry2(2LL, 0LL, this);
    v9 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v13);
  if ( v15 )
  {
    LOBYTE(v10) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v10, &EventProfilerExit, v11, v13);
  }
  return v9;
}
