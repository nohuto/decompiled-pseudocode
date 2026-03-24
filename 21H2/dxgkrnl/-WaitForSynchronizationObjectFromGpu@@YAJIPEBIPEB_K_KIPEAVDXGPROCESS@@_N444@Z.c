/*
 * XREFs of ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z @ 0x1C00EC3B0
 * Callers:
 *     ?DxgkWaitForSynchronizationObjectInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@H@Z @ 0x1C00E8EF0 (-DxgkWaitForSynchronizationObjectInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@H@Z.c)
 *     ?DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU@@_N1PEB_K1@Z @ 0x1C00EBF10 (-DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 *     ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x1C0255330 (-IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z.c)
 *     ?InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z @ 0x1C02AB318 (-InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z.c)
 * Callees:
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0001E14 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00022BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C00026F0 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004090 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0004160 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0004200 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x1C0004280 (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0004300 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0004370 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000568C (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C00058C8 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007018 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C001B6E4 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z @ 0x1C0025C30 (--0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ @ 0x1C0025C58 (-Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ.c)
 *     ?GetHeadIterator@?$DXGNODELIST@VDXGCONTEXT@@VDXGHWQUEUE@@@@QEAA?AVITERATOR@1@XZ @ 0x1C0026220 (-GetHeadIterator@-$DXGNODELIST@VDXGCONTEXT@@VDXGHWQUEUE@@@@QEAA-AVITERATOR@1@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@_N@Z @ 0x1C0027E30 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0028C40 (memmove.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     McTemplateK0pqPR1XR1_EtwWriteTransfer @ 0x1C004718C (McTemplateK0pqPR1XR1_EtwWriteTransfer.c)
 *     ?FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z @ 0x1C00491E8 (-FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?GetRedirectedFlipFenceValue@DXGSYNCOBJECT@@QEBA_KXZ @ 0x1C0049720 (-GetRedirectedFlipFenceValue@DXGSYNCOBJECT@@QEBA_KXZ.c)
 *     McTemplateK0pqPR1x_EtwWriteTransfer @ 0x1C0049768 (McTemplateK0pqPR1x_EtwWriteTransfer.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FD9E0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C020CC74 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_OBJECT@@I@Z @ 0x1C022C358 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_O.c)
 *     ?VmBusSendWaitForSyncObjectFromGpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEBIPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEB_K_KIPEAVDXGHWQUEUE@@@Z @ 0x1C024DE30 (-VmBusSendWaitForSyncObjectFromGpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTE.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0290C94 (-GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@.c)
 */

