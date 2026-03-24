/*
 * XREFs of DxgkLock @ 0x1C0103030
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
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006614 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006DE4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007018 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E49F4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FBBF0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FD9E0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0102A50 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C0150A60 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C020CC74 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0268F1C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkLock(struct _D3DKMT_LOCK *a1, __int64 a2, __int64 a3)
{
  bool v4; // r12
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct _KTHREAD **v11; // rdi
  struct _KTHREAD **v12; // r8
  struct _D3DKMT_LOCK *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct DXGDEVICE *v16; // rsi
  __int64 v17; // rcx
  int v18; // edi
  struct _KEVENT *v19; // r15
  volatile signed __int64 *v20; // rdi
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // esi
  _QWORD *p_pData; // rcx
  _DWORD *p_hAllocation; // rcx
  struct DXGADAPTER *v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v34; // rcx
  unsigned __int8 v35; // di
  __int64 v36; // r8
  struct DXGTHREAD *Current; // rax
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rax
  __int64 v43; // rdx
  struct _KEVENT *v44; // rcx
  unsigned __int8 v45; // di
  _QWORD *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  struct DXGDEVICE *v50; // [rsp+30h] [rbp-178h] BYREF
  struct DXGDEVICE *v51; // [rsp+38h] [rbp-170h] BYREF
  int v52; // [rsp+40h] [rbp-168h] BYREF
  __int64 v53; // [rsp+48h] [rbp-160h]
  char v54; // [rsp+50h] [rbp-158h]
  struct _D3DKMT_LOCK *v55; // [rsp+58h] [rbp-150h]
  struct _D3DKMT_LOCK v56; // [rsp+60h] [rbp-148h] BYREF
  struct DXGDEVICE *v57; // [rsp+90h] [rbp-118h] BYREF
  int v58; // [rsp+98h] [rbp-110h]
  __int64 v59; // [rsp+B0h] [rbp-F8h] BYREF
  struct DXGADAPTER *v60; // [rsp+B8h] [rbp-F0h]
  char v61; // [rsp+C0h] [rbp-E8h]
  _BYTE v62[8]; // [rsp+D0h] [rbp-D8h] BYREF
  _BYTE v63[16]; // [rsp+D8h] [rbp-D0h] BYREF
  DXGADAPTER *v64; // [rsp+E8h] [rbp-C0h]
  char v65; // [rsp+F0h] [rbp-B8h]
  __int64 v66; // [rsp+F8h] [rbp-B0h]
  _BYTE v67[16]; // [rsp+118h] [rbp-90h] BYREF
  __int64 v68; // [rsp+128h] [rbp-80h]
  __int64 v69; // [rsp+158h] [rbp-50h]
  char v70; // [rsp+160h] [rbp-48h]

  v55 = a1;
  v52 = -1;
  v53 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v54 = 1;
    v52 = 2011;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2011);
  }
  else
  {
    v54 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v52, 2011LL);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
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
      v38 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v38 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v38);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52, v39);
      if ( !v54 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
        return 3221225485LL;
      goto LABEL_63;
    }
  }
  memset(&v56, 0, sizeof(v56));
  if ( v4 )
  {
    v13 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v13 = (struct _D3DKMT_LOCK *)MmUserProbeAddress;
    v56 = *v13;
  }
  else
  {
    v56 = *a1;
  }
  v50 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v51, v56.hDevice, v12, &v50);
  v16 = v50;
  if ( !v50 )
  {
    v42 = WdLogNewEntry5_WdError(v15, v14);
    *(_QWORD *)(v42 + 24) = v56.hDevice;
    *(_QWORD *)(v42 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v42);
    if ( v51 && _InterlockedExchangeAdd64((volatile signed __int64 *)v51 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v51 + 2), v51);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52, v43);
    if ( !v54 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225485LL;
LABEL_63:
    McTemplateK0q_EtwWriteTransfer(v40, &EventProfilerExit, v41, v52);
    return 3221225485LL;
  }
  v57 = v50;
  v17 = *(_QWORD *)(*((_QWORD *)v50 + 2) + 16LL);
  if ( *(int *)(v17 + 2328) >= 0x2000 || *(_BYTE *)(v17 + 2628) )
  {
    v18 = *((_DWORD *)DXGGLOBAL::GetGlobal(v17, v14) + 311);
    v58 = v18;
  }
  else
  {
    v18 = 0;
    v58 = 0;
  }
  v19 = (struct _KEVENT *)*((_QWORD *)v16 + 2);
  if ( *((_DWORD *)v16 + 108) == 2 )
  {
    if ( KeReadStateEvent(v19 + 5) )
      goto LABEL_17;
    v44 = v19 + 5;
  }
  else
  {
    if ( KeReadStateEvent(v19 + 4) )
      goto LABEL_17;
    v44 = v19 + 4;
  }
  KeWaitForSingleObject(v44, Executive, 0, 0, 0LL);
LABEL_17:
  KeEnterCriticalRegion();
  if ( !v18 )
  {
    if ( ExAcquireResourceExclusiveLite(*((PERESOURCE *)v16 + 17), 0) )
      goto LABEL_19;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL) + 104LL));
    v35 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v16 + 2) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q_EtwWriteTransfer(v34, &EventBlockThread, v36, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v16 + 17), 1u);
    if ( !v35 )
      goto LABEL_49;
    goto LABEL_72;
  }
  if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v16 + 144, 0LL) )
    goto LABEL_19;
  KeLeaveCriticalRegion();
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL) + 104LL));
  v45 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v16 + 2) + 16LL));
  DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v16 + 144));
  if ( v45 )
LABEL_72:
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v16 + 2) + 16LL));
LABEL_49:
  ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL) + 104LL, 0LL);
  KeLeaveCriticalRegion();
LABEL_19:
  v20 = *(volatile signed __int64 **)(*((_QWORD *)v16 + 2) + 16LL);
  v60 = (struct DXGADAPTER *)v20;
  _InterlockedIncrement64(v20 + 3);
  v59 = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v20 + 17, 0LL);
  v61 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v62, (__int64)v50, 0, v21, 0);
  if ( v70 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v67, 0LL);
    v23 = *(unsigned int *)(v68 + 200);
    if ( (_DWORD)v23 != 1 )
      goto LABEL_80;
  }
  if ( v65 )
  {
    v46 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v23, v22);
    v46[3] = 275LL;
    v46[4] = 4LL;
    v46[5] = v63;
    v46[6] = 0LL;
    v46[7] = 0LL;
    WdLogEvent5_WdCriticalError(v46);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v64 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v64 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v24, &EventBlockThread, v25, 72);
      KeWaitForSingleObject((char *)v64 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v64, 0LL);
  }
  v66 = 0LL;
  v65 = 1;
  if ( *(_DWORD *)(v69 + 576) == 1 )
  {
    v56.hDevice = 0;
    v26 = DXGDEVICE::Lock(v50, &v56, (struct COREDEVICEACCESS *)v62);
    if ( v26 >= 0 )
    {
      p_pData = &a1->pData;
      if ( v4 )
      {
        if ( (unsigned __int64)p_pData >= MmUserProbeAddress )
          p_pData = (_QWORD *)MmUserProbeAddress;
        *p_pData = v56.pData;
        p_hAllocation = &a1->hAllocation;
        if ( (unsigned __int64)&a1->hAllocation >= MmUserProbeAddress )
          p_hAllocation = (_DWORD *)MmUserProbeAddress;
        *p_hAllocation = v56.hAllocation;
      }
      else
      {
        *p_pData = v56.pData;
        a1->hAllocation = v56.hAllocation;
      }
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v62);
    v29 = v60;
    ExReleasePushLockSharedEx((char *)v60 + 136, 0LL);
    KeLeaveCriticalRegion();
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v29 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v60 + 2), v60);
    if ( v58 )
      ExReleasePushLockSharedEx((char *)v50 + 144, 0LL);
    else
      ExReleaseResourceLite(*((PERESOURCE *)v50 + 17));
    KeLeaveCriticalRegion();
    if ( v51 && _InterlockedExchangeAdd64((volatile signed __int64 *)v51 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v51 + 2), v51);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52, v30);
    if ( v54 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v31, &EventProfilerExit, v32, v52);
    }
    return (unsigned int)v26;
  }
  COREACCESS::Release((COREACCESS *)v63);
  if ( v70 )
LABEL_80:
    COREACCESS::Release((COREACCESS *)v67);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v62);
  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v59);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v57);
  if ( v51 && _InterlockedExchangeAdd64((volatile signed __int64 *)v51 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v51 + 2), v51);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52, v47);
  if ( v54 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v48, &EventProfilerExit, v49, v52);
  return 3221226166LL;
}
