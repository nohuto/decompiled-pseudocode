/*
 * XREFs of ?GetPathSourceFromTarget@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IPEAI@Z @ 0x1C03A7190
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C0010C88 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C01A8564 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::GetPathSourceFromTarget(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        _DWORD *a3,
        unsigned int *a4)
{
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  unsigned int v10; // ebx
  DMMVIDPNTOPOLOGY *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  int v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+28h] [rbp-20h]
  char v17; // [rsp+30h] [rbp-18h]

  v15 = -1;
  v16 = 0LL;
  v6 = (unsigned int)a2;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v17 = 1;
    v15 = 7034;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 7034);
  }
  else
  {
    v17 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v15, 7034);
  v9 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v7);
  v9[3] = v6;
  v9[4] = this;
  v9[5] = a3;
  if ( a3 )
  {
    *a3 = -1;
    v11 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle((__int64)this);
    if ( v11 )
    {
      *a3 = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(v11, (unsigned int)v6);
      v10 = 0;
    }
    else
    {
      WdLogSingleEntry1(2LL, this);
      v10 = -1071774976;
    }
  }
  else
  {
    WdLogSingleEntry3(2LL, 0LL, this, v6);
    v10 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
  if ( v17 )
  {
    LOBYTE(v12) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v12, &EventProfilerExit, v13, v15);
  }
  return v10;
}
