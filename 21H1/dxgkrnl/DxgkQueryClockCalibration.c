/*
 * XREFs of DxgkQueryClockCalibration @ 0x1C0221040
 * Callers:
 *     ?VmBusQueryClockCalibration@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C02412B0 (-VmBusQueryClockCalibration@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000E2A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000E2C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000ECD8 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DdiCalibrateGpuClock@ADAPTER_RENDER@@QEAAJIIPEAU_DXGK_GPUCLOCKDATA@@@Z @ 0x1C003A49C (-DdiCalibrateGpuClock@ADAPTER_RENDER@@QEAAJIIPEAU_DXGK_GPUCLOCKDATA@@@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C00FA240 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendQueryClockCalibration@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYCLOCKCALIBRATION@@@Z @ 0x1C0246AA4 (-VmBusSendQueryClockCalibration@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUE.c)
 */

__int64 __fastcall DxgkQueryClockCalibration(__int64 a1, __int64 a2, __int64 a3)
{
  struct _D3DKMT_QUERYCLOCKCALIBRATION *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _KTHREAD **Current; // r15
  __int64 v9; // rax
  __int64 v10; // rdx
  bool v11; // r12
  struct _D3DKMT_QUERYCLOCKCALIBRATION *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct DXGADAPTER *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int PairingAdapters; // r14d
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  struct DXGADAPTER *v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 PhysicalAdapterIndex; // rcx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  int v42; // eax
  int v43; // esi
  ADAPTER_RENDER *v44; // rcx
  __int64 v45; // rax
  _QWORD *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  int v59; // [rsp+40h] [rbp-118h] BYREF
  __int64 v60; // [rsp+48h] [rbp-110h]
  char v61; // [rsp+50h] [rbp-108h]
  struct DXGADAPTER *v62; // [rsp+58h] [rbp-100h] BYREF
  DXGADAPTER *v63; // [rsp+60h] [rbp-F8h] BYREF
  unsigned __int64 v64; // [rsp+70h] [rbp-E8h] BYREF
  struct _D3DKMT_QUERYCLOCKCALIBRATION v65; // [rsp+78h] [rbp-E0h] BYREF
  _BYTE v66[144]; // [rsp+A0h] [rbp-B8h] BYREF

  v3 = (struct _D3DKMT_QUERYCLOCKCALIBRATION *)a1;
  v59 = -1;
  v60 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v61 = 1;
    v59 = 2125;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2125);
  }
  else
  {
    v61 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v59, 2125LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4);
  if ( !Current )
  {
    v9 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v9 + 24) = 9497LL;
    WdLogEvent5_WdError(v9);
LABEL_31:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v59, v10);
    if ( v61 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v37, &EventProfilerExit, v38, v59);
    }
    return 3221225485LL;
  }
  v11 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  memset(&v65, 0, sizeof(v65));
  if ( v11 )
  {
    v12 = v3;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v12 = (struct _D3DKMT_QUERYCLOCKCALIBRATION *)MmUserProbeAddress;
    v65 = *v12;
  }
  else
  {
    v65 = *v3;
  }
  v62 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v63, v65.hAdapter, Current, &v62, 1);
  v15 = v62;
  if ( !v62 )
  {
    v16 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v16 + 24) = Current;
    *(_QWORD *)(v16 + 32) = v65.hAdapter;
    WdLogEvent5_WdError(v16);
    goto LABEL_29;
  }
  v62 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(v15, 0LL, &v62, &v64, 0LL, 0LL, 0);
  if ( PairingAdapters < 0 )
  {
    v21 = WdLogNewEntry5_WdWarning(v18, v17, v19);
    *(_QWORD *)(v21 + 24) = v15;
    WdLogEvent5_WdWarning(v21);
LABEL_16:
    if ( v63 )
      DXGADAPTER::ReleaseReferenceNoTracking(v63);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v59, v22);
    if ( v61 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v59);
    return (unsigned int)PairingAdapters;
  }
  v26 = v62;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v66, v62, 0LL);
  PairingAdapters = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v66, 0LL);
  DXGADAPTER::ReleaseReferenceNoTracking(v26);
  if ( PairingAdapters < 0 )
  {
    v30 = WdLogNewEntry5_WdWarning(v28, v27, v29);
    *(_QWORD *)(v30 + 24) = v26;
    WdLogEvent5_WdWarning(v30);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v66, v31);
    goto LABEL_16;
  }
  if ( v65.PhysicalAdapterIndex >= *((_DWORD *)v26 + 70) )
  {
    v32 = WdLogNewEntry5_WdWarning(v28, v27, v65.PhysicalAdapterIndex);
    PhysicalAdapterIndex = v65.PhysicalAdapterIndex;
LABEL_28:
    *(_QWORD *)(v32 + 24) = PhysicalAdapterIndex;
    WdLogEvent5_WdWarning(v32);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v66, v36);
