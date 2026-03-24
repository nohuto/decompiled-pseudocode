/*
 * XREFs of DxgkOfferAllocations @ 0x1C0150D90
 * Callers:
 *     ?VmBusOfferAllocations@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0243830 (-VmBusOfferAllocations@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
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
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E49F4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FBBF0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FD9E0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?OfferAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_OFFERALLOCATIONS@@E@Z @ 0x1C0151230 (-OfferAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_OFFERALLOCATIONS@@E@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C020CC74 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkOfferAllocations(_D3DKMT_OFFERALLOCATIONS *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct _KTHREAD **v10; // rdi
  struct _KTHREAD **v11; // rsi
  unsigned __int8 v12; // r14
  _OWORD *p_hDevice; // rcx
  __int64 hDevice; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct DXGDEVICE *v17; // rsi
  __int64 v18; // rcx
  int v19; // edi
  struct _KEVENT *v20; // r15
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // r8
  ULONG64 v27; // rcx
  struct DXGDEVICE *v28; // rdi
  unsigned int v29; // esi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  UINT *p_Flags; // r13
  UINT Value; // edi
  struct DXGTHREAD *Current; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  bool v41; // zf
  __int64 v42; // rax
  __int64 v43; // rdx
  struct _KEVENT *v44; // rcx
  __int64 v45; // rcx
  unsigned __int8 v46; // di
  __int64 v47; // r8
  unsigned __int8 v48; // di
  _QWORD *v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rax
  __int64 v58; // rdx
  struct DXGDEVICE *v59; // [rsp+30h] [rbp-138h] BYREF
  struct DXGDEVICE *v60; // [rsp+38h] [rbp-130h] BYREF
  int v61; // [rsp+40h] [rbp-128h] BYREF
  __int64 v62; // [rsp+48h] [rbp-120h]
  char v63; // [rsp+50h] [rbp-118h]
  struct DXGDEVICE *v64; // [rsp+58h] [rbp-110h] BYREF
  int v65; // [rsp+60h] [rbp-108h]
  _D3DKMT_OFFERALLOCATIONS v66; // [rsp+68h] [rbp-100h] BYREF
  _BYTE v67[8]; // [rsp+90h] [rbp-D8h] BYREF
  _BYTE v68[16]; // [rsp+98h] [rbp-D0h] BYREF
  DXGADAPTER *v69; // [rsp+A8h] [rbp-C0h]
  char v70; // [rsp+B0h] [rbp-B8h]
  __int64 v71; // [rsp+B8h] [rbp-B0h]
  _BYTE v72[16]; // [rsp+D8h] [rbp-90h] BYREF
  __int64 v73; // [rsp+E8h] [rbp-80h]
  __int64 v74; // [rsp+118h] [rbp-50h]
  char v75; // [rsp+120h] [rbp-48h]

  v61 = -1;
  v62 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v63 = 1;
    v61 = 2070;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2070);
  }
  else
  {
    v63 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v61, 2070LL);
  CurrentProcess = PsGetCurrentProcess(v5, v4);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v10 = (struct _KTHREAD **)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent(v9, v8)) == 0LL
    || (v11 = (struct _KTHREAD **)*((_QWORD *)Current + 1)) == 0LL )
  {
    v11 = v10;
    if ( !v10 )
    {
      v37 = WdLogNewEntry5_WdError(v9, v8);
      *(_QWORD *)(v37 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v37);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v61, v38);
      v41 = v63 == 0;
      goto LABEL_50;
    }
  }
  v12 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  *(_QWORD *)&v66.Flags.0 = 0LL;
  if ( v12 )
  {
    p_hDevice = &a1->hDevice;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      p_hDevice = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)&v66.hDevice = *p_hDevice;
    *(_OWORD *)&v66.HandleList = p_hDevice[1];
  }
  else
  {
    v66 = *a1;
  }
  v60 = 0LL;
  hDevice = v66.hDevice;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v59, v66.hDevice, v11, &v60);
  v17 = v60;
  if ( !v60 )
  {
    v42 = WdLogNewEntry5_WdError(v16, v15);
    *(_QWORD *)(v42 + 24) = hDevice;
    *(_QWORD *)(v42 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v42);
    if ( v59 && _InterlockedExchangeAdd64((volatile signed __int64 *)v59 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v59 + 2), v59);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v61, v43);
    v41 = v63 == 0;
LABEL_50:
    if ( v41 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225485LL;
    goto LABEL_90;
  }
  v64 = v60;
  v18 = *(_QWORD *)(*((_QWORD *)v60 + 2) + 16LL);
  if ( *(int *)(v18 + 2328) >= 0x2000 || *(_BYTE *)(v18 + 2628) )
  {
    v19 = *((_DWORD *)DXGGLOBAL::GetGlobal(v18, v15) + 311);
    v65 = v19;
  }
  else
  {
    v19 = 0;
    v65 = 0;
  }
  v20 = (struct _KEVENT *)*((_QWORD *)v17 + 2);
  if ( *((_DWORD *)v17 + 108) == 2 )
  {
    if ( KeReadStateEvent(v20 + 5) )
      goto LABEL_16;
    v44 = v20 + 5;
  }
  else
  {
    if ( KeReadStateEvent(v20 + 4) )
      goto LABEL_16;
    v44 = v20 + 4;
  }
  KeWaitForSingleObject(v44, Executive, 0, 0, 0LL);
LABEL_16:
  KeEnterCriticalRegion();
  if ( v19 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v17 + 144, 0LL) )
      goto LABEL_18;
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL) + 104LL));
    v48 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v17 + 2) + 16LL));
    DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v17 + 144));
    if ( !v48 )
    {
LABEL_68:
      ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL) + 104LL, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_18;
    }
LABEL_67:
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v17 + 2) + 16LL));
    goto LABEL_68;
  }
  if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)v17 + 17), 0) )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL) + 104LL));
    v46 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v17 + 2) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q_EtwWriteTransfer(v45, &EventBlockThread, v47, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v17 + 17), 1u);
    if ( !v46 )
      goto LABEL_68;
    goto LABEL_67;
  }
LABEL_18:
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v67, (__int64)v17, 0, v21, 0);
  if ( v75 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v72, 0LL);
    v23 = *(unsigned int *)(v73 + 200);
    if ( (_DWORD)v23 != 1 )
    {
LABEL_76:
      COREACCESS::Release((COREACCESS *)v72);
LABEL_77:
      v53 = WdLogNewEntry5_WdWarning(v51, v50, v52);
      *(_QWORD *)(v53 + 24) = v60;
      *(_QWORD *)(v53 + 32) = -1073741130LL;
      WdLogEvent5_WdWarning(v53);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v67);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v64);
      if ( v59 && _InterlockedExchangeAdd64((volatile signed __int64 *)v59 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v59 + 2), v59);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v61, v54);
      if ( v63 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v55, &EventProfilerExit, v56, v61);
      return 3221226166LL;
    }
  }
  if ( v70 )
  {
    v49 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v23, v22);
    v49[3] = 275LL;
    v49[4] = 4LL;
    v49[5] = v68;
    v49[6] = 0LL;
    v49[7] = 0LL;
    WdLogEvent5_WdCriticalError(v49);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v69 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v69 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v25, &EventBlockThread, v26, 72);
      KeWaitForSingleObject((char *)v69 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v69, 0LL);
  }
  v71 = 0LL;
  v70 = 1;
  if ( *(_DWORD *)(v74 + 576) != 1 )
  {
    COREACCESS::Release((COREACCESS *)v68);
    if ( !v75 )
      goto LABEL_77;
    goto LABEL_76;
  }
  v27 = *(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL);
  if ( *(_DWORD *)(v27 + 1872) >= 0x5010u )
  {
    if ( v12 )
    {
      p_Flags = (UINT *)&a1->Flags;
      v27 = MmUserProbeAddress;
      if ( (unsigned __int64)p_Flags >= MmUserProbeAddress )
        p_Flags = (UINT *)MmUserProbeAddress;
      Value = *p_Flags;
      v66.Flags.Value = *p_Flags;
    }
    else
    {
      Value = a1->Flags.Value;
      v66.Flags.Value = Value;
    }
    if ( (Value & 0xFFFFFFFC) != 0 )
    {
      v57 = WdLogNewEntry5_WdWarning(v27, v22, v24);
      *(_QWORD *)(v57 + 24) = (unsigned __int64)Value >> 2;
      WdLogEvent5_WdWarning(v57);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v67);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v64);
      if ( v59 && _InterlockedExchangeAdd64((volatile signed __int64 *)v59 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v59 + 2), v59);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v61, v58);
      if ( !v63 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
        return 3221225485LL;
LABEL_90:
      McTemplateK0q_EtwWriteTransfer(v39, &EventProfilerExit, v40, v61);
      return 3221225485LL;
    }
  }
  v28 = v60;
  v29 = DXGDEVICE::OfferAllocations(v60, &v66, v12);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v67);
  if ( v65 )
    ExReleasePushLockSharedEx((char *)v28 + 144, 0LL);
  else
    ExReleaseResourceLite(*((PERESOURCE *)v28 + 17));
  KeLeaveCriticalRegion();
  if ( v59 && _InterlockedExchangeAdd64((volatile signed __int64 *)v59 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v59 + 2), v59);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v61, v30);
  if ( v63 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v31, &EventProfilerExit, v32, v61);
  }
  return v29;
}
