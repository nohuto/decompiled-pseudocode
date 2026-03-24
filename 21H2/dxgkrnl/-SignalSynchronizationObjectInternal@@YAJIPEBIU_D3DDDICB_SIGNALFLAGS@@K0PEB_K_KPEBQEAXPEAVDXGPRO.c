/*
 * XREFs of ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C00FBD50
 * Callers:
 *     ?VmBusSignalSyncObjectCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00DB040 (-VmBusSignalSyncObjectCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkSignalSynchronizationObjectFromGpu2 @ 0x1C00F8A00 (DxgkSignalSynchronizationObjectFromGpu2.c)
 *     ?DxgkSignalSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU@@H@Z @ 0x1C0159A20 (-DxgkSignalSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMG.c)
 *     DxgkSignalSynchronizationObjectInternal @ 0x1C015CCE0 (DxgkSignalSynchronizationObjectInternal.c)
 *     ?VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C024F300 (-VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x1C0255330 (-IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z.c)
 *     ?Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C029C4B8 (-Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 *     ?InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z @ 0x1C02AB1C8 (-InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z.c)
 * Callees:
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0001E14 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ?TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ @ 0x1C0001F1C (-TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00022BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C00026F0 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004090 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0004160 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0004200 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C00042E4 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x1C0004348 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0004488 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C00058C8 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007018 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@XZ @ 0x1C0007054 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00073EC (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007578 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007658 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009DE0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetHeadIterator@?$DXGNODELIST@VDXGCONTEXT@@VDXGHWQUEUE@@@@QEAA?AVITERATOR@1@XZ @ 0x1C0026220 (-GetHeadIterator@-$DXGNODELIST@VDXGCONTEXT@@VDXGHWQUEUE@@@@QEAA-AVITERATOR@1@XZ.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@PEAPEAVDXGSYNCOBJECT@@IE@Z @ 0x1C0027A60 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0028C40 (memmove.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ??1?$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAA@XZ @ 0x1C0046DE4 (--1-$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAA@XZ.c)
 *     McTemplateK0qPR0qqPR3XR3_EtwWriteTransfer @ 0x1C0047228 (McTemplateK0qPR0qqPR3XR3_EtwWriteTransfer.c)
 *     ?FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z @ 0x1C00491E8 (-FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z.c)
 *     ??1?$NonPagedPoolZeroedArray@PEAUVIDSCH_HW_QUEUE@@$07$0ELGHHIEE@@@QEAA@XZ @ 0x1C00496E0 (--1-$NonPagedPoolZeroedArray@PEAUVIDSCH_HW_QUEUE@@$07$0ELGHHIEE@@@QEAA@XZ.c)
 *     McTemplateK0qPR0qPR2qx_EtwWriteTransfer @ 0x1C0049810 (McTemplateK0qPR0qPR2qx_EtwWriteTransfer.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FD9E0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C020CC74 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGNALFLAGS@@K1PEB_K_KPEBQEAX_N6PEAVDXGDEVICE@@@Z @ 0x1C024BC24 (-VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGN.c)
 *     ??1?$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$01@@QEAA@XZ @ 0x1C026C5A0 (--1-$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$01@@QEAA@XZ.c)
 *     ?GetRenderHwQueueCount@DXGCONTEXT@@QEAAIXZ @ 0x1C026D804 (-GetRenderHwQueueCount@DXGCONTEXT@@QEAAIXZ.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0290C94 (-GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@.c)
 */

