/*
 * XREFs of ?GetNumPathsFromSource@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IPEA_K@Z @ 0x1C03A7030
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C0010C88 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C01BB920 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::GetNumPathsFromSource(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  __int64 v5; // rbx
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  DMMVIDPNTOPOLOGY *v10; // rax
  DMMVIDPNTOPOLOGY *v11; // rsi
  int NumPathsFromSource; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  int v19; // [rsp+20h] [rbp-20h] BYREF
  __int64 v20; // [rsp+28h] [rbp-18h]
  char v21; // [rsp+30h] [rbp-10h]
  unsigned __int64 v22; // [rsp+60h] [rbp+20h] BYREF

  v19 = -1;
  v20 = 0LL;
  v5 = (__int64)this;
  v6 = (unsigned int)a2;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v21 = 1;
    v19 = 7032;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 7032);
  }
  else
  {
    v21 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v19, 7032);
  v9 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v7);
  v9[3] = v6;
  v9[4] = v5;
  v9[5] = a3;
  if ( a3 )
  {
    *a3 = 0LL;
    v10 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v5);
    v11 = v10;
    if ( v10 )
    {
      v22 = 0LL;
      NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v10, v6, &v22);
      v5 = NumPathsFromSource;
      if ( NumPathsFromSource >= 0 )
      {
        LODWORD(v5) = 0;
        *a3 = v22;
      }
      else
      {
        v15 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v13);
        v15[3] = v6;
        v15[4] = v11;
        v15[5] = v5;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, v5);
      LODWORD(v5) = -1071774976;
    }
  }
  else
  {
    WdLogSingleEntry3(2LL, 0LL, v6, v5);
    LODWORD(v5) = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
  if ( v21 )
  {
    LOBYTE(v16) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerExit, v17, v19);
  }
  return (unsigned int)v5;
}