__int64 __fastcall WaitForSynchronizationObjectFromGpu(
        unsigned int a1,
        unsigned int *a2,
        unsigned __int64 *a3,
        unsigned __int64 a4,
        unsigned int a5,
        struct DXGPROCESS *a6,
        bool a7,
        bool a8,
        bool a9,
        bool a10)
{
  unsigned __int64 *v10; // rsi
  __int64 v12; // r14
  struct DXGDEVICESYNCOBJECT **v13; // r13
  struct DXGSYNCOBJECT **v14; // rax
  _BYTE *PoolWithTag; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *v18; // rax
  struct DXGCONTEXT *v19; // r15
  __int64 v21; // rdi
  char v22; // r12
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  struct _KEVENT *v26; // rbx
  struct _KEVENT *v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  unsigned __int8 v30; // bl
  __int64 v31; // r8
  _QWORD *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  struct DXGGLOBAL *Global; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  _QWORD *v42; // rax
  PERESOURCE *v43; // rbx
  unsigned int v44; // r15d
  __int64 v45; // r14
  struct DXGPROCESS *v46; // rdi
  char *v47; // rsi
  unsigned int v48; // ebx
  __int64 v49; // rcx
  __int64 v50; // r8
  int v51; // r9d
  __int64 v52; // rax
  unsigned int v53; // ebx
  __int64 v54; // rdi
  unsigned int v55; // ecx
  __int64 v56; // rdi
  __int64 v57; // rdx
  __int64 v58; // rcx
  int v59; // eax
  __int64 v60; // rax
  __int64 v61; // rax
  int v62; // eax
  __int64 v63; // rbx
  __int64 v64; // rdx
  __int64 v65; // rcx
  _QWORD *v66; // rax
  __int64 v67; // rbx
  __int64 v68; // rdx
  __int64 v69; // rcx
  int v70; // eax
  __int64 v71; // rax
  int v72; // eax
  __int64 v73; // rcx
  __int64 v74; // r8
  int v75; // r9d
  __int64 v76; // rax
  __int64 v77; // rax
  struct DXGCONTEXT *v78; // rcx
  struct ADAPTER_RENDER *v79; // rbx
  __int64 v80; // rcx
  struct ADAPTER_RENDER *v81; // rdx
  __int64 v82; // rcx
  struct DXGCONTEXT *v83; // rcx
  unsigned __int64 RedirectedFlipFenceValue; // rax
  unsigned int v85; // ebx
  __int64 v86; // rcx
  __int64 v87; // r8
  int v88; // r9d
  __int64 v89; // rax
  unsigned int v90; // ebx
  struct DXGPROCESS *v91; // rdi
  __int64 v92; // r8
  unsigned int v93; // ecx
  __int64 v94; // rcx
  __int64 v95; // rax
  __int64 v96; // rbx
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // rcx
  struct DXGCONTEXT *v100; // rdi
  __int64 v101; // rax
  struct DXGSYNCOBJECT **v102; // rdx
  _QWORD *v103; // rax
  _QWORD *v104; // rax
  _QWORD *v105; // rax
  __int64 v106; // rdx
  __int64 v107; // rax
  __int64 v108; // rdx
  __int64 v109; // rax
  _QWORD *v110; // rax
  __int64 v111; // rcx
  _BYTE *v112; // r9
  unsigned int v113; // r10d
  __int64 v114; // rcx
  unsigned int v115; // r15d
  size_t v116; // r8
  bool v117; // r12
  __int64 v118; // rax
  unsigned int v119; // r15d
  struct DXGCONTEXT *v120; // r13
  struct DXGSYNCOBJECT **v121; // rdx
  __int64 v122; // rdi
  __int64 v123; // rdx
  __int64 v124; // rcx
  _QWORD *v125; // rax
  __int64 v126; // rbx
  __int64 v127; // rdx
  __int64 v128; // rcx
  int v129; // eax
  __int64 v130; // rax
  int v131; // eax
  __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // r8
  int v135; // r9d
  __int64 v136; // rax
  __int64 v137; // rax
  int v138; // ecx
  unsigned __int64 v139; // r14
  struct DXGCONTEXT *v140; // r10
  __int64 v141; // r9
  __int64 v142; // rdi
  int v143; // eax
  __int64 v144; // rdx
  __int64 v145; // rcx
  __int64 v146; // r8
  __int64 v147; // r9
  struct DXGCONTEXT *v148; // r10
  _QWORD *v149; // rbx
  _QWORD *v150; // r12
  char *v151; // r13
  __int64 v152; // rdi
  int v153; // eax
  __int64 v154; // rcx
  __int64 v155; // r8
  __int64 v156; // rsi
  struct DXGCONTEXT *v157; // rbx
  int v158; // eax
  __int64 v159; // rcx
  __int64 v160; // r8
  __int64 v161; // rdi
  _QWORD *v162; // rax
  __int64 v163; // rdx
  _QWORD *v164; // rax
  __int64 v165; // rdx
  _QWORD *v166; // rax
  __int64 v167; // rdx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-288h]
  char v169; // [rsp+50h] [rbp-258h]
  char v170; // [rsp+51h] [rbp-257h]
  PERESOURCE *v171; // [rsp+58h] [rbp-250h] BYREF
  char v172; // [rsp+60h] [rbp-248h]
  unsigned int v173; // [rsp+68h] [rbp-240h]
  __int64 v174; // [rsp+70h] [rbp-238h] BYREF
  int v175; // [rsp+78h] [rbp-230h]
  struct DXGPROCESS *v176; // [rsp+80h] [rbp-228h]
  PVOID P; // [rsp+88h] [rbp-220h] BYREF
  _BYTE v178[32]; // [rsp+90h] [rbp-218h] BYREF
  int v179; // [rsp+B0h] [rbp-1F8h]
  DXGCONTEXT *v180; // [rsp+B8h] [rbp-1F0h] BYREF
  char v181; // [rsp+C0h] [rbp-1E8h]
  struct DXGCONTEXT *v182; // [rsp+C8h] [rbp-1E0h]
  struct DXGCONTEXT *v183; // [rsp+D0h] [rbp-1D8h] BYREF
  unsigned int *v184; // [rsp+D8h] [rbp-1D0h]
  _BYTE v185[16]; // [rsp+E0h] [rbp-1C8h] BYREF
  struct DXGSYNCOBJECT **i; // [rsp+F0h] [rbp-1B8h]
  PVOID v187; // [rsp+F8h] [rbp-1B0h]
  _BYTE v188[32]; // [rsp+100h] [rbp-1A8h] BYREF
  unsigned int v189; // [rsp+120h] [rbp-188h]
  void *Src; // [rsp+128h] [rbp-180h]
  unsigned __int64 v191; // [rsp+130h] [rbp-178h] BYREF
  const unsigned __int64 *v192; // [rsp+138h] [rbp-170h]
  __int64 v193; // [rsp+140h] [rbp-168h] BYREF
  __int64 v194; // [rsp+148h] [rbp-160h] BYREF
  char v195; // [rsp+150h] [rbp-158h]
  struct DXGCONTEXT *v196; // [rsp+158h] [rbp-150h]
  __int64 v197; // [rsp+160h] [rbp-148h] BYREF
  char v198; // [rsp+168h] [rbp-140h]
  struct DXGADAPTERSYNCOBJECT *v199; // [rsp+170h] [rbp-138h] BYREF
  __int64 v200; // [rsp+178h] [rbp-130h]
  __int128 v201; // [rsp+180h] [rbp-128h] BYREF
  PVOID v202; // [rsp+190h] [rbp-118h]
  _BYTE v203[32]; // [rsp+198h] [rbp-110h] BYREF
  unsigned int v204; // [rsp+1B8h] [rbp-F0h]
  char v205[8]; // [rsp+1C0h] [rbp-E8h] BYREF
  _BYTE v206[16]; // [rsp+1C8h] [rbp-E0h] BYREF
  DXGADAPTER *v207; // [rsp+1D8h] [rbp-D0h]
  char v208; // [rsp+1E0h] [rbp-C8h]
  __int64 v209; // [rsp+1E8h] [rbp-C0h]
  _BYTE v210[16]; // [rsp+208h] [rbp-A0h] BYREF
  __int64 v211; // [rsp+218h] [rbp-90h]
  __int64 v212; // [rsp+248h] [rbp-60h]
  char v213; // [rsp+250h] [rbp-58h]

  v10 = a3;
  v192 = a3;
  v184 = a2;
  v173 = a1;
  v12 = a1;
  v200 = a1;
  Src = a3;
  v191 = a4;
  v176 = a6;
  v196 = a6;
  v13 = 0LL;
  v187 = 0LL;
  v189 = 0;
  if ( a1 <= 4 )
  {
    PoolWithTag = v188;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a1 < 8 )
    {
      v14 = 0LL;
      goto LABEL_8;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * a1, 0x4B677844u);
  }
  v187 = PoolWithTag;
  i = (struct DXGSYNCOBJECT **)PoolWithTag;
  v189 = a1;
  if ( !PoolWithTag )
    return 3221225495LL;
  memset(PoolWithTag, 0, 8 * v12);
  v14 = (struct DXGSYNCOBJECT **)v187;
