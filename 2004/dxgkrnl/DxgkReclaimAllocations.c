/*
 * XREFs of DxgkReclaimAllocations @ 0x1C0102900
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000217C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C00026B8 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0003EE0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0003FB0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0004418 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C00056F8 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006B34 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E4064 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FAE40 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FCD20 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@E@Z @ 0x1C00FF7D0 (-ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@E@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C020CF44 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkReclaimAllocations(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct _KTHREAD **v10; // rsi
  struct _KTHREAD **v11; // r14
  unsigned __int8 v12; // r15
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct DXGDEVICE *v16; // rsi
  __int64 v17; // rcx
  int v18; // edi
  struct _KEVENT *v19; // r14
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // r8
  struct DXGDEVICE *v25; // rdi
  unsigned int v26; // esi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  struct DXGTHREAD *Current; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rax
  __int64 v37; // rdx
  struct _KEVENT *v38; // rcx
  __int64 v39; // rcx
  unsigned __int8 v40; // di
  __int64 v41; // r8
  unsigned __int8 v42; // di
  _QWORD *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  struct DXGDEVICE *v51; // [rsp+30h] [rbp-158h] BYREF
  struct DXGDEVICE *v52; // [rsp+38h] [rbp-150h] BYREF
  int v53; // [rsp+40h] [rbp-148h] BYREF
  __int64 v54; // [rsp+48h] [rbp-140h]
  char v55; // [rsp+50h] [rbp-138h]
  struct DXGDEVICE *v56; // [rsp+58h] [rbp-130h] BYREF
  int v57; // [rsp+60h] [rbp-128h]
  unsigned int v58[4]; // [rsp+68h] [rbp-120h]
  __int128 v59; // [rsp+78h] [rbp-110h]
  __int64 v60; // [rsp+88h] [rbp-100h]
  _D3DKMT_RECLAIMALLOCATIONS2 v61; // [rsp+90h] [rbp-F8h] BYREF
  _BYTE v62[8]; // [rsp+C0h] [rbp-C8h] BYREF
  _BYTE v63[16]; // [rsp+C8h] [rbp-C0h] BYREF
  DXGADAPTER *v64; // [rsp+D8h] [rbp-B0h]
  char v65; // [rsp+E0h] [rbp-A8h]
  __int64 v66; // [rsp+E8h] [rbp-A0h]
  _BYTE v67[16]; // [rsp+108h] [rbp-80h] BYREF
  __int64 v68; // [rsp+118h] [rbp-70h]
  __int64 v69; // [rsp+148h] [rbp-40h]
  char v70; // [rsp+150h] [rbp-38h]

  v3 = a1;
  v53 = -1;
  v54 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v55 = 1;
    v53 = 2071;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2071);
  }
  else
  {
    v55 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v53, 2071LL);
  CurrentProcess = PsGetCurrentProcess(v5, v4);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v10 = (struct _KTHREAD **)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent(v9, v8)) == 0LL
    || (v11 = (struct _KTHREAD **)*((_QWORD *)Current + 1)) == 0LL )
  {
    v11 = v10;
    if ( !v10 )
    {
      v32 = WdLogNewEntry5_WdError(v9, v8);
      *(_QWORD *)(v32 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v32);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v53, v33);
      if ( !v55 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
        return 3221225485LL;
      goto LABEL_46;
    }
  }
  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1 )
  {
    v12 = 1;
    if ( v3 >= MmUserProbeAddress )
      v3 = MmUserProbeAddress;
    *(_OWORD *)v58 = *(_OWORD *)v3;
    v59 = *(_OWORD *)(v3 + 16);
    v60 = *(_QWORD *)(v3 + 32);
  }
  else
  {
    v12 = 0;
    *(_OWORD *)v58 = *(_OWORD *)v3;
    v59 = *(_OWORD *)(v3 + 16);
    v60 = *(_QWORD *)(v3 + 32);
  }
  v61.hPagingQueue = 0;
  v61.NumAllocations = v60;
  v61.pResources = *(D3DKMT_HANDLE **)&v58[2];
  *(_OWORD *)&v61.HandleList = v59;
  v61.PagingFenceValue = 0LL;
  v51 = 0LL;
  v13 = v58[0];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v52, v58[0], v11, &v51);
  v16 = v51;
  if ( !v51 )
  {
    v36 = WdLogNewEntry5_WdError(v15, v14);
    *(_QWORD *)(v36 + 24) = v13;
    *(_QWORD *)(v36 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v36);
    if ( v52 && _InterlockedExchangeAdd64((volatile signed __int64 *)v52 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v52 + 2), v52);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v53, v37);
    if ( !v55 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225485LL;
LABEL_46:
    McTemplateK0q_EtwWriteTransfer(v34, &EventProfilerExit, v35, v53);
    return 3221225485LL;
  }
  v56 = v51;
  v17 = *(_QWORD *)(*((_QWORD *)v51 + 2) + 16LL);
  if ( *(int *)(v17 + 2328) >= 0x2000 || *(_BYTE *)(v17 + 2628) )
  {
    v18 = *((_DWORD *)DXGGLOBAL::GetGlobal(v17, v14) + 311);
    v57 = v18;
  }
  else
  {
    v18 = 0;
    v57 = 0;
  }
  v19 = (struct _KEVENT *)*((_QWORD *)v16 + 2);
  if ( *((_DWORD *)v16 + 108) == 2 )
  {
    if ( KeReadStateEvent(v19 + 5) )
      goto LABEL_16;
    v38 = v19 + 5;
  }
  else
  {
    if ( KeReadStateEvent(v19 + 4) )
      goto LABEL_16;
    v38 = v19 + 4;
  }
  KeWaitForSingleObject(v38, Executive, 0, 0, 0LL);
LABEL_16:
  KeEnterCriticalRegion();
  if ( !v18 )
  {
    if ( ExAcquireResourceExclusiveLite(*((PERESOURCE *)v16 + 17), 0) )
      goto LABEL_18;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL) + 104LL));
    v40 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v16 + 2) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q_EtwWriteTransfer(v39, &EventBlockThread, v41, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v16 + 17), 1u);
    if ( !v40 )
      goto LABEL_61;
    goto LABEL_60;
  }
  if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v16 + 144, 0LL) )
    goto LABEL_18;
  KeLeaveCriticalRegion();
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL) + 104LL));
  v42 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v16 + 2) + 16LL));
  DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v16 + 144));
  if ( v42 )
LABEL_60:
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v16 + 2) + 16LL));
LABEL_61:
  ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL) + 104LL, 0LL);
  KeLeaveCriticalRegion();
LABEL_18:
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v62, (__int64)v16, 0, v20, 0);
  if ( v70 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v67, 0LL);
    v22 = *(unsigned int *)(v68 + 200);
    if ( (_DWORD)v22 != 1 )
      goto LABEL_69;
  }
  if ( v65 )
  {
    v43 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v22, v21);
    v43[3] = 275LL;
    v43[4] = 4LL;
    v43[5] = v63;
    v43[6] = 0LL;
    v43[7] = 0LL;
    WdLogEvent5_WdCriticalError(v43);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v64 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v64 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v23, &EventBlockThread, v24, 72);
      KeWaitForSingleObject((char *)v64 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v64, 0LL);
  }
  v66 = 0LL;
  v65 = 1;
  if ( *(_DWORD *)(v69 + 576) == 1 )
  {
    v25 = v51;
    v26 = DXGDEVICE::ReclaimAllocations(v51, 0LL, &v61, v12);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v62);
    if ( v57 )
      ExReleasePushLockSharedEx((char *)v25 + 144, 0LL);
    else
      ExReleaseResourceLite(*((PERESOURCE *)v25 + 17));
    KeLeaveCriticalRegion();
    if ( v52 && _InterlockedExchangeAdd64((volatile signed __int64 *)v52 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v52 + 2), v52);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v53, v27);
    if ( v55 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v28, &EventProfilerExit, v29, v53);
    }
    return v26;
  }
  COREACCESS::Release((COREACCESS *)v63);
  if ( v70 )
LABEL_69:
    COREACCESS::Release((COREACCESS *)v67);
  v47 = WdLogNewEntry5_WdWarning(v45, v44, v46);
  *(_QWORD *)(v47 + 24) = v51;
  *(_QWORD *)(v47 + 32) = -1073741130LL;
  WdLogEvent5_WdWarning(v47);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v62);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v56);
  if ( v52 && _InterlockedExchangeAdd64((volatile signed __int64 *)v52 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v52 + 2), v52);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v53, v48);
  if ( v55 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v49, &EventProfilerExit, v50, v53);
  return 3221226166LL;
}
