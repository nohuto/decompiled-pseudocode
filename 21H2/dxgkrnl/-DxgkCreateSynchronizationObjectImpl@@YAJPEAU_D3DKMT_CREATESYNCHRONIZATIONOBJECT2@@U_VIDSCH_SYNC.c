/*
 * XREFs of ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX@Z @ 0x1C010DA40
 * Callers:
 *     ?VmBusCreateSyncObjectCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00D8EF0 (-VmBusCreateSyncObjectCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkCreateSynchronizationObject @ 0x1C01102A0 (DxgkCreateSynchronizationObject.c)
 *     ?DxgkCddCreateSynchronizationObject@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@@Z @ 0x1C01629A0 (-DxgkCddCreateSynchronizationObject@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@@Z.c)
 *     ?VmBusCreateSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023EE70 (-VmBusCreateSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkCreateSynchronizationObjectInternal @ 0x1C0293484 (DxgkCreateSynchronizationObjectInternal.c)
 * Callees:
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000200C (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00022BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004090 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004130 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0004160 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C00042E4 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0004300 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C00058C8 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006CE0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006DE4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0007174 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007578 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007658 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009DE0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0019134 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x1C0047104 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E49F4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FBBF0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@IPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C010E7F8 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C011422C (-DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0268F1C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?CreatePeriodicMonitoredFenceNotificationInternal@@YAJPEAVDXGADAPTER@@0PEAVDXGSYNCOBJECT@@PEBU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@_N@Z @ 0x1C02902F0 (-CreatePeriodicMonitoredFenceNotificationInternal@@YAJPEAVDXGADAPTER@@0PEAVDXGSYNCOBJECT@@PEBU_D.c)
 */