LABEL_8:
  i = v14;
  if ( !v14 )
    return 3221225495LL;
  v183 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v180, a5, a6, &v183, a8);
  if ( !v183 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16);
    v18[3] = a6;
    v18[4] = a5;
    v18[5] = -1073741811LL;
    WdLogEvent5_WdError(v18);
    goto LABEL_183;
  }
  v19 = v183;
  v182 = v183;
  v170 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v183 + 2) + 16LL) + 16LL) + 209LL);
  P = 0LL;
  v179 = 0;
  if ( v170 )
  {
    v13 = (struct DXGDEVICESYNCOBJECT **)PagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,4>::AllocateElements(&P, a1);
    if ( !v13 )
    {
      if ( P != v178 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v179 = 0;
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v180);
      if ( v187 != v188 && v187 )
        ExFreePoolWithTag(v187, 0);
      return 3221225495LL;
    }
  }
  v21 = *((_QWORD *)v19 + 2);
  v174 = v21;
  v22 = 0;
  v175 = 0;
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v185, (struct DXGDEVICE *)v21);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v205, *((_QWORD *)v19 + 2), 0, v23, a8);
  if ( a8 )
    goto LABEL_62;
  if ( !a9 )
  {
    if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(*((_QWORD *)v19 + 2) + 136LL)) )
      DXGDEVICEACCESSLOCKSHARED::Acquire((DXGDEVICEACCESSLOCKSHARED *)v185);
    goto LABEL_38;
  }
  v26 = *(struct _KEVENT **)(v21 + 16);
  if ( *(_DWORD *)(v21 + 432) == 2 )
  {
    if ( !KeReadStateEvent(v26 + 5) )
    {
      v27 = v26 + 5;
LABEL_27:
      KeWaitForSingleObject(v27, Executive, 0, 0, 0LL);
    }
  }
  else if ( !KeReadStateEvent(v26 + 4) )
  {
    v27 = v26 + 4;
    goto LABEL_27;
  }
  KeEnterCriticalRegion();
  if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v21 + 136), 0) )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL) + 104LL));
    v30 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v21 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q_EtwWriteTransfer(v29, &EventBlockThread, v31, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v21 + 136), 1u);
    if ( v30 )
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v21 + 16) + 16LL));
    ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL) + 104LL, 0LL);
    KeLeaveCriticalRegion();
  }
  v175 = 1;
LABEL_38:
  if ( v213 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v210, 0LL);
    v28 = *(unsigned int *)(v211 + 200);
    if ( (_DWORD)v28 != 1 )
      goto LABEL_51;
  }
  if ( v208 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v28, v24);
    v32[3] = 275LL;
    v32[4] = 4LL;
    v32[5] = v206;
    v32[6] = 0LL;
    v32[7] = 0LL;
    WdLogEvent5_WdCriticalError(v32);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v207 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v207 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v33, &EventBlockThread, v34, 72);
      KeWaitForSingleObject((char *)v207 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v207, 0LL);
  }
  v209 = 0LL;
  v208 = 1;
  v25 = *(unsigned int *)(v212 + 576);
  if ( (_DWORD)v25 != 1 )
  {
    COREACCESS::Release((COREACCESS *)v206);
    if ( !v213 )
    {
LABEL_52:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v205);
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v185);
      if ( v174 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v174);
      if ( P != v178 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v179 = 0;
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v180);
      if ( v187 != v188 && v187 )
        ExFreePoolWithTag(v187, 0);
      return 3221226166LL;
    }
