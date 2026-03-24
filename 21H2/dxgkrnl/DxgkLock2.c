/*
 * XREFs of DxgkLock2 @ 0x1C0101F70
 * Callers:
 *     ?VmBusLock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C02428C0 (-VmBusLock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
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
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006DE4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007018 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0014AB0 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E49F4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FBBF0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FD9E0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FDE00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ @ 0x1C015BF70 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C020CC74 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK2@@EII@Z @ 0x1C0249250 (-VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK.c)
 *     ?VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UNLOCK2@@E@Z @ 0x1C024D29C (-VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UN.c)
 *     ?Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z @ 0x1C02750C0 (-Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z.c)
 */

__int64 __fastcall DxgkLock2(ULONG64 a1)
{
  __int64 v2; // rcx
  bool v3; // di
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct _KTHREAD **v11; // rbx
  struct _KTHREAD **v12; // r15
  struct _D3DKMT_LOCK2 *v13; // r13
  struct _D3DKMT_LOCK2 *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct DXGDEVICE *v17; // rdi
  __int64 v18; // rax
  int v19; // ebx
  struct _KEVENT *v20; // rax
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  struct DXGALLOCATION *v29; // rbx
  _QWORD *v30; // rdx
  _QWORD *v31; // r8
  __int64 v32; // r10
  __int64 v33; // rcx
  __int64 v34; // rax
  struct DXGDEVICE *v35; // rdi
  int v36; // eax
  __int64 pData; // rdx
  unsigned int v38; // r12d
  _QWORD *v39; // rcx
  struct DXGALLOCATION *v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  struct _KTHREAD *CurrentThread; // r14
  int CurrentProcessSessionId; // edi
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rbx
  void *v49; // rax
  __int64 v50; // rbx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  int *ThreadProperty; // rbx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  struct DXGTHREAD *Current; // rax
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rax
  __int64 v65; // rdx
  PVOID v66; // rcx
  __int64 v67; // rcx
  unsigned __int8 v68; // bl
  __int64 v69; // r8
  unsigned __int8 v70; // bl
  _QWORD *v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rdx
  __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rdx
  _QWORD *v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rdx
  int v84; // r11d
  int v85; // r11d
  int v86; // eax
  __int64 v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rdx
  _QWORD *v90; // rax
  __int64 v91; // rax
  __int64 v92; // rax
  int ProcessSessionId; // edi
  __int64 CurrentThreadProcess; // rax
  _QWORD *v95; // rax
  unsigned int v96; // [rsp+28h] [rbp-180h]
  unsigned int v97; // [rsp+30h] [rbp-178h]
  bool v98; // [rsp+40h] [rbp-168h]
  struct DXGDEVICE *v99; // [rsp+48h] [rbp-160h] BYREF
  struct DXGALLOCATION *v100; // [rsp+50h] [rbp-158h] BYREF
  int v101; // [rsp+58h] [rbp-150h] BYREF
  __int64 v102; // [rsp+60h] [rbp-148h]
  char v103; // [rsp+68h] [rbp-140h]
  struct DXGDEVICE *v104[2]; // [rsp+70h] [rbp-138h] BYREF
  PVOID Object; // [rsp+80h] [rbp-128h]
  struct DXGDEVICE *v106; // [rsp+88h] [rbp-120h] BYREF
  int v107; // [rsp+90h] [rbp-118h]
  __int64 v108; // [rsp+98h] [rbp-110h]
  struct _KTHREAD **v109; // [rsp+A0h] [rbp-108h]
  struct _D3DKMT_LOCK2 *v110; // [rsp+A8h] [rbp-100h]
  ULONG64 v111; // [rsp+B0h] [rbp-F8h]
  struct _D3DKMT_LOCK2 v112; // [rsp+B8h] [rbp-F0h] BYREF
  _BYTE v113[8]; // [rsp+D0h] [rbp-D8h] BYREF
  _BYTE v114[16]; // [rsp+D8h] [rbp-D0h] BYREF
  DXGADAPTER *v115; // [rsp+E8h] [rbp-C0h]
  char v116; // [rsp+F0h] [rbp-B8h]
  __int64 v117; // [rsp+F8h] [rbp-B0h]
  _BYTE v118[16]; // [rsp+118h] [rbp-90h] BYREF
  __int64 v119; // [rsp+128h] [rbp-80h]
  __int64 v120; // [rsp+158h] [rbp-50h]
  char v121; // [rsp+160h] [rbp-48h]

  v111 = a1;
  v3 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v98 = v3;
  v101 = -1;
  v102 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v103 = 1;
    v101 = 2103;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, &EventProfilerEnter, v4, 2103);
  }
  else
  {
    v103 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v101, 2103LL);
  CurrentProcess = PsGetCurrentProcess(v6, v5);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v11 = (struct _KTHREAD **)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent(v10, v9)) == 0LL
    || (v12 = (struct _KTHREAD **)*((_QWORD *)Current + 1)) == 0LL )
  {
    v12 = v11;
  }
  v109 = v12;
  if ( !v12 )
  {
    v62 = WdLogNewEntry5_WdError(v10, v9);
    v38 = -1073741811;
    *(_QWORD *)(v62 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v62);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v101, v63);
    if ( !v103 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return v38;
    goto LABEL_151;
  }
  memset(&v112, 0, sizeof(v112));
  v13 = &v112;
  v110 = &v112;
  if ( v3 )
  {
    v14 = (struct _D3DKMT_LOCK2 *)a1;
    if ( a1 >= MmUserProbeAddress )
      v14 = (struct _D3DKMT_LOCK2 *)MmUserProbeAddress;
    v112 = *v14;
  }
  else
  {
    v13 = (struct _D3DKMT_LOCK2 *)a1;
    v110 = (struct _D3DKMT_LOCK2 *)a1;
  }
  v104[0] = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v99, v13->hDevice, v12, v104);
  v17 = v104[0];
  if ( !v104[0] )
  {
    v64 = WdLogNewEntry5_WdError(v16, v15);
    *(_QWORD *)(v64 + 24) = v13->hDevice;
    v38 = -1073741811;
    *(_QWORD *)(v64 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v64);
    if ( v99 && _InterlockedExchangeAdd64((volatile signed __int64 *)v99 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v99 + 2), v99);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v101, v65);
    if ( !v103 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return v38;
    goto LABEL_151;
  }
  v18 = *(_QWORD *)(*((_QWORD *)v104[0] + 2) + 16LL);
  v108 = v18;
  v104[1] = (struct DXGDEVICE *)v18;
  v106 = v104[0];
  if ( *(int *)(v18 + 2328) >= 0x2000 || *(_BYTE *)(v18 + 2628) )
    v19 = *((_DWORD *)DXGGLOBAL::GetGlobal(v16, v15) + 311);
  else
    v19 = 0;
  v107 = v19;
  v20 = (struct _KEVENT *)*((_QWORD *)v17 + 2);
  if ( *((_DWORD *)v17 + 108) == 2 )
  {
    Object = &v20[5];
    if ( KeReadStateEvent(v20 + 5) )
      goto LABEL_16;
    v66 = Object;
  }
  else
  {
    Object = &v20[4];
    if ( KeReadStateEvent(v20 + 4) )
      goto LABEL_16;
    v66 = Object;
  }
  KeWaitForSingleObject(v66, Executive, 0, 0, 0LL);