__int64 __fastcall DxgkCreateSynchronizationObjectImpl(ULONG64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v11; // rdx
  ULONG64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r14
  struct DXGTHREAD *Current; // rax
  __int64 v16; // r15
  __int64 v17; // rax
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  bool v22; // zf
  _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  bool v31; // zf
  __int64 hDevice; // r14
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r9
  __int64 v36; // rax
  volatile signed __int64 *v37; // r13
  struct DXGDEVICE *v38; // r14
  struct DXGADAPTER *v39; // r14
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v46; // r8
  __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rcx
  int v52; // r14d
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rdx
  __int64 v60; // rdx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // rdx
  _DWORD *v65; // rdx
  __int64 hSyncObject; // r8
  _DWORD *v67; // rdx
  ULONG64 v68; // rsi
  D3DDDI_SYNCHRONIZATIONOBJECT_TYPE Type; // r14d
  __int128 v70; // xmm0
  __int128 v71; // xmm1
  _OWORD *v72; // rax
  __int128 v73; // xmm0
  __int128 v74; // xmm1
  __int64 v75; // r9
  struct _KTHREAD **v76; // rax
  __int64 MaxCount; // rbx
  __int64 v78; // rdx
  __int64 v79; // r8
  __int64 v80; // rax
  __int64 v81; // rcx
  __int64 v82; // r8
  int v83; // r9d
  D3DKMT_HANDLE v84; // r13d
  __int64 v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rsi
  __int64 v88; // rax
  __int64 v89; // rax
  char v90; // [rsp+50h] [rbp-318h]
  int v91; // [rsp+58h] [rbp-310h] BYREF
  __int64 v92; // [rsp+60h] [rbp-308h]
  char v93; // [rsp+68h] [rbp-300h]
  struct DXGDEVICE *v94; // [rsp+70h] [rbp-2F8h] BYREF
  __int64 v95; // [rsp+78h] [rbp-2F0h] BYREF
  int v96; // [rsp+80h] [rbp-2E8h]
  struct DXGDEVICE *v97; // [rsp+88h] [rbp-2E0h] BYREF
  struct DXGADAPTER *v98[2]; // [rsp+90h] [rbp-2D8h] BYREF
  _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT v99[2]; // [rsp+A0h] [rbp-2C8h] BYREF
  struct DXGADAPTER *v100; // [rsp+A8h] [rbp-2C0h] BYREF
  struct DXGDEVICE *v101; // [rsp+B0h] [rbp-2B8h] BYREF
  int v102; // [rsp+B8h] [rbp-2B0h]
  int v103; // [rsp+C0h] [rbp-2A8h]
  struct DXGSYNCOBJECT *v104[3]; // [rsp+C8h] [rbp-2A0h] BYREF
  _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 v105; // [rsp+E0h] [rbp-288h] BYREF
  __int64 v106; // [rsp+140h] [rbp-228h] BYREF
  DXGADAPTER *v107; // [rsp+148h] [rbp-220h] BYREF
  _BYTE v108[8]; // [rsp+160h] [rbp-208h] BYREF
  _BYTE v109[16]; // [rsp+168h] [rbp-200h] BYREF
  __int64 v110; // [rsp+178h] [rbp-1F0h]
  _BYTE v111[16]; // [rsp+1A8h] [rbp-1C0h] BYREF
  __int64 v112; // [rsp+1B8h] [rbp-1B0h]
  _BYTE v113[160]; // [rsp+1F0h] [rbp-178h] BYREF
  _BYTE v114[144]; // [rsp+290h] [rbp-D8h] BYREF
  unsigned int v115; // [rsp+378h] [rbp+10h]

  v115 = a2;
  *(_QWORD *)&v99[0].hSyncObject = a4;
  v96 = a3;
  v5 = a2;
  v91 = -1;
  v92 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v93 = 1;
    v91 = 2041;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2041);
  }
  else
  {
    v93 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v91, 2041LL);
  CurrentProcess = PsGetCurrentProcess(v8, v7);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v14 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent(v12, v11)) == 0LL
    || (v16 = *((_QWORD *)Current + 1)) == 0 )
  {
    v16 = v14;
  }
  v104[1] = (struct DXGSYNCOBJECT *)v16;
  if ( !v16 )
  {
    v17 = WdLogNewEntry5_WdError(v12, v11);
    v18 = -1073741811;
    *(_QWORD *)(v17 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v17);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v91, v19);
    v22 = v93 == 0;
    goto LABEL_146;
  }
  v90 = *(_BYTE *)(v16 + 347) & 0x30;
  if ( v96 )
  {
    v12 = MmUserProbeAddress;
    v23 = (_D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *)a1;
    if ( a1 >= MmUserProbeAddress )
      v23 = (_D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *)MmUserProbeAddress;
    v105 = *v23;
    if ( (v5 & 0x7FFFFFFF) == 1 && (v105.Info.Flags.Value & 0x80000000) != 0 )
    {
      v5 = v5 & 0x80000000 | 5;
      v115 = v5;
    }
  }
  else
  {
    v105 = *(_D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *)a1;
  }
  v105.hSyncObject = 0;
  if ( (v105.Info.Flags.Value & 0x7FFFFE00) != 0 )
  {
    v24 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    v18 = -1073741811;
    *(_QWORD *)(v24 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v24);
LABEL_145:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v91, v25);
    v22 = v93 == 0;
LABEL_146:
    if ( !v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v91);
    return (unsigned int)v18;
  }
  v26 = (v105.Info.Flags.Value >> 1) & 1;
  if ( ((v105.Info.Flags.Value >> 1) & 1) != 0 && (*(_BYTE *)&v105.Info.Flags.0 & 1) == 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)&gDxgkrnlCounterAccumulated);
    v27 = WdLogNewEntry5_WdWarning(v105.Info.Flags.Value, v26, v13);
    *(_QWORD *)(v27 + 24) = 458LL;
LABEL_25:
    WdLogEvent5_WdWarning(v27);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v91, v28);
    v31 = v93 == 0;
