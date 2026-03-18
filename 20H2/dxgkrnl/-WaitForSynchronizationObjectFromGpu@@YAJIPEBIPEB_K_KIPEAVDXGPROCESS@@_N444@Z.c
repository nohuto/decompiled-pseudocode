/*
 * XREFs of ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z @ 0x1C00EAB10
 * Callers:
 *     ?DxgkWaitForSynchronizationObjectInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@H@Z @ 0x1C00E7650 (-DxgkWaitForSynchronizationObjectInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@H@Z.c)
 *     ?DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU@@_N1PEB_K1@Z @ 0x1C00EA670 (-DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 *     ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x1C025426C (-IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z.c)
 *     ?InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z @ 0x1C02A9E28 (-InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z.c)
 * Callees:
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0001E14 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000217C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C00026B8 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002B94 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0003EE0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0003FB0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0004050 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x1C00040D0 (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0004150 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00041C0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C00056F8 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C001B164 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z @ 0x1C0024838 (--0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ @ 0x1C0024860 (-Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ.c)
 *     ?GetHeadIterator@?$DXGNODELIST@VDXGCONTEXT@@VDXGHWQUEUE@@@@QEAA?AVITERATOR@1@XZ @ 0x1C0025588 (-GetHeadIterator@-$DXGNODELIST@VDXGCONTEXT@@VDXGHWQUEUE@@@@QEAA-AVITERATOR@1@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@_N@Z @ 0x1C0026B64 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0027140 (memmove.c)
 *     memset @ 0x1C0027400 (memset.c)
 *     McTemplateK0pqPR1XR1_EtwWriteTransfer @ 0x1C004623C (McTemplateK0pqPR1XR1_EtwWriteTransfer.c)
 *     ?FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z @ 0x1C0048298 (-FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?GetRedirectedFlipFenceValue@DXGSYNCOBJECT@@QEBA_KXZ @ 0x1C00487D0 (-GetRedirectedFlipFenceValue@DXGSYNCOBJECT@@QEBA_KXZ.c)
 *     McTemplateK0pqPR1x_EtwWriteTransfer @ 0x1C0048818 (McTemplateK0pqPR1x_EtwWriteTransfer.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FBBA0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C020BD94 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_OBJECT@@I@Z @ 0x1C022B448 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_O.c)
 *     ?VmBusSendWaitForSyncObjectFromGpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEBIPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEB_K_KIPEAVDXGHWQUEUE@@@Z @ 0x1C024CF20 (-VmBusSendWaitForSyncObjectFromGpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTE.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C028F750 (-GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@.c)
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
  __int64 v80; // rdx
  __int64 v81; // rcx
  struct ADAPTER_RENDER *v82; // rdx
  __int64 v83; // rcx
  struct DXGCONTEXT *v84; // rcx
  __int64 v85; // rdx
  unsigned __int64 RedirectedFlipFenceValue; // rax
  unsigned int v87; // ebx
  __int64 v88; // rcx
  __int64 v89; // r8
  int v90; // r9d
  __int64 v91; // rax
  unsigned int v92; // ebx
  struct DXGPROCESS *v93; // rdi
  __int64 v94; // r8
  unsigned int v95; // ecx
  __int64 v96; // rcx
  __int64 v97; // rax
  __int64 v98; // rbx
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // rcx
  struct DXGCONTEXT *v102; // rdi
  __int64 v103; // rax
  struct DXGSYNCOBJECT **v104; // rdx
  _QWORD *v105; // rax
  _QWORD *v106; // rax
  _QWORD *v107; // rax
  __int64 v108; // rax
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
  __int64 v154; // rdx
  __int64 v155; // rcx
  __int64 v156; // r8
  __int64 v157; // rsi
  struct DXGCONTEXT *v158; // rbx
  int v159; // eax
  __int64 v160; // rdx
  __int64 v161; // rcx
  __int64 v162; // r8
  __int64 v163; // rdi
  _QWORD *v164; // rax
  _QWORD *v165; // rax
  _QWORD *v166; // rax
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-288h]
  char v168; // [rsp+50h] [rbp-258h]
  char v169; // [rsp+51h] [rbp-257h]
  PERESOURCE *v170; // [rsp+58h] [rbp-250h] BYREF
  char v171; // [rsp+60h] [rbp-248h]
  unsigned int v172; // [rsp+68h] [rbp-240h]
  __int64 v173; // [rsp+70h] [rbp-238h] BYREF
  int v174; // [rsp+78h] [rbp-230h]
  struct DXGPROCESS *v175; // [rsp+80h] [rbp-228h]
  PVOID P; // [rsp+88h] [rbp-220h] BYREF
  _BYTE v177[32]; // [rsp+90h] [rbp-218h] BYREF
  int v178; // [rsp+B0h] [rbp-1F8h]
  DXGCONTEXT *v179; // [rsp+B8h] [rbp-1F0h] BYREF
  char v180; // [rsp+C0h] [rbp-1E8h]
  struct DXGCONTEXT *v181; // [rsp+C8h] [rbp-1E0h]
  struct DXGCONTEXT *v182; // [rsp+D0h] [rbp-1D8h] BYREF
  unsigned int *v183; // [rsp+D8h] [rbp-1D0h]
  _BYTE v184[16]; // [rsp+E0h] [rbp-1C8h] BYREF
  struct DXGSYNCOBJECT **i; // [rsp+F0h] [rbp-1B8h]
  PVOID v186; // [rsp+F8h] [rbp-1B0h]
  _BYTE v187[32]; // [rsp+100h] [rbp-1A8h] BYREF
  unsigned int v188; // [rsp+120h] [rbp-188h]
  void *Src; // [rsp+128h] [rbp-180h]
  unsigned __int64 v190; // [rsp+130h] [rbp-178h] BYREF
  const unsigned __int64 *v191; // [rsp+138h] [rbp-170h]
  __int64 v192; // [rsp+140h] [rbp-168h] BYREF
  __int64 v193; // [rsp+148h] [rbp-160h] BYREF
  char v194; // [rsp+150h] [rbp-158h]
  struct DXGCONTEXT *v195; // [rsp+158h] [rbp-150h]
  __int64 v196; // [rsp+160h] [rbp-148h] BYREF
  char v197; // [rsp+168h] [rbp-140h]
  struct DXGADAPTERSYNCOBJECT *v198; // [rsp+170h] [rbp-138h] BYREF
  __int64 v199; // [rsp+178h] [rbp-130h]
  __int128 v200; // [rsp+180h] [rbp-128h] BYREF
  PVOID v201; // [rsp+190h] [rbp-118h]
  _BYTE v202[32]; // [rsp+198h] [rbp-110h] BYREF
  unsigned int v203; // [rsp+1B8h] [rbp-F0h]
  char v204[8]; // [rsp+1C0h] [rbp-E8h] BYREF
  _BYTE v205[16]; // [rsp+1C8h] [rbp-E0h] BYREF
  DXGADAPTER *v206; // [rsp+1D8h] [rbp-D0h]
  char v207; // [rsp+1E0h] [rbp-C8h]
  __int64 v208; // [rsp+1E8h] [rbp-C0h]
  _BYTE v209[16]; // [rsp+208h] [rbp-A0h] BYREF
  __int64 v210; // [rsp+218h] [rbp-90h]
  __int64 v211; // [rsp+248h] [rbp-60h]
  char v212; // [rsp+250h] [rbp-58h]

  v10 = a3;
  v191 = a3;
  v183 = a2;
  v172 = a1;
  v12 = a1;
  v199 = a1;
  Src = a3;
  v190 = a4;
  v175 = a6;
  v195 = a6;
  v13 = 0LL;
  v186 = 0LL;
  v188 = 0;
  if ( a1 <= 4 )
  {
    PoolWithTag = v187;
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
  v186 = PoolWithTag;
  i = (struct DXGSYNCOBJECT **)PoolWithTag;
  v188 = a1;
  if ( !PoolWithTag )
    return 3221225495LL;
  memset(PoolWithTag, 0, 8 * v12);
  v14 = (struct DXGSYNCOBJECT **)v186;
LABEL_8:
  i = v14;
  if ( !v14 )
    return 3221225495LL;
  v182 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v179, a5, a6, &v182, a8);
  if ( !v182 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16);
    v18[3] = a6;
    v18[4] = a5;
    v18[5] = -1073741811LL;
    WdLogEvent5_WdError(v18);
    goto LABEL_183;
  }
  v19 = v182;
  v181 = v182;
  v169 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v182 + 2) + 16LL) + 16LL) + 209LL);
  P = 0LL;
  v178 = 0;
  if ( v169 )
  {
    v13 = (struct DXGDEVICESYNCOBJECT **)PagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,4>::AllocateElements(&P, a1);
    if ( !v13 )
    {
      if ( P != v177 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v178 = 0;
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v179);
      if ( v186 != v187 && v186 )
        ExFreePoolWithTag(v186, 0);
      return 3221225495LL;
    }
  }
  v21 = *((_QWORD *)v19 + 2);
  v173 = v21;
  v22 = 0;
  v174 = 0;
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v184, (struct DXGDEVICE *)v21);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v204, *((_QWORD *)v19 + 2), 0, v23, a8);
  if ( a8 )
    goto LABEL_62;
  if ( !a9 )
  {
    if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(*((_QWORD *)v19 + 2) + 136LL)) )
      DXGDEVICEACCESSLOCKSHARED::Acquire((DXGDEVICEACCESSLOCKSHARED *)v184);
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
  v174 = 1;
LABEL_38:
  if ( v212 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v209, 0LL);
    v28 = *(unsigned int *)(v210 + 200);
    if ( (_DWORD)v28 != 1 )
      goto LABEL_51;
  }
  if ( v207 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v28, v24);
    v32[3] = 275LL;
    v32[4] = 4LL;
    v32[5] = v205;
    v32[6] = 0LL;
    v32[7] = 0LL;
    WdLogEvent5_WdCriticalError(v32);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v206 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v206 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v33, &EventBlockThread, v34, 72);
      KeWaitForSingleObject((char *)v206 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v206, 0LL);
  }
  v208 = 0LL;
  v207 = 1;
  v25 = *(unsigned int *)(v211 + 576);
  if ( (_DWORD)v25 != 1 )
  {
    COREACCESS::Release((COREACCESS *)v205);
    if ( !v212 )
    {
LABEL_52:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v204);
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v184);
      if ( v173 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v173);
      if ( P != v177 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v178 = 0;
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v179);
      if ( v186 != v187 && v186 )
        ExFreePoolWithTag(v186, 0);
      return 3221226166LL;
    }
LABEL_51:
    COREACCESS::Release((COREACCESS *)v209);
    goto LABEL_52;
  }
  v21 = v173;
  v10 = (unsigned __int64 *)Src;
  v191 = (const unsigned __int64 *)Src;
LABEL_62:
  Global = DXGGLOBAL::GetGlobal(v25, v24);
  v170 = (PERESOURCE *)Global;
  v171 = 0;
  if ( !Global )
  {
    v38 = WdLogNewEntry5_WdAssertion(v37, v36);
    *(_QWORD *)(v38 + 24) = 2423LL;
    WdLogEvent5_WdAssertion(v38);
    Global = (struct DXGGLOBAL *)v170;
  }
  if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 65)) )
  {
    v41 = WdLogNewEntry5_WdAssertion(v40, v39);
    *(_QWORD *)(v41 + 24) = 2428LL;
    WdLogEvent5_WdAssertion(v41);
  }
  if ( v171 )
  {
    v42 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v40, v39);
    v42[3] = 275LL;
    v42[4] = 4LL;
    v42[5] = &v170;
    v42[6] = 0LL;
    v42[7] = 0LL;
    WdLogEvent5_WdCriticalError(v42);
  }
  v43 = v170;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v43[65], 1u);
  v171 = 1;
  v168 = 0;
  v44 = 0;
  if ( v172 )
  {
    v45 = 0LL;
    v46 = v175;
    v47 = (char *)v175 + 208;
    while ( 1 )
    {
      v48 = v183[v45];
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
        *(_QWORD *)(v60 + 24) = 1075LL;
        WdLogEvent5_WdAssertion(v60);
        v59 = *(_DWORD *)(v56 + 192);
      }
      if ( v59 == 6 )
      {
        v61 = WdLogNewEntry5_WdAssertion(v58, v57);
        *(_QWORD *)(v61 + 24) = 1076LL;
        WdLogEvent5_WdAssertion(v61);
      }
      v22 = 1;
      if ( v168 )
      {
        v105 = (_QWORD *)WdLogNewEntry5_WdError(v58, v57);
LABEL_153:
        v105[3] = v175;
LABEL_154:
        WdLogEvent5_WdError(v105);
        if ( v171 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v170);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v204);
        DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v184);
        if ( v173 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v173);
        if ( P != v177 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v178 = 0;
        goto LABEL_252;
      }
      v62 = *(_DWORD *)(v56 + 192);
      if ( v62 == 4 )
      {
        v105 = (_QWORD *)WdLogNewEntry5_WdError(v58, v57);
        v105[3] = v175;
        v105[4] = v183[v44];
        v105[5] = v44;
        goto LABEL_154;
      }
      if ( v62 == 3 )
      {
        v63 = v172;
        if ( v172 != 1 )
        {
          v105 = (_QWORD *)WdLogNewEntry5_WdError(v58, v57);
          v105[4] = v63;
          goto LABEL_153;
        }
      }
      DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)&v196, (struct DXGSYNCOBJECT *)v56);
      if ( v197 )
      {
        v66 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v65, v64);
        v66[3] = 275LL;
        v66[4] = 4LL;
        v66[5] = &v196;
        v66[6] = 0LL;
        v66[7] = 0LL;
        WdLogEvent5_WdCriticalError(v66);
      }
      v67 = v196;
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
      v197 = 1;
      v78 = v181;
      v79 = *(struct ADAPTER_RENDER **)(*((_QWORD *)v181 + 2) + 16LL);
      v198 = 0LL;
      if ( (*(_DWORD *)(v56 + 196) & 4) != 0 )
      {
        LODWORD(v79) = DXGSYNCOBJECTCA::GetDxgAdapterSyncObject((DXGSYNCOBJECTCA *)v56, v79, &v198);
        if ( (int)v79 < 0 )
          goto LABEL_163;
        v78 = v181;
      }
      else
      {
        if ( v79 && *(struct ADAPTER_RENDER **)(v56 + 312) != v79 )
        {
          v106 = (_QWORD *)WdLogNewEntry5_WdError(v181, v68);
          v106[3] = v56;
          v106[4] = *(_QWORD *)(v56 + 312);
          v106[5] = v79;
          LODWORD(v79) = -1073741811;
          v106[6] = -1073741811LL;
          WdLogEvent5_WdError(v106);
LABEL_163:
          v107 = (_QWORD *)WdLogNewEntry5_WdError(v81, v80);
          v107[3] = v175;
          v107[4] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v181 + 2) + 16LL) + 16LL);
          v107[5] = (int)v79;
          WdLogEvent5_WdError(v107);
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v196);
          if ( v171 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v170);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v204);
          DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v184);
          if ( v173 )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v173);
          if ( P != v177 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v178 = 0;
LABEL_171:
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v179);
          if ( v186 != v187 && v186 )
            ExFreePoolWithTag(v186, 0);
          return (unsigned int)v79;
        }
        v198 = (struct DXGADAPTERSYNCOBJECT *)(v56 + 296);
      }
      if ( !v169 )
      {
        v82 = *(struct ADAPTER_RENDER **)(*((_QWORD *)v78 + 2) + 16LL);
        v83 = (*(_DWORD *)(v56 + 196) & 4) != 0
            ? *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject((DXGSYNCOBJECTCA *)v56, v82) + 4)
            : *(_QWORD *)(v56 + 328);
        if ( (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)(*((_QWORD *)v82 + 77) + 8LL)
                                                                          + 848LL))(
               v83,
               v190) )
        {
          v84 = v181;
          v85 = *((_QWORD *)v181 + 2);
          if ( *(_BYTE *)(*(_QWORD *)(v85 + 16) + 888LL) )
          {
            if ( !*(_BYTE *)(*(_QWORD *)(v85 + 40) + 346LL) || (*((_DWORD *)v182 + 105) & 8) == 0 )
            {
              if ( (*(_BYTE *)(v56 + 196) & 1) == 0
                || !*(_BYTE *)(v85 + 1867)
                || (RedirectedFlipFenceValue = DXGSYNCOBJECT::GetRedirectedFlipFenceValue((DXGSYNCOBJECT *)v56, v85),
                    v190 > RedirectedFlipFenceValue) )
              {
                v108 = WdLogNewEntry5_WdError(v84, v85);
                *(_QWORD *)(v108 + 24) = v175;
                *(_QWORD *)(v108 + 32) = -1073741811LL;
                WdLogEvent5_WdError(v108);
                DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v196);
                if ( v171 )
                  DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v170);
                COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v204);
                DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v184);
                if ( v173 )
                  DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v173);
                if ( P != v177 && P )
                  ExFreePoolWithTag(P, 0);
                P = 0LL;
                v178 = 0;
LABEL_183:
                DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v179);
                if ( v186 != v187 && v186 )
                {
                  ExFreePoolWithTag(v186, 0);
                  return 3221225485LL;
                }
                return 3221225485LL;
              }
            }
          }
        }
      }
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v196);
LABEL_149:
      v104 = i;
      i[v45] = (struct DXGSYNCOBJECT *)v56;
      ++v44;
      ++v45;
      if ( v44 >= v172 )
      {
        v21 = v173;
        v10 = (unsigned __int64 *)Src;
        v191 = (const unsigned __int64 *)Src;
        LODWORD(v12) = v199;
        goto LABEL_213;
      }
      v46 = v175;
    }
    v87 = v183[v45];
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v47, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v90 = *((_DWORD *)v47 + 6);
        if ( v90 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v88, &EventBlockThread, v89, v90);
      }
      ExAcquirePushLockSharedEx(v47, 0LL);
    }
    v91 = (v87 >> 6) & 0xFFFFFF;
    v92 = v87 >> 30;
    v93 = v175;
    if ( (unsigned int)v91 < *((_DWORD *)v175 + 64) )
    {
      v94 = *((_QWORD *)v175 + 30);
      v95 = *(_DWORD *)(v94 + 16 * v91 + 8);
      if ( v92 == ((v95 >> 5) & 3) && (v95 & 0x2000) == 0 && (v95 & 0x1F) != 0 )
      {
        v96 = v95 & 0x1F;
        if ( (_BYTE)v96 == 11 )
        {
          v98 = *(_QWORD *)(v94 + 16LL * (unsigned int)v91);
          goto LABEL_141;
        }
        v97 = WdLogNewEntry5_WdError(v96, 2LL * (unsigned int)v91);
        *(_QWORD *)(v97 + 24) = 267LL;
        WdLogEvent5_WdError(v97);
      }
    }
    v98 = 0LL;
LABEL_141:
    ExReleasePushLockSharedEx(v47, 0LL);
    KeLeaveCriticalRegion();
    if ( !v98 )
    {
      v110 = (_QWORD *)WdLogNewEntry5_WdError(v100, v99);
      v110[3] = v93;
      v111 = v183[v44];
      v110[5] = v44;
      goto LABEL_201;
    }
    if ( v13 )
      v13[v45] = (struct DXGDEVICESYNCOBJECT *)v98;
    v168 = 1;
    if ( v22 )
    {
      v110 = (_QWORD *)WdLogNewEntry5_WdError(v100, v99);
      v110[3] = v93;
LABEL_202:
      WdLogEvent5_WdError(v110);
      if ( v171 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v170);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v204);
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v184);
      if ( v173 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v173);
      if ( P != v177 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v178 = 0;
LABEL_252:
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v179);
      if ( v186 != v187 && v186 )
        ExFreePoolWithTag(v186, 0);
      return 3221225485LL;
    }
    v101 = *(_QWORD *)(v98 + 16);
    v102 = v181;
    if ( v101 != *((_QWORD *)v181 + 2) )
    {
      v110 = (_QWORD *)WdLogNewEntry5_WdError(v101, v99);
      v110[3] = *((_QWORD *)v102 + 2);
      v111 = *(_QWORD *)(v98 + 16);
LABEL_201:
      v110[4] = v111;
      goto LABEL_202;
    }
    if ( (*(_DWORD *)(v98 + 72) & 0x20) != 0 )
    {
      v109 = WdLogNewEntry5_WdError(v101, v99);
      *(_QWORD *)(v109 + 24) = v183[v44];
      WdLogEvent5_WdError(v109);
      if ( v171 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v170);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v204);
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v184);
      if ( v173 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v173);
      if ( P != v177 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v178 = 0;
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v179);
      if ( v186 != v187 && v186 )
        ExFreePoolWithTag(v186, 0);
      return 3221225506LL;
    }
    v56 = *(_QWORD *)(v98 + 32);
    if ( (unsigned int)(*(_DWORD *)(v56 + 192) - 5) > 1 )
    {
      v103 = WdLogNewEntry5_WdAssertion(v101, v99);
      *(_QWORD *)(v103 + 24) = 1219LL;
      WdLogEvent5_WdAssertion(v103);
    }
    goto LABEL_149;
  }
  v104 = i;
LABEL_213:
  v112 = 0LL;
  v201 = 0LL;
  v113 = 0;
  v203 = 0;
  v114 = (unsigned int)(*((_DWORD *)*v104 + 48) - 5);
  if ( (unsigned int)v114 > 1 )
  {
    v117 = a10;
  }
  else
  {
    if ( a7 )
    {
      v115 = v172;
      if ( v172 <= 4 )
      {
        v112 = v202;
        v201 = v202;
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
          v112 = v201;
          v10 = (unsigned __int64 *)v201;
          v191 = (const unsigned __int64 *)v201;
          Src = v201;
          v117 = a10;
          v104 = i;
          goto LABEL_258;
        }
        v112 = ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * (unsigned int)v12, 0x4B677844u);
        v201 = v112;
      }
      v113 = v115;
      v203 = v115;
      if ( !v112 )
      {
LABEL_223:
        v201 = 0LL;
        v203 = 0;
        if ( v171 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v170);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v204);
        DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v184);
        if ( v21 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v173);
        if ( P != v177 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v178 = 0;
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v179);
        if ( v186 != v187 && v186 )
          ExFreePoolWithTag(v186, 0);
        v186 = 0LL;
        v188 = 0;
        return 3221225495LL;
      }
      if ( (_DWORD)v12 )
      {
        memset(v112, 0, 8LL * (unsigned int)v12);
        v113 = v203;
        v112 = v201;
      }
      goto LABEL_222;
    }
    v117 = a10;
    if ( a10 )
    {
      v10 = &v190;
      v191 = &v190;
      Src = &v190;
    }
    else if ( !v10 )
    {
      v118 = WdLogNewEntry5_WdError(v114, v104);
      *(_QWORD *)(v118 + 24) = v175;
      WdLogEvent5_WdError(v118);
      if ( v201 != v202 && v201 )
        ExFreePoolWithTag(v201, 0);
      v201 = 0LL;
      v203 = 0;
      if ( v171 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v170);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v204);
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v184);
      if ( v21 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v173);
      if ( P != v177 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v178 = 0;
      goto LABEL_252;
    }
  }
  v115 = v172;
LABEL_258:
  if ( v169 )
  {
    LODWORD(v79) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendWaitForSyncObjectFromGpu(
                     (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v181 + 2) + 16LL) + 16LL)
                                                  + 4240LL),
                     v175,
                     v182,
                     v183,
                     v104,
                     v13,
                     v10,
                     v190,
                     v115,
                     0LL);
    if ( v201 != v202 && v201 )
      ExFreePoolWithTag(v201, 0);
    v201 = 0LL;
    v203 = 0;
    if ( v171 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v170);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v204);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v184);
    if ( v21 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v173);
    if ( P != v177 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v178 = 0;
    goto LABEL_171;
  }
  v119 = 0;
  if ( !v172 )
  {
LABEL_348:
    if ( v112 != v202 && v112 )
      ExFreePoolWithTag(v112, 0);
    v201 = 0LL;
    v203 = 0;
    if ( v171 )
    {
      v171 = 0;
      ExReleaseResourceLite(v170[65]);
      KeLeaveCriticalRegion();
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v204);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v184);
    if ( v21 && v174 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v21 + 136));
      KeLeaveCriticalRegion();
    }
    if ( P != v177 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v178 = 0;
    if ( v179 && !v180 )
      DXGCONTEXT::ReleaseReference(v179);
    if ( v186 != v187 && v186 )
      ExFreePoolWithTag(v186, 0);
    return 0LL;
  }
  v120 = v182;
  v195 = v182;
  v121 = (struct DXGSYNCOBJECT **)((char *)v104 - (char *)v10);
  for ( i = v121; ; v121 = i )
  {
    v122 = *(unsigned __int64 *)((char *)v10 + (_QWORD)v121);
    DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)&v193, (struct DXGSYNCOBJECT *)v122);
    if ( v194 )
    {
      v125 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v124, v123);
      v125[3] = 275LL;
      v125[4] = 4LL;
      v125[5] = &v193;
      v125[6] = 0LL;
      v125[7] = 0LL;
      WdLogEvent5_WdCriticalError(v125);
    }
    v126 = v193;
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
    v194 = 1;
    v138 = *(_DWORD *)(v122 + 192);
    if ( (unsigned int)(v138 - 5) <= 1 )
    {
      v139 = *v10;
    }
    else
    {
      v139 = 0LL;
      if ( v138 == 3 )
        v139 = v190;
    }
    v140 = v181;
    v141 = (*(_DWORD *)(v122 + 196) & 4) != 0
         ? *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject(
                         (DXGSYNCOBJECTCA *)v122,
                         *(struct ADAPTER_RENDER **)(*((_QWORD *)v181 + 2) + 16LL))
           + 4)
         : *(_QWORD *)(v122 + 328);
    v192 = v141;
    if ( (*((_DWORD *)v120 + 105) & 0x10) != 0 )
      break;
    v158 = v182;
    v159 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v140 + 2) + 16LL)
                                                                                                + 616LL)
                                                                                    + 8LL)
                                                                        + 624LL))(
             *((_QWORD *)v182 + 34),
             v141,
             v139);
    v163 = v159;
    if ( v159 < 0 )
    {
      v166 = (_QWORD *)WdLogNewEntry5_WdError(v161, v160);
      v166[3] = v175;
      v166[4] = v183[v119];
      v166[5] = v119;
      v166[6] = v163;
      WdLogEvent5_WdError(v166);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v193);
      if ( v201 != v202 && v201 )
        ExFreePoolWithTag(v201, 0);
      v201 = 0LL;
      v203 = 0;
      if ( v171 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v170);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v204);
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v184);
      if ( v173 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v173);
      if ( P != v177 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v178 = 0;
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v179);
      if ( v186 != v187 && v186 )
        ExFreePoolWithTag(v186, 0);
      return (unsigned int)v163;
    }
    if ( v168 )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        LODWORD(Timeout) = 1;
        McTemplateK0pqPR1XR1_EtwWriteTransfer(
          (__int64)Src + 8 * v119,
          &EventWaitForSynchronizationObjectFromGpu,
          v162,
          v158,
          Timeout,
          &v192,
          (char *)Src + 8 * v119);
      }
    }
    else if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0pqPR1x_EtwWriteTransfer(v161, v160, v162, v158);
    }
LABEL_320:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v193);
    ++v119;
    v191 = ++v10;
    if ( v119 >= v172 )
    {
      v21 = v173;
      v112 = v201;
      goto LABEL_348;
    }
    v117 = a10;
  }
  if ( v117 )
  {
    v142 = *((_QWORD *)v182 + 38);
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
      v164 = (_QWORD *)WdLogNewEntry5_WdError(v145, v144);
      v164[3] = v175;
      v164[4] = v183[v119];
      v164[5] = v119;
      v164[6] = v79;
      WdLogEvent5_WdError(v164);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v193);
      if ( v201 != v202 && v201 )
        ExFreePoolWithTag(v201, 0);
      v201 = 0LL;
      v203 = 0;
      if ( v171 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v170);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v204);
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v184);
      if ( v173 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v173);
      if ( P != v177 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v178 = 0;
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
        &v192,
        (char *)Src + 8 * v119);
    }
    goto LABEL_320;
  }
  DXGNODELIST<DXGCONTEXT,DXGHWQUEUE>::GetHeadIterator((_QWORD *)v182 + 53, &v200);
  v149 = (_QWORD *)*((_QWORD *)&v200 + 1);
  v150 = (_QWORD *)v200;
  v151 = (char *)Src;
  while ( 1 )
  {
    if ( v149 == v150 || !v149 )
    {
      v200 = 0LL;
      v10 = (unsigned __int64 *)v191;
      v120 = v195;
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
    v157 = v153;
    if ( v153 < 0 )
      break;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      LODWORD(Timeout) = 1;
      McTemplateK0pqPR1XR1_EtwWriteTransfer(
        (__int64)&v151[8 * v119],
        &EventWaitForSynchronizationObjectFromGpu,
        v156,
        v152,
        Timeout,
        &v192,
        &v151[8 * v119]);
    }
    v149 = (_QWORD *)*v149;
    v147 = v192;
    v148 = v181;
  }
  v165 = (_QWORD *)WdLogNewEntry5_WdError(v155, v154);
  v165[3] = v175;
  v165[4] = v183[v119];
  v165[5] = v119;
  v165[6] = v157;
  WdLogEvent5_WdError(v165);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v193);
  if ( v201 != v202 && v201 )
    ExFreePoolWithTag(v201, 0);
  v201 = 0LL;
  v203 = 0;
  if ( v171 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v170);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v204);
  DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v184);
  if ( v173 )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v173);
  if ( P != v177 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v178 = 0;
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v179);
  if ( v186 != v187 && v186 )
    ExFreePoolWithTag(v186, 0);
  return (unsigned int)v157;
}
