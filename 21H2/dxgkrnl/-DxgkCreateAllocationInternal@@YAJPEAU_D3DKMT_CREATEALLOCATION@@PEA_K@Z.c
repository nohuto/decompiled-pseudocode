/*
 * XREFs of ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C00EF9B0
 * Callers:
 *     ?VmBusCreateAllocationCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00D8180 (-VmBusCreateAllocationCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkCreateAllocation @ 0x1C015C400 (DxgkCreateAllocation.c)
 *     ?VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023D510 (-VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00022BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002630 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C00026F0 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0002CC0 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004090 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0004160 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0004488 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C0004594 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00045C8 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C00058C8 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006614 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006DE4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007018 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage @ 0x1C0026138 (Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage.c)
 *     _lambda_3a889f2a3da19ece0881b5d4724e0c1b_::_lambda_invoker_cdecl_ @ 0x1C00D6CF0 (_lambda_3a889f2a3da19ece0881b5d4724e0c1b_--_lambda_invoker_cdecl_.c)
 *     ?IterateOutputDuplMgrsWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVOUTPUTDUPL_MGR_INDIRECT@@PEAX@Z1@Z @ 0x1C00E58A0 (-IterateOutputDuplMgrsWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVOUTPUTDUPL_MGR_INDIRECT@@PEAX@Z1@Z.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C00F2BE0 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FBBF0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FD9E0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0116DA0 (-CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C0116DF0 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0119AC8 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C020CC74 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetStandardAllocationDriverData@DXGDEVICE@@QEAAJW4_D3DKMDT_STANDARDALLOCATION_TYPE@@PEAXPEAIPEAPEAX@Z @ 0x1C022805C (-GetStandardAllocationDriverData@DXGDEVICE@@QEAAJW4_D3DKMDT_STANDARDALLOCATION_TYPE@@PEAXPEAIPEA.c)
 *     ?ValidateStandardAllocationParams@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DKMT_CREATESTANDARDALLOCATION@@_N@Z @ 0x1C0228E18 (-ValidateStandardAllocationParams@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DKMT_CREATESTANDARDAL.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0268F1C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCreateAllocationInternal(struct _D3DKMT_CREATEALLOCATION *a1, unsigned __int64 *a2, __int64 a3)
{
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v6; // rbx
  struct DXGTHREAD *Current; // rax
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  bool v11; // bl
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  bool v16; // zf
  _D3DKMT_CREATEALLOCATION *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct DXGDEVICE *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  unsigned int Flags; // eax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 NumAllocations; // rdx
  _QWORD *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  int StandardAllocationDriverData; // ebx
  __int64 v33; // rcx
  int v34; // ebx
  struct _KEVENT *v35; // r12
  struct _KEVENT *v36; // rcx
  __int64 v37; // rcx
  unsigned __int8 v38; // bl
  __int64 v39; // r8
  volatile signed __int64 *v40; // rbx
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // rcx
  _QWORD *v44; // rax
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  SIZE_T v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  PVOID v60; // r12
  _QWORD *v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  struct DXGDEVICE *v65; // r13
  __int64 v66; // rax
  __int64 v67; // rbx
  OUTPUTDUPL_MGR *v68; // rcx
  DXGGLOBAL *Global; // rax
  OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  __int64 v71; // rdx
  unsigned int v72; // eax
  __int64 v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  unsigned int v79; // edi
  _DWORD *p_hResource; // rdx
  _DWORD *p_hGlobalShare; // rdx
  D3DKMT_CREATEALLOCATIONFLAGS *p_Flags; // rdx
  struct DXGADAPTER *v83; // rbx
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  unsigned __int8 v87; // [rsp+80h] [rbp-208h]
  int v88; // [rsp+88h] [rbp-200h] BYREF
  __int64 v89; // [rsp+90h] [rbp-1F8h]
  char v90; // [rsp+98h] [rbp-1F0h]
  char v91[8]; // [rsp+A0h] [rbp-1E8h] BYREF
  struct DXGDEVICE *v92; // [rsp+A8h] [rbp-1E0h] BYREF
  unsigned int v93; // [rsp+B0h] [rbp-1D8h] BYREF
  unsigned __int64 *v94; // [rsp+B8h] [rbp-1D0h]
  _D3DKMT_CREATEALLOCATION v95; // [rsp+C0h] [rbp-1C8h] BYREF
  void *v96; // [rsp+110h] [rbp-178h] BYREF
  struct DXGDEVICE *v97; // [rsp+118h] [rbp-170h] BYREF
  int v98; // [rsp+120h] [rbp-168h]
  __int64 v99; // [rsp+128h] [rbp-160h]
  PVOID v100; // [rsp+130h] [rbp-158h]
  __int64 v101; // [rsp+138h] [rbp-150h] BYREF
  struct DXGADAPTER *v102; // [rsp+140h] [rbp-148h]
  char v103; // [rsp+148h] [rbp-140h]
  __int64 v104[3]; // [rsp+150h] [rbp-138h] BYREF
  int Size; // [rsp+180h] [rbp-108h] BYREF
  __int64 v106; // [rsp+184h] [rbp-104h]
  int v107; // [rsp+18Ch] [rbp-FCh]
  __int64 v108; // [rsp+190h] [rbp-F8h]
  struct _D3DKMT_CREATESTANDARDALLOCATION v109; // [rsp+198h] [rbp-F0h] BYREF
  char v110[8]; // [rsp+1B0h] [rbp-D8h] BYREF
  _BYTE v111[16]; // [rsp+1B8h] [rbp-D0h] BYREF
  DXGADAPTER *v112; // [rsp+1C8h] [rbp-C0h]
  char v113; // [rsp+1D0h] [rbp-B8h]
  __int64 v114; // [rsp+1D8h] [rbp-B0h]
  _BYTE v115[16]; // [rsp+1F8h] [rbp-90h] BYREF
  __int64 v116; // [rsp+208h] [rbp-80h]
  __int64 v117; // [rsp+238h] [rbp-50h]
  char v118; // [rsp+240h] [rbp-48h]

  v94 = a2;
  v88 = -1;
  v89 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v90 = 1;
    v88 = 2003;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2003);
  }
  else
  {
    v90 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v88, 2003LL);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v6 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v8 = *((_QWORD *)Current + 1)) == 0 )
  {
    v8 = v6;
  }
  v99 = v8;
  v11 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v87 = v11;
  if ( !v8 )
  {
    v12 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v12 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v12);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v88, v13);
    v16 = v90 == 0;
LABEL_103:
    if ( !v16 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v88);
    return 3221225485LL;
  }
  memset(&v109, 0, sizeof(v109));
  if ( v11 )
  {
    v17 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v17 = (_D3DKMT_CREATEALLOCATION *)MmUserProbeAddress;
    v95 = *v17;
  }
  else
  {
    v95 = *a1;
  }
  v92 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v91, v95.hDevice, (struct _KTHREAD **)v8, &v92);
  v20 = v92;
  if ( !v92 )
  {
    v21 = WdLogNewEntry5_WdError(v19, v18);
    *(_QWORD *)(v21 + 24) = v95.hDevice;
    *(_QWORD *)(v21 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v21);
LABEL_102:
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v91);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v88, v75);
    v16 = v90 == 0;
    goto LABEL_103;
  }
  v16 = (unsigned int)Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage() == 0;
  Flags = (unsigned int)v95.Flags;
  if ( v16 )
  {
    Flags = *(_DWORD *)&v95.Flags & 0xFFEFFFFF;
    *(_DWORD *)&v95.Flags &= ~0x100000u;
  }
  if ( (Flags & 0x100000) != 0 )
  {
    if ( (Flags & 0x10000) != 0 )
    {
      v26 = WdLogNewEntry5_WdError(v23, v22);
      *(_QWORD *)(v26 + 24) = 8756LL;
      WdLogEvent5_WdError(v26);
      goto LABEL_102;
    }
    if ( !g_OSTestSigningEnabled )
    {
      v27 = WdLogNewEntry5_WdError(v23, v22);
      *(_QWORD *)(v27 + 24) = 8761LL;
      WdLogEvent5_WdError(v27);
      goto LABEL_102;
    }
  }
  NumAllocations = v95.NumAllocations;
  if ( v95.NumAllocations > 0x682AA )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v95.NumAllocations, v24);
    v29[3] = v20;
    v29[4] = v95.NumAllocations;
    v29[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v29);
    goto LABEL_102;
  }
  v30 = *(unsigned __int8 *)(v8 + 347);
  LOBYTE(v30) = v30 & 0x20;
  if ( !(_BYTE)v30 && ((Flags & 8) != 0 || (Flags & 0x100) != 0 || (Flags & 0x1000) != 0 || (Flags & 0x200) != 0)
    || (Flags & 0x20) != 0 && (Flags & 0x10000) == 0 && !(_BYTE)v30 )
  {
LABEL_33:
    v31 = WdLogNewEntry5_WdWarning(v30, NumAllocations, v24);
    *(_QWORD *)(v31 + 24) = v20;
    *(_QWORD *)(v31 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v31);
    goto LABEL_102;
  }
  if ( (Flags & 0x20000) != 0 )
  {
    if ( (Flags & 0x10000) == 0 )
      goto LABEL_33;
  }
  else if ( (Flags & 0x10000) == 0 )
  {
    goto LABEL_43;
  }
  StandardAllocationDriverData = ValidateStandardAllocationParams(&v95, &v109, v11);
  if ( StandardAllocationDriverData < 0 )
    goto LABEL_109;
  LOBYTE(Flags) = v95.Flags;
  NumAllocations = v95.NumAllocations;
LABEL_43:
  if ( (Flags & 2) != 0 && (Flags & 1) == 0 || !v95.hResource && !(_DWORD)NumAllocations )
    goto LABEL_33;
  v97 = v20;
  v33 = *(_QWORD *)(*((_QWORD *)v20 + 2) + 16LL);
  if ( *(int *)(v33 + 2328) >= 0x2000 || *(_BYTE *)(v33 + 2628) )
    v34 = *((_DWORD *)DXGGLOBAL::GetGlobal(v33, NumAllocations) + 311);
  else
    v34 = 0;
  v98 = v34;
  v35 = (struct _KEVENT *)*((_QWORD *)v20 + 2);
  if ( *((_DWORD *)v20 + 108) == 2 )
  {
    if ( KeReadStateEvent(v35 + 5) )
      goto LABEL_57;
    v36 = v35 + 5;
  }
  else
  {
    if ( KeReadStateEvent(v35 + 4) )
      goto LABEL_57;
    v36 = v35 + 4;
  }
  KeWaitForSingleObject(v36, Executive, 0, 0, 0LL);
LABEL_57:
  KeEnterCriticalRegion();
  if ( v34 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v20 + 144, 0LL) )
      goto LABEL_68;
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v20 + 2) + 16LL) + 104LL));
    v38 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v20 + 2) + 16LL));
    DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v20 + 144));
  }
  else
  {
    if ( ExAcquireResourceExclusiveLite(*((PERESOURCE *)v20 + 17), 0) )
      goto LABEL_68;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v20 + 2) + 16LL) + 104LL));
    v38 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v20 + 2) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q_EtwWriteTransfer(v37, &EventBlockThread, v39, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v20 + 17), 1u);
  }
  if ( v38 )
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v20 + 2) + 16LL));
  ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v20 + 2) + 16LL) + 104LL, 0LL);
  KeLeaveCriticalRegion();
LABEL_68:
  v40 = *(volatile signed __int64 **)(*((_QWORD *)v20 + 2) + 16LL);
  v102 = (struct DXGADAPTER *)v40;
  _InterlockedIncrement64(v40 + 3);
  v101 = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v40 + 17, 0LL);
  v103 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v110, (__int64)v92, 2, v41, 0);
  if ( v118 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v115, 0LL);
    v43 = *(unsigned int *)(v116 + 200);
    if ( (_DWORD)v43 != 1 )
    {
LABEL_81:
      COREACCESS::Release((COREACCESS *)v115);
LABEL_82:
      v50 = WdLogNewEntry5_WdWarning(v48, v47, v49);
      *(_QWORD *)(v50 + 24) = v92;
      *(_QWORD *)(v50 + 32) = -1073741130LL;
      WdLogEvent5_WdWarning(v50);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v110);
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v101);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v97);
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v91);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v88, v51);
      if ( v90 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v52, &EventProfilerExit, v53, v88);
      return 3221226166LL;
    }
  }
  if ( v113 )
  {
    v44 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v43, v42);
    v44[3] = 275LL;
    v44[4] = 4LL;
    v44[5] = v111;
    v44[6] = 0LL;
    v44[7] = 0LL;
    WdLogEvent5_WdCriticalError(v44);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v112 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v112 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v45, &EventBlockThread, v46, 72);
      KeWaitForSingleObject((char *)v112 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v112, 0LL);
  }
  v114 = 0LL;
  v113 = 1;
  if ( *(_DWORD *)(v117 + 576) != 1 )
  {
    COREACCESS::Release((COREACCESS *)v111);
    if ( !v118 )
      goto LABEL_82;
    goto LABEL_81;
  }
  v55 = 8LL * v95.NumAllocations;
  if ( !is_mul_ok(v95.NumAllocations, 8uLL) )
    v55 = -1LL;
  v60 = operator new[](v55, 0x4B677844u, PagedPool);
  v100 = v60;
  if ( !v60 )
  {
    v61 = (_QWORD *)WdLogNewEntry5_WdLowResource(v57, v56, v58, v59);
    v61[3] = v92;
    v61[4] = v95.NumAllocations;
    v61[5] = -1073741801LL;
    WdLogEvent5_WdLowResource(v61);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v110);
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v101);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v97);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v91);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v88, v62);
    if ( v90 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v63, &EventProfilerExit, v64, v88);
    return 3221225495LL;
  }
  v65 = v92;
  v66 = *((_QWORD *)v92 + 231);
  if ( v66 )
  {
    v67 = *(_QWORD *)(v66 + 2696);
    v68 = *(OUTPUTDUPL_MGR **)(v67 + 104);
    if ( !v68 || (int)lambda_3a889f2a3da19ece0881b5d4724e0c1b_::_lambda_invoker_cdecl_(v68, v92) >= 0 )
    {
      v104[0] = *(_QWORD *)(*(_QWORD *)(v67 + 16) + 316LL);
      v104[1] = (__int64)lambda_3a889f2a3da19ece0881b5d4724e0c1b_::_lambda_invoker_cdecl_;
      v104[2] = (__int64)v65;
      Global = DXGGLOBAL::GetGlobal(v104[0], v56);
      DXGGLOBAL::IterateOutputDuplMgrsWithCallback(
        Global,
        lambda_f082766c36497653ae8a33afcd4107b6_::_lambda_invoker_cdecl_,
        v104);
    }
  }
  RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
  if ( RemoteOutputDuplMgr )
    OUTPUTDUPL_MGR::CleanUpPendingList(RemoteOutputDuplMgr, v65);
  v95.hGlobalShare = 0;
  v95.hDevice = 0;
  v96 = 0LL;
  v72 = 0;
  v93 = 0;
  if ( (*(_DWORD *)&v95.Flags & 0x10000) != 0 )
  {
    v73 = *(_QWORD *)(*((_QWORD *)v20 + 2) + 16LL);
    if ( *(int *)(v73 + 2596) < 2000 )
    {
      v74 = WdLogNewEntry5_WdError(v73, v71);
      *(_QWORD *)(v74 + 24) = v65;
      *(_QWORD *)(v74 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v74);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v110);
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v101);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v97);
      goto LABEL_102;
    }
    v108 = 0LL;
    Size = v109.ExistingHeapData.Size;
    v106 = 1LL;
    v107 = 7;
    StandardAllocationDriverData = DXGDEVICE::GetStandardAllocationDriverData(
                                     v65,
                                     (enum _D3DKMDT_STANDARDALLOCATION_TYPE)v71,
                                     &Size,
                                     &v93,
                                     &v96);
    if ( StandardAllocationDriverData < 0 )
    {
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v110);
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v101);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v97);
LABEL_109:
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v91);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v88, v76);
      if ( v90 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v77, &EventProfilerExit, v78, v88);
      return (unsigned int)StandardAllocationDriverData;
    }
    v72 = v93;
  }
  v79 = DXGDEVICE::CreateAllocation(
          v65,
          &v95,
          v87,
          0,
          0LL,
          0LL,
          (struct COREDEVICEACCESS *)v110,
          0,
          0LL,
          0LL,
          0LL,
          v94,
          &v109,
          v96,
          v72);
  LODWORD(v94) = v79;
  if ( v87 )
  {
    p_hResource = &a1->hResource;
    if ( (unsigned __int64)&a1->hResource >= MmUserProbeAddress )
      p_hResource = (_DWORD *)MmUserProbeAddress;
    *p_hResource = v95.hResource;
    p_hGlobalShare = &a1->hGlobalShare;
    if ( (unsigned __int64)&a1->hGlobalShare >= MmUserProbeAddress )
      p_hGlobalShare = (_DWORD *)MmUserProbeAddress;
    *p_hGlobalShare = v95.hGlobalShare;
    p_Flags = &a1->Flags;
    if ( (unsigned __int64)&a1->Flags >= MmUserProbeAddress )
      p_Flags = (D3DKMT_CREATEALLOCATIONFLAGS *)MmUserProbeAddress;
    *p_Flags = v95.Flags;
  }
  else
  {
    a1->hResource = v95.hResource;
    a1->hGlobalShare = v95.hGlobalShare;
    a1->Flags = v95.Flags;
  }
  operator delete[](v60);
  operator delete[](v96);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v110);
  v83 = v102;
  ExReleasePushLockSharedEx((char *)v102 + 136, 0LL);
  KeLeaveCriticalRegion();
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v83 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v102 + 2), v102);
  if ( v98 )
    ExReleasePushLockSharedEx((char *)v92 + 144, 0LL);
  else
    ExReleaseResourceLite(*((PERESOURCE *)v92 + 17));
  KeLeaveCriticalRegion();
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v91);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v88, v84);
  if ( v90 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v85, &EventProfilerExit, v86, v88);
  return v79;
}
