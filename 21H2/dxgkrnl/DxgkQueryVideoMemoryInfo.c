/*
 * XREFs of DxgkQueryVideoMemoryInfo @ 0x1C015CDF0
 * Callers:
 *     ?VmBusQueryVideoMemoryInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C03731F0 (-VmBusQueryVideoMemoryInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000F8D4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C001D8C0 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?QueryVideoMemoryInfo@ADAPTER_RENDER@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYVIDEOMEMORYINFO@@@Z @ 0x1C015D15C (-QueryVideoMemoryInfo@ADAPTER_RENDER@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYVIDEOMEMORYINFO@@@Z.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C0164280 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01798C0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1C01DF770 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C0334C04 (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C033633C (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?VmBusSendQueryVideoMemoryInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEAU_D3DKMT_QUERYVIDEOMEMORYINFO@@@Z @ 0x1C037BB28 (-VmBusSendQueryVideoMemoryInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEAU_D3DKMT_QUERYVIDEOMEMORYIN.c)
 */

__int64 __fastcall DxgkQueryVideoMemoryInfo(_OWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  bool v4; // r13
  _D3DKMT_QUERYVIDEOMEMORYINFO *v5; // r14
  _OWORD *v6; // rax
  struct _KTHREAD **Current; // rbx
  DXGPROCESS *Process; // r12
  struct DXGADAPTER *v9; // rdi
  int PairingAdapters; // ebx
  struct DXGADAPTER *v11; // rbx
  int v12; // edi
  UINT *v13; // rdx
  int VideoMemoryInfo; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // r8
  DXG_GUEST_VIRTUALGPU_VMBUS *v23; // rdi
  unsigned int v24; // ebx
  unsigned int HostProcess; // eax
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // [rsp+50h] [rbp-178h] BYREF
  __int64 v29; // [rsp+58h] [rbp-170h]
  char v30; // [rsp+60h] [rbp-168h]
  struct DXGADAPTER *v31; // [rsp+68h] [rbp-160h] BYREF
  DXGADAPTER *v32; // [rsp+70h] [rbp-158h] BYREF
  _D3DKMT_QUERYVIDEOMEMORYINFO v33; // [rsp+80h] [rbp-148h] BYREF
  unsigned __int64 v34; // [rsp+B8h] [rbp-110h] BYREF
  _BYTE v35[80]; // [rsp+C0h] [rbp-108h] BYREF
  _BYTE v36[144]; // [rsp+110h] [rbp-B8h] BYREF

  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v28 = -1;
  v29 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v30 = 1;
    v28 = 2119;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, &EventProfilerEnter, v3, 2119);
  }
  else
  {
    v30 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v28, 2119);
  memset(&v33, 0, sizeof(v33));
  v5 = &v33;
  if ( v4 )
  {
    v6 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v6 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)&v33.hProcess = *v6;
    *(_OWORD *)&v33.Budget = v6[1];
    *(_OWORD *)&v33.CurrentReservation = v6[2];
  }
  else
  {
    v5 = (_D3DKMT_QUERYVIDEOMEMORYINFO *)a1;
  }
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_39:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
    if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v21, &EventProfilerExit, v22, v28);
    return 3221225485LL;
  }
  DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v35, v5->hProcess, 0x400u);
  Process = (DXGPROCESS *)Current;
  if ( v5->hProcess )
  {
    v18 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v35, 1);
    v12 = v18;
    if ( v18 < 0 )
    {
      WdLogSingleEntry2(3LL, v5->hProcess, v18);
LABEL_31:
      DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v35);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
      if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v19, &EventProfilerExit, v20, v28);
      return (unsigned int)v12;
    }
    Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v35);
  }
  v31 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v32, v5->hAdapter, Current, &v31, 1);
  v9 = v31;
  if ( !v31 )
  {
    WdLogSingleEntry2(2LL, Current, v5->hAdapter);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid adapter, pDxgProcess=0x%I64x, hAdapter=0x%8x",
      (__int64)Current,
      v5->hAdapter,
      0LL,
      0LL,
      0LL);
    if ( v32 )
      DXGADAPTER::ReleaseReference(v32);
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v35);
    goto LABEL_39;
  }
  v31 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(v9, 0, &v31, &v34, 0LL, 0LL, 0);
  if ( PairingAdapters < 0 )
  {
    WdLogSingleEntry1(3LL, v9);
    goto LABEL_21;
  }
  v11 = v31;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v36, v31, 0LL);
  v12 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v36, 0LL);
  DXGADAPTER::ReleaseReference(v11);
  if ( v12 < 0 )
  {
    WdLogSingleEntry1(3LL, v11);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v36);
    if ( v32 )
      DXGADAPTER::ReleaseReference(v32);
    goto LABEL_31;
  }
  if ( v4 && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v11 + 27) + 64LL) + 40LL) + 28LL) >= 0x5018u )
  {
    v13 = (UINT *)(a1 + 3);
    if ( (unsigned __int64)(a1 + 3) >= MmUserProbeAddress )
      v13 = (UINT *)MmUserProbeAddress;
    v5->PhysicalAdapterIndex = *v13;
    v11 = v31;
  }
  if ( *((_BYTE *)v11 + 209) )
  {
    v23 = (struct DXGADAPTER *)((char *)v11 + 4344);
    v24 = *((_DWORD *)v11 + 1108);
    HostProcess = DXGPROCESS::GetHostProcess(Process);
    VideoMemoryInfo = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryVideoMemoryInfo(v23, HostProcess, v24, v5);
  }
  else
  {
    VideoMemoryInfo = ADAPTER_RENDER::QueryVideoMemoryInfo(*((ADAPTER_RENDER **)v11 + 350), Process, v5);
  }
  PairingAdapters = VideoMemoryInfo;
  if ( VideoMemoryInfo < 0 )
  {
    WdLogSingleEntry1(3LL, VideoMemoryInfo);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v36);
LABEL_21:
    if ( v32 )
      DXGADAPTER::ReleaseReference(v32);
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v35);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
    if ( v30 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v15, &EventProfilerExit, v16, v28);
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
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v36);
  if ( v32 )
    DXGADAPTER::ReleaseReference(v32);
  DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v35);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
  if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v26, &EventProfilerExit, v27, v28);
  return 0LL;
}
