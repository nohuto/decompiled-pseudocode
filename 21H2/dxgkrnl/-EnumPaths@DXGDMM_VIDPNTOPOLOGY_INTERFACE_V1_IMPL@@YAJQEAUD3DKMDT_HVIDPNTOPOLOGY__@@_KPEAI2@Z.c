/*
 * XREFs of ?EnumPaths@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@_KPEAI2@Z @ 0x1C03A1DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C0010C88 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::EnumPaths(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        _DWORD *a3,
        unsigned int *a4)
{
  __int64 v8; // rax
  unsigned int v9; // ebx
  __int64 v10; // rcx
  int v11; // r8d
  __int64 v12; // rdx
  _QWORD *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  int v18; // [rsp+20h] [rbp-28h] BYREF
  __int64 v19; // [rsp+28h] [rbp-20h]
  char v20; // [rsp+30h] [rbp-18h]

  v18 = -1;
  v19 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v20 = 1;
    v18 = 6061;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 6061);
  }
  else
  {
    v20 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v18, 6061);
  if ( !a4 || !a3 )
  {
    WdLogSingleEntry2(2LL, a2, this);
    v9 = -1073741811;
    goto LABEL_21;
  }
  *a4 = -1;
  *a3 = -1;
  v8 = ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle((__int64)this);
  if ( v8 )
  {
    v10 = v8 + 24;
    v11 = 0;
    v12 = *(_QWORD *)(v8 + 24);
    if ( v12 == v8 + 24 )
      v13 = 0LL;
    else
      v13 = (_QWORD *)(v12 - 8);
    if ( a2 )
    {
      while ( v13 )
      {
        v14 = v13[1];
        v13 = (_QWORD *)(v14 - 8);
        if ( v14 == v10 )
          v13 = 0LL;
        if ( (struct D3DKMDT_HVIDPNTOPOLOGY__ *const)(unsigned int)++v11 == a2 )
          goto LABEL_17;
      }
    }
    else
    {
LABEL_17:
      if ( v13 )
      {
        v9 = 0;
        *a4 = *(_DWORD *)(v13[12] + 24LL);
        *a3 = *(_DWORD *)(v13[11] + 24LL);
        goto LABEL_21;
      }
    }
    v9 = 1075708748;
  }
  else
  {
    WdLogSingleEntry1(2LL, this);
    v9 = -1071774976;
  }
LABEL_21:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
  if ( v20 )
  {
    LOBYTE(v15) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v15, &EventProfilerExit, v16, v18);
  }
  return v9;
}