__int64 __fastcall SignalSynchronizationObjectInternal(
        __int64 a1,
        unsigned int *a2,
        struct _D3DDDICB_SIGNALFLAGS a3,
        unsigned int a4,
        unsigned int *a5,
        unsigned __int64 *a6,
        unsigned __int64 a7,
        void **a8,
        struct DXGPROCESS *a9,
        bool a10,
        bool a11)
{
  __int64 v11; // rsi
  void *const *v13; // r12
  __int64 v14; // rax
  struct DXGCONTEXT **PoolWithTag; // r13
  struct DXGCONTEXT **v17; // r13
  char v18; // si
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r9
  struct DXGCONTEXT *v22; // rdi
  _QWORD *v23; // rax
  __int64 v24; // rax
  char v25; // al
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // rdx
  unsigned int v29; // ebx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rcx
  bool v33; // r14
  __int64 v34; // rcx
  struct _KEVENT *v35; // rsi
  struct _KEVENT *v36; // rcx
  __int64 v37; // rcx
  unsigned __int8 v38; // si
  __int64 v39; // r8
  _QWORD *v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r8
  struct DXGGLOBAL *Global; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rax
  _QWORD *v50; // rax
  struct DXGGLOBAL *v51; // rdi
  __int64 v52; // rdx
  __int64 v53; // rsi
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rcx
  _QWORD *v58; // rax
  __int64 v59; // rdi
  __int64 v60; // rax
  unsigned int v61; // edi
  unsigned int v62; // r10d
  _QWORD *v63; // rsi
  const unsigned int *v64; // r14
  __int64 v65; // rax
  struct DXGPROCESS *v66; // rcx
  __int64 v67; // r9
  __int64 *v68; // rdx
  __int64 v69; // rax
  __int64 v70; // rdx
  unsigned __int64 v71; // rdx
  unsigned int v72; // r14d
  unsigned int v73; // r10d
  __int64 v74; // r9
  DXGCONTEXT **v75; // r8
  unsigned int RenderHwQueueCount; // eax
  int v77; // r10d
  _QWORD *v78; // rax
  char *v79; // r15
  __int64 v80; // rdi
  char *v81; // r14
  int v82; // r11d
  __int64 v83; // r10
  __int64 v84; // rdi
  __int64 v85; // rcx
  int v86; // r8d
  __int64 v87; // r9
  int v88; // eax
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  _QWORD *v92; // rax
  __int64 v93; // rax
  char *v94; // rdi
  char v95; // r14
  __int64 v96; // r15
  char *v97; // rsi
  unsigned int *v98; // r12
  char *v99; // r13
  unsigned int v100; // edi
  __int64 v101; // rcx
  __int64 v102; // r8
  int v103; // r9d
  __int64 v104; // rax
  unsigned int v105; // edi
  __int64 v106; // r8
  unsigned int v107; // ecx
  __int64 v108; // rdi
  __int64 v109; // rdx
  __int64 v110; // rcx
  int v111; // eax
  __int64 v112; // rax
  __int64 v113; // rax
  _QWORD *v114; // rax
  unsigned int v115; // edi
  __int64 v116; // rcx
  __int64 v117; // r8
  int v118; // r9d
  __int64 v119; // rax
  unsigned int v120; // edi
  struct DXGPROCESS *v121; // r14
  __int64 v122; // r8
  unsigned int v123; // ecx
  __int64 v124; // rcx
  __int64 v125; // rax
  __int64 v126; // rdi
  __int64 v127; // rdx
  __int64 v128; // rax
  const void *v129; // rdi
  unsigned __int64 v130; // rsi
  void *v131; // rcx
  __int64 v132; // r8
  __int64 v133; // rdx
  __int64 *v134; // r13
  unsigned __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // rax
  __int64 v138; // rdx
  __int64 v139; // rax
  __int64 v140; // rax
  _BYTE *v141; // rcx
  size_t v142; // r8
  void *v143; // rdx
  __int64 v144; // rax
  _QWORD *v145; // r15
  _BYTE *v146; // r15
  unsigned int v147; // r12d
  unsigned int v148; // r9d
  _QWORD *v149; // r14
  signed __int64 v150; // rdi
  __int64 v151; // rsi
  struct DXGCONTEXT **v152; // rdx
  __int64 v153; // rcx
  _QWORD *v154; // rax
  __int64 v155; // rdx
  _QWORD *v156; // rax
  __int64 v157; // rdx
  __int64 v158; // rax
  __int64 v159; // rax
  __int64 v160; // rsi
  int v161; // eax
  __int64 v162; // rdx
  __int64 v163; // rcx
  __int64 v164; // r8
  _QWORD *v165; // rax
  __int64 v166; // rcx
  char v167; // [rsp+70h] [rbp-3A8h]
  unsigned int v168; // [rsp+74h] [rbp-3A4h]
  _BYTE v170[16]; // [rsp+80h] [rbp-398h] BYREF
  struct DXGPROCESS *v171; // [rsp+90h] [rbp-388h]
  struct DXGGLOBAL *v172; // [rsp+98h] [rbp-380h] BYREF
  char v173; // [rsp+A0h] [rbp-378h]
  __int64 v174; // [rsp+A8h] [rbp-370h] BYREF
  int v175; // [rsp+B0h] [rbp-368h]
  struct DXGCONTEXT **v176; // [rsp+B8h] [rbp-360h]
  unsigned int v177; // [rsp+C0h] [rbp-358h]
  struct DXGCONTEXT **v178; // [rsp+C8h] [rbp-350h] BYREF
  char v179; // [rsp+D0h] [rbp-348h] BYREF
  int v180; // [rsp+E0h] [rbp-338h]
  unsigned int v181; // [rsp+E8h] [rbp-330h]
  unsigned int *v182; // [rsp+F0h] [rbp-328h]
  _BYTE *v183; // [rsp+F8h] [rbp-320h]
  PVOID P; // [rsp+100h] [rbp-318h]
  _BYTE v185[16]; // [rsp+108h] [rbp-310h] BYREF
  unsigned int v186; // [rsp+118h] [rbp-300h]
  char *v187; // [rsp+120h] [rbp-2F8h] BYREF
  char v188; // [rsp+128h] [rbp-2F0h] BYREF
  unsigned int v189; // [rsp+138h] [rbp-2E0h]
  char *v190; // [rsp+140h] [rbp-2D8h]
  char *v191; // [rsp+148h] [rbp-2D0h]
  void *Src; // [rsp+150h] [rbp-2C8h]
  unsigned __int64 v193; // [rsp+158h] [rbp-2C0h]
  char *v194; // [rsp+160h] [rbp-2B8h] BYREF
  char v195; // [rsp+168h] [rbp-2B0h] BYREF
  unsigned int v196; // [rsp+1A8h] [rbp-270h]
  char *v197; // [rsp+1B0h] [rbp-268h] BYREF
  char v198; // [rsp+1B8h] [rbp-260h] BYREF
  unsigned int v199; // [rsp+1F8h] [rbp-220h]
  _QWORD v200[2]; // [rsp+200h] [rbp-218h] BYREF
  __int128 v201; // [rsp+210h] [rbp-208h] BYREF
  _QWORD v202[4]; // [rsp+220h] [rbp-1F8h] BYREF
  char v203; // [rsp+240h] [rbp-1D8h]
  struct DXGADAPTERSYNCOBJECT *v204; // [rsp+248h] [rbp-1D0h] BYREF
  _BYTE v205[24]; // [rsp+250h] [rbp-1C8h] BYREF
  void *v206; // [rsp+268h] [rbp-1B0h] BYREF
  _BYTE v207[32]; // [rsp+270h] [rbp-1A8h] BYREF
  unsigned int v208; // [rsp+290h] [rbp-188h]
  char v209[8]; // [rsp+2A0h] [rbp-178h] BYREF
  _BYTE v210[16]; // [rsp+2A8h] [rbp-170h] BYREF
  DXGADAPTER *v211; // [rsp+2B8h] [rbp-160h]
  char v212; // [rsp+2C0h] [rbp-158h]
  __int64 v213; // [rsp+2C8h] [rbp-150h]
  _BYTE v214[16]; // [rsp+2E8h] [rbp-130h] BYREF
  __int64 v215; // [rsp+2F8h] [rbp-120h]
  __int64 v216; // [rsp+328h] [rbp-F0h]
  char v217; // [rsp+330h] [rbp-E8h]
  _BYTE v218[144]; // [rsp+340h] [rbp-D8h] BYREF

  v11 = a4;
  v182 = a2;
  v168 = a1;
  Src = a6;
  v13 = a8;
  v171 = a9;
  v200[1] = a9;
  if ( !a4 )
  {
    v14 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v14 + 24) = 346LL;
    WdLogEvent5_WdError(v14);
    return -1073741811LL;
  }
  v178 = 0LL;
  v180 = 0;
  if ( a4 <= 2 )
  {
    PoolWithTag = (struct DXGCONTEXT **)&v179;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a4 < 8 )
    {
LABEL_228:
      PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v178);
      return 3221225495LL;
    }
    PoolWithTag = (struct DXGCONTEXT **)ExAllocatePoolWithTag(PagedPool, 8LL * a4, 0x4B677844u);
  }
  v178 = PoolWithTag;
  v176 = PoolWithTag;
  v180 = v11;
  if ( !PoolWithTag )
    goto LABEL_228;
  memset(PoolWithTag, 0, 8 * v11);
  v17 = v178;
  v176 = v178;
  v18 = a11;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v170, *a5, v171, v178, a11);
  v22 = *v17;
  if ( !*v17 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdError(v20, v19);
    v23[3] = v171;
    v23[4] = *a5;
    v23[5] = -1073741811LL;
    WdLogEvent5_WdError(v23);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v170);
    PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v178);
    return 3221225485LL;
  }
  if ( (*(_BYTE *)&a3.0 & 2) != 0 )
  {
    if ( v168 )
    {
      v24 = WdLogNewEntry5_WdError(v20, v19);
      *(_QWORD *)(v24 + 24) = 376LL;
LABEL_13:
      WdLogEvent5_WdError(v24);
      goto LABEL_14;
    }
    if ( !*v13 )
    {
      v24 = WdLogNewEntry5_WdError(v20, v19);
      *(_QWORD *)(v24 + 24) = 381LL;
      goto LABEL_13;
    }
  }
  v25 = *((_BYTE *)v22 + 457);
  v26 = *((_QWORD *)v22 + 2);
  if ( v25 )
  {
    v27 = *(_QWORD *)(*(_QWORD *)(v26 + 16) + 16LL);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v218, (struct DXGADAPTER *const)v27, 0LL);
    if ( v18 || (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v218, 0LL) >= 0 )
    {
      v29 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalSyncObject(
              (DXG_GUEST_VIRTUALGPU_VMBUS *)(v27 + 4240),
              v171,
              v168,
              v182,
              a3,
              a4,
              a5,
              a6,
              a7,
              v13,
              a10,
              0,
              0LL);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v218, v30);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v170);
      PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v178);
      return v29;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v218, v28);
