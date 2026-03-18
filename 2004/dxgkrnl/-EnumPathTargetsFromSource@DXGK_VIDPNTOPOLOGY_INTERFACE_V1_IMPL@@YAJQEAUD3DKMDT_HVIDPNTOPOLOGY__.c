/*
 * XREFs of ?EnumPathTargetsFromSource@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@I_KPEAI@Z @ 0x1C02E7EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C0007C88 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C0122764 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::EnumPathTargetsFromSource(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        __int64 a3,
        unsigned int *a4)
{
  __int64 v6; // rbx
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rdx
  char **v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  char **v20; // r14
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  _QWORD *v26; // rax
  unsigned int v27; // edi
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  int v32; // [rsp+20h] [rbp-20h] BYREF
  __int64 v33; // [rsp+28h] [rbp-18h]
  char v34; // [rsp+30h] [rbp-10h]
  unsigned int v35; // [rsp+78h] [rbp+38h] BYREF

  v32 = -1;
  v33 = 0LL;
  v6 = (__int64)this;
  v7 = (unsigned int)a2;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v34 = 1;
    v32 = 7033;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 7033);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v32, 7033LL);
  v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
  v12[3] = a3;
  v12[4] = v7;
  v12[5] = v6;
  v12[6] = a4;
  if ( a4 )
  {
    *a4 = -1;
    v17 = (char **)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v6);
    v20 = v17;
    if ( v17 )
    {
      v35 = v18;
      v22 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v17, (unsigned int)v7, a3, &v35);
      v6 = v22;
      if ( v22 >= 0 )
      {
        v27 = v35;
        if ( v22 == 1075708748 && v35 != -1 )
        {
          v28 = WdLogNewEntry5_WdAssertion(v23, v16);
          WdLogEvent5_WdAssertion(v28);
        }
        *a4 = v27;
        LODWORD(v6) = 0;
      }
      else
      {
        v26 = (_QWORD *)WdLogNewEntry5_WdTrace(v23, v16, v24, v25);
        v26[3] = a3;
        v26[4] = v7;
        v26[5] = v20;
        v26[6] = v6;
      }
    }
    else
    {
      v21 = WdLogNewEntry5_WdError(v19, v18);
      *(_QWORD *)(v21 + 24) = v6;
      WdLogEvent5_WdError(v21);
      LODWORD(v6) = -1071774976;
    }
  }
  else
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
    v15[3] = 0LL;
    v15[4] = a3;
    v15[5] = v6;
    v15[6] = v7;
    WdLogEvent5_WdError(v15);
    LODWORD(v6) = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32, v16);
  if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v29, &EventProfilerExit, v30, v32);
  return (unsigned int)v6;
}