LABEL_51:
    COREACCESS::Release((COREACCESS *)v210);
    goto LABEL_52;
  }
  v21 = v174;
  v10 = (unsigned __int64 *)Src;
  v192 = (const unsigned __int64 *)Src;
LABEL_62:
  Global = DXGGLOBAL::GetGlobal(v25, v24);
  v171 = (PERESOURCE *)Global;
  v172 = 0;
  if ( !Global )
  {
    v38 = WdLogNewEntry5_WdAssertion(v37, v36);
    *(_QWORD *)(v38 + 24) = 2427LL;
    WdLogEvent5_WdAssertion(v38);
    Global = (struct DXGGLOBAL *)v171;
  }
  if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 65)) )
  {
    v41 = WdLogNewEntry5_WdAssertion(v40, v39);
    *(_QWORD *)(v41 + 24) = 2432LL;
    WdLogEvent5_WdAssertion(v41);
  }
  if ( v172 )
  {
    v42 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v40, v39);
    v42[3] = 275LL;
    v42[4] = 4LL;
    v42[5] = &v171;
    v42[6] = 0LL;
    v42[7] = 0LL;
    WdLogEvent5_WdCriticalError(v42);
  }
  v43 = v171;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v43[65], 1u);
  v172 = 1;
  v169 = 0;
  v44 = 0;
  if ( v173 )
  {
    v45 = 0LL;
    v46 = v176;
    v47 = (char *)v176 + 208;
    while ( 1 )
    {
      v48 = v184[v45];
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v47, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v51 = *((_DWORD *)v47 + 6);
          if ( v51 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q_EtwWriteTransfer(v49, &EventBlockThread, v50, v51);
        }
        ExAcquirePushLockSharedEx(v47, 0LL);
      }
      v52 = (v48 >> 6) & 0xFFFFFF;
      v53 = v48 >> 30;
      if ( (unsigned int)v52 < *((_DWORD *)v46 + 64)
        && (v54 = *((_QWORD *)v46 + 30), v55 = *(_DWORD *)(v54 + 16 * v52 + 8), v53 == ((v55 >> 5) & 3))
        && (v55 & 0x2000) == 0
        && (v55 & 0x1F) == 8 )
      {
        v56 = *(_QWORD *)(v54 + 16LL * (unsigned int)v52);
      }
      else
      {
        v56 = 0LL;
      }
      ExReleasePushLockSharedEx(v47, 0LL);
      KeLeaveCriticalRegion();
      if ( !v56 )
        break;
      if ( v13 )
        v13[v45] = 0LL;
      v59 = *(_DWORD *)(v56 + 192);
      if ( v59 == 5 )
      {
        v60 = WdLogNewEntry5_WdAssertion(v58, v57);
        *(_QWORD *)(v60 + 24) = 1084LL;
        WdLogEvent5_WdAssertion(v60);
        v59 = *(_DWORD *)(v56 + 192);
      }
      if ( v59 == 6 )
      {
        v61 = WdLogNewEntry5_WdAssertion(v58, v57);
        *(_QWORD *)(v61 + 24) = 1085LL;
        WdLogEvent5_WdAssertion(v61);
      }
      v22 = 1;
      if ( v169 )
      {
        v103 = (_QWORD *)WdLogNewEntry5_WdError(v58, v57);
LABEL_153:
        v103[3] = v176;
LABEL_154:
        WdLogEvent5_WdError(v103);
        if ( v172 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v171);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v205);
        DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v185);
        if ( v174 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v174);
        if ( P != v178 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v179 = 0;
        goto LABEL_252;
      }
      v62 = *(_DWORD *)(v56 + 192);
      if ( v62 == 4 )
      {
        v103 = (_QWORD *)WdLogNewEntry5_WdError(v58, v57);
        v103[3] = v176;
        v103[4] = v184[v44];
        v103[5] = v44;
        goto LABEL_154;
      }
      if ( v62 == 3 )
      {
        v63 = v173;
        if ( v173 != 1 )
        {
          v103 = (_QWORD *)WdLogNewEntry5_WdError(v58, v57);
          v103[4] = v63;
          goto LABEL_153;
        }
      }
      DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)&v197, (struct DXGSYNCOBJECT *)v56);
      if ( v198 )
      {
        v66 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v65, v64);
        v66[3] = 275LL;
        v66[4] = 4LL;
        v66[5] = &v197;
        v66[6] = 0LL;
        v66[7] = 0LL;
        WdLogEvent5_WdCriticalError(v66);
      }
      v67 = v197;
      KeEnterCriticalRegion();
      if ( *(struct _KTHREAD **)(v67 + 16) == KeGetCurrentThread() )
      {
        v70 = *(_DWORD *)(v67 + 24);
        if ( v70 <= 0 )
        {
          v71 = WdLogNewEntry5_WdAssertion(v69, v68);
          *(_QWORD *)(v71 + 24) = 661LL;
          WdLogEvent5_WdAssertion(v71);
          v70 = *(_DWORD *)(v67 + 24);
        }
        v72 = v70 + 1;
      }
      else
      {
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v67, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v75 = *(_DWORD *)(v67 + 28);
            if ( v75 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q_EtwWriteTransfer(v73, &EventBlockThread, v74, v75);
          }
          _InterlockedIncrement64((volatile signed __int64 *)(v67 + 8));
          ExAcquirePushLockExclusiveEx(v67, 0LL);
        }
        if ( *(_QWORD *)(v67 + 16) )
        {
          v76 = WdLogNewEntry5_WdAssertion(v73, v68);
          *(_QWORD *)(v76 + 24) = 685LL;
          WdLogEvent5_WdAssertion(v76);
        }
        if ( *(_DWORD *)(v67 + 24) )
        {
          v77 = WdLogNewEntry5_WdAssertion(v73, v68);
          *(_QWORD *)(v77 + 24) = 686LL;
          WdLogEvent5_WdAssertion(v77);
        }
        *(_QWORD *)(v67 + 16) = KeGetCurrentThread();
        v72 = 1;
      }
      *(_DWORD *)(v67 + 24) = v72;
      v198 = 1;
      v78 = v182;
      v79 = *(struct ADAPTER_RENDER **)(*((_QWORD *)v182 + 2) + 16LL);
      v199 = 0LL;
      if ( (*(_DWORD *)(v56 + 196) & 4) != 0 )
      {
        LODWORD(v79) = DXGSYNCOBJECTCA::GetDxgAdapterSyncObject((DXGSYNCOBJECTCA *)v56, v79, &v199);
        if ( (int)v79 < 0 )
          goto LABEL_163;
        v78 = v182;
      }
      else
      {
        if ( v79 && *(struct ADAPTER_RENDER **)(v56 + 312) != v79 )
        {
          v104 = (_QWORD *)WdLogNewEntry5_WdError(v182, v68);
          v104[3] = v56;
          v104[4] = *(_QWORD *)(v56 + 312);
          v104[5] = v79;
          LODWORD(v79) = -1073741811;
          v104[6] = -1073741811LL;
          WdLogEvent5_WdError(v104);
LABEL_163:
          v105 = (_QWORD *)WdLogNewEntry5_WdError(v80, v68);
          v105[3] = v176;
          v105[4] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v182 + 2) + 16LL) + 16LL);
          v105[5] = (int)v79;
          WdLogEvent5_WdError(v105);
          DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)&v197, v106);
          if ( v172 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v171);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v205);
          DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v185);
          if ( v174 )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v174);
          if ( P != v178 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v179 = 0;
LABEL_171:
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v180);
          if ( v187 != v188 && v187 )
            ExFreePoolWithTag(v187, 0);
          return (unsigned int)v79;
        }
        v199 = (struct DXGADAPTERSYNCOBJECT *)(v56 + 296);
      }
      if ( !v170 )
      {
        v81 = *(struct ADAPTER_RENDER **)(*((_QWORD *)v78 + 2) + 16LL);
        v82 = (*(_DWORD *)(v56 + 196) & 4) != 0
            ? *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject((DXGSYNCOBJECTCA *)v56, v81) + 4)
            : *(_QWORD *)(v56 + 328);
        if ( (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)(*((_QWORD *)v81 + 77) + 8LL)
                                                                          + 848LL))(
               v82,
               v191) )
        {
          v83 = v182;
          v68 = *((_QWORD *)v182 + 2);
          if ( *(_BYTE *)(*(_QWORD *)(v68 + 16) + 888LL) )
          {
            if ( !*(_BYTE *)(*(_QWORD *)(v68 + 40) + 346LL) || (*((_DWORD *)v183 + 105) & 8) == 0 )
            {
              if ( (*(_BYTE *)(v56 + 196) & 1) == 0
                || !*(_BYTE *)(v68 + 1867)
                || (RedirectedFlipFenceValue = DXGSYNCOBJECT::GetRedirectedFlipFenceValue((DXGSYNCOBJECT *)v56, v68),
                    v191 > RedirectedFlipFenceValue) )
              {
                v107 = WdLogNewEntry5_WdError(v83, v68);
                *(_QWORD *)(v107 + 24) = v176;
                *(_QWORD *)(v107 + 32) = -1073741811LL;
                WdLogEvent5_WdError(v107);
                DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)&v197, v108);
                if ( v172 )
                  DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v171);
                COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v205);
                DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v185);
                if ( v174 )
                  DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v174);
                if ( P != v178 && P )
                  ExFreePoolWithTag(P, 0);
                P = 0LL;
                v179 = 0;
