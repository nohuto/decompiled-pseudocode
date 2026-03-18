/*
 * XREFs of ?EnumPathTargetsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@I_KPEAI@Z @ 0x1C01E5210
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C0010C88 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C01AA388 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::EnumPathTargetsFromSource(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        __int64 a3,
        unsigned int *a4)
{
  __int64 v6; // rbx
  __int64 v7; // r15
  DMMVIDPNTOPOLOGY **v8; // rax
  DMMVIDPNTOPOLOGY **v9; // rdi
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // edi
  __int64 v14; // rcx
  __int64 v15; // r8
  _QWORD *v17; // rax
  int v18; // [rsp+30h] [rbp-20h] BYREF
  __int64 v19; // [rsp+38h] [rbp-18h]
  char v20; // [rsp+40h] [rbp-10h]
  unsigned int v21; // [rsp+88h] [rbp+38h] BYREF

  v18 = -1;
  v19 = 0LL;
  v6 = (__int64)this;
  v7 = (unsigned int)a2;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v20 = 1;
    v18 = 6019;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 6019);
  }
  else
  {
    v20 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v18, 6019);
  if ( a4 )
  {
    *a4 = -1;
    v8 = (DMMVIDPNTOPOLOGY **)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v6);
    v9 = v8;
    if ( v8 )
    {
      v21 = -1;
      v10 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v8, v7, a3, &v21);
      v6 = v10;
      if ( v10 < 0 )
      {
        v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v12, v11);
        v17[3] = a3;
        v17[4] = v7;
        v17[5] = v9;
        v17[6] = v6;
      }
      else
      {
        v13 = v21;
        if ( v10 == 1075708748 && v21 != -1 )
          WdLogSingleEntry0(1LL);
        *a4 = v13;
        LODWORD(v6) = 0;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, v6);
      LODWORD(v6) = -1071774976;
    }
  }
  else
  {
    WdLogSingleEntry4(2LL, 0LL, a3, v6, v7);
    LODWORD(v6) = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
  if ( v20 )
  {
    LOBYTE(v14) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v18);
  }
  return (unsigned int)v6;
}
