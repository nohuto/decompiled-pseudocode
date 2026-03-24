/*
 * XREFs of DxgkRender @ 0x1C00E9810
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0001E14 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00022BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C00026F0 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004090 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0004160 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0004200 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x1C0004280 (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004448 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0004488 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00045C8 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C00058C8 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006614 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006CE0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007018 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00073EC (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0007514 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0009C58 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C001A500 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C001A824 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDEVICE@@@Z @ 0x1C00EA1A0 (-DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDE.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C00EAD80 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FBBF0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FD9E0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FDD00 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ResizeUserModeBuffers@DXGCONTEXT@@QEAAJPEAVVIDMM_DMA_POOL@@_KII@Z @ 0x1C0162518 (-ResizeUserModeBuffers@DXGCONTEXT@@QEAAJPEAVVIDMM_DMA_POOL@@_KII@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C020CC74 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z @ 0x1C0227B6C (-DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z @ 0x1C022C2CC (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0268F1C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C027FF20 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 */

__int64 __fastcall DxgkRender(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // r15
  _OWORD *v10; // rax
  _D3DKMT_RENDER *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct DXGCONTEXT *v16; // rsi
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // r13
  __int64 v20; // rcx
  int v21; // ebx
  struct _KEVENT *v22; // r12
  __int64 v23; // rcx
  __int64 v24; // r8
  unsigned __int64 BroadcastContextCount; // rdx
  __int64 v26; // rbx
  _QWORD *PoolWithTag; // rcx
  unsigned int v28; // ebx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  struct DXGADAPTER *v32; // rbx
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rcx
  __int64 v38; // r8
  struct DXGCONTEXT *v39; // rbx
  unsigned __int64 v40; // rdx
  PVOID CommandOffset; // rcx
  UINT AllocationCount; // r9d
  int v43; // r15d
  char Flags; // dl
  __int64 v45; // rax
  bool v46; // r12
  struct DXGALLOCATION **v47; // rax
  int v48; // eax
  int v49; // edx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rdx
  DXGGLOBAL **v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  bool v57; // zf
  __int64 NewCommandBufferSize; // r8
  UINT NewPatchLocationListSize; // r12d
  __int64 v61; // rdx
  __int64 v62; // rdx
  struct DXGTHREAD *Current; // rax
  __int64 v64; // rbx
  __int64 v65; // rdx
  _QWORD *v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // rax
  struct _KEVENT *v73; // rcx
  __int64 v74; // rcx
  unsigned __int8 v75; // bl
  __int64 v76; // r8
  unsigned __int8 v77; // bl
  __int64 v78; // rax
  __int64 v79; // rax
  PVOID v80; // rcx
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // rax
  __int64 v85; // rdx
  __int64 v86; // r9
  unsigned int v87; // ecx
  __int64 *v88; // rax
  __int64 v89; // rcx
  __int64 v90; // rax
  __int64 v91; // rcx
  __int64 v92; // r12
  __int64 v93; // rdx
  int v94; // r8d
  __int64 v95; // rax
  __int64 v96; // rax
  _QWORD *v97; // rax
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rdx
  _QWORD *v101; // rax
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  _QWORD *v105; // rax
  __int64 CommandLength; // rcx
  __int64 v107; // rcx
  struct DXGALLOCATION **v108; // rax
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // r8
  __int64 v112; // rax
  __int64 v113; // rdx
  _QWORD *v114; // rax
  _QWORD *v115; // rax
  _QWORD *v116; // rax
  int v117; // [rsp+40h] [rbp-488h] BYREF
  __int64 v118; // [rsp+48h] [rbp-480h]
  char v119; // [rsp+50h] [rbp-478h]
  unsigned int v120[2]; // [rsp+58h] [rbp-470h] BYREF
  unsigned int v121[2]; // [rsp+60h] [rbp-468h]
  DXGCONTEXT *v122; // [rsp+68h] [rbp-460h] BYREF
  char v123; // [rsp+70h] [rbp-458h]
  PVOID P; // [rsp+78h] [rbp-450h]
  _BYTE v125[32]; // [rsp+80h] [rbp-448h] BYREF
  unsigned int v126; // [rsp+A0h] [rbp-428h]
  struct DXGCONTEXT *v127; // [rsp+A8h] [rbp-420h] BYREF
  __int64 v128; // [rsp+B0h] [rbp-418h] BYREF
  int v129; // [rsp+B8h] [rbp-410h]
  int v130; // [rsp+C0h] [rbp-408h] BYREF
  int v131; // [rsp+C4h] [rbp-404h] BYREF
  __int64 v132; // [rsp+C8h] [rbp-400h] BYREF
  struct DXGADAPTER *v133; // [rsp+D0h] [rbp-3F8h]
  char v134; // [rsp+D8h] [rbp-3F0h]
  __int64 v135; // [rsp+E0h] [rbp-3E8h]
  struct _D3DDDI_ALLOCATIONLIST *pNewAllocationList; // [rsp+E8h] [rbp-3E0h]
  _QWORD v137[2]; // [rsp+F0h] [rbp-3D8h] BYREF
  __int64 v138; // [rsp+100h] [rbp-3C8h]
  _BYTE v139[24]; // [rsp+108h] [rbp-3C0h] BYREF
  _QWORD v140[6]; // [rsp+120h] [rbp-3A8h] BYREF
  char v141; // [rsp+150h] [rbp-378h]
  __int64 v142; // [rsp+158h] [rbp-370h]
  __int64 v143; // [rsp+160h] [rbp-368h]
  PVOID v144; // [rsp+170h] [rbp-358h] BYREF
  _BYTE v145[256]; // [rsp+178h] [rbp-350h] BYREF
  int v146; // [rsp+278h] [rbp-250h]
  _D3DKMT_RENDER v147; // [rsp+280h] [rbp-248h] BYREF
  char v148[8]; // [rsp+3F0h] [rbp-D8h] BYREF
  _BYTE v149[16]; // [rsp+3F8h] [rbp-D0h] BYREF
  DXGADAPTER *v150; // [rsp+408h] [rbp-C0h]
  char v151; // [rsp+410h] [rbp-B8h]
  char *v152; // [rsp+418h] [rbp-B0h]
  _BYTE v153[16]; // [rsp+438h] [rbp-90h] BYREF
  __int64 v154; // [rsp+448h] [rbp-80h]
  __int64 v155; // [rsp+478h] [rbp-50h]
  char v156; // [rsp+480h] [rbp-48h]

  v117 = -1;
  v118 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v119 = 1;
    v117 = 2013;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2013);
  }
  else
  {
    v119 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v117, 2013LL);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v8 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v9 = *((_QWORD *)Current + 1)) == 0 )
  {
    v9 = v8;
  }
  v135 = v9;
  if ( !v9 )
  {
    v64 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v64 + 24) = PsGetCurrentProcess();
    v43 = -1073741811;
    *(_QWORD *)(v64 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v64);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v117, v65);
    v57 = v119 == 0;
    goto LABEL_84;
  }
  v10 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v10 = (_OWORD *)MmUserProbeAddress;
  v11 = &v147;
  v12 = 2LL;
  do
  {
    *(_OWORD *)&v11->hDevice = *v10;
    *(_OWORD *)&v11->PatchLocationCount = v10[1];
    *(_OWORD *)&v11->NewCommandBufferSize = v10[2];
    *(_OWORD *)&v11->NewAllocationListSize = v10[3];
    *(_OWORD *)&v11->NewPatchLocationListSize = v10[4];
    *(_OWORD *)&v11->BroadcastContextCount = v10[5];
    *(_OWORD *)&v11->BroadcastContext[3] = v10[6];
    v11 = (_D3DKMT_RENDER *)((char *)v11 + 128);
    *(_OWORD *)&v11[-1].pPrivateDriverData = v10[7];
    v10 += 8;
    --v12;
  }
  while ( v12 );
  *(_OWORD *)&v11->hDevice = *v10;
  *(_OWORD *)&v11->PatchLocationCount = v10[1];
  *(_OWORD *)&v11->NewCommandBufferSize = v10[2];
  *(_OWORD *)&v11->NewAllocationListSize = v10[3];
  *(_OWORD *)&v11->NewPatchLocationListSize = v10[4];
  *(_OWORD *)&v11->BroadcastContextCount = v10[5];
  *(_OWORD *)&v11->BroadcastContext[3] = v10[6];
  v127 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v122, v147.hDevice, (struct DXGPROCESS *)v9, &v127, 0);
  v16 = v127;
  if ( !v127 )
  {
    v66 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
    v66[3] = v9;
    v66[4] = v147.hDevice;
    v43 = -1073741811;
    v66[5] = -1073741811LL;
    WdLogEvent5_WdError(v66);
    goto LABEL_163;
  }
  v17 = (unsigned int)(*(_DWORD *)&v147.Flags | (*(_DWORD *)&v147.Flags >> 1));
  if ( ((*(_BYTE *)&v147.Flags | (unsigned __int8)(*(_DWORD *)&v147.Flags >> 1)) & 0x20) != 0 )
  {
    v67 = WdLogNewEntry5_WdError(v17, v13);
    *(_QWORD *)(v67 + 24) = v147.hDevice;
    v43 = -1073741811;
    *(_QWORD *)(v67 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v67);
    goto LABEL_163;
  }
  v18 = *((_DWORD *)v127 + 105);
  if ( (v18 & 0x10) != 0 )
  {
    v68 = WdLogNewEntry5_WdError(v17, v13);
    *(_QWORD *)(v68 + 24) = v16;
LABEL_109:
    WdLogEvent5_WdError(v68);
LABEL_111:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v122);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v117, v69);
    if ( !v119 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return (unsigned int)-1073741811;
    goto LABEL_173;
  }
  if ( (v18 & 8) != 0 )
  {
    v72 = WdLogNewEntry5_WdWarning(v17, v13, v15);
    *(_QWORD *)(v72 + 24) = 88LL;
    WdLogEvent5_WdWarning(v72);
    goto LABEL_111;
  }
  if ( *((_BYTE *)v127 + 454) )
  {
    v68 = WdLogNewEntry5_WdError(v17, v13);
    *(_QWORD *)(v68 + 24) = v147.hDevice;
    goto LABEL_109;
  }
  v19 = *((_QWORD *)v127 + 2);
  v137[1] = v19;
  v128 = v19;
  v20 = *(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL);
  if ( *(int *)(v20 + 2328) >= 0x2000 || *(_BYTE *)(v20 + 2628) )
    v21 = *((_DWORD *)DXGGLOBAL::GetGlobal(v20, v13) + 311);
  else
    v21 = 0;
  v129 = v21;
  v22 = *(struct _KEVENT **)(v19 + 16);
  if ( *(_DWORD *)(v19 + 432) == 2 )
  {
    if ( KeReadStateEvent(v22 + 5) )
      goto LABEL_21;
    v73 = v22 + 5;
  }
  else
  {
    if ( KeReadStateEvent(v22 + 4) )
      goto LABEL_21;
    v73 = v22 + 4;
  }
  KeWaitForSingleObject(v73, Executive, 0, 0, 0LL);
