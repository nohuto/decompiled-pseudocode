/*
 * XREFs of DxgkSetQueuedLimit @ 0x1C0151B00
 * Callers:
 *     ?VmBusSetQueuedLimit@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C024EB90 (-VmBusSetQueuedLimit@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000217C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C00026B8 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0003EE0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0003FB0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00041C0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C00056F8 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006B34 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E4064 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FAE40 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FCD20 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?SetQueuedPresentLimit@DXGDEVICE@@QEAAJI@Z @ 0x1C0151EBC (-SetQueuedPresentLimit@DXGDEVICE@@QEAAJI@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C020CF44 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?VmBusSendSetQueuedLimit@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_SETQUEUEDLIMIT@@@Z @ 0x1C024BB34 (-VmBusSendSetQueuedLimit@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3.c)
 */

__int64 __fastcall DxgkSetQueuedLimit(__int64 a1, __int64 a2, __int64 a3)
{
  _D3DKMT_SETQUEUEDLIMIT *v3; // r14
  bool v4; // r13
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct _KTHREAD **v11; // rdi
  struct _KTHREAD **v12; // r12
  _D3DKMT_SETQUEUEDLIMIT *v13; // r15
  _D3DKMT_SETQUEUEDLIMIT *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct DXGDEVICE *v17; // rdi
  struct _KEVENT *v18; // rsi
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // r8
  struct DXGDEVICE *v24; // rsi
  D3DKMT_QUEUEDLIMIT_TYPE Type; // eax
  int v26; // eax
  unsigned int v27; // edi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  struct DXGTHREAD *Current; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  bool v35; // zf
  __int64 v36; // rax
  __int64 v37; // rdx
  struct _KEVENT *v38; // rcx
  __int64 v39; // rcx
  unsigned __int8 v40; // si
  __int64 v41; // r8
  _QWORD *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  struct DXGDEVICE *v46; // [rsp+30h] [rbp-128h] BYREF
  struct DXGDEVICE *v47; // [rsp+38h] [rbp-120h] BYREF
  int v48; // [rsp+40h] [rbp-118h] BYREF
  __int64 v49; // [rsp+48h] [rbp-110h]
  char v50; // [rsp+50h] [rbp-108h]
  struct DXGDEVICE *v51; // [rsp+58h] [rbp-100h] BYREF
  int v52; // [rsp+60h] [rbp-F8h]
  _D3DKMT_SETQUEUEDLIMIT v53; // [rsp+68h] [rbp-F0h] BYREF
  _BYTE v54[8]; // [rsp+80h] [rbp-D8h] BYREF
  _BYTE v55[16]; // [rsp+88h] [rbp-D0h] BYREF
  DXGADAPTER *v56; // [rsp+98h] [rbp-C0h]
  char v57; // [rsp+A0h] [rbp-B8h]
  __int64 v58; // [rsp+A8h] [rbp-B0h]
  _BYTE v59[16]; // [rsp+C8h] [rbp-90h] BYREF
  __int64 v60; // [rsp+D8h] [rbp-80h]
  __int64 v61; // [rsp+108h] [rbp-50h]
  char v62; // [rsp+110h] [rbp-48h]

  v3 = (_D3DKMT_SETQUEUEDLIMIT *)a1;
  v48 = -1;
  v49 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v50 = 1;
    v48 = 2035;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2035);
  }
  else
  {
    v50 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v48, 2035LL);
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
      v33 = WdLogNewEntry5_WdError(v10, v9);
      v27 = -1073741811;
      *(_QWORD *)(v33 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v33);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48, v34);
      v35 = v50 == 0;
      goto LABEL_47;
    }
  }
  v53 = 0LL;
  v13 = &v53;
  if ( v4 )
  {
    v14 = v3;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v14 = (_D3DKMT_SETQUEUEDLIMIT *)MmUserProbeAddress;
    v53 = *v14;
  }
  else
  {
    v13 = v3;
  }
  v46 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v47, v13->hDevice, v12, &v46);
  v17 = v46;
  if ( !v46 )
  {
    v36 = WdLogNewEntry5_WdError(v16, v15);
    *(_QWORD *)(v36 + 24) = v13->hDevice;
    v27 = -1073741811;
    *(_QWORD *)(v36 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v36);
    if ( v47 && _InterlockedExchangeAdd64((volatile signed __int64 *)v47 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v47 + 2), v47);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48, v37);
    v35 = v50 == 0;