LABEL_21:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v170);
    PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v178);
    return 3221226166LL;
  }
  v174 = v26;
  v175 = 0;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v209, v26, 0, v21, v18);
  v33 = a10;
  if ( v18 )
    goto LABEL_58;
  if ( !a10 && *(_DWORD *)(*((_QWORD *)*v176 + 2) + 432LL) != 2 && (*((_BYTE *)v171 + 347) & 0x20) == 0 )
  {
    if ( !(unsigned int)DXGDEVICEACCESSLOCKEXCLUSIVE::TryAcquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v174) )
    {
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v209);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v174);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v170);
      PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v178);
      return 2147483665LL;
    }
    goto LABEL_43;
  }
  v35 = *(struct _KEVENT **)(v26 + 16);
  if ( *(_DWORD *)(v26 + 432) == 2 )
  {
    if ( !KeReadStateEvent(v35 + 5) )
    {
      v36 = v35 + 5;
LABEL_34:
      KeWaitForSingleObject(v36, Executive, 0, 0, 0LL);
    }
  }
  else if ( !KeReadStateEvent(v35 + 4) )
  {
    v36 = v35 + 4;
    goto LABEL_34;
  }
  KeEnterCriticalRegion();
  if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v26 + 136), 0) )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v26 + 16) + 16LL) + 104LL));
    v38 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v26 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q_EtwWriteTransfer(v37, &EventBlockThread, v39, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v26 + 136), 1u);
    if ( v38 )
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v26 + 16) + 16LL));
    ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v26 + 16) + 16LL) + 104LL, 0LL);
    KeLeaveCriticalRegion();
  }
  v175 = 1;
