/*
 * XREFs of ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX2@Z @ 0x1C0199960
 * Callers:
 *     DxgkCreateSynchronizationObject @ 0x1C019AAF0 (DxgkCreateSynchronizationObject.c)
 *     ?DxgkCddCreateSynchronizationObject@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@@Z @ 0x1C01DE3E0 (-DxgkCddCreateSynchronizationObject@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@@Z.c)
 *     DxgkCreateSynchronizationObjectInternal @ 0x1C0342B1C (DxgkCreateSynchronizationObjectInternal.c)
 *     DxgkWslCreateSynchronizationObject @ 0x1C0344150 (DxgkWslCreateSynchronizationObject.c)
 *     ?VmBusCreateSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C036A950 (-VmBusCreateSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00096EC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0009904 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000BB70 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C000BC60 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000E694 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000F8D4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000FB94 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x1C00541B0 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C016E850 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C016ED94 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@IPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C01996EC (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C019D6D0 (-DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C03099FC (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?CreatePeriodicMonitoredFenceNotificationInternal@@YAJPEAVDXGADAPTER@@0PEAVDXGSYNCOBJECT@@PEBU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@_N@Z @ 0x1C033F130 (-CreatePeriodicMonitoredFenceNotificationInternal@@YAJPEAVDXGADAPTER@@0PEAVDXGSYNCOBJECT@@PEBU_D.c)
 */