LABEL_16:
  KeEnterCriticalRegion();
  if ( v19 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v17 + 144, 0LL) )
      goto LABEL_18;
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL) + 104LL));
    v70 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v17 + 2) + 16LL));
    DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v17 + 144));
    if ( v70 )
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v17 + 2) + 16LL));
  }
  else
  {
    if ( ExAcquireResourceExclusiveLite(*((PERESOURCE *)v17 + 17), 0) )
      goto LABEL_18;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL) + 104LL));
    v68 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v17 + 2) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q_EtwWriteTransfer(v67, &EventBlockThread, v69, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v17 + 17), 1u);
    if ( v68 )
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v17 + 2) + 16LL));
  }
  ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL) + 104LL, 0LL);
  KeLeaveCriticalRegion();
LABEL_18:
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v113, (__int64)v17, 0, v21, 0);
  if ( v121 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v118, 0LL);
    v23 = *(unsigned int *)(v119 + 200);
    if ( (_DWORD)v23 != 1 )
      goto LABEL_102;
  }
  if ( v116 )
  {
    v71 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v23, v22);
    v71[3] = 275LL;
    v71[4] = 4LL;
    v71[5] = v114;
    v71[6] = 0LL;
    v71[7] = 0LL;
    WdLogEvent5_WdCriticalError(v71);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v115 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v115 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v24, &EventBlockThread, v25, 72);
      KeWaitForSingleObject((char *)v115 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v115, 0LL);
  }
  v117 = 0LL;
  v116 = 1;
  if ( *(_DWORD *)(v120 + 576) == 1 )
  {
    DXGPROCESS::GetAllocationSafe((__int64)v12, (DXGALLOCATIONREFERENCE *)&v100, v13->hAllocation);
    v29 = v100;
    if ( v100 )
    {
      v30 = (_QWORD *)*((_QWORD *)v100 + 1);
      v31 = (_QWORD *)*((_QWORD *)v17 + 2);
      v32 = v31[2];
      if ( *(_QWORD *)(v30[2] + 16LL) == v32 )
      {
        v33 = *(unsigned __int8 *)(v108 + 209);
        if ( (_BYTE)v33 || *((_QWORD *)v100 + 3) )
        {
          v34 = *((_QWORD *)v100 + 5);
          if ( v34 )
          {
            v84 = *(_DWORD *)(v34 + 4);
            if ( (v84 & 1) != 0 && (v84 & 2) == 0 )
            {
              v85 = *(_DWORD *)(*(_QWORD *)(v34 + 56) + 12LL);
              if ( (v85 & 0x200) == 0 && (v85 & 0x400) == 0 )
              {
                v86 = *(_DWORD *)(v32 + 348);
                if ( (v86 & 0x10) == 0 && (v86 & 8) == 0 && (*(_DWORD *)(v32 + 2060) & 0x80u) == 0 )
                {
                  v87 = WdLogNewEntry5_WdWarning(v33, v30, v31);
                  *(struct DXGDEVICE **)(v87 + 24) = v104[0];
                  *(_QWORD *)(v87 + 32) = v100;
                  v38 = -1073741811;
                  *(_QWORD *)(v87 + 40) = -1073741811LL;
                  WdLogEvent5_WdWarning(v87);
                  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v100, v88);
                  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v113);
                  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v106);
                  if ( v99 && _InterlockedExchangeAdd64((volatile signed __int64 *)v99 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v99 + 2), v99);
                  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v101, v89);
                  if ( !v103 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
                    return v38;
                  goto LABEL_151;
                }
              }
            }
          }
          v35 = v104[0];
          if ( (_BYTE)v33 )
          {
            v36 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendLock2(
                    (DXG_GUEST_VIRTUALGPU_VMBUS *)(v108 + 4240),
                    (struct DXGPROCESS *)v12,
                    v104[0],
                    v13,
                    0,
                    v96,
                    v97);
          }
          else
          {
            if ( v30 != (_QWORD *)v104[0] )
            {
              v90 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v30, v31);
              v90[3] = v29;
              v90[4] = v35;
              v90[5] = *((_QWORD *)v29 + 1);
              v38 = -1073741811;
              v90[6] = -1073741811LL;
              WdLogEvent5_WdWarning(v90);
              goto LABEL_38;
            }
            v36 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, PVOID *))(*(_QWORD *)(v31[80] + 8LL) + 816LL))(
                    v31[81],
                    *((_QWORD *)v100 + 3),
                    0LL,
                    &v13->pData);
          }
          v38 = v36;
          if ( v36 >= 0 && v98 )
          {
            pData = (__int64)v13->pData;
            v39 = (_QWORD *)(a1 + 16);
            if ( a1 + 16 >= MmUserProbeAddress )
              v39 = (_QWORD *)MmUserProbeAddress;
            *v39 = pData;
          }