LABEL_183:
                DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v180);
                if ( v187 != v188 && v187 )
                {
                  ExFreePoolWithTag(v187, 0);
                  return 3221225485LL;
                }
                return 3221225485LL;
              }
            }
          }
        }
      }
      DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)&v197, v68);
LABEL_149:
      v102 = i;
      i[v45] = (struct DXGSYNCOBJECT *)v56;
      ++v44;
      ++v45;
      if ( v44 >= v173 )
      {
        v21 = v174;
        v10 = (unsigned __int64 *)Src;
        v192 = (const unsigned __int64 *)Src;
        LODWORD(v12) = v200;
        goto LABEL_213;
      }
      v46 = v176;
    }
    v85 = v184[v45];
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v47, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v88 = *((_DWORD *)v47 + 6);
        if ( v88 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v86, &EventBlockThread, v87, v88);
      }
      ExAcquirePushLockSharedEx(v47, 0LL);
    }
    v89 = (v85 >> 6) & 0xFFFFFF;
    v90 = v85 >> 30;
    v91 = v176;
    if ( (unsigned int)v89 < *((_DWORD *)v176 + 64) )
    {
      v92 = *((_QWORD *)v176 + 30);
      v93 = *(_DWORD *)(v92 + 16 * v89 + 8);
      if ( v90 == ((v93 >> 5) & 3) && (v93 & 0x2000) == 0 && (v93 & 0x1F) != 0 )
      {
        v94 = v93 & 0x1F;
        if ( (_BYTE)v94 == 11 )
        {
          v96 = *(_QWORD *)(v92 + 16LL * (unsigned int)v89);
          goto LABEL_141;
        }
        v95 = WdLogNewEntry5_WdError(v94, 2LL * (unsigned int)v89);
        *(_QWORD *)(v95 + 24) = 316LL;
        WdLogEvent5_WdError(v95);
      }
    }
    v96 = 0LL;
