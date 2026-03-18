/*
 * XREFs of ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C0103720
 * Callers:
 *     DxgkCreateAllocation @ 0x1C01036E0 (DxgkCreateAllocation.c)
 *     ?VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0239410 (-VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0008348 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000A30C (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C000A358 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C000A884 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000AA48 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000B19C (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D42C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C000E83C (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C000E994 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EB8C (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0024550 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00DB790 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?IterateOutputDuplMgrsWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVOUTPUTDUPL_MGR_INDIRECT@@PEAX@Z1@Z @ 0x1C00DD408 (-IterateOutputDuplMgrsWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVOUTPUTDUPL_MGR_INDIRECT@@PEAX@Z1@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FBEF0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FD2B0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     _lambda_4dffd96e1fbf85f9617d9335535820ae_::_lambda_invoker_cdecl_ @ 0x1C0103600 (_lambda_4dffd96e1fbf85f9617d9335535820ae_--_lambda_invoker_cdecl_.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C0104C00 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C01207F8 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0208CF4 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetStandardAllocationDriverData@DXGDEVICE@@QEAAJW4_D3DKMDT_STANDARDALLOCATION_TYPE@@PEAXPEAIPEAPEAX@Z @ 0x1C02240C0 (-GetStandardAllocationDriverData@DXGDEVICE@@QEAAJW4_D3DKMDT_STANDARDALLOCATION_TYPE@@PEAXPEAIPEA.c)
 *     ?ValidateStandardAllocationParams@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DKMT_CREATESTANDARDALLOCATION@@_N@Z @ 0x1C0224E7C (-ValidateStandardAllocationParams@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DKMT_CREATESTANDARDAL.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C026494C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCreateAllocationInternal(
        struct _D3DKMT_CREATEALLOCATION *a1,
        struct DXGALLOCATION **a2,
        __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct DXGPROCESS *v10; // rdi
  unsigned __int8 *v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int8 v14; // di
  _D3DKMT_CREATEALLOCATION *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  struct DXGDEVICE *v19; // r14
  __int64 NumAllocations; // rdx
  __int64 v21; // rcx
  char Flags; // al
  __int64 v23; // rcx
  int v24; // edi
  struct _KEVENT *v25; // r15
  volatile signed __int64 *v26; // rdi
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // r8
  SIZE_T v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  DXGDEVICE *v37; // r15
  __int64 v38; // rax
  __int64 v39; // rdi
  __int64 v40; // rcx
  DXGGLOBAL *Global; // rax
  void *v42; // r12
  unsigned int v43; // eax
  unsigned __int8 v44; // r14
  int StandardAllocationDriverData; // edi
  _DWORD *p_hResource; // rcx
  _DWORD *p_hGlobalShare; // rcx
  D3DKMT_CREATEALLOCATIONFLAGS *p_Flags; // rcx
  struct DXGADAPTER *v49; // rbx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v54; // rcx
  unsigned __int8 v55; // di
  __int64 v56; // r8
  struct DXGTHREAD *Current; // rax
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  bool v62; // zf
  __int64 v63; // rax
  _QWORD *v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rax
  struct _KEVENT *v72; // rcx
  unsigned __int8 v73; // di
  _QWORD *v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  _QWORD *v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // rcx
  __int64 v87; // rax
  __int64 v88; // rdx
  struct DXGDEVICE *v89; // [rsp+88h] [rbp-220h] BYREF
  unsigned __int8 v90; // [rsp+90h] [rbp-218h]
  void *v91; // [rsp+98h] [rbp-210h] BYREF
  int v92; // [rsp+A0h] [rbp-208h] BYREF
  __int64 v93; // [rsp+A8h] [rbp-200h]
  char v94; // [rsp+B0h] [rbp-1F8h]
  void *v95; // [rsp+B8h] [rbp-1F0h]
  struct DXGDEVICE *v96; // [rsp+C0h] [rbp-1E8h] BYREF
  struct DXGPROCESS *v97; // [rsp+C8h] [rbp-1E0h]
  struct DXGALLOCATION **v98; // [rsp+D0h] [rbp-1D8h]
  unsigned int v99[2]; // [rsp+D8h] [rbp-1D0h]
  unsigned int v100[4]; // [rsp+E0h] [rbp-1C8h] BYREF
  _D3DKMT_CREATEALLOCATION v101; // [rsp+F0h] [rbp-1B8h] BYREF
  struct DXGDEVICE *v102; // [rsp+140h] [rbp-168h] BYREF
  int v103; // [rsp+148h] [rbp-160h]
  __int64 v104; // [rsp+150h] [rbp-158h] BYREF
  struct DXGADAPTER *v105; // [rsp+158h] [rbp-150h]
  char v106; // [rsp+160h] [rbp-148h]
  __int64 v107[3]; // [rsp+168h] [rbp-140h] BYREF
  int Size; // [rsp+198h] [rbp-110h] BYREF
  __int64 v109; // [rsp+19Ch] [rbp-10Ch]
  int v110; // [rsp+1A4h] [rbp-104h]
  __int64 v111; // [rsp+1A8h] [rbp-100h]
  struct _D3DKMT_CREATESTANDARDALLOCATION v112; // [rsp+1B0h] [rbp-F8h] BYREF
  _BYTE v113[8]; // [rsp+1D0h] [rbp-D8h] BYREF
  _BYTE v114[16]; // [rsp+1D8h] [rbp-D0h] BYREF
  DXGADAPTER *v115; // [rsp+1E8h] [rbp-C0h]
  char v116; // [rsp+1F0h] [rbp-B8h]
  __int64 v117; // [rsp+1F8h] [rbp-B0h]
  _BYTE v118[16]; // [rsp+218h] [rbp-90h] BYREF
  __int64 v119; // [rsp+228h] [rbp-80h]
  __int64 v120; // [rsp+258h] [rbp-50h]
  char v121; // [rsp+260h] [rbp-48h]

  v98 = a2;
  v92 = -1;
  v93 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v94 = 1;
    v92 = 2003;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2003);
  }
  else
  {
    v94 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v92, 2003LL);
  CurrentProcess = PsGetCurrentProcess(v5, v4);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v10 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent(v9, v8)) == 0LL
    || (v11 = (unsigned __int8 *)*((_QWORD *)Current + 1), (v97 = (struct DXGPROCESS *)v11) == 0LL) )
  {
    v11 = (unsigned __int8 *)v10;
    v97 = v10;
  }
  *(_QWORD *)v99 = v11;
  v14 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v90 = v14;
  if ( !v11 )
  {
    v58 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v58 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v58);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v92, v59);
    v62 = v94 == 0;
LABEL_79:
    if ( v62 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225485LL;
    goto LABEL_157;
  }
  memset(&v112, 0, sizeof(v112));
  if ( v14 )
  {
    v15 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v15 = (_D3DKMT_CREATEALLOCATION *)MmUserProbeAddress;
    v101 = *v15;
  }
  else
  {
    v101 = *a1;
  }
  v96 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v89, v101.hDevice, (struct _KTHREAD **)v11, &v96);
  v19 = v96;
  if ( !v96 )
  {
    v63 = WdLogNewEntry5_WdError(v17, v16);
    *(_QWORD *)(v63 + 24) = v101.hDevice;
    *(_QWORD *)(v63 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v63);
    if ( v89 && _InterlockedExchangeAdd64((volatile signed __int64 *)v89 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v89 + 2), v89);
    goto LABEL_78;
  }
  NumAllocations = v101.NumAllocations;
  if ( v101.NumAllocations > 0x682AA )
  {
    v64 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v101.NumAllocations, v18);
    v64[3] = v19;
    v64[4] = v101.NumAllocations;
    v64[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v64);
    if ( v89 && _InterlockedExchangeAdd64((volatile signed __int64 *)v89 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v89 + 2), v89);
    goto LABEL_78;
  }
  v21 = v11[347];
  LOBYTE(v21) = v21 & 0x20;
  Flags = (char)v101.Flags;
  if ( !(_BYTE)v21
    && ((*(_BYTE *)&v101.Flags & 8) != 0
     || (*(_WORD *)&v101.Flags & 0x100) != 0
     || (*(_WORD *)&v101.Flags & 0x1000) != 0
     || (*(_WORD *)&v101.Flags & 0x200) != 0) )
  {
    v65 = WdLogNewEntry5_WdWarning(v21, v101.NumAllocations, v18);
    *(_QWORD *)(v65 + 24) = v19;
    *(_QWORD *)(v65 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v65);
    if ( v89 && _InterlockedExchangeAdd64((volatile signed __int64 *)v89 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v89 + 2), v89);
    goto LABEL_78;
  }
  if ( (*(_BYTE *)&v101.Flags & 0x20) != 0 && (*(_DWORD *)&v101.Flags & 0x10000) == 0 && !(_BYTE)v21 )
  {
    v66 = WdLogNewEntry5_WdWarning(v21, v101.NumAllocations, v18);
    *(_QWORD *)(v66 + 24) = v19;
    *(_QWORD *)(v66 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v66);
    if ( v89 && _InterlockedExchangeAdd64((volatile signed __int64 *)v89 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v89 + 2), v89);
LABEL_78:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v92, v70);
    v62 = v94 == 0;
    goto LABEL_79;
  }
  if ( (*(_DWORD *)&v101.Flags & 0x20000) != 0 )
  {
    if ( (*(_DWORD *)&v101.Flags & 0x10000) == 0 )
    {
      v67 = WdLogNewEntry5_WdWarning(v21, v101.NumAllocations, v18);
      *(_QWORD *)(v67 + 24) = v19;
      *(_QWORD *)(v67 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v67);
      if ( v89 && _InterlockedExchangeAdd64((volatile signed __int64 *)v89 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v89 + 2), v89);
      goto LABEL_78;
    }
  }
  else if ( (*(_DWORD *)&v101.Flags & 0x10000) == 0 )
  {
    goto LABEL_21;
  }
  StandardAllocationDriverData = ValidateStandardAllocationParams(&v101, &v112, v14);
  if ( StandardAllocationDriverData < 0 )
  {
    if ( v89 && _InterlockedExchangeAdd64((volatile signed __int64 *)v89 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
LABEL_109:
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v89 + 2), v89);
LABEL_110:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v92, v68);
    if ( !v94 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return (unsigned int)StandardAllocationDriverData;
    goto LABEL_166;
  }
  Flags = (char)v101.Flags;
  NumAllocations = v101.NumAllocations;
LABEL_21:
  if ( (Flags & 2) != 0 && (Flags & 1) == 0 )
  {
    v69 = WdLogNewEntry5_WdWarning(v21, NumAllocations, v18);
    *(_QWORD *)(v69 + 24) = v19;
    *(_QWORD *)(v69 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v69);
    if ( v89 && _InterlockedExchangeAdd64((volatile signed __int64 *)v89 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v89 + 2), v89);
    goto LABEL_78;
  }
  if ( !v101.hResource && !(_DWORD)NumAllocations )
  {
    v71 = WdLogNewEntry5_WdWarning(v21, NumAllocations, v18);
    *(_QWORD *)(v71 + 24) = v19;
    *(_QWORD *)(v71 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v71);
    if ( v89 && _InterlockedExchangeAdd64((volatile signed __int64 *)v89 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v89 + 2), v89);
    goto LABEL_78;
  }
  v102 = v19;
  v23 = *(_QWORD *)(*((_QWORD *)v19 + 2) + 16LL);
  if ( *(int *)(v23 + 2304) >= 0x2000 || *(_BYTE *)(v23 + 2604) )
  {
    v24 = *((_DWORD *)DXGGLOBAL::GetGlobal(v23, NumAllocations) + 283);
    v103 = v24;
  }
  else
  {
    v24 = 0;
    v103 = 0;
  }
  v25 = (struct _KEVENT *)*((_QWORD *)v19 + 2);
  if ( *((_DWORD *)v19 + 108) == 2 )
  {
    if ( KeReadStateEvent(v25 + 5) )
      goto LABEL_29;
    v72 = v25 + 5;
  }
  else
  {
    if ( KeReadStateEvent(v25 + 4) )
      goto LABEL_29;
    v72 = v25 + 4;
  }
  KeWaitForSingleObject(v72, Executive, 0, 0, 0LL);
LABEL_29:
  KeEnterCriticalRegion();
  if ( v24 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v19 + 144, 0LL) )
      goto LABEL_31;
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v19 + 2) + 16LL) + 104LL));
    v73 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v19 + 2) + 16LL));
    DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v19 + 144));
    if ( !v73 )
    {
LABEL_71:
      ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v19 + 2) + 16LL) + 104LL, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_31;
    }
LABEL_128:
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v19 + 2) + 16LL));
    goto LABEL_71;
  }
  if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)v19 + 17), 0) )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v19 + 2) + 16LL) + 104LL));
    v55 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v19 + 2) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q_EtwWriteTransfer(v54, &EventBlockThread, v56, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v19 + 17), 1u);
    if ( !v55 )
      goto LABEL_71;
    goto LABEL_128;
  }
LABEL_31:
  v26 = *(volatile signed __int64 **)(*((_QWORD *)v19 + 2) + 16LL);
  v105 = (struct DXGADAPTER *)v26;
  _InterlockedIncrement64(v26 + 3);
  v104 = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v26 + 17, 0LL);
  v106 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v113, (__int64)v96, 2, v27, 0);
  if ( v121 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v118, 0LL);
    v29 = *(unsigned int *)(v119 + 200);
    if ( (_DWORD)v29 != 1 )
    {
LABEL_136:
      COREACCESS::Release((COREACCESS *)v118);
LABEL_137:
      v78 = WdLogNewEntry5_WdWarning(v76, v75, v77);
      *(_QWORD *)(v78 + 24) = v96;
      *(_QWORD *)(v78 + 32) = -1073741130LL;
      WdLogEvent5_WdWarning(v78);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v113);
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v104);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v102);
      if ( v89 && _InterlockedExchangeAdd64((volatile signed __int64 *)v89 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v89 + 2), v89);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v92, v79);
      if ( v94 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v80, &EventProfilerExit, v81, v92);
      return 3221226166LL;
    }
  }
  if ( v116 )
  {
    v74 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v29, v28);
    v74[3] = 275LL;
    v74[4] = 4LL;
    v74[5] = v114;
    v74[6] = 0LL;
    v74[7] = 0LL;
    WdLogEvent5_WdCriticalError(v74);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v115 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v115 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v30, &EventBlockThread, v31, 72);
      KeWaitForSingleObject((char *)v115 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v115, 0LL);
  }
  v117 = 0LL;
  v116 = 1;
  if ( *(_DWORD *)(v120 + 576) != 1 )
  {
    COREACCESS::Release((COREACCESS *)v114);
    if ( !v121 )
      goto LABEL_137;
    goto LABEL_136;
  }
  v32 = 8LL * v101.NumAllocations;
  if ( !is_mul_ok(v101.NumAllocations, 8uLL) )
    v32 = -1LL;
  v95 = operator new[](v32, 0x4B677844u, PagedPool);
  if ( v95 )
  {
    v37 = v96;
    v38 = *((_QWORD *)v96 + 231);
    if ( v38 )
    {
      v39 = *(_QWORD *)(v38 + 2672);
      v40 = *(_QWORD *)(v39 + 104);
      if ( !v40 || (int)lambda_4dffd96e1fbf85f9617d9335535820ae_::_lambda_invoker_cdecl_(v40, v96) >= 0 )
      {
        v107[0] = *(_QWORD *)(*(_QWORD *)(v39 + 16) + 316LL);
        v107[1] = (__int64)lambda_4dffd96e1fbf85f9617d9335535820ae_::_lambda_invoker_cdecl_;
        v107[2] = (__int64)v37;
        Global = DXGGLOBAL::GetGlobal(v107[0], v33);
        DXGGLOBAL::IterateOutputDuplMgrsWithCallback(
          Global,
          lambda_f082766c36497653ae8a33afcd4107b6_::_lambda_invoker_cdecl_,
          v107);
      }
    }
    v101.hGlobalShare = 0;
    v101.hDevice = 0;
    v42 = 0LL;
    v91 = 0LL;
    v43 = 0;
    v100[0] = 0;
    if ( (*(_DWORD *)&v101.Flags & 0x10000) == 0 )
    {
LABEL_46:
      v44 = v90;
      StandardAllocationDriverData = DXGDEVICE::CreateAllocation(
                                       v37,
                                       &v101,
                                       v90,
                                       0,
                                       0LL,
                                       0LL,
                                       (struct COREDEVICEACCESS *)v113,
                                       0,
                                       0LL,
                                       0LL,
                                       0LL,
                                       (unsigned __int64 *)v98,
                                       &v112,
                                       v42,
                                       v43);
      if ( v44 )
      {
        p_hResource = &a1->hResource;
        if ( (unsigned __int64)&a1->hResource >= MmUserProbeAddress )
          p_hResource = (_DWORD *)MmUserProbeAddress;
        *p_hResource = v101.hResource;
        p_hGlobalShare = &a1->hGlobalShare;
        if ( (unsigned __int64)&a1->hGlobalShare >= MmUserProbeAddress )
          p_hGlobalShare = (_DWORD *)MmUserProbeAddress;
        *p_hGlobalShare = v101.hGlobalShare;
        p_Flags = &a1->Flags;
        if ( (unsigned __int64)&a1->Flags >= MmUserProbeAddress )
          p_Flags = (D3DKMT_CREATEALLOCATIONFLAGS *)MmUserProbeAddress;
        *p_Flags = v101.Flags;
      }
      else
      {
        a1->hResource = v101.hResource;
        a1->hGlobalShare = v101.hGlobalShare;
        a1->Flags = v101.Flags;
      }
      operator delete[](v95);
      operator delete[](v42);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v113);
      v49 = v105;
      ExReleasePushLockSharedEx((char *)v105 + 136, 0LL);
      KeLeaveCriticalRegion();
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v49 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v105 + 2), v105);
      if ( v103 )
        ExReleasePushLockSharedEx((char *)v96 + 144, 0LL);
      else
        ExReleaseResourceLite(*((PERESOURCE *)v96 + 17));
      KeLeaveCriticalRegion();
      if ( v89 && _InterlockedExchangeAdd64((volatile signed __int64 *)v89 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v89 + 2), v89);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v92, v50);
      if ( !v94 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
        return (unsigned int)StandardAllocationDriverData;
LABEL_166:
      McTemplateK0q_EtwWriteTransfer(v51, &EventProfilerExit, v52, v92);
      return (unsigned int)StandardAllocationDriverData;
    }
    v86 = *(_QWORD *)(*((_QWORD *)v19 + 2) + 16LL);
    if ( *(int *)(v86 + 2572) < 2000 )
    {
      v87 = WdLogNewEntry5_WdError(v86, v33);
      *(_QWORD *)(v87 + 24) = v37;
      *(_QWORD *)(v87 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v87);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v113);
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v104);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v102);
      if ( v89 && _InterlockedExchangeAdd64((volatile signed __int64 *)v89 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v89 + 2), v89);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v92, v88);
      if ( !v94 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
        return 3221225485LL;
LABEL_157:
      McTemplateK0q_EtwWriteTransfer(v60, &EventProfilerExit, v61, v92);
      return 3221225485LL;
    }
    v111 = 0LL;
    Size = v112.ExistingHeapData.Size;
    v109 = 1LL;
    v110 = 7;
    StandardAllocationDriverData = DXGDEVICE::GetStandardAllocationDriverData(
                                     v37,
                                     (enum _D3DKMDT_STANDARDALLOCATION_TYPE)v33,
                                     &Size,
                                     v100,
                                     &v91);
    if ( StandardAllocationDriverData >= 0 )
    {
      v42 = v91;
      v43 = v100[0];
      goto LABEL_46;
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v113);
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v104);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v102);
    if ( v89 && _InterlockedExchangeAdd64((volatile signed __int64 *)v89 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      goto LABEL_109;
    goto LABEL_110;
  }
  v82 = (_QWORD *)WdLogNewEntry5_WdLowResource(v34, v33, v35, v36);
  v82[3] = v96;
  v82[4] = v101.NumAllocations;
  v82[5] = -1073741801LL;
  WdLogEvent5_WdLowResource(v82);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v113);
  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v104);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v102);
  if ( v89 && _InterlockedExchangeAdd64((volatile signed __int64 *)v89 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v89 + 2), v89);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v92, v83);
  if ( v94 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v84, &EventProfilerExit, v85, v92);
  return 3221225495LL;
}
