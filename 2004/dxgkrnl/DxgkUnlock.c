/*
 * XREFs of DxgkUnlock @ 0x1C00E0ED0
 * Callers:
 *     ?VmBusUnlock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C02504C0 (-VmBusUnlock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000217C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C00026B8 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0003EE0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0004418 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C00056F8 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006B34 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C00E1270 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E4064 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FAE40 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FCD20 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C020CF44 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkUnlock(__int64 a1, __int64 a2, __int64 a3)
{
  struct _D3DKMT_UNLOCK *v3; // rsi
  unsigned __int8 v4; // r14
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct _KTHREAD **v9; // rdi
  struct _KTHREAD **v10; // r8
  struct _D3DKMT_UNLOCK v11; // xmm0
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct DXGDEVICE *v14; // rsi
  __int64 v15; // rcx
  int v16; // edi
  struct _KEVENT *v17; // r15
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // r8
  struct DXGDEVICE *v23; // rdi
  unsigned int v24; // esi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  struct DXGTHREAD *Current; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // rdx
  struct _KEVENT *v36; // rcx
  __int64 v37; // rcx
  unsigned __int8 v38; // di
  __int64 v39; // r8
  unsigned __int8 v40; // di
  _QWORD *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  struct DXGDEVICE *v45; // [rsp+30h] [rbp-118h] BYREF
  struct DXGDEVICE *v46; // [rsp+38h] [rbp-110h] BYREF
  int v47; // [rsp+40h] [rbp-108h] BYREF
  __int64 v48; // [rsp+48h] [rbp-100h]
  char v49; // [rsp+50h] [rbp-F8h]
  struct _D3DKMT_UNLOCK v50; // [rsp+58h] [rbp-F0h] BYREF
  struct DXGDEVICE *v51; // [rsp+68h] [rbp-E0h] BYREF
  int v52; // [rsp+70h] [rbp-D8h]
  _BYTE v53[8]; // [rsp+80h] [rbp-C8h] BYREF
  char v54; // [rsp+88h] [rbp-C0h] BYREF
  DXGADAPTER *v55; // [rsp+98h] [rbp-B0h]
  char v56; // [rsp+A0h] [rbp-A8h]
  __int64 v57; // [rsp+A8h] [rbp-A0h]
  _BYTE v58[88]; // [rsp+C8h] [rbp-80h] BYREF

  v3 = (struct _D3DKMT_UNLOCK *)a1;
  v47 = -1;
  v48 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v49 = 1;
    v47 = 2012;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2012);
  }
  else
  {
    v49 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v47, 2012LL);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v9 = (struct _KTHREAD **)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v10 = (struct _KTHREAD **)*((_QWORD *)Current + 1)) == 0LL )
  {
    v10 = v9;
    if ( !v9 )
    {
      v30 = WdLogNewEntry5_WdError(v8, v7);
      *(_QWORD *)(v30 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v30);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v47, v31);
      if ( !v49 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
        return 3221225485LL;
      goto LABEL_51;
    }
  }
  if ( v4 )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (struct _D3DKMT_UNLOCK *)MmUserProbeAddress;
    v11 = *v3;
  }
  else
  {
    v11 = *v3;
  }
  v50 = v11;
  v45 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v46, v11.hDevice, v10, &v45);
  v14 = v45;
  if ( !v45 )
  {
    v34 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v34 + 24) = v11.hDevice;
    *(_QWORD *)(v34 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v34);
    if ( v46 && _InterlockedExchangeAdd64((volatile signed __int64 *)v46 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v46 + 2), v46);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v47, v35);
    if ( !v49 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225485LL;
LABEL_51:
    McTemplateK0q_EtwWriteTransfer(v32, &EventProfilerExit, v33, v47);
    return 3221225485LL;
  }
  v51 = v45;
  v15 = *(_QWORD *)(*((_QWORD *)v45 + 2) + 16LL);
  if ( *(int *)(v15 + 2328) >= 0x2000 || *(_BYTE *)(v15 + 2628) )
  {
    v16 = *((_DWORD *)DXGGLOBAL::GetGlobal(v15, v12) + 311);
    v52 = v16;
  }
  else
  {
    v16 = 0;
    v52 = 0;
  }
  v17 = (struct _KEVENT *)*((_QWORD *)v14 + 2);
  if ( *((_DWORD *)v14 + 108) == 2 )
  {
    if ( KeReadStateEvent(v17 + 5) )
      goto LABEL_17;
    v36 = v17 + 5;
  }
  else
  {
    if ( KeReadStateEvent(v17 + 4) )
      goto LABEL_17;
    v36 = v17 + 4;
  }
  KeWaitForSingleObject(v36, Executive, 0, 0, 0LL);
LABEL_17:
  KeEnterCriticalRegion();
  if ( v16 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v14 + 144, 0LL) )
      goto LABEL_19;
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL) + 104LL));
    v40 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v14 + 2) + 16LL));
    DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v14 + 144));
    if ( !v40 )
    {
LABEL_64:
      ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL) + 104LL, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_19;
    }
LABEL_63:
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v14 + 2) + 16LL));
    goto LABEL_64;
  }
  if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)v14 + 17), 0) )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL) + 104LL));
    v38 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v14 + 2) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q_EtwWriteTransfer(v37, &EventBlockThread, v39, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v14 + 17), 1u);
    if ( !v38 )
      goto LABEL_64;
    goto LABEL_63;
  }
LABEL_19:
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v53, (__int64)v14, 2, v18, 0);
  if ( v58[72] )
    COREACCESS::AcquireShared((COREACCESS *)v58, 0LL);
  if ( v56 )
  {
    v41 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v19);
    v41[3] = 275LL;
    v41[4] = 4LL;
    v41[5] = &v54;
    v41[6] = 0LL;
    v41[7] = 0LL;
    WdLogEvent5_WdCriticalError(v41);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v55 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v55 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v21, &EventBlockThread, v22, 72);
      KeWaitForSingleObject((char *)v55 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v55, 0LL);
  }
  v57 = 0LL;
  v56 = 1;
  if ( *((_DWORD *)v45 + 144) == 4 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v53);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v51);
    if ( v46 && _InterlockedExchangeAdd64((volatile signed __int64 *)v46 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v46 + 2), v46);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v47, v42);
    if ( v49 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v43, &EventProfilerExit, v44, v47);
    return 0LL;
  }
  else
  {
    v50.hDevice = 0;
    v23 = v45;
    v24 = DXGDEVICE::Unlock(v45, &v50, v4);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v53);
    if ( v52 )
      ExReleasePushLockSharedEx((char *)v23 + 144, 0LL);
    else
      ExReleaseResourceLite(*((PERESOURCE *)v23 + 17));
    KeLeaveCriticalRegion();
    if ( v46 && _InterlockedExchangeAdd64((volatile signed __int64 *)v46 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v46 + 2), v46);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v47, v25);
    if ( v49 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v26, &EventProfilerExit, v27, v47);
    }
    return v24;
  }
}
