/*
 * XREFs of DxgkQueryClockCalibration @ 0x1C0224FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004130 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0007174 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007578 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007658 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009DE0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DdiCalibrateGpuClock@ADAPTER_RENDER@@QEAAJIIPEAU_DXGK_GPUCLOCKDATA@@@Z @ 0x1C003C1F8 (-DdiCalibrateGpuClock@ADAPTER_RENDER@@QEAAJIIPEAU_DXGK_GPUCLOCKDATA@@@Z.c)
 *     ?IsClockCalibrationSupportedv2@ADAPTER_RENDER@@QEBAEXZ @ 0x1C003EF58 (-IsClockCalibrationSupportedv2@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C00F7CD0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendQueryClockCalibration@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYCLOCKCALIBRATION@@@Z @ 0x1C024ABE4 (-VmBusSendQueryClockCalibration@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUE.c)
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
  __int64 v44; // rdx
  ADAPTER_RENDER *v45; // rcx
  __int64 v46; // r8
  _QWORD *v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  int v60; // [rsp+40h] [rbp-118h] BYREF
  __int64 v61; // [rsp+48h] [rbp-110h]
  char v62; // [rsp+50h] [rbp-108h]
  struct DXGADAPTER *v63; // [rsp+58h] [rbp-100h] BYREF
  DXGADAPTER *v64; // [rsp+60h] [rbp-F8h] BYREF
  unsigned __int64 v65; // [rsp+70h] [rbp-E8h] BYREF
  struct _D3DKMT_QUERYCLOCKCALIBRATION v66; // [rsp+78h] [rbp-E0h] BYREF
  _BYTE v67[144]; // [rsp+A0h] [rbp-B8h] BYREF

  v3 = (struct _D3DKMT_QUERYCLOCKCALIBRATION *)a1;
  v60 = -1;
  v61 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v62 = 1;
    v60 = 2125;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2125);
  }
  else
  {
    v62 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v60, 2125LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4);
  if ( !Current )
  {
    v9 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v9 + 24) = 9608LL;
    WdLogEvent5_WdError(v9);
LABEL_31:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v60, v10);
    if ( v62 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v37, &EventProfilerExit, v38, v60);
    }
    return 3221225485LL;
  }
  v11 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  memset(&v66, 0, sizeof(v66));
  if ( v11 )
  {
    v12 = v3;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v12 = (struct _D3DKMT_QUERYCLOCKCALIBRATION *)MmUserProbeAddress;
    v66 = *v12;
  }
  else
  {
    v66 = *v3;
  }
  v63 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v64, v66.hAdapter, Current, &v63, 1);
  v15 = v63;
  if ( !v63 )
  {
    v16 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v16 + 24) = Current;
    *(_QWORD *)(v16 + 32) = v66.hAdapter;
    WdLogEvent5_WdError(v16);
    goto LABEL_29;
  }
  v63 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(v15, 0LL, &v63, &v65, 0LL, 0LL, 0);
  if ( PairingAdapters < 0 )
  {
    v21 = WdLogNewEntry5_WdWarning(v18, v17, v19);
    *(_QWORD *)(v21 + 24) = v15;
    WdLogEvent5_WdWarning(v21);
LABEL_16:
    if ( v64 )
      DXGADAPTER::ReleaseReference(v64);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v60, v22);
    if ( v62 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v60);
    return (unsigned int)PairingAdapters;
  }
  v26 = v63;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v67, v63, 0LL);
  PairingAdapters = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v67, 0LL);
  DXGADAPTER::ReleaseReference(v26);
  if ( PairingAdapters < 0 )
  {
    v30 = WdLogNewEntry5_WdWarning(v28, v27, v29);
    *(_QWORD *)(v30 + 24) = v26;
    WdLogEvent5_WdWarning(v30);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v67, v31);
    goto LABEL_16;
  }
  if ( v66.PhysicalAdapterIndex >= *((_DWORD *)v26 + 70) )
  {
    v32 = WdLogNewEntry5_WdWarning(v28, v27, v66.PhysicalAdapterIndex);
    PhysicalAdapterIndex = v66.PhysicalAdapterIndex;
LABEL_28:
    *(_QWORD *)(v32 + 24) = PhysicalAdapterIndex;
    WdLogEvent5_WdWarning(v32);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v67, v36);
LABEL_29:
    if ( v64 )
      DXGADAPTER::ReleaseReference(v64);
    goto LABEL_31;
  }
  v34 = 360LL * v66.PhysicalAdapterIndex;
  v35 = *(unsigned __int16 *)(v34 + *((_QWORD *)v26 + 323));
  if ( v66.NodeOrdinal >= (unsigned int)v35 )
  {
    v32 = WdLogNewEntry5_WdWarning(v34, v35, v66.PhysicalAdapterIndex);
    PhysicalAdapterIndex = v66.NodeOrdinal;
    goto LABEL_28;
  }
  memset(&v66.ClockData, 0, sizeof(v66.ClockData));
  if ( *((_BYTE *)v26 + 209) )
  {
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v34, v35) + 408) < 0x15u )
    {
      v43 = -1073741822;
      goto LABEL_42;
    }
    v42 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryClockCalibration(
            (struct DXGADAPTER *)((char *)v26 + 4240),
            (struct DXGPROCESS *)Current,
            &v66);
LABEL_41:
    v43 = v42;
LABEL_42:
    if ( v43 >= 0 )
    {
      if ( v11 && (unsigned __int64)v3 >= MmUserProbeAddress )
        v3 = (struct _D3DKMT_QUERYCLOCKCALIBRATION *)MmUserProbeAddress;
      *v3 = v66;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v67, v39);
      if ( v64 )
        DXGADAPTER::ReleaseReference(v64);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v60, v52);
      if ( v62 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v53, &EventProfilerExit, v54, v60);
      return 0LL;
    }
    else
    {
      v47 = (_QWORD *)WdLogNewEntry5_WdWarning(v40, v39, v41);
      v47[3] = v43;
      v47[4] = v66.NodeOrdinal;
      v47[5] = v66.PhysicalAdapterIndex;
      WdLogEvent5_WdWarning(v47);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v67, v48);
      if ( v64 )
        DXGADAPTER::ReleaseReference(v64);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v60, v49);
      if ( v62 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v50, &EventProfilerExit, v51, v60);
      return (unsigned int)v43;
    }
  }
  if ( ADAPTER_RENDER::IsClockCalibrationSupportedv2(*((ADAPTER_RENDER **)v26 + 338)) )
  {
    v42 = ADAPTER_RENDER::DdiCalibrateGpuClock(v45, v66.NodeOrdinal, v46, &v66.ClockData);
    goto LABEL_41;
  }
  v55 = WdLogNewEntry5_WdError(v45, v44);
  *(_QWORD *)(v55 + 24) = 9705LL;
  WdLogEvent5_WdError(v55);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v67, v56);
  if ( v64 )
    DXGADAPTER::ReleaseReference(v64);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v60, v57);
  if ( v62 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v58, &EventProfilerExit, v59, v60);
  return 3221225473LL;
}
