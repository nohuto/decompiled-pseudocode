/*
 * XREFs of ?EnumPathTargetsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@I_KPEAI@Z @ 0x1C01644B0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C0007C88 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C01215E4 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::EnumPathTargetsFromSource(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        __int64 a3,
        unsigned int *a4)
{
  __int64 v6; // rbx
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  char **v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  char **v13; // rdi
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // edi
  __int64 v20; // rcx
  __int64 v21; // r8
  _QWORD *v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rax
  int v27; // [rsp+20h] [rbp-20h] BYREF
  __int64 v28; // [rsp+28h] [rbp-18h]
  char v29; // [rsp+30h] [rbp-10h]
  unsigned int v30; // [rsp+78h] [rbp+38h] BYREF

  v27 = -1;
  v28 = 0LL;
  v6 = (__int64)this;
  v7 = (unsigned int)a2;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v29 = 1;
    v27 = 6019;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 6019);
  }
  else
  {
    v29 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v27, 6019LL);
  if ( a4 )
  {
    *a4 = -1;
    v10 = (char **)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v6);
    v13 = v10;
    if ( v10 )
    {
      v30 = -1;
      v14 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v10, (unsigned int)v7, a3, &v30);
      v6 = v14;
      if ( v14 < 0 )
      {
        v25 = (_QWORD *)WdLogNewEntry5_WdTrace(v16, v15, v17, v18);
        v25[3] = a3;
        v25[4] = v7;
        v25[5] = v13;
        v25[6] = v6;
      }
      else
      {
        v19 = v30;
        if ( v14 == 1075708748 && v30 != -1 )
        {
          v26 = WdLogNewEntry5_WdAssertion(v16, v15);
          WdLogEvent5_WdAssertion(v26);
        }
        *a4 = v19;
        LODWORD(v6) = 0;
      }
    }
    else
    {
      v24 = WdLogNewEntry5_WdError(v12, v11);
      *(_QWORD *)(v24 + 24) = v6;
      WdLogEvent5_WdError(v24);
      LODWORD(v6) = -1071774976;
    }
  }
  else
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8);
    v23[3] = 0LL;
    v23[4] = a3;
    v23[5] = v6;
    v23[6] = v7;
    WdLogEvent5_WdError(v23);
    LODWORD(v6) = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27, v15);
  if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v27);
  return (unsigned int)v6;
}
