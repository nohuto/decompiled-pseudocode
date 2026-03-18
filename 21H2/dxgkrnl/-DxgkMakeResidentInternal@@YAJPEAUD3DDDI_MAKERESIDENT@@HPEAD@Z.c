/*
 * XREFs of ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEAD@Z @ 0x1C01C9BF0
 * Callers:
 *     ?DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@PEAD@Z @ 0x1C01C9AD0 (-DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@PEAD@Z.c)
 *     DxgkMakeResident @ 0x1C01C9BD0 (DxgkMakeResident.c)
 *     ?VmBusMakeResident@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C036F930 (-VmBusMakeResident@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0002C48 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000BB70 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C000BC60 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000E694 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C000EF98 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000FB18 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z @ 0x1C001DB14 (-Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z.c)
 *     ?RtlStringCbCopyA@@YAJPEAD_KPEBD@Z @ 0x1C001DFD8 (-RtlStringCbCopyA@@YAJPEAD_KPEBD@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C002B26C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C002B798 (-GetAllocationUnsafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ @ 0x1C002BAC8 (-ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ??_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z @ 0x1C004A8A0 (--_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z.c)
 *     McTemplateK0pxqt_EtwWriteTransfer @ 0x1C00562E8 (McTemplateK0pxqt_EtwWriteTransfer.c)
 *     McTemplateK0qxx_EtwWriteTransfer @ 0x1C0056864 (McTemplateK0qxx_EtwWriteTransfer.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C016E850 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C016ED94 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C017EAE0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C017EB60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ @ 0x1C018B028 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0CI@@@QEAA@XZ @ 0x1C032C16C (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0CI@@@QEAA@XZ.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C033633C (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K2@Z @ 0x1C03798B4 (-VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGA.c)
 */

