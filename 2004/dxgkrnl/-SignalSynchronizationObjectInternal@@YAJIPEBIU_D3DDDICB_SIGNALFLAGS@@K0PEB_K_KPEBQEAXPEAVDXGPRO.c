/*
 * XREFs of ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C00FAFA0
 * Callers:
 *     ?VmBusSignalSyncObjectCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00D9F60 (-VmBusSignalSyncObjectCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkSignalSynchronizationObjectFromGpu2 @ 0x1C00F7C50 (DxgkSignalSynchronizationObjectFromGpu2.c)
 *     ?DxgkSignalSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU@@H@Z @ 0x1C0154B20 (-DxgkSignalSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMG.c)
 *     DxgkSignalSynchronizationObjectInternal @ 0x1C0157D30 (DxgkSignalSynchronizationObjectInternal.c)
 *     ?VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C024F490 (-VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x1C025524C (-IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z.c)
 *     ?Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C029BFD8 (-Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 *     ?InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z @ 0x1C02AACB8 (-InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z.c)
 * Callees:
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0001E14 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ?TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ @ 0x1C0001F1C (-TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000217C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C00026B8 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0003EE0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0003FB0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0004050 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x1C0004134 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C0004198 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C00042D8 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C00056F8 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@XZ @ 0x1C0006DA4 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000713C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00072C8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00073A8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009A9C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetHeadIterator@?$DXGNODELIST@VDXGCONTEXT@@VDXGHWQUEUE@@@@QEAA?AVITERATOR@1@XZ @ 0x1C0025528 (-GetHeadIterator@-$DXGNODELIST@VDXGCONTEXT@@VDXGHWQUEUE@@@@QEAA-AVITERATOR@1@XZ.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@PEAPEAVDXGSYNCOBJECT@@IE@Z @ 0x1C0026808 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0027200 (memmove.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     McTemplateK0qPR0qqPR3XR3_EtwWriteTransfer @ 0x1C0046398 (McTemplateK0qPR0qqPR3XR3_EtwWriteTransfer.c)
 *     ?FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z @ 0x1C0048358 (-FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z.c)
 *     ??1?$NonPagedPoolZeroedArray@PEAUVIDSCH_HW_QUEUE@@$07$0ELGHHIEE@@@QEAA@XZ @ 0x1C0048850 (--1-$NonPagedPoolZeroedArray@PEAUVIDSCH_HW_QUEUE@@$07$0ELGHHIEE@@@QEAA@XZ.c)
 *     McTemplateK0qPR0qPR2qx_EtwWriteTransfer @ 0x1C0048980 (McTemplateK0qPR0qPR2qx_EtwWriteTransfer.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FCD20 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C020CF44 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGNALFLAGS@@K1PEB_K_KPEBQEAX_N6PEAVDXGDEVICE@@@Z @ 0x1C024BDC0 (-VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGN.c)
 *     ??1?$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$01@@QEAA@XZ @ 0x1C026C2F0 (--1-$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$01@@QEAA@XZ.c)
 *     ?GetRenderHwQueueCount@DXGCONTEXT@@QEAAIXZ @ 0x1C026D554 (-GetRenderHwQueueCount@DXGCONTEXT@@QEAAIXZ.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0290730 (-GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@.c)
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
  __int64 v121; // r8
  unsigned int v122; // ecx
  __int64 v123; // rcx
  __int64 v124; // rax
  __int64 v125; // rdi
  __int64 v126; // rdx
  __int64 v127; // rax
  const void *v128; // rdi
  unsigned __int64 v129; // rsi
  PVOID v130; // rcx
  __int64 v131; // r8
  int v132; // edx
  __int64 *v133; // r13
  __int64 v134; // rax
  __int64 v135; // rax
  _BYTE *v136; // rcx
  size_t v137; // r8
  void *v138; // rdx
  unsigned __int64 v139; // rdx
  __int64 v140; // rcx
  __int64 v141; // rax
  __int64 v142; // rdx
  _QWORD *v143; // r15
  _BYTE *v144; // r15
  unsigned int v145; // r12d
  unsigned int v146; // r9d
  _QWORD *v147; // r14
  signed __int64 v148; // rdi
  __int64 v149; // rsi
  struct DXGCONTEXT **v150; // rdx
  __int64 v151; // rcx
  _QWORD *v152; // rax
  __int64 v153; // rdx
  _QWORD *v154; // rax
  __int64 v155; // rdx
  __int64 v156; // rax
  __int64 v157; // rax
  __int64 v158; // rsi
  int v159; // eax
  __int64 v160; // rdx
  __int64 v161; // rcx
  __int64 v162; // r8
  _QWORD *v163; // rax
  __int64 v164; // rdx
  __int64 v165; // rcx
  char v166; // [rsp+70h] [rbp-3A8h]
  unsigned int v167; // [rsp+74h] [rbp-3A4h]
  struct DXGPROCESS *v169; // [rsp+80h] [rbp-398h]
  _BYTE v170[16]; // [rsp+88h] [rbp-390h] BYREF
  struct DXGGLOBAL *v171; // [rsp+98h] [rbp-380h] BYREF
  char v172; // [rsp+A0h] [rbp-378h]
  __int64 v173; // [rsp+A8h] [rbp-370h] BYREF
  int v174; // [rsp+B0h] [rbp-368h]
  struct DXGCONTEXT **v175; // [rsp+B8h] [rbp-360h]
  unsigned int v176; // [rsp+C0h] [rbp-358h]
  struct DXGCONTEXT **v177; // [rsp+C8h] [rbp-350h] BYREF
  char v178; // [rsp+D0h] [rbp-348h] BYREF
  int v179; // [rsp+E0h] [rbp-338h]
  unsigned int v180; // [rsp+E8h] [rbp-330h]
  unsigned int *v181; // [rsp+F0h] [rbp-328h]
  _BYTE *v182; // [rsp+F8h] [rbp-320h]
  PVOID v183; // [rsp+100h] [rbp-318h]
  _BYTE v184[16]; // [rsp+108h] [rbp-310h] BYREF
  unsigned int v185; // [rsp+118h] [rbp-300h]
  char *v186; // [rsp+120h] [rbp-2F8h] BYREF
  char v187; // [rsp+128h] [rbp-2F0h] BYREF
  unsigned int v188; // [rsp+138h] [rbp-2E0h]
  char *v189; // [rsp+140h] [rbp-2D8h]
  char *v190; // [rsp+148h] [rbp-2D0h]
  void *Src; // [rsp+150h] [rbp-2C8h]
  unsigned __int64 v192; // [rsp+158h] [rbp-2C0h]
  char *v193; // [rsp+160h] [rbp-2B8h] BYREF
  char v194; // [rsp+168h] [rbp-2B0h] BYREF
  unsigned int v195; // [rsp+1A8h] [rbp-270h]
  char *v196; // [rsp+1B0h] [rbp-268h] BYREF
  char v197; // [rsp+1B8h] [rbp-260h] BYREF
  unsigned int v198; // [rsp+1F8h] [rbp-220h]
  _QWORD v199[2]; // [rsp+200h] [rbp-218h] BYREF
  __int128 v200; // [rsp+210h] [rbp-208h] BYREF
  _QWORD v201[4]; // [rsp+220h] [rbp-1F8h] BYREF
  char v202; // [rsp+240h] [rbp-1D8h]
  struct DXGADAPTERSYNCOBJECT *v203; // [rsp+248h] [rbp-1D0h] BYREF
  _BYTE v204[24]; // [rsp+250h] [rbp-1C8h] BYREF
  PVOID P; // [rsp+268h] [rbp-1B0h]
  _BYTE v206[32]; // [rsp+270h] [rbp-1A8h] BYREF
  unsigned int v207; // [rsp+290h] [rbp-188h]
  char v208[8]; // [rsp+2A0h] [rbp-178h] BYREF
  _BYTE v209[16]; // [rsp+2A8h] [rbp-170h] BYREF
  DXGADAPTER *v210; // [rsp+2B8h] [rbp-160h]
  char v211; // [rsp+2C0h] [rbp-158h]
  __int64 v212; // [rsp+2C8h] [rbp-150h]
  _BYTE v213[16]; // [rsp+2E8h] [rbp-130h] BYREF
  __int64 v214; // [rsp+2F8h] [rbp-120h]
  __int64 v215; // [rsp+328h] [rbp-F0h]
  char v216; // [rsp+330h] [rbp-E8h]
  _BYTE v217[144]; // [rsp+340h] [rbp-D8h] BYREF

  v11 = a4;
  v181 = a2;
  v167 = a1;
  Src = a6;
  v13 = a8;
  v169 = a9;
  v199[1] = a9;
  if ( !a4 )
  {
    v14 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v14 + 24) = 337LL;
    WdLogEvent5_WdError(v14);
    return -1073741811LL;
  }
  v177 = 0LL;
  v179 = 0;
  if ( a4 <= 2 )
  {
    PoolWithTag = (struct DXGCONTEXT **)&v178;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a4 < 8 )
    {
LABEL_230:
      PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v177);
      return 3221225495LL;
    }
    PoolWithTag = (struct DXGCONTEXT **)ExAllocatePoolWithTag(PagedPool, 8LL * a4, 0x4B677844u);
  }
  v177 = PoolWithTag;
  v175 = PoolWithTag;
  v179 = v11;
  if ( !PoolWithTag )
    goto LABEL_230;
  memset(PoolWithTag, 0, 8 * v11);
  v17 = v177;
  v175 = v177;
  v18 = a11;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v170, *a5, v169, v177, a11);
  v22 = *v17;
  if ( !*v17 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdError(v20, v19);
    v23[3] = v169;
    v23[4] = *a5;
    v23[5] = -1073741811LL;
    WdLogEvent5_WdError(v23);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v170);
    PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v177);
    return 3221225485LL;
  }
  if ( (*(_BYTE *)&a3.0 & 2) != 0 )
  {
    if ( v167 )
    {
      v24 = WdLogNewEntry5_WdError(v20, v19);
      *(_QWORD *)(v24 + 24) = 367LL;
LABEL_13:
      WdLogEvent5_WdError(v24);
      goto LABEL_14;
    }
    if ( !*v13 )
    {
      v24 = WdLogNewEntry5_WdError(v20, v19);
      *(_QWORD *)(v24 + 24) = 372LL;
      goto LABEL_13;
    }
  }
  v25 = *((_BYTE *)v22 + 457);
  v26 = *((_QWORD *)v22 + 2);
  if ( v25 )
  {
    v27 = *(_QWORD *)(*(_QWORD *)(v26 + 16) + 16LL);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v217, (struct DXGADAPTER *const)v27, 0LL);
    if ( v18 || (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v217, 0LL) >= 0 )
    {
      v29 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalSyncObject(
              (DXG_GUEST_VIRTUALGPU_VMBUS *)(v27 + 4240),
              v169,
              v167,
              v181,
              a3,
              a4,
              a5,
              a6,
              a7,
              v13,
              a10,
              0,
              0LL);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v217, v30);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v170);
      PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v177);
      return v29;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v217, v28);
LABEL_21:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v170);
    PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v177);
    return 3221226166LL;
  }
  v173 = v26;
  v174 = 0;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v208, v26, 0, v21, v18);
  v33 = a10;
  if ( v18 )
    goto LABEL_58;
  if ( !a10 && *(_DWORD *)(*((_QWORD *)*v175 + 2) + 432LL) != 2 && (*((_BYTE *)v169 + 347) & 0x20) == 0 )
  {
    if ( !(unsigned int)DXGDEVICEACCESSLOCKEXCLUSIVE::TryAcquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v173) )
    {
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v208);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v173);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v170);
      PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v177);
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
  v174 = 1;
LABEL_43:
  if ( v216 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v213, 0LL);
    v34 = *(unsigned int *)(v214 + 200);
    if ( (_DWORD)v34 != 1 )
      goto LABEL_56;
  }
  if ( v211 )
  {
    v40 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v34, v31);
    v40[3] = 275LL;
    v40[4] = 4LL;
    v40[5] = v209;
    v40[6] = 0LL;
    v40[7] = 0LL;
    WdLogEvent5_WdCriticalError(v40);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v210 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v210 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v41, &EventBlockThread, v42, 72);
      KeWaitForSingleObject((char *)v210 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v210, 0LL);
  }
  v212 = 0LL;
  v211 = 1;
  v32 = *(unsigned int *)(v215 + 576);
  if ( (_DWORD)v32 != 1 )
  {
    COREACCESS::Release((COREACCESS *)v209);
    if ( !v216 )
    {
LABEL_57:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v208);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v173);
      goto LABEL_21;
    }
LABEL_56:
    COREACCESS::Release((COREACCESS *)v213);
    goto LABEL_57;
  }
LABEL_58:
  Global = DXGGLOBAL::GetGlobal(v32, v31);
  v171 = Global;
  v172 = 0;
  if ( !Global )
  {
    v46 = WdLogNewEntry5_WdAssertion(v45, v44);
    *(_QWORD *)(v46 + 24) = 2423LL;
    WdLogEvent5_WdAssertion(v46);
    Global = v171;
  }
  if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 65)) )
  {
    v49 = WdLogNewEntry5_WdAssertion(v48, v47);
    *(_QWORD *)(v49 + 24) = 2428LL;
    WdLogEvent5_WdAssertion(v49);
  }
  if ( v172 )
  {
    v50 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v48, v47);
    v50[3] = 275LL;
    v50[4] = 4LL;
    v50[5] = &v171;
    v50[6] = 0LL;
    v50[7] = 0LL;
    WdLogEvent5_WdCriticalError(v50);
  }
  v51 = v171;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(*((PERESOURCE *)v51 + 65), 1u);
  v172 = 1;
  v53 = (__int64)v175;
  v54 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)*v175 + 2) + 16LL) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v54 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v54 + 168)) )
  {
    v56 = WdLogNewEntry5_WdAssertion(v55, v52);
    *(_QWORD *)(v56 + 24) = 446LL;
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
        DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v171);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v208);
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v173);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v170);
        PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v177);
        return (unsigned int)v59;
      }
      if ( (a3.Value & 0x80000000) != 0 )
      {
        v60 = WdLogNewEntry5_WdError(v57, v52);
        *(_QWORD *)(v60 + 24) = 464LL;
        WdLogEvent5_WdError(v60);
        goto LABEL_74;
      }
    }
  }
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v204, (struct _KTHREAD **)v169);
  v61 = 1;
  v62 = a4;
  if ( a4 > 1 )
  {
    v63 = (_QWORD *)(v53 + 8);
    v64 = a5 + 1;
    while ( 1 )
    {
      v65 = (*v64 >> 6) & 0xFFFFFF;
      v66 = v169;
      if ( (unsigned int)v65 >= *((_DWORD *)v169 + 64) )
        goto LABEL_83;
      v67 = *((_QWORD *)v169 + 30);
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
      if ( !v70 || (v70 = *(_QWORD *)(v70 + 16), v70 != *((_QWORD *)*v175 + 2)) )
      {
        v78 = (_QWORD *)WdLogNewEntry5_WdError(v66, v70);
        v78[3] = *a5;
        v78[4] = a5[v61];
        v78[5] = v61;
        LODWORD(v59) = -1073741811;
        v78[6] = -1073741811LL;
        WdLogEvent5_WdError(v78);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v204);
        goto LABEL_71;
      }
      ++v61;
      ++v64;
      ++v63;
      if ( v61 >= v62 )
      {
        v53 = (__int64)v175;
        goto LABEL_88;
      }
    }
    v69 = WdLogNewEntry5_WdError(v66, v68);
    *(_QWORD *)(v69 + 24) = 267LL;
    WdLogEvent5_WdError(v69);
    v62 = a4;
LABEL_83:
    v70 = 0LL;
    goto LABEL_84;
  }
LABEL_88:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v204);
  v72 = 0;
  v180 = 0;
  v73 = 0;
  v176 = 0;
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
    v176 = v73;
    v180 = v72;
  }
  v196 = 0LL;
  v198 = 0;
  if ( v72 <= 8 )
  {
    v79 = &v197;
  }
  else
  {
    v71 = 0xFFFFFFFFFFFFFFFFuLL % v72;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v72 < 8 )
    {
      v79 = 0LL;
      v189 = 0LL;
      goto LABEL_106;
    }
    v79 = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * v72, 0x4B677844u);
  }
  v196 = v79;
  v189 = v79;
  v198 = v72;
  if ( v79 && v72 )
  {
    memset(v79, 0, 8LL * v72);
    v79 = v196;
    v189 = v196;
  }
  v73 = v176;
LABEL_106:
  v193 = 0LL;
  v195 = 0;
  v80 = v73;
  if ( v73 <= 8 )
  {
    v81 = &v194;
  }
  else
  {
    v71 = 0xFFFFFFFFFFFFFFFFuLL % v73;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v73 < 8 )
    {
      v81 = 0LL;
      v190 = 0LL;
      goto LABEL_114;
    }
    v81 = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * v73, 0x4B677844u);
    v73 = v176;
  }
  v193 = v81;
  v190 = v81;
  v195 = v73;
  if ( v81 && v73 )
  {
    memset(v81, 0, 8 * v80);
    v81 = v193;
    v190 = v193;
  }
LABEL_114:
  if ( !v79 || !v81 )
    goto LABEL_229;
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
        DXGNODELIST<DXGCONTEXT,DXGHWQUEUE>::GetHeadIterator((_QWORD *)(v85 + 424), &v200);
        v71 = *((_QWORD *)&v200 + 1);
        v87 = v200;
        while ( v71 != v87 && v71 )
        {
          *(_QWORD *)&v81[8 * v86++] = *(_QWORD *)(v71 + 40);
          v71 = *(_QWORD *)v71;
        }
        v200 = 0LL;
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
            v176,
            v81,
            v180,
            v79,
            a3.0,
            *v13);
    v59 = v88;
    if ( v88 >= 0 )
    {
      if ( bTracingEnabled )
      {
        v199[0] = *v13;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0qPR0qPR2qx_EtwWriteTransfer(v90, v89, v91, a4, v53, 1, (__int64)v199, *(_BYTE *)&a3.0, 0);
      }
      goto LABEL_133;
    }
    v92 = (_QWORD *)WdLogNewEntry5_WdError(v90, v89);
    v92[3] = v169;
    v92[4] = *v13;
    v92[5] = v59;
    WdLogEvent5_WdError(v92);
    goto LABEL_129;
  }
  if ( !v167 )
  {
    v93 = WdLogNewEntry5_WdError(0LL, v71);
    *(_QWORD *)(v93 + 24) = 582LL;
    WdLogEvent5_WdError(v93);
    goto LABEL_136;
  }
  v186 = 0LL;
  v188 = 0;
  v192 = v167;
  if ( v167 <= 2 )
  {
    v94 = &v187;
    v192 = v167;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v167 < 8 )
      goto LABEL_228;
    v94 = (char *)ExAllocatePoolWithTag(PagedPool, 8LL * v167, 0x4B677844u);
  }
  v186 = v94;
  v182 = v94;
  v188 = v167;
  if ( !v94 || (memset(v94, 0, 8LL * v167), (v182 = v186) == 0LL) )
  {
LABEL_228:
    PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v186);
LABEL_229:
    NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>::~NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>((__int64)&v193);
    NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>::~NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>((__int64)&v196);
    DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v171);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v208);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v173);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v170);
    goto LABEL_230;
  }
  v166 = 0;
  v95 = 0;
  v96 = 0LL;
  v97 = (char *)v169 + 208;
  v98 = v181;
  v99 = v186;
  do
  {
    v100 = *v98;
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v97, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v103 = *((_DWORD *)v169 + 58);
        if ( v103 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v101, &EventBlockThread, v102, v103);
      }
      ExAcquirePushLockSharedEx(v97, 0LL);
    }
    v104 = (v100 >> 6) & 0xFFFFFF;
    v105 = v100 >> 30;
    if ( (unsigned int)v104 < *((_DWORD *)v169 + 64)
      && (v106 = *((_QWORD *)v169 + 30), v107 = *(_DWORD *)(v106 + 16 * v104 + 8), v105 == ((v107 >> 5) & 3))
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
        *(_QWORD *)(v112 + 24) = 616LL;
        WdLogEvent5_WdAssertion(v112);
        v111 = *(_DWORD *)(v108 + 192);
      }
      if ( v111 == 6 )
      {
        v113 = WdLogNewEntry5_WdAssertion(v110, v109);
        *(_QWORD *)(v113 + 24) = 617LL;
        WdLogEvent5_WdAssertion(v113);
      }
      v166 = 1;
      if ( v95 )
      {
LABEL_193:
        v134 = WdLogNewEntry5_WdError(v110, v109);
        *(_QWORD *)(v134 + 24) = v169;
        goto LABEL_194;
      }
      if ( (*(_DWORD *)(v108 + 196) & 0x100) != 0 )
      {
        v134 = WdLogNewEntry5_WdError(v110, v109);
        *(_QWORD *)(v134 + 24) = v181[v96];
LABEL_194:
        WdLogEvent5_WdError(v134);
        PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v186);
        goto LABEL_136;
      }
      if ( *(_DWORD *)(v108 + 192) == 3 && v167 != 1 )
      {
        v114 = (_QWORD *)WdLogNewEntry5_WdError(v110, v109);
        v114[3] = v169;
        v114[4] = v181[v96];
        v114[5] = v167;
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
        v118 = *((_DWORD *)v169 + 58);
        if ( v118 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v116, &EventBlockThread, v117, v118);
      }
      ExAcquirePushLockSharedEx(v97, 0LL);
    }
    v119 = (v115 >> 6) & 0xFFFFFF;
    v120 = v115 >> 30;
    if ( (unsigned int)v119 < *((_DWORD *)v169 + 64) )
    {
      v121 = *((_QWORD *)v169 + 30);
      v122 = *(_DWORD *)(v121 + 16 * v119 + 8);
      if ( v120 == ((v122 >> 5) & 3) && (v122 & 0x2000) == 0 && (v122 & 0x1F) != 0 )
      {
        v123 = v122 & 0x1F;
        if ( (_BYTE)v123 == 11 )
        {
          v125 = *(_QWORD *)(v121 + 16LL * (unsigned int)v119);
          goto LABEL_180;
        }
        v124 = WdLogNewEntry5_WdError(v123, 2LL * (unsigned int)v119);
        *(_QWORD *)(v124 + 24) = 267LL;
        WdLogEvent5_WdError(v124);
      }
    }
    v125 = 0LL;
LABEL_180:
    ExReleasePushLockSharedEx(v97, 0LL);
    KeLeaveCriticalRegion();
    if ( !v125 )
    {
      v114 = (_QWORD *)WdLogNewEntry5_WdError(v110, v109);
      v114[3] = v169;
      v114[4] = v181[v96];
      v114[5] = (unsigned int)v96;
LABEL_166:
      LODWORD(v59) = -1073741811;
      v114[6] = -1073741811LL;
      WdLogEvent5_WdError(v114);
      PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v186);
LABEL_129:
      NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>::~NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>((__int64)&v193);
      NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>::~NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>((__int64)&v196);
      goto LABEL_71;
    }
    v95 = 1;
    if ( v166 )
      goto LABEL_193;
    if ( (*(_DWORD *)(v125 + 72) & 0x10) != 0 )
    {
      v135 = WdLogNewEntry5_WdError(v110, v109);
      *(_QWORD *)(v135 + 24) = v181[v96];
      WdLogEvent5_WdError(v135);
      PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v186);
      NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>::~NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>((__int64)&v193);
      NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>::~NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>((__int64)&v196);
      DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v171);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v208);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v173);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v170);
      PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v177);
      return 3221225506LL;
    }
    v126 = *(_QWORD *)(v125 + 16);
    if ( v126 != *((_QWORD *)*v175 + 2) )
    {
      v134 = WdLogNewEntry5_WdError(v110, v126);
      *(_QWORD *)(v134 + 24) = *((_QWORD *)*v175 + 2);
      *(_QWORD *)(v134 + 32) = *(_QWORD *)(v125 + 16);
      goto LABEL_194;
    }
    v108 = *(_QWORD *)(v125 + 32);
    if ( (unsigned int)(*(_DWORD *)(v108 + 192) - 5) > 1 )
    {
      v127 = WdLogNewEntry5_WdAssertion(v110, v126);
      *(_QWORD *)(v127 + 24) = 697LL;
      WdLogEvent5_WdAssertion(v127);
    }
LABEL_186:
    *(_QWORD *)v99 = v108;
    v96 = (unsigned int)(v96 + 1);
    ++v98;
    v99 += 8;
  }
  while ( (unsigned int)v96 < v167 );
  v128 = v182;
  v129 = v192;
  v130 = 0LL;
  P = 0LL;
  v131 = 0LL;
  v207 = 0;
  v132 = *(_DWORD *)(*(_QWORD *)v182 + 192LL);
  if ( (unsigned int)(v132 - 5) > 1 )
  {
    v133 = (__int64 *)&a7;
    if ( v132 != 3 )
      v133 = 0LL;
    goto LABEL_212;
  }
  if ( !a10 )
  {
    v133 = (__int64 *)Src;
    goto LABEL_212;
  }
  if ( v167 <= 4 )
  {
    v136 = v206;
    P = v206;
LABEL_203:
    v207 = v167;
    if ( v136 )
    {
      memset(v136, 0, 8LL * v167);
      v131 = v207;
      v130 = P;
      goto LABEL_205;
    }
LABEL_206:
    P = 0LL;
    v207 = 0;
    PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v186);
    NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>::~NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>((__int64)&v193);
    NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>::~NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>((__int64)&v196);
    DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v171);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v208);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v173);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v170);
    PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v177);
    return 3221225495LL;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v167 >= 8 )
  {
    v136 = ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * v167, 0x4B677844u);
    P = v136;
    goto LABEL_203;
  }
LABEL_205:
  if ( !v130 )
    goto LABEL_206;
  v137 = 8 * v131;
  v138 = Src;
  if ( (char *)Src + v137 < Src || (unsigned __int64)Src + v137 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v130, v138, v137);
  v133 = (__int64 *)P;
  Src = P;
  v128 = v182;
LABEL_212:
  DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
    (__int64)v201,
    v128,
    v167);
  if ( v202 )
  {
    if ( v201[0] )
    {
      v141 = WdLogNewEntry5_WdError(v140, v139);
      *(_QWORD *)(v141 + 24) = 766LL;
      WdLogEvent5_WdError(v141);
      goto LABEL_255;
    }
LABEL_224:
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
      (__int64)v201,
      v139);
    if ( P != v206 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v207 = 0;
    goto LABEL_228;
  }
  v183 = 0LL;
  v185 = 0;
  if ( v167 <= 2 )
  {
    v144 = v184;
    v183 = v184;
    v129 = v167;
  }
  else
  {
    v139 = 0xFFFFFFFFFFFFFFFFuLL % v129;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v129 < 8 )
    {
      v143 = 0LL;
      goto LABEL_222;
    }
    v144 = ExAllocatePoolWithTag((POOL_TYPE)512, 8 * v129, 0x4B677844u);
    v183 = v144;
  }
  v185 = v167;
  if ( !v144 )
    goto LABEL_223;
  memset(v144, 0, 8 * v129);
  v143 = v183;
LABEL_222:
  if ( !v143 )
  {
LABEL_223:
    v183 = 0LL;
    v185 = 0;
    goto LABEL_224;
  }
  v145 = 0;
  v146 = v167;
  v147 = v143;
  v148 = (_BYTE *)v128 - (_BYTE *)v143;
  v182 = (_BYTE *)v148;
  while ( 2 )
  {
    v149 = *(_QWORD *)((char *)v147 + v148);
    v150 = v175;
    v151 = *((_QWORD *)*v175 + 2);
    v59 = *(_QWORD *)(v151 + 16);
    if ( (*(_DWORD *)(v149 + 196) & 4) != 0 )
    {
      LODWORD(v59) = DXGSYNCOBJECTCA::GetDxgAdapterSyncObject(
                       (DXGSYNCOBJECTCA *)v149,
                       *(struct ADAPTER_RENDER **)(v151 + 16),
                       &v203);
      if ( (int)v59 < 0 )
        goto LABEL_236;
      v150 = v175;
      v146 = v167;
    }
    else if ( v59 && *(_QWORD *)(v149 + 312) != v59 )
    {
      v152 = (_QWORD *)WdLogNewEntry5_WdError(v151, v175);
      v152[3] = v149;
      v152[4] = *(_QWORD *)(v149 + 312);
      v152[5] = v59;
      LODWORD(v59) = -1073741811;
      v152[6] = -1073741811LL;
      WdLogEvent5_WdError(v152);
LABEL_236:
      v154 = (_QWORD *)WdLogNewEntry5_WdError(v151, v153);
      v154[3] = v169;
      v154[4] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)*v175 + 2) + 16LL) + 16LL);
      v154[5] = (int)v59;
      WdLogEvent5_WdError(v154);
      if ( v183 != v184 && v183 )
        ExFreePoolWithTag(v183, 0);
      v183 = 0LL;
      v185 = 0;
      DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
        (__int64)v201,
        v155);
      if ( P != v206 && P )
        ExFreePoolWithTag(P, 0);
LABEL_242:
      P = 0LL;
      v207 = 0;
      PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v186);
      goto LABEL_129;
    }
    if ( (*(_DWORD *)(v149 + 196) & 4) != 0 )
      v156 = *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject(
                           (DXGSYNCOBJECTCA *)v149,
                           *(struct ADAPTER_RENDER **)(*((_QWORD *)*v150 + 2) + 16LL))
             + 4);
    else
      v156 = *(_QWORD *)(v149 + 328);
    *v147 = v156;
    if ( v156 )
    {
      ++v145;
      ++v147;
      if ( v145 < v146 )
      {
        v148 = (signed __int64)v182;
        continue;
      }
      v158 = (__int64)v175;
      v159 = (*(__int64 (__fastcall **)(_QWORD, char *, _QWORD, char *, unsigned int, _QWORD *, struct _D3DDDICB_SIGNALFLAGS::$F4BAD952F0EA0A4BEFA84782466716D0::$DE86B16C121A84B75DA0E945D4B81535, __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)*v175 + 2) + 16LL) + 616LL) + 8LL) + 640LL))(
               v176,
               v190,
               v180,
               v189,
               v146,
               v143,
               a3.0,
               v133);
      v59 = v159;
      if ( v159 < 0 )
      {
        v163 = (_QWORD *)WdLogNewEntry5_WdError(v161, v160);
        v163[3] = v169;
        v163[4] = *v181;
        v163[5] = 0LL;
        v163[6] = v59;
        WdLogEvent5_WdError(v163);
        if ( v183 != v184 && v183 )
          ExFreePoolWithTag(v183, 0);
        v183 = 0LL;
        v185 = 0;
        DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
          (__int64)v201,
          v164);
        if ( P != v206 && P )
          ExFreePoolWithTag(P, 0);
        goto LABEL_242;
      }
      if ( v166 )
      {
        if ( bTracingEnabled )
        {
          v165 = 0LL;
          if ( v133 )
            v165 = *v133;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0qPR0qPR2qx_EtwWriteTransfer(
              v165,
              v160,
              v162,
              a4,
              v158,
              v167,
              (__int64)v143,
              *(_BYTE *)&a3.0,
              v165);
        }
      }
      else if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        McTemplateK0qPR0qqPR3XR3_EtwWriteTransfer(
          v161,
          v160,
          v162,
          a4,
          v158,
          *(_BYTE *)&a3.0,
          v167,
          (__int64)v143,
          (__int64)v133);
      }
      if ( v183 != v184 && v183 )
        ExFreePoolWithTag(v183, 0);
      v183 = 0LL;
      v185 = 0;
      DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
        (__int64)v201,
        v160);
      if ( P != v206 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v207 = 0;
      PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v186);
LABEL_133:
      NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>::~NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>((__int64)&v193);
      NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>::~NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>((__int64)&v196);
      DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v171);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v208);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v173);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v170);
      PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v177);
      return 0LL;
    }
    break;
  }
  v157 = WdLogNewEntry5_WdError(v151, v150);
  *(_QWORD *)(v157 + 24) = v149;
  WdLogEvent5_WdError(v157);
  if ( v183 != v184 && v183 )
    ExFreePoolWithTag(v183, 0);
  v183 = 0LL;
  v185 = 0;
LABEL_255:
  DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
    (__int64)v201,
    v142);
  if ( P != v206 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v207 = 0;
  PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v186);
LABEL_136:
  NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>::~NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>((__int64)&v193);
  NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>::~NonPagedPoolZeroedArray<VIDSCH_HW_QUEUE *,8,1265072196>((__int64)&v196);
LABEL_74:
  DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v171);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v208);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v173);
LABEL_14:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v170);
  PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>(&v177);
  return -1073741811LL;
}