LABEL_21:
  KeEnterCriticalRegion();
  if ( !v21 )
  {
    if ( ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v19 + 136), 0) )
      goto LABEL_23;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL) + 104LL));
    v75 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v19 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q_EtwWriteTransfer(v74, &EventBlockThread, v76, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v19 + 136), 1u);
    if ( !v75 )
      goto LABEL_128;
    goto LABEL_127;
  }
  if ( (unsigned __int8)ExTryAcquirePushLockSharedEx(v19 + 144, 0LL) )
    goto LABEL_23;
  KeLeaveCriticalRegion();
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL) + 104LL));
  v77 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v19 + 16) + 16LL));
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v19 + 144));
  if ( v77 )
LABEL_127:
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v19 + 16) + 16LL));
LABEL_128:
  ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL) + 104LL, 0LL);
  KeLeaveCriticalRegion();
LABEL_23:
  BroadcastContextCount = v147.BroadcastContextCount;
  if ( v147.BroadcastContextCount
    && DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL) + 16LL))
    || (unsigned int)BroadcastContextCount > 0x40 )
  {
    v78 = WdLogNewEntry5_WdWarning(v23, BroadcastContextCount, v24);
    *(_QWORD *)(v78 + 24) = v16;
    v43 = -1073741811;
    *(_QWORD *)(v78 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v78);
    goto LABEL_162;
  }
  v26 = (unsigned int)(BroadcastContextCount + 1);
  PoolWithTag = 0LL;
  P = 0LL;
  v126 = 0;
  if ( (unsigned int)v26 > 4 )
  {
    BroadcastContextCount = 0xFFFFFFFFFFFFFFFFuLL % (unsigned int)v26;
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v26 < 8 )
      goto LABEL_29;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v26, 0x4B677844u);
    P = PoolWithTag;
  }
  else
  {
    PoolWithTag = v125;
    P = v125;
  }
  v126 = v26;
  if ( !PoolWithTag )
  {
LABEL_133:
    v79 = WdLogNewEntry5_WdWarning(PoolWithTag, BroadcastContextCount, v24);
    *(_QWORD *)(v79 + 24) = 126LL;
    WdLogEvent5_WdWarning(v79);
    v80 = P;
    if ( P != v125 && P )
      goto LABEL_135;
    goto LABEL_136;
  }
  memset(PoolWithTag, 0, 8 * v26);
  PoolWithTag = P;
