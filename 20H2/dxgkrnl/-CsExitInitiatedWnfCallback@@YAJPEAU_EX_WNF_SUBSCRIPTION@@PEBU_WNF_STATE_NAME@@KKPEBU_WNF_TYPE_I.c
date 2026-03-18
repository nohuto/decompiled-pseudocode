/*
 * XREFs of ?CsExitInitiatedWnfCallback@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@Z @ 0x1C0267790
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?CsExitInitiatedWnfCallbackInternal@DXGGLOBAL@@QEAAX_K_J@Z @ 0x1C02678B8 (-CsExitInitiatedWnfCallbackInternal@DXGGLOBAL@@QEAAX_K_J@Z.c)
 */

__int64 __fastcall CsExitInitiatedWnfCallback(
        struct _EX_WNF_SUBSCRIPTION *a1,
        const struct _WNF_STATE_NAME *a2,
        __int64 a3,
        unsigned int a4,
        const struct _WNF_TYPE_ID *a5,
        DXGGLOBAL *a6)
{
  LARGE_INTEGER PerformanceCounter; // rbx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdi
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v18; // [rsp+20h] [rbp-30h] BYREF
  unsigned __int64 v19; // [rsp+28h] [rbp-28h] BYREF
  int v20; // [rsp+30h] [rbp-20h] BYREF
  __int64 v21; // [rsp+38h] [rbp-18h]
  char v22; // [rsp+40h] [rbp-10h]
  unsigned int v23; // [rsp+78h] [rbp+28h] BYREF

  v23 = a4;
  v20 = -1;
  v21 = 0LL;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v22 = 1;
    v20 = 8014;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 8014);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v20, 8014LL);
  v19 = 0LL;
  v18 = 8;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v8 = ExQueryWnfStateData(a1, &v23, &v19, &v18);
  v12 = v8;
  if ( v8 >= 0 )
  {
    DXGGLOBAL::CsExitInitiatedWnfCallbackInternal(a6, v19, PerformanceCounter.QuadPart);
  }
  else
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, v9, v11);
    v13[3] = a1;
    v13[4] = v23;
    v13[5] = v12;
    WdLogEvent5_WdWarning(v13);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20, v14);
  if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v15, &EventProfilerExit, v16, v20);
  return (unsigned int)v12;
}
