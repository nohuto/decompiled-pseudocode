/*
 * XREFs of ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C019D6D0
 * Callers:
 *     ?DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@EEEPEAX@Z @ 0x1C0162184 (-DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@EEEPEAX@Z.c)
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX2@Z @ 0x1C0199960 (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC.c)
 *     DxgkDestroySynchronizationObject @ 0x1C019D6B0 (DxgkDestroySynchronizationObject.c)
 *     ?DxgkCddDestroySynchronizationObject@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@@Z @ 0x1C01DA7E0 (-DxgkCddDestroySynchronizationObject@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@@Z.c)
 *     DxgkOpenSyncObjectFromNtHandle @ 0x1C031DE90 (DxgkOpenSyncObjectFromNtHandle.c)
 *     ?VmBusDestroySyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C036C570 (-VmBusDestroySyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00096EC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C000BC60 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000E694 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000EDA8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000FB18 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C002B26C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C016E850 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C016ED94 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C018692C (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C019A7B8 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 */

__int64 __fastcall DxgkDestroySynchronizationObjectImpl(
        const struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *a1,
        int a2,
        __int64 a3)
{
  const struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *v4; // r15
  struct DXGSYNCOBJECT *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v12; // rbx
  __int64 v13; // rsi
  unsigned int hSyncObject; // r15d
  __int64 v15; // r14
  unsigned int v16; // ebx
  __int64 v17; // rcx
  __int64 v18; // r9
  int v19; // edx
  PERESOURCE *Global; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v24; // r9
  int v25; // edx
  struct _KEVENT *v26; // r13
  __int64 v27; // r9
  unsigned int v28; // edx
  __int64 v29; // r8
  int v30; // edx
  __int64 v31; // r8
  int v32; // edx
  __int64 v33; // r10
  int v34; // r8d
  struct DXGTHREAD *Current; // rax
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rcx
  __int64 v39; // r8
  struct _KEVENT *v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // r8
  int v43; // [rsp+50h] [rbp-158h] BYREF
  __int64 v44; // [rsp+58h] [rbp-150h]
  char v45; // [rsp+60h] [rbp-148h]
  unsigned int v46; // [rsp+68h] [rbp-140h]
  __int64 v47; // [rsp+70h] [rbp-138h] BYREF
  int v48; // [rsp+78h] [rbp-130h]
  _BYTE v49[24]; // [rsp+80h] [rbp-128h] BYREF
  _BYTE v50[24]; // [rsp+98h] [rbp-110h] BYREF
  _BYTE v51[32]; // [rsp+B0h] [rbp-F8h] BYREF
  char v52[8]; // [rsp+D0h] [rbp-D8h] BYREF
  char v53[64]; // [rsp+D8h] [rbp-D0h] BYREF
  _BYTE v54[88]; // [rsp+118h] [rbp-90h] BYREF

  v4 = a1;
  v43 = -1;
  v5 = 0LL;
  v44 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v45 = 1;
    v43 = 2042;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2042);
  }
  else
  {
    v45 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v43, 2042);
  CurrentProcess = PsGetCurrentProcess(v7, v6, v8, v9);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v12 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v13 = *((_QWORD *)Current + 3)) == 0 )
  {
    v13 = v12;
    if ( !v12 )
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
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
      if ( !v45 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
        return 3221225485LL;
      goto LABEL_71;
    }
  }
  if ( a2 )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (const struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *)MmUserProbeAddress;
    hSyncObject = v4->hSyncObject;
    v46 = hSyncObject;
  }
  else
  {
    hSyncObject = v4->hSyncObject;
    v46 = hSyncObject;
  }
  v15 = 0LL;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v49, (struct DXGPROCESS *)v13);
  v16 = (hSyncObject >> 6) & 0xFFFFFF;
  if ( v16 < *(_DWORD *)(v13 + 296)
    && (v24 = *(_QWORD *)(v13 + 280),
        v25 = *(_DWORD *)(v24 + 16LL * v16 + 8),
        ((hSyncObject >> 25) & 0x60) == (*(_BYTE *)(v24 + 16LL * v16 + 8) & 0x60))
    && (v25 & 0x2000) == 0
    && (v25 & 0x1F) == 0xB )
  {
    v17 = *(_QWORD *)(v24 + 16LL * v16);
  }
  else
  {
    v17 = 0LL;
  }
  if ( !v17 )
  {
LABEL_13:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v49);
    if ( !v15 )
    {
      DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
        (DXGHANDLETABLELOCKEXCLUSIVE *)v50,
        (struct DXGPROCESS *)v13);
      if ( v16 < *(_DWORD *)(v13 + 296) )
      {
        v18 = *(_QWORD *)(v13 + 280);
        v19 = *(_DWORD *)(v18 + 16LL * v16 + 8);
        if ( ((hSyncObject >> 25) & 0x60) == (*(_BYTE *)(v18 + 16LL * v16 + 8) & 0x60)
          && (v19 & 0x2000) == 0
          && (v19 & 0x1F) != 0 )
        {
          if ( (v19 & 0x1F) == 8 )
          {
            v5 = *(struct DXGSYNCOBJECT **)(v18 + 16LL * v16);
          }
          else
          {
            WdLogSingleEntry1(2LL, 267LL);
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
          }
        }
      }
      if ( v5 )
      {
        if ( v16 < *(_DWORD *)(v13 + 296) )
        {
          v31 = *(_QWORD *)(v13 + 280);
          v32 = *(_DWORD *)(v31 + 16LL * v16 + 8);
          if ( ((hSyncObject >> 25) & 0x60) == (*(_BYTE *)(v31 + 16LL * v16 + 8) & 0x60)
            && (v32 & 0x2000) == 0
            && (v32 & 0x1F) != 0 )
          {
            *(_DWORD *)(v31 + 16LL * ((hSyncObject >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
          }
        }
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v50);
        Global = (PERESOURCE *)DXGGLOBAL_GetGlobal();
        DXGGLOBAL::DestroySyncObject(Global, v5, hSyncObject);
        goto LABEL_23;
      }
      WdLogSingleEntry2(3LL, hSyncObject, -1073741811LL);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v50);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
      if ( !v45 )
        return 3221225485LL;
      v36 = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
        return 3221225485LL;
LABEL_71:
      McTemplateK0q_EtwWriteTransfer(v36, &EventProfilerExit, v37, v43);
      return 3221225485LL;
    }
    v47 = v15;
    v26 = *(struct _KEVENT **)(v15 + 16);
    if ( *(_DWORD *)(v15 + 432) == 2 )
    {
      if ( KeReadStateEvent(v26 + 5) )
        goto LABEL_33;
      v40 = v26 + 5;
    }
    else
    {
      if ( KeReadStateEvent(v26 + 4) )
      {
LABEL_33:
        KeEnterCriticalRegion();
        if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v15 + 136), 0) )
        {
          DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v15 + 16) + 16LL));
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v41, (const EVENT_DESCRIPTOR *)"g", v42, 40);
          ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v15 + 136), 1u);
          DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v15 + 16) + 16LL));
        }
        v48 = 1;
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v52, v15, 2, v27, 0);
        if ( v54[72] )
          COREACCESS::AcquireShared((COREACCESS *)v54, 0LL);
        COREACCESS::AcquireShared((COREACCESS *)v53, 0LL);
        DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
          (DXGHANDLETABLELOCKEXCLUSIVE *)v51,
          (struct DXGPROCESS *)v13);
        v28 = *(_DWORD *)(v13 + 296);
        if ( v16 < v28 )
        {
          v33 = *(_QWORD *)(v13 + 280);
          v34 = *(_DWORD *)(v33 + 16LL * v16 + 8);
          if ( ((hSyncObject >> 25) & 0x60) == (*(_BYTE *)(v33 + 16LL * v16 + 8) & 0x60)
            && (v34 & 0x2000) == 0
            && (v34 & 0x1F) == 0xB )
          {
            v5 = *(struct DXGSYNCOBJECT **)(v33 + 16LL * v16);
          }
        }
        if ( !v5 )
        {
          WdLogSingleEntry1(3LL, hSyncObject);
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v51);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v52);
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v47);
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v15 + 16), (struct DXGDEVICE *)v15);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
          if ( !v45 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
            return 0LL;
LABEL_85:
          McTemplateK0q_EtwWriteTransfer(v21, &EventProfilerExit, v22, v43);
          return 0LL;
        }
        if ( v16 < v28 )
        {
          v29 = *(_QWORD *)(v13 + 280);
          v30 = *(_DWORD *)(v29 + 16LL * v16 + 8);
          if ( ((hSyncObject >> 25) & 0x60) == (*(_BYTE *)(v29 + 16LL * v16 + 8) & 0x60)
            && (v30 & 0x2000) == 0
            && (v30 & 0x1F) != 0 )
          {
            *(_DWORD *)(v29 + 16LL * ((hSyncObject >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
          }
        }
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v51);
        DXGDEVICESYNCOBJECT::~DXGDEVICESYNCOBJECT(v5);
        ExFreePoolWithTag(v5, 0);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v52);
        ExReleaseResourceLite(*(PERESOURCE *)(v15 + 136));
        KeLeaveCriticalRegion();
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v15 + 16), (struct DXGDEVICE *)v15);
LABEL_23:
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
        if ( !v45 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
          return 0LL;
        goto LABEL_85;
      }
      v40 = v26 + 4;
    }
    KeWaitForSingleObject(v40, Executive, 0, 0, 0LL);
    goto LABEL_33;
  }
  if ( (*(_BYTE *)(v17 + 92) & 2) != 0 )
  {
    v15 = *(_QWORD *)(v17 + 16);
    _InterlockedIncrement64((volatile signed __int64 *)(v15 + 64));
    hSyncObject = v46;
    goto LABEL_13;
  }
  WdLogSingleEntry1(3LL, hSyncObject);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v49);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
  if ( v45 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v38, &EventProfilerExit, v39, v43);
  return 3221225506LL;
}
