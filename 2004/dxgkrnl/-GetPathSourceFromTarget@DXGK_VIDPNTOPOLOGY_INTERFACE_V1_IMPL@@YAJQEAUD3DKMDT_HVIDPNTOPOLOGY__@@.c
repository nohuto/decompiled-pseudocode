/*
 * XREFs of ?GetPathSourceFromTarget@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IPEAI@Z @ 0x1C02E8200
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C0007C88 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C010F05C (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::GetPathSourceFromTarget(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        _DWORD *a3,
        unsigned int *a4)
{
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rdx
  unsigned int v16; // ebx
  DMMVIDPNTOPOLOGY *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  char *v20; // r8
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  int v25; // [rsp+20h] [rbp-28h] BYREF
  __int64 v26; // [rsp+28h] [rbp-20h]
  char v27; // [rsp+30h] [rbp-18h]

  v25 = -1;
  v26 = 0LL;
  v6 = (unsigned int)a2;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v27 = 1;
    v25 = 7034;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 7034);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v25, 7034LL);
  v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
  v11[3] = v6;
  v11[4] = this;
  v11[5] = a3;
  if ( a3 )
  {
    *a3 = -1;
    v17 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle((__int64)this);
    if ( v17 )
    {
      *a3 = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(v17, (unsigned int)v6, v20);
      v16 = 0;
    }
    else
    {
      v21 = WdLogNewEntry5_WdError(v19, v18);
      *(_QWORD *)(v21 + 24) = this;
      WdLogEvent5_WdError(v21);
      v16 = -1071774976;
    }
  }
  else
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12);
    v14[3] = 0LL;
    v14[4] = this;
    v14[5] = v6;
    WdLogEvent5_WdError(v14);
    v16 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25, v15);
  if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v25);
  return v16;
}
