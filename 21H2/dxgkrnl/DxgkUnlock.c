/*
 * XREFs of DxgkUnlock @ 0x1C01CAE30
 * Callers:
 *     ?VmBusUnlock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0382BC0 (-VmBusUnlock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0009904 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
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
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C01CB270 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 */

__int64 __fastcall DxgkUnlock(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 *v3; // rsi
  unsigned __int8 v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct _KTHREAD **v11; // rdi
  struct _KTHREAD **v12; // r8
  __int128 v13; // xmm0
  struct DXGDEVICE *v14; // rdi
  __int64 v15; // rcx
  int v16; // esi
  struct _KEVENT *v17; // r15
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // r8
  struct DXGDEVICE *v21; // rdi
  unsigned int v22; // esi
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v26; // rcx
  __int64 v27; // r8
  struct DXGTHREAD *Current; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  struct _KEVENT *v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // r8
  struct DXGDEVICE *v34; // [rsp+50h] [rbp-118h] BYREF
  struct DXGDEVICE *v35; // [rsp+58h] [rbp-110h] BYREF
  int v36; // [rsp+60h] [rbp-108h] BYREF
  __int64 v37; // [rsp+68h] [rbp-100h]
  char v38; // [rsp+70h] [rbp-F8h]
  struct _D3DKMT_UNLOCK v39; // [rsp+78h] [rbp-F0h] BYREF
  struct DXGDEVICE *v40; // [rsp+88h] [rbp-E0h] BYREF
  int v41; // [rsp+90h] [rbp-D8h]
  _BYTE v42[8]; // [rsp+A0h] [rbp-C8h] BYREF
  _BYTE v43[16]; // [rsp+A8h] [rbp-C0h] BYREF
  DXGADAPTER *v44; // [rsp+B8h] [rbp-B0h]
  char v45; // [rsp+C0h] [rbp-A8h]
  __int64 v46; // [rsp+C8h] [rbp-A0h]
  _BYTE v47[88]; // [rsp+E8h] [rbp-80h] BYREF

  v3 = (__int128 *)a1;
  v36 = -1;
  v37 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v38 = 1;
    v36 = 2012;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2012);
  }
  else
  {
    v38 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v36, 2012);
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
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
      if ( !v38 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
        return 3221225485LL;
      goto LABEL_55;
    }
  }
  if ( v4 )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (__int128 *)MmUserProbeAddress;
    v13 = *v3;
  }
  else
  {
    v13 = *v3;
  }
  v39 = (struct _D3DKMT_UNLOCK)v13;
  v34 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v35, v13, v12, &v34);
  v14 = v34;
  if ( !v34 )
  {
    WdLogSingleEntry2(2LL, (unsigned int)v13, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice specified: 0x%I64x, returning 0x%I64x",
      (unsigned int)v13,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( v35 && _InterlockedExchangeAdd64((volatile signed __int64 *)v35 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v35 + 2), v35);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
    if ( !v38 )
      return 3221225485LL;
    v29 = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
LABEL_55:
    McTemplateK0q_EtwWriteTransfer(v29, &EventProfilerExit, v30, v36);
    return 3221225485LL;
  }
  v40 = v34;
  v15 = *(_QWORD *)(*((_QWORD *)v34 + 2) + 16LL);
  if ( *(int *)(v15 + 2424) >= 0x2000 || *(_BYTE *)(v15 + 2724) )
  {
    v16 = *((_DWORD *)DXGGLOBAL_GetGlobal() + 347);
    v41 = v16;
  }
  else
  {
    v16 = 0;
    v41 = 0;
  }
  v17 = (struct _KEVENT *)*((_QWORD *)v14 + 2);
  if ( *((_DWORD *)v14 + 108) == 2 )
  {
    if ( KeReadStateEvent(v17 + 5) )
      goto LABEL_17;
    v31 = v17 + 5;
LABEL_60:
    KeWaitForSingleObject(v31, Executive, 0, 0, 0LL);
    goto LABEL_17;
  }
  if ( !KeReadStateEvent(v17 + 4) )
  {
    v31 = v17 + 4;
    goto LABEL_60;
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
      McTemplateK0q_EtwWriteTransfer(v26, (const EVENT_DESCRIPTOR *)"g", v27, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v14 + 17), 1u);
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v14 + 2) + 16LL));
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v42, (__int64)v14, 2, v18, 0);
  if ( v47[72] )
    COREACCESS::AcquireShared((COREACCESS *)v47, 0LL);
  if ( v45 )
    WdLogSingleEntry5(0LL, 275LL, 4LL, v43, 0LL, 0LL);
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v44 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v44 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v19, (const EVENT_DESCRIPTOR *)"g", v20, 72);
      KeWaitForSingleObject((char *)v44 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v44, 0LL);
  }
  v46 = 0LL;
  v45 = 1;
  if ( *((_DWORD *)v34 + 144) == 4 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v42);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v40);
    if ( v35 && _InterlockedExchangeAdd64((volatile signed __int64 *)v35 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v35 + 2), v35);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
    if ( v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v32, &EventProfilerExit, v33, v36);
    return 0LL;
  }
  else
  {
    v39.hDevice = 0;
    v21 = v34;
    v22 = DXGDEVICE::Unlock(v34, &v39, v4);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v42);
    if ( v41 )
      ExReleasePushLockSharedEx((char *)v21 + 144, 0LL);
    else
      ExReleaseResourceLite(*((PERESOURCE *)v21 + 17));
    KeLeaveCriticalRegion();
    if ( v35 && _InterlockedExchangeAdd64((volatile signed __int64 *)v35 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v35 + 2), v35);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
    if ( v38 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v36);
    }
    return v22;
  }
}