LABEL_29:
  if ( !PoolWithTag )
    goto LABEL_133;
  *PoolWithTag = v16;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v139, (struct _KTHREAD **)v9);
  v28 = 0;
  if ( !v147.BroadcastContextCount )
  {
LABEL_31:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v139);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
      (__int64)v140,
      P,
      v126);
    if ( !v141 )
    {
      v133 = *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL) + 16LL);
      _InterlockedIncrement64((volatile signed __int64 *)v133 + 3);
      v132 = -1LL;
      v32 = v133;
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx((char *)v32 + 136, 0LL);
      v134 = 1;
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v148, *((_QWORD *)v16 + 2), 0, v33, 0);
      if ( v156 )
      {
        COREACCESS::AcquireShared((COREACCESS *)v153, 0LL);
        v35 = *(unsigned int *)(v154 + 200);
        if ( (_DWORD)v35 != 1 )
          goto LABEL_182;
      }
      if ( v151 )
      {
        v101 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v35, v34);
        v101[3] = 275LL;
        v101[4] = 4LL;
        v101[5] = v149;
        v101[6] = 0LL;
        v101[7] = 0LL;
        WdLogEvent5_WdCriticalError(v101);
      }
      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v150 + 23) )
      {
        if ( !KeReadStateEvent((PRKEVENT)v150 + 2) )
        {
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q_EtwWriteTransfer(v37, &EventBlockThread, v38, 72);
          KeWaitForSingleObject((char *)v150 + 48, Executive, 0, 0, 0LL);
        }
        DXGADAPTER::AcquireCoreResourceShared(v150, 0LL);
      }
      v152 = 0LL;
      v151 = 1;
      if ( *(_DWORD *)(v155 + 576) == 1 )
      {
        v39 = v127;
        v40 = *((_QWORD *)v127 + 6);
        CommandOffset = (PVOID)v147.CommandOffset;
        if ( v147.CommandOffset >= v40 )
        {
          v105 = (_QWORD *)WdLogNewEntry5_WdWarning(v147.CommandOffset, v40, v36);
          v105[3] = v39;
          CommandLength = v147.CommandOffset;
        }
        else
        {
          if ( v147.CommandOffset + (unsigned __int64)v147.CommandLength <= v40 )
          {
            AllocationCount = v147.AllocationCount;
            v120[0] = v147.AllocationCount;
            if ( v147.AllocationCount > *((_DWORD *)v127 + 18) )
            {
              v105 = (_QWORD *)WdLogNewEntry5_WdWarning(v147.CommandOffset, v40, v147.CommandLength);
              v105[3] = v39;
              v105[4] = v147.AllocationCount;
              v107 = *((unsigned int *)v39 + 18);
            }
            else
            {
              if ( v147.PatchLocationCount <= *((_DWORD *)v127 + 26) )
              {
                v43 = 0;
                Flags = (char)v147.Flags;
                if ( !v147.CommandLength )
                {
LABEL_61:
                  if ( (Flags & 1) == 0 && (Flags & 2) == 0 && (Flags & 4) == 0 )
                    goto LABEL_64;
                  if ( (Flags & 1) != 0 )
                    NewCommandBufferSize = v147.NewCommandBufferSize;
                  else
                    NewCommandBufferSize = *((unsigned int *)v39 + 50);
                  v120[0] = NewCommandBufferSize;
                  if ( (Flags & 2) != 0 )
                    CommandOffset = (PVOID)v147.NewAllocationListSize;
                  else
                    CommandOffset = (PVOID)*((unsigned int *)v39 + 53);
                  v121[0] = (unsigned int)CommandOffset;
                  if ( (Flags & 4) != 0 )
                    NewPatchLocationListSize = v147.NewPatchLocationListSize;
                  else
                    NewPatchLocationListSize = *((_DWORD *)v39 + 54);
                  v61 = *((unsigned int *)v39 + 50);
                  if ( (unsigned int)NewCommandBufferSize < (unsigned int)v61 )
                    goto LABEL_217;
                  if ( (unsigned int)CommandOffset >= *((_DWORD *)v39 + 53)
                    && NewPatchLocationListSize >= *((_DWORD *)v39 + 54) )
                  {
                    if ( DXGADAPTER::IsCoreResourceSharedOwner(v150) )
                      COREDEVICEACCESS::Release((COREDEVICEACCESS *)v148, v62);
                    DXGCONTEXT::ResizeUserModeBuffers(
                      v39,
                      *((struct VIDMM_DMA_POOL **)v39 + 29),
                      v120[0],
                      v121[0],
                      NewPatchLocationListSize);
                    v43 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v148, 0LL);
                    goto LABEL_64;
                  }
                  if ( (unsigned int)NewCommandBufferSize < (unsigned int)v61 )
                  {
LABEL_217:
                    v114 = (_QWORD *)WdLogNewEntry5_WdWarning(CommandOffset, v61, NewCommandBufferSize);
                    v114[3] = v39;
                    v114[4] = v120[0];
                    v114[5] = *((unsigned int *)v39 + 50);
                    WdLogEvent5_WdWarning(v114);
                    CommandOffset = (PVOID)v121[0];
                  }
                  if ( (unsigned int)CommandOffset < *((_DWORD *)v39 + 53) )
                  {
                    v115 = (_QWORD *)WdLogNewEntry5_WdWarning(CommandOffset, v61, NewCommandBufferSize);
                    v115[3] = v39;
                    v115[4] = v121[0];
                    v115[5] = *((unsigned int *)v39 + 53);
                    WdLogEvent5_WdWarning(v115);
                  }
                  if ( NewPatchLocationListSize >= *((_DWORD *)v39 + 54) )
                    goto LABEL_64;
                  v105 = (_QWORD *)WdLogNewEntry5_WdWarning(CommandOffset, v61, NewCommandBufferSize);
                  v105[3] = v39;
                  v105[4] = NewPatchLocationListSize;
                  v107 = *((unsigned int *)v39 + 54);
LABEL_222:
                  v105[5] = v107;
                  WdLogEvent5_WdWarning(v105);
LABEL_64:
                  v48 = 0;
                  v137[0] = 0LL;
                  v49 = 0;
                  v130 = 0;
                  v50 = 0LL;
                  v131 = 0;
                  v51 = 0LL;
                  if ( v43 != -1073741130 )
                  {
                    if ( !v151 )
                    {
                      v116 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CommandOffset, 0LL);
                      v116[3] = 275LL;
                      v116[4] = 4LL;
                      v116[5] = v149;
                      v116[6] = 0LL;
                      v116[7] = 0LL;
                      WdLogEvent5_WdCriticalError(v116);
                    }
                    v151 = 0;
                    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v150 + 23) )
                      DXGADAPTER::ReleaseCoreResource(v150, v152);
                    v152 = 0LL;
                    if ( v156 )
                      COREACCESS::Release((COREACCESS *)v153);
                    v39 = v127;
                    if ( !*((_BYTE *)v16 + 454) )
                      (*(void (__fastcall **)(_QWORD, _QWORD *, int *, int *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL) + 640LL)
                                                                                         + 8LL)
                                                                             + 488LL))(
                        *((_QWORD *)v127 + 29),
                        v137,
                        &v130,
                        &v131);
                    v52 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL) + 616LL) + 8LL);
                    LODWORD(v51) = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(v52 + 448))(
                                     *((_QWORD *)v39 + 34),
                                     v52,
                                     v50,
                                     v51);
                    v48 = v137[0];
                    v49 = v130;
                    LODWORD(v50) = v131;
                  }
                  v142 = *((_QWORD *)v39 + 7);
                  *(_QWORD *)(a1 + 24) = v142;
                  *(_DWORD *)(a1 + 32) = v48;
                  v143 = *((_QWORD *)v39 + 11);
                  *(_QWORD *)(a1 + 40) = v143;
                  *(_DWORD *)(a1 + 48) = v49;
                  v138 = *((_QWORD *)v39 + 15);
                  *(_QWORD *)(a1 + 56) = v138;
                  *(_DWORD *)(a1 + 64) = v50;
                  *(_DWORD *)(a1 + 340) = v51;
                  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v148);
                  if ( v134 )
                  {
                    v134 = 0;
                    ExReleasePushLockSharedEx((char *)v133 + 136, 0LL);
                    KeLeaveCriticalRegion();
                    v53 = (DXGGLOBAL **)v133;
                    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v133 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                      DXGGLOBAL::DestroyAdapter(v53[2], (struct DXGADAPTER *)v53);
                  }
                  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v140);
                  if ( P != v125 && P )
                    ExFreePoolWithTag(P, 0);
                  P = 0LL;
                  v126 = 0;
                  if ( v129 )
                    ExReleasePushLockSharedEx(v19 + 144, 0LL);
                  else
                    ExReleaseResourceLite(*(PERESOURCE *)(v19 + 136));
                  KeLeaveCriticalRegion();
                  if ( v122 && !v123 )
                    DXGCONTEXT::ReleaseReference(v122);
                  goto LABEL_83;
                }
                if ( (*(_BYTE *)&v147.Flags & 0x20) != 0 )
                  pNewAllocationList = v147.pNewAllocationList;
                else
                  pNewAllocationList = (struct _D3DDDI_ALLOCATIONLIST *)*((_QWORD *)v127 + 11);
                v45 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL) + 16LL);
                v46 = *(int *)(v45 + 2328) >= 0x2000 || *(_BYTE *)(v45 + 2628);
                v120[1] = v147.AllocationCount;
                v144 = 0LL;
                v146 = 0;
                v47 = 0LL;
                *(_QWORD *)v121 = 0LL;
                if ( !v46 )
                {
LABEL_50:
                  if ( v43 >= 0 )
                  {
                    v43 = DXGCONTEXT::Render(
                            v39,
                            &v147,
                            (struct COREDEVICEACCESS *)v148,
                            (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v132,
                            (struct DXGCONTEXT **)P,
                            v47,
                            0LL);
                    Flags = (char)v147.Flags;
                    AllocationCount = v120[0];
                    v47 = *(struct DXGALLOCATION ***)v121;
                  }
                  if ( v46 )
                  {
                    DxgkUnreferenceAllocationList(AllocationCount, v47);
                    Flags = (char)v147.Flags;
                  }
                  if ( v43 >= 0 && (Flags & 0x10) != 0 )
                  {
                    v43 = DXGCONTEXT::HandleVistaBltStub(
                            v39,
                            v147.PresentHistoryToken,
                            1,
                            (struct COREDEVICEACCESS *)v148,
                            (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v132,
                            v147.BroadcastContextCount,
                            v147.BroadcastContext,
                            (struct DXGCONTEXT **)P);
                    Flags = (char)v147.Flags;
                  }
                  CommandOffset = v144;
                  if ( v144 != v145 && v144 )
                  {
                    ExFreePoolWithTag(v144, 0);
                    Flags = (char)v147.Flags;
                  }
                  if ( v43 < 0 )
                    goto LABEL_64;
                  goto LABEL_61;
                }
                v108 = (struct DXGALLOCATION **)PagedPoolZeroedArray<DXGALLOCATION *,32>::AllocateElements(
                                                  &v144,
                                                  v147.AllocationCount);
                *(_QWORD *)v121 = v108;
                if ( v108 )
                {
                  v43 = DxgkReferenceAllocationList(&v120[1], pNewAllocationList, v108, *((struct DXGDEVICE **)v16 + 2));
                  Flags = (char)v147.Flags;
                  AllocationCount = v120[1];
                  v120[0] = v120[1];
                  v47 = *(struct DXGALLOCATION ***)v121;
                  goto LABEL_50;
                }
                v112 = WdLogNewEntry5_WdWarning(v110, v109, v111);
                *(_QWORD *)(v112 + 24) = 278LL;
                WdLogEvent5_WdWarning(v112);
                if ( v144 != v145 && v144 )
                  ExFreePoolWithTag(v144, 0);
                v144 = 0LL;
                v146 = 0;
                COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v148);
                if ( v134 )
                  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v132);
                DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v140);
                if ( P != v125 && P )
                  ExFreePoolWithTag(P, 0);
                P = 0LL;
                v126 = 0;
                DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v128);
                DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v122);
                DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v117, v113);
                if ( !v119 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
                  return 3221225495LL;
LABEL_211:
                McTemplateK0q_EtwWriteTransfer(v82, &EventProfilerExit, v83, v117);
                return 3221225495LL;
              }
              v105 = (_QWORD *)WdLogNewEntry5_WdWarning(v147.CommandOffset, v40, v147.CommandLength);
              v105[3] = v39;
              v105[4] = v147.PatchLocationCount;
              v107 = *((unsigned int *)v39 + 26);
            }
