/*
 * XREFs of DxgkMapGpuVirtualAddress @ 0x1C0158230
 * Callers:
 *     ?VmBusMapGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C02431F0 (-VmBusMapGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00022BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C00026F0 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004090 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0004160 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00045C8 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C00058C8 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007018 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0014AB0 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z @ 0x1C001E140 (-Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ @ 0x1C0025F98 (-ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FBBF0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FD9E0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FDE00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C020CC74 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAPGPUVIRTUALADDRESS@@@Z @ 0x1C02499A0 (-VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAP.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0285260 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DxgkMapGpuVirtualAddress(ULONG64 a1, __int64 a2, __int64 a3)
{
  bool v4; // di
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct _KTHREAD **v11; // rbx
  struct _KTHREAD **v12; // r15
  struct D3DDDI_MAPGPUVIRTUALADDRESS *v13; // rdi
  struct D3DDDI_MAPGPUVIRTUALADDRESS *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned __int64 Value; // rax
  __int64 v19; // r14
  __int64 v20; // rcx
  int v21; // ebx
  struct _KEVENT *v22; // rsi
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // r8
  struct _EX_RUNDOWN_REF *v28; // rbx
  ULONG_PTR Count; // r8
  struct _EX_RUNDOWN_REF *v30; // rsi
  DXGALLOCATIONREFERENCE *AllocationSafe; // rax
  __int64 v32; // rdx
  struct _EX_RUNDOWN_REF *v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  struct DXGTHREAD *v36; // rax
  struct DXGTHREAD *v37; // r12
  _QWORD *v38; // r9
  __int64 v39; // r12
  bool v40; // r10
  int v41; // eax
  ULONG64 v42; // rdx
  _QWORD *v43; // rcx
  unsigned int v44; // esi
  _QWORD *v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  struct DXGTHREAD *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  struct DXGTHREAD *v51; // rbx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  struct DXGTHREAD *Current; // rax
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  bool v61; // zf
  __int64 v62; // rdx
  __int64 v63; // rax
  DXGPAGINGQUEUE *v64; // rcx
  struct _KEVENT *v65; // rcx
  __int64 v66; // rcx
  unsigned __int8 v67; // bl
  __int64 v68; // r8
  unsigned __int8 v69; // bl
  _QWORD *v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  _QWORD *v74; // rax
  _QWORD *v75; // rax
  __int64 v76; // rdx
  unsigned int v77; // esi
  unsigned int HostProcess; // eax
  _QWORD *v79; // rax
  __int64 v80; // rax
  __int64 v81; // rdx
  int Timeout; // [rsp+20h] [rbp-1E8h]
  bool v83; // [rsp+40h] [rbp-1C8h]
  int v84; // [rsp+48h] [rbp-1C0h] BYREF
  __int64 v85; // [rsp+50h] [rbp-1B8h]
  char v86; // [rsp+58h] [rbp-1B0h]
  DXGPAGINGQUEUE *v87; // [rsp+60h] [rbp-1A8h] BYREF
  struct DXGPAGINGQUEUE *v88; // [rsp+68h] [rbp-1A0h] BYREF
  struct _EX_RUNDOWN_REF *v89; // [rsp+70h] [rbp-198h] BYREF
  unsigned int v90[2]; // [rsp+78h] [rbp-190h] BYREF
  __int64 v91; // [rsp+80h] [rbp-188h] BYREF
  int v92; // [rsp+88h] [rbp-180h]
  struct D3DDDI_MAPGPUVIRTUALADDRESS *v93; // [rsp+90h] [rbp-178h]
  struct _KTHREAD **v94; // [rsp+98h] [rbp-170h]
  _QWORD *v95; // [rsp+A0h] [rbp-168h]
  _BYTE v96[8]; // [rsp+C0h] [rbp-148h] BYREF
  _BYTE v97[16]; // [rsp+C8h] [rbp-140h] BYREF
  DXGADAPTER *v98; // [rsp+D8h] [rbp-130h]
  char v99; // [rsp+E0h] [rbp-128h]
  __int64 v100; // [rsp+E8h] [rbp-120h]
  _BYTE v101[16]; // [rsp+108h] [rbp-100h] BYREF
  __int64 v102; // [rsp+118h] [rbp-F0h]
  __int64 v103; // [rsp+148h] [rbp-C0h]
  char v104; // [rsp+150h] [rbp-B8h]
  struct D3DDDI_MAPGPUVIRTUALADDRESS v105; // [rsp+160h] [rbp-A8h] BYREF

  v84 = -1;
  v85 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v86 = 1;
    v84 = 2100;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2100);
  }
  else
  {
    v86 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v84, 2100LL);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v83 = v4;
  CurrentProcess = PsGetCurrentProcess(v6, v5);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v11 = (struct _KTHREAD **)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent(v10, v9)) == 0LL
    || (v12 = (struct _KTHREAD **)*((_QWORD *)Current + 1)) == 0LL )
  {
    v12 = v11;
  }
  v94 = v12;
  if ( !v12 )
  {
    v57 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v57 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v57);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v84, v58);
    v61 = v86 == 0;
LABEL_68:
    if ( v61 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225485LL;
    goto LABEL_123;
  }
  memset(&v105, 0, sizeof(v105));
  if ( v4 )
  {
    v13 = &v105;
    v93 = &v105;
    v14 = (struct D3DDDI_MAPGPUVIRTUALADDRESS *)a1;
    if ( a1 >= MmUserProbeAddress )
      v14 = (struct D3DDDI_MAPGPUVIRTUALADDRESS *)MmUserProbeAddress;
    v105 = *v14;
  }
  else
  {
    v13 = (struct D3DDDI_MAPGPUVIRTUALADDRESS *)a1;
    v93 = (struct D3DDDI_MAPGPUVIRTUALADDRESS *)a1;
  }
  v88 = 0LL;
  DXGPAGINGQUEUEBYHANDLE::Open((DXGPAGINGQUEUEBYHANDLE *)&v87, v13->hPagingQueue, v12, &v88, 1);
  if ( !v88 )
  {
    v63 = WdLogNewEntry5_WdWarning(v16, v15, v17);
    *(_QWORD *)(v63 + 24) = v13->hPagingQueue;
    *(_QWORD *)(v63 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v63);
    v64 = v87;
    if ( !v87 )
      goto LABEL_67;
    goto LABEL_66;
  }
  Value = v13->Protection.Value;
  if ( (Value & 0x10) != 0 || Value >= 0x20 )
  {
    v80 = WdLogNewEntry5_WdWarning(v16, v15, v17);
    *(_QWORD *)(v80 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v80);
    if ( v87 )
      DXGPAGINGQUEUE::ReleaseReference(v87, v81);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v84, v81);
    if ( !v86 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225485LL;
LABEL_123:
    McTemplateK0q_EtwWriteTransfer(v59, &EventProfilerExit, v60, v84);
    return 3221225485LL;
  }
  v19 = *((_QWORD *)v88 + 2);
  v91 = v19;
  v20 = *(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL);
  if ( *(int *)(v20 + 2328) >= 0x2000 || *(_BYTE *)(v20 + 2628) )
    v21 = *((_DWORD *)DXGGLOBAL::GetGlobal(v20, v15) + 311);
  else
    v21 = 0;
  v92 = v21;
  v22 = *(struct _KEVENT **)(v19 + 16);
  if ( *(_DWORD *)(v19 + 432) == 2 )
  {
    if ( KeReadStateEvent(v22 + 5) )
      goto LABEL_18;
    v65 = v22 + 5;
  }
  else
  {
    if ( KeReadStateEvent(v22 + 4) )
      goto LABEL_18;
    v65 = v22 + 4;
  }
  KeWaitForSingleObject(v65, Executive, 0, 0, 0LL);
LABEL_18:
  KeEnterCriticalRegion();
  if ( !v21 )
  {
    if ( ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v19 + 136), 0) )
      goto LABEL_20;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL) + 104LL));
    v67 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v19 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q_EtwWriteTransfer(v66, &EventBlockThread, v68, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v19 + 136), 1u);
    if ( v67 )
      goto LABEL_87;
    goto LABEL_88;
  }
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v19 + 144, 0LL) )
  {
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL) + 104LL));
    v69 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v19 + 16) + 16LL));
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v19 + 144));
    if ( v69 )
LABEL_87:
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v19 + 16) + 16LL));
LABEL_88:
    ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL) + 104LL, 0LL);
    KeLeaveCriticalRegion();
  }
LABEL_20:
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v96, v19, 0, v23, 0);
  if ( v104 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v101, 0LL);
    v25 = *(unsigned int *)(v102 + 200);
    if ( (_DWORD)v25 != 1 )
      goto LABEL_96;
  }
  if ( v99 )
  {
    v70 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v25, v24);
    v70[3] = 275LL;
    v70[4] = 4LL;
    v70[5] = v97;
    v70[6] = 0LL;
    v70[7] = 0LL;
    WdLogEvent5_WdCriticalError(v70);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v98 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v98 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v26, &EventBlockThread, v27, 72);
      KeWaitForSingleObject((char *)v98 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v98, 0LL);
  }
  v100 = 0LL;
  v99 = 1;
  if ( *(_DWORD *)(v103 + 576) != 1 )
  {
    COREACCESS::Release((COREACCESS *)v97);
    if ( !v104 )
    {
LABEL_97:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v96);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v91);
      if ( v87 )
        DXGPAGINGQUEUE::ReleaseReference(v87, v71);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v84, v71);
      if ( v86 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v72, &EventProfilerExit, v73, v84);
      return 3221226166LL;
    }
LABEL_96:
    COREACCESS::Release((COREACCESS *)v101);
    goto LABEL_97;
  }
  v28 = 0LL;
  v89 = 0LL;
  Count = 0LL;
  v30 = 0LL;
  if ( (*(_BYTE *)&v13->Protection.0 & 0xC) == 0 )
  {
    AllocationSafe = DXGPROCESS::GetAllocationSafe((__int64)v12, (DXGALLOCATIONREFERENCE *)v90, v13->hAllocation);
    v28 = *(struct _EX_RUNDOWN_REF **)AllocationSafe;
    v30 = *(struct _EX_RUNDOWN_REF **)AllocationSafe;
    v89 = *(struct _EX_RUNDOWN_REF **)AllocationSafe;
    *(_QWORD *)AllocationSafe = 0LL;
    v33 = *(struct _EX_RUNDOWN_REF **)v90;
    if ( *(_QWORD *)v90 )
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)v90 + 88LL));
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v33, v32) + 311) )
    {
      v36 = DXGTHREAD::GetCurrent(v35, v34);
      v37 = v36;
      if ( v36 )
      {
        if ( *((_DWORD *)v36 + 8) )
        {
          v74 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v35, v34);
          v74[3] = 275LL;
          v74[4] = 38LL;
          v74[5] = *((int *)v37 + 8);
          v74[6] = 0LL;
          v74[7] = 0LL;
          WdLogEvent5_WdCriticalError(v74);
        }
      }
    }
    if ( !v28 )
    {
      v75 = (_QWORD *)WdLogNewEntry5_WdError(v35, v34);
      v75[3] = -1073741811LL;
      v75[4] = v13->hAllocation;
      v75[5] = v12;
      goto LABEL_105;
    }
    Count = v28[3].Count;
    if ( !Count && (*(_BYTE *)(v19 + 1869) & 1) == 0 )
    {
      v75 = (_QWORD *)WdLogNewEntry5_WdError(v35, v34);
      v75[3] = -1073741811LL;
      v75[4] = v28;
LABEL_105:
      WdLogEvent5_WdError(v75);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v89, v76);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v96);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v91);
      v64 = v87;
      if ( !v87 )
        goto LABEL_67;
LABEL_66:
      DXGPAGINGQUEUE::ReleaseReference(v64, v62);
LABEL_67:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v84, v62);
      v61 = v86 == 0;
      goto LABEL_68;
    }
    if ( v28[1].Count != v19 )
    {
      v75 = (_QWORD *)WdLogNewEntry5_WdError(v35, v34);
      v75[3] = -1073741811LL;
      v75[4] = v28;
      v75[5] = v88;
      goto LABEL_105;
    }
  }
  v38 = *(_QWORD **)(v19 + 16);
  v39 = v38[2];
  v95 = v38;
  if ( *(_BYTE *)(v39 + 209) )
  {
    if ( v30 )
      v90[0] = v28[12].Count;
    else
      v90[0] = 0;
    v77 = *((_DWORD *)v88 + 7);
    HostProcess = DXGPROCESS::GetHostProcess((DXGPROCESS *)v12);
    v41 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMapGpuVirtualAddress(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(v39 + 4240),
            HostProcess,
            0LL,
            v77,
            v90[0],
            v13);
  }
  else
  {
    v40 = *(_BYTE *)(v19 + 1871) || *(_DWORD *)(v19 + 432) == 2 && *(int *)(v39 + 2596) >= 2000;
    LOBYTE(Timeout) = v40;
    v41 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, ULONG_PTR, struct D3DDDI_MAPGPUVIRTUALADDRESS *, int, int))(*(_QWORD *)(v38[80] + 8LL) + 800LL))(
            v38[81],
            *((_QWORD *)v88 + 4),
            Count,
            v13,
            Timeout,
            -2);
  }
  v44 = v41;
  if ( v41 >= 0 && v83 )
  {
    v45 = (_QWORD *)(a1 + 88);
    if ( a1 + 88 >= MmUserProbeAddress )
      v45 = (_QWORD *)MmUserProbeAddress;
    *v45 = v13->VirtualAddress;
    v43 = (_QWORD *)(a1 + 96);
    v42 = MmUserProbeAddress;
    if ( a1 + 96 >= MmUserProbeAddress )
      v43 = (_QWORD *)MmUserProbeAddress;
    *v43 = v13->PagingFenceValue;
  }
  if ( v28 )
    ExReleaseRundownProtection(v28 + 11);
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v43, v42) + 311) )
  {
    v48 = DXGTHREAD::GetCurrent(v47, v46);
    v51 = v48;
    if ( v48 )
    {
      if ( *((_DWORD *)v48 + 8) )
      {
        v79 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v50, v49);
        v79[3] = 275LL;
        v79[4] = 38LL;
        v79[5] = *((int *)v51 + 8);
        v79[6] = 0LL;
        v79[7] = 0LL;
        WdLogEvent5_WdCriticalError(v79);
      }
    }
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v96);
  if ( v92 )
    ExReleasePushLockSharedEx(v19 + 144, 0LL);
  else
    ExReleaseResourceLite(*(PERESOURCE *)(v19 + 136));
  KeLeaveCriticalRegion();
  if ( v87 )
    DXGPAGINGQUEUE::ReleaseReference(v87, v52);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v84, v52);
  if ( v86 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v53, &EventProfilerExit, v54, v84);
  }
  return v44;
}