LABEL_72:
    if ( !v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v29, &EventProfilerExit, v30, v91);
    return (unsigned int)-1073741811;
  }
  if ( (unsigned int)(v105.Info.Type - 5) <= 1 )
  {
    if ( a4 )
    {
      v27 = WdLogNewEntry5_WdWarning(v105.Info.Flags.Value, v26, v13);
      *(_QWORD *)(v27 + 24) = 467LL;
      goto LABEL_25;
    }
    if ( (*(_BYTE *)&v105.Info.Flags.0 & 1) != 0 && !(_DWORD)v26 )
    {
      v27 = WdLogNewEntry5_WdWarning(v105.Info.Flags.Value, v26, v13);
      *(_QWORD *)(v27 + 24) = 472LL;
      goto LABEL_25;
    }
    if ( (*(_BYTE *)&v105.Info.Flags.0 & 0x10) != 0 && (*(_BYTE *)&v105.Info.Flags.0 & 0x20) != 0 )
    {
      v27 = WdLogNewEntry5_WdWarning(v105.Info.Flags.Value, v26, v13);
      *(_QWORD *)(v27 + 24) = 478LL;
      goto LABEL_25;
    }
  }
  else if ( *(_BYTE *)&v105.Info.Flags.0 < 0 )
  {
    v27 = WdLogNewEntry5_WdWarning(v105.Info.Flags.Value, v26, v13);
    *(_QWORD *)(v27 + 24) = 484LL;
    goto LABEL_25;
  }
  v97 = 0LL;
  hDevice = v105.hDevice;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v94, v105.hDevice, (struct _KTHREAD **)v16, &v97);
  if ( !v97 && (v96 || (_DWORD)hDevice) )
  {
    v36 = WdLogNewEntry5_WdError(v34, v33);
    *(_QWORD *)(v36 + 24) = hDevice;
    v18 = -1073741811;
    *(_QWORD *)(v36 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v36);
LABEL_142:
    if ( v94 && _InterlockedExchangeAdd64((volatile signed __int64 *)v94 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v94 + 2), v94);
    goto LABEL_145;
  }
  v104[0] = 0LL;
  v106 = 0LL;
  v37 = 0LL;
  v98[0] = 0LL;
  v38 = v97;
  v101 = v97;
  v102 = 0;
  if ( *(_QWORD *)&v99[0].hSyncObject )
  {
    COREADAPTERACCESS::COREADAPTERACCESS(
      (COREADAPTERACCESS *)v114,
      *(struct DXGADAPTER *const *)&v99[0].hSyncObject,
      0LL);
    v103 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v114, 0LL);
    if ( v103 >= 0 )
    {
      LOBYTE(v60) = 1;
      v18 = CreateSynchronizationObjectInternal(
              v38,
              v60,
              *(_QWORD *)(*(_QWORD *)&v99[0].hSyncObject + 2704LL),
              &v105,
              v5,
              0,
              v104,
              0LL,
              0LL);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v114, v64);
