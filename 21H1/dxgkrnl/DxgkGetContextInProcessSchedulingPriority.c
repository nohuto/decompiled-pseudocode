/*
 * XREFs of DxgkGetContextInProcessSchedulingPriority @ 0x1C0254EC0
 * Callers:
 *     ?VmBusGetContextSchedulingPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023D610 (-VmBusGetContextSchedulingPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0007F18 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0008020 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0008348 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000E890 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000EE14 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0024550 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetInProcessSchedulingPriority@DXGCONTEXT@@QEAAHXZ @ 0x1C022A9BC (-GetInProcessSchedulingPriority@DXGCONTEXT@@QEAAHXZ.c)
 *     ?VmBusSendGetContextSchedulingPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEAHE@Z @ 0x1C02445B4 (-VmBusSendGetContextSchedulingPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGC.c)
 */

__int64 __fastcall DxgkGetContextInProcessSchedulingPriority(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // r15
  __int64 v9; // rax
  __int64 v10; // rdx
  char v11; // r14
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  DXGCONTEXT *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v21; // r9
  int v22; // r12d
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  int ContextSchedulingPriority; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  int v38; // [rsp+30h] [rbp-108h] BYREF
  __int64 v39; // [rsp+38h] [rbp-100h]
  char v40; // [rsp+40h] [rbp-F8h]
  unsigned int v41[2]; // [rsp+48h] [rbp-F0h] BYREF
  DXGCONTEXT *v42; // [rsp+50h] [rbp-E8h] BYREF
  char v43; // [rsp+58h] [rbp-E0h]
  _BYTE v44[16]; // [rsp+60h] [rbp-D8h] BYREF
  _BYTE v45[160]; // [rsp+70h] [rbp-C8h] BYREF

  v3 = (_QWORD *)a1;
  v38 = -1;
  v39 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v40 = 1;
    v38 = 2085;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2085);
  }
  else
  {
    v40 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v38, 2085LL);
  Current = DXGPROCESS::GetCurrent(v5, v4);
  if ( !Current )
  {
    v9 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
LABEL_14:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38, v10);
    if ( v40 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v38);
    }
    return 3221225485LL;
  }
  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1 )
  {
    v11 = 1;
    v12 = v3;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v12 = (_QWORD *)MmUserProbeAddress;
    *(_QWORD *)v41 = *v12;
  }
  else
  {
    v11 = 0;
    *(_QWORD *)v41 = *v3;
  }
  v42 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v44, v41[0], Current, &v42, 0);
  v16 = v42;
  if ( !v42 )
  {
    v17 = WdLogNewEntry5_WdWarning(v14, v13, v15);
    *(_QWORD *)(v17 + 24) = v41[0];
    *(_QWORD *)(v17 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v17);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v44);
    goto LABEL_14;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED(
    (DXGDEVICEACCESSLOCKSHARED *)&v42,
    *((struct DXGDEVICE **)v42 + 2));
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v45, *((_QWORD *)v16 + 2), 0, v21, 0);
  v22 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v45, 0LL);
  if ( v22 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v45);
    if ( v42 && v43 )
    {
      ExReleaseResourceLite(*((PERESOURCE *)v42 + 17));
      KeLeaveCriticalRegion();
    }
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v44);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38, v23);
    if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v24, &EventProfilerExit, v25, v38);
    return (unsigned int)v22;
  }
  if ( *((_BYTE *)v16 + 457) )
  {
    ContextSchedulingPriority = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetContextSchedulingPriority(
                                  (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL)
                                                                           + 16LL)
                                                               + 4208LL),
                                  Current,
                                  v16,
                                  (int *)&v41[1],
                                  1u);
    v30 = ContextSchedulingPriority;
    if ( ContextSchedulingPriority < 0 )
    {
      v31 = WdLogNewEntry5_WdWarning(v28, v27, v29);
      *(_QWORD *)(v31 + 24) = v30;
      WdLogEvent5_WdWarning(v31);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v45);
      if ( v42 && v43 )
      {
        ExReleaseResourceLite(*((PERESOURCE *)v42 + 17));
        KeLeaveCriticalRegion();
      }
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v44);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38, v32);
      if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v33, &EventProfilerExit, v34, v38);
      return (unsigned int)v30;
    }
  }
  else
  {
    v41[1] = DXGCONTEXT::GetInProcessSchedulingPriority(v16);
  }
  if ( v11 )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (_QWORD *)MmUserProbeAddress;
    *v3 = *(_QWORD *)v41;
  }
  else
  {
    *v3 = *(_QWORD *)v41;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v45);
  if ( v42 && v43 )
  {
    ExReleaseResourceLite(*((PERESOURCE *)v42 + 17));
    KeLeaveCriticalRegion();
  }
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v44);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38, v35);
  if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v36, &EventProfilerExit, v37, v38);
  return 0LL;
}
