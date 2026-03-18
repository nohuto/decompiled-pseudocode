/*
 * XREFs of ?RemoveCopyProtection@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@II@Z @ 0x1C0146D70
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0007C30 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C0007C88 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ?SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@@Z @ 0x1C000CDDC (-SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::RemoveCopyProtection(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a2,
        __int64 a3)
{
  __int64 v4; // rsi
  __int64 v5; // rbp
  DMMVIDPNTOPOLOGY *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v19; // rax
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  int v22; // [rsp+20h] [rbp-28h] BYREF
  __int64 v23; // [rsp+28h] [rbp-20h]
  char v24; // [rsp+30h] [rbp-18h]

  v22 = -1;
  v23 = 0LL;
  v4 = (unsigned int)a3;
  v5 = (unsigned int)a2;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v24 = 1;
    v22 = 6058;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 6058);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v22, 6058LL);
  v6 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle((__int64)this);
  if ( v6 )
  {
    Path = DMMVIDPNTOPOLOGY::FindPath(v6, v5, v4);
    if ( Path )
    {
      v12 = DMMVIDPNPRESENTPATH::SetCopyProtectionScheme(Path, 1LL);
      v15 = v12;
      if ( v12 < 0 )
      {
        v21 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
        v21[3] = v5;
        v21[4] = v4;
        v21[5] = this;
        v21[6] = v15;
        WdLogEvent5_WdError(v21);
      }
      else
      {
        LODWORD(v15) = 0;
      }
    }
    else
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10);
      v20[3] = v5;
      v20[4] = v4;
      v20[5] = this;
      WdLogEvent5_WdError(v20);
      LODWORD(v15) = -1071774937;
    }
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v19 + 24) = this;
    WdLogEvent5_WdError(v19);
    LODWORD(v15) = -1071774976;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22, v13);
  if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerExit, v17, v22);
  return (unsigned int)v15;
}
