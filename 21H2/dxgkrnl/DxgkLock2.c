/*
 * XREFs of DxgkLock2 @ 0x1C017D050
 * Callers:
 *     ?VmBusLock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C036F400 (-VmBusLock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0009904 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C000B970 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000BB70 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C000BC60 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000E694 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C000EF98 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C016E850 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C016ED94 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C017EAE0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C017EB60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z @ 0x1C03172F0 (-Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z.c)
 *     DxgkLock2Internal @ 0x1C0317934 (DxgkLock2Internal.c)
 *     ?VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UNLOCK2@@E@Z @ 0x1C037EA44 (-VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UN.c)
 */

__int64 __fastcall DxgkLock2(_D3DKMT_UNLOCK2 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  bool v4; // r13
  int v5; // r15d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGALLOCATION *v12; // rdi
  struct DXGALLOCATION *v13; // r14
  unsigned int *v14; // r12
  ULONG64 v15; // rcx
  struct DXGDEVICE *v16; // rdi
  __int64 v17; // rax
  struct _KEVENT *v18; // r13
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // r8
  struct DXGDEVICE *v22; // r15
  int v23; // edi
  _QWORD *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  struct DXGTHREAD *Current; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rcx
  __int64 v34; // r8
  bool v35; // [rsp+50h] [rbp-168h]
  struct DXGDEVICE *v36; // [rsp+58h] [rbp-160h] BYREF
  int v37; // [rsp+60h] [rbp-158h] BYREF
  __int64 v38; // [rsp+68h] [rbp-150h]
  char v39; // [rsp+70h] [rbp-148h]
  struct DXGALLOCATION *v40; // [rsp+78h] [rbp-140h]
  _D3DKMT_UNLOCK2 v41; // [rsp+80h] [rbp-138h]
  struct DXGDEVICE *v42[3]; // [rsp+88h] [rbp-130h] BYREF
  struct DXGDEVICE *v43; // [rsp+A0h] [rbp-118h] BYREF
  int v44; // [rsp+A8h] [rbp-110h]
  PVOID Object; // [rsp+B0h] [rbp-108h]
  _D3DKMT_UNLOCK2 v46; // [rsp+B8h] [rbp-100h]
  __int128 v47; // [rsp+C0h] [rbp-F8h] BYREF
  __int64 v48; // [rsp+D0h] [rbp-E8h]
  _BYTE v49[8]; // [rsp+E0h] [rbp-D8h] BYREF
  _BYTE v50[16]; // [rsp+E8h] [rbp-D0h] BYREF
  DXGADAPTER *v51; // [rsp+F8h] [rbp-C0h]
  char v52; // [rsp+100h] [rbp-B8h]
  __int64 v53; // [rsp+108h] [rbp-B0h]
  _BYTE v54[16]; // [rsp+128h] [rbp-90h] BYREF
  __int64 v55; // [rsp+138h] [rbp-80h]
  __int64 v56; // [rsp+168h] [rbp-50h]
  char v57; // [rsp+170h] [rbp-48h]

  v46 = a1;
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v35 = v4;
  v37 = -1;
  v5 = 0;
  v38 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v39 = 1;
    v37 = 2103;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, &EventProfilerEnter, v3, 2103);
  }
  else
  {
    v39 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v37, 2103);
  CurrentProcess = PsGetCurrentProcess(v7, v6, v8, v9);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v12 = (struct DXGALLOCATION *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v13 = (struct DXGALLOCATION *)*((_QWORD *)Current + 3)) == 0LL )
  {
    v13 = v12;
  }
  v40 = v13;
  if ( !v13 )
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
    if ( !v39 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
    goto LABEL_54;
  }
  v47 = 0LL;
  v48 = 0LL;
  v14 = (unsigned int *)&v47;
  v41 = (_D3DKMT_UNLOCK2)&v47;
  if ( v4 )
  {
    v15 = (ULONG64)a1;
    if ( *(_QWORD *)&a1 >= MmUserProbeAddress )
      v15 = MmUserProbeAddress;
    v47 = *(_OWORD *)v15;
    v48 = *(_QWORD *)(v15 + 16);
  }
  else
  {
    v14 = (unsigned int *)a1;
    v41 = a1;
  }
  v42[0] = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v36, *v14, (struct _KTHREAD **)v13, v42);
  v16 = v42[0];
  if ( !v42[0] )
  {
    WdLogSingleEntry2(2LL, *v14, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice specified: 0x%I64x, returning 0x%I64x",
      *v14,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( v36 && _InterlockedExchangeAdd64((volatile signed __int64 *)v36 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v36 + 2), v36);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
    if ( !v39 )
      return 3221225485LL;
    v29 = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
LABEL_54:
    McTemplateK0q_EtwWriteTransfer(v29, &EventProfilerExit, v30, v37);
    return 3221225485LL;
  }
  v17 = *(_QWORD *)(*((_QWORD *)v42[0] + 2) + 16LL);
  v42[2] = (struct DXGDEVICE *)v17;
  v42[1] = (struct DXGDEVICE *)v17;
  v43 = v42[0];
  if ( *(int *)(v17 + 2424) >= 0x2000 || *(_BYTE *)(v17 + 2724) )
    v5 = *((_DWORD *)DXGGLOBAL_GetGlobal() + 347);
  v44 = v5;
  if ( *((_DWORD *)v16 + 108) == 2 )
  {
    Object = (PVOID)(*((_QWORD *)v16 + 2) + 120LL);
    if ( !KeReadStateEvent((PRKEVENT)Object) )
      KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
  }
  else
  {
    v18 = (struct _KEVENT *)*((_QWORD *)v16 + 2);
    if ( !KeReadStateEvent(v18 + 4) )
      KeWaitForSingleObject(&v18[4], Executive, 0, 0, 0LL);
    v4 = v35;
  }
  KeEnterCriticalRegion();
  if ( v5 )
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v16 + 144, 0LL) )
    {
      KeLeaveCriticalRegion();
      KeEnterCriticalRegion();
      DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v16 + 2) + 16LL));
      DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v16 + 144));
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v16 + 2) + 16LL));
      KeLeaveCriticalRegion();
    }
  }
  else if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)v16 + 17), 0) )
  {
    DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v16 + 2) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0q_EtwWriteTransfer(v31, (const EVENT_DESCRIPTOR *)"g", v32, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v16 + 17), 1u);
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v16 + 2) + 16LL));
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v49, (__int64)v16, 0, v19, 0);
  if ( v57 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v54, 0LL);
    if ( *(_DWORD *)(v55 + 200) != 1 )
      goto LABEL_72;
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
    v22 = v42[0];
    v23 = DxgkLock2Internal(v42[0]);
    if ( v23 >= 0 && v4 )
    {
      v24 = (_QWORD *)(*(_QWORD *)&a1 + 16LL);
      if ( *(_QWORD *)&a1 + 16LL >= MmUserProbeAddress )
        v24 = (_QWORD *)MmUserProbeAddress;
      *v24 = *((_QWORD *)v14 + 2);
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v49);
    if ( v44 )
      ExReleasePushLockSharedEx((char *)v22 + 144, 0LL);
    else
      ExReleaseResourceLite(*((PERESOURCE *)v22 + 17));
    KeLeaveCriticalRegion();
    if ( v36 && _InterlockedExchangeAdd64((volatile signed __int64 *)v36 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v36 + 2), v36);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
    if ( v39 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v25, &EventProfilerExit, v26, v37);
    }
    return (unsigned int)v23;
  }
  COREACCESS::Release((COREACCESS *)v50);
  if ( v57 )
LABEL_72:
    COREACCESS::Release((COREACCESS *)v54);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v49);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v43);
  if ( v36 && _InterlockedExchangeAdd64((volatile signed __int64 *)v36 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v36 + 2), v36);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
  if ( v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v33, &EventProfilerExit, v34, v37);
  return 3221226166LL;
}
