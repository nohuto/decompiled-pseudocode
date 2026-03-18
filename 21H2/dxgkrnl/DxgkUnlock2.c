/*
 * XREFs of DxgkUnlock2 @ 0x1C017CC60
 * Callers:
 *     ?VmBusUnlock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0382BC0 (-VmBusUnlock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
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
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C016E850 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C016ED94 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C017EB60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     DxgkUnlock2Internal @ 0x1C0317BFC (DxgkUnlock2Internal.c)
 */

__int64 __fastcall DxgkUnlock2(unsigned int *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  bool v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct _KTHREAD **v11; // rdi
  struct _KTHREAD **v12; // r15
  unsigned int *v13; // r12
  __int64 v14; // rax
  struct DXGDEVICE *v15; // rdi
  __int64 v16; // rcx
  int v17; // esi
  struct _KEVENT *v18; // r14
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // r8
  struct DXGDEVICE *v22; // rdi
  unsigned int v23; // esi
  __int64 v24; // rcx
  __int64 v25; // r8
  struct DXGTHREAD *Current; // rax
  __int64 v28; // rcx
  __int64 v29; // r8
  struct _KEVENT *v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rcx
  __int64 v34; // r8
  struct DXGDEVICE *v35; // [rsp+50h] [rbp-118h] BYREF
  int v36; // [rsp+58h] [rbp-110h] BYREF
  __int64 v37; // [rsp+60h] [rbp-108h]
  char v38; // [rsp+68h] [rbp-100h]
  __int64 v39; // [rsp+70h] [rbp-F8h] BYREF
  struct DXGDEVICE *v40; // [rsp+78h] [rbp-F0h] BYREF
  struct DXGDEVICE *v41; // [rsp+80h] [rbp-E8h] BYREF
  int v42; // [rsp+88h] [rbp-E0h]
  _BYTE v43[8]; // [rsp+90h] [rbp-D8h] BYREF
  _BYTE v44[16]; // [rsp+98h] [rbp-D0h] BYREF
  DXGADAPTER *v45; // [rsp+A8h] [rbp-C0h]
  char v46; // [rsp+B0h] [rbp-B8h]
  __int64 v47; // [rsp+B8h] [rbp-B0h]
  _BYTE v48[16]; // [rsp+D8h] [rbp-90h] BYREF
  __int64 v49; // [rsp+E8h] [rbp-80h]
  __int64 v50; // [rsp+118h] [rbp-50h]
  char v51; // [rsp+120h] [rbp-48h]

  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v36 = -1;
  v37 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v38 = 1;
    v36 = 2104;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, &EventProfilerEnter, v3, 2104);
  }
  else
  {
    v38 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v36, 2104);
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
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
      if ( !v38 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
        return 3221225485LL;
      goto LABEL_46;
    }
  }
  v39 = 0LL;
  v13 = (unsigned int *)&v39;
  if ( v4 )
  {
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (unsigned int *)MmUserProbeAddress;
    v14 = *(_QWORD *)a1;
    v39 = *(_QWORD *)a1;
  }
  else
  {
    v13 = a1;
    LODWORD(v14) = *a1;
  }
  v40 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v35, v14, v12, &v40);
  v15 = v40;
  if ( !v40 )
  {
    WdLogSingleEntry2(2LL, *v13, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice specified: 0x%I64x, returning 0x%I64x",
      *v13,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( v35 && _InterlockedExchangeAdd64((volatile signed __int64 *)v35 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v35 + 2), v35);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
    if ( !v38 )
      return 3221225485LL;
    v28 = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
LABEL_46:
    McTemplateK0q_EtwWriteTransfer(v28, &EventProfilerExit, v29, v36);
    return 3221225485LL;
  }
  v41 = v40;
  v16 = *(_QWORD *)(*((_QWORD *)v40 + 2) + 16LL);
  if ( *(int *)(v16 + 2424) >= 0x2000 || *(_BYTE *)(v16 + 2724) )
  {
    v17 = *((_DWORD *)DXGGLOBAL_GetGlobal() + 347);
    v42 = v17;
  }
  else
  {
    v17 = 0;
    v42 = 0;
  }
  v18 = (struct _KEVENT *)*((_QWORD *)v15 + 2);
  if ( *((_DWORD *)v15 + 108) == 2 )
  {
    if ( KeReadStateEvent(v18 + 5) )
      goto LABEL_15;
    v30 = v18 + 5;
LABEL_53:
    KeWaitForSingleObject(v30, Executive, 0, 0, 0LL);
    goto LABEL_15;
  }
  if ( !KeReadStateEvent(v18 + 4) )
  {
    v30 = v18 + 4;
    goto LABEL_53;
  }
LABEL_15:
  KeEnterCriticalRegion();
  if ( v17 )
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v15 + 144, 0LL) )
    {
      KeLeaveCriticalRegion();
      KeEnterCriticalRegion();
      DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v15 + 2) + 16LL));
      DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v15 + 144));
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v15 + 2) + 16LL));
      KeLeaveCriticalRegion();
    }
  }
  else if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)v15 + 17), 0) )
  {
    DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v15 + 2) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0q_EtwWriteTransfer(v31, (const EVENT_DESCRIPTOR *)"g", v32, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v15 + 17), 1u);
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v15 + 2) + 16LL));
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v43, (__int64)v15, 2, v19, 0);
  if ( v51 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v48, 0LL);
    if ( *(_DWORD *)(v49 + 200) != 1 )
      goto LABEL_66;
  }
  if ( v46 )
    WdLogSingleEntry5(0LL, 275LL, 4LL, v44, 0LL, 0LL);
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v45 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v45 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v20, (const EVENT_DESCRIPTOR *)"g", v21, 72);
      KeWaitForSingleObject((char *)v45 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v45, 0LL);
  }
  v47 = 0LL;
  v46 = 1;
  if ( *(_DWORD *)(v50 + 576) == 1 )
  {
    v22 = v40;
    v23 = DxgkUnlock2Internal(v40);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v43);
    if ( v42 )
      ExReleasePushLockSharedEx((char *)v22 + 144, 0LL);
    else
      ExReleaseResourceLite(*((PERESOURCE *)v22 + 17));
    KeLeaveCriticalRegion();
    if ( v35 && _InterlockedExchangeAdd64((volatile signed __int64 *)v35 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v35 + 2), v35);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
    if ( v38 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v24, &EventProfilerExit, v25, v36);
    }
    return v23;
  }
  COREACCESS::Release((COREACCESS *)v44);
  if ( v51 )
LABEL_66:
    COREACCESS::Release((COREACCESS *)v48);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v43);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v41);
  if ( v35 && _InterlockedExchangeAdd64((volatile signed __int64 *)v35 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v35 + 2), v35);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
  if ( v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v33, &EventProfilerExit, v34, v36);
  return 3221226166LL;
}