LABEL_196:
            v43 = -1073741811;
            v105[6] = -1073741811LL;
            goto LABEL_222;
          }
          v105 = (_QWORD *)WdLogNewEntry5_WdWarning(v147.CommandOffset, v40, v147.CommandLength);
          v105[3] = v39;
          CommandLength = v147.CommandLength;
        }
        v105[4] = CommandLength;
        v107 = *((_QWORD *)v39 + 6);
        goto LABEL_196;
      }
      COREACCESS::Release((COREACCESS *)v149);
      if ( v156 )
LABEL_182:
        COREACCESS::Release((COREACCESS *)v153);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v148);
      if ( v134 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v132);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v140);
      if ( P != v125 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v126 = 0;
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v128);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v122);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v117, v102);
      if ( v119 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v103, &EventProfilerExit, v104, v117);
      return 3221226166LL;
    }
    if ( !v140[0] )
    {
      v98 = WdLogNewEntry5_WdWarning(v30, v29, v31);
      *(_QWORD *)(v98 + 24) = 190LL;
      WdLogEvent5_WdWarning(v98);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v140);
      v80 = P;
      if ( P != v125 && P )
LABEL_135:
        ExFreePoolWithTag(v80, 0);
LABEL_136:
      P = 0LL;
      v126 = 0;
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v128);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v122);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v117, v81);
      if ( !v119 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
        return 3221225495LL;
      goto LABEL_211;
    }
    v99 = WdLogNewEntry5_WdWarning(v30, v29, v31);
    *(_QWORD *)(v99 + 24) = 195LL;
    WdLogEvent5_WdWarning(v99);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v140);
    if ( P != v125 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v126 = 0;
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v128);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v122);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v117, v100);
    if ( !v119 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return (unsigned int)-1073741811;
LABEL_173:
    McTemplateK0q_EtwWriteTransfer(v70, &EventProfilerExit, v71, v117);
    return (unsigned int)-1073741811;
  }
  while ( 1 )
  {
    v84 = (v147.BroadcastContext[v28] >> 6) & 0xFFFFFF;
    v85 = v147.BroadcastContext[v28] >> 30;
    if ( (unsigned int)v84 < *(_DWORD *)(v9 + 256) )
    {
      v86 = *(_QWORD *)(v9 + 240);
      v87 = *(_DWORD *)(v86 + 16 * v84 + 8);
      if ( (_DWORD)v85 == ((v87 >> 5) & 3) && (v87 & 0x2000) == 0 && (v87 & 0x1F) != 0 )
      {
        v88 = (__int64 *)(v86 + 16LL * (unsigned int)v84);
        v89 = v87 & 0x1F;
        if ( (_BYTE)v89 == 7 )
        {
          v91 = *v88;
          goto LABEL_146;
        }
        v90 = WdLogNewEntry5_WdError(v89, v85);
        *(_QWORD *)(v90 + 24) = 316LL;
        WdLogEvent5_WdError(v90);
      }
    }
    v91 = 0LL;
LABEL_146:
    v120[1] = v28 + 1;
    v92 = 8LL * (v28 + 1);
    *(_QWORD *)((char *)P + v92) = v91;
    v93 = *(_QWORD *)((char *)P + v92);
    if ( !v93 )
      break;
    v94 = *(_DWORD *)(v93 + 420);
    if ( (v94 & 8) != 0 )
      break;
    v91 = *(_QWORD *)(v93 + 16);
    if ( v91 != *((_QWORD *)v16 + 2) )
      break;
    if ( (v94 & 0x10) != 0 )
    {
      v96 = WdLogNewEntry5_WdError(v91, v93);
      *(_QWORD *)(v96 + 24) = *(_QWORD *)((char *)P + v92);
      WdLogEvent5_WdError(v96);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v139);
      if ( P != v125 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v126 = 0;
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v128);
      goto LABEL_111;
    }
    if ( *(_BYTE *)(v93 + 454) )
    {
      v95 = WdLogNewEntry5_WdAssertion(v91, v93);
      *(_QWORD *)(v95 + 24) = 178LL;
      WdLogEvent5_WdAssertion(v95);
    }
    v28 = v120[1];
    if ( v120[1] >= v147.BroadcastContextCount )
      goto LABEL_31;
  }
  v97 = (_QWORD *)WdLogNewEntry5_WdError(v91, v93);
  v97[3] = v16;
  v97[4] = v147.BroadcastContext[v28];
  v97[5] = v28;
  v43 = -1073741811;
  v97[6] = -1073741811LL;
  WdLogEvent5_WdError(v97);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v139);
  if ( P != v125 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v126 = 0;
LABEL_162:
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v128);
LABEL_163:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v122);
LABEL_83:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v117, v54);
  v57 = v119 == 0;
LABEL_84:
  if ( !v57 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v55, &EventProfilerExit, v56, v117);
  return (unsigned int)v43;
}
