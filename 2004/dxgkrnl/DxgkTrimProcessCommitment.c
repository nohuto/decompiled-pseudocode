/*
 * XREFs of DxgkTrimProcessCommitment @ 0x1C02879F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C0001FDC (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0027200 (memmove.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1C00E2860 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C00E2920 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C01306EC (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C0283B9C (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkTrimProcessCommitment(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  unsigned int *v5; // rax
  size_t v6; // r8
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  const void *v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // esi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  void *v21; // r15
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // r14d
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  struct DXGPROCESS *Process; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  struct DXGGLOBAL *Global; // rax
  _QWORD *v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  int v39; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v40; // [rsp+28h] [rbp-D0h]
  char v41; // [rsp+30h] [rbp-C8h]
  unsigned int v42; // [rsp+38h] [rbp-C0h]
  struct DXGPROCESS *v43; // [rsp+40h] [rbp-B8h] BYREF
  int v44; // [rsp+48h] [rbp-B0h]
  int v45; // [rsp+4Ch] [rbp-ACh]
  __int64 v46; // [rsp+50h] [rbp-A8h]
  __int64 v47; // [rsp+58h] [rbp-A0h]
  void *v48[2]; // [rsp+60h] [rbp-98h] BYREF
  __int128 v49; // [rsp+70h] [rbp-88h]
  __int64 v50; // [rsp+80h] [rbp-78h]
  _BYTE v51[80]; // [rsp+90h] [rbp-68h] BYREF

  v39 = -1;
  v40 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v41 = 1;
    v39 = 2210;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2210);
  }
  else
  {
    v41 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v39, 2210LL);
  *(_OWORD *)v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v5 = (unsigned int *)a1;
  if ( a1 >= MmUserProbeAddress )
    v5 = (unsigned int *)MmUserProbeAddress;
  v42 = *v5;
  v6 = v42;
  if ( v42 >= 0x28 )
  {
    if ( v42 > 0x28 )
      v6 = 40LL;
    v42 = v6;
    v12 = (const void *)a1;
    if ( a1 >= MmUserProbeAddress )
      v12 = (const void *)MmUserProbeAddress;
    memmove(v48, v12, v6);
    v16 = v49;
    if ( (v49 & 0xFFFFFFFC) != 0 )
    {
      v17 = WdLogNewEntry5_WdWarning(v14, v13, v15);
      *(_QWORD *)(v17 + 24) = 1039LL;
      WdLogEvent5_WdWarning(v17);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39, v18);
      if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v19, &EventProfilerExit, v20, v39);
      return 3221225485LL;
    }
    else
    {
      v21 = v48[1];
      DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v51, v48[1], 0x2000);
      v25 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v51, 1);
      if ( v25 >= 0 )
      {
        Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v51);
        v45 = 0;
        v47 = 0LL;
        v43 = Process;
        v44 = v16;
        v46 = *((_QWORD *)&v49 + 1);
        Global = DXGGLOBAL::GetGlobal(v33, v32);
        DXGGLOBAL::IterateAdaptersWithCallback(
          (__int64)Global,
          (__int64 (__fastcall *)(_QWORD *, __int64))DxgkTrimProcessCommitmentAdapterCallback,
          (__int64)&v43,
          2);
        v35 = (_QWORD *)(a1 + 32);
        if ( a1 + 32 >= MmUserProbeAddress )
          v35 = (_QWORD *)MmUserProbeAddress;
        *v35 = v47;
        DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v51, (__int64)v35);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39, v36);
        if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v37, &EventProfilerExit, v38, v39);
        return 0LL;
      }
      else
      {
        v26 = WdLogNewEntry5_WdWarning(v23, v22, v24);
        *(_QWORD *)(v26 + 24) = v21;
        WdLogEvent5_WdWarning(v26);
        DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v51, v27);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39, v28);
        if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v29, &EventProfilerExit, v30, v39);
        return (unsigned int)v25;
      }
    }
  }
  else
  {
    v7 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v4, v42);
    *(_QWORD *)(v7 + 24) = 1017LL;
    WdLogEvent5_WdWarning(v7);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39, v8);
    if ( v41 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v9, &EventProfilerExit, v10, v39);
    }
    return 3221225485LL;
  }
}
