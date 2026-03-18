/*
 * XREFs of DxgkReclaimAllocations2 @ 0x1C01CC650
 * Callers:
 *     ?VmBusReclaimAllocations@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0373550 (-VmBusReclaimAllocations@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000BB70 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C000BC60 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000E694 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C000EF98 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z @ 0x1C001DB14 (-Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ @ 0x1C002BAC8 (-ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C016E850 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C016ED94 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C017EB60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@E@Z @ 0x1C01CCAA0 (-ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@E@Z.c)
 */

__int64 __fastcall DxgkReclaimAllocations2(struct _D3DKMT_RECLAIMALLOCATIONS2 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v10; // rbx
  struct DXGPROCESS *v11; // rdi
  unsigned __int8 v12; // si
  struct _D3DKMT_RECLAIMALLOCATIONS2 *v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rcx
  int v16; // edi
  struct _KEVENT *v17; // r15
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // edi
  _QWORD *p_PagingFenceValue; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  struct DXGTHREAD *Current; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  struct _KEVENT *v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r8
  int v33; // [rsp+50h] [rbp-138h] BYREF
  __int64 v34; // [rsp+58h] [rbp-130h]
  char v35; // [rsp+60h] [rbp-128h]
  struct DXGPAGINGQUEUE *v36; // [rsp+68h] [rbp-120h] BYREF
  DXGPAGINGQUEUE *v37; // [rsp+70h] [rbp-118h] BYREF
  __int64 v38; // [rsp+78h] [rbp-110h] BYREF
  int v39; // [rsp+80h] [rbp-108h]
  struct _D3DKMT_RECLAIMALLOCATIONS2 v40; // [rsp+88h] [rbp-100h] BYREF
  __int64 v41; // [rsp+B0h] [rbp-D8h]
  _BYTE v42[8]; // [rsp+C0h] [rbp-C8h] BYREF
  _BYTE v43[16]; // [rsp+C8h] [rbp-C0h] BYREF
  DXGADAPTER *v44; // [rsp+D8h] [rbp-B0h]
  char v45; // [rsp+E0h] [rbp-A8h]
  __int64 v46; // [rsp+E8h] [rbp-A0h]
  _BYTE v47[16]; // [rsp+108h] [rbp-80h] BYREF
  __int64 v48; // [rsp+118h] [rbp-70h]
  __int64 v49; // [rsp+148h] [rbp-40h]
  char v50; // [rsp+150h] [rbp-38h]

  v33 = -1;
  v34 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v35 = 1;
    v33 = 2071;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2071);
  }
  else
  {
    v35 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v33, 2071);
  CurrentProcess = PsGetCurrentProcess(v5, v4, v6, v7);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v10 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v11 = (struct DXGPROCESS *)*((_QWORD *)Current + 3)) == 0LL )
  {
    v11 = v10;
    if ( !v10 )
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
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
      if ( !v35 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
        return 3221225485LL;
      goto LABEL_49;
    }
  }
  v12 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  if ( v12 )
  {
    v13 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v13 = (struct _D3DKMT_RECLAIMALLOCATIONS2 *)MmUserProbeAddress;
    v40 = *v13;
  }
  else
  {
    v40 = *a1;
  }
  v36 = 0LL;
  DXGPAGINGQUEUEBYHANDLE::Open((DXGPAGINGQUEUEBYHANDLE *)&v37, v40.hPagingQueue, v11, &v36, 1);
  if ( !v36 )
  {
    WdLogSingleEntry2(3LL, v40.hPagingQueue, -1073741811LL);
    if ( v37 )
      DXGPAGINGQUEUE::ReleaseReference(v37);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
    if ( !v35 )
      return 3221225485LL;
    v27 = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
LABEL_49:
    McTemplateK0q_EtwWriteTransfer(v27, &EventProfilerExit, v28, v33);
    return 3221225485LL;
  }
  v14 = *((_QWORD *)v36 + 2);
  v41 = v14;
  v38 = v14;
  v15 = *(_QWORD *)(*(_QWORD *)(v14 + 16) + 16LL);
  if ( *(int *)(v15 + 2424) >= 0x2000 || *(_BYTE *)(v15 + 2724) )
  {
    v16 = *((_DWORD *)DXGGLOBAL_GetGlobal() + 347);
    v39 = v16;
  }
  else
  {
    v16 = 0;
    v39 = 0;
  }
  v17 = *(struct _KEVENT **)(v14 + 16);
  if ( *(_DWORD *)(v14 + 432) == 2 )
  {
    if ( KeReadStateEvent(v17 + 5) )
      goto LABEL_15;
    v29 = v17 + 5;
LABEL_56:
    KeWaitForSingleObject(v29, Executive, 0, 0, 0LL);
    goto LABEL_15;
  }
  if ( !KeReadStateEvent(v17 + 4) )
  {
    v29 = v17 + 4;
    goto LABEL_56;
  }
LABEL_15:
  KeEnterCriticalRegion();
  if ( v16 )
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v14 + 144, 0LL) )
    {
      KeLeaveCriticalRegion();
      KeEnterCriticalRegion();
      DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v14 + 16) + 16LL));
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v14 + 144));
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v14 + 16) + 16LL));
      KeLeaveCriticalRegion();
    }
  }
  else if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v14 + 136), 0) )
  {
    DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v14 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0q_EtwWriteTransfer(v30, (const EVENT_DESCRIPTOR *)"g", v31, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v14 + 136), 1u);
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v14 + 16) + 16LL));
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v42, v14, 0, v18, 0);
  if ( v50 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v47, 0LL);
    if ( *(_DWORD *)(v48 + 200) != 1 )
      goto LABEL_69;
  }
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
  if ( *(_DWORD *)(v49 + 576) == 1 )
  {
    v21 = DXGDEVICE::ReclaimAllocations((DXGDEVICE *)v14, v36, &v40, v12);
    if ( v21 >= 0 )
    {
      if ( v12 )
      {
        p_PagingFenceValue = &a1->PagingFenceValue;
        if ( (unsigned __int64)&a1->PagingFenceValue >= MmUserProbeAddress )
          p_PagingFenceValue = (_QWORD *)MmUserProbeAddress;
        *p_PagingFenceValue = v40.PagingFenceValue;
      }
      else
      {
        a1->PagingFenceValue = v40.PagingFenceValue;
      }
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v42);
    if ( v39 )
      ExReleasePushLockSharedEx(v14 + 144, 0LL);
    else
      ExReleaseResourceLite(*(PERESOURCE *)(v14 + 136));
    KeLeaveCriticalRegion();
    if ( v37 )
      DXGPAGINGQUEUE::ReleaseReference(v37);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
    if ( v35 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v33);
    }
    return (unsigned int)v21;
  }
  COREACCESS::Release((COREACCESS *)v43);
  if ( v50 )
LABEL_69:
    COREACCESS::Release((COREACCESS *)v47);
  WdLogSingleEntry2(3LL, v14, -1073741130LL);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v42);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v38);
  if ( v37 )
    DXGPAGINGQUEUE::ReleaseReference(v37);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
  if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v32, v33);
  return 3221226166LL;
}
