/*
 * XREFs of DxgkQueryVideoMemoryInfo @ 0x1C00D6710
 * Callers:
 *     ?VmBusQueryVideoMemoryInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C02415E0 (-VmBusQueryVideoMemoryInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C0008130 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000E2A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000E2C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000ECD8 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?QueryVideoMemoryInfo@ADAPTER_RENDER@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYVIDEOMEMORYINFO@@@Z @ 0x1C00D6A9C (-QueryVideoMemoryInfo@ADAPTER_RENDER@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYVIDEOMEMORYINFO@@@Z.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1C00DA3E0 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C00DA4A0 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C00FA240 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendQueryVideoMemoryInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEAU_D3DKMT_QUERYVIDEOMEMORYINFO@@@Z @ 0x1C0246DB4 (-VmBusSendQueryVideoMemoryInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEAU_D3DKMT_QUERYVIDEOMEMORYIN.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C027F718 (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C02809D4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DxgkQueryVideoMemoryInfo(_OWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  bool v4; // r13
  _D3DKMT_QUERYVIDEOMEMORYINFO *v5; // r14
  _OWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct _KTHREAD **Current; // rbx
  DXGPROCESS *Process; // r12
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DXGADAPTER *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  int PairingAdapters; // ebx
  __int64 v17; // r8
  struct DXGADAPTER *v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  UINT *v22; // rdx
  int VideoMemoryInfo; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  bool v37; // zf
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rax
  unsigned int v50; // ebx
  unsigned int HostProcess; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  int v55; // [rsp+40h] [rbp-188h] BYREF
  __int64 v56; // [rsp+48h] [rbp-180h]
  char v57; // [rsp+50h] [rbp-178h]
  struct DXGADAPTER *v58; // [rsp+58h] [rbp-170h] BYREF
  DXGADAPTER *v59; // [rsp+60h] [rbp-168h] BYREF
  struct DXGADAPTER *v60; // [rsp+70h] [rbp-158h] BYREF
  _D3DKMT_QUERYVIDEOMEMORYINFO v61; // [rsp+78h] [rbp-150h] BYREF
  unsigned __int64 v62; // [rsp+B0h] [rbp-118h] BYREF
  _BYTE v63[80]; // [rsp+C0h] [rbp-108h] BYREF
  _BYTE v64[144]; // [rsp+110h] [rbp-B8h] BYREF

  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v55 = -1;
  v56 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v57 = 1;
    v55 = 2119;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, &EventProfilerEnter, v3, 2119);
  }
  else
  {
    v57 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v55, 2119LL);
  memset(&v61, 0, sizeof(v61));
  v5 = &v61;
  if ( v4 )
  {
    v6 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v6 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)&v61.hProcess = *v6;
    *(_OWORD *)&v61.Budget = v6[1];
    *(_OWORD *)&v61.CurrentReservation = v6[2];
  }
  else
  {
    v5 = (_D3DKMT_QUERYVIDEOMEMORYINFO *)a1;
  }
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v33 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v33 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v33);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v55, v34);
    v37 = v57 == 0;
LABEL_39:
    if ( !v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v35, &EventProfilerExit, v36, v55);
    return 3221225485LL;
  }
  DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v63, v5->hProcess, 0x400u);
  Process = (DXGPROCESS *)Current;
  if ( v5->hProcess )
  {
    v38 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v63, 1);
    v42 = v38;
    if ( v38 < 0 )
    {
      v43 = WdLogNewEntry5_WdWarning(v40, v39, v41);
      *(_QWORD *)(v43 + 24) = v5->hProcess;
      *(_QWORD *)(v43 + 32) = v42;
      WdLogEvent5_WdWarning(v43);
      DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v63);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v55, v44);
      if ( v57 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v45, &EventProfilerExit, v46, v55);
      return (unsigned int)v42;
    }
    Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v63, v39);
  }
  v60 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v59, v5->hAdapter, Current, &v60, 1);
  v13 = v60;
  if ( !v60 )
  {
    v47 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v47 + 24) = Current;
    *(_QWORD *)(v47 + 32) = v5->hAdapter;
    WdLogEvent5_WdError(v47);
    if ( v59 )
      DXGADAPTER::ReleaseReferenceNoTracking(v59);
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v63);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v55, v48);
    v37 = v57 == 0;
    goto LABEL_39;
  }
  v58 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(v60, 0, &v58, &v62, 0LL, 0LL, 0);
  if ( PairingAdapters < 0 )
  {
    v49 = WdLogNewEntry5_WdWarning(v15, v14, v17);
    *(_QWORD *)(v49 + 24) = v13;
    WdLogEvent5_WdWarning(v49);
    goto LABEL_22;
  }
  v18 = v58;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v64, v58, 0LL);
  PairingAdapters = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v64, 0LL);
  DXGADAPTER::ReleaseReferenceNoTracking(v18);
  if ( PairingAdapters < 0 )
  {
    v27 = WdLogNewEntry5_WdWarning(v20, v19, v21);
    *(_QWORD *)(v27 + 24) = v18;
    goto LABEL_21;
  }
  if ( v4 && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v18 + 27) + 64LL) + 40LL) + 28LL) >= 0x5018u )
  {
    v22 = (UINT *)(a1 + 3);
    if ( (unsigned __int64)(a1 + 3) >= MmUserProbeAddress )
      v22 = (UINT *)MmUserProbeAddress;
    v5->PhysicalAdapterIndex = *v22;
    v18 = v58;
  }
  if ( *((_BYTE *)v18 + 209) )
  {
    v50 = *((_DWORD *)v18 + 1070);
    HostProcess = DXGPROCESS::GetHostProcess(Process);
    VideoMemoryInfo = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryVideoMemoryInfo(
                        (struct DXGADAPTER *)((char *)v18 + 4208),
                        HostProcess,
                        v50,
                        v5);
  }
  else
  {
    VideoMemoryInfo = ADAPTER_RENDER::QueryVideoMemoryInfo(*((ADAPTER_RENDER **)v18 + 335), Process, v5);
  }
  PairingAdapters = VideoMemoryInfo;
  if ( VideoMemoryInfo < 0 )
  {
    v27 = WdLogNewEntry5_WdWarning(v25, v24, v26);
    *(_QWORD *)(v27 + 24) = PairingAdapters;
LABEL_21:
    WdLogEvent5_WdWarning(v27);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v64, v28);
LABEL_22:
    if ( v59 )
      DXGADAPTER::ReleaseReferenceNoTracking(v59);
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v63);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v55, v29);
    if ( v57 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v30, &EventProfilerExit, v31, v55);
    }
    return (unsigned int)PairingAdapters;
  }
  if ( v4 )
  {
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (_OWORD *)MmUserProbeAddress;
    *a1 = *(_OWORD *)&v5->hProcess;
    a1[1] = *(_OWORD *)&v5->Budget;
    a1[2] = *(_OWORD *)&v5->CurrentReservation;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v64, v24);
  if ( v59 )
    DXGADAPTER::ReleaseReferenceNoTracking(v59);
  DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v63);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v55, v52);
  if ( v57 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v53, &EventProfilerExit, v54, v55);
  return 0LL;
}
