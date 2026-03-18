/*
 * XREFs of ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z @ 0x1C00F6940
 * Callers:
 *     ?DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU@@_N1PEB_K1@Z @ 0x1C00F8A50 (-DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 *     ?DxgkWaitForSynchronizationObjectInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@H@Z @ 0x1C014CA70 (-DxgkWaitForSynchronizationObjectInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@H@Z.c)
 *     ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x1C0250F4C (-IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z.c)
 *     ?InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z @ 0x1C02A691C (-InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z.c)
 * Callees:
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0007F18 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0008020 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0008348 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C000A358 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000AA48 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000B19C (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000B200 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C000D034 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000EB44 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EB8C (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C001AF14 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0024550 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x1C00245CC (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z @ 0x1C00248B4 (--0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ @ 0x1C00248DC (-Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ.c)
 *     ?GetHeadIterator@?$DXGNODELIST@VDXGCONTEXT@@VDXGHWQUEUE@@@@QEAA?AVITERATOR@1@XZ @ 0x1C0024DEC (-GetHeadIterator@-$DXGNODELIST@VDXGCONTEXT@@VDXGHWQUEUE@@@@QEAA-AVITERATOR@1@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@_N@Z @ 0x1C0025E70 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     McTemplateK0pqPR1XR1_EtwWriteTransfer @ 0x1C00452DC (McTemplateK0pqPR1XR1_EtwWriteTransfer.c)
 *     ?FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z @ 0x1C0047388 (-FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?GetRedirectedFlipFenceValue@DXGSYNCOBJECT@@QEBA_KXZ @ 0x1C0047880 (-GetRedirectedFlipFenceValue@DXGSYNCOBJECT@@QEBA_KXZ.c)
 *     McTemplateK0pqPR1x_EtwWriteTransfer @ 0x1C00478C8 (McTemplateK0pqPR1x_EtwWriteTransfer.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FD2B0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0208CF4 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_OBJECT@@I@Z @ 0x1C02283B8 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_O.c)
 *     ?VmBusSendWaitForSyncObjectFromGpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEBIPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEB_K_KIPEAVDXGHWQUEUE@@@Z @ 0x1C0249CDC (-VmBusSendWaitForSyncObjectFromGpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTE.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C028C290 (-GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@.c)
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
  __int64 v102; // rdx
  _QWORD *v103; // rax
  __int64 v104; // rdx
  _QWORD *v105; // rax
  _QWORD *v106; // rax
  __int64 v107; // rdx
  __int64 v108; // rdx
  __int64 v109; // rax
  __int64 v110; // rdx
  __int64 v111; // rdx
  __int64 v112; // rax
  __int64 v113; // rdx
  _QWORD *v114; // rax
  __int64 v115; // rcx
  __int64 v116; // rdx
  _BYTE *v117; // r9
  unsigned int v118; // r10d
  __int64 v119; // rcx
  unsigned int v120; // r15d
  size_t v121; // r8
  bool v122; // r12
  __int64 v123; // rax
  __int64 v124; // rdx
  __int64 v125; // rdx
  unsigned int v126; // r15d
  struct DXGCONTEXT *v127; // r13
  struct DXGSYNCOBJECT **v128; // rdx
  __int64 v129; // rdi
  __int64 v130; // rdx
  __int64 v131; // rcx
  _QWORD *v132; // rax
  __int64 v133; // rbx
  __int64 v134; // rdx
  __int64 v135; // rcx
  int v136; // eax
  __int64 v137; // rax
  int v138; // eax
  __int64 v139; // rdx
  __int64 v140; // rcx
  __int64 v141; // r8
  int v142; // r9d
  __int64 v143; // rax
  __int64 v144; // rax
  int v145; // ecx
  unsigned __int64 v146; // r14
  struct DXGCONTEXT *v147; // r10
  __int64 v148; // r9
  __int64 v149; // rdi
  int v150; // eax
  __int64 v151; // rdx
  __int64 v152; // rcx
  __int64 v153; // r8
  __int64 v154; // r9
  struct DXGCONTEXT *v155; // r10
  _QWORD *v156; // rbx
  _QWORD *v157; // r12
  char *v158; // r13
  __int64 v159; // rdi
  int v160; // eax
  __int64 v161; // rcx
  __int64 v162; // r8
  __int64 v163; // rsi
  struct DXGCONTEXT *v164; // rbx
  int v165; // eax
  __int64 v166; // rcx
  __int64 v167; // r8
  __int64 v168; // rdi
  _QWORD *v169; // rax
  __int64 v170; // rdx
  __int64 v171; // rdx
  _QWORD *v172; // rax
  __int64 v173; // rdx
  __int64 v174; // rdx
  _QWORD *v175; // rax
  __int64 v176; // rdx
  __int64 v177; // rdx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-288h]
  char v179; // [rsp+50h] [rbp-258h]
  char v180; // [rsp+51h] [rbp-257h]
  PERESOURCE *v181; // [rsp+58h] [rbp-250h] BYREF
  char v182; // [rsp+60h] [rbp-248h]
  unsigned int v183; // [rsp+68h] [rbp-240h]
  __int64 v184; // [rsp+70h] [rbp-238h] BYREF
  int v185; // [rsp+78h] [rbp-230h]
  struct DXGPROCESS *v186; // [rsp+80h] [rbp-228h]
  PVOID P; // [rsp+88h] [rbp-220h] BYREF
  _BYTE v188[32]; // [rsp+90h] [rbp-218h] BYREF
  int v189; // [rsp+B0h] [rbp-1F8h]
  DXGCONTEXT *v190; // [rsp+B8h] [rbp-1F0h] BYREF
  char v191; // [rsp+C0h] [rbp-1E8h]
  struct DXGCONTEXT *v192; // [rsp+C8h] [rbp-1E0h]
  struct DXGCONTEXT *v193; // [rsp+D0h] [rbp-1D8h] BYREF
  unsigned int *v194; // [rsp+D8h] [rbp-1D0h]
  _BYTE v195[16]; // [rsp+E0h] [rbp-1C8h] BYREF
  struct DXGSYNCOBJECT **i; // [rsp+F0h] [rbp-1B8h]
  PVOID v197; // [rsp+F8h] [rbp-1B0h]
  _BYTE v198[32]; // [rsp+100h] [rbp-1A8h] BYREF
  unsigned int v199; // [rsp+120h] [rbp-188h]
  void *Src; // [rsp+128h] [rbp-180h]
  unsigned __int64 v201; // [rsp+130h] [rbp-178h] BYREF
  const unsigned __int64 *v202; // [rsp+138h] [rbp-170h]
  __int64 v203; // [rsp+140h] [rbp-168h] BYREF
  __int64 v204; // [rsp+148h] [rbp-160h] BYREF
  char v205; // [rsp+150h] [rbp-158h]
  struct DXGCONTEXT *v206; // [rsp+158h] [rbp-150h]
  __int64 v207; // [rsp+160h] [rbp-148h] BYREF
  char v208; // [rsp+168h] [rbp-140h]
  struct DXGADAPTERSYNCOBJECT *v209; // [rsp+170h] [rbp-138h] BYREF
  __int64 v210; // [rsp+178h] [rbp-130h]
  __int128 v211; // [rsp+180h] [rbp-128h] BYREF
  PVOID v212; // [rsp+190h] [rbp-118h]
  _BYTE v213[32]; // [rsp+198h] [rbp-110h] BYREF
  unsigned int v214; // [rsp+1B8h] [rbp-F0h]
  char v215[8]; // [rsp+1C0h] [rbp-E8h] BYREF
  _BYTE v216[16]; // [rsp+1C8h] [rbp-E0h] BYREF
  DXGADAPTER *v217; // [rsp+1D8h] [rbp-D0h]
  char v218; // [rsp+1E0h] [rbp-C8h]
  __int64 v219; // [rsp+1E8h] [rbp-C0h]
  _BYTE v220[16]; // [rsp+208h] [rbp-A0h] BYREF
  __int64 v221; // [rsp+218h] [rbp-90h]
  __int64 v222; // [rsp+248h] [rbp-60h]
  char v223; // [rsp+250h] [rbp-58h]

  v10 = a3;
  v202 = a3;
  v194 = a2;
  v183 = a1;
  v12 = a1;
  v210 = a1;
  Src = a3;
  v201 = a4;
  v186 = a6;
  v206 = a6;
  v13 = 0LL;
  v197 = 0LL;
  v199 = 0;
  if ( a1 <= 4 )
  {
    PoolWithTag = v198;
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
  v197 = PoolWithTag;
  i = (struct DXGSYNCOBJECT **)PoolWithTag;
  v199 = a1;
  if ( !PoolWithTag )
    return 3221225495LL;
  memset(PoolWithTag, 0, 8 * v12);
  v14 = (struct DXGSYNCOBJECT **)v197;
LABEL_8:
  i = v14;
  if ( !v14 )
    return 3221225495LL;
  v193 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v190, a5, a6, &v193, a8);
  if ( !v193 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16);
    v18[3] = a6;
    v18[4] = a5;
    v18[5] = -1073741811LL;
    WdLogEvent5_WdError(v18);
    goto LABEL_183;
  }
  v19 = v193;
  v192 = v193;
  v180 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v193 + 2) + 16LL) + 16LL) + 209LL);
  P = 0LL;
  v189 = 0;
  if ( v180 )
  {
    v13 = (struct DXGDEVICESYNCOBJECT **)PagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,4>::AllocateElements(&P, a1);
    if ( !v13 )
    {
      if ( P != v188 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v189 = 0;
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v190);
      if ( v197 != v198 && v197 )
        ExFreePoolWithTag(v197, 0);
      return 3221225495LL;
    }
  }
  v21 = *((_QWORD *)v19 + 2);
  v184 = v21;
  v22 = 0;
  v185 = 0;
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v195, (struct DXGDEVICE *)v21);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v215, *((_QWORD *)v19 + 2), 0, v23, a8);
  if ( a8 )
    goto LABEL_62;
  if ( !a9 )
  {
    if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(*((_QWORD *)v19 + 2) + 136LL)) )
      DXGDEVICEACCESSLOCKSHARED::Acquire((DXGDEVICEACCESSLOCKSHARED *)v195);
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
  v185 = 1;
LABEL_38:
  if ( v223 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v220, 0LL);
    v28 = *(unsigned int *)(v221 + 200);
    if ( (_DWORD)v28 != 1 )
      goto LABEL_51;
  }
  if ( v218 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v28, v24);
    v32[3] = 275LL;
    v32[4] = 4LL;
    v32[5] = v216;
    v32[6] = 0LL;
    v32[7] = 0LL;
    WdLogEvent5_WdCriticalError(v32);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v217 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v217 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v33, &EventBlockThread, v34, 72);
      KeWaitForSingleObject((char *)v217 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v217, 0LL);
  }
  v219 = 0LL;
  v218 = 1;
  v25 = *(unsigned int *)(v222 + 576);
  if ( (_DWORD)v25 != 1 )
  {
    COREACCESS::Release((COREACCESS *)v216);
    if ( !v223 )
    {
LABEL_52:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v215);
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v195);
      if ( v184 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v184);
      if ( P != v188 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v189 = 0;
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v190);
      if ( v197 != v198 && v197 )
        ExFreePoolWithTag(v197, 0);
      return 3221226166LL;
    }
LABEL_51:
    COREACCESS::Release((COREACCESS *)v220);
    goto LABEL_52;
  }
  v21 = v184;
  v10 = (unsigned __int64 *)Src;
  v202 = (const unsigned __int64 *)Src;
LABEL_62:
  Global = DXGGLOBAL::GetGlobal(v25, v24);
  v181 = (PERESOURCE *)Global;
  v182 = 0;
  if ( !Global )
  {
    v38 = WdLogNewEntry5_WdAssertion(v37, v36);
    *(_QWORD *)(v38 + 24) = 2405LL;
    WdLogEvent5_WdAssertion(v38);
    Global = (struct DXGGLOBAL *)v181;
  }
  if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 51)) )
  {
    v41 = WdLogNewEntry5_WdAssertion(v40, v39);
    *(_QWORD *)(v41 + 24) = 2410LL;
    WdLogEvent5_WdAssertion(v41);
  }
  if ( v182 )
  {
    v42 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v40, v39);
    v42[3] = 275LL;
    v42[4] = 4LL;
    v42[5] = &v181;
    v42[6] = 0LL;
    v42[7] = 0LL;
    WdLogEvent5_WdCriticalError(v42);
  }
  v43 = v181;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v43[51], 1u);
  v182 = 1;
  v179 = 0;
  v44 = 0;
  if ( v183 )
  {
    v45 = 0LL;
    v46 = v186;
    v47 = (char *)v186 + 208;
    while ( 1 )
    {
      v48 = v194[v45];
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
        *(_QWORD *)(v60 + 24) = 1061LL;
        WdLogEvent5_WdAssertion(v60);
        v59 = *(_DWORD *)(v56 + 192);
      }
      if ( v59 == 6 )
      {
        v61 = WdLogNewEntry5_WdAssertion(v58, v57);
        *(_QWORD *)(v61 + 24) = 1062LL;
        WdLogEvent5_WdAssertion(v61);
      }
      v22 = 1;
      if ( v179 )
      {
        v103 = (_QWORD *)WdLogNewEntry5_WdError(v58, v57);
LABEL_153:
        v103[3] = v186;
LABEL_154:
        WdLogEvent5_WdError(v103);
        if ( v182 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v181, v104);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v215);
        DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v195);
        if ( v184 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v184);
        if ( P != v188 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v189 = 0;
        goto LABEL_252;
      }
      v62 = *(_DWORD *)(v56 + 192);
      if ( v62 == 4 )
      {
        v103 = (_QWORD *)WdLogNewEntry5_WdError(v58, v57);
        v103[3] = v186;
        v103[4] = v194[v44];
        v103[5] = v44;
        goto LABEL_154;
      }
      if ( v62 == 3 )
      {
        v63 = v183;
        if ( v183 != 1 )
        {
          v103 = (_QWORD *)WdLogNewEntry5_WdError(v58, v57);
          v103[4] = v63;
          goto LABEL_153;
        }
      }
      DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)&v207, (struct DXGSYNCOBJECT *)v56);
      if ( v208 )
      {
        v66 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v65, v64);
        v66[3] = 275LL;
        v66[4] = 4LL;
        v66[5] = &v207;
        v66[6] = 0LL;
        v66[7] = 0LL;
        WdLogEvent5_WdCriticalError(v66);
      }
      v67 = v207;
      KeEnterCriticalRegion();
      if ( *(struct _KTHREAD **)(v67 + 16) == KeGetCurrentThread() )
      {
        v70 = *(_DWORD *)(v67 + 24);
        if ( v70 <= 0 )
        {
          v71 = WdLogNewEntry5_WdAssertion(v69, v68);
          *(_QWORD *)(v71 + 24) = 659LL;
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
          *(_QWORD *)(v76 + 24) = 683LL;
          WdLogEvent5_WdAssertion(v76);
        }
        if ( *(_DWORD *)(v67 + 24) )
        {
          v77 = WdLogNewEntry5_WdAssertion(v73, v68);
          *(_QWORD *)(v77 + 24) = 684LL;
          WdLogEvent5_WdAssertion(v77);
        }
        *(_QWORD *)(v67 + 16) = KeGetCurrentThread();
        v72 = 1;
      }
      *(_DWORD *)(v67 + 24) = v72;
      v208 = 1;
      v78 = v192;
      v79 = *(struct ADAPTER_RENDER **)(*((_QWORD *)v192 + 2) + 16LL);
      v209 = 0LL;
      if ( (*(_DWORD *)(v56 + 196) & 4) != 0 )
      {
        LODWORD(v79) = DXGSYNCOBJECTCA::GetDxgAdapterSyncObject((DXGSYNCOBJECTCA *)v56, v79, &v209);
        if ( (int)v79 < 0 )
          goto LABEL_163;
        v78 = v192;
      }
      else
      {
        if ( v79 && *(struct ADAPTER_RENDER **)(v56 + 312) != v79 )
        {
          v105 = (_QWORD *)WdLogNewEntry5_WdError(v192, v68);
          v105[3] = v56;
          v105[4] = *(_QWORD *)(v56 + 312);
          v105[5] = v79;
          LODWORD(v79) = -1073741811;
          v105[6] = -1073741811LL;
          WdLogEvent5_WdError(v105);
LABEL_163:
          v106 = (_QWORD *)WdLogNewEntry5_WdError(v80, v68);
          v106[3] = v186;
          v106[4] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v192 + 2) + 16LL) + 16LL);
          v106[5] = (int)v79;
          WdLogEvent5_WdError(v106);
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v207, v107);
          if ( v182 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v181, v108);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v215);
          DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v195);
          if ( v184 )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v184);
          if ( P != v188 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v189 = 0;
LABEL_171:
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v190);
          if ( v197 != v198 && v197 )
            ExFreePoolWithTag(v197, 0);
          return (unsigned int)v79;
        }
        v209 = (struct DXGADAPTERSYNCOBJECT *)(v56 + 296);
      }
      if ( !v180 )
      {
        v81 = *(struct ADAPTER_RENDER **)(*((_QWORD *)v78 + 2) + 16LL);
        v82 = (*(_DWORD *)(v56 + 196) & 4) != 0
            ? *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject((DXGSYNCOBJECTCA *)v56, v81) + 4)
            : *(_QWORD *)(v56 + 328);
        if ( (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)(*((_QWORD *)v81 + 77) + 8LL)
                                                                          + 848LL))(
               v82,
               v201) )
        {
          v83 = v192;
          v68 = *((_QWORD *)v192 + 2);
          if ( *(_BYTE *)(*(_QWORD *)(v68 + 16) + 888LL) )
          {
            if ( !*(_BYTE *)(*(_QWORD *)(v68 + 40) + 346LL) || (*((_DWORD *)v193 + 105) & 8) == 0 )
            {
              if ( (*(_BYTE *)(v56 + 196) & 1) == 0
                || !*(_BYTE *)(v68 + 1867)
                || (RedirectedFlipFenceValue = DXGSYNCOBJECT::GetRedirectedFlipFenceValue((DXGSYNCOBJECT *)v56, v68),
                    v201 > RedirectedFlipFenceValue) )
              {
                v109 = WdLogNewEntry5_WdError(v83, v68);
                *(_QWORD *)(v109 + 24) = v186;
                *(_QWORD *)(v109 + 32) = -1073741811LL;
                WdLogEvent5_WdError(v109);
                DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX(
                  (DXGPROCESSCOPYPROTECTIONMUTEX *)&v207,
                  v110);
                if ( v182 )
                  DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v181, v111);
                COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v215);
                DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v195);
                if ( v184 )
                  DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v184);
                if ( P != v188 && P )
                  ExFreePoolWithTag(P, 0);
                P = 0LL;
                v189 = 0;
LABEL_183:
                DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v190);
                if ( v197 != v198 && v197 )
                {
                  ExFreePoolWithTag(v197, 0);
                  return 3221225485LL;
                }
                return 3221225485LL;
              }
            }
          }
        }
      }
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v207, v68);
LABEL_149:
      v102 = (__int64)i;
      i[v45] = (struct DXGSYNCOBJECT *)v56;
      ++v44;
      ++v45;
      if ( v44 >= v183 )
      {
        v21 = v184;
        v10 = (unsigned __int64 *)Src;
        v202 = (const unsigned __int64 *)Src;
        LODWORD(v12) = v210;
        goto LABEL_213;
      }
      v46 = v186;
    }
    v85 = v194[v45];
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
    v91 = v186;
    if ( (unsigned int)v89 < *((_DWORD *)v186 + 64) )
    {
      v92 = *((_QWORD *)v186 + 30);
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
        *(_QWORD *)(v95 + 24) = 267LL;
        WdLogEvent5_WdError(v95);
      }
    }
    v96 = 0LL;
LABEL_141:
    ExReleasePushLockSharedEx(v47, 0LL);
    KeLeaveCriticalRegion();
    if ( !v96 )
    {
      v114 = (_QWORD *)WdLogNewEntry5_WdError(v98, v97);
      v114[3] = v91;
      v115 = v194[v44];
      v114[5] = v44;
      goto LABEL_201;
    }
    if ( v13 )
      v13[v45] = (struct DXGDEVICESYNCOBJECT *)v96;
    v179 = 1;
    if ( v22 )
    {
      v114 = (_QWORD *)WdLogNewEntry5_WdError(v98, v97);
      v114[3] = v91;
LABEL_202:
      WdLogEvent5_WdError(v114);
      if ( v182 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v181, v116);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v215);
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v195);
      if ( v184 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v184);
      if ( P != v188 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v189 = 0;
LABEL_252:
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v190);
      if ( v197 != v198 && v197 )
        ExFreePoolWithTag(v197, 0);
      return 3221225485LL;
    }
    v99 = *(_QWORD *)(v96 + 16);
    v100 = v192;
    if ( v99 != *((_QWORD *)v192 + 2) )
    {
      v114 = (_QWORD *)WdLogNewEntry5_WdError(v99, v97);
      v114[3] = *((_QWORD *)v100 + 2);
      v115 = *(_QWORD *)(v96 + 16);
LABEL_201:
      v114[4] = v115;
      goto LABEL_202;
    }
    if ( (*(_DWORD *)(v96 + 72) & 0x20) != 0 )
    {
      v112 = WdLogNewEntry5_WdError(v99, v97);
      *(_QWORD *)(v112 + 24) = v194[v44];
      WdLogEvent5_WdError(v112);
      if ( v182 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v181, v113);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v215);
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v195);
      if ( v184 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v184);
      if ( P != v188 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v189 = 0;
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v190);
      if ( v197 != v198 && v197 )
        ExFreePoolWithTag(v197, 0);
      return 3221225506LL;
    }
    v56 = *(_QWORD *)(v96 + 32);
    if ( (unsigned int)(*(_DWORD *)(v56 + 192) - 5) > 1 )
    {
      v101 = WdLogNewEntry5_WdAssertion(v99, v97);
      *(_QWORD *)(v101 + 24) = 1205LL;
      WdLogEvent5_WdAssertion(v101);
    }
    goto LABEL_149;
  }
  v102 = (__int64)i;
LABEL_213:
  v117 = 0LL;
  v212 = 0LL;
  v118 = 0;
  v214 = 0;
  v119 = (unsigned int)(*(_DWORD *)(*(_QWORD *)v102 + 192LL) - 5);
  if ( (unsigned int)v119 > 1 )
  {
    v122 = a10;
  }
  else
  {
    if ( a7 )
    {
      v120 = v183;
      if ( v183 <= 4 )
      {
        v117 = v213;
        v212 = v213;
      }
      else
      {
        v102 = 0xFFFFFFFFFFFFFFFFuLL % (unsigned int)v12;
        if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v12 < 8 )
        {
LABEL_222:
          if ( !v117 )
            goto LABEL_223;
          v121 = v118;
          if ( &v10[v121] < v10 || (unsigned __int64)&v10[v121] > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v117, v10, v121 * 8);
          v117 = v212;
          v10 = (unsigned __int64 *)v212;
          v202 = (const unsigned __int64 *)v212;
          Src = v212;
          v122 = a10;
          v102 = (__int64)i;
          goto LABEL_258;
        }
        v117 = ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * (unsigned int)v12, 0x4B677844u);
        v212 = v117;
      }
      v118 = v120;
      v214 = v120;
      if ( !v117 )
      {
LABEL_223:
        v212 = 0LL;
        v214 = 0;
        if ( v182 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v181, v102);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v215);
        DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v195);
        if ( v21 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v184);
        if ( P != v188 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v189 = 0;
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v190);
        if ( v197 != v198 && v197 )
          ExFreePoolWithTag(v197, 0);
        v197 = 0LL;
        v199 = 0;
        return 3221225495LL;
      }
      if ( (_DWORD)v12 )
      {
        memset(v117, 0, 8LL * (unsigned int)v12);
        v118 = v214;
        v117 = v212;
      }
      goto LABEL_222;
    }
    v122 = a10;
    if ( a10 )
    {
      v10 = &v201;
      v202 = &v201;
      Src = &v201;
    }
    else if ( !v10 )
    {
      v123 = WdLogNewEntry5_WdError(v119, v102);
      *(_QWORD *)(v123 + 24) = v186;
      WdLogEvent5_WdError(v123);
      if ( v212 != v213 && v212 )
        ExFreePoolWithTag(v212, 0);
      v212 = 0LL;
      v214 = 0;
      if ( v182 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v181, v124);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v215);
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v195);
      if ( v21 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v184);
      if ( P != v188 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v189 = 0;
      goto LABEL_252;
    }
  }
  v120 = v183;
LABEL_258:
  if ( v180 )
  {
    LODWORD(v79) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendWaitForSyncObjectFromGpu(
                     (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v192 + 2) + 16LL) + 16LL)
                                                  + 4208LL),
                     v186,
                     v193,
                     v194,
                     (struct DXGSYNCOBJECT **)v102,
                     v13,
                     v10,
                     v201,
                     v120,
                     0LL);
    if ( v212 != v213 && v212 )
      ExFreePoolWithTag(v212, 0);
    v212 = 0LL;
    v214 = 0;
    if ( v182 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v181, v125);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v215);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v195);
    if ( v21 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v184);
    if ( P != v188 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v189 = 0;
    goto LABEL_171;
  }
  v126 = 0;
  if ( !v183 )
  {
LABEL_348:
    if ( v117 != v213 && v117 )
      ExFreePoolWithTag(v117, 0);
    v212 = 0LL;
    v214 = 0;
    if ( v182 )
    {
      v182 = 0;
      ExReleaseResourceLite(v181[51]);
      KeLeaveCriticalRegion();
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v215);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v195);
    if ( v21 && v185 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v21 + 136));
      KeLeaveCriticalRegion();
    }
    if ( P != v188 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v189 = 0;
    if ( v190 && !v191 )
      DXGCONTEXT::ReleaseReference(v190);
    if ( v197 != v198 && v197 )
      ExFreePoolWithTag(v197, 0);
    return 0LL;
  }
  v127 = v193;
  v206 = v193;
  v128 = (struct DXGSYNCOBJECT **)(v102 - (_QWORD)v10);
  for ( i = v128; ; v128 = i )
  {
    v129 = *(unsigned __int64 *)((char *)v10 + (_QWORD)v128);
    DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)&v204, (struct DXGSYNCOBJECT *)v129);
    if ( v205 )
    {
      v132 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v131, v130);
      v132[3] = 275LL;
      v132[4] = 4LL;
      v132[5] = &v204;
      v132[6] = 0LL;
      v132[7] = 0LL;
      WdLogEvent5_WdCriticalError(v132);
    }
    v133 = v204;
    KeEnterCriticalRegion();
    if ( *(struct _KTHREAD **)(v133 + 16) == KeGetCurrentThread() )
    {
      v136 = *(_DWORD *)(v133 + 24);
      if ( v136 <= 0 )
      {
        v137 = WdLogNewEntry5_WdAssertion(v135, v134);
        *(_QWORD *)(v137 + 24) = 659LL;
        WdLogEvent5_WdAssertion(v137);
        v136 = *(_DWORD *)(v133 + 24);
      }
      v138 = v136 + 1;
    }
    else
    {
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v133, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v142 = *(_DWORD *)(v133 + 28);
          if ( v142 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q_EtwWriteTransfer(v140, &EventBlockThread, v141, v142);
        }
        _InterlockedIncrement64((volatile signed __int64 *)(v133 + 8));
        ExAcquirePushLockExclusiveEx(v133, 0LL);
      }
      if ( *(_QWORD *)(v133 + 16) )
      {
        v143 = WdLogNewEntry5_WdAssertion(v140, v139);
        *(_QWORD *)(v143 + 24) = 683LL;
        WdLogEvent5_WdAssertion(v143);
      }
      if ( *(_DWORD *)(v133 + 24) )
      {
        v144 = WdLogNewEntry5_WdAssertion(v140, v139);
        *(_QWORD *)(v144 + 24) = 684LL;
        WdLogEvent5_WdAssertion(v144);
      }
      *(_QWORD *)(v133 + 16) = KeGetCurrentThread();
      v138 = 1;
    }
    *(_DWORD *)(v133 + 24) = v138;
    v205 = 1;
    v145 = *(_DWORD *)(v129 + 192);
    if ( (unsigned int)(v145 - 5) <= 1 )
    {
      v146 = *v10;
    }
    else
    {
      v146 = 0LL;
      if ( v145 == 3 )
        v146 = v201;
    }
    v147 = v192;
    v148 = (*(_DWORD *)(v129 + 196) & 4) != 0
         ? *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject(
                         (DXGSYNCOBJECTCA *)v129,
                         *(struct ADAPTER_RENDER **)(*((_QWORD *)v192 + 2) + 16LL))
           + 4)
         : *(_QWORD *)(v129 + 328);
    v203 = v148;
    if ( (*((_DWORD *)v127 + 105) & 0x10) != 0 )
      break;
    v164 = v193;
    v165 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v147 + 2) + 16LL)
                                                                                                + 616LL)
                                                                                    + 8LL)
                                                                        + 624LL))(
             *((_QWORD *)v193 + 34),
             v148,
             v146);
    v168 = v165;
    if ( v165 < 0 )
    {
      v175 = (_QWORD *)WdLogNewEntry5_WdError(v166, v151);
      v175[3] = v186;
      v175[4] = v194[v126];
      v175[5] = v126;
      v175[6] = v168;
      WdLogEvent5_WdError(v175);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v204, v176);
      if ( v212 != v213 && v212 )
        ExFreePoolWithTag(v212, 0);
      v212 = 0LL;
      v214 = 0;
      if ( v182 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v181, v177);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v215);
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v195);
      if ( v184 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v184);
      if ( P != v188 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v189 = 0;
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v190);
      if ( v197 != v198 && v197 )
        ExFreePoolWithTag(v197, 0);
      return (unsigned int)v168;
    }
    if ( v179 )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        LODWORD(Timeout) = 1;
        McTemplateK0pqPR1XR1_EtwWriteTransfer(
          (__int64)Src + 8 * v126,
          &EventWaitForSynchronizationObjectFromGpu,
          v167,
          v164,
          Timeout,
          &v203,
          (char *)Src + 8 * v126);
      }
    }
    else if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0pqPR1x_EtwWriteTransfer(v166, v151, v167, v164);
    }
LABEL_320:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v204, v151);
    ++v126;
    v202 = ++v10;
    if ( v126 >= v183 )
    {
      v21 = v184;
      v117 = v212;
      goto LABEL_348;
    }
    v122 = a10;
  }
  if ( v122 )
  {
    v149 = *((_QWORD *)v193 + 38);
    v150 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v147 + 2) + 16LL)
                                                                                                 + 616LL)
                                                                                     + 8LL)
                                                                         + 632LL))(
             v149,
             v148,
             v146);
    v79 = (struct ADAPTER_RENDER *)v150;
    if ( v150 < 0 )
    {
      v169 = (_QWORD *)WdLogNewEntry5_WdError(v152, v151);
      v169[3] = v186;
      v169[4] = v194[v126];
      v169[5] = v126;
      v169[6] = v79;
      WdLogEvent5_WdError(v169);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v204, v170);
      if ( v212 != v213 && v212 )
        ExFreePoolWithTag(v212, 0);
      v212 = 0LL;
      v214 = 0;
      if ( v182 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v181, v171);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v215);
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v195);
      if ( v184 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v184);
      if ( P != v188 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v189 = 0;
      goto LABEL_171;
    }
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      LODWORD(Timeout) = 1;
      McTemplateK0pqPR1XR1_EtwWriteTransfer(
        (__int64)Src + 8 * v126,
        &EventWaitForSynchronizationObjectFromGpu,
        v153,
        v149,
        Timeout,
        &v203,
        (char *)Src + 8 * v126);
    }
    goto LABEL_320;
  }
  DXGNODELIST<DXGCONTEXT,DXGHWQUEUE>::GetHeadIterator((_QWORD *)v193 + 53, &v211);
  v156 = (_QWORD *)*((_QWORD *)&v211 + 1);
  v157 = (_QWORD *)v211;
  v158 = (char *)Src;
  while ( 1 )
  {
    if ( v156 == v157 || !v156 )
    {
      v211 = 0LL;
      v10 = (unsigned __int64 *)v202;
      v127 = v206;
      goto LABEL_320;
    }
    v159 = v156[5];
    v160 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v155 + 2) + 16LL)
                                                                                                 + 616LL)
                                                                                     + 8LL)
                                                                         + 632LL))(
             v159,
             v154,
             v146);
    v163 = v160;
    if ( v160 < 0 )
      break;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      LODWORD(Timeout) = 1;
      McTemplateK0pqPR1XR1_EtwWriteTransfer(
        (__int64)&v158[8 * v126],
        &EventWaitForSynchronizationObjectFromGpu,
        v162,
        v159,
        Timeout,
        &v203,
        &v158[8 * v126]);
    }
    v156 = (_QWORD *)*v156;
    v154 = v203;
    v155 = v192;
  }
  v172 = (_QWORD *)WdLogNewEntry5_WdError(v161, v151);
  v172[3] = v186;
  v172[4] = v194[v126];
  v172[5] = v126;
  v172[6] = v163;
  WdLogEvent5_WdError(v172);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v204, v173);
  if ( v212 != v213 && v212 )
    ExFreePoolWithTag(v212, 0);
  v212 = 0LL;
  v214 = 0;
  if ( v182 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v181, v174);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v215);
  DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v195);
  if ( v184 )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v184);
  if ( P != v188 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v189 = 0;
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v190);
  if ( v197 != v198 && v197 )
    ExFreePoolWithTag(v197, 0);
  return (unsigned int)v163;
}
