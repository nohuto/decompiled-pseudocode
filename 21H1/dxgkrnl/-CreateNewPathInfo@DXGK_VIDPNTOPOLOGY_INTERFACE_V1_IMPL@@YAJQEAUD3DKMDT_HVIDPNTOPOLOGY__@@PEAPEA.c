/*
 * XREFs of ?CreateNewPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEAPEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C02E37C0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000E1C8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?AcquireRawDdiEnumeratorCachedPathInfo@DMMVIDPNTOPOLOGY@@QEAAJPEAPEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C02E20F0 (-AcquireRawDdiEnumeratorCachedPathInfo@DMMVIDPNTOPOLOGY@@QEAAJPEAPEAU_D3DKMDT_VIDPN_PRESENT_PATH.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::CreateNewPathInfo(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        struct _D3DKMDT_VIDPN_PRESENT_PATH **a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  DMMVIDPNTOPOLOGY *v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  int v24; // [rsp+20h] [rbp-20h] BYREF
  __int64 v25; // [rsp+28h] [rbp-18h]
  char v26; // [rsp+30h] [rbp-10h]
  struct _D3DKMDT_VIDPN_PRESENT_PATH *v27; // [rsp+50h] [rbp+10h] BYREF

  v24 = -1;
  v25 = 0LL;
  v4 = (__int64)this;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v26 = 1;
    v24 = 7040;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 7040);
  }
  else
  {
    v26 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v24, 7040LL);
  v9 = WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
  *(_QWORD *)(v9 + 24) = v4;
  *(_QWORD *)(v9 + 32) = a2;
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    if ( ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v4) )
    {
      v27 = 0LL;
      v17 = DMMVIDPNTOPOLOGY::AcquireRawDdiEnumeratorCachedPathInfo(v15, &v27);
      v4 = v17;
      if ( v17 >= 0 )
      {
        LODWORD(v4) = 0;
        *(_QWORD *)a2 = v27;
      }
      else
      {
        if ( v17 != -1073741801 )
        {
          v19 = WdLogNewEntry5_WdAssertion(v18, v13);
          WdLogEvent5_WdAssertion(v19);
        }
        v20 = WdLogNewEntry5_WdError(v18, v13);
        *(_QWORD *)(v20 + 24) = v4;
        WdLogEvent5_WdError(v20);
      }
    }
    else
    {
      v16 = WdLogNewEntry5_WdError(v15, v14);
      *(_QWORD *)(v16 + 24) = v4;
      WdLogEvent5_WdError(v16);
      LODWORD(v4) = -1071774976;
    }
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v12 + 24) = 0LL;
    *(_QWORD *)(v12 + 32) = v4;
    WdLogEvent5_WdError(v12);
    LODWORD(v4) = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24, v13);
  if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v21, &EventProfilerExit, v22, v24);
  return (unsigned int)v4;
}