LABEL_141:
    ExReleasePushLockSharedEx(v47, 0LL);
    KeLeaveCriticalRegion();
    if ( !v96 )
    {
      v110 = (_QWORD *)WdLogNewEntry5_WdError(v98, v97);
      v110[3] = v91;
      v111 = v184[v44];
      v110[5] = v44;
      goto LABEL_201;
    }
    if ( v13 )
      v13[v45] = (struct DXGDEVICESYNCOBJECT *)v96;
    v169 = 1;
    if ( v22 )
    {
      v110 = (_QWORD *)WdLogNewEntry5_WdError(v98, v97);
      v110[3] = v91;
LABEL_202:
      WdLogEvent5_WdError(v110);
      if ( v172 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v171);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v205);
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v185);
      if ( v174 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v174);
      if ( P != v178 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v179 = 0;
LABEL_252:
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v180);
      if ( v187 != v188 && v187 )
        ExFreePoolWithTag(v187, 0);
      return 3221225485LL;
    }
    v99 = *(_QWORD *)(v96 + 16);
    v100 = v182;
    if ( v99 != *((_QWORD *)v182 + 2) )
    {
      v110 = (_QWORD *)WdLogNewEntry5_WdError(v99, v97);
      v110[3] = *((_QWORD *)v100 + 2);
      v111 = *(_QWORD *)(v96 + 16);
LABEL_201:
      v110[4] = v111;
      goto LABEL_202;
    }
    if ( (*(_DWORD *)(v96 + 72) & 0x20) != 0 )
    {
      v109 = WdLogNewEntry5_WdError(v99, v97);
      *(_QWORD *)(v109 + 24) = v184[v44];
      WdLogEvent5_WdError(v109);
      if ( v172 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v171);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v205);
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v185);
      if ( v174 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v174);
      if ( P != v178 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v179 = 0;
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v180);
      if ( v187 != v188 && v187 )
        ExFreePoolWithTag(v187, 0);
      return 3221225506LL;
    }
    v56 = *(_QWORD *)(v96 + 32);
    if ( (unsigned int)(*(_DWORD *)(v56 + 192) - 5) > 1 )
    {
      v101 = WdLogNewEntry5_WdAssertion(v99, v97);
      *(_QWORD *)(v101 + 24) = 1228LL;
      WdLogEvent5_WdAssertion(v101);
    }
    goto LABEL_149;
  }
  v102 = i;
LABEL_213:
  v112 = 0LL;
  v202 = 0LL;
  v113 = 0;
  v204 = 0;
  v114 = (unsigned int)(*((_DWORD *)*v102 + 48) - 5);
  if ( (unsigned int)v114 > 1 )
  {
    v117 = a10;
  }
  else
  {
    if ( a7 )
    {
      v115 = v173;
      if ( v173 <= 4 )
      {
        v112 = v203;
        v202 = v203;
      }
      else
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v12 < 8 )
        {
LABEL_222:
          if ( !v112 )
            goto LABEL_223;
          v116 = v113;
          if ( &v10[v116] < v10 || (unsigned __int64)&v10[v116] > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v112, v10, v116 * 8);
          v112 = v202;
          v10 = (unsigned __int64 *)v202;
          v192 = (const unsigned __int64 *)v202;
          Src = v202;
          v117 = a10;
          v102 = i;
          goto LABEL_258;
        }
        v112 = ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * (unsigned int)v12, 0x4B677844u);
        v202 = v112;
      }
      v113 = v115;
      v204 = v115;
      if ( !v112 )
      {
LABEL_223:
        v202 = 0LL;
        v204 = 0;
        if ( v172 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v171);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v205);
        DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v185);
        if ( v21 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v174);
        if ( P != v178 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v179 = 0;
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v180);
        if ( v187 != v188 && v187 )
          ExFreePoolWithTag(v187, 0);
        v187 = 0LL;
        v189 = 0;
        return 3221225495LL;
      }
      if ( (_DWORD)v12 )
      {
        memset(v112, 0, 8LL * (unsigned int)v12);
        v113 = v204;
        v112 = v202;
      }
      goto LABEL_222;
    }
    v117 = a10;
    if ( a10 )
    {
      v10 = &v191;
      v192 = &v191;
      Src = &v191;
    }
    else if ( !v10 )
    {
      v118 = WdLogNewEntry5_WdError(v114, v102);
      *(_QWORD *)(v118 + 24) = v176;
      WdLogEvent5_WdError(v118);
      if ( v202 != v203 && v202 )
        ExFreePoolWithTag(v202, 0);
      v202 = 0LL;
      v204 = 0;
      if ( v172 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v171);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v205);
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v185);
      if ( v21 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v174);
      if ( P != v178 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v179 = 0;
      goto LABEL_252;
    }
  }
  v115 = v173;
