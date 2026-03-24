/*
 * XREFs of DxgkChangeVideoMemoryReservationInternal @ 0x1C0228F4C
 * Callers:
 *     DxgkChangeVideoMemoryReservation @ 0x1C0228F30 (DxgkChangeVideoMemoryReservation.c)
 *     ?VmBusChangeVideoMemoryReservation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023CC00 (-VmBusChangeVideoMemoryReservation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C0001FDC (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004130 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0007174 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007578 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007658 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009DE0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1C00E3070 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C00E3130 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C00F7CD0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ChangeVideoMemoryReservation@ADAPTER_RENDER@@QEAAJPEAVDXGPROCESS@@PEBU_D3DKMT_CHANGEVIDEOMMEMORYRESERVATION@@@Z @ 0x1C0215464 (-ChangeVideoMemoryReservation@ADAPTER_RENDER@@QEAAJPEAVDXGPROCESS@@PEBU_D3DKMT_CHANGEVIDEOMMEMOR.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C0283ECC (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkChangeVideoMemoryReservationInternal(
        _D3DKMT_CHANGEVIDEOMMEMORYRESERVATION *a1,
        char a2,
        __int64 a3)
{
  struct DXGADAPTER *v3; // r14
  __int64 v6; // rdx
  ULONG64 v7; // rcx
  ULONG64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct _KTHREAD **Current; // r15
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  bool v16; // zf
  HANDLE hProcess; // r12
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  struct DXGPROCESS *Process; // r12
  DXGADAPTER *v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  _QWORD *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  int PairingAdapters; // r15d
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  struct DXGADAPTER *v43; // r14
  __int64 v44; // rdx
  ADAPTER_RENDER *v45; // r9
  UINT *p_PhysicalAdapterIndex; // rdx
  unsigned int v47; // r14d
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  int v53; // [rsp+48h] [rbp-170h] BYREF
  __int64 v54; // [rsp+50h] [rbp-168h]
  char v55; // [rsp+58h] [rbp-160h]
  struct DXGADAPTER *v56; // [rsp+60h] [rbp-158h] BYREF
  struct DXGADAPTER *v57; // [rsp+68h] [rbp-150h] BYREF
  DXGADAPTER *v58; // [rsp+70h] [rbp-148h]
  _D3DKMT_CHANGEVIDEOMMEMORYRESERVATION v59; // [rsp+78h] [rbp-140h] BYREF
  DXGADAPTER *v60; // [rsp+98h] [rbp-120h] BYREF
  unsigned __int64 v61; // [rsp+A8h] [rbp-110h] BYREF
  _BYTE v62[80]; // [rsp+B0h] [rbp-108h] BYREF
  _BYTE v63[144]; // [rsp+100h] [rbp-B8h] BYREF

  v3 = (struct DXGADAPTER *)a3;
  v53 = -1;
  v54 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v55 = 1;
    v53 = 2120;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2120);
  }
  else
  {
    v55 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v53, 2120LL);
  *(_QWORD *)&v59.PhysicalAdapterIndex = 0LL;
  if ( a2 )
  {
    v7 = MmUserProbeAddress;
    v8 = (ULONG64)a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v8 = MmUserProbeAddress;
    *(_OWORD *)&v59.hProcess = *(_OWORD *)v8;
    v59.Reservation = *(_QWORD *)(v8 + 16);
  }
  else
  {
    v59 = *a1;
  }
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v7, v6);
  if ( !Current )
  {
    v12 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v12 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v12);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v53, v13);
    v16 = v55 == 0;
LABEL_25:
    if ( !v16 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v53);
    return 3221225485LL;
  }
  hProcess = v59.hProcess;
  DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v62, v59.hProcess, 512);
  if ( hProcess )
  {
    v18 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v62, 1);
    v22 = v18;
    if ( v18 < 0 )
    {
      v23 = WdLogNewEntry5_WdWarning(v20, v19, v21);
      *(_QWORD *)(v23 + 24) = hProcess;
      *(_QWORD *)(v23 + 32) = v22;
      WdLogEvent5_WdWarning(v23);
      DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v62);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v53, v24);
      if ( v55 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v25, &EventProfilerExit, v26, v53);
      return (unsigned int)v22;
    }
    Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v62);
  }
  else
  {
    Process = (struct DXGPROCESS *)Current;
  }
  v56 = v3;
  v29 = 0LL;
  v58 = 0LL;
  if ( !v3 )
  {
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v60, v59.hAdapter, Current, &v56, 1);
    if ( !v56 )
    {
      v33 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, v30, v32);
      v33[3] = -1073741811LL;
      v33[4] = Current;
      v33[5] = v59.hAdapter;
      WdLogEvent5_WdWarning(v33);
      if ( v60 )
        DXGADAPTER::ReleaseReference(v60);
      DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v62);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v53, v34);
      v16 = v55 == 0;
      goto LABEL_25;
    }
    _InterlockedIncrement64((volatile signed __int64 *)v56 + 3);
    v3 = v56;
    v29 = v56;
    v58 = v56;
    if ( v60 )
      DXGADAPTER::ReleaseReference(v60);
  }
  v57 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(v3, 0LL, &v57, &v61, 0LL, 0LL, 0);
  if ( PairingAdapters < 0 )
  {
    v39 = WdLogNewEntry5_WdWarning(v36, v35, v37);
    *(_QWORD *)(v39 + 24) = v3;
    WdLogEvent5_WdWarning(v39);
LABEL_33:
    if ( v29 )
      DXGADAPTER::ReleaseReference(v29);
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v62);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v53, v40);
    if ( v55 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v41, &EventProfilerExit, v42, v53);
    return (unsigned int)PairingAdapters;
  }
  v43 = v57;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v63, v57, 0LL);
  PairingAdapters = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v63, 0LL);
  DXGADAPTER::ReleaseReference(v43);
  if ( PairingAdapters < 0 )
  {
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v63, v44);
    goto LABEL_33;
  }
  v45 = (ADAPTER_RENDER *)*((_QWORD *)v43 + 338);
  if ( a2 && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v43 + 27) + 64LL) + 40LL) + 28LL) >= 0x5018u )
  {
    p_PhysicalAdapterIndex = &a1->PhysicalAdapterIndex;
    if ( (unsigned __int64)&a1->PhysicalAdapterIndex >= MmUserProbeAddress )
      p_PhysicalAdapterIndex = (UINT *)MmUserProbeAddress;
    v59.PhysicalAdapterIndex = *p_PhysicalAdapterIndex;
  }
  v47 = ADAPTER_RENDER::ChangeVideoMemoryReservation(v45, Process, &v59);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v63, v48);
  if ( v29 )
    DXGADAPTER::ReleaseReference(v29);
  DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v62);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v53, v49);
  if ( v55 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v50, &EventProfilerExit, v51, v53);
  return v47;
}
