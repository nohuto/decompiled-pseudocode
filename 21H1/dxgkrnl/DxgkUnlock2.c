/*
 * XREFs of DxgkUnlock2 @ 0x1C0101E70
 * Callers:
 *     ?VmBusUnlock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C024C1C0 (-VmBusUnlock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0008348 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0008490 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C000A358 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000AA48 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000B19C (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C000E83C (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C000E994 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EB8C (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C0011DB0 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0014980 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0024550 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00DB790 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FBEF0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FD2B0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FD6D0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ @ 0x1C0149520 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0208CF4 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UNLOCK2@@E@Z @ 0x1C0249148 (-VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UN.c)
 *     ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C0270B20 (-UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall DxgkUnlock2(_D3DKMT_UNLOCK2 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  bool v4; // r15
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct _KTHREAD **v11; // rdi
  struct _KTHREAD **v12; // r14
  _D3DKMT_UNLOCK2 *v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct DXGDEVICE *v16; // rsi
  __int64 v17; // rcx
  int v18; // edi
  struct _KEVENT *v19; // r15
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  struct DXGALLOCATION *v29; // r14
  struct DXGDEVICE *v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  struct DXGDEVICE *v33; // rdi
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rsi
  unsigned int v39; // r14d
  struct DXGALLOCATION *v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  struct _KTHREAD *CurrentThread; // r14
  int CurrentProcessSessionId; // esi
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rdi
  void *v49; // rax
  __int64 v50; // rsi
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  int *ThreadProperty; // rdi
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  unsigned int v61; // r15d
  struct DXGTHREAD *Current; // rax
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  bool v67; // zf
  __int64 v68; // rax
  __int64 v69; // rdx
  struct _KEVENT *v70; // rcx
  __int64 v71; // rcx
  unsigned __int8 v72; // di
  __int64 v73; // r8
  unsigned __int8 v74; // di
  _QWORD *v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  unsigned int v79; // edi
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  _QWORD *v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rdx
  __int64 v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rdx
  _QWORD *v94; // rax
  __int64 v95; // rax
  __int64 v96; // rdx
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  unsigned int v100; // r15d
  __int64 v101; // r13
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // rax
  int v105; // eax
  _QWORD *v106; // rax
  __int64 v107; // rax
  __int64 v108; // rax
  int ProcessSessionId; // edi
  __int64 CurrentThreadProcess; // rax
  _QWORD *v111; // rax
  struct DXGDEVICE *v112; // [rsp+30h] [rbp-128h] BYREF
  int v113; // [rsp+38h] [rbp-120h] BYREF
  __int64 v114; // [rsp+40h] [rbp-118h]
  char v115; // [rsp+48h] [rbp-110h]
  _D3DKMT_UNLOCK2 v116; // [rsp+50h] [rbp-108h] BYREF
  struct DXGALLOCATION *v117; // [rsp+58h] [rbp-100h] BYREF
  struct DXGDEVICE *v118; // [rsp+60h] [rbp-F8h] BYREF
  struct DXGDEVICE *v119; // [rsp+68h] [rbp-F0h] BYREF
  int v120; // [rsp+70h] [rbp-E8h]
  _BYTE v121[8]; // [rsp+80h] [rbp-D8h] BYREF
  _BYTE v122[16]; // [rsp+88h] [rbp-D0h] BYREF
  DXGADAPTER *v123; // [rsp+98h] [rbp-C0h]
  char v124; // [rsp+A0h] [rbp-B8h]
  __int64 v125; // [rsp+A8h] [rbp-B0h]
  _BYTE v126[16]; // [rsp+C8h] [rbp-90h] BYREF
  __int64 v127; // [rsp+D8h] [rbp-80h]
  __int64 v128; // [rsp+108h] [rbp-50h]
  char v129; // [rsp+110h] [rbp-48h]

  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v113 = -1;
  v114 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v115 = 1;
    v113 = 2104;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, &EventProfilerEnter, v3, 2104);
  }
  else
  {
    v115 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v113, 2104LL);
  CurrentProcess = PsGetCurrentProcess(v6, v5);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v11 = (struct _KTHREAD **)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent(v10, v9)) == 0LL
    || (v12 = (struct _KTHREAD **)*((_QWORD *)Current + 1)) == 0LL )
  {
    v12 = v11;
    if ( !v11 )
    {
      v63 = WdLogNewEntry5_WdError(v10, v9);
      v39 = -1073741811;
      *(_QWORD *)(v63 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v63);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v113, v64);
      v67 = v115 == 0;
LABEL_121:
      if ( v67 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
        return v39;
      goto LABEL_73;
    }
  }
  v116 = 0LL;
  v13 = &v116;
  if ( v4 )
  {
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (_D3DKMT_UNLOCK2 *)MmUserProbeAddress;
    v116 = *a1;
  }
  else
  {
    v13 = a1;
  }
  v118 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v112, v13->hDevice, v12, &v118);
  v16 = v118;
  if ( !v118 )
  {
    v68 = WdLogNewEntry5_WdError(v15, v14);
    *(_QWORD *)(v68 + 24) = v13->hDevice;
    v39 = -1073741811;
    *(_QWORD *)(v68 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v68);
    if ( v112 && _InterlockedExchangeAdd64((volatile signed __int64 *)v112 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v112 + 2), v112);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v113, v69);
    if ( !v115 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return v39;
LABEL_73:
    McTemplateK0q_EtwWriteTransfer(v65, &EventProfilerExit, v66, v113);
    return v39;
  }
  v119 = v118;
  v17 = *(_QWORD *)(*((_QWORD *)v118 + 2) + 16LL);
  if ( *(int *)(v17 + 2304) >= 0x2000 || *(_BYTE *)(v17 + 2604) )
  {
    v18 = *((_DWORD *)DXGGLOBAL::GetGlobal(v17, v14) + 283);
    v120 = v18;
  }
  else
  {
    v18 = 0;
    v120 = 0;
  }
  v19 = (struct _KEVENT *)*((_QWORD *)v16 + 2);
  if ( *((_DWORD *)v16 + 108) == 2 )
  {
    if ( KeReadStateEvent(v19 + 5) )
      goto LABEL_15;
    v70 = v19 + 5;
  }
  else
  {
    if ( KeReadStateEvent(v19 + 4) )
      goto LABEL_15;
    v70 = v19 + 4;
  }
  KeWaitForSingleObject(v70, Executive, 0, 0, 0LL);
LABEL_15:
  KeEnterCriticalRegion();
  if ( !v18 )
  {
    if ( ExAcquireResourceExclusiveLite(*((PERESOURCE *)v16 + 17), 0) )
      goto LABEL_17;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL) + 104LL));
    v72 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v16 + 2) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q_EtwWriteTransfer(v71, &EventBlockThread, v73, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v16 + 17), 1u);
    if ( v72 )
      goto LABEL_87;
    goto LABEL_88;
  }
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v16 + 144, 0LL) )
  {
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL) + 104LL));
    v74 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v16 + 2) + 16LL));
    DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v16 + 144));
    if ( v74 )
LABEL_87:
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v16 + 2) + 16LL));
LABEL_88:
    ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL) + 104LL, 0LL);
    KeLeaveCriticalRegion();
  }
LABEL_17:
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v121, (__int64)v16, 2, v20, 0);
  if ( v129 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v126, 0LL);
    v22 = *(unsigned int *)(v127 + 200);
    if ( (_DWORD)v22 != 1 )
    {
LABEL_96:
      COREACCESS::Release((COREACCESS *)v126);
LABEL_97:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v121);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v119);
      if ( v112 && _InterlockedExchangeAdd64((volatile signed __int64 *)v112 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v112 + 2), v112);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v113, v76);
      if ( v115 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v77, &EventProfilerExit, v78, v113);
      return 3221226166LL;
    }
  }
  if ( v124 )
  {
    v75 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v22, v21);
    v75[3] = 275LL;
    v75[4] = 4LL;
    v75[5] = v122;
    v75[6] = 0LL;
    v75[7] = 0LL;
    WdLogEvent5_WdCriticalError(v75);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v123 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v123 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v23, &EventBlockThread, v24, 72);
      KeWaitForSingleObject((char *)v123 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v123, 0LL);
  }
  v125 = 0LL;
  v124 = 1;
  if ( *(_DWORD *)(v128 + 576) != 1 )
  {
    COREACCESS::Release((COREACCESS *)v122);
    if ( !v129 )
      goto LABEL_97;
    goto LABEL_96;
  }
  v25 = *(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL);
  if ( !*(_BYTE *)(v25 + 209) )
  {
    DXGPROCESS::GetAllocationSafe((__int64)v12, (DXGALLOCATIONREFERENCE *)&v117, v13->hAllocation);
    v29 = v117;
    if ( !v117 )
    {
      v83 = WdLogNewEntry5_WdWarning(v27, v26, v28);
      *(_QWORD *)(v83 + 24) = v13->hAllocation;
      WdLogEvent5_WdWarning(v83);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v117, v84);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v121);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v119);
      if ( v112 && _InterlockedExchangeAdd64((volatile signed __int64 *)v112 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v112 + 2), v112);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v113, v85);
      if ( !v115 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
        return (unsigned int)-1073741811;
      goto LABEL_129;
    }
    v30 = (struct DXGDEVICE *)*((_QWORD *)v117 + 1);
    v31 = *((_QWORD *)v30 + 2);
    v32 = *(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL);
    if ( *(_QWORD *)(v31 + 16) == v32 )
    {
      if ( *((_QWORD *)v117 + 3) )
      {
        v33 = v118;
        if ( v30 == v118 )
        {
          if ( !*((_DWORD *)v16 + 108) )
          {
            v61 = *(_DWORD *)(*((_QWORD *)v117 + 6) + 4LL);
            if ( (v61 & 4) != 0 )
            {
              v100 = (v61 >> 6) & 0xF;
              v101 = *((_QWORD *)v118 + 231);
              if ( v101 )
              {
                if ( !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)v118 + 231)) )
                {
                  v104 = WdLogNewEntry5_WdAssertion(v103, v102);
                  *(_QWORD *)(v104 + 24) = 1153LL;
                  WdLogEvent5_WdAssertion(v104);
                }
                v105 = *((_DWORD *)v33 + 144);
                v33 = v118;
                if ( v105 == 1
                  && ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(v101 + 2672), v118, v100)
                  && DXGDEVICE::GetDisplayedPrimary((struct _KTHREAD **)v33, v100) == v29 )
                {
                  DXGDEVICE::UpdateDodFrontBuffer(v33, v29);
                }
              }
            }
          }
          v34 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v16 + 2) + 640LL) + 8LL)
                                                          + 824LL))(
                  *(_QWORD *)(*((_QWORD *)v16 + 2) + 648LL),
                  *((_QWORD *)v29 + 3));
          v38 = v34;
          if ( v34 < 0 )
          {
            v106 = (_QWORD *)WdLogNewEntry5_WdWarning(v36, v35, v37);
            v106[3] = v33;
            v106[4] = v29;
            v106[5] = v38;
            WdLogEvent5_WdWarning(v106);
          }
          v39 = v38;
          if ( (int)v38 >= 0 )
          {
            v40 = v117;
            if ( v117 )
              ExReleaseRundownProtection((PEX_RUNDOWN_REF)v117 + 11);
            if ( !*((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v40, v35) + 283) )
              goto LABEL_52;
            CurrentThread = KeGetCurrentThread();
            if ( !CurrentThread )
            {
              v107 = WdLogNewEntry5_WdAssertion(v42, v41);
              *(_QWORD *)(v107 + 24) = 496LL;
              WdLogEvent5_WdAssertion(v107);
            }
            CurrentProcessSessionId = PsGetCurrentProcessSessionId(v42);
            v47 = PsGetCurrentProcess(v46, v45);
            v48 = PsGetProcessDxgProcess(v47);
            if ( !CurrentProcessSessionId )
              goto LABEL_149;
            if ( (unsigned int)PsGetThreadSessionId(CurrentThread) != CurrentProcessSessionId )
              goto LABEL_149;
            if ( !v48 )
              goto LABEL_149;
            v49 = *(void **)(v48 + 88);
            if ( !v49 || v49 == &gDxgkWin32kEngInterface )
              goto LABEL_149;
            v50 = 0LL;
            if ( !(unsigned __int8)KeIsAttachedProcess()
              || (v108 = PsGetCurrentProcess(v52, v51),
                  ProcessSessionId = PsGetProcessSessionIdEx(v108),
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
LABEL_149:
              ThreadProperty = (int *)PsGetThreadProperty(KeGetCurrentThread(), 0x68547844uLL, 0);
              if ( !ThreadProperty )
                ThreadProperty = (int *)DxgkThreadObjectCreateDxgThread();
              if ( !ThreadProperty )
                goto LABEL_51;
              ObfDereferenceObject(ThreadProperty);
            }
            if ( ThreadProperty && ThreadProperty[8] )
            {
              v111 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v55, v54);
              v111[3] = 275LL;
              v111[4] = 38LL;
              v111[5] = ThreadProperty[8];
              v111[6] = 0LL;
              v111[7] = 0LL;
              WdLogEvent5_WdCriticalError(v111);
            }
LABEL_51:
            v33 = v118;
LABEL_52:
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v121);
            if ( v120 )
              ExReleasePushLockSharedEx((char *)v33 + 144, 0LL);
            else
              ExReleaseResourceLite(*((PERESOURCE *)v33 + 17));
            KeLeaveCriticalRegion();
            if ( v112 && _InterlockedExchangeAdd64((volatile signed __int64 *)v112 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v112 + 2), v112);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v113, v57);
            if ( v115 )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
                McTemplateK0q_EtwWriteTransfer(v58, &EventProfilerExit, v59, v113);
            }
            return 0LL;
          }
        }
        else
        {
          v94 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v31, v30);
          v94[3] = v29;
          v94[4] = v33;
          v94[5] = *((_QWORD *)v29 + 1);
          v39 = -1073741811;
          v94[6] = -1073741811LL;
          WdLogEvent5_WdWarning(v94);
        }
        v95 = WdLogNewEntry5_WdError(v36, v35);
        *(_QWORD *)(v95 + 24) = v117;
        *(_QWORD *)(v95 + 32) = (int)v39;
        WdLogEvent5_WdError(v95);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v117, v96);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v121);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v119);
        if ( v112 && _InterlockedExchangeAdd64((volatile signed __int64 *)v112 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v112 + 2), v112);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v113, v97);
        if ( v115 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        {
          McTemplateK0q_EtwWriteTransfer(v98, &EventProfilerExit, v99, v113);
          return v39;
        }
        return v39;
      }
      v91 = WdLogNewEntry5_WdWarning(v32, v31, v30);
      *(_QWORD *)(v91 + 24) = v13->hAllocation;
      *(_QWORD *)(v91 + 32) = v117;
      WdLogEvent5_WdWarning(v91);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v117, v92);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v121);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v119);
      if ( v112 && _InterlockedExchangeAdd64((volatile signed __int64 *)v112 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v112 + 2), v112);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v113, v93);
      if ( !v115 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
        return (unsigned int)-1073741811;
LABEL_129:
      McTemplateK0q_EtwWriteTransfer(v86, &EventProfilerExit, v87, v113);
      return (unsigned int)-1073741811;
    }
    v88 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v31, v30);
    v88[3] = v118;
    v88[4] = v117;
    v39 = -1073741811;
    v88[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v88);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v117, v89);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v121);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v119);
    if ( v112 && _InterlockedExchangeAdd64((volatile signed __int64 *)v112 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v112 + 2), v112);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v113, v90);
    v67 = v115 == 0;
    goto LABEL_121;
  }
  v79 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendUnlock2(
          (DXG_GUEST_VIRTUALGPU_VMBUS *)(v25 + 4208),
          (struct DXGPROCESS *)v12,
          v118,
          v13,
          0);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v121);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v119);
  if ( v112 && _InterlockedExchangeAdd64((volatile signed __int64 *)v112 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v112 + 2), v112);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v113, v80);
  if ( v115 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v81, &EventProfilerExit, v82, v113);
  return v79;
}
