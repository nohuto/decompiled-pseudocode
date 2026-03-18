/*
 * XREFs of DxgkSetProcessSchedulingPriorityBand @ 0x1C0282980
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C0008130 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1C00DA3E0 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C00DA4A0 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CheckTokenForResourceManagerAccess@@YA_NXZ @ 0x1C0185E58 (-CheckTokenForResourceManagerAccess@@YA_NXZ.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C027F718 (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ?SetProcessSchedulingPriorityBand@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULING_PRIORITYBAND@@@Z @ 0x1C02816FC (-SetProcessSchedulingPriorityBand@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULING_PRIORITYBAND@@@Z.c)
 */

__int64 __fastcall DxgkSetProcessSchedulingPriorityBand(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  unsigned int *v24; // rax
  unsigned int v25; // edx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  void *v30; // rsi
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  struct DXGPROCESS *Process; // rax
  int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // r8
  int v46; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v47; // [rsp+28h] [rbp-A0h]
  char v48; // [rsp+30h] [rbp-98h]
  unsigned int v49; // [rsp+38h] [rbp-90h]
  void *v50[2]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v51; // [rsp+50h] [rbp-78h]
  _BYTE v52[80]; // [rsp+60h] [rbp-68h] BYREF

  v3 = (unsigned int *)a1;
  v46 = -1;
  v47 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v48 = 1;
    v46 = 2140;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2140);
  }
  else
  {
    v48 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v46, 2140LL);
  if ( !CheckTokenForResourceManagerAccess(v5, v4) )
  {
    v9 = WdLogNewEntry5_WdWarning(v7, v6, v8);
    *(_QWORD *)(v9 + 24) = DXGPROCESS::GetCurrent(v11, v10);
    *(_QWORD *)(v9 + 32) = -1073741790LL;
    WdLogEvent5_WdWarning(v9);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46, v12);
    if ( v48 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerExit, v14, v46);
    }
    return 3221225506LL;
  }
  if ( !*((_DWORD *)DXGGLOBAL::GetGlobal(v7, v6) + 362) )
  {
    v19 = WdLogNewEntry5_WdWarning(v17, v16, v18);
    LODWORD(v20) = -1073741823;
    *(_QWORD *)(v19 + 24) = -1073741823LL;
    WdLogEvent5_WdWarning(v19);
    goto LABEL_12;
  }
  *(_OWORD *)v50 = 0LL;
  v51 = 0LL;
  v24 = v3;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v24 = (unsigned int *)MmUserProbeAddress;
  v49 = *v24;
  v25 = v49;
  if ( v49 < 0x18 )
  {
    v26 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v49, v18);
    *(_QWORD *)(v26 + 24) = 4478LL;
    WdLogEvent5_WdWarning(v26);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46, v27);
    if ( v48 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v28, &EventProfilerExit, v29, v46);
    return 3221225485LL;
  }
  if ( v49 > 0x18 )
    v25 = 24;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (unsigned int *)MmUserProbeAddress;
  memmove(v50, v3, v25);
  v30 = v50[1];
  DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v52, v50[1], 0x2000);
  v31 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v52, 0);
  v20 = v31;
  if ( v31 < 0 )
  {
    v35 = WdLogNewEntry5_WdWarning(v33, v32, v34);
    *(_QWORD *)(v35 + 24) = v30;
    *(_QWORD *)(v35 + 32) = v20;
    goto LABEL_29;
  }
  if ( (unsigned int)v51 <= 1 && !HIDWORD(v50[0]) )
  {
    Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v52, v32);
    v43 = DXGPROCESS::SetProcessSchedulingPriorityBand((__int64)Process, (unsigned int)v51);
    v20 = v43;
    if ( v43 >= 0 )
      goto LABEL_30;
    v35 = WdLogNewEntry5_WdWarning(v44, v36, v45);
    *(_QWORD *)(v35 + 24) = v20;
LABEL_29:
    WdLogEvent5_WdWarning(v35);
LABEL_30:
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v52, v36);
LABEL_12:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46, v21);
    if ( v48 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v46);
    return (unsigned int)v20;
  }
  v37 = WdLogNewEntry5_WdWarning(v33, v32, v34);
  *(_QWORD *)(v37 + 24) = -1073741811LL;
  WdLogEvent5_WdWarning(v37);
  DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v52, v38);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46, v39);
  if ( v48 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v40, &EventProfilerExit, v41, v46);
  return 3221225485LL;
}
