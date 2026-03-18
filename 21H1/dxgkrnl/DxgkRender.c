/*
 * XREFs of DxgkRender @ 0x1C00F2C60
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0007F18 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0008020 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0008348 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000A1D4 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C000A358 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000A3BC (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C000A884 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000AA48 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000B19C (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D42C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C000E83C (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000E890 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EB8C (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000EF94 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C00199F0 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C0019C7C (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0024550 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x1C00245CC (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDEVICE@@@Z @ 0x1C00F3FA0 (-DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDE.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C00F57B0 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FBEF0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FD2B0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FD5D0 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ResizeUserModeBuffers@DXGCONTEXT@@QEAAJPEAVVIDMM_DMA_POOL@@_KII@Z @ 0x1C014E408 (-ResizeUserModeBuffers@DXGCONTEXT@@QEAAJPEAVVIDMM_DMA_POOL@@_KII@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0208CF4 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z @ 0x1C0223BD0 (-DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z @ 0x1C022832C (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C026494C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C027B800 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
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
  struct DXGTHREAD *Current; // rax
  __int64 v63; // rbx
  __int64 v64; // rdx
  _QWORD *v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // rax
  struct _KEVENT *v72; // rcx
  __int64 v73; // rcx
  unsigned __int8 v74; // bl
  __int64 v75; // r8
  unsigned __int8 v76; // bl
  __int64 v77; // rax
  __int64 v78; // rax
  PVOID v79; // rcx
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // r9
  unsigned int v86; // ecx
  __int64 *v87; // rax
  __int64 v88; // rcx
  __int64 v89; // rax
  __int64 v90; // rcx
  __int64 v91; // r12
  __int64 v92; // rdx
  int v93; // r8d
  __int64 v94; // rax
  __int64 v95; // rax
  _QWORD *v96; // rax
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rdx
  _QWORD *v100; // rax
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r8
  _QWORD *v104; // rax
  __int64 CommandLength; // rcx
  __int64 v106; // rcx
  struct DXGALLOCATION **v107; // rax
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // rax
  __int64 v112; // rdx
  _QWORD *v113; // rax
  _QWORD *v114; // rax
  _QWORD *v115; // rax
  int v116; // [rsp+40h] [rbp-488h] BYREF
  __int64 v117; // [rsp+48h] [rbp-480h]
  char v118; // [rsp+50h] [rbp-478h]
  unsigned int v119[2]; // [rsp+58h] [rbp-470h] BYREF
  unsigned int v120[2]; // [rsp+60h] [rbp-468h]
  DXGCONTEXT *v121; // [rsp+68h] [rbp-460h] BYREF
  char v122; // [rsp+70h] [rbp-458h]
  PVOID P; // [rsp+78h] [rbp-450h]
  _BYTE v124[32]; // [rsp+80h] [rbp-448h] BYREF
  unsigned int v125; // [rsp+A0h] [rbp-428h]
  struct DXGCONTEXT *v126; // [rsp+A8h] [rbp-420h] BYREF
  __int64 v127; // [rsp+B0h] [rbp-418h] BYREF
  int v128; // [rsp+B8h] [rbp-410h]
  int v129; // [rsp+C0h] [rbp-408h] BYREF
  int v130; // [rsp+C4h] [rbp-404h] BYREF
  __int64 v131; // [rsp+C8h] [rbp-400h] BYREF
  struct DXGADAPTER *v132; // [rsp+D0h] [rbp-3F8h]
  char v133; // [rsp+D8h] [rbp-3F0h]
  __int64 v134; // [rsp+E0h] [rbp-3E8h]
  struct _D3DDDI_ALLOCATIONLIST *pNewAllocationList; // [rsp+E8h] [rbp-3E0h]
  _QWORD v136[2]; // [rsp+F0h] [rbp-3D8h] BYREF
  __int64 v137; // [rsp+100h] [rbp-3C8h]
  _BYTE v138[24]; // [rsp+108h] [rbp-3C0h] BYREF
  _QWORD v139[6]; // [rsp+120h] [rbp-3A8h] BYREF
  char v140; // [rsp+150h] [rbp-378h]
  __int64 v141; // [rsp+158h] [rbp-370h]
  __int64 v142; // [rsp+160h] [rbp-368h]
  PVOID v143; // [rsp+170h] [rbp-358h] BYREF
  _BYTE v144[256]; // [rsp+178h] [rbp-350h] BYREF
  int v145; // [rsp+278h] [rbp-250h]
  _D3DKMT_RENDER v146; // [rsp+280h] [rbp-248h] BYREF
  char v147[8]; // [rsp+3F0h] [rbp-D8h] BYREF
  _BYTE v148[16]; // [rsp+3F8h] [rbp-D0h] BYREF
  DXGADAPTER *v149; // [rsp+408h] [rbp-C0h]
  char v150; // [rsp+410h] [rbp-B8h]
  char *v151; // [rsp+418h] [rbp-B0h]
  _BYTE v152[16]; // [rsp+438h] [rbp-90h] BYREF
  __int64 v153; // [rsp+448h] [rbp-80h]
  __int64 v154; // [rsp+478h] [rbp-50h]
  char v155; // [rsp+480h] [rbp-48h]

  v116 = -1;
  v117 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v118 = 1;
    v116 = 2013;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2013);
  }
  else
  {
    v118 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v116, 2013LL);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v8 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v9 = *((_QWORD *)Current + 1)) == 0 )
  {
    v9 = v8;
  }
  v134 = v9;
  if ( !v9 )
  {
    v63 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v63 + 24) = PsGetCurrentProcess();
    v43 = -1073741811;
    *(_QWORD *)(v63 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v63);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v116, v64);
    v57 = v118 == 0;
    goto LABEL_84;
  }
  v10 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v10 = (_OWORD *)MmUserProbeAddress;
  v11 = &v146;
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
  v126 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v121, v146.hDevice, (struct DXGPROCESS *)v9, &v126, 0);
  v16 = v126;
  if ( !v126 )
  {
    v65 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
    v65[3] = v9;
    v65[4] = v146.hDevice;
    v43 = -1073741811;
    v65[5] = -1073741811LL;
    WdLogEvent5_WdError(v65);
    goto LABEL_163;
  }
  v17 = (unsigned int)(*(_DWORD *)&v146.Flags | (*(_DWORD *)&v146.Flags >> 1));
  if ( ((*(_BYTE *)&v146.Flags | (unsigned __int8)(*(_DWORD *)&v146.Flags >> 1)) & 0x20) != 0 )
  {
    v66 = WdLogNewEntry5_WdError(v17, v13);
    *(_QWORD *)(v66 + 24) = v146.hDevice;
    v43 = -1073741811;
    *(_QWORD *)(v66 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v66);
    goto LABEL_163;
  }
  v18 = *((_DWORD *)v126 + 105);
  if ( (v18 & 0x10) != 0 )
  {
    v67 = WdLogNewEntry5_WdError(v17, v13);
    *(_QWORD *)(v67 + 24) = v16;
LABEL_109:
    WdLogEvent5_WdError(v67);
LABEL_111:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v121);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v116, v68);
    if ( !v118 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return (unsigned int)-1073741811;
    goto LABEL_173;
  }
  if ( (v18 & 8) != 0 )
  {
    v71 = WdLogNewEntry5_WdWarning(v17, v13, v15);
    *(_QWORD *)(v71 + 24) = 88LL;
    WdLogEvent5_WdWarning(v71);
    goto LABEL_111;
  }
  if ( *((_BYTE *)v126 + 454) )
  {
    v67 = WdLogNewEntry5_WdError(v17, v13);
    *(_QWORD *)(v67 + 24) = v146.hDevice;
    goto LABEL_109;
  }
  v19 = *((_QWORD *)v126 + 2);
  v136[1] = v19;
  v127 = v19;
  v20 = *(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL);
  if ( *(int *)(v20 + 2304) >= 0x2000 || *(_BYTE *)(v20 + 2604) )
    v21 = *((_DWORD *)DXGGLOBAL::GetGlobal(v20, v13) + 283);
  else
    v21 = 0;
  v128 = v21;
  v22 = *(struct _KEVENT **)(v19 + 16);
  if ( *(_DWORD *)(v19 + 432) == 2 )
  {
    if ( KeReadStateEvent(v22 + 5) )
      goto LABEL_21;
    v72 = v22 + 5;
  }
  else
  {
    if ( KeReadStateEvent(v22 + 4) )
      goto LABEL_21;
    v72 = v22 + 4;
  }
  KeWaitForSingleObject(v72, Executive, 0, 0, 0LL);
LABEL_21:
  KeEnterCriticalRegion();
  if ( !v21 )
  {
    if ( ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v19 + 136), 0) )
      goto LABEL_23;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL) + 104LL));
    v74 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v19 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q_EtwWriteTransfer(v73, &EventBlockThread, v75, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v19 + 136), 1u);
    if ( !v74 )
      goto LABEL_128;
    goto LABEL_127;
  }
  if ( (unsigned __int8)ExTryAcquirePushLockSharedEx(v19 + 144, 0LL) )
    goto LABEL_23;
  KeLeaveCriticalRegion();
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL) + 104LL));
  v76 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v19 + 16) + 16LL));
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v19 + 144));
  if ( v76 )
LABEL_127:
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v19 + 16) + 16LL));
LABEL_128:
  ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL) + 104LL, 0LL);
  KeLeaveCriticalRegion();
LABEL_23:
  BroadcastContextCount = v146.BroadcastContextCount;
  if ( v146.BroadcastContextCount
    && DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL) + 16LL))
    || (unsigned int)BroadcastContextCount > 0x40 )
  {
    v77 = WdLogNewEntry5_WdWarning(v23, BroadcastContextCount, v24);
    *(_QWORD *)(v77 + 24) = v16;
    v43 = -1073741811;
    *(_QWORD *)(v77 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v77);
    goto LABEL_162;
  }
  v26 = (unsigned int)(BroadcastContextCount + 1);
  PoolWithTag = 0LL;
  P = 0LL;
  v125 = 0;
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
    PoolWithTag = v124;
    P = v124;
  }
  v125 = v26;
  if ( !PoolWithTag )
  {
LABEL_133:
    v78 = WdLogNewEntry5_WdWarning(PoolWithTag, BroadcastContextCount, v24);
    *(_QWORD *)(v78 + 24) = 126LL;
    WdLogEvent5_WdWarning(v78);
    v79 = P;
    if ( P != v124 && P )
      goto LABEL_135;
    goto LABEL_136;
  }
  memset(PoolWithTag, 0, 8 * v26);
  PoolWithTag = P;
LABEL_29:
  if ( !PoolWithTag )
    goto LABEL_133;
  *PoolWithTag = v16;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v138, (struct _KTHREAD **)v9);
  v28 = 0;
  if ( !v146.BroadcastContextCount )
  {
LABEL_31:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v138);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
      (__int64)v139,
      P,
      v125);
    if ( !v140 )
    {
      v132 = *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL) + 16LL);
      _InterlockedIncrement64((volatile signed __int64 *)v132 + 3);
      v131 = -1LL;
      v32 = v132;
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx((char *)v32 + 136, 0LL);
      v133 = 1;
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v147, *((_QWORD *)v16 + 2), 0, v33, 0);
      if ( v155 )
      {
        COREACCESS::AcquireShared((COREACCESS *)v152, 0LL);
        v35 = *(unsigned int *)(v153 + 200);
        if ( (_DWORD)v35 != 1 )
          goto LABEL_182;
      }
      if ( v150 )
      {
        v100 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v35, v34);
        v100[3] = 275LL;
        v100[4] = 4LL;
        v100[5] = v148;
        v100[6] = 0LL;
        v100[7] = 0LL;
        WdLogEvent5_WdCriticalError(v100);
      }
      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v149 + 23) )
      {
        if ( !KeReadStateEvent((PRKEVENT)v149 + 2) )
        {
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q_EtwWriteTransfer(v37, &EventBlockThread, v38, 72);
          KeWaitForSingleObject((char *)v149 + 48, Executive, 0, 0, 0LL);
        }
        DXGADAPTER::AcquireCoreResourceShared(v149, 0LL);
      }
      v151 = 0LL;
      v150 = 1;
      if ( *(_DWORD *)(v154 + 576) == 1 )
      {
        v39 = v126;
        v40 = *((_QWORD *)v126 + 6);
        CommandOffset = (PVOID)v146.CommandOffset;
        if ( v146.CommandOffset >= v40 )
        {
          v104 = (_QWORD *)WdLogNewEntry5_WdWarning(v146.CommandOffset, v40, v36);
          v104[3] = v39;
          CommandLength = v146.CommandOffset;
        }
        else
        {
          if ( v146.CommandOffset + (unsigned __int64)v146.CommandLength <= v40 )
          {
            AllocationCount = v146.AllocationCount;
            v119[0] = v146.AllocationCount;
            if ( v146.AllocationCount > *((_DWORD *)v126 + 18) )
            {
              v104 = (_QWORD *)WdLogNewEntry5_WdWarning(v146.CommandOffset, v40, v146.CommandLength);
              v104[3] = v39;
              v104[4] = v146.AllocationCount;
              v106 = *((unsigned int *)v39 + 18);
            }
            else
            {
              if ( v146.PatchLocationCount <= *((_DWORD *)v126 + 26) )
              {
                v43 = 0;
                Flags = (char)v146.Flags;
                if ( !v146.CommandLength )
                {
LABEL_61:
                  if ( (Flags & 1) == 0 && (Flags & 2) == 0 && (Flags & 4) == 0 )
                    goto LABEL_64;
                  if ( (Flags & 1) != 0 )
                    NewCommandBufferSize = v146.NewCommandBufferSize;
                  else
                    NewCommandBufferSize = *((unsigned int *)v39 + 50);
                  v119[0] = NewCommandBufferSize;
                  if ( (Flags & 2) != 0 )
                    CommandOffset = (PVOID)v146.NewAllocationListSize;
                  else
                    CommandOffset = (PVOID)*((unsigned int *)v39 + 53);
                  v120[0] = (unsigned int)CommandOffset;
                  if ( (Flags & 4) != 0 )
                    NewPatchLocationListSize = v146.NewPatchLocationListSize;
                  else
                    NewPatchLocationListSize = *((_DWORD *)v39 + 54);
                  v61 = *((unsigned int *)v39 + 50);
                  if ( (unsigned int)NewCommandBufferSize < (unsigned int)v61 )
                    goto LABEL_217;
                  if ( (unsigned int)CommandOffset >= *((_DWORD *)v39 + 53)
                    && NewPatchLocationListSize >= *((_DWORD *)v39 + 54) )
                  {
                    if ( DXGADAPTER::IsCoreResourceSharedOwner(v149) )
                      COREDEVICEACCESS::Release((COREDEVICEACCESS *)v147);
                    DXGCONTEXT::ResizeUserModeBuffers(
                      v39,
                      *((struct VIDMM_DMA_POOL **)v39 + 29),
                      v119[0],
                      v120[0],
                      NewPatchLocationListSize);
                    v43 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v147, 0LL);
                    goto LABEL_64;
                  }
                  if ( (unsigned int)NewCommandBufferSize < (unsigned int)v61 )
                  {
LABEL_217:
                    v113 = (_QWORD *)WdLogNewEntry5_WdWarning(CommandOffset, v61, NewCommandBufferSize);
                    v113[3] = v39;
                    v113[4] = v119[0];
                    v113[5] = *((unsigned int *)v39 + 50);
                    WdLogEvent5_WdWarning(v113);
                    CommandOffset = (PVOID)v120[0];
                  }
                  if ( (unsigned int)CommandOffset < *((_DWORD *)v39 + 53) )
                  {
                    v114 = (_QWORD *)WdLogNewEntry5_WdWarning(CommandOffset, v61, NewCommandBufferSize);
                    v114[3] = v39;
                    v114[4] = v120[0];
                    v114[5] = *((unsigned int *)v39 + 53);
                    WdLogEvent5_WdWarning(v114);
                  }
                  if ( NewPatchLocationListSize >= *((_DWORD *)v39 + 54) )
                    goto LABEL_64;
                  v104 = (_QWORD *)WdLogNewEntry5_WdWarning(CommandOffset, v61, NewCommandBufferSize);
                  v104[3] = v39;
                  v104[4] = NewPatchLocationListSize;
                  v106 = *((unsigned int *)v39 + 54);
LABEL_222:
                  v104[5] = v106;
                  WdLogEvent5_WdWarning(v104);
LABEL_64:
                  v48 = 0;
                  v136[0] = 0LL;
                  v49 = 0;
                  v129 = 0;
                  v50 = 0LL;
                  v130 = 0;
                  v51 = 0LL;
                  if ( v43 != -1073741130 )
                  {
                    if ( !v150 )
                    {
                      v115 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CommandOffset, 0LL);
                      v115[3] = 275LL;
                      v115[4] = 4LL;
                      v115[5] = v148;
                      v115[6] = 0LL;
                      v115[7] = 0LL;
                      WdLogEvent5_WdCriticalError(v115);
                    }
                    v150 = 0;
                    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v149 + 23) )
                      DXGADAPTER::ReleaseCoreResource(v149, v151);
                    v151 = 0LL;
                    if ( v155 )
                      COREACCESS::Release((COREACCESS *)v152);
                    v39 = v126;
                    if ( !*((_BYTE *)v16 + 454) )
                      (*(void (__fastcall **)(_QWORD, _QWORD *, int *, int *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL) + 640LL)
                                                                                         + 8LL)
                                                                             + 488LL))(
                        *((_QWORD *)v126 + 29),
                        v136,
                        &v129,
                        &v130);
                    v52 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL) + 616LL) + 8LL);
                    LODWORD(v51) = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(v52 + 448))(
                                     *((_QWORD *)v39 + 34),
                                     v52,
                                     v50,
                                     v51);
                    v48 = v136[0];
                    v49 = v129;
                    LODWORD(v50) = v130;
                  }
                  v141 = *((_QWORD *)v39 + 7);
                  *(_QWORD *)(a1 + 24) = v141;
                  *(_DWORD *)(a1 + 32) = v48;
                  v142 = *((_QWORD *)v39 + 11);
                  *(_QWORD *)(a1 + 40) = v142;
                  *(_DWORD *)(a1 + 48) = v49;
                  v137 = *((_QWORD *)v39 + 15);
                  *(_QWORD *)(a1 + 56) = v137;
                  *(_DWORD *)(a1 + 64) = v50;
                  *(_DWORD *)(a1 + 340) = v51;
                  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v147);
                  if ( v133 )
                  {
                    v133 = 0;
                    ExReleasePushLockSharedEx((char *)v132 + 136, 0LL);
                    KeLeaveCriticalRegion();
                    v53 = (DXGGLOBAL **)v132;
                    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v132 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                      DXGGLOBAL::DestroyAdapter(v53[2], (struct DXGADAPTER *)v53);
                  }
                  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v139);
                  if ( P != v124 && P )
                    ExFreePoolWithTag(P, 0);
                  P = 0LL;
                  v125 = 0;
                  if ( v128 )
                    ExReleasePushLockSharedEx(v19 + 144, 0LL);
                  else
                    ExReleaseResourceLite(*(PERESOURCE *)(v19 + 136));
                  KeLeaveCriticalRegion();
                  if ( v121 && !v122 )
                    DXGCONTEXT::ReleaseReference(v121);
                  goto LABEL_83;
                }
                if ( (*(_BYTE *)&v146.Flags & 0x20) != 0 )
                  pNewAllocationList = v146.pNewAllocationList;
                else
                  pNewAllocationList = (struct _D3DDDI_ALLOCATIONLIST *)*((_QWORD *)v126 + 11);
                v45 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL) + 16LL);
                v46 = *(int *)(v45 + 2304) >= 0x2000 || *(_BYTE *)(v45 + 2604);
                v119[1] = v146.AllocationCount;
                v143 = 0LL;
                v145 = 0;
                v47 = 0LL;
                *(_QWORD *)v120 = 0LL;
                if ( !v46 )
                {
LABEL_50:
                  if ( v43 >= 0 )
                  {
                    v43 = DXGCONTEXT::Render(
                            v39,
                            &v146,
                            (struct COREDEVICEACCESS *)v147,
                            (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v131,
                            (struct DXGCONTEXT **)P,
                            v47,
                            0LL);
                    Flags = (char)v146.Flags;
                    AllocationCount = v119[0];
                    v47 = *(struct DXGALLOCATION ***)v120;
                  }
                  if ( v46 )
                  {
                    DxgkUnreferenceAllocationList(AllocationCount, v47);
                    Flags = (char)v146.Flags;
                  }
                  if ( v43 >= 0 && (Flags & 0x10) != 0 )
                  {
                    v43 = DXGCONTEXT::HandleVistaBltStub(
                            v39,
                            v146.PresentHistoryToken,
                            1,
                            (struct COREDEVICEACCESS *)v147,
                            (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v131,
                            v146.BroadcastContextCount,
                            v146.BroadcastContext,
                            (struct DXGCONTEXT **)P);
                    Flags = (char)v146.Flags;
                  }
                  CommandOffset = v143;
                  if ( v143 != v144 && v143 )
                  {
                    ExFreePoolWithTag(v143, 0);
                    Flags = (char)v146.Flags;
                  }
                  if ( v43 < 0 )
                    goto LABEL_64;
                  goto LABEL_61;
                }
                v107 = (struct DXGALLOCATION **)PagedPoolZeroedArray<DXGALLOCATION *,32>::AllocateElements(
                                                  &v143,
                                                  v146.AllocationCount);
                *(_QWORD *)v120 = v107;
                if ( v107 )
                {
                  v43 = DxgkReferenceAllocationList(&v119[1], pNewAllocationList, v107, *((struct DXGDEVICE **)v16 + 2));
                  Flags = (char)v146.Flags;
                  AllocationCount = v119[1];
                  v119[0] = v119[1];
                  v47 = *(struct DXGALLOCATION ***)v120;
                  goto LABEL_50;
                }
                v111 = WdLogNewEntry5_WdWarning(v109, v108, v110);
                *(_QWORD *)(v111 + 24) = 278LL;
                WdLogEvent5_WdWarning(v111);
                if ( v143 != v144 && v143 )
                  ExFreePoolWithTag(v143, 0);
                v143 = 0LL;
                v145 = 0;
                COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v147);
                if ( v133 )
                  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v131);
                DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v139);
                if ( P != v124 && P )
                  ExFreePoolWithTag(P, 0);
                P = 0LL;
                v125 = 0;
                DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v127);
                DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v121);
                DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v116, v112);
                if ( !v118 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
                  return 3221225495LL;
LABEL_211:
                McTemplateK0q_EtwWriteTransfer(v81, &EventProfilerExit, v82, v116);
                return 3221225495LL;
              }
              v104 = (_QWORD *)WdLogNewEntry5_WdWarning(v146.CommandOffset, v40, v146.CommandLength);
              v104[3] = v39;
              v104[4] = v146.PatchLocationCount;
              v106 = *((unsigned int *)v39 + 26);
            }
LABEL_196:
            v43 = -1073741811;
            v104[6] = -1073741811LL;
            goto LABEL_222;
          }
          v104 = (_QWORD *)WdLogNewEntry5_WdWarning(v146.CommandOffset, v40, v146.CommandLength);
          v104[3] = v39;
          CommandLength = v146.CommandLength;
        }
        v104[4] = CommandLength;
        v106 = *((_QWORD *)v39 + 6);
        goto LABEL_196;
      }
      COREACCESS::Release((COREACCESS *)v148);
      if ( v155 )
LABEL_182:
        COREACCESS::Release((COREACCESS *)v152);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v147);
      if ( v133 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v131);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v139);
      if ( P != v124 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v125 = 0;
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v127);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v121);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v116, v101);
      if ( v118 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v102, &EventProfilerExit, v103, v116);
      return 3221226166LL;
    }
    if ( !v139[0] )
    {
      v97 = WdLogNewEntry5_WdWarning(v30, v29, v31);
      *(_QWORD *)(v97 + 24) = 190LL;
      WdLogEvent5_WdWarning(v97);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v139);
      v79 = P;
      if ( P != v124 && P )
LABEL_135:
        ExFreePoolWithTag(v79, 0);
LABEL_136:
      P = 0LL;
      v125 = 0;
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v127);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v121);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v116, v80);
      if ( !v118 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
        return 3221225495LL;
      goto LABEL_211;
    }
    v98 = WdLogNewEntry5_WdWarning(v30, v29, v31);
    *(_QWORD *)(v98 + 24) = 195LL;
    WdLogEvent5_WdWarning(v98);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v139);
    if ( P != v124 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v125 = 0;
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v127);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v121);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v116, v99);
    if ( !v118 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return (unsigned int)-1073741811;
LABEL_173:
    McTemplateK0q_EtwWriteTransfer(v69, &EventProfilerExit, v70, v116);
    return (unsigned int)-1073741811;
  }
  while ( 1 )
  {
    v83 = (v146.BroadcastContext[v28] >> 6) & 0xFFFFFF;
    v84 = v146.BroadcastContext[v28] >> 30;
    if ( (unsigned int)v83 < *(_DWORD *)(v9 + 256) )
    {
      v85 = *(_QWORD *)(v9 + 240);
      v86 = *(_DWORD *)(v85 + 16 * v83 + 8);
      if ( (_DWORD)v84 == ((v86 >> 5) & 3) && (v86 & 0x2000) == 0 && (v86 & 0x1F) != 0 )
      {
        v87 = (__int64 *)(v85 + 16LL * (unsigned int)v83);
        v88 = v86 & 0x1F;
        if ( (_BYTE)v88 == 7 )
        {
          v90 = *v87;
          goto LABEL_146;
        }
        v89 = WdLogNewEntry5_WdError(v88, v84);
        *(_QWORD *)(v89 + 24) = 267LL;
        WdLogEvent5_WdError(v89);
      }
    }
    v90 = 0LL;
LABEL_146:
    v119[1] = v28 + 1;
    v91 = 8LL * (v28 + 1);
    *(_QWORD *)((char *)P + v91) = v90;
    v92 = *(_QWORD *)((char *)P + v91);
    if ( !v92 )
      break;
    v93 = *(_DWORD *)(v92 + 420);
    if ( (v93 & 8) != 0 )
      break;
    v90 = *(_QWORD *)(v92 + 16);
    if ( v90 != *((_QWORD *)v16 + 2) )
      break;
    if ( (v93 & 0x10) != 0 )
    {
      v95 = WdLogNewEntry5_WdError(v90, v92);
      *(_QWORD *)(v95 + 24) = *(_QWORD *)((char *)P + v91);
      WdLogEvent5_WdError(v95);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v138);
      if ( P != v124 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v125 = 0;
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v127);
      goto LABEL_111;
    }
    if ( *(_BYTE *)(v92 + 454) )
    {
      v94 = WdLogNewEntry5_WdAssertion(v90, v92);
      *(_QWORD *)(v94 + 24) = 178LL;
      WdLogEvent5_WdAssertion(v94);
    }
    v28 = v119[1];
    if ( v119[1] >= v146.BroadcastContextCount )
      goto LABEL_31;
  }
  v96 = (_QWORD *)WdLogNewEntry5_WdError(v90, v92);
  v96[3] = v16;
  v96[4] = v146.BroadcastContext[v28];
  v96[5] = v28;
  v43 = -1073741811;
  v96[6] = -1073741811LL;
  WdLogEvent5_WdError(v96);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v138);
  if ( P != v124 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v125 = 0;
LABEL_162:
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v127);
LABEL_163:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v121);
LABEL_83:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v116, v54);
  v57 = v118 == 0;
LABEL_84:
  if ( !v57 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v55, &EventProfilerExit, v56, v116);
  return (unsigned int)v43;
}
