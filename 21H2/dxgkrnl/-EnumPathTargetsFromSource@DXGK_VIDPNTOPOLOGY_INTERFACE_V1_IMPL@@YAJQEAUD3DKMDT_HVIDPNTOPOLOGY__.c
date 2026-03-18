/*
 * XREFs of ?EnumPathTargetsFromSource@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@I_KPEAI@Z @ 0x1C03A6EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C0010C88 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C01AA388 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
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
  _QWORD *v10; // rax
  DMMVIDPNTOPOLOGY **v11; // rax
  unsigned int v12; // edx
  DMMVIDPNTOPOLOGY **v13; // r14
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  unsigned int v18; // edi
  __int64 v19; // rcx
  __int64 v20; // r8
  int v22; // [rsp+30h] [rbp-20h] BYREF
  __int64 v23; // [rsp+38h] [rbp-18h]
  char v24; // [rsp+40h] [rbp-10h]
  unsigned int v25; // [rsp+88h] [rbp+38h] BYREF

  v22 = -1;
  v23 = 0LL;
  v6 = (__int64)this;
  v7 = (unsigned int)a2;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v24 = 1;
    v22 = 7033;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 7033);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v22, 7033);
  v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8);
  v10[3] = a3;
  v10[4] = v7;
  v10[5] = v6;
  v10[6] = a4;
  if ( a4 )
  {
    *a4 = -1;
    v11 = (DMMVIDPNTOPOLOGY **)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v6);
    v13 = v11;
    if ( v11 )
    {
      v25 = v12;
      v14 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v11, v7, a3, &v25);
      v6 = v14;
      if ( v14 >= 0 )
      {
        v18 = v25;
        if ( v14 == 1075708748 && v25 != -1 )
          WdLogSingleEntry0(1LL);
        *a4 = v18;
        LODWORD(v6) = 0;
      }
      else
      {
        v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v16, v15);
        v17[3] = a3;
        v17[4] = v7;
        v17[5] = v13;
        v17[6] = v6;
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
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
  if ( v24 )
  {
    LOBYTE(v19) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v19, &EventProfilerExit, v20, v22);
  }
  return (unsigned int)v6;
}