LABEL_85:
      if ( v18 < 0 )
      {
        v89 = WdLogNewEntry5_WdWarning(v49, v48, v50);
        *(_QWORD *)(v89 + 24) = v18;
        WdLogEvent5_WdWarning(v89);
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v101);
        DXGADAPTER_REFERENCE::Assign(v98, 0LL);
      }
      else
      {
        if ( v96 )
        {
          v65 = (_DWORD *)(a1 + 88);
          if ( a1 + 88 >= MmUserProbeAddress )
            v65 = (_DWORD *)MmUserProbeAddress;
          hSyncObject = v105.hSyncObject;
          *v65 = v105.hSyncObject;
          if ( (*(_BYTE *)&v105.Info.Flags.0 & 1) != 0 && ((*(_BYTE *)&v105.Info.Flags.0 & 2) == 0 || v90) )
          {
            v67 = (_DWORD *)(a1 + 80);
            if ( a1 + 80 >= MmUserProbeAddress )
              v67 = (_DWORD *)MmUserProbeAddress;
            *v67 = v105.Info.SharedHandle;
          }
          v68 = a1 + 16;
          Type = v105.Info.Type;
          v70 = *(_OWORD *)&v105.Info.SynchronizationMutex.InitialState;
          v71 = *(_OWORD *)&v105.Info.Reserved.Reserved[2];
          if ( v105.Info.Type == D3DDDI_MONITORED_FENCE )
          {
            v72 = (_OWORD *)v68;
            if ( v68 >= MmUserProbeAddress )
              v72 = (_OWORD *)MmUserProbeAddress;
            *v72 = *(_OWORD *)&v105.Info.SynchronizationMutex.InitialState;
            v72[1] = v71;
          }
          if ( Type == D3DDDI_PERIODIC_MONITORED_FENCE )
          {
            if ( v68 >= MmUserProbeAddress )
              v68 = MmUserProbeAddress;
            *(_OWORD *)v68 = v70;
            *(_OWORD *)(v68 + 16) = v71;
            *(_QWORD *)(v68 + 32) = v105.Info.Reserved.Reserved[4];
          }
        }
        else
        {
          hSyncObject = v105.hSyncObject;
          *(_DWORD *)(a1 + 88) = v105.hSyncObject;
          if ( (*(_BYTE *)&v105.Info.Flags.0 & 1) != 0 && ((*(_BYTE *)&v105.Info.Flags.0 & 2) == 0 || v90) )
            *(_DWORD *)(a1 + 80) = v105.Info.SharedHandle;
          Type = v105.Info.Type;
          v73 = *(_OWORD *)&v105.Info.SynchronizationMutex.InitialState;
          v74 = *(_OWORD *)&v105.Info.Reserved.Reserved[2];
          if ( v105.Info.Type == D3DDDI_MONITORED_FENCE )
          {
            *(_OWORD *)(a1 + 16) = *(_OWORD *)&v105.Info.SynchronizationMutex.InitialState;
            *(_OWORD *)(a1 + 32) = v74;
          }
          if ( Type == D3DDDI_PERIODIC_MONITORED_FENCE )
          {
            *(_OWORD *)(a1 + 16) = v73;
            *(_OWORD *)(a1 + 32) = v74;
            *(_QWORD *)(a1 + 48) = v105.Info.Reserved.Reserved[4];
          }
        }
        if ( bTracingEnabled )
        {
          v75 = v106 ? *(_QWORD *)(v106 + 32) : 0LL;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0ppp_EtwWriteTransfer(
              (__int64)v97,
              &EventOpenSyncObject,
              hSyncObject,
              v75,
              (unsigned int)hSyncObject,
              v97);
        }
        if ( Type == D3DDDI_PERIODIC_MONITORED_FENCE )
        {
          v100 = 0LL;
          v76 = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
          MaxCount = v105.Info.Semaphore.MaxCount;
          DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
            (DXGADAPTERBYHANDLE *)&v107,
            v105.Info.Semaphore.MaxCount,
            v76,
            &v100,
            1);
          if ( v100 )
          {
            v18 = CreatePeriodicMonitoredFenceNotificationInternal(v100, (struct DXGADAPTER *)v37, v104[0], &v105, 0);
          }
          else
          {
            v80 = WdLogNewEntry5_WdWarning(0LL, v78, v79);
            *(_QWORD *)(v80 + 24) = MaxCount;
            v18 = -1073741811;
            *(_QWORD *)(v80 + 32) = -1073741811LL;
            WdLogEvent5_WdWarning(v80);
          }
          if ( v107 )
            DXGADAPTER::ReleaseReference(v107);
        }
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v16 + 208, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v83 = *(_DWORD *)(v16 + 232);
            if ( v83 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q_EtwWriteTransfer(v81, &EventBlockThread, v82, v83);
          }
          ExAcquirePushLockExclusiveEx(v16 + 208, 0LL);
        }
        *(_QWORD *)(v16 + 216) = KeGetCurrentThread();
        v84 = v105.hSyncObject;
        v85 = (v105.hSyncObject >> 6) & 0xFFFFFF;
        if ( (unsigned int)v85 < *(_DWORD *)(v16 + 256) )
        {
          v86 = *(_QWORD *)(v16 + 240);
          if ( ((v105.hSyncObject >> 25) & 0x60) == (*(_BYTE *)(v86 + 16 * v85 + 8) & 0x60)
            && (*(_DWORD *)(v86 + 16 * v85 + 8) & 0x1F) != 0 )
          {
            v87 = 2 * ((*(_QWORD *)&v105.hSyncObject >> 6) & 0xFFFFFFLL);
            if ( (*(_DWORD *)(v86 + 16 * ((*(_QWORD *)&v105.hSyncObject >> 6) & 0xFFFFFFLL) + 8) & 0x2000) == 0 )
            {
              v88 = WdLogNewEntry5_WdAssertion((v105.hSyncObject >> 25) & 0x60, v86);
              *(_QWORD *)(v88 + 24) = 222LL;
              WdLogEvent5_WdAssertion(v88);
              v86 = *(_QWORD *)(v16 + 240);
            }
            *(_DWORD *)(v86 + 8 * v87 + 8) &= ~0x2000u;
          }
        }
        *(_QWORD *)(v16 + 216) = 0LL;
        ExReleasePushLockExclusiveEx(v16 + 208, 0LL);
        KeLeaveCriticalRegion();
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v101);
        if ( v18 < 0 )
        {
          v99[0].hSyncObject = v84;
          DxgkDestroySynchronizationObjectImpl(v99, 0);
        }
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v101);
        if ( v98[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v98[0] + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v98[0] + 2), v98[0]);
      }
      goto LABEL_142;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v114, v60);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v101);
    DXGADAPTER_REFERENCE::Assign(v98, 0LL);
    if ( v94 && _InterlockedExchangeAdd64((volatile signed __int64 *)v94 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v94 + 2), v94);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v91, v61);
    if ( v93 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v62, &EventProfilerExit, v63, v91);
    return (unsigned int)v103;
  }
  else
  {
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v113, (__int64)v97, 0, v35, 0);
    v39 = (struct DXGDEVICE *)((char *)v38 + 16);
    v100 = v39;
    COREADAPTERACCESS::COREADAPTERACCESS(
      (COREADAPTERACCESS *)v108,
      *(struct DXGADAPTER *const *)(*(_QWORD *)v39 + 16LL),
      0LL);
    if ( (unsigned int)(v105.Info.Type - 5) > 1 )
    {
      COREACCESS::AcquireShared((COREACCESS *)v111, 0LL);
      if ( *(_DWORD *)(v112 + 200) != 1 )
        goto LABEL_47;
      if ( v110 != v112 )
      {
        COREACCESS::AcquireShared((COREACCESS *)v109, 0LL);
        if ( *(_DWORD *)(v110 + 200) != 1 )
        {
          COREACCESS::Release((COREACCESS *)v109);
LABEL_47:
          COREACCESS::Release((COREACCESS *)v111);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v108, v41);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v113);
          DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v101);
          DXGADAPTER_REFERENCE::Assign(v98, 0LL);
          if ( v94 && _InterlockedExchangeAdd64((volatile signed __int64 *)v94 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v94 + 2), v94);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v91, v42);
          if ( v93 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v43, &EventProfilerExit, v44, v91);
          return 3221226166LL;
        }
      }
      v108[1] = 1;
      v46 = *(_QWORD *)v39;
      v5 = v115;
      goto LABEL_55;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v101);
    v52 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v113, 0LL);
    if ( v52 >= 0 )
    {
      v39 = v100;
      v46 = *(_QWORD *)v100;
      v56 = *(_QWORD *)(*(_QWORD *)v100 + 16LL);
      if ( *(int *)(v56 + 2328) < 0x2000 && !*(_BYTE *)(v56 + 2628) )
      {
        v57 = WdLogNewEntry5_WdWarning(v51, v40, v46);
        *(_QWORD *)(v57 + 24) = 533LL;
        WdLogEvent5_WdWarning(v57);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v108, v58);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v113);
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v101);
        DXGADAPTER_REFERENCE::Assign(v98, 0LL);
        if ( v94 && _InterlockedExchangeAdd64((volatile signed __int64 *)v94 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v94 + 2), v94);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v91, v59);
        v31 = v93 == 0;
        goto LABEL_72;
      }
LABEL_55:
      v37 = *(volatile signed __int64 **)(v46 + 16);
      v98[0] = (struct DXGADAPTER *)v37;
      if ( v37 )
      {
        _InterlockedIncrement64(v37 + 3);
        v98[1] = (struct DXGADAPTER *)-1LL;
        v46 = *(_QWORD *)v39;
        v5 = v115;
        v37 = (volatile signed __int64 *)v98[0];
      }
      v95 = 0LL;
      LOBYTE(v40) = 1;
      v18 = CreateSynchronizationObjectInternal(v97, v40, v46, &v105, v5, 0, v104, &v95, &v106);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v108, v47);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v113);
      goto LABEL_85;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v108, v40);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v113);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v101);
    DXGADAPTER_REFERENCE::Assign(v98, 0LL);
    if ( v94 && _InterlockedExchangeAdd64((volatile signed __int64 *)v94 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v94 + 2), v94);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v91, v53);
    if ( v93 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v54, &EventProfilerExit, v55, v91);
    return (unsigned int)v52;
  }
}