__int64 __fastcall DxgkCreateSynchronizationObjectImpl(
        struct DXGADAPTER *a1,
        unsigned int a2,
        __int64 a3,
        struct DXGADAPTER *a4,
        UINT64 a5)
{
  unsigned int v5; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v13; // rsi
  __int64 v14; // r13
  _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *v15; // rcx
  __int64 hDevice; // rsi
  __int64 v17; // r9
  struct DXGDEVICE *v18; // r15
  struct DXGADAPTERSYNCOBJECT *v19; // r12
  volatile signed __int64 *Blink; // rsi
  struct _KEVENT **v21; // r12
  struct _KEVENT *v22; // r8
  int v23; // ebx
  _DWORD *v24; // rdx
  char *v25; // rcx
  __int64 v26; // r9
  struct DXGADAPTER *v27; // r8
  D3DKMT_HANDLE hSyncObject; // r10d
  struct DXGADAPTER *v29; // r8
  D3DDDI_SYNCHRONIZATIONOBJECT_TYPE Type; // ebx
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  int v33; // r12d
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // r8
  struct _KEVENT *v40; // rsi
  int v41; // esi
  struct _LIST_ENTRY *v42; // rax
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  struct DXGTHREAD *Current; // rax
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rcx
  __int64 v49; // r8
  struct _KEVENT *v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // rcx
  __int64 v56; // r8
  struct _KTHREAD **v57; // rax
  unsigned int MaxCount; // ebx
  DXGADAPTER *v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // r8
  bool v62; // [rsp+50h] [rbp-308h]
  int v63; // [rsp+58h] [rbp-300h] BYREF
  __int64 v64; // [rsp+60h] [rbp-2F8h]
  char v65; // [rsp+68h] [rbp-2F0h]
  struct DXGDEVICE *v66; // [rsp+70h] [rbp-2E8h] BYREF
  struct DXGDEVICESYNCOBJECT *v67; // [rsp+78h] [rbp-2E0h] BYREF
  int v68; // [rsp+80h] [rbp-2D8h]
  struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT v69; // [rsp+84h] [rbp-2D4h] BYREF
  struct DXGADAPTER *v70; // [rsp+88h] [rbp-2D0h]
  struct DXGDEVICE *v71; // [rsp+90h] [rbp-2C8h] BYREF
  __int64 v72; // [rsp+98h] [rbp-2C0h]
  struct DXGADAPTER *v73; // [rsp+A0h] [rbp-2B8h] BYREF
  struct DXGDEVICE *v74; // [rsp+A8h] [rbp-2B0h] BYREF
  int v75; // [rsp+B0h] [rbp-2A8h]
  struct DXGADAPTER *v76[2]; // [rsp+B8h] [rbp-2A0h] BYREF
  struct DXGSYNCOBJECT *v77; // [rsp+C8h] [rbp-290h] BYREF
  _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 v78; // [rsp+D0h] [rbp-288h] BYREF
  struct DXGADAPTERSYNCOBJECT *v79; // [rsp+130h] [rbp-228h] BYREF
  DXGADAPTER *v80; // [rsp+138h] [rbp-220h] BYREF
  _BYTE v81[8]; // [rsp+150h] [rbp-208h] BYREF
  _BYTE v82[16]; // [rsp+158h] [rbp-200h] BYREF
  __int64 v83; // [rsp+168h] [rbp-1F0h]
  _BYTE v84[16]; // [rsp+198h] [rbp-1C0h] BYREF
  __int64 v85; // [rsp+1A8h] [rbp-1B0h]
  _BYTE v86[160]; // [rsp+1E0h] [rbp-178h] BYREF
  _BYTE v87[144]; // [rsp+280h] [rbp-D8h] BYREF
  unsigned int v88; // [rsp+368h] [rbp+10h]

  v88 = a2;
  v70 = a4;
  v68 = a3;
  v5 = a2;
  v73 = a1;
  v63 = -1;
  v64 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v65 = 1;
    v63 = 2041;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2041);
  }
  else
  {
    v65 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v63, 2041);
  CurrentProcess = PsGetCurrentProcess(v8, v7, v9, v10);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v13 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v14 = *((_QWORD *)Current + 3)) == 0 )
  {
    v14 = v13;
  }
  v72 = v14;
  if ( !v14 )
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63);
    if ( !v65 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
    goto LABEL_164;
  }
  v62 = (*(_DWORD *)(v14 + 424) & 0x180) != 0;
  if ( v68 )
  {
    v15 = (_D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *)a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v15 = (_D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *)MmUserProbeAddress;
    v78 = *v15;
    if ( (v5 & 0x7FFFFFFF) == 1 && (v78.Info.Flags.Value & 0x80000000) != 0 )
    {
      v5 = v5 & 0x80000000 | 5;
      v88 = v5;
    }
  }
  else
  {
    v78 = *(_D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *)a1;
  }
  v78.hSyncObject = 0;
  if ( (v78.Info.Flags.Value & 0x7FFFFE00) != 0 )
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63);
    if ( !v65 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
    goto LABEL_164;
  }
  if ( ((v78.Info.Flags.Value >> 1) & 1) != 0 && (*(_BYTE *)&v78.Info.Flags.0 & 1) == 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)&gDxgkrnlCounterAccumulated);
    WdLogSingleEntry1(3LL, 419LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63);
    if ( !v65 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
    goto LABEL_164;
  }
  if ( (unsigned int)(v78.Info.Type - 5) <= 1 )
  {
    if ( v70 )
    {
      WdLogSingleEntry1(3LL, 428LL);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63);
      if ( !v65 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
        return 3221225485LL;
      goto LABEL_164;
    }
    if ( (*(_BYTE *)&v78.Info.Flags.0 & 1) != 0 && ((v78.Info.Flags.Value >> 1) & 1) == 0 )
    {
      WdLogSingleEntry1(3LL, 433LL);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63);
      if ( !v65 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
        return 3221225485LL;
      goto LABEL_164;
    }
    if ( (*(_BYTE *)&v78.Info.Flags.0 & 0x10) != 0 && (*(_BYTE *)&v78.Info.Flags.0 & 0x20) != 0 )
    {
      WdLogSingleEntry1(3LL, 439LL);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63);
      if ( !v65 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
        return 3221225485LL;
      goto LABEL_164;
    }
  }
  else if ( *(_BYTE *)&v78.Info.Flags.0 < 0 )
  {
    WdLogSingleEntry1(3LL, 445LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63);
    if ( !v65 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
    goto LABEL_164;
  }
  if ( a5 )
    v78.Info.Fence.FenceValue = a5;
  v71 = 0LL;
  hDevice = v78.hDevice;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v66, v78.hDevice, (struct _KTHREAD **)v14, &v71);
  v18 = v71;
  if ( !v71 && (v68 || (_DWORD)hDevice) )
  {
    WdLogSingleEntry2(2LL, hDevice, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      hDevice,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( v66 && _InterlockedExchangeAdd64((volatile signed __int64 *)v66 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v66 + 2), v66);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63);
    if ( !v65 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
    goto LABEL_164;
  }
  v77 = 0LL;
  v19 = 0LL;
  v79 = 0LL;
  Blink = 0LL;
  v76[0] = 0LL;
  v74 = v71;
  v75 = 0;
  if ( !v70 )
  {
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v86, (__int64)v71, 0, v17, 0);
    v21 = (struct _KEVENT **)((char *)v18 + 16);
    COREADAPTERACCESS::COREADAPTERACCESS(
      (COREADAPTERACCESS *)v81,
      *(struct DXGADAPTER *const *)(*((_QWORD *)v18 + 2) + 16LL),
      0LL);
    if ( (unsigned int)(v78.Info.Type - 5) > 1 )
    {
      COREACCESS::AcquireShared((COREACCESS *)v84, 0LL);
      if ( *(_DWORD *)(v85 + 200) != 1 )
        goto LABEL_138;
      if ( v83 != v85 )
      {
        COREACCESS::AcquireShared((COREACCESS *)v82, 0LL);
        if ( *(_DWORD *)(v83 + 200) != 1 )
        {
          COREACCESS::Release((COREACCESS *)v82);
LABEL_138:
          COREACCESS::Release((COREACCESS *)v84);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v81);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v86);
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v74);
          DXGADAPTER_REFERENCE::Assign(v76, 0LL);
          if ( v66 && _InterlockedExchangeAdd64((volatile signed __int64 *)v66 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v66 + 2), v66);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63);
          if ( v65 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v48, &EventProfilerExit, v49, v63);
          return 3221226166LL;
        }
      }
      v81[1] = 1;
      v22 = *v21;
      v5 = v88;
      v18 = v71;