LABEL_258:
  if ( v170 )
  {
    LODWORD(v79) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendWaitForSyncObjectFromGpu(
                     (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v182 + 2) + 16LL) + 16LL)
                                                  + 4240LL),
                     v176,
                     v183,
                     v184,
                     v102,
                     v13,
                     v10,
                     v191,
                     v115,
                     0LL);
    if ( v202 != v203 && v202 )
      ExFreePoolWithTag(v202, 0);
    v202 = 0LL;
    v204 = 0;
    if ( v172 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v171);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v205);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v185);
    if ( v21 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v174);
    if ( P != v178 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v179 = 0;
    goto LABEL_171;
  }
  v119 = 0;
  if ( !v173 )
  {
LABEL_348:
    if ( v112 != v203 && v112 )
      ExFreePoolWithTag(v112, 0);
    v202 = 0LL;
    v204 = 0;
    if ( v172 )
    {
      v172 = 0;
      ExReleaseResourceLite(v171[65]);
      KeLeaveCriticalRegion();
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v205);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v185);
    if ( v21 && v175 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v21 + 136));
      KeLeaveCriticalRegion();
    }
    if ( P != v178 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v179 = 0;
    if ( v180 && !v181 )
      DXGCONTEXT::ReleaseReference(v180);
    if ( v187 != v188 && v187 )
      ExFreePoolWithTag(v187, 0);
    return 0LL;
  }
  v120 = v183;
  v196 = v183;
  v121 = (struct DXGSYNCOBJECT **)((char *)v102 - (char *)v10);
  for ( i = v121; ; v121 = i )
  {
    v122 = *(unsigned __int64 *)((char *)v10 + (_QWORD)v121);
    DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)&v194, (struct DXGSYNCOBJECT *)v122);
    if ( v195 )
    {
      v125 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v124, v123);
      v125[3] = 275LL;
      v125[4] = 4LL;
      v125[5] = &v194;
      v125[6] = 0LL;
      v125[7] = 0LL;
      WdLogEvent5_WdCriticalError(v125);
    }
    v126 = v194;
    KeEnterCriticalRegion();
    if ( *(struct _KTHREAD **)(v126 + 16) == KeGetCurrentThread() )
    {
      v129 = *(_DWORD *)(v126 + 24);
      if ( v129 <= 0 )
      {
        v130 = WdLogNewEntry5_WdAssertion(v128, v127);
        *(_QWORD *)(v130 + 24) = 661LL;
        WdLogEvent5_WdAssertion(v130);
        v129 = *(_DWORD *)(v126 + 24);
      }
      v131 = v129 + 1;
    }
    else
    {
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v126, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v135 = *(_DWORD *)(v126 + 28);
          if ( v135 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q_EtwWriteTransfer(v133, &EventBlockThread, v134, v135);
        }
        _InterlockedIncrement64((volatile signed __int64 *)(v126 + 8));
        ExAcquirePushLockExclusiveEx(v126, 0LL);
      }
      if ( *(_QWORD *)(v126 + 16) )
      {
        v136 = WdLogNewEntry5_WdAssertion(v133, v132);
        *(_QWORD *)(v136 + 24) = 685LL;
        WdLogEvent5_WdAssertion(v136);
      }
      if ( *(_DWORD *)(v126 + 24) )
      {
        v137 = WdLogNewEntry5_WdAssertion(v133, v132);
        *(_QWORD *)(v137 + 24) = 686LL;
        WdLogEvent5_WdAssertion(v137);
      }
      *(_QWORD *)(v126 + 16) = KeGetCurrentThread();
      v131 = 1;
    }
    *(_DWORD *)(v126 + 24) = v131;
    v195 = 1;
    v138 = *(_DWORD *)(v122 + 192);
    if ( (unsigned int)(v138 - 5) <= 1 )
    {
      v139 = *v10;
    }
    else
    {
      v139 = 0LL;
      if ( v138 == 3 )
        v139 = v191;
    }
    v140 = v182;
    v141 = (*(_DWORD *)(v122 + 196) & 4) != 0
         ? *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject(
                         (DXGSYNCOBJECTCA *)v122,
                         *(struct ADAPTER_RENDER **)(*((_QWORD *)v182 + 2) + 16LL))
           + 4)
         : *(_QWORD *)(v122 + 328);
    v193 = v141;
    if ( (*((_DWORD *)v120 + 105) & 0x10) != 0 )
      break;
    v157 = v183;
    v158 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v140 + 2) + 16LL)
                                                                                                + 616LL)
                                                                                    + 8LL)
                                                                        + 624LL))(
             *((_QWORD *)v183 + 34),
             v141,
             v139);
    v161 = v158;
    if ( v158 < 0 )
    {
      v166 = (_QWORD *)WdLogNewEntry5_WdError(v159, v144);
      v166[3] = v176;
      v166[4] = v184[v119];
      v166[5] = v119;
      v166[6] = v161;
      WdLogEvent5_WdError(v166);
      DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)&v194, v167);
      if ( v202 != v203 && v202 )
        ExFreePoolWithTag(v202, 0);
      v202 = 0LL;
      v204 = 0;
      if ( v172 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v171);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v205);
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v185);
      if ( v174 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v174);
      if ( P != v178 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v179 = 0;
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v180);
      if ( v187 != v188 && v187 )
        ExFreePoolWithTag(v187, 0);
      return (unsigned int)v161;
    }
    if ( v169 )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        LODWORD(Timeout) = 1;
        McTemplateK0pqPR1XR1_EtwWriteTransfer(
          (__int64)Src + 8 * v119,
          &EventWaitForSynchronizationObjectFromGpu,
          v160,
          v157,
          Timeout,
          &v193,
          (char *)Src + 8 * v119);
      }
    }
    else if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0pqPR1x_EtwWriteTransfer(v159, v144, v160, v157);
    }