LABEL_43:
  if ( v217 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v214, 0LL);
    v34 = *(unsigned int *)(v215 + 200);
    if ( (_DWORD)v34 != 1 )
      goto LABEL_56;
  }
  if ( v212 )
  {
    v40 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v34, v31);
    v40[3] = 275LL;
    v40[4] = 4LL;
    v40[5] = v210;
    v40[6] = 0LL;
    v40[7] = 0LL;
    WdLogEvent5_WdCriticalError(v40);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v211 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v211 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v41, &EventBlockThread, v42, 72);
      KeWaitForSingleObject((char *)v211 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v211, 0LL);
  }
  v213 = 0LL;
  v212 = 1;
  v32 = *(unsigned int *)(v216 + 576);
  if ( (_DWORD)v32 != 1 )
  {
    COREACCESS::Release((COREACCESS *)v210);
    if ( !v217 )
    {
LABEL_57:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v209);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v174);
      goto LABEL_21;
    }
LABEL_56:
    COREACCESS::Release((COREACCESS *)v214);
    goto LABEL_57;
  }
LABEL_58:
  Global = DXGGLOBAL::GetGlobal(v32, v31);
  v172 = Global;
  v173 = 0;
  if ( !Global )
  {
    v46 = WdLogNewEntry5_WdAssertion(v45, v44);
    *(_QWORD *)(v46 + 24) = 2427LL;
    WdLogEvent5_WdAssertion(v46);
    Global = v172;
  }
  if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 65)) )
  {
    v49 = WdLogNewEntry5_WdAssertion(v48, v47);
    *(_QWORD *)(v49 + 24) = 2432LL;
    WdLogEvent5_WdAssertion(v49);
  }
  if ( v173 )
  {
    v50 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v48, v47);
    v50[3] = 275LL;
    v50[4] = 4LL;
    v50[5] = &v172;
    v50[6] = 0LL;
    v50[7] = 0LL;
    WdLogEvent5_WdCriticalError(v50);
  }
  v51 = v172;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(*((PERESOURCE *)v51 + 65), 1u);
  v173 = 1;
  v53 = (__int64)v176;
  v54 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)*v176 + 2) + 16LL) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v54 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v54 + 168)) )
  {
    v56 = WdLogNewEntry5_WdAssertion(v55, v52);
    *(_QWORD *)(v56 + 24) = 455LL;
    WdLogEvent5_WdAssertion(v56);
  }
  if ( v33 )
  {
    v57 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v53 + 16LL) + 16LL) + 16LL) + 216LL)
                    + 64LL);
    if ( *(_DWORD *)(*(_QWORD *)(v57 + 40) + 28LL) > 0x1052u )
    {
      if ( (a3.Value & 0x7FFFFFF8) != 0 )
      {
        v58 = (_QWORD *)WdLogNewEntry5_WdError(v57, v52);
        v58[3] = *a5;
        v58[4] = (a3.Value >> 3) & 0xFFFFFFF;
        LODWORD(v59) = -1073741811;
        v58[5] = -1073741811LL;
        WdLogEvent5_WdError(v58);
LABEL_71:
        DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v172);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v209);
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v174);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v170);
        PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v178);
        return (unsigned int)v59;
      }
      if ( (a3.Value & 0x80000000) != 0 )
      {
        v60 = WdLogNewEntry5_WdError(v57, v52);
        *(_QWORD *)(v60 + 24) = 473LL;
        WdLogEvent5_WdError(v60);
        goto LABEL_74;
      }
    }
  }
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v205, (struct _KTHREAD **)v171);
  v61 = 1;
  v62 = a4;
  if ( a4 > 1 )
  {
    v63 = (_QWORD *)(v53 + 8);
    v64 = a5 + 1;
    while ( 1 )
    {
      v65 = (*v64 >> 6) & 0xFFFFFF;
      v66 = v171;
      if ( (unsigned int)v65 >= *((_DWORD *)v171 + 64) )
        goto LABEL_83;
      v67 = *((_QWORD *)v171 + 30);
      v66 = (struct DXGPROCESS *)*(unsigned int *)(v67 + 16 * v65 + 8);
      if ( *v64 >> 30 != ((*(_DWORD *)(v67 + 16 * v65 + 8) >> 5) & 3)
        || ((unsigned __int16)v66 & 0x2000) != 0
        || ((unsigned __int8)v66 & 0x1F) == 0 )
      {
        goto LABEL_83;
      }
      v68 = (__int64 *)(v67 + 16LL * (unsigned int)v65);
      v66 = (struct DXGPROCESS *)((unsigned __int8)v66 & 0x1F);
      if ( (_BYTE)v66 != 7 )
        break;
      v70 = *v68;
LABEL_84:
      *v63 = v70;
      if ( !v70 || (v70 = *(_QWORD *)(v70 + 16), v70 != *((_QWORD *)*v176 + 2)) )
      {
        v78 = (_QWORD *)WdLogNewEntry5_WdError(v66, v70);
        v78[3] = *a5;
        v78[4] = a5[v61];
        v78[5] = v61;
        LODWORD(v59) = -1073741811;
        v78[6] = -1073741811LL;
        WdLogEvent5_WdError(v78);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v205);
        goto LABEL_71;
      }
      ++v61;
      ++v64;
      ++v63;
      if ( v61 >= v62 )
      {
        v53 = (__int64)v176;
        goto LABEL_88;
      }
    }
    v69 = WdLogNewEntry5_WdError(v66, v68);
    *(_QWORD *)(v69 + 24) = 316LL;
    WdLogEvent5_WdError(v69);
    v62 = a4;
