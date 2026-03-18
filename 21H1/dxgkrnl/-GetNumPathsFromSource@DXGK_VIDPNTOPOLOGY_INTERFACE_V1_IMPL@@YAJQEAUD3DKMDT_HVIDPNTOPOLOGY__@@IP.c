/*
 * XREFs of ?GetNumPathsFromSource@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IPEA_K@Z @ 0x1C02E3B10
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000E1C8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C012B788 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
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
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rdx
  DMMVIDPNTOPOLOGY *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  DMMVIDPNTOPOLOGY *v19; // rsi
  __int64 v20; // rax
  int NumPathsFromSource; // eax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  int v29; // [rsp+20h] [rbp-20h] BYREF
  __int64 v30; // [rsp+28h] [rbp-18h]
  char v31; // [rsp+30h] [rbp-10h]
  unsigned __int64 v32; // [rsp+60h] [rbp+20h] BYREF

  v29 = -1;
  v30 = 0LL;
  v5 = (__int64)this;
  v6 = (unsigned int)a2;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v31 = 1;
    v29 = 7032;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 7032);
  }
  else
  {
    v31 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v29, 7032LL);
  v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
  v11[3] = v6;
  v11[4] = v5;
  v11[5] = a3;
  if ( a3 )
  {
    *a3 = 0LL;
    v16 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v5);
    v19 = v16;
    if ( v16 )
    {
      v32 = 0LL;
      NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v16, (unsigned int)v6, &v32);
      v5 = NumPathsFromSource;
      if ( NumPathsFromSource >= 0 )
      {
        LODWORD(v5) = 0;
        *a3 = v32;
      }
      else
      {
        v25 = (_QWORD *)WdLogNewEntry5_WdTrace(v22, v15, v23, v24);
        v25[3] = v6;
        v25[4] = v19;
        v25[5] = v5;
      }
    }
    else
    {
      v20 = WdLogNewEntry5_WdError(v18, v17);
      *(_QWORD *)(v20 + 24) = v5;
      WdLogEvent5_WdError(v20);
      LODWORD(v5) = -1071774976;
    }
  }
  else
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12);
    v14[3] = 0LL;
    v14[4] = v6;
    v14[5] = v5;
    WdLogEvent5_WdError(v14);
    LODWORD(v5) = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29, v15);
  if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v26, &EventProfilerExit, v27, v29);
  return (unsigned int)v5;
}