LABEL_25:
      Blink = (volatile signed __int64 *)v22->Header.WaitListHead.Blink;
      v76[0] = (struct DXGADAPTER *)Blink;
      if ( Blink )
      {
        _InterlockedIncrement64(Blink + 3);
        v76[1] = (struct DXGADAPTER *)-1LL;
        v22 = *v21;
        v5 = v88;
        v18 = v71;
        Blink = (volatile signed __int64 *)v76[0];
      }
      v67 = 0LL;
      v23 = CreateSynchronizationObjectInternal(
              (__int64)v18,
              1,
              (struct ADAPTER_RENDER *)v22,
              (__int64)&v78,
              v5,
              0,
              &v77,
              &v67,
              &v79);
      v70 = (struct DXGADAPTER *)(unsigned int)v23;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v81);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v86);
      v19 = v79;
      goto LABEL_28;
    }
    v40 = *v21;
    if ( *((_DWORD *)v18 + 108) == 2 )
    {
      if ( KeReadStateEvent(v40 + 5) )
        goto LABEL_81;
      v50 = v40 + 5;
    }
    else
    {
      if ( KeReadStateEvent(v40 + 4) )
      {
LABEL_81:
        KeEnterCriticalRegion();
        if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)v18 + 17), 0) )
        {
          DXGADAPTER::TryWakeUpFromD3State((DXGADAPTER *)(*v21)->Header.WaitListHead.Blink);
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v51, (const EVENT_DESCRIPTOR *)"g", v52, 40);
          ExAcquireResourceExclusiveLite(*((PERESOURCE *)v18 + 17), 1u);
          DXGADAPTER::EnableD3Requests((DXGADAPTER *)(*v21)->Header.WaitListHead.Blink);
        }
        v75 = 1;
        v41 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v86, 0LL);
        if ( v41 < 0 )
        {
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v81);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v86);
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v74);
          DXGADAPTER_REFERENCE::Assign(v76, 0LL);
          if ( v66 && _InterlockedExchangeAdd64((volatile signed __int64 *)v66 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v66 + 2), v66);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63);
          if ( v65 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v53, &EventProfilerExit, v54, v63);
          return (unsigned int)v41;
        }
        v22 = *v21;
        v42 = (*v21)->Header.WaitListHead.Blink;
        if ( SLODWORD(v42[151].Blink) < 0x2000 && !BYTE4(v42[170].Flink) )
        {
          WdLogSingleEntry1(3LL, 499LL);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v81);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v86);
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v74);
          DXGADAPTER_REFERENCE::Assign(v76, 0LL);
          if ( v66 && _InterlockedExchangeAdd64((volatile signed __int64 *)v66 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v66 + 2), v66);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63);
          if ( !v65 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
            return 3221225485LL;
LABEL_164:
          McTemplateK0q_EtwWriteTransfer(v46, &EventProfilerExit, v47, v63);
          return 3221225485LL;
        }
        goto LABEL_25;
      }
      v50 = v40 + 4;
    }
    KeWaitForSingleObject(v50, Executive, 0, 0, 0LL);
    goto LABEL_81;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v87, v70, 0LL);
  v69.hSyncObject = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v87, 0LL);
  if ( (v69.hSyncObject & 0x80000000) != 0 )
  {
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v87);
    if ( v18 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v74);
    DXGADAPTER_REFERENCE::Assign(v76, 0LL);
    if ( v66 && _InterlockedExchangeAdd64((volatile signed __int64 *)v66 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v66 + 2), v66);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63);
    if ( v65 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v55, &EventProfilerExit, v56, v63);
    return v69.hSyncObject;
  }
  v23 = CreateSynchronizationObjectInternal(
          (__int64)v18,
          1,
          *((struct ADAPTER_RENDER **)v70 + 350),
          (__int64)&v78,
          v5,
          0,
          &v77,
          0LL,
          0LL);
  v70 = (struct DXGADAPTER *)(unsigned int)v23;
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v87);
LABEL_28:
  if ( v23 >= 0 )
  {
    if ( v68 )
    {
      v27 = v73;
      v25 = (char *)v73 + 88;
      v24 = (_DWORD *)MmUserProbeAddress;
      if ( (unsigned __int64)v73 + 88 >= MmUserProbeAddress )
        v25 = (char *)MmUserProbeAddress;
      hSyncObject = v78.hSyncObject;
      *(_DWORD *)v25 = v78.hSyncObject;
      if ( (*(_BYTE *)&v78.Info.Flags.0 & 1) != 0 && ((*(_BYTE *)&v78.Info.Flags.0 & 2) == 0 || v62) )
      {
        v24 = (_DWORD *)((char *)v27 + 80);
        v25 = (char *)MmUserProbeAddress;
        if ( (unsigned __int64)v27 + 80 >= MmUserProbeAddress )
          v24 = (_DWORD *)MmUserProbeAddress;
        *v24 = v78.Info.SharedHandle;
      }
      v29 = (struct DXGADAPTER *)((char *)v27 + 16);
      Type = v78.Info.Type;
      if ( v78.Info.Type == D3DDDI_MONITORED_FENCE )
      {
        v25 = (char *)v29;
        v24 = (_DWORD *)MmUserProbeAddress;
        if ( (unsigned __int64)v29 >= MmUserProbeAddress )
          v25 = (char *)MmUserProbeAddress;
        v31 = *(_OWORD *)&v78.Info.SynchronizationMutex.InitialState;
        *(_OWORD *)v25 = *(_OWORD *)&v78.Info.SynchronizationMutex.InitialState;
        v32 = *(_OWORD *)&v78.Info.Reserved.Reserved[2];
        *((_OWORD *)v25 + 1) = *(_OWORD *)&v78.Info.Reserved.Reserved[2];
      }
      else
      {
        v32 = *(_OWORD *)&v78.Info.Reserved.Reserved[2];
        v31 = *(_OWORD *)&v78.Info.SynchronizationMutex.InitialState;
      }
      if ( Type == D3DDDI_PERIODIC_MONITORED_FENCE )
      {
        v25 = (char *)MmUserProbeAddress;
        if ( (unsigned __int64)v29 >= MmUserProbeAddress )
          v29 = (struct DXGADAPTER *)MmUserProbeAddress;
        *(_OWORD *)v29 = v31;
        *((_OWORD *)v29 + 1) = v32;
        *((_QWORD *)v29 + 4) = v78.Info.Reserved.Reserved[4];
      }
    }
    else
    {
      v29 = v73;
      hSyncObject = v78.hSyncObject;
      *((_DWORD *)v73 + 22) = v78.hSyncObject;
      if ( (*(_BYTE *)&v78.Info.Flags.0 & 1) != 0 && ((*(_BYTE *)&v78.Info.Flags.0 & 2) == 0 || v62) )
        *((_DWORD *)v29 + 20) = v78.Info.SharedHandle;
      Type = v78.Info.Type;
      v43 = *(_OWORD *)&v78.Info.SynchronizationMutex.InitialState;
      v44 = *(_OWORD *)&v78.Info.Reserved.Reserved[2];
      if ( v78.Info.Type == D3DDDI_MONITORED_FENCE )
      {
        *((_OWORD *)v29 + 1) = *(_OWORD *)&v78.Info.SynchronizationMutex.InitialState;
        *((_OWORD *)v29 + 2) = v44;
      }
      if ( Type == D3DDDI_PERIODIC_MONITORED_FENCE )
      {
        *((_OWORD *)v29 + 1) = v43;
        *((_OWORD *)v29 + 2) = v44;
        *((_QWORD *)v29 + 6) = v78.Info.Reserved.Reserved[4];
      }
    }
    if ( bTracingEnabled )
    {
      v26 = v19 ? *((_QWORD *)v19 + 4) : 0LL;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0ppp_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          &EventOpenSyncObject,
          (__int64)v29,
          v26,
          hSyncObject,
          v18);
    }
    if ( Type != D3DDDI_PERIODIC_MONITORED_FENCE )
    {
      v33 = (int)v70;
LABEL_54:
      if ( v75 )
      {
        ExReleaseResourceLite(*((PERESOURCE *)v18 + 17));
        KeLeaveCriticalRegion();
        v75 = 0;
      }
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v14 + 248));
      v34 = (v78.hSyncObject >> 6) & 0xFFFFFF;
      if ( (unsigned int)v34 < *(_DWORD *)(v14 + 296) )
      {
        v35 = *(_QWORD *)(v14 + 280);
        if ( ((v78.hSyncObject >> 25) & 0x60) == (*(_BYTE *)(v35 + 16 * v34 + 8) & 0x60)
          && (*(_DWORD *)(v35 + 16 * v34 + 8) & 0x1F) != 0 )
        {
          v36 = 16 * ((*(_QWORD *)&v78.hSyncObject >> 6) & 0xFFFFFFLL);
          v72 = v36;
          if ( (*(_DWORD *)(v36 + v35 + 8) & 0x2000) == 0 )
          {
            WdLogSingleEntry1(1LL, 217LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
              217LL,
              0LL,
              0LL,
              0LL,
              0LL);
            v35 = *(_QWORD *)(v14 + 280);
            v36 = v72;
          }
          *(_DWORD *)(v35 + v36 + 8) &= ~0x2000u;
        }
      }
      *(_QWORD *)(v14 + 256) = 0LL;
      ExReleasePushLockExclusiveEx(v14 + 248, 0LL);
      KeLeaveCriticalRegion();
      if ( v33 < 0 )
      {
        v69.hSyncObject = v78.hSyncObject;
        DxgkDestroySynchronizationObjectImpl(&v69, 0);
      }
      if ( v18 && v75 )
      {
        ExReleaseResourceLite(*((PERESOURCE *)v18 + 17));
        KeLeaveCriticalRegion();
      }
      if ( Blink && _InterlockedExchangeAdd64(Blink + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v76[0] + 2), v76[0]);
      if ( v66 && _InterlockedExchangeAdd64((volatile signed __int64 *)v66 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v66 + 2), v66);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63);
      if ( v65 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v37, &EventProfilerExit, v38, v63);
      }
      return (unsigned int)v33;
    }
    v73 = 0LL;
    v57 = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)v25, (__int64)v24, (__int64)v29, v26);
    MaxCount = v78.Info.Semaphore.MaxCount;
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v80, v78.Info.Semaphore.MaxCount, v57, &v73, 1);
    if ( v73 )
    {
      v33 = CreatePeriodicMonitoredFenceNotificationInternal(v73, (struct DXGADAPTER *)Blink, v77, &v78, 0);
      v59 = v80;
      if ( v33 < 0 )
      {
        if ( !v80 )
          goto LABEL_54;
        goto LABEL_181;
      }
    }
    else
    {
      v33 = -1073741811;
      WdLogSingleEntry2(3LL, MaxCount, -1073741811LL);
      v59 = v80;
    }
    if ( !v59 )
      goto LABEL_54;
LABEL_181:
    DXGADAPTER::ReleaseReference(v59);
    goto LABEL_54;
  }
  WdLogSingleEntry1(3LL, v23);
  if ( v18 )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v74);
  DXGADAPTER_REFERENCE::Assign(v76, 0LL);
  if ( v66 && _InterlockedExchangeAdd64((volatile signed __int64 *)v66 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v66 + 2), v66);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63);
  if ( v65 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v60, &EventProfilerExit, v61, v63);
  return (unsigned int)v23;
}