LABEL_83:
    v70 = 0LL;
    goto LABEL_84;
  }
LABEL_88:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v205);
  v72 = 0;
  v181 = 0;
  v73 = 0;
  v177 = 0;
  v74 = a4;
  if ( a4 )
  {
    v75 = (DXGCONTEXT **)v53;
    do
    {
      if ( (*((_DWORD *)*v75 + 105) & 0x10) != 0 )
      {
        RenderHwQueueCount = DXGCONTEXT::GetRenderHwQueueCount(*v75);
        v73 = RenderHwQueueCount + v77;
      }
      else
      {
        ++v72;
      }
      ++v75;
      --v74;
    }
    while ( v74 );
    v177 = v73;
    v181 = v72;
  }
  v197 = 0LL;
  v199 = 0;
  if ( v72 <= 8 )
  {
    v79 = &v198;
  }
  else
  {
    v71 = 0xFFFFFFFFFFFFFFFFuLL % v72;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v72 < 8 )
    {
      v79 = 0LL;
      v190 = 0LL;
      goto LABEL_106;
    }
    v79 = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * v72, 0x4B677844u);
  }
  v197 = v79;
  v190 = v79;
  v199 = v72;
  if ( v79 && v72 )
  {
    memset(v79, 0, 8LL * v72);
    v79 = v197;
    v190 = v197;
  }
  v73 = v177;
LABEL_106:
  v194 = 0LL;
  v196 = 0;
  v80 = v73;
  if ( v73 <= 8 )
  {
    v81 = &v195;
  }
  else
  {
    v71 = 0xFFFFFFFFFFFFFFFFuLL % v73;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v73 < 8 )
    {
      v81 = 0LL;
      v191 = 0LL;
      goto LABEL_114;
    }
    v81 = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * v73, 0x4B677844u);
    v73 = v177;
  }
  v194 = v81;
  v191 = v81;
  v196 = v73;
  if ( v81 && v73 )
  {
    memset(v81, 0, 8 * v80);
    v81 = v194;
    v191 = v194;
  }
LABEL_114:
  if ( !v79 || !v81 )
    goto LABEL_227;
  v82 = 0;
  if ( a4 )
  {
    v83 = v53;
    v84 = a4;
    do
    {
      v85 = *(_QWORD *)v83;
      if ( (*(_DWORD *)(*(_QWORD *)v83 + 420LL) & 0x10) != 0 )
      {
        DXGNODELIST<DXGCONTEXT,DXGHWQUEUE>::GetHeadIterator((_QWORD *)(v85 + 424), &v201);
        v71 = *((_QWORD *)&v201 + 1);
        v87 = v201;
        while ( v71 != v87 && v71 )
        {
          *(_QWORD *)&v81[8 * v86++] = *(_QWORD *)(v71 + 40);
          v71 = *(_QWORD *)v71;
        }
        v201 = 0LL;
      }
      else
      {
        *(_QWORD *)&v79[8 * v82++] = *(_QWORD *)(v85 + 272);
      }
      v83 += 8LL;
      --v84;
    }
    while ( v84 );
  }
  if ( (*(_BYTE *)&a3.0 & 2) != 0 )
  {
    v88 = (*(__int64 (__fastcall **)(_QWORD, char *, _QWORD, char *, struct _D3DDDICB_SIGNALFLAGS::$F4BAD952F0EA0A4BEFA84782466716D0::$DE86B16C121A84B75DA0E945D4B81535, void *const))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v53 + 16LL) + 16LL) + 616LL) + 8LL) + 832LL))(
            v177,
            v81,
            v181,
            v79,
            a3.0,
            *v13);
    v59 = v88;
    if ( v88 >= 0 )
    {
      if ( bTracingEnabled )
      {
        v200[0] = *v13;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0qPR0qPR2qx_EtwWriteTransfer(v90, v89, v91, a4, v53, 1, (__int64)v200, *(_BYTE *)&a3.0, 0);
      }
      goto LABEL_133;
    }
    v92 = (_QWORD *)WdLogNewEntry5_WdError(v90, v89);
    v92[3] = v171;
    v92[4] = *v13;
    v92[5] = v59;
    WdLogEvent5_WdError(v92);
    goto LABEL_129;
  }
  if ( !v168 )
  {
    v93 = WdLogNewEntry5_WdError(0LL, v71);
    *(_QWORD *)(v93 + 24) = 591LL;
    WdLogEvent5_WdError(v93);
    goto LABEL_136;
  }
  v187 = 0LL;
  v189 = 0;
  v193 = v168;
  if ( v168 <= 2 )
  {
    v94 = &v188;
    v193 = v168;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v168 < 8 )
      goto LABEL_226;
    v94 = (char *)ExAllocatePoolWithTag(PagedPool, 8LL * v168, 0x4B677844u);
  }
  v187 = v94;
  v183 = v94;
  v189 = v168;
  if ( !v94 || (memset(v94, 0, 8LL * v168), (v183 = v187) == 0LL) )
  {
LABEL_226:
    PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v187);
