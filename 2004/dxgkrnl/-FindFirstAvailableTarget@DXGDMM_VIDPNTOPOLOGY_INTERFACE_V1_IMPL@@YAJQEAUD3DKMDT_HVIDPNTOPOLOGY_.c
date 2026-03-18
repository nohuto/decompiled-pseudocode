/*
 * XREFs of ?FindFirstAvailableTarget@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@PEAI@Z @ 0x1C02E2E20
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C0007C88 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?FindFirstAvailableTarget@DMMVIDPNTOPOLOGY@@QEBAJIW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02E6738 (-FindFirstAvailableTarget@DMMVIDPNTOPOLOGY@@QEBAJIW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@P.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::FindFirstAvailableTarget(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        _DWORD *a4)
{
  __int64 v5; // rbx
  __int64 v6; // r15
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rax
  int FirstAvailableTarget; // eax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  int v26; // [rsp+40h] [rbp-20h] BYREF
  __int64 v27; // [rsp+48h] [rbp-18h]
  char v28; // [rsp+50h] [rbp-10h]
  int v29; // [rsp+98h] [rbp+38h] BYREF

  v26 = -1;
  v27 = 0LL;
  v5 = a1;
  v6 = (int)a3;
  v7 = a2;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v28 = 1;
    v26 = 6031;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 6031);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v26, 6031LL);
  if ( a4 )
  {
    *a4 = -1;
    if ( (_DWORD)v6 )
    {
      v13 = ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v5);
      v16 = v13;
      if ( v13 )
      {
        v29 = v14;
        FirstAvailableTarget = DMMVIDPNTOPOLOGY::FindFirstAvailableTarget(
                                 v13,
                                 (unsigned int)v7,
                                 (unsigned int)v6,
                                 &v29,
                                 0LL,
                                 0LL,
                                 0LL);
        v5 = FirstAvailableTarget;
        if ( FirstAvailableTarget >= 0 )
        {
          LODWORD(v5) = 0;
          *a4 = v29;
        }
        else
        {
          v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v19, v11, v20, v21);
          v22[3] = v16;
          v22[4] = v7;
          v22[5] = v6;
          v22[6] = v5;
        }
      }
      else
      {
        v17 = WdLogNewEntry5_WdError(v15, v14);
        *(_QWORD *)(v17 + 24) = v5;
        WdLogEvent5_WdError(v17);
        LODWORD(v5) = -1071774976;
      }
    }
    else
    {
      v12 = (_QWORD *)WdLogNewEntry5_WdError(v9, 0xFFFFFFFFLL);
      v12[3] = 0LL;
      v12[4] = a4;
      v12[5] = v5;
      v12[6] = v7;
      WdLogEvent5_WdError(v12);
      LODWORD(v5) = -1071774929;
    }
  }
  else
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8);
    v10[3] = 0LL;
    v10[4] = v5;
    v10[5] = v7;
    WdLogEvent5_WdError(v10);
    LODWORD(v5) = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26, v11);
  if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v26);
  return (unsigned int)v5;
}