LABEL_29:
    if ( v63 )
      DXGADAPTER::ReleaseReferenceNoTracking(v63);
    goto LABEL_31;
  }
  v34 = 360LL * v65.PhysicalAdapterIndex;
  v35 = *(unsigned __int16 *)(v34 + *((_QWORD *)v26 + 320));
  if ( v65.NodeOrdinal >= (unsigned int)v35 )
  {
    v32 = WdLogNewEntry5_WdWarning(v34, v35, v65.PhysicalAdapterIndex);
    PhysicalAdapterIndex = v65.NodeOrdinal;
    goto LABEL_28;
  }
  memset(&v65.ClockData, 0, sizeof(v65.ClockData));
  if ( *((_BYTE *)v26 + 209) )
  {
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v34, v35) + 380) < 0x15u )
    {
      v43 = -1073741822;
      goto LABEL_43;
    }
    v42 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryClockCalibration(
            (struct DXGADAPTER *)((char *)v26 + 4208),
            (struct DXGPROCESS *)Current,
            &v65);
LABEL_42:
    v43 = v42;
LABEL_43:
    if ( v43 >= 0 )
    {
      if ( v11 && (unsigned __int64)v3 >= MmUserProbeAddress )
        v3 = (struct _D3DKMT_QUERYCLOCKCALIBRATION *)MmUserProbeAddress;
      *v3 = v65;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v66, v39);
      if ( v63 )
        DXGADAPTER::ReleaseReferenceNoTracking(v63);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v59, v51);
      if ( v61 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v52, &EventProfilerExit, v53, v59);
      return 0LL;
    }
    else
    {
      v46 = (_QWORD *)WdLogNewEntry5_WdWarning(v40, v39, v41);
      v46[3] = v43;
      v46[4] = v65.NodeOrdinal;
      v46[5] = v65.PhysicalAdapterIndex;
      WdLogEvent5_WdWarning(v46);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v66, v47);
      if ( v63 )
        DXGADAPTER::ReleaseReferenceNoTracking(v63);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v59, v48);
      if ( v61 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v49, &EventProfilerExit, v50, v59);
      return (unsigned int)v43;
    }
  }
  v44 = (ADAPTER_RENDER *)*((_QWORD *)v26 + 335);
  v45 = *((_QWORD *)v44 + 2);
  if ( *(_QWORD *)(v45 + 816) && *(int *)(v45 + 2304) >= 0x2000 )
  {
    v42 = ADAPTER_RENDER::DdiCalibrateGpuClock(v44, v65.NodeOrdinal, v65.PhysicalAdapterIndex, &v65.ClockData);
    goto LABEL_42;
  }
  v54 = WdLogNewEntry5_WdError(v44, v35);
  *(_QWORD *)(v54 + 24) = 9594LL;
  WdLogEvent5_WdError(v54);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v66, v55);
  if ( v63 )
    DXGADAPTER::ReleaseReferenceNoTracking(v63);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v59, v56);
  if ( v61 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v57, &EventProfilerExit, v58, v59);
  return 3221225473LL;
}