LABEL_227:
    NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>::~NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>((__int64)&v194);
    NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>::~NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>((__int64)&v197);
    DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v172);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v209);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v174);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v170);
    goto LABEL_228;
  }
  v167 = 0;
  v95 = 0;
  v96 = 0LL;
  v97 = (char *)v171 + 208;
  v98 = v182;
  v99 = v187;
  do
  {
    v100 = *v98;
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v97, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v103 = *((_DWORD *)v97 + 6);
        if ( v103 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v101, &EventBlockThread, v102, v103);
      }
      ExAcquirePushLockSharedEx(v97, 0LL);
    }
    v104 = (v100 >> 6) & 0xFFFFFF;
    v105 = v100 >> 30;
    if ( (unsigned int)v104 < *((_DWORD *)v171 + 64)
      && (v106 = *((_QWORD *)v171 + 30), v107 = *(_DWORD *)(v106 + 16 * v104 + 8), v105 == ((v107 >> 5) & 3))
      && (v107 & 0x2000) == 0
      && (v107 & 0x1F) == 8 )
    {
      v108 = *(_QWORD *)(v106 + 16LL * (unsigned int)v104);
    }
    else
    {
      v108 = 0LL;
    }
    ExReleasePushLockSharedEx(v97, 0LL);
    KeLeaveCriticalRegion();
    if ( v108 )
    {
      v111 = *(_DWORD *)(v108 + 192);
      if ( v111 == 5 )
      {
        v112 = WdLogNewEntry5_WdAssertion(v110, v109);
        *(_QWORD *)(v112 + 24) = 625LL;
        WdLogEvent5_WdAssertion(v112);
        v111 = *(_DWORD *)(v108 + 192);
      }
      if ( v111 == 6 )
      {
        v113 = WdLogNewEntry5_WdAssertion(v110, v109);
        *(_QWORD *)(v113 + 24) = 626LL;
        WdLogEvent5_WdAssertion(v113);
      }
      v167 = 1;
      if ( v95 )
      {
LABEL_196:
        v139 = WdLogNewEntry5_WdError(v110, v109);
        *(_QWORD *)(v139 + 24) = v171;
        goto LABEL_197;
      }
      if ( (*(_DWORD *)(v108 + 196) & 0x100) != 0 )
      {
        v139 = WdLogNewEntry5_WdError(v110, v109);
        *(_QWORD *)(v139 + 24) = v182[v96];
LABEL_197:
        WdLogEvent5_WdError(v139);
        PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v187);
        goto LABEL_136;
      }
      if ( *(_DWORD *)(v108 + 192) == 3 && v168 != 1 )
      {
        v114 = (_QWORD *)WdLogNewEntry5_WdError(v110, v109);
        v114[3] = v171;
        v114[4] = v182[v96];
        v114[5] = v168;
        goto LABEL_166;
      }
      goto LABEL_186;
    }
    v115 = *v98;
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v97, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v118 = *((_DWORD *)v97 + 6);
        if ( v118 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v116, &EventBlockThread, v117, v118);
      }
      ExAcquirePushLockSharedEx(v97, 0LL);
    }
    v119 = (v115 >> 6) & 0xFFFFFF;
    v120 = v115 >> 30;
    v121 = v171;
    if ( (unsigned int)v119 < *((_DWORD *)v171 + 64) )
    {
      v122 = *((_QWORD *)v171 + 30);
      v123 = *(_DWORD *)(v122 + 16 * v119 + 8);
      if ( v120 == ((v123 >> 5) & 3) && (v123 & 0x2000) == 0 && (v123 & 0x1F) != 0 )
      {
        v124 = v123 & 0x1F;
        if ( (_BYTE)v124 == 11 )
        {
          v126 = *(_QWORD *)(v122 + 16LL * (unsigned int)v119);
          goto LABEL_180;
        }
        v125 = WdLogNewEntry5_WdError(v124, 2LL * (unsigned int)v119);
        *(_QWORD *)(v125 + 24) = 316LL;
        WdLogEvent5_WdError(v125);
      }
    }
    v126 = 0LL;
