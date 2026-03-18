/*
 * XREFs of ?AssignSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C015DA80
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0007B08 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0008194 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@SAPEAVDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C000A258 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@S.c)
 *     ?SetCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0018BD8 (-SetCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::AssignSourceModeSet(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        __int64 a3,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a4)
{
  __int64 v4; // rbx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rax
  __int64 v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct DMMVIDPNSOURCEMODESET **v17; // rdi
  __int64 v18; // r8
  DMMVIDPNSOURCE *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  DMMVIDPNSOURCE *v22; // rsi
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  _QWORD *v33; // rax
  int v34; // [rsp+20h] [rbp-28h] BYREF
  __int64 v35; // [rsp+28h] [rbp-20h]
  char v36; // [rsp+30h] [rbp-18h]

  v34 = -1;
  v4 = a3;
  v35 = 0LL;
  v6 = (unsigned int)a2;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v36 = 1;
    v34 = 7046;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 7046);
  }
  else
  {
    v36 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v34, 7046LL);
  v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
  v12 = v6;
  v11[3] = v4;
  v11[4] = v6;
  v11[5] = this;
  if ( ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this) )
  {
    v17 = (struct DMMVIDPNSOURCEMODESET **)ExposedViaHandle<DMMVIDPNSOURCEMODESET,D3DKMDT_HVIDPNSOURCEMODESET__ *>::GetFromHandle(v4);
    if ( v17 )
    {
      v19 = (DMMVIDPNSOURCE *)IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(*(_QWORD *)(v18 + 304), v6);
      v22 = v19;
      if ( v19 )
      {
        v23 = DMMVIDPNSOURCE::SetCofuncModeSet(v19, v17);
        v4 = v23;
        if ( v23 < 0 )
        {
          if ( v23 != -1071774958 )
          {
            v32 = WdLogNewEntry5_WdAssertion(v25, v24);
            WdLogEvent5_WdAssertion(v32);
          }
          v33 = (_QWORD *)WdLogNewEntry5_WdError(v25, v24);
          v33[3] = v17;
          v33[4] = *((unsigned int *)v22 + 6);
          v33[5] = v4;
          WdLogEvent5_WdError(v33);
        }
        else
        {
          LODWORD(v4) = 0;
        }
      }
      else
      {
        v31 = WdLogNewEntry5_WdError(v21, v20);
        *(_QWORD *)(v31 + 24) = v12;
        WdLogEvent5_WdError(v31);
        LODWORD(v4) = -1071774972;
      }
    }
    else
    {
      v30 = WdLogNewEntry5_WdError(v16, v15);
      *(_QWORD *)(v30 + 24) = v4;
      WdLogEvent5_WdError(v30);
      LODWORD(v4) = -1071774968;
    }
  }
  else
  {
    v29 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v29 + 24) = this;
    WdLogEvent5_WdError(v29);
    LODWORD(v4) = -1071774973;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34, v24);
  if ( v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v26, &EventProfilerExit, v27, v34);
  return (unsigned int)v4;
}
