/*
 * XREFs of DxgkLock @ 0x1C016C080
 * Callers:
 *     ?VmBusLock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C036F400 (-VmBusLock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0009904 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000BB70 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C000BC60 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000E694 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C000EF98 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C016C650 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C016E850 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C016ED94 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C017EB60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C01CB270 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C03099FC (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkLock(struct _D3DKMT_LOCK *a1, __int64 a2, __int64 a3)
{
  bool v4; // r12
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct _KTHREAD **v11; // rdi
  struct _KTHREAD **v12; // r8
  struct _D3DKMT_LOCK *v13; // rcx
  struct DXGDEVICE *v14; // rdi
  __int64 v15; // rcx
  int v16; // esi
  struct _KEVENT *v17; // r15
  volatile signed __int64 *v18; // rdi
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // esi
  _QWORD *p_pData; // rcx
  _DWORD *p_hAllocation; // r14
  struct DXGADAPTER *v25; // rdi
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v29; // rcx
  __int64 v30; // r8
  struct DXGTHREAD *Current; // rax
  __int64 v32; // rcx
  __int64 v33; // r8
  struct _KEVENT *v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // r8
  struct DXGDEVICE *v37; // [rsp+50h] [rbp-178h] BYREF
  struct DXGDEVICE *v38; // [rsp+58h] [rbp-170h] BYREF
  int v39; // [rsp+60h] [rbp-168h] BYREF
  __int64 v40; // [rsp+68h] [rbp-160h]
  char v41; // [rsp+70h] [rbp-158h]
  struct _D3DKMT_LOCK *v42; // [rsp+78h] [rbp-150h]
  struct _D3DKMT_LOCK v43; // [rsp+80h] [rbp-148h] BYREF
  struct DXGDEVICE *v44; // [rsp+B0h] [rbp-118h] BYREF
  int v45; // [rsp+B8h] [rbp-110h]
  __int64 v46; // [rsp+D0h] [rbp-F8h] BYREF
  struct DXGADAPTER *v47; // [rsp+D8h] [rbp-F0h]
  char v48; // [rsp+E0h] [rbp-E8h]
  _BYTE v49[8]; // [rsp+F0h] [rbp-D8h] BYREF
  _BYTE v50[16]; // [rsp+F8h] [rbp-D0h] BYREF
  DXGADAPTER *v51; // [rsp+108h] [rbp-C0h]
  char v52; // [rsp+110h] [rbp-B8h]
  __int64 v53; // [rsp+118h] [rbp-B0h]
  _BYTE v54[16]; // [rsp+138h] [rbp-90h] BYREF
  __int64 v55; // [rsp+148h] [rbp-80h]
  __int64 v56; // [rsp+178h] [rbp-50h]
  char v57; // [rsp+180h] [rbp-48h]

  v42 = a1;
  v39 = -1;
  v40 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v41 = 1;
    v39 = 2011;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2011);
  }
  else
  {
    v41 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v39, 2011);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  CurrentProcess = PsGetCurrentProcess(v6, v5, v7, v8);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v11 = (struct _KTHREAD **)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v12 = (struct _KTHREAD **)*((_QWORD *)Current + 3)) == 0LL )
  {
    v12 = v11;
    if ( !v11 )
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
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
      if ( !v41 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
        return 3221225485LL;
      goto LABEL_64;
    }
  }
  memset(&v43, 0, sizeof(v43));
  if ( v4 )
  {
    v13 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v13 = (struct _D3DKMT_LOCK *)MmUserProbeAddress;
    v43 = *v13;
  }
  else
  {
    v43 = *a1;
  }
  v37 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v38, v43.hDevice, v12, &v37);
  v14 = v37;
  if ( !v37 )
  {
    WdLogSingleEntry2(2LL, v43.hDevice, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice specified: 0x%I64x, returning 0x%I64x",
      v43.hDevice,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( v38 && _InterlockedExchangeAdd64((volatile signed __int64 *)v38 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v38 + 2), v38);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
    if ( !v41 )
      return 3221225485LL;
    v32 = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
LABEL_64:
    McTemplateK0q_EtwWriteTransfer(v32, &EventProfilerExit, v33, v39);
    return 3221225485LL;
  }
  v44 = v37;
  v15 = *(_QWORD *)(*((_QWORD *)v37 + 2) + 16LL);
  if ( *(int *)(v15 + 2424) >= 0x2000 || *(_BYTE *)(v15 + 2724) )
  {
    v16 = *((_DWORD *)DXGGLOBAL_GetGlobal() + 347);
    v45 = v16;
  }
  else
  {
    v16 = 0;
    v45 = 0;
  }
  v17 = (struct _KEVENT *)*((_QWORD *)v14 + 2);
  if ( *((_DWORD *)v14 + 108) == 2 )
  {
    if ( KeReadStateEvent(v17 + 5) )
      goto LABEL_17;
    v34 = v17 + 5;
LABEL_69:
    KeWaitForSingleObject(v34, Executive, 0, 0, 0LL);
    goto LABEL_17;
  }
  if ( !KeReadStateEvent(v17 + 4) )
  {
    v34 = v17 + 4;
    goto LABEL_69;
  }
LABEL_17:
  KeEnterCriticalRegion();
  if ( v16 )
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v14 + 144, 0LL) )
    {
      KeLeaveCriticalRegion();
      KeEnterCriticalRegion();
      DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v14 + 2) + 16LL));
      DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v14 + 144));
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v14 + 2) + 16LL));
      KeLeaveCriticalRegion();
    }
  }
  else if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)v14 + 17), 0) )
  {
    DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v14 + 2) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0q_EtwWriteTransfer(v29, (const EVENT_DESCRIPTOR *)"g", v30, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v14 + 17), 1u);
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v14 + 2) + 16LL));
  }
  v18 = *(volatile signed __int64 **)(*((_QWORD *)v14 + 2) + 16LL);
  v47 = (struct DXGADAPTER *)v18;
  _InterlockedIncrement64(v18 + 3);
  v46 = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v18 + 17, 0LL);
  v48 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v49, (__int64)v37, 0, v19, 0);
  if ( v57 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v54, 0LL);
    if ( *(_DWORD *)(v55 + 200) != 1 )
      goto LABEL_77;
  }
  if ( v52 )
    WdLogSingleEntry5(0LL, 275LL, 4LL, v50, 0LL, 0LL);
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v51 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v51 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v20, (const EVENT_DESCRIPTOR *)"g", v21, 72);
      KeWaitForSingleObject((char *)v51 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v51, 0LL);
  }
  v53 = 0LL;
  v52 = 1;
  if ( *(_DWORD *)(v56 + 576) == 1 )
  {
    v43.hDevice = 0;
    v22 = DXGDEVICE::Lock(v37, &v43, (struct COREDEVICEACCESS *)v49);
    if ( v22 >= 0 )
    {
      p_pData = &a1->pData;
      if ( v4 )
      {
        if ( (unsigned __int64)p_pData >= MmUserProbeAddress )
          p_pData = (_QWORD *)MmUserProbeAddress;
        *p_pData = v43.pData;
        p_hAllocation = &a1->hAllocation;
        if ( (unsigned __int64)p_hAllocation >= MmUserProbeAddress )
          p_hAllocation = (_DWORD *)MmUserProbeAddress;
        *p_hAllocation = v43.hAllocation;
      }
      else
      {
        *p_pData = v43.pData;
        a1->hAllocation = v43.hAllocation;
      }
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v49);
    v25 = v47;
    ExReleasePushLockSharedEx((char *)v47 + 136, 0LL);
    KeLeaveCriticalRegion();
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v25 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v47 + 2), v47);
    if ( v45 )
      ExReleasePushLockSharedEx((char *)v37 + 144, 0LL);
    else
      ExReleaseResourceLite(*((PERESOURCE *)v37 + 17));
    KeLeaveCriticalRegion();
    if ( v38 && _InterlockedExchangeAdd64((volatile signed __int64 *)v38 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v38 + 2), v38);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
    if ( v41 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v26, &EventProfilerExit, v27, v39);
    }
    return (unsigned int)v22;
  }
  COREACCESS::Release((COREACCESS *)v50);
  if ( v57 )
LABEL_77:
    COREACCESS::Release((COREACCESS *)v54);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v49);
  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v46);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v44);
  if ( v38 && _InterlockedExchangeAdd64((volatile signed __int64 *)v38 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v38 + 2), v38);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
  if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v35, &EventProfilerExit, v36, v39);
  return 3221226166LL;
}