LABEL_47:
    if ( v35 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return v27;
    goto LABEL_78;
  }
  v51 = v46;
  v18 = (struct _KEVENT *)*((_QWORD *)v46 + 2);
  if ( *((_DWORD *)v46 + 108) == 2 )
  {
    if ( KeReadStateEvent(v18 + 5) )
      goto LABEL_13;
    v38 = v18 + 5;
LABEL_53:
    KeWaitForSingleObject(v38, Executive, 0, 0, 0LL);
    goto LABEL_13;
  }
  if ( !KeReadStateEvent(v18 + 4) )
  {
    v38 = v18 + 4;
    goto LABEL_53;
  }
LABEL_13:
  KeEnterCriticalRegion();
  if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)v17 + 17), 0) )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL) + 104LL));
    v40 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v17 + 2) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q_EtwWriteTransfer(v39, &EventBlockThread, v41, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v17 + 17), 1u);
    if ( v40 )
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v17 + 2) + 16LL));
    ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL) + 104LL, 0LL);
    KeLeaveCriticalRegion();
  }
  v52 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v54, (__int64)v17, 2, v19, 0);
  if ( v62 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v59, 0LL);
    v21 = *(unsigned int *)(v60 + 200);
    if ( (_DWORD)v21 != 1 )
      goto LABEL_67;
  }
  if ( v57 )
  {
    v42 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v21, v20);
    v42[3] = 275LL;
    v42[4] = 4LL;
    v42[5] = v55;
    v42[6] = 0LL;
    v42[7] = 0LL;
    WdLogEvent5_WdCriticalError(v42);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v56 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v56 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v22, &EventBlockThread, v23, 72);
      KeWaitForSingleObject((char *)v56 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v56, 0LL);
  }
  v58 = 0LL;
  v57 = 1;
  if ( *(_DWORD *)(v61 + 576) == 1 )
  {
    v24 = v46;
    if ( (*((_BYTE *)v46 + 1869) & 1) != 0 )
    {
      v26 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSetQueuedLimit(
              (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL) + 4240LL),
              (struct DXGPROCESS *)v12,
              v46,
              v13);
    }
    else
    {
      Type = v13->Type;
      if ( Type == D3DKMT_SET_QUEUEDLIMIT_PRESENT )
      {
        v26 = DXGDEVICE::SetQueuedPresentLimit(v46, v13->QueuedPresentLimit);
      }
      else
      {
        if ( Type != D3DKMT_GET_QUEUEDLIMIT_PRESENT )
        {
          v27 = -1073741811;
          goto LABEL_30;
        }
        v26 = (*(__int64 (__fastcall **)(_QWORD, union _D3DKMT_SETQUEUEDLIMIT::$A93923BD602231B9E75A21ABFFB5534A *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v17 + 2) + 616LL) + 8LL) + 176LL))(
                *((_QWORD *)v46 + 96),
                &v13->8);
      }
    }
    v27 = v26;
    if ( v26 >= 0 && v4 )
    {
      if ( (unsigned __int64)v3 >= MmUserProbeAddress )
        v3 = (_D3DKMT_SETQUEUEDLIMIT *)MmUserProbeAddress;
      *v3 = *v13;
    }
LABEL_30:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v54);
    ExReleaseResourceLite(*((PERESOURCE *)v24 + 17));
    KeLeaveCriticalRegion();
    if ( v47 && _InterlockedExchangeAdd64((volatile signed __int64 *)v47 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v47 + 2), v47);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48, v28);
    if ( !v50 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return v27;
LABEL_78:
    McTemplateK0q_EtwWriteTransfer(v29, &EventProfilerExit, v30, v48);
    return v27;
  }
  COREACCESS::Release((COREACCESS *)v55);
  if ( v62 )
LABEL_67:
    COREACCESS::Release((COREACCESS *)v59);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v54);
  DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v51);
  if ( v47 && _InterlockedExchangeAdd64((volatile signed __int64 *)v47 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v47 + 2), v47);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48, v43);
  if ( v50 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v44, &EventProfilerExit, v45, v48);
  return 3221226166LL;
}
