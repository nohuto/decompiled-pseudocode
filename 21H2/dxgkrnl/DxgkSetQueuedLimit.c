/*
 * XREFs of DxgkSetQueuedLimit @ 0x1C01C60A0
 * Callers:
 *     ?VmBusSetQueuedLimit@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C03809F0 (-VmBusSetQueuedLimit@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00096EC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0009904 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000BB70 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C000BC60 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000E694 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C016E850 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C016ED94 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C017EB60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?SetQueuedPresentLimit@DXGDEVICE@@QEAAJI@Z @ 0x1C01C6458 (-SetQueuedPresentLimit@DXGDEVICE@@QEAAJI@Z.c)
 *     ?VmBusSendSetQueuedLimit@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_SETQUEUEDLIMIT@@@Z @ 0x1C037C910 (-VmBusSendSetQueuedLimit@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3.c)
 */

__int64 __fastcall DxgkSetQueuedLimit(__int64 a1, __int64 a2, __int64 a3)
{
  _D3DKMT_SETQUEUEDLIMIT *v3; // r14
  bool v4; // r13
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct _KTHREAD **v11; // rdi
  struct _KTHREAD **v12; // r12
  _D3DKMT_SETQUEUEDLIMIT *v13; // r15
  _D3DKMT_SETQUEUEDLIMIT *v14; // rcx
  struct DXGDEVICE *v15; // rdi
  struct _KEVENT *v16; // rsi
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // r8
  struct DXGDEVICE *v20; // rsi
  D3DKMT_QUEUEDLIMIT_TYPE Type; // eax
  int v22; // eax
  unsigned int v23; // edi
  __int64 v24; // rcx
  __int64 v25; // r8
  struct DXGTHREAD *Current; // rax
  struct _KEVENT *v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // r8
  struct DXGDEVICE *v33; // [rsp+50h] [rbp-128h] BYREF
  struct DXGDEVICE *v34; // [rsp+58h] [rbp-120h] BYREF
  int v35; // [rsp+60h] [rbp-118h] BYREF
  __int64 v36; // [rsp+68h] [rbp-110h]
  char v37; // [rsp+70h] [rbp-108h]
  struct DXGDEVICE *v38; // [rsp+78h] [rbp-100h] BYREF
  int v39; // [rsp+80h] [rbp-F8h]
  _D3DKMT_SETQUEUEDLIMIT v40; // [rsp+88h] [rbp-F0h] BYREF
  _BYTE v41[8]; // [rsp+A0h] [rbp-D8h] BYREF
  _BYTE v42[16]; // [rsp+A8h] [rbp-D0h] BYREF
  DXGADAPTER *v43; // [rsp+B8h] [rbp-C0h]
  char v44; // [rsp+C0h] [rbp-B8h]
  __int64 v45; // [rsp+C8h] [rbp-B0h]
  _BYTE v46[16]; // [rsp+E8h] [rbp-90h] BYREF
  __int64 v47; // [rsp+F8h] [rbp-80h]
  __int64 v48; // [rsp+128h] [rbp-50h]
  char v49; // [rsp+130h] [rbp-48h]

  v3 = (_D3DKMT_SETQUEUEDLIMIT *)a1;
  v35 = -1;
  v36 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v37 = 1;
    v35 = 2035;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2035);
  }
  else
  {
    v37 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v35, 2035);
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
      v23 = -1073741811;
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
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
      if ( !v37 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
        return v23;
      goto LABEL_77;
    }
  }
  v40 = 0LL;
  v13 = &v40;
  if ( v4 )
  {
    v14 = v3;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v14 = (_D3DKMT_SETQUEUEDLIMIT *)MmUserProbeAddress;
    v40 = *v14;
  }
  else
  {
    v13 = v3;
  }
  v33 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v34, v13->hDevice, v12, &v33);
  v15 = v33;
  if ( !v33 )
  {
    v23 = -1073741811;
    WdLogSingleEntry2(2LL, v13->hDevice, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v13->hDevice,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( v34 && _InterlockedExchangeAdd64((volatile signed __int64 *)v34 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v34 + 2), v34);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
    if ( !v37 )
      return v23;
    v24 = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return v23;
LABEL_77:
    McTemplateK0q_EtwWriteTransfer(v24, &EventProfilerExit, v25, v35);
    return v23;
  }
  v38 = v33;
  v16 = (struct _KEVENT *)*((_QWORD *)v33 + 2);
  if ( *((_DWORD *)v33 + 108) == 2 )
  {
    if ( KeReadStateEvent(v16 + 5) )
      goto LABEL_13;
    v28 = v16 + 5;
LABEL_54:
    KeWaitForSingleObject(v28, Executive, 0, 0, 0LL);
    goto LABEL_13;
  }
  if ( !KeReadStateEvent(v16 + 4) )
  {
    v28 = v16 + 4;
    goto LABEL_54;
  }
LABEL_13:
  KeEnterCriticalRegion();
  if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)v15 + 17), 0) )
  {
    DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v15 + 2) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0q_EtwWriteTransfer(v29, (const EVENT_DESCRIPTOR *)"g", v30, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v15 + 17), 1u);
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v15 + 2) + 16LL));
  }
  v39 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v41, (__int64)v15, 2, v17, 0);
  if ( v49 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v46, 0LL);
    if ( *(_DWORD *)(v47 + 200) != 1 )
      goto LABEL_66;
  }
  if ( v44 )
    WdLogSingleEntry5(0LL, 275LL, 4LL, v42, 0LL, 0LL);
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v43 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v43 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v18, (const EVENT_DESCRIPTOR *)"g", v19, 72);
      KeWaitForSingleObject((char *)v43 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v43, 0LL);
  }
  v45 = 0LL;
  v44 = 1;
  if ( *(_DWORD *)(v48 + 576) == 1 )
  {
    v20 = v33;
    if ( (*((_BYTE *)v33 + 1869) & 1) != 0 )
    {
      v22 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSetQueuedLimit(
              (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)v15 + 2) + 16LL) + 4344LL),
              (struct DXGPROCESS *)v12,
              v33,
              v13);
    }
    else
    {
      Type = v13->Type;
      if ( Type == D3DKMT_SET_QUEUEDLIMIT_PRESENT )
      {
        v22 = DXGDEVICE::SetQueuedPresentLimit(v33, v13->QueuedPresentLimit);
      }
      else
      {
        if ( Type != D3DKMT_GET_QUEUEDLIMIT_PRESENT )
        {
          v23 = -1073741811;
          goto LABEL_30;
        }
        v22 = (*(__int64 (__fastcall **)(_QWORD, union _D3DKMT_SETQUEUEDLIMIT::$A93923BD602231B9E75A21ABFFB5534A *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v15 + 2) + 624LL) + 8LL) + 176LL))(
                *((_QWORD *)v33 + 96),
                &v13->8);
      }
    }
    v23 = v22;
    if ( v22 >= 0 && v4 )
    {
      if ( (unsigned __int64)v3 >= MmUserProbeAddress )
        v3 = (_D3DKMT_SETQUEUEDLIMIT *)MmUserProbeAddress;
      *v3 = *v13;
    }
LABEL_30:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v41);
    ExReleaseResourceLite(*((PERESOURCE *)v20 + 17));
    KeLeaveCriticalRegion();
    if ( v34 && _InterlockedExchangeAdd64((volatile signed __int64 *)v34 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v34 + 2), v34);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
    if ( !v37 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return v23;
    goto LABEL_77;
  }
  COREACCESS::Release((COREACCESS *)v42);
  if ( v49 )
LABEL_66:
    COREACCESS::Release((COREACCESS *)v46);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v41);
  DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v38);
  if ( v34 && _InterlockedExchangeAdd64((volatile signed __int64 *)v34 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v34 + 2), v34);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
  if ( v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v31, &EventProfilerExit, v32, v35);
  return 3221226166LL;
}