LABEL_38:
          v40 = v100;
          if ( v100 )
            ExReleaseRundownProtection((PEX_RUNDOWN_REF)v100 + 11);
          if ( !*((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v40, pData) + 311) )
          {
LABEL_57:
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v113);
            if ( v107 )
              ExReleasePushLockSharedEx((char *)v35 + 144, 0LL);
            else
              ExReleaseResourceLite(*((PERESOURCE *)v35 + 17));
            KeLeaveCriticalRegion();
            if ( v99 && _InterlockedExchangeAdd64((volatile signed __int64 *)v99 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v99 + 2), v99);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v101, v57);
            if ( !v103 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
              return v38;
            goto LABEL_151;
          }
          CurrentThread = KeGetCurrentThread();
          if ( !CurrentThread )
          {
            v91 = WdLogNewEntry5_WdAssertion(v42, v41);
            *(_QWORD *)(v91 + 24) = 507LL;
            WdLogEvent5_WdAssertion(v91);
          }
          CurrentProcessSessionId = PsGetCurrentProcessSessionId(v42, v41);
          v47 = PsGetCurrentProcess(v46, v45);
          v48 = PsGetProcessDxgProcess(v47);
          if ( !CurrentProcessSessionId )
            goto LABEL_145;
          if ( (unsigned int)PsGetThreadSessionId(CurrentThread) != CurrentProcessSessionId )
            goto LABEL_145;
          if ( !v48 )
            goto LABEL_145;
          v49 = *(void **)(v48 + 88);
          if ( !v49 || v49 == &gDxgkWin32kEngInterface )
            goto LABEL_145;
          v50 = 0LL;
          if ( !(unsigned __int8)KeIsAttachedProcess()
            || (v92 = PsGetCurrentProcess(v52, v51),
                ProcessSessionId = PsGetProcessSessionIdEx(v92),
                CurrentThreadProcess = PsGetCurrentThreadProcess(),
                ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
          {
            ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
            if ( ThreadWin32Thread )
              v50 = *ThreadWin32Thread;
          }
          if ( v50 )
          {
            ThreadProperty = *(int **)(v50 + 80);
          }
          else
          {
LABEL_145:
            ThreadProperty = (int *)PsGetThreadProperty(KeGetCurrentThread(), 0x68547844uLL, 0);
            if ( !ThreadProperty )
              ThreadProperty = (int *)DxgkThreadObjectCreateDxgThread();
            if ( !ThreadProperty )
              goto LABEL_56;
            ObfDereferenceObject(ThreadProperty);
          }
          if ( ThreadProperty && ThreadProperty[8] )
          {
            v95 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v55, v54);
            v95[3] = 275LL;
            v95[4] = 38LL;
            v95[5] = ThreadProperty[8];
            v95[6] = 0LL;
            v95[7] = 0LL;
            WdLogEvent5_WdCriticalError(v95);
          }
LABEL_56:
          v35 = v104[0];
          goto LABEL_57;
        }
        v81 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v30, v31);
        v81[3] = v13->hAllocation;
        v81[4] = v100;
        v38 = -1073741811;
        v81[5] = -1073741811LL;
        WdLogEvent5_WdWarning(v81);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v100, v82);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v113);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v106);
        if ( v99 && _InterlockedExchangeAdd64((volatile signed __int64 *)v99 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v99 + 2), v99);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v101, v83);
        if ( !v103 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
          return v38;
      }
      else
      {
        v78 = WdLogNewEntry5_WdWarning(v27, v30, v31);
        *(struct DXGDEVICE **)(v78 + 24) = v104[0];
        *(_QWORD *)(v78 + 32) = v100;
        v38 = -1073741811;
        *(_QWORD *)(v78 + 40) = -1073741811LL;
        WdLogEvent5_WdWarning(v78);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v100, v79);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v113);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v106);
        if ( v99 && _InterlockedExchangeAdd64((volatile signed __int64 *)v99 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v99 + 2), v99);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v101, v80);
        if ( !v103 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
          return v38;
      }
    }
    else
    {
      v75 = WdLogNewEntry5_WdWarning(v27, v26, v28);
      *(_QWORD *)(v75 + 24) = v13->hAllocation;
      v38 = -1073741811;
      *(_QWORD *)(v75 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v75);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v100, v76);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v113);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v106);
      if ( v99 && _InterlockedExchangeAdd64((volatile signed __int64 *)v99 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v99 + 2), v99);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v101, v77);
      if ( !v103 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
        return v38;
    }
LABEL_151:
    McTemplateK0q_EtwWriteTransfer(v58, &EventProfilerExit, v59, v101);
    return v38;
  }
  COREACCESS::Release((COREACCESS *)v114);
  if ( v121 )
LABEL_102:
    COREACCESS::Release((COREACCESS *)v118);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v113);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v106);
  if ( v99 && _InterlockedExchangeAdd64((volatile signed __int64 *)v99 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v99 + 2), v99);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v101, v72);
  if ( v103 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v73, &EventProfilerExit, v74, v101);
  return 3221226166LL;
}