LABEL_180:
    ExReleasePushLockSharedEx(v97, 0LL);
    KeLeaveCriticalRegion();
    if ( !v126 )
    {
      v114 = (_QWORD *)WdLogNewEntry5_WdError(v110, v109);
      v114[3] = v121;
      v114[4] = v182[v96];
      v114[5] = (unsigned int)v96;
LABEL_166:
      LODWORD(v59) = -1073741811;
      v114[6] = -1073741811LL;
      WdLogEvent5_WdError(v114);
      PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v187);
LABEL_129:
      NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>::~NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>((__int64)&v194);
      NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>::~NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>((__int64)&v197);
      goto LABEL_71;
    }
    v95 = 1;
    if ( v167 )
      goto LABEL_196;
    if ( (*(_DWORD *)(v126 + 72) & 0x10) != 0 )
    {
      v140 = WdLogNewEntry5_WdError(v110, v109);
      *(_QWORD *)(v140 + 24) = v182[v96];
      WdLogEvent5_WdError(v140);
      PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v187);
      NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>::~NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>((__int64)&v194);
      NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>::~NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>((__int64)&v197);
      DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v172);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v209);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v174);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v170);
      PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v178);
      return 3221225506LL;
    }
    v127 = *(_QWORD *)(v126 + 16);
    if ( v127 != *((_QWORD *)*v176 + 2) )
    {
      v139 = WdLogNewEntry5_WdError(v110, v127);
      *(_QWORD *)(v139 + 24) = *((_QWORD *)*v176 + 2);
      *(_QWORD *)(v139 + 32) = *(_QWORD *)(v126 + 16);
      goto LABEL_197;
    }
    v108 = *(_QWORD *)(v126 + 32);
    if ( (unsigned int)(*(_DWORD *)(v108 + 192) - 5) > 1 )
    {
      v128 = WdLogNewEntry5_WdAssertion(v110, v127);
      *(_QWORD *)(v128 + 24) = 706LL;
      WdLogEvent5_WdAssertion(v128);
    }
LABEL_186:
    *(_QWORD *)v99 = v108;
    v96 = (unsigned int)(v96 + 1);
    ++v98;
    v99 += 8;
  }
  while ( (unsigned int)v96 < v168 );
  v129 = v183;
  v130 = v193;
  v131 = 0LL;
  v206 = 0LL;
  v132 = 0LL;
  v208 = 0;
  v133 = *(unsigned int *)(*(_QWORD *)v183 + 192LL);
  if ( (unsigned int)(v133 - 5) > 1 )
  {
    v134 = (__int64 *)&a7;
    if ( (_DWORD)v133 != 3 )
      v134 = 0LL;
    goto LABEL_190;
  }
  if ( a10 )
  {
    if ( v168 <= 4 )
    {
      v141 = v207;
      v206 = v207;
LABEL_206:
      v208 = v168;
      if ( v141 )
      {
        memset(v141, 0, 8LL * v168);
        v132 = v208;
        v131 = v206;
        goto LABEL_208;
      }
LABEL_209:
      NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>((__int64)&v206);
      PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v187);
      NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>::~NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>((__int64)&v194);
      NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>::~NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>((__int64)&v197);
      DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v172);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v209);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v174);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v170);
      PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v178);
      return 3221225495LL;
    }
    if ( 0xFFFFFFFFFFFFFFFFuLL / v168 >= 8 )
    {
      v141 = ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * v168, 0x4B677844u);
      v206 = v141;
      goto LABEL_206;
    }
LABEL_208:
    if ( !v131 )
      goto LABEL_209;
    v142 = 8 * v132;
    v143 = Src;
    if ( (char *)Src + v142 < Src || (unsigned __int64)Src + v142 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v131, v143, v142);
    v134 = (__int64 *)v206;
    Src = v206;
    v129 = v183;
  }
  else
  {
    v134 = (__int64 *)Src;
    if ( !Src )
    {
      v144 = WdLogNewEntry5_WdError(0LL, v133);
      *(_QWORD *)(v144 + 24) = 748LL;
      WdLogEvent5_WdError(v144);
      NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>((__int64)&v206);
      PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v187);
      goto LABEL_136;
    }
  }
LABEL_190:
  DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
    (__int64)v202,
    v129,
    v168);
  if ( v203 )
  {
    if ( v202[0] )
    {
      v137 = WdLogNewEntry5_WdError(v136, v135);
      *(_QWORD *)(v137 + 24) = 781LL;
      WdLogEvent5_WdError(v137);
      goto LABEL_193;
    }
LABEL_225:
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
      (__int64)v202,
      v135);
    NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>((__int64)&v206);
    goto LABEL_226;
  }
  P = 0LL;
  v186 = 0;
  if ( v168 <= 2 )
  {
    v146 = v185;
    P = v185;
    v130 = v168;
  }
  else
  {
    v135 = 0xFFFFFFFFFFFFFFFFuLL % v130;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v130 < 8 )
    {
      v145 = 0LL;
      goto LABEL_223;
    }
    v146 = ExAllocatePoolWithTag((POOL_TYPE)512, 8 * v130, 0x4B677844u);
    P = v146;
  }
  v186 = v168;
  if ( !v146 )
    goto LABEL_224;
  memset(v146, 0, 8 * v130);
  v145 = P;