LABEL_320:
    DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)&v194, v144);
    ++v119;
    v192 = ++v10;
    if ( v119 >= v173 )
    {
      v21 = v174;
      v112 = v202;
      goto LABEL_348;
    }
    v117 = a10;
  }
  if ( v117 )
  {
    v142 = *((_QWORD *)v183 + 38);
    v143 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v140 + 2) + 16LL)
                                                                                                 + 616LL)
                                                                                     + 8LL)
                                                                         + 632LL))(
             v142,
             v141,
             v139);
    v79 = (struct ADAPTER_RENDER *)v143;
    if ( v143 < 0 )
    {
      v162 = (_QWORD *)WdLogNewEntry5_WdError(v145, v144);
      v162[3] = v176;
      v162[4] = v184[v119];
      v162[5] = v119;
      v162[6] = v79;
      WdLogEvent5_WdError(v162);
      DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)&v194, v163);
      if ( v202 != v203 && v202 )
        ExFreePoolWithTag(v202, 0);
      v202 = 0LL;
      v204 = 0;
      if ( v172 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v171);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v205);
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v185);
      if ( v174 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v174);
      if ( P != v178 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v179 = 0;
      goto LABEL_171;
    }
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      LODWORD(Timeout) = 1;
      McTemplateK0pqPR1XR1_EtwWriteTransfer(
        (__int64)Src + 8 * v119,
        &EventWaitForSynchronizationObjectFromGpu,
        v146,
        v142,
        Timeout,
        &v193,
        (char *)Src + 8 * v119);
    }
    goto LABEL_320;
  }
  DXGNODELIST<DXGCONTEXT,DXGHWQUEUE>::GetHeadIterator((_QWORD *)v183 + 53, &v201);
  v149 = (_QWORD *)*((_QWORD *)&v201 + 1);
  v150 = (_QWORD *)v201;
  v151 = (char *)Src;
  while ( 1 )
  {
    if ( v149 == v150 || !v149 )
    {
      v201 = 0LL;
      v10 = (unsigned __int64 *)v192;
      v120 = v196;
      goto LABEL_320;
    }
    v152 = v149[5];
    v153 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v148 + 2) + 16LL)
                                                                                                 + 616LL)
                                                                                     + 8LL)
                                                                         + 632LL))(
             v152,
             v147,
             v139);
    v156 = v153;
    if ( v153 < 0 )
      break;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      LODWORD(Timeout) = 1;
      McTemplateK0pqPR1XR1_EtwWriteTransfer(
        (__int64)&v151[8 * v119],
        &EventWaitForSynchronizationObjectFromGpu,
        v155,
        v152,
        Timeout,
        &v193,
        &v151[8 * v119]);
    }
    v149 = (_QWORD *)*v149;
    v147 = v193;
    v148 = v182;
  }
  v164 = (_QWORD *)WdLogNewEntry5_WdError(v154, v144);
  v164[3] = v176;
  v164[4] = v184[v119];
  v164[5] = v119;
  v164[6] = v156;
  WdLogEvent5_WdError(v164);
  DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)&v194, v165);
  if ( v202 != v203 && v202 )
    ExFreePoolWithTag(v202, 0);
  v202 = 0LL;
  v204 = 0;
  if ( v172 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v171);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v205);
  DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v185);
  if ( v174 )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v174);
  if ( P != v178 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v179 = 0;
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v180);
  if ( v187 != v188 && v187 )
    ExFreePoolWithTag(v187, 0);
  return (unsigned int)v156;
}
