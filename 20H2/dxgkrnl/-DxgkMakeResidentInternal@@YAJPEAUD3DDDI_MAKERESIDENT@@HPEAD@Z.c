/*
 * XREFs of ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEAD@Z @ 0x1C014DC50
 * Callers:
 *     ?VmBusMakeResidentCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00D7900 (-VmBusMakeResidentCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@PEAD@Z @ 0x1C014DB30 (-DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@PEAD@Z.c)
 *     DxgkMakeResident @ 0x1C014DC30 (DxgkMakeResident.c)
 *     ?VmBusMakeResident@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0241C90 (-VmBusMakeResident@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000217C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C00026B8 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0003EE0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0003FB0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C00042D8 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0004418 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C00056F8 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000713C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0019694 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z @ 0x1C001DBC0 (-Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C00249E0 (-GetAllocationUnsafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ @ 0x1C0024CA0 (-ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ.c)
 *     McTemplateK0pxqt_EtwWriteTransfer @ 0x1C00259A4 (McTemplateK0pxqt_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027400 (memset.c)
 *     McTemplateK0qxx_EtwWriteTransfer @ 0x1C00467D8 (McTemplateK0qxx_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00F9DB0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FBBA0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FBFC0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C020BD94 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K2@Z @ 0x1C02488A8 (-VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGA.c)
 *     ??0?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0CI@@@QEAA@XZ @ 0x1C027B5E4 (--0-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0CI@@@QEAA@XZ.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0CI@@@QEAA@XZ @ 0x1C027B624 (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0CI@@@QEAA@XZ.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0283E84 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DxgkMakeResidentInternal(struct D3DDDI_MAKERESIDENT *a1, int a2, char *a3)
{
  struct D3DDDI_MAKERESIDENT *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  ULONG64 v9; // rdx
  __int128 *v10; // rcx
  __int64 v11; // r8
  struct DXGPROCESS *v12; // rbx
  struct DXGPROCESS *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  struct DXGPAGINGQUEUE *v17; // r15
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 NumAllocations; // rbx
  _BYTE *v23; // r13
  _BYTE *PoolWithTag; // r12
  unsigned int *AllocationList; // rsi
  unsigned int *v26; // r13
  __int64 v27; // rdi
  __int64 v28; // rcx
  int v29; // ebx
  struct _KEVENT *v30; // r15
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // r8
  char *v36; // rbx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  struct _KTHREAD **v42; // rbx
  struct _KTHREAD **v43; // r15
  unsigned int *v44; // rcx
  unsigned int v45; // r8d
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  struct _EX_RUNDOWN_REF *v49; // rax
  ULONG_PTR Count; // rbx
  ULONG_PTR *v51; // rcx
  _QWORD *v52; // rbx
  struct _EX_RUNDOWN_REF *v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  struct DXGTHREAD *v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  struct DXGTHREAD *v59; // rbx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  struct DXGPAGINGQUEUE *v63; // rdi
  __int64 v64; // rsi
  struct D3DDDI_MAKERESIDENT *v65; // r15
  int v66; // ebx
  unsigned __int64 *p_PagingFenceValue; // r13
  __int64 v68; // rdx
  __int64 v69; // rcx
  int Resident; // ebx
  __int64 v71; // r8
  int v72; // r9d
  struct D3DDDI_MAKERESIDENT *v73; // r8
  _QWORD *v74; // rcx
  _QWORD *v75; // rcx
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  struct DXGTHREAD *Current; // rax
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  bool v85; // zf
  __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rax
  __int64 v89; // rax
  bool v90; // cf
  SIZE_T v91; // rax
  char *v92; // rax
  struct _KEVENT *v93; // rcx
  __int64 v94; // rcx
  unsigned __int8 v95; // bl
  __int64 v96; // r8
  unsigned __int8 v97; // bl
  _QWORD *v98; // rax
  _BYTE *v99; // rcx
  signed __int64 v100; // rbx
  char v101; // al
  _BYTE *v102; // rax
  _BYTE *v103; // rax
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  struct DXGTHREAD *v107; // rax
  __int64 v108; // rax
  __int64 v109; // rdx
  struct _EX_RUNDOWN_REF *v110; // rax
  __int64 v111; // rdx
  __int64 v112; // rdx
  __int64 v113; // rax
  _QWORD *v114; // rax
  __int64 v115; // rax
  __int64 v116; // rdi
  unsigned int v117; // esi
  unsigned __int64 *p_NumBytesToTrim; // rbx
  unsigned int HostProcess; // eax
  __int64 v120; // rax
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // r8
  char v124; // [rsp+50h] [rbp-458h]
  int v125; // [rsp+58h] [rbp-450h] BYREF
  __int64 v126; // [rsp+60h] [rbp-448h]
  char v127; // [rsp+68h] [rbp-440h]
  struct _EX_RUNDOWN_REF *v128; // [rsp+70h] [rbp-438h] BYREF
  DXGPAGINGQUEUE *v129; // [rsp+78h] [rbp-430h] BYREF
  struct D3DDDI_MAKERESIDENT *v130; // [rsp+80h] [rbp-428h]
  struct DXGALLOCATIONREFERENCE *v131; // [rsp+88h] [rbp-420h]
  struct DXGPAGINGQUEUE *v132; // [rsp+90h] [rbp-418h] BYREF
  struct D3DDDI_MAKERESIDENT *v133; // [rsp+98h] [rbp-410h]
  __int64 v134; // [rsp+A0h] [rbp-408h] BYREF
  int v135; // [rsp+A8h] [rbp-400h]
  struct DXGPROCESS *v136; // [rsp+B0h] [rbp-3F8h]
  char *v137; // [rsp+B8h] [rbp-3F0h]
  ULONG_PTR *v138; // [rsp+C0h] [rbp-3E8h]
  struct DXGALLOCATIONREFERENCE *v139; // [rsp+C8h] [rbp-3E0h]
  __int64 v140; // [rsp+D0h] [rbp-3D8h]
  unsigned int v141; // [rsp+D8h] [rbp-3D0h]
  struct D3DDDI_MAKERESIDENT *v142; // [rsp+E0h] [rbp-3C8h]
  _BYTE v143[24]; // [rsp+E8h] [rbp-3C0h] BYREF
  __int128 v144; // [rsp+100h] [rbp-3A8h] BYREF
  __int128 v145; // [rsp+110h] [rbp-398h]
  __int128 v146; // [rsp+120h] [rbp-388h]
  PVOID P; // [rsp+130h] [rbp-378h]
  _BYTE v148[320]; // [rsp+138h] [rbp-370h] BYREF
  int v149; // [rsp+278h] [rbp-230h]
  char v150[8]; // [rsp+280h] [rbp-228h] BYREF
  _BYTE v151[16]; // [rsp+288h] [rbp-220h] BYREF
  DXGADAPTER *v152; // [rsp+298h] [rbp-210h]
  char v153; // [rsp+2A0h] [rbp-208h]
  _BYTE *v154; // [rsp+2A8h] [rbp-200h]
  _BYTE v155[24]; // [rsp+2B0h] [rbp-1F8h] BYREF
  _BYTE v156[16]; // [rsp+2C8h] [rbp-1E0h] BYREF
  __int64 v157; // [rsp+2D8h] [rbp-1D0h]
  __int64 v158; // [rsp+308h] [rbp-1A0h]
  char v159; // [rsp+310h] [rbp-198h]
  _BYTE *v160; // [rsp+320h] [rbp-188h] BYREF
  _BYTE v161[320]; // [rsp+328h] [rbp-180h] BYREF
  int v162; // [rsp+468h] [rbp-40h]

  v137 = a3;
  v4 = a1;
  v133 = a1;
  v142 = a1;
  v125 = -1;
  v126 = 0LL;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v127 = 1;
    v125 = 2115;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 2115);
  }
  else
  {
    v127 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v125, 2115LL);
  CurrentProcess = PsGetCurrentProcess(v6, v5);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v12 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent((__int64)v10, v9)) == 0LL
    || (v13 = (struct DXGPROCESS *)*((_QWORD *)Current + 1), (v136 = v13) == 0LL) )
  {
    v13 = v12;
    v136 = v12;
    if ( !v12 )
    {
      v81 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v81 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v81);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v125, v82);
      v85 = v127 == 0;
LABEL_97:
      if ( !v85 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        goto LABEL_171;
      return 3221225485LL;
    }
  }
  v144 = 0LL;
  v145 = 0LL;
  v146 = 0LL;
  v130 = 0LL;
  if ( a2 )
  {
    v10 = (__int128 *)v4;
    v9 = MmUserProbeAddress;
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v10 = (__int128 *)MmUserProbeAddress;
    v144 = *v10;
    v145 = v10[1];
    v146 = v10[2];
    v4 = (struct D3DDDI_MAKERESIDENT *)&v144;
    v130 = (struct D3DDDI_MAKERESIDENT *)&v144;
    v13 = v136;
  }
  else
  {
    v130 = v4;
  }
  if ( !v4->NumAllocations )
  {
    v86 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    *(_QWORD *)(v86 + 24) = -1073741811LL;
LABEL_95:
    WdLogEvent5_WdWarning(v86);
LABEL_96:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v125, v87);
    v85 = v127 == 0;
    goto LABEL_97;
  }
  if ( !v4->AllocationList )
  {
    v86 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    *(_QWORD *)(v86 + 24) = 498LL;
    goto LABEL_95;
  }
  if ( v4->Flags.Value >= 4 )
  {
    v86 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    *(_QWORD *)(v86 + 24) = 505LL;
    goto LABEL_95;
  }
  v132 = 0LL;
  DXGPAGINGQUEUEBYHANDLE::Open((DXGPAGINGQUEUEBYHANDLE *)&v129, v4->hPagingQueue, (struct _KTHREAD **)v13, &v132, 1);
  v17 = v132;
  if ( !v132 )
  {
    v88 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    *(_QWORD *)(v88 + 24) = v4->hPagingQueue;
    *(_QWORD *)(v88 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v88);
LABEL_104:
    if ( v129 )
      DXGPAGINGQUEUE::ReleaseReference(v129, v87);
    goto LABEL_96;
  }
  PagedPoolArray<DXGALLOCATIONREFERENCE,40>::PagedPoolArray<DXGALLOCATIONREFERENCE,40>(&v160);
  P = 0LL;
  v149 = 0;
  NumAllocations = v4->NumAllocations;
  if ( (unsigned int)NumAllocations <= 0x28 )
  {
    v23 = v161;
    v131 = (struct DXGALLOCATIONREFERENCE *)v161;
    goto LABEL_16;
  }
  v18 = 0xFFFFFFFFFFFFFFFFuLL % NumAllocations;
  if ( 0xFFFFFFFFFFFFFFFFuLL / NumAllocations >= 8 )
  {
    v89 = 8 * NumAllocations;
    if ( !is_mul_ok(NumAllocations, 8uLL) )
      v89 = -1LL;
    v90 = __CFADD__(v89, 8LL);
    v91 = v89 + 8;
    if ( v90 )
      v91 = -1LL;
    v92 = (char *)operator new[](v91, 0x4B677844u, PagedPool);
    if ( !v92 )
    {
      v23 = 0LL;
      v131 = 0LL;
      v160 = 0LL;
      goto LABEL_17;
    }
    *(_QWORD *)v92 = NumAllocations;
    v23 = v92 + 8;
    v131 = (struct DXGALLOCATIONREFERENCE *)(v92 + 8);
    `vector constructor iterator'(
      v92 + 8,
      8LL,
      NumAllocations,
      (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
LABEL_16:
    v160 = v23;
LABEL_17:
    v162 = NumAllocations;
    LODWORD(NumAllocations) = v4->NumAllocations;
    goto LABEL_18;
  }
  v23 = 0LL;
  v131 = 0LL;
LABEL_18:
  if ( (unsigned int)NumAllocations > 0x28 )
  {
    v18 = 0xFFFFFFFFFFFFFFFFuLL % (unsigned int)NumAllocations;
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)NumAllocations < 8 )
    {
      PoolWithTag = 0LL;
      goto LABEL_22;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * (unsigned int)NumAllocations, 0x4B677844u);
    P = PoolWithTag;
  }
  else
  {
    PoolWithTag = v148;
    P = v148;
  }
  v149 = NumAllocations;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 8LL * (unsigned int)NumAllocations);
    PoolWithTag = P;
  }
LABEL_22:
  if ( !v23 || !PoolWithTag )
  {
    v120 = WdLogNewEntry5_WdLowResource(v19, v18, v20, v21);
    *(_QWORD *)(v120 + 24) = 540LL;
    WdLogEvent5_WdLowResource(v120);
    if ( P != v148 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v149 = 0;
    PagedPoolArray<DXGALLOCATIONREFERENCE,40>::~PagedPoolArray<DXGALLOCATIONREFERENCE,40>(&v160);
    if ( v129 )
      DXGPAGINGQUEUE::ReleaseReference(v129, v121);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v125, v121);
    if ( v127 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v122, &EventProfilerExit, v123, v125);
    return 3221225495LL;
  }
  AllocationList = (unsigned int *)v4->AllocationList;
  v26 = &AllocationList[v4->NumAllocations];
  v139 = v131;
  v138 = (ULONG_PTR *)PoolWithTag;
  v27 = *((_QWORD *)v17 + 2);
  v140 = v27;
  v134 = v27;
  v28 = *(_QWORD *)(*(_QWORD *)(v27 + 16) + 16LL);
  if ( *(int *)(v28 + 2328) >= 0x2000 || *(_BYTE *)(v28 + 2628) )
    v29 = *((_DWORD *)DXGGLOBAL::GetGlobal(v28, v18) + 311);
  else
    v29 = 0;
  v135 = v29;
  v30 = *(struct _KEVENT **)(v27 + 16);
  if ( *(_DWORD *)(v27 + 432) == 2 )
  {
    if ( KeReadStateEvent(v30 + 5) )
      goto LABEL_28;
    v93 = v30 + 5;
  }
  else
  {
    if ( KeReadStateEvent(v30 + 4) )
      goto LABEL_28;
    v93 = v30 + 4;
  }
  KeWaitForSingleObject(v93, Executive, 0, 0, 0LL);
LABEL_28:
  KeEnterCriticalRegion();
  if ( !v29 )
  {
    if ( ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v27 + 136), 0) )
      goto LABEL_30;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v27 + 16) + 16LL) + 104LL));
    v95 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v27 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q_EtwWriteTransfer(v94, &EventBlockThread, v96, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v27 + 136), 1u);
    if ( v95 )
      goto LABEL_129;
    goto LABEL_130;
  }
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v27 + 144, 0LL) )
  {
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v27 + 16) + 16LL) + 104LL));
    v97 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v27 + 16) + 16LL));
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v27 + 144));
    if ( v97 )
LABEL_129:
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v27 + 16) + 16LL));
LABEL_130:
    ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v27 + 16) + 16LL) + 104LL, 0LL);
    KeLeaveCriticalRegion();
  }
LABEL_30:
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v150, v27, 0, v31, 0);
  if ( v159 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v156, 0LL);
    v33 = *(unsigned int *)(v157 + 200);
    if ( (_DWORD)v33 != 1 )
    {
LABEL_148:
      COREACCESS::Release((COREACCESS *)v156);
LABEL_149:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v150);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v134);
      if ( P != v148 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v149 = 0;
      PagedPoolArray<DXGALLOCATIONREFERENCE,40>::~PagedPoolArray<DXGALLOCATIONREFERENCE,40>(&v160);
      if ( v129 )
        DXGPAGINGQUEUE::ReleaseReference(v129, v104);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v125, v104);
      if ( v127 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v105, &EventProfilerExit, v106, v125);
      return 3221226166LL;
    }
  }
  if ( v153 )
  {
    v98 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v33, v32);
    v98[3] = 275LL;
    v98[4] = 4LL;
    v98[5] = v151;
    v98[6] = 0LL;
    v98[7] = 0LL;
    WdLogEvent5_WdCriticalError(v98);
  }
  if ( KeGetCurrentThread() == *((struct _KTHREAD **)v152 + 23) )
  {
    v36 = v137;
  }
  else
  {
    if ( !KeReadStateEvent((PRKEVENT)v152 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v34, &EventBlockThread, v35, 72);
      KeWaitForSingleObject((char *)v152 + 48, Executive, 0, 0, 0LL);
    }
    v36 = v137;
    DXGADAPTER::AcquireCoreResourceShared(v152, v137);
  }
  v154 = 0LL;
  if ( v36 )
  {
    v32 = 17LL;
    v99 = v155;
    v100 = v36 - v155;
    do
    {
      if ( v32 == -2147483629 )
        break;
      v101 = v99[v100];
      if ( !v101 )
        break;
      *v99++ = v101;
      --v32;
    }
    while ( v32 );
    v102 = v99 - 1;
    if ( v32 )
      v102 = v99;
    *v102 = 0;
    v103 = v155;
    if ( !v32 )
      v103 = v154;
    v154 = v103;
  }
  v153 = 1;
  if ( *(_DWORD *)(v158 + 576) != 1 )
  {
    COREACCESS::Release((COREACCESS *)v151);
    if ( !v159 )
      goto LABEL_149;
    goto LABEL_148;
  }
  v37 = *(_QWORD *)(*(_QWORD *)(v27 + 16) + 16LL);
  v124 = *(_BYTE *)(v37 + 209);
  v38 = PsGetCurrentProcess(v37, v32);
  v39 = PsGetProcessDxgProcess(v38);
  v42 = (struct _KTHREAD **)v39;
  if ( v39 && (*(_BYTE *)(v39 + 347) & 0x10) == 0
    || (v107 = DXGTHREAD::GetCurrent(v41, v40)) == 0LL
    || (v43 = (struct _KTHREAD **)*((_QWORD *)v107 + 1)) == 0LL )
  {
    v43 = v42;
  }
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v143, v43);
  while ( 1 )
  {
    if ( AllocationList == v26 )
    {
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v143);
      if ( v124 )
      {
        v116 = *(_QWORD *)(*(_QWORD *)(v27 + 16) + 16LL);
        v117 = *((_DWORD *)v132 + 7);
        v65 = v130;
        p_PagingFenceValue = &v130->PagingFenceValue;
        p_NumBytesToTrim = &v130->NumBytesToTrim;
        HostProcess = DXGPROCESS::GetHostProcess(v136);
        Resident = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMakeResident(
                     (DXG_GUEST_VIRTUALGPU_VMBUS *)(v116 + 4240),
                     HostProcess,
                     0,
                     v117,
                     v65->Flags,
                     v65->NumAllocations,
                     v131,
                     p_PagingFenceValue,
                     p_NumBytesToTrim);
      }
      else
      {
        v63 = v132;
        v64 = *((_QWORD *)v132 + 2);
        if ( !*(_BYTE *)(v64 + 1871) )
        {
          if ( *(_DWORD *)(v64 + 432) != 2
            || (v61 = *(_QWORD *)(*(_QWORD *)(v64 + 16) + 16LL), *(int *)(v61 + 2596) < 2000) )
          {
            v115 = WdLogNewEntry5_WdError(v61, v60);
            *(_QWORD *)(v115 + 24) = v63;
            WdLogEvent5_WdError(v115);
            Resident = -1073741637;
            v65 = v130;
            v72 = a2;
            goto LABEL_87;
          }
        }
        v65 = v130;
        v66 = v130->Flags.Value & 1;
        if ( (v130->Flags.Value & 2) != 0 )
          v66 |= 2u;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
          McTemplateK0pxqt_EtwWriteTransfer(
            *(_QWORD *)(*((_QWORD *)v132 + 5) + 32LL),
            &EventMakeResidentBegin,
            v62,
            v132,
            *(_QWORD *)(*((_QWORD *)v132 + 5) + 32LL),
            v130->NumAllocations,
            v130->Flags.Value);
        p_PagingFenceValue = &v65->PagingFenceValue;
        Resident = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *, _QWORD, int, UINT64 *, UINT64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v64 + 16) + 640LL) + 8LL) + 776LL))(
                     *(_QWORD *)(*(_QWORD *)(v64 + 16) + 648LL),
                     *((_QWORD *)v63 + 4),
                     PoolWithTag,
                     v65->NumAllocations,
                     v66,
                     &v65->PagingFenceValue,
                     &v65->NumBytesToTrim);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
          McTemplateK0qxx_EtwWriteTransfer(v69, v68, v71, Resident, v65->NumBytesToTrim, *p_PagingFenceValue);
      }
      v72 = a2;
      if ( Resident >= 0 && a2 )
      {
        v73 = v133;
        v74 = &v133->PagingFenceValue;
        if ( (unsigned __int64)&v133->PagingFenceValue >= MmUserProbeAddress )
          v74 = (_QWORD *)MmUserProbeAddress;
        *v74 = *p_PagingFenceValue;
        goto LABEL_72;
      }
LABEL_87:
      v73 = v133;
LABEL_72:
      if ( v72 )
      {
        v75 = &v73->NumBytesToTrim;
        if ( (unsigned __int64)&v73->NumBytesToTrim >= MmUserProbeAddress )
          v75 = (_QWORD *)MmUserProbeAddress;
        *v75 = v65->NumBytesToTrim;
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v150);
      if ( v135 )
        ExReleasePushLockSharedEx(v134 + 144, 0LL);
      else
        ExReleaseResourceLite(*(PERESOURCE *)(v134 + 136));
      KeLeaveCriticalRegion();
      if ( P != v148 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v149 = 0;
      PagedPoolArray<DXGALLOCATIONREFERENCE,40>::~PagedPoolArray<DXGALLOCATIONREFERENCE,40>(&v160);
      if ( v129 )
        DXGPAGINGQUEUE::ReleaseReference(v129, v76);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v125, v76);
      if ( v127 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v77, &EventProfilerExit, v78, v125);
      return (unsigned int)Resident;
    }
    if ( a2 )
    {
      v44 = AllocationList;
      if ( (unsigned __int64)AllocationList >= MmUserProbeAddress )
        v44 = (unsigned int *)MmUserProbeAddress;
      v45 = *v44;
      v141 = *v44;
    }
    else
    {
      v45 = *AllocationList;
    }
    DXGPROCESS::GetAllocationUnsafe((__int64)v43, (DXGALLOCATIONREFERENCE *)&v128, v45);
    v49 = v128;
    if ( !v128 )
    {
      v108 = WdLogNewEntry5_WdError(v47, v46);
      *(_QWORD *)(v108 + 24) = v128;
      WdLogEvent5_WdError(v108);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v128, v109);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v143);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v150);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v134);
      if ( P != v148 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v149 = 0;
      PagedPoolArray<DXGALLOCATIONREFERENCE,40>::~PagedPoolArray<DXGALLOCATIONREFERENCE,40>(&v160);
      goto LABEL_104;
    }
    if ( v128[1].Count != v27 )
      break;
    if ( !v124 )
    {
      Count = v128[3].Count;
      if ( !Count )
      {
        v113 = WdLogNewEntry5_WdWarning(v47, v46, v48);
        *(_QWORD *)(v113 + 24) = v128;
        WdLogEvent5_WdWarning(v113);
        v49 = v128;
      }
      v51 = v138;
      *v138 = Count;
      v138 = v51 + 1;
    }
    v52 = v139;
    v53 = *(struct _EX_RUNDOWN_REF **)v139;
    if ( *(_QWORD *)v139 )
    {
      ExReleaseRundownProtection(v53 + 11);
      v49 = v128;
    }
    *v52 = v49;
    v128 = 0LL;
    v139 = (struct DXGALLOCATIONREFERENCE *)(v52 + 1);
    ++AllocationList;
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v53, v46) + 311) )
    {
      v56 = DXGTHREAD::GetCurrent(v55, v54);
      v59 = v56;
      if ( v56 )
      {
        if ( *((_DWORD *)v56 + 8) )
        {
          v114 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v58, v57);
          v114[3] = 275LL;
          v114[4] = 38LL;
          v114[5] = *((int *)v59 + 8);
          v114[6] = 0LL;
          v114[7] = 0LL;
          WdLogEvent5_WdCriticalError(v114);
        }
      }
    }
  }
  v110 = (struct _EX_RUNDOWN_REF *)WdLogNewEntry5_WdError(v47, v46);
  v110[3].Count = v27;
  v110[4].Count = v128[1].Count;
  WdLogEvent5_WdError(v110);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v128, v111);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v143);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v150);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v134);
  if ( P != v148 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v149 = 0;
  PagedPoolArray<DXGALLOCATIONREFERENCE,40>::~PagedPoolArray<DXGALLOCATIONREFERENCE,40>(&v160);
  if ( v129 )
    DXGPAGINGQUEUE::ReleaseReference(v129, v112);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v125, v112);
  if ( !v127 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
    return 3221225485LL;
LABEL_171:
  McTemplateK0q_EtwWriteTransfer(v83, &EventProfilerExit, v84, v125);
  return 3221225485LL;
}