LABEL_223:
  if ( !v145 )
  {
LABEL_224:
    P = 0LL;
    v186 = 0;
    goto LABEL_225;
  }
  v147 = 0;
  v148 = v168;
  v149 = v145;
  v150 = (_BYTE *)v129 - (_BYTE *)v145;
  v183 = (_BYTE *)v150;
  while ( 2 )
  {
    v151 = *(_QWORD *)((char *)v149 + v150);
    v152 = v176;
    v153 = *((_QWORD *)*v176 + 2);
    v59 = *(_QWORD *)(v153 + 16);
    if ( (*(_DWORD *)(v151 + 196) & 4) != 0 )
    {
      LODWORD(v59) = DXGSYNCOBJECTCA::GetDxgAdapterSyncObject(
                       (DXGSYNCOBJECTCA *)v151,
                       *(struct ADAPTER_RENDER **)(v153 + 16),
                       &v204);
      if ( (int)v59 < 0 )
        goto LABEL_234;
      v152 = v176;
      v148 = v168;
    }
    else if ( v59 && *(_QWORD *)(v151 + 312) != v59 )
    {
      v154 = (_QWORD *)WdLogNewEntry5_WdError(v153, v176);
      v154[3] = v151;
      v154[4] = *(_QWORD *)(v151 + 312);
      v154[5] = v59;
      LODWORD(v59) = -1073741811;
      v154[6] = -1073741811LL;
      WdLogEvent5_WdError(v154);
LABEL_234:
      v156 = (_QWORD *)WdLogNewEntry5_WdError(v153, v155);
      v156[3] = v171;
      v156[4] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)*v176 + 2) + 16LL) + 16LL);
      v156[5] = (int)v59;
      WdLogEvent5_WdError(v156);
      if ( P != v185 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v186 = 0;
LABEL_238:
      DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
        (__int64)v202,
        v157);
      NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>((__int64)&v206);
      PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v187);
      goto LABEL_129;
    }
    if ( (*(_DWORD *)(v151 + 196) & 4) != 0 )
      v158 = *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject(
                           (DXGSYNCOBJECTCA *)v151,
                           *(struct ADAPTER_RENDER **)(*((_QWORD *)*v152 + 2) + 16LL))
             + 4);
    else
      v158 = *(_QWORD *)(v151 + 328);
    *v149 = v158;
    if ( v158 )
    {
      ++v147;
      ++v149;
      if ( v147 < v148 )
      {
        v150 = (signed __int64)v183;
        continue;
      }
      v160 = (__int64)v176;
      v161 = (*(__int64 (__fastcall **)(_QWORD, char *, _QWORD, char *, unsigned int, _QWORD *, struct _D3DDDICB_SIGNALFLAGS::$F4BAD952F0EA0A4BEFA84782466716D0::$DE86B16C121A84B75DA0E945D4B81535, __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)*v176 + 2) + 16LL) + 616LL) + 8LL) + 640LL))(
               v177,
               v191,
               v181,
               v190,
               v148,
               v145,
               a3.0,
               v134);
      v59 = v161;
      if ( v161 < 0 )
      {
        v165 = (_QWORD *)WdLogNewEntry5_WdError(v163, v162);
        v165[3] = v171;
        v165[4] = *v182;
        v165[5] = 0LL;
        v165[6] = v59;
        WdLogEvent5_WdError(v165);
        if ( P != v185 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v186 = 0;
        goto LABEL_238;
      }
      if ( v167 )
      {
        if ( bTracingEnabled )
        {
          v166 = 0LL;
          if ( v134 )
            v166 = *v134;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0qPR0qPR2qx_EtwWriteTransfer(
              v166,
              v162,
              v164,
              a4,
              v160,
              v168,
              (__int64)v145,
              *(_BYTE *)&a3.0,
              v166);
        }
      }
      else if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        McTemplateK0qPR0qqPR3XR3_EtwWriteTransfer(
          v163,
          v162,
          v164,
          a4,
          v160,
          *(_BYTE *)&a3.0,
          v168,
          (__int64)v145,
          (__int64)v134);
      }
      if ( P != v185 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v186 = 0;
      DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
        (__int64)v202,
        v162);
      NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>((__int64)&v206);
      PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v187);
LABEL_133:
      NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>::~NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>((__int64)&v194);
      NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>::~NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>((__int64)&v197);
      DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v172);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v209);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v174);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v170);
      PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v178);
      return 0LL;
    }
    break;
  }
  v159 = WdLogNewEntry5_WdError(v153, v152);
  *(_QWORD *)(v159 + 24) = v151;
  WdLogEvent5_WdError(v159);
  if ( P != v185 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v186 = 0;
LABEL_193:
  DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
    (__int64)v202,
    v138);
  NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>((__int64)&v206);
  PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v187);
LABEL_136:
  NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>::~NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>((__int64)&v194);
  NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>::~NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>((__int64)&v197);
LABEL_74:
  DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v172);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v209);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v174);
LABEL_14:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v170);
  PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v178);
  return -1073741811LL;
}
