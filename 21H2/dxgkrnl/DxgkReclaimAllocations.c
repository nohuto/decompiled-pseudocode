/*
 * XREFs of DxgkReclaimAllocations @ 0x1C015AE00
 * Callers:
 *     <none>
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
 *     ?ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@E@Z @ 0x1C01CCAA0 (-ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@E@Z.c)
 */

__int64 __fastcall DxgkReclaimAllocations(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // rdi
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct _KTHREAD **v6; // rsi
  struct _KTHREAD **v7; // r14
  unsigned __int8 v8; // r15
  __int64 v9; // rsi
  struct DXGDEVICE *v10; // rdi
  __int64 v11; // rcx
  int v12; // esi
  struct _KEVENT *v13; // r14
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // r8
  struct DXGDEVICE *v17; // rdi
  unsigned int v18; // esi
  __int64 v19; // rcx
  __int64 v20; // r8
  struct DXGTHREAD *Current; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  struct _KEVENT *v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r8
  struct DXGDEVICE *v29; // [rsp+50h] [rbp-158h] BYREF
  struct DXGDEVICE *v30; // [rsp+58h] [rbp-150h] BYREF
  int v31; // [rsp+60h] [rbp-148h] BYREF
  __int64 v32; // [rsp+68h] [rbp-140h]
  char v33; // [rsp+70h] [rbp-138h]
  struct DXGDEVICE *v34; // [rsp+78h] [rbp-130h] BYREF
  int v35; // [rsp+80h] [rbp-128h]
  unsigned int v36[4]; // [rsp+88h] [rbp-120h]
  __int128 v37; // [rsp+98h] [rbp-110h]
  __int64 v38; // [rsp+A8h] [rbp-100h]
  _D3DKMT_RECLAIMALLOCATIONS2 v39; // [rsp+B0h] [rbp-F8h] BYREF
  _BYTE v40[8]; // [rsp+E0h] [rbp-C8h] BYREF
  _BYTE v41[16]; // [rsp+E8h] [rbp-C0h] BYREF
  DXGADAPTER *v42; // [rsp+F8h] [rbp-B0h]
  char v43; // [rsp+100h] [rbp-A8h]
  __int64 v44; // [rsp+108h] [rbp-A0h]
  _BYTE v45[16]; // [rsp+128h] [rbp-80h] BYREF
  __int64 v46; // [rsp+138h] [rbp-70h]
  __int64 v47; // [rsp+168h] [rbp-40h]
  char v48; // [rsp+170h] [rbp-38h]

  v3 = a1;
  v31 = -1;
  v32 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v33 = 1;
    v31 = 2071;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2071);
  }
  else
  {
    v33 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v31, 2071);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v6 = (struct _KTHREAD **)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v7 = (struct _KTHREAD **)*((_QWORD *)Current + 3)) == 0LL )
  {
    v7 = v6;
    if ( !v6 )
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
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
      if ( !v33 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
        return 3221225485LL;
      goto LABEL_46;
    }
  }
  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1 )
  {
    v8 = 1;
    if ( v3 >= MmUserProbeAddress )
      v3 = MmUserProbeAddress;
    *(_OWORD *)v36 = *(_OWORD *)v3;
    v37 = *(_OWORD *)(v3 + 16);
    v38 = *(_QWORD *)(v3 + 32);
  }
  else
  {
    v8 = 0;
    *(_OWORD *)v36 = *(_OWORD *)v3;
    v37 = *(_OWORD *)(v3 + 16);
    v38 = *(_QWORD *)(v3 + 32);
  }
  v39.hPagingQueue = 0;
  v39.NumAllocations = v38;
  v39.pResources = *(D3DKMT_HANDLE **)&v36[2];
  *(_OWORD *)&v39.HandleList = v37;
  v39.PagingFenceValue = 0LL;
  v29 = 0LL;
  v9 = v36[0];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v30, v36[0], v7, &v29);
  v10 = v29;
  if ( !v29 )
  {
    WdLogSingleEntry2(2LL, v9, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v9,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( v30 && _InterlockedExchangeAdd64((volatile signed __int64 *)v30 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v30 + 2), v30);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
    if ( !v33 )
      return 3221225485LL;
    v23 = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
LABEL_46:
    McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v31);
    return 3221225485LL;
  }
  v34 = v29;
  v11 = *(_QWORD *)(*((_QWORD *)v29 + 2) + 16LL);
  if ( *(int *)(v11 + 2424) >= 0x2000 || *(_BYTE *)(v11 + 2724) )
  {
    v12 = *((_DWORD *)DXGGLOBAL_GetGlobal() + 347);
    v35 = v12;
  }
  else
  {
    v12 = 0;
    v35 = 0;
  }
  v13 = (struct _KEVENT *)*((_QWORD *)v10 + 2);
  if ( *((_DWORD *)v10 + 108) == 2 )
  {
    if ( KeReadStateEvent(v13 + 5) )
      goto LABEL_16;
    v25 = v13 + 5;
LABEL_52:
    KeWaitForSingleObject(v25, Executive, 0, 0, 0LL);
    goto LABEL_16;
  }
  if ( !KeReadStateEvent(v13 + 4) )
  {
    v25 = v13 + 4;
    goto LABEL_52;
  }
LABEL_16:
  KeEnterCriticalRegion();
  if ( v12 )
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v10 + 144, 0LL) )
    {
      KeLeaveCriticalRegion();
      KeEnterCriticalRegion();
      DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v10 + 2) + 16LL));
      DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v10 + 144));
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v10 + 2) + 16LL));
      KeLeaveCriticalRegion();
    }
  }
  else if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)v10 + 17), 0) )
  {
    DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v10 + 2) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0q_EtwWriteTransfer(v26, (const EVENT_DESCRIPTOR *)"g", v27, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v10 + 17), 1u);
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v10 + 2) + 16LL));
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v40, (__int64)v10, 0, v14, 0);
  if ( v48 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v45, 0LL);
    if ( *(_DWORD *)(v46 + 200) != 1 )
      goto LABEL_66;
  }
  if ( v43 )
    WdLogSingleEntry5(0LL, 275LL, 4LL, v41, 0LL, 0LL);
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v42 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v42 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v15, (const EVENT_DESCRIPTOR *)"g", v16, 72);
      KeWaitForSingleObject((char *)v42 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v42, 0LL);
  }
  v44 = 0LL;
  v43 = 1;
  if ( *(_DWORD *)(v47 + 576) == 1 )
  {
    v17 = v29;
    v18 = DXGDEVICE::ReclaimAllocations(v29, 0LL, &v39, v8);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v40);
    if ( v35 )
      ExReleasePushLockSharedEx((char *)v17 + 144, 0LL);
    else
      ExReleaseResourceLite(*((PERESOURCE *)v17 + 17));
    KeLeaveCriticalRegion();
    if ( v30 && _InterlockedExchangeAdd64((volatile signed __int64 *)v30 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v30 + 2), v30);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
    if ( v33 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v19, &EventProfilerExit, v20, v31);
    }
    return v18;
  }
  COREACCESS::Release((COREACCESS *)v41);
  if ( v48 )
LABEL_66:
    COREACCESS::Release((COREACCESS *)v45);
  WdLogSingleEntry2(3LL, v29, -1073741130LL);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v40);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v34);
  if ( v30 && _InterlockedExchangeAdd64((volatile signed __int64 *)v30 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v30 + 2), v30);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
  if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v28, v31);
  return 3221226166LL;
}