__int64 __fastcall DxgkMakeResidentInternal(struct D3DDDI_MAKERESIDENT *a1, int a2, char *a3)
{
  char *v3; // r12
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v13; // rbx
  struct DXGPROCESS *v14; // rax
  struct D3DDDI_MAKERESIDENT *v15; // rcx
  struct D3DDDI_MAKERESIDENT *v16; // rsi
  __int64 v17; // r9
  struct DXGPAGINGQUEUE *v18; // r15
  unsigned __int64 NumAllocations; // r14
  __int64 v20; // rcx
  __int64 v21; // rdx
  struct DXGALLOCATIONREFERENCE *v22; // rbx
  _BYTE *Pool2; // rcx
  unsigned int *AllocationList; // r14
  unsigned int *v25; // r13
  __int64 v26; // rbx
  __int64 v27; // rcx
  int v28; // esi
  struct _KEVENT *v29; // r15
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rcx
  char v37; // r15
  __int64 v38; // rax
  __int64 v39; // rax
  struct DXGPROCESS *v40; // rsi
  struct DXGPROCESS *v41; // r12
  unsigned int *v42; // rcx
  unsigned int v43; // r8d
  struct _EX_RUNDOWN_REF *v44; // rax
  ULONG_PTR Count; // r8
  ULONG_PTR v46; // rsi
  ULONG_PTR *v47; // rcx
  struct _EX_RUNDOWN_REF **v48; // rsi
  struct DXGTHREAD *DxgThread; // rax
  struct DXGPAGINGQUEUE *v50; // rsi
  __int64 v51; // r14
  struct D3DDDI_MAKERESIDENT *v52; // r13
  int v53; // ebx
  UINT64 *p_PagingFenceValue; // r12
  __int64 v55; // rdx
  __int64 v56; // rcx
  int Resident; // ebx
  __int64 v58; // r8
  int v59; // r8d
  struct D3DDDI_MAKERESIDENT *v60; // r9
  _QWORD *v61; // rcx
  _QWORD *p_NumBytesToTrim; // rcx
  DXGALLOCATIONREFERENCE *v63; // rcx
  __int64 v64; // rcx
  __int64 v65; // r8
  struct DXGTHREAD *Current; // rax
  __int64 v68; // rcx
  __int64 v69; // r8
  DXGPAGINGQUEUE *v70; // rcx
  __int64 v71; // rax
  bool v72; // cf
  unsigned __int64 v73; // rax
  __int64 v74; // rax
  DXGALLOCATIONREFERENCE *v75; // rbx
  struct _KEVENT *v76; // rcx
  __int64 v77; // rcx
  __int64 v78; // r8
  int v79; // eax
  char *v80; // rcx
  __int64 v81; // rcx
  __int64 v82; // r8
  struct DXGTHREAD *v83; // rax
  __int64 v84; // r15
  unsigned int v85; // r14d
  struct D3DDDI_MAKERESIDENT_FLAGS v86; // ebx
  unsigned int v87; // esi
  unsigned int HostProcess; // eax
  __int64 v89; // rcx
  __int64 v90; // r8
  unsigned int v91[2]; // [rsp+28h] [rbp-480h]
  struct D3DDDI_MAKERESIDENT_FLAGS::$2E662C15F8525AEEECC7862586193CD2::$C41099F84E8AA7AB57942996F31C279B Value; // [rsp+30h] [rbp-478h]
  int v93; // [rsp+50h] [rbp-458h] BYREF
  __int64 v94; // [rsp+58h] [rbp-450h]
  char v95; // [rsp+60h] [rbp-448h]
  struct _EX_RUNDOWN_REF *v96; // [rsp+68h] [rbp-440h] BYREF
  char *v97; // [rsp+70h] [rbp-438h]
  DXGPAGINGQUEUE *v98; // [rsp+78h] [rbp-430h] BYREF
  struct D3DDDI_MAKERESIDENT *v99; // [rsp+80h] [rbp-428h]
  struct DXGPAGINGQUEUE *v100; // [rsp+88h] [rbp-420h] BYREF
  struct D3DDDI_MAKERESIDENT *v101; // [rsp+90h] [rbp-418h]
  __int64 v102; // [rsp+98h] [rbp-410h] BYREF
  int v103; // [rsp+A0h] [rbp-408h]
  struct DXGTHREAD *v104; // [rsp+A8h] [rbp-400h] BYREF
  struct DXGPROCESS *v105; // [rsp+B0h] [rbp-3F8h]
  ULONG_PTR *v106; // [rsp+B8h] [rbp-3F0h]
  struct _EX_RUNDOWN_REF **v107; // [rsp+C0h] [rbp-3E8h]
  struct DXGALLOCATIONREFERENCE *v108; // [rsp+C8h] [rbp-3E0h]
  __int64 v109; // [rsp+D0h] [rbp-3D8h]
  unsigned int v110; // [rsp+D8h] [rbp-3D0h]
  struct D3DDDI_MAKERESIDENT *v111; // [rsp+E0h] [rbp-3C8h]
  _BYTE v112[24]; // [rsp+E8h] [rbp-3C0h] BYREF
  __int128 v113; // [rsp+100h] [rbp-3A8h] BYREF
  __int128 v114; // [rsp+110h] [rbp-398h]
  __int128 v115; // [rsp+120h] [rbp-388h]
  PVOID P; // [rsp+130h] [rbp-378h]
  _BYTE v117[320]; // [rsp+138h] [rbp-370h] BYREF
  int v118; // [rsp+278h] [rbp-230h]
  char v119[8]; // [rsp+280h] [rbp-228h] BYREF
  _BYTE v120[16]; // [rsp+288h] [rbp-220h] BYREF
  DXGADAPTER *v121; // [rsp+298h] [rbp-210h]
  char v122; // [rsp+2A0h] [rbp-208h]
  char *v123; // [rsp+2A8h] [rbp-200h]
  char v124[24]; // [rsp+2B0h] [rbp-1F8h] BYREF
  _BYTE v125[16]; // [rsp+2C8h] [rbp-1E0h] BYREF
  __int64 v126; // [rsp+2D8h] [rbp-1D0h]
  __int64 v127; // [rsp+308h] [rbp-1A0h]
  char v128; // [rsp+310h] [rbp-198h]
  DXGALLOCATIONREFERENCE *v129; // [rsp+320h] [rbp-188h] BYREF
  _BYTE v130[320]; // [rsp+328h] [rbp-180h] BYREF
  unsigned int v131; // [rsp+468h] [rbp-40h]

  v3 = a3;
  v97 = a3;
  v101 = a1;
  v111 = a1;
  v93 = -1;
  v6 = 0;
  v94 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v95 = 1;
    v93 = 2115;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 2115);
  }
  else
  {
    v95 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v93, 2115);
  CurrentProcess = PsGetCurrentProcess(v8, v7, v9, v10);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v13 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v14 = (struct DXGPROCESS *)*((_QWORD *)Current + 3), (v105 = v14) == 0LL) )
  {
    v14 = v13;
    v105 = v13;
    if ( !v13 )
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
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v93);
      if ( !v95 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
        return 3221225485LL;
      goto LABEL_173;
    }
  }
  v113 = 0LL;
  v114 = 0LL;
  v115 = 0LL;
  v99 = 0LL;
  if ( a2 )
  {
    v15 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v15 = (struct D3DDDI_MAKERESIDENT *)MmUserProbeAddress;
    v113 = *(_OWORD *)&v15->hPagingQueue;
    v114 = *(_OWORD *)&v15->PriorityList;
    v115 = *(_OWORD *)&v15->PagingFenceValue;
    v16 = (struct D3DDDI_MAKERESIDENT *)&v113;
    v99 = (struct D3DDDI_MAKERESIDENT *)&v113;
    v14 = v105;
  }
  else
  {
    v16 = a1;
    v99 = a1;
  }
  if ( !v16->NumAllocations )
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v93);
    if ( !v95 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
    goto LABEL_173;
  }
  if ( !v16->AllocationList )
  {
    WdLogSingleEntry1(3LL, 500LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v93);
    if ( !v95 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
    goto LABEL_173;
  }
  if ( v16->Flags.Value >= 4 )
  {
    WdLogSingleEntry1(3LL, 507LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v93);
    if ( !v95 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
    goto LABEL_173;
  }
  v100 = 0LL;
  DXGPAGINGQUEUEBYHANDLE::Open((DXGPAGINGQUEUEBYHANDLE *)&v98, v16->hPagingQueue, v14, &v100, 1);
  v18 = v100;
  if ( !v100 )
  {
    WdLogSingleEntry2(3LL, v16->hPagingQueue, -1073741811LL);
    v70 = v98;
    if ( v98 )
      goto LABEL_113;
    goto LABEL_114;
  }
  v129 = 0LL;
  v131 = 0;
  P = 0LL;
  v118 = 0;
  NumAllocations = v16->NumAllocations;
  if ( (unsigned int)NumAllocations <= 0x28 )
  {
    v129 = (DXGALLOCATIONREFERENCE *)v130;
    if ( (_DWORD)NumAllocations )
    {
      v20 = 0LL;
      v21 = (unsigned int)NumAllocations;
      do
      {
        *(_QWORD *)((char *)v129 + v20) = 0LL;
        v20 += 8LL;
        --v21;
      }
      while ( v21 );
    }
LABEL_18:
    v131 = NumAllocations;
    v22 = v129;
    LODWORD(NumAllocations) = v16->NumAllocations;
    goto LABEL_19;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / NumAllocations >= 8 )
  {
    v71 = 8 * NumAllocations;
    if ( !is_mul_ok(NumAllocations, 8uLL) )
      v71 = -1LL;
    v72 = __CFADD__(v71, 8LL);
    v73 = v71 + 8;
    if ( v72 )
      v73 = -1LL;
    v74 = operator new[](v73, 0x4B677844u, 256LL, v17);
    if ( v74 )
    {
      *(_QWORD *)v74 = NumAllocations;
      v75 = (DXGALLOCATIONREFERENCE *)(v74 + 8);
      `vector constructor iterator'(
        (char *)(v74 + 8),
        8LL,
        NumAllocations,
        (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
      v129 = v75;
    }
    v3 = v97;
    goto LABEL_18;
  }
  v22 = 0LL;
  v3 = v97;
LABEL_19:
  v108 = v22;
  if ( (unsigned int)NumAllocations > 0x28 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)NumAllocations < 8 )
    {
      Pool2 = 0LL;
      v97 = 0LL;
      goto LABEL_24;
    }
    Pool2 = (_BYTE *)ExAllocatePool2(256LL, 8LL * (unsigned int)NumAllocations, 1265072196LL, v17);
    P = Pool2;
    goto LABEL_22;
  }
  Pool2 = v117;
  v97 = v117;
  P = v117;
  if ( (_DWORD)NumAllocations )
  {
    memset(v117, 0, 8LL * (unsigned int)NumAllocations);
    Pool2 = P;
LABEL_22:
    v97 = Pool2;
  }
  v118 = NumAllocations;
LABEL_24:
  if ( !v22 || !Pool2 )
  {
    WdLogSingleEntry1(6LL, 542LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate storage to validate input",
      542LL,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( P != v117 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v118 = 0;
    PagedPoolArray<DXGALLOCATIONREFERENCE,40>::~PagedPoolArray<DXGALLOCATIONREFERENCE,40>(&v129);
    if ( v98 )
      DXGPAGINGQUEUE::ReleaseReference(v98);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v93);
    if ( v95 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v89, &EventProfilerExit, v90, v93);
    return 3221225495LL;
  }
  AllocationList = (unsigned int *)v16->AllocationList;
  v25 = &AllocationList[v16->NumAllocations];
  v107 = (struct _EX_RUNDOWN_REF **)v22;
  v106 = (ULONG_PTR *)Pool2;
  v26 = *((_QWORD *)v18 + 2);
  v109 = v26;
  v102 = v26;
  v27 = *(_QWORD *)(*(_QWORD *)(v26 + 16) + 16LL);
  if ( *(int *)(v27 + 2424) >= 0x2000 || *(_BYTE *)(v27 + 2724) )
  {
    v28 = *((_DWORD *)DXGGLOBAL_GetGlobal() + 347);
    v103 = v28;
  }
  else
  {
    v28 = 0;
    v103 = 0;
  }
  v29 = *(struct _KEVENT **)(v26 + 16);
  if ( *(_DWORD *)(v26 + 432) == 2 )
  {
    if ( KeReadStateEvent(v29 + 5) )
      goto LABEL_30;
    v76 = v29 + 5;
  }
  else
  {
    if ( KeReadStateEvent(v29 + 4) )
      goto LABEL_30;
    v76 = v29 + 4;
  }
  KeWaitForSingleObject(v76, Executive, 0, 0, 0LL);
LABEL_30:
  KeEnterCriticalRegion();
  if ( v28 )
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v26 + 144, 0LL) )
    {
      KeLeaveCriticalRegion();
      KeEnterCriticalRegion();
      DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v26 + 16) + 16LL));
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v26 + 144));
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v26 + 16) + 16LL));
      KeLeaveCriticalRegion();
    }
  }
  else if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v26 + 136), 0) )
  {
    DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v26 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0q_EtwWriteTransfer(v77, (const EVENT_DESCRIPTOR *)"g", v78, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v26 + 136), 1u);
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v26 + 16) + 16LL));
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v119, v26, 0, v30, 0);
  if ( v128 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v125, 0LL);
    if ( *(_DWORD *)(v126 + 200) != 1 )
      goto LABEL_148;
  }
  if ( v122 )
    WdLogSingleEntry5(0LL, 275LL, 4LL, v120, 0LL, 0LL);
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v121 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v121 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v34, (const EVENT_DESCRIPTOR *)"g", v35, 72);
      KeWaitForSingleObject((char *)v121 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v121, v3);
  }
  v123 = 0LL;
  if ( v3 )
  {
    v79 = RtlStringCbCopyA(v124, 17LL, v3);
    v80 = v124;
    if ( v79 < 0 )
      v80 = v123;
    v123 = v80;
  }
  v122 = 1;
  if ( *(_DWORD *)(v127 + 576) == 1 )
  {
    v36 = *(_QWORD *)(*(_QWORD *)(v26 + 16) + 16LL);
    v37 = *(_BYTE *)(v36 + 209);
    v38 = PsGetCurrentProcess(v36, v31, v32, v33);
    v39 = PsGetProcessDxgProcess(v38);
    v40 = (struct DXGPROCESS *)v39;
    if ( v39 && (*(_DWORD *)(v39 + 424) & 0x80) == 0
      || (v83 = DXGTHREAD::GetCurrent()) == 0LL
      || (v41 = (struct DXGPROCESS *)*((_QWORD *)v83 + 3)) == 0LL )
    {
      v41 = v40;
    }
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v112, v41);
    while ( AllocationList != v25 )
    {
      if ( a2 )
      {
        v42 = AllocationList;
        if ( (unsigned __int64)AllocationList >= MmUserProbeAddress )
          v42 = (unsigned int *)MmUserProbeAddress;
        v43 = *v42;
        v110 = *v42;
      }
      else
      {
        v43 = *AllocationList;
      }
      DXGPROCESS::GetAllocationUnsafe((__int64)v41, (DXGALLOCATIONREFERENCE *)&v96, v43);
      v44 = v96;
      if ( !v96 )
      {
        WdLogSingleEntry1(2LL, 0LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Invalid hAllocation specified: 0x%I64x, returning 0x%I64x",
          (__int64)v96,
          0LL,
          0LL,
          0LL,
          0LL);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v96);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v112);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v119);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v102);
        if ( P != v117 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v118 = 0;
        PagedPoolArray<DXGALLOCATIONREFERENCE,40>::~PagedPoolArray<DXGALLOCATIONREFERENCE,40>(&v129);
        v70 = v98;
        if ( !v98 )
          goto LABEL_114;
LABEL_113:
        DXGPAGINGQUEUE::ReleaseReference(v70);
LABEL_114:
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v93);
        if ( !v95 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
          return 3221225485LL;
LABEL_173:
        McTemplateK0q_EtwWriteTransfer(v68, &EventProfilerExit, v69, v93);
        return 3221225485LL;
      }
      Count = v96[1].Count;
      if ( Count != v26 )
      {
        WdLogSingleEntry2(2LL, v26, Count);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Mismatch between paging queue device and allocation device. Paging Queue Device: 0x%I64x, Allocation Device: 0x%I64x",
          v26,
          v96[1].Count,
          0LL,
          0LL,
          0LL);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v96);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v112);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v119);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v102);
        if ( P != v117 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v118 = 0;
        PagedPoolArray<DXGALLOCATIONREFERENCE,40>::~PagedPoolArray<DXGALLOCATIONREFERENCE,40>(&v129);
        if ( v98 )
          DXGPAGINGQUEUE::ReleaseReference(v98);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v93);
        if ( !v95 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
          return 3221225485LL;
        goto LABEL_173;
      }
      if ( !v37 )
      {
        v46 = v96[3].Count;
        if ( !v46 )
        {
          WdLogSingleEntry1(3LL, v96);
          v44 = v96;
        }
        v47 = v106;
        *v106 = v46;
        v106 = v47 + 1;
      }
      v48 = v107;
      if ( *v107 )
      {
        ExReleaseRundownProtection(*v107 + 11);
        v44 = v96;
      }
      *v48 = v44;
      v96 = 0LL;
      v107 = v48 + 1;
      ++AllocationList;
      if ( *((_DWORD *)DXGGLOBAL_GetGlobal() + 347) )
      {
        v104 = 0LL;
        if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v104) >= 0 )
        {
          DxgThread = v104;
          if ( v104 || (DxgThread = DxgkThreadObjectCreateDxgThread(), (v104 = DxgThread) != 0LL) )
          {
            if ( *((_DWORD *)DxgThread + 12) )
              WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)DxgThread + 12), 0LL, 0LL);
          }
        }
      }
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v112);
    if ( v37 )
    {
      v84 = *(_QWORD *)(*(_QWORD *)(v26 + 16) + 16LL);
      v52 = v99;
      v85 = v99->NumAllocations;
      v86.0 = (struct D3DDDI_MAKERESIDENT_FLAGS::$2E662C15F8525AEEECC7862586193CD2::$C41099F84E8AA7AB57942996F31C279B)v99->Flags.Value;
      v87 = *((_DWORD *)v100 + 7);
      HostProcess = DXGPROCESS::GetHostProcess(v105);
      p_PagingFenceValue = &v52->PagingFenceValue;
      Resident = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMakeResident(
                   (DXG_GUEST_VIRTUALGPU_VMBUS *)(v84 + 4344),
                   HostProcess,
                   0,
                   v87,
                   v86,
                   v85,
                   v108,
                   &v52->PagingFenceValue,
                   &v52->NumBytesToTrim);
    }
    else
    {
      v50 = v100;
      v51 = *((_QWORD *)v100 + 2);
      if ( !*(_BYTE *)(v51 + 1871)
        && (*(_DWORD *)(v51 + 432) != 2 || *(int *)(*(_QWORD *)(*(_QWORD *)(v51 + 16) + 16LL) + 2692LL) < 2000) )
      {
        WdLogSingleEntry1(2LL, v100);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Calling MakeResident on a device that was not created with the UMD residency flag. Device=0x%p",
          (__int64)v50,
          0LL,
          0LL,
          0LL,
          0LL);
        Resident = -1073741637;
        v52 = v99;
        v59 = a2;
        goto LABEL_94;
      }
      v52 = v99;
      v53 = v99->Flags.Value & 1 | 2;
      if ( (v99->Flags.Value & 2) == 0 )
        v53 = v99->Flags.Value & 1;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000) != 0 )
      {
        Value = (struct D3DDDI_MAKERESIDENT_FLAGS::$2E662C15F8525AEEECC7862586193CD2::$C41099F84E8AA7AB57942996F31C279B)v99->Flags.Value;
        v91[0] = v99->NumAllocations;
        McTemplateK0pxqt_EtwWriteTransfer(
          *(_QWORD *)(*((_QWORD *)v100 + 5) + 32LL),
          &EventMakeResidentBegin,
          *(unsigned int *)&Value,
          v100,
          *(_QWORD *)(*((_QWORD *)v100 + 5) + 32LL),
          *(_QWORD *)v91,
          Value);
      }
      p_PagingFenceValue = &v52->PagingFenceValue;
      Resident = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *, _QWORD, int, UINT64 *, UINT64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v51 + 16) + 648LL) + 8LL) + 784LL))(
                   *(_QWORD *)(*(_QWORD *)(v51 + 16) + 656LL),
                   *((_QWORD *)v50 + 4),
                   v97,
                   v52->NumAllocations,
                   v53,
                   &v52->PagingFenceValue,
                   &v52->NumBytesToTrim);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000) != 0 )
        McTemplateK0qxx_EtwWriteTransfer(v56, v55, v58, Resident, v52->NumBytesToTrim, *p_PagingFenceValue);
    }
    v59 = a2;
    if ( Resident >= 0 && a2 )
    {
      v60 = v101;
      v61 = &v101->PagingFenceValue;
      if ( (unsigned __int64)&v101->PagingFenceValue >= MmUserProbeAddress )
        v61 = (_QWORD *)MmUserProbeAddress;
      *v61 = *p_PagingFenceValue;
      goto LABEL_76;
    }
LABEL_94:
    v60 = v101;
LABEL_76:
    if ( v59 )
    {
      p_NumBytesToTrim = &v60->NumBytesToTrim;
      if ( (unsigned __int64)&v60->NumBytesToTrim >= MmUserProbeAddress )
        p_NumBytesToTrim = (_QWORD *)MmUserProbeAddress;
      *p_NumBytesToTrim = v52->NumBytesToTrim;
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v119);
    if ( v103 )
      ExReleasePushLockSharedEx(v102 + 144, 0LL);
    else
      ExReleaseResourceLite(*(PERESOURCE *)(v102 + 136));
    KeLeaveCriticalRegion();
    if ( P != v117 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v118 = 0;
    v63 = v129;
    if ( v129 == (DXGALLOCATIONREFERENCE *)v130 )
    {
      if ( v131 )
      {
        while ( 1 )
        {
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v63 + v6++);
          if ( v6 >= v131 )
            break;
          v63 = v129;
        }
      }
    }
    else if ( v129 )
    {
      DXGALLOCATIONREFERENCE::`vector deleting destructor'(v129);
    }
    if ( v98 )
      DXGPAGINGQUEUE::ReleaseReference(v98);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v93);
    if ( v95 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v64, &EventProfilerExit, v65, v93);
    return (unsigned int)Resident;
  }
  COREACCESS::Release((COREACCESS *)v120);
  if ( v128 )
LABEL_148:
    COREACCESS::Release((COREACCESS *)v125);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v119);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v102);
  if ( P != v117 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v118 = 0;
  PagedPoolArray<DXGALLOCATIONREFERENCE,40>::~PagedPoolArray<DXGALLOCATIONREFERENCE,40>(&v129);
  if ( v98 )
    DXGPAGINGQUEUE::ReleaseReference(v98);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v93);
  if ( v95 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v81, &EventProfilerExit, v82, v93);
  return 3221226166LL;
}
