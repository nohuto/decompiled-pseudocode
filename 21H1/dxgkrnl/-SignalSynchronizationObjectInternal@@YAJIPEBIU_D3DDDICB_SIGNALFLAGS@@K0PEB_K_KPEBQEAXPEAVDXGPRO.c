/*
 * XREFs of ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C00FC050
 * Callers:
 *     DxgkSignalSynchronizationObjectFromGpu2 @ 0x1C00FABD0 (DxgkSignalSynchronizationObjectFromGpu2.c)
 *     ?DxgkSignalSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU@@H@Z @ 0x1C0147220 (-DxgkSignalSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMG.c)
 *     DxgkSignalSynchronizationObjectInternal @ 0x1C014A580 (DxgkSignalSynchronizationObjectInternal.c)
 *     ?VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C024B1A0 (-VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x1C0250F4C (-IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z.c)
 *     ?Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C0297AE8 (-Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 *     ?InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z @ 0x1C02A67CC (-InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z.c)
 * Callees:
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0007F18 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0008020 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0008348 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ @ 0x1C0008698 (-TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C000A358 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C000A884 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000AA48 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000B19C (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000B200 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000E2C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000EB44 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EB8C (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@XZ @ 0x1C000EBC8 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000EF94 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0024550 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x1C00245CC (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ?GetHeadIterator@?$DXGNODELIST@VDXGCONTEXT@@VDXGHWQUEUE@@@@QEAA?AVITERATOR@1@XZ @ 0x1C0024DEC (-GetHeadIterator@-$DXGNODELIST@VDXGCONTEXT@@VDXGHWQUEUE@@@@QEAA-AVITERATOR@1@XZ.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@PEAPEAVDXGSYNCOBJECT@@IE@Z @ 0x1C0025B0C (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     McTemplateK0qPR0qqPR3XR3_EtwWriteTransfer @ 0x1C0045378 (McTemplateK0qPR0qqPR3XR3_EtwWriteTransfer.c)
 *     ?FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z @ 0x1C0047388 (-FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z.c)
 *     McTemplateK0qPR0qPR2qx_EtwWriteTransfer @ 0x1C0047970 (McTemplateK0qPR0qPR2qx_EtwWriteTransfer.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FD2B0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0208CF4 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGNALFLAGS@@K1PEB_K_KPEBQEAX_N6PEAVDXGDEVICE@@@Z @ 0x1C0247ACC (-VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGN.c)
 *     ?GetRenderHwQueueCount@DXGCONTEXT@@QEAAIXZ @ 0x1C02691DC (-GetRenderHwQueueCount@DXGCONTEXT@@QEAAIXZ.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C028C290 (-GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@.c)
 */

__int64 __fastcall SignalSynchronizationObjectInternal(
        unsigned int a1,
        unsigned int *a2,
        struct _D3DDDICB_SIGNALFLAGS a3,
        unsigned int a4,
        unsigned int *a5,
        unsigned __int64 *a6,
        unsigned __int64 a7,
        void **a8,
        struct DXGPROCESS *a9,
        bool a10,
        char a11)
{
  __int64 v11; // r13
  unsigned __int64 v13; // r15
  struct DXGPROCESS *v14; // rcx
  _BYTE *PoolWithTag; // r14
  struct DXGCONTEXT **v16; // r14
  char v17; // si
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r9
  struct DXGCONTEXT *v21; // rdi
  char v22; // al
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rcx
  bool v26; // zf
  bool v27; // si
  struct _KTHREAD **v28; // r12
  struct _KEVENT *v29; // rsi
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // r8
  struct DXGGLOBAL *Global; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  PERESOURCE *v38; // rdi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rcx
  unsigned int v43; // edi
  DXGCONTEXT *v44; // rcx
  unsigned int v45; // esi
  unsigned int v46; // r12d
  struct DXGCONTEXT **v47; // r8
  __int64 v48; // r9
  _BYTE *v49; // rax
  __int64 v50; // rdx
  _BYTE *v51; // r9
  _BYTE *v52; // rdi
  unsigned int v53; // r10d
  struct DXGCONTEXT **v54; // r8
  __int64 v55; // r9
  struct DXGCONTEXT *v56; // rcx
  _BYTE *v57; // rcx
  void **v58; // r12
  unsigned int v59; // r13d
  DXGPUSHLOCK *v60; // rax
  unsigned int *v61; // rsi
  unsigned int v62; // edi
  __int64 v63; // rax
  unsigned int v64; // edi
  _DWORD *v65; // rdi
  __int64 v66; // rdx
  __int64 v67; // rcx
  unsigned int v68; // edi
  __int64 v69; // rax
  unsigned int v70; // edi
  __int64 v71; // r8
  unsigned int v72; // ecx
  __int64 v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rdi
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rdx
  void **v79; // rax
  _BYTE *v80; // r9
  _BYTE *v81; // rcx
  unsigned int v82; // r8d
  PVOID v83; // r10
  unsigned __int64 v84; // rdx
  _BYTE *v85; // r10
  size_t v86; // r8
  void *v87; // rdx
  unsigned int v89; // r13d
  unsigned __int64 v90; // rdx
  __int64 v91; // rcx
  _BYTE *v92; // rdi
  _QWORD *v93; // rdi
  _QWORD *v94; // rsi
  signed __int64 v95; // r12
  PVOID v96; // rdx
  __int64 v97; // r14
  struct ADAPTER_RENDER *v98; // rcx
  __int64 v99; // rax
  __int64 v100; // r14
  void **v101; // r12
  int v102; // eax
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // rsi
  __int64 v107; // r8
  unsigned int v108; // ecx
  int v109; // eax
  void **v110; // rdi
  __int64 v111; // rcx
  _QWORD *v112; // rsi
  unsigned int *v113; // r12
  __int64 v114; // rax
  struct DXGPROCESS *v115; // rcx
  __int64 v116; // r9
  __int64 *v117; // rdx
  __int64 v118; // rax
  __int64 v119; // rdx
  __int64 v120; // rcx
  unsigned __int8 v121; // si
  __int64 v122; // r8
  __int64 v123; // rax
  _QWORD *v124; // rax
  __int64 v125; // rax
  PVOID v126; // rcx
  __int64 v127; // rdi
  __int64 v128; // rdx
  PVOID v129; // rcx
  __int64 v130; // rdx
  PVOID v131; // rcx
  struct _KEVENT *v132; // rcx
  _QWORD *v133; // rax
  __int64 v134; // rax
  __int64 v135; // rax
  _QWORD *v136; // rax
  __int64 v137; // rax
  _QWORD *v138; // rax
  __int64 v139; // rdx
  __int64 v140; // rax
  __int64 v141; // rdx
  _QWORD *v142; // rax
  unsigned int *v143; // r8
  unsigned int v144; // r11d
  _QWORD *i; // rdx
  void **v146; // r15
  int v147; // eax
  __int64 v148; // rdx
  __int64 v149; // rcx
  __int64 v150; // r8
  __int64 v151; // rdi
  _QWORD *v152; // rax
  __int64 v153; // rdx
  __int64 v154; // rax
  __int64 v155; // rdx
  PVOID v156; // rcx
  __int64 v157; // rax
  __int64 v158; // rax
  __int64 v159; // rax
  _QWORD *v160; // rax
  unsigned int v161; // ebx
  __int64 v162; // rdx
  __int64 v163; // rax
  PVOID v164; // rcx
  __int64 v165; // rax
  PVOID v166; // rcx
  __int64 v167; // rax
  __int64 v168; // rdx
  __int64 v169; // rax
  _QWORD *v170; // rax
  __int64 v171; // rdx
  __int64 v172; // rdx
  __int64 v173; // rax
  __int64 v174; // rdx
  __int64 v175; // rdx
  _QWORD *v176; // rax
  __int64 v177; // rax
  __int64 v178; // rdx
  __int64 v179; // rdx
  _QWORD *v180; // rax
  __int64 v181; // rdx
  __int64 v182; // rdx
  _QWORD *v183; // rax
  __int64 v184; // rdx
  __int64 v185; // rdx
  char v186; // [rsp+70h] [rbp-3B8h]
  PERESOURCE *v187; // [rsp+78h] [rbp-3B0h] BYREF
  char v188; // [rsp+80h] [rbp-3A8h]
  __int64 v189; // [rsp+88h] [rbp-3A0h] BYREF
  int v190; // [rsp+90h] [rbp-398h]
  char v191; // [rsp+98h] [rbp-390h]
  struct DXGPROCESS *v192; // [rsp+A0h] [rbp-388h]
  PVOID P; // [rsp+A8h] [rbp-380h]
  _BYTE v194[16]; // [rsp+B0h] [rbp-378h] BYREF
  int v195; // [rsp+C0h] [rbp-368h]
  PVOID v196; // [rsp+C8h] [rbp-360h]
  _BYTE v197[16]; // [rsp+D0h] [rbp-358h] BYREF
  int v198; // [rsp+E0h] [rbp-348h]
  DXGCONTEXT *v199; // [rsp+E8h] [rbp-340h] BYREF
  char v200; // [rsp+F0h] [rbp-338h]
  unsigned int *v201; // [rsp+F8h] [rbp-330h]
  void **v202; // [rsp+100h] [rbp-328h]
  PVOID v203; // [rsp+110h] [rbp-318h]
  _BYTE v204[64]; // [rsp+118h] [rbp-310h] BYREF
  unsigned int v205; // [rsp+158h] [rbp-2D0h]
  PVOID v206; // [rsp+160h] [rbp-2C8h]
  PVOID v207; // [rsp+170h] [rbp-2B8h]
  _BYTE v208[64]; // [rsp+178h] [rbp-2B0h] BYREF
  unsigned int v209; // [rsp+1B8h] [rbp-270h]
  DXGPUSHLOCK *v210; // [rsp+1C0h] [rbp-268h]
  __int64 v211; // [rsp+1C8h] [rbp-260h]
  unsigned int *v212; // [rsp+1D0h] [rbp-258h]
  PVOID v213; // [rsp+1D8h] [rbp-250h]
  _BYTE v214[16]; // [rsp+1E0h] [rbp-248h] BYREF
  int v215; // [rsp+1F0h] [rbp-238h]
  unsigned int v216; // [rsp+1F8h] [rbp-230h]
  unsigned int v217; // [rsp+1FCh] [rbp-22Ch]
  struct DXGPROCESS *DxgAdapterSyncObject; // [rsp+200h] [rbp-228h]
  void *Src; // [rsp+208h] [rbp-220h]
  _BYTE *v220; // [rsp+210h] [rbp-218h]
  void *v221; // [rsp+218h] [rbp-210h] BYREF
  __int128 v222; // [rsp+220h] [rbp-208h] BYREF
  _QWORD v223[4]; // [rsp+230h] [rbp-1F8h] BYREF
  char v224; // [rsp+250h] [rbp-1D8h]
  struct DXGADAPTERSYNCOBJECT *v225; // [rsp+258h] [rbp-1D0h] BYREF
  _BYTE v226[24]; // [rsp+260h] [rbp-1C8h] BYREF
  PVOID v227; // [rsp+278h] [rbp-1B0h]
  _BYTE v228[32]; // [rsp+280h] [rbp-1A8h] BYREF
  unsigned int v229; // [rsp+2A0h] [rbp-188h]
  char v230[8]; // [rsp+2B0h] [rbp-178h] BYREF
  _BYTE v231[16]; // [rsp+2B8h] [rbp-170h] BYREF
  DXGADAPTER *v232; // [rsp+2C8h] [rbp-160h]
  char v233; // [rsp+2D0h] [rbp-158h]
  __int64 v234; // [rsp+2D8h] [rbp-150h]
  _BYTE v235[16]; // [rsp+2F8h] [rbp-130h] BYREF
  __int64 v236; // [rsp+308h] [rbp-120h]
  __int64 v237; // [rsp+338h] [rbp-F0h]
  char v238; // [rsp+340h] [rbp-E8h]
  _BYTE v239[144]; // [rsp+350h] [rbp-D8h] BYREF

  v11 = a4;
  v217 = a4;
  v212 = a2;
  v13 = a1;
  v201 = a5;
  Src = a6;
  v202 = a8;
  v14 = a9;
  v192 = a9;
  DxgAdapterSyncObject = a9;
  if ( !a4 )
  {
    v123 = WdLogNewEntry5_WdError(a9, a2);
    *(_QWORD *)(v123 + 24) = 337LL;
    WdLogEvent5_WdError(v123);
    return -1073741811LL;
  }
  v196 = 0LL;
  v198 = 0;
  if ( a4 > 2 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a4 < 8 )
    {
      v16 = 0LL;
      v206 = 0LL;
      goto LABEL_6;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * a4, 0x4B677844u);
  }
  else
  {
    PoolWithTag = v197;
  }
  v196 = PoolWithTag;
  v206 = PoolWithTag;
  v198 = v11;
  if ( !PoolWithTag )
    return 3221225495LL;
  memset(PoolWithTag, 0, 8 * v11);
  v16 = (struct DXGCONTEXT **)v196;
  v206 = v196;
  v14 = v192;
LABEL_6:
  if ( !v16 )
    return 3221225495LL;
  v17 = a11;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v199, *v201, v14, v16, a11);
  v21 = *v16;
  if ( !*v16 )
  {
    v124 = (_QWORD *)WdLogNewEntry5_WdError(v19, v18);
    v124[3] = v192;
    v124[4] = *v201;
    v161 = -1073741811;
    v124[5] = -1073741811LL;
    WdLogEvent5_WdError(v124);
    goto LABEL_405;
  }
  LODWORD(v210) = *(_BYTE *)&a3.0 & 2;
  if ( (*(_BYTE *)&a3.0 & 2) != 0 )
  {
    if ( (_DWORD)v13 )
    {
      v125 = WdLogNewEntry5_WdError(v19, v18);
      *(_QWORD *)(v125 + 24) = 367LL;
    }
    else
    {
      if ( *v202 )
        goto LABEL_9;
      v125 = WdLogNewEntry5_WdError(v19, v18);
      *(_QWORD *)(v125 + 24) = 372LL;
    }
    WdLogEvent5_WdError(v125);
    goto LABEL_218;
  }
LABEL_9:
  v22 = *((_BYTE *)v21 + 457);
  v23 = *((_QWORD *)v21 + 2);
  if ( v22 )
  {
    v127 = *(_QWORD *)(*(_QWORD *)(v23 + 16) + 16LL);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v239, (struct DXGADAPTER *const)v127, 0LL);
    if ( v17 || (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v239, 0LL) >= 0 )
    {
      v161 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalSyncObject(
               (DXG_GUEST_VIRTUALGPU_VMBUS *)(v127 + 4208),
               v192,
               v13,
               v212,
               a3,
               v11,
               v201,
               a6,
               a7,
               v202,
               a10,
               0,
               0LL);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v239, v130);
LABEL_231:
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v199);
      v131 = v196;
      if ( v196 == v197 || !v196 )
        return v161;
      goto LABEL_233;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v239, v128);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v199);
    v129 = v196;
    if ( v196 != v197 && v196 )
LABEL_256:
      ExFreePoolWithTag(v129, 0);
    return 3221226166LL;
  }
  v189 = v23;
  v190 = 0;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v230, v23, 0, v20, v17);
  v26 = v17 == 0;
  v27 = a10;
  v28 = (struct _KTHREAD **)v192;
  if ( v26 )
  {
    if ( !a10 && *(_DWORD *)(*((_QWORD *)*v16 + 2) + 432LL) != 2 && (*((_BYTE *)v192 + 347) & 0x20) == 0 )
    {
      if ( !(unsigned int)DXGDEVICEACCESSLOCKEXCLUSIVE::TryAcquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v189) )
      {
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v230);
        if ( v189 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v189);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v199);
        if ( v196 != v197 && v196 )
          ExFreePoolWithTag(v196, 0);
        return 2147483665LL;
      }
      goto LABEL_16;
    }
    v29 = *(struct _KEVENT **)(v23 + 16);
    if ( *(_DWORD *)(v23 + 432) == 2 )
    {
      if ( KeReadStateEvent(v29 + 5) )
        goto LABEL_14;
      v132 = v29 + 5;
    }
    else
    {
      if ( KeReadStateEvent(v29 + 4) )
      {
LABEL_14:
        KeEnterCriticalRegion();
        if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v23 + 136), 0) )
        {
          DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v23 + 16) + 16LL) + 104LL));
          v121 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v23 + 16) + 16LL));
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q_EtwWriteTransfer(v120, &EventBlockThread, v122, 40);
          ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v23 + 136), 1u);
          if ( v121 )
            DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v23 + 16) + 16LL));
          ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v23 + 16) + 16LL) + 104LL, 0LL);
          KeLeaveCriticalRegion();
        }
        v190 = 1;
        v27 = a10;
LABEL_16:
        if ( v238 )
        {
          COREACCESS::AcquireShared((COREACCESS *)v235, 0LL);
          v30 = *(unsigned int *)(v236 + 200);
          if ( (_DWORD)v30 != 1 )
            goto LABEL_251;
        }
        if ( v233 )
        {
          v133 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v30, v24);
          v133[3] = 275LL;
          v133[4] = 4LL;
          v133[5] = v231;
          v133[6] = 0LL;
          v133[7] = 0LL;
          WdLogEvent5_WdCriticalError(v133);
        }
        if ( KeGetCurrentThread() != *((struct _KTHREAD **)v232 + 23) )
        {
          if ( !KeReadStateEvent((PRKEVENT)v232 + 2) )
          {
            if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q_EtwWriteTransfer(v31, &EventBlockThread, v32, 72);
            KeWaitForSingleObject((char *)v232 + 48, Executive, 0, 0, 0LL);
          }
          DXGADAPTER::AcquireCoreResourceShared(v232, 0LL);
        }
        v234 = 0LL;
        v233 = 1;
        v25 = *(unsigned int *)(v237 + 576);
        if ( (_DWORD)v25 == 1 )
          goto LABEL_23;
        COREACCESS::Release((COREACCESS *)v231);
        if ( v238 )
LABEL_251:
          COREACCESS::Release((COREACCESS *)v235);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v230);
        if ( v189 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v189);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v199);
        v129 = v196;
        if ( v196 != v197 && v196 )
          goto LABEL_256;
        return 3221226166LL;
      }
      v132 = v29 + 4;
    }
    KeWaitForSingleObject(v132, Executive, 0, 0, 0LL);
    goto LABEL_14;
  }
LABEL_23:
  Global = DXGGLOBAL::GetGlobal(v25, v24);
  v187 = (PERESOURCE *)Global;
  v188 = 0;
  if ( !Global )
  {
    v134 = WdLogNewEntry5_WdAssertion(v35, v34);
    *(_QWORD *)(v134 + 24) = 2405LL;
    WdLogEvent5_WdAssertion(v134);
    Global = (struct DXGGLOBAL *)v187;
  }
  if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 51)) )
  {
    v135 = WdLogNewEntry5_WdAssertion(v37, v36);
    *(_QWORD *)(v135 + 24) = 2410LL;
    WdLogEvent5_WdAssertion(v135);
  }
  if ( v188 )
  {
    v136 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v37, v36);
    v136[3] = 275LL;
    v136[4] = 4LL;
    v136[5] = &v187;
    v136[6] = 0LL;
    v136[7] = 0LL;
    WdLogEvent5_WdCriticalError(v136);
  }
  v38 = v187;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v38[51], 1u);
  v188 = 1;
  v40 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)*v16 + 2) + 16LL) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v40 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v40 + 168)) )
  {
    v137 = WdLogNewEntry5_WdAssertion(v41, v39);
    *(_QWORD *)(v137 + 24) = 446LL;
    WdLogEvent5_WdAssertion(v137);
  }
  if ( v27 )
  {
    v42 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)*v16 + 2) + 16LL) + 16LL) + 216LL) + 64LL);
    if ( *(_DWORD *)(*(_QWORD *)(v42 + 40) + 28LL) > 0x1052u )
    {
      if ( (a3.Value & 0x7FFFFFF8) != 0 )
      {
        v138 = (_QWORD *)WdLogNewEntry5_WdError(v42, v39);
        v138[3] = *v201;
        v138[4] = (a3.Value >> 3) & 0xFFFFFFF;
        v161 = -1073741811;
        v138[5] = -1073741811LL;
        WdLogEvent5_WdError(v138);
        if ( v188 )
          goto LABEL_266;
        goto LABEL_267;
      }
      if ( (a3.Value & 0x80000000) != 0 )
      {
        v140 = WdLogNewEntry5_WdError(v42, v39);
        *(_QWORD *)(v140 + 24) = 464LL;
        WdLogEvent5_WdError(v140);
        if ( !v188 )
          goto LABEL_263;
        goto LABEL_262;
      }
    }
  }
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v226, v28);
  v43 = 1;
  if ( (unsigned int)v11 > 1 )
  {
    v112 = v16 + 1;
    v113 = v201 + 1;
    do
    {
      v114 = (*v113 >> 6) & 0xFFFFFF;
      v115 = v192;
      if ( (unsigned int)v114 < *((_DWORD *)v192 + 64) )
      {
        v116 = *((_QWORD *)v192 + 30);
        v115 = (struct DXGPROCESS *)*(unsigned int *)(v116 + 16 * v114 + 8);
        if ( *v113 >> 30 == ((*(_DWORD *)(v116 + 16 * v114 + 8) >> 5) & 3)
          && ((unsigned __int16)v115 & 0x2000) == 0
          && ((unsigned __int8)v115 & 0x1F) != 0 )
        {
          v117 = (__int64 *)(v116 + 16LL * (unsigned int)v114);
          v115 = (struct DXGPROCESS *)((unsigned __int8)v115 & 0x1F);
          if ( (_BYTE)v115 == 7 )
          {
            v119 = *v117;
            goto LABEL_185;
          }
          v118 = WdLogNewEntry5_WdError(v115, v117);
          *(_QWORD *)(v118 + 24) = 267LL;
          WdLogEvent5_WdError(v118);
        }
      }
      v119 = 0LL;
LABEL_185:
      *v112 = v119;
      if ( !v119 || (v119 = *(_QWORD *)(v119 + 16), v119 != *((_QWORD *)*v16 + 2)) )
      {
        v142 = (_QWORD *)WdLogNewEntry5_WdError(v115, v119);
        v143 = v201;
        v142[3] = *v201;
        v142[4] = v143[v43];
        v142[5] = v43;
        v161 = -1073741811;
        v142[6] = -1073741811LL;
        WdLogEvent5_WdError(v142);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v226);
        if ( v188 )
LABEL_266:
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v187, v139);
LABEL_267:
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v230);
        if ( v189 )
          goto LABEL_404;
        goto LABEL_405;
      }
      ++v43;
      ++v113;
      ++v112;
    }
    while ( v43 < (unsigned int)v11 );
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v226);
  v45 = 0;
  v216 = 0;
  v46 = 0;
  LODWORD(v201) = 0;
  if ( (_DWORD)v11 )
  {
    v47 = v16;
    v48 = v11;
    do
    {
      v44 = *v47;
      if ( (*((_DWORD *)*v47 + 105) & 0x10) != 0 )
        v46 += DXGCONTEXT::GetRenderHwQueueCount(v44);
      else
        ++v45;
      ++v47;
      --v48;
    }
    while ( v48 );
    LODWORD(v201) = v46;
    v216 = v45;
  }
  v207 = 0LL;
  v209 = 0;
  if ( v45 > 8 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v45 < 8 )
    {
      v50 = 0LL;
      goto LABEL_49;
    }
    v49 = ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * v45, 0x4B677844u);
  }
  else
  {
    v49 = v208;
  }
  v207 = v49;
  v209 = v45;
  v44 = (DXGCONTEXT *)v49;
  if ( v49 && v45 )
    memset(v49, 0, 8LL * v45);
  v50 = (__int64)v207;
LABEL_49:
  v211 = v50;
  v51 = 0LL;
  v203 = 0LL;
  v205 = 0;
  if ( v46 > 8 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v46 < 8 )
    {
      v52 = 0LL;
      v50 = v211;
      goto LABEL_55;
    }
    v51 = ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * v46, 0x4B677844u);
    v203 = v51;
    v50 = v211;
  }
  else
  {
    v51 = v204;
    v203 = v204;
  }
  v205 = v46;
  if ( v51 && v46 )
  {
    memset(v51, 0, 8LL * v46);
    v51 = v203;
    v50 = v211;
  }
  v52 = v51;
LABEL_55:
  v220 = v52;
  if ( !v50 || !v52 )
  {
    if ( v52 != v204 && v52 )
      ExFreePoolWithTag(v51, 0);
    v203 = 0LL;
    v205 = 0;
    if ( v207 != v208 && v207 )
      ExFreePoolWithTag(v207, 0);
    v207 = 0LL;
    v209 = 0;
    if ( v188 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v187, v50);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v230);
    if ( v189 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v189);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v199);
    v156 = v196;
    if ( v196 == v197 || !v196 )
      return 3221225495LL;
LABEL_539:
    ExFreePoolWithTag(v156, 0);
    return 3221225495LL;
  }
  v53 = 0;
  if ( (_DWORD)v11 )
  {
    v54 = v16;
    v55 = v11;
    do
    {
      v56 = *v54;
      if ( (*((_DWORD *)*v54 + 105) & 0x10) != 0 )
      {
        DXGNODELIST<DXGCONTEXT,DXGHWQUEUE>::GetHeadIterator((_QWORD *)v56 + 53, &v222);
        for ( i = (_QWORD *)*((_QWORD *)&v222 + 1); i != (_QWORD *)v222 && i; i = (_QWORD *)*i )
        {
          v44 = (DXGCONTEXT *)v144;
          *(_QWORD *)&v52[8 * v144++] = i[5];
        }
        v222 = 0LL;
        v50 = v211;
      }
      else
      {
        v44 = (DXGCONTEXT *)*((_QWORD *)v56 + 34);
        *(_QWORD *)(v50 + 8LL * v53++) = v44;
      }
      ++v54;
      --v55;
    }
    while ( v55 );
    v51 = v203;
  }
  if ( (_DWORD)v210 )
  {
    v146 = v202;
    v147 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, _QWORD, __int64, struct _D3DDDICB_SIGNALFLAGS::$F4BAD952F0EA0A4BEFA84782466716D0::$DE86B16C121A84B75DA0E945D4B81535, void *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)*v16 + 2) + 16LL) + 616LL) + 8LL) + 832LL))(
             v46,
             v52,
             v45,
             v50,
             a3.0,
             *v202);
    v151 = v147;
    if ( v147 >= 0 )
    {
      if ( bTracingEnabled )
      {
        v221 = *v146;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0qPR0qPR2qx_EtwWriteTransfer(
            v149,
            v148,
            v150,
            v11,
            (__int64)v16,
            1,
            (__int64)&v221,
            *(_BYTE *)&a3.0,
            0);
      }
      if ( v203 != v204 && v203 )
        ExFreePoolWithTag(v203, 0);
      v203 = 0LL;
      v205 = 0;
      if ( v207 != v208 && v207 )
        ExFreePoolWithTag(v207, 0);
      v207 = 0LL;
      v209 = 0;
      if ( v188 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v187, v148);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v230);
      if ( v189 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v189);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v199);
LABEL_152:
      if ( v196 != v197 )
      {
        if ( v196 )
          ExFreePoolWithTag(v196, 0);
      }
      return 0LL;
    }
    else
    {
      v152 = (_QWORD *)WdLogNewEntry5_WdError(v149, v148);
      v152[3] = v192;
      v152[4] = *v146;
      v152[5] = v151;
      WdLogEvent5_WdError(v152);
      if ( v203 != v204 && v203 )
        ExFreePoolWithTag(v203, 0);
      v203 = 0LL;
      v205 = 0;
      if ( v207 != v208 && v207 )
        ExFreePoolWithTag(v207, 0);
      v207 = 0LL;
      v209 = 0;
      if ( v188 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v187, v153);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v230);
      if ( v189 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v189);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v199);
      if ( v196 != v197 && v196 )
        ExFreePoolWithTag(v196, 0);
      return (unsigned int)v151;
    }
  }
  if ( !(_DWORD)v13 )
  {
    v154 = WdLogNewEntry5_WdError(v44, v50);
    *(_QWORD *)(v154 + 24) = 582LL;
    WdLogEvent5_WdError(v154);
    if ( v203 != v204 && v203 )
      ExFreePoolWithTag(v203, 0);
    v203 = 0LL;
    v205 = 0;
    if ( v207 != v208 && v207 )
      ExFreePoolWithTag(v207, 0);
    v207 = 0LL;
    v209 = 0;
    if ( v188 )
      goto LABEL_319;
    goto LABEL_320;
  }
  P = 0LL;
  v195 = 0;
  if ( (unsigned int)v13 <= 2 )
  {
    v57 = v194;
    P = v194;
LABEL_67:
    v195 = v13;
    if ( v57 )
    {
      memset(v57, 0, 8 * v13);
      v51 = v203;
      v57 = P;
    }
    v58 = (void **)v57;
    goto LABEL_70;
  }
  v50 = 0xFFFFFFFFFFFFFFFFuLL % v13;
  if ( 0xFFFFFFFFFFFFFFFFuLL / v13 >= 8 )
  {
    v57 = ExAllocatePoolWithTag(PagedPool, 8 * v13, 0x4B677844u);
    P = v57;
    v51 = v203;
    goto LABEL_67;
  }
  v58 = 0LL;
LABEL_70:
  if ( !v58 )
  {
    P = 0LL;
    v195 = 0;
    if ( v51 != v204 && v51 )
      ExFreePoolWithTag(v51, 0);
    v203 = 0LL;
    v205 = 0;
    if ( v207 != v208 && v207 )
      ExFreePoolWithTag(v207, 0);
    v207 = 0LL;
    v209 = 0;
    if ( v188 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v187, v50);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v230);
    if ( !v189 )
    {
LABEL_333:
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v199);
      v156 = v196;
      if ( v196 == v197 || !v196 )
        return 3221225495LL;
      goto LABEL_539;
    }
LABEL_332:
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v189);
    goto LABEL_333;
  }
  v186 = 0;
  v191 = 0;
  v59 = 0;
  v60 = (struct DXGPROCESS *)((char *)v192 + 208);
  v210 = (struct DXGPROCESS *)((char *)v192 + 208);
  v202 = v58;
  v61 = v212;
  while ( 1 )
  {
    v62 = *v61;
    DXGPUSHLOCK::AcquireShared(v60);
    v63 = (v62 >> 6) & 0xFFFFFF;
    v64 = v62 >> 30;
    if ( (unsigned int)v63 < *((_DWORD *)v192 + 64)
      && (v107 = *((_QWORD *)v192 + 30), v108 = *(_DWORD *)(v107 + 16 * v63 + 8), v64 == ((v108 >> 5) & 3))
      && (v108 & 0x2000) == 0
      && (v108 & 0x1F) == 8 )
    {
      v65 = *(_DWORD **)(v107 + 16LL * (unsigned int)v63);
    }
    else
    {
      v65 = 0LL;
    }
    ExReleasePushLockSharedEx(v210, 0LL);
    KeLeaveCriticalRegion();
    if ( !v65 )
    {
      v68 = *v61;
      DXGPUSHLOCK::AcquireShared(v210);
      v69 = (v68 >> 6) & 0xFFFFFF;
      v70 = v68 >> 30;
      if ( (unsigned int)v69 < *((_DWORD *)v192 + 64) )
      {
        v71 = *((_QWORD *)v192 + 30);
        v72 = *(_DWORD *)(v71 + 16 * v69 + 8);
        if ( v70 == ((v72 >> 5) & 3) && (v72 & 0x2000) == 0 && (v72 & 0x1F) != 0 )
        {
          v73 = v72 & 0x1F;
          if ( (_BYTE)v73 == 11 )
          {
            v75 = *(_QWORD *)(v71 + 16LL * (unsigned int)v69);
            goto LABEL_82;
          }
          v74 = WdLogNewEntry5_WdError(v73, 2LL * (unsigned int)v69);
          *(_QWORD *)(v74 + 24) = 267LL;
          WdLogEvent5_WdError(v74);
        }
      }
      v75 = 0LL;
LABEL_82:
      ExReleasePushLockSharedEx(v210, 0LL);
      KeLeaveCriticalRegion();
      if ( !v75 )
      {
        v170 = (_QWORD *)WdLogNewEntry5_WdError(v77, v76);
        v170[3] = v192;
        v170[4] = v212[v59];
        v170[5] = v59;
        v161 = -1073741811;
        v170[6] = -1073741811LL;
        WdLogEvent5_WdError(v170);
        if ( P != v194 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v195 = 0;
        if ( v203 != v204 && v203 )
          ExFreePoolWithTag(v203, 0);
        v203 = 0LL;
        v205 = 0;
        if ( v207 != v208 && v207 )
          ExFreePoolWithTag(v207, 0);
        v207 = 0LL;
        v209 = 0;
        if ( v188 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v187, v171);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v230);
        if ( v189 )
          goto LABEL_404;
        goto LABEL_405;
      }
      v191 = 1;
      if ( v186 )
      {
        v169 = WdLogNewEntry5_WdError(v77, v76);
        *(_QWORD *)(v169 + 24) = v192;
        WdLogEvent5_WdError(v169);
        if ( P != v194 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v195 = 0;
        v166 = v203;
        if ( v203 != v204 && v203 )
LABEL_365:
          ExFreePoolWithTag(v166, 0);
LABEL_366:
        v203 = 0LL;
        v205 = 0;
        v164 = v207;
        if ( v207 != v208 && v207 )
LABEL_357:
          ExFreePoolWithTag(v164, 0);
LABEL_358:
        v207 = 0LL;
        v209 = 0;
        if ( v188 )
LABEL_319:
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v187, v155);
LABEL_320:
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v230);
        if ( v189 )
LABEL_321:
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v189);
LABEL_218:
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v199);
        v126 = v196;
        if ( v196 != v197 && v196 )
          goto LABEL_220;
        return (unsigned int)-1073741811;
      }
      if ( (*(_DWORD *)(v75 + 72) & 0x10) != 0 )
      {
        v167 = WdLogNewEntry5_WdError(v77, v76);
        *(_QWORD *)(v167 + 24) = v212[v59];
        WdLogEvent5_WdError(v167);
        if ( P != v194 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v195 = 0;
        if ( v203 != v204 && v203 )
          ExFreePoolWithTag(v203, 0);
        v203 = 0LL;
        v205 = 0;
        if ( v207 != v208 && v207 )
          ExFreePoolWithTag(v207, 0);
        v207 = 0LL;
        v209 = 0;
        if ( v188 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v187, v168);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v230);
        if ( v189 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v189);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v199);
        if ( v196 != v197 && v196 )
          ExFreePoolWithTag(v196, 0);
        return 3221225506LL;
      }
      v78 = *(_QWORD *)(v75 + 16);
      if ( v78 != *((_QWORD *)*v16 + 2) )
      {
        v165 = WdLogNewEntry5_WdError(v77, v78);
        *(_QWORD *)(v165 + 24) = *((_QWORD *)*v16 + 2);
        *(_QWORD *)(v165 + 32) = *(_QWORD *)(v75 + 16);
        WdLogEvent5_WdError(v165);
        if ( P != v194 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v195 = 0;
        v166 = v203;
        if ( v203 != v204 && v203 )
          goto LABEL_365;
        goto LABEL_366;
      }
      v65 = *(_DWORD **)(v75 + 32);
      if ( (unsigned int)(v65[48] - 5) > 1 )
      {
        v159 = WdLogNewEntry5_WdAssertion(v77, v78);
        *(_QWORD *)(v159 + 24) = 689LL;
        WdLogEvent5_WdAssertion(v159);
      }
      goto LABEL_88;
    }
    v109 = v65[48];
    if ( v109 == 5 )
    {
      v157 = WdLogNewEntry5_WdAssertion(v67, v66);
      *(_QWORD *)(v157 + 24) = 616LL;
      WdLogEvent5_WdAssertion(v157);
      v109 = v65[48];
    }
    if ( v109 == 6 )
    {
      v158 = WdLogNewEntry5_WdAssertion(v67, v66);
      *(_QWORD *)(v158 + 24) = 617LL;
      WdLogEvent5_WdAssertion(v158);
    }
    v186 = 1;
    if ( v191 )
    {
      v163 = WdLogNewEntry5_WdError(v67, v66);
      *(_QWORD *)(v163 + 24) = v192;
      WdLogEvent5_WdError(v163);
      if ( P != v194 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v195 = 0;
      if ( v203 != v204 && v203 )
        ExFreePoolWithTag(v203, 0);
      v203 = 0LL;
      v205 = 0;
      v164 = v207;
      if ( v207 != v208 && v207 )
        goto LABEL_357;
      goto LABEL_358;
    }
    if ( v65[48] == 3 && (_DWORD)v13 != 1 )
    {
      v160 = (_QWORD *)WdLogNewEntry5_WdError(v67, v66);
      v160[3] = v192;
      v160[4] = v212[v59];
      v160[5] = v13;
      v161 = -1073741811;
      v160[6] = -1073741811LL;
      WdLogEvent5_WdError(v160);
      if ( P != v194 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v195 = 0;
      if ( v203 != v204 && v203 )
        ExFreePoolWithTag(v203, 0);
      v203 = 0LL;
      v205 = 0;
      if ( v207 != v208 && v207 )
        ExFreePoolWithTag(v207, 0);
      v207 = 0LL;
      v209 = 0;
      if ( v188 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v187, v162);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v230);
      if ( !v189 )
        goto LABEL_405;
LABEL_404:
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v189);
LABEL_405:
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v199);
      v131 = v196;
      if ( v196 == v197 || !v196 )
        return v161;
LABEL_233:
      ExFreePoolWithTag(v131, 0);
      return v161;
    }
LABEL_88:
    v79 = v202;
    *v202 = v65;
    ++v59;
    ++v61;
    v202 = v79 + 1;
    if ( v59 >= (unsigned int)v13 )
      break;
    v60 = v210;
  }
  v80 = v203;
  v81 = P;
  v82 = 0;
  v83 = 0LL;
  v227 = 0LL;
  v229 = 0;
  v84 = *((unsigned int *)*v58 + 48);
  if ( (unsigned int)(v84 - 5) > 1 )
  {
    v110 = (void **)&a7;
    v89 = 0;
    if ( (_DWORD)v84 != 3 )
      v110 = 0LL;
    v202 = v110;
  }
  else if ( a10 )
  {
    if ( (unsigned int)v13 <= 4 )
    {
      v85 = v228;
      v227 = v228;
      goto LABEL_93;
    }
    v84 = 0xFFFFFFFFFFFFFFFFuLL % v13;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v13 >= 8 )
    {
      v85 = ExAllocatePoolWithTag((POOL_TYPE)512, 8 * v13, 0x4B677844u);
      v227 = v85;
      v80 = v203;
      v81 = P;
LABEL_93:
      v229 = v13;
      if ( v85 )
      {
        memset(v85, 0, 8 * v13);
        v80 = v203;
        v81 = P;
        v82 = v229;
        v83 = v227;
        goto LABEL_95;
      }
LABEL_101:
      v227 = 0LL;
      v229 = 0;
      if ( v81 != v194 && v81 )
      {
        ExFreePoolWithTag(v81, 0);
        v80 = v203;
      }
      P = 0LL;
      v195 = 0;
      if ( v80 != v204 && v80 )
        ExFreePoolWithTag(v80, 0);
      v203 = 0LL;
      v205 = 0;
      if ( v207 != v208 && v207 )
        ExFreePoolWithTag(v207, 0);
      v207 = 0LL;
      v209 = 0;
      if ( v188 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v187, v84);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v230);
      if ( v189 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v189);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v199);
      if ( v196 != v197 && v196 )
        ExFreePoolWithTag(v196, 0);
      v196 = 0LL;
      v198 = 0;
      return 3221225495LL;
    }
LABEL_95:
    if ( !v83 )
      goto LABEL_101;
    v86 = 8LL * v82;
    v87 = Src;
    if ( (char *)Src + v86 < Src || (unsigned __int64)Src + v86 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v83, v87, v86);
    v202 = (void **)v227;
    Src = v227;
    v89 = 0;
  }
  else
  {
    v202 = (void **)Src;
    v89 = 0;
  }
  DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
    (__int64)v223,
    v58,
    v13);
  if ( v224 )
  {
    if ( !v223[0] )
    {
      DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
        (__int64)v223,
        v90);
      if ( v227 != v228 && v227 )
        ExFreePoolWithTag(v227, 0);
      v227 = 0LL;
      v229 = 0;
      if ( P != v194 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v195 = 0;
      if ( v203 != v204 && v203 )
        ExFreePoolWithTag(v203, 0);
      v203 = 0LL;
      v205 = 0;
      if ( v207 != v208 && v207 )
        ExFreePoolWithTag(v207, 0);
      v207 = 0LL;
      v209 = 0;
      if ( v188 )
        goto LABEL_422;
      goto LABEL_423;
    }
    v173 = WdLogNewEntry5_WdError(v91, v90);
    *(_QWORD *)(v173 + 24) = 758LL;
    WdLogEvent5_WdError(v173);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
      (__int64)v223,
      v174);
    if ( v227 != v228 && v227 )
      ExFreePoolWithTag(v227, 0);
    v227 = 0LL;
    v229 = 0;
    if ( P != v194 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v195 = 0;
    if ( v203 != v204 && v203 )
      ExFreePoolWithTag(v203, 0);
    v203 = 0LL;
    v205 = 0;
    if ( v207 != v208 && v207 )
      ExFreePoolWithTag(v207, 0);
    v207 = 0LL;
    v209 = 0;
    if ( !v188 )
    {
LABEL_263:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v230);
      if ( v189 )
        goto LABEL_321;
      goto LABEL_218;
    }
LABEL_262:
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v187, v141);
    goto LABEL_263;
  }
  v213 = 0LL;
  v215 = 0;
  if ( (unsigned int)v13 <= 2 )
  {
    v92 = v214;
    v213 = v214;
    goto LABEL_123;
  }
  v90 = 0xFFFFFFFFFFFFFFFFuLL % v13;
  if ( 0xFFFFFFFFFFFFFFFFuLL / v13 >= 8 )
  {
    v92 = ExAllocatePoolWithTag((POOL_TYPE)512, 8 * v13, 0x4B677844u);
    v213 = v92;
LABEL_123:
    v215 = v13;
    if ( v92 )
    {
      memset(v92, 0, 8 * v13);
      v93 = v213;
      goto LABEL_125;
    }
    goto LABEL_440;
  }
  v93 = 0LL;
LABEL_125:
  if ( !v93 )
  {
LABEL_440:
    v213 = 0LL;
    v215 = 0;
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
      (__int64)v223,
      v90);
    if ( v227 != v228 && v227 )
      ExFreePoolWithTag(v227, 0);
    v227 = 0LL;
    v229 = 0;
    if ( P != v194 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v195 = 0;
    if ( v203 != v204 && v203 )
      ExFreePoolWithTag(v203, 0);
    v203 = 0LL;
    v205 = 0;
    if ( v207 != v208 && v207 )
      ExFreePoolWithTag(v207, 0);
    v207 = 0LL;
    v209 = 0;
    if ( v188 )
LABEL_422:
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v187, v172);
LABEL_423:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v230);
    if ( !v189 )
      goto LABEL_333;
    goto LABEL_332;
  }
  v94 = v93;
  v95 = (char *)v58 - (char *)v93;
  v96 = v206;
  while ( 1 )
  {
    v97 = *(_QWORD *)((char *)v94 + v95);
    v98 = *(struct ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)v96 + 16LL) + 16LL);
    DxgAdapterSyncObject = v98;
    if ( (*(_DWORD *)(v97 + 196) & 4) == 0 )
    {
      if ( !v98 || *(struct ADAPTER_RENDER **)(v97 + 312) == v98 )
        goto LABEL_130;
      v176 = (_QWORD *)WdLogNewEntry5_WdError(v98, v96);
      v176[3] = v97;
      v176[4] = *(_QWORD *)(v97 + 312);
      v176[5] = DxgAdapterSyncObject;
      v161 = -1073741811;
      v176[6] = -1073741811LL;
      WdLogEvent5_WdError(v176);
LABEL_481:
      v180 = (_QWORD *)WdLogNewEntry5_WdError(v98, v175);
      v180[3] = v192;
      v180[4] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v206 + 16LL) + 16LL) + 16LL);
      v180[5] = (int)v161;
      WdLogEvent5_WdError(v180);
      if ( v213 != v214 && v213 )
        ExFreePoolWithTag(v213, 0);
      v213 = 0LL;
      v215 = 0;
      DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
        (__int64)v223,
        v181);
      if ( v227 != v228 && v227 )
        ExFreePoolWithTag(v227, 0);
      v227 = 0LL;
      v229 = 0;
      if ( P != v194 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v195 = 0;
      if ( v203 != v204 && v203 )
        ExFreePoolWithTag(v203, 0);
      v203 = 0LL;
      v205 = 0;
      if ( v207 != v208 && v207 )
        ExFreePoolWithTag(v207, 0);
      v207 = 0LL;
      v209 = 0;
      if ( v188 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v187, v182);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v230);
      if ( v189 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v189);
      goto LABEL_231;
    }
    DxgAdapterSyncObject = (struct DXGPROCESS *)DXGSYNCOBJECTCA::GetDxgAdapterSyncObject(
                                                  (DXGSYNCOBJECTCA *)v97,
                                                  v98,
                                                  &v225);
    if ( (int)DxgAdapterSyncObject < 0 )
    {
      v161 = (unsigned int)DxgAdapterSyncObject;
      goto LABEL_481;
    }
    v96 = v206;
LABEL_130:
    if ( (*(_DWORD *)(v97 + 196) & 4) != 0 )
    {
      v99 = *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject(
                          (DXGSYNCOBJECTCA *)v97,
                          *(struct ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)v96 + 16LL) + 16LL))
            + 4);
      v96 = v206;
    }
    else
    {
      v99 = *(_QWORD *)(v97 + 328);
    }
    *v94 = v99;
    if ( !v99 )
      break;
    ++v89;
    ++v94;
    if ( v89 >= (unsigned int)v13 )
    {
      v100 = (__int64)v206;
      v101 = v202;
      v102 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, _QWORD, __int64, _DWORD, _QWORD *, struct _D3DDDICB_SIGNALFLAGS::$F4BAD952F0EA0A4BEFA84782466716D0::$DE86B16C121A84B75DA0E945D4B81535, void **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v206 + 16LL) + 16LL) + 616LL) + 8LL) + 640LL))(
               (unsigned int)v201,
               v220,
               v216,
               v211,
               v13,
               v93,
               a3.0,
               v202);
      v106 = v102;
      if ( v102 >= 0 )
      {
        if ( v186 )
        {
          if ( bTracingEnabled )
          {
            v111 = 0LL;
            if ( v101 )
              v111 = (__int64)*v101;
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0qPR0qPR2qx_EtwWriteTransfer(
                v111,
                v103,
                v105,
                v217,
                v100,
                v13,
                (__int64)v93,
                *(_BYTE *)&a3.0,
                v111);
          }
        }
        else if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          McTemplateK0qPR0qqPR3XR3_EtwWriteTransfer(
            v104,
            v103,
            v105,
            v217,
            v100,
            *(_BYTE *)&a3.0,
            v13,
            (__int64)v93,
            (__int64)v101);
        }
        if ( v213 != v214 && v213 )
          ExFreePoolWithTag(v213, 0);
        v213 = 0LL;
        v215 = 0;
        DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
          (__int64)v223,
          v103);
        if ( v227 != v228 && v227 )
          ExFreePoolWithTag(v227, 0);
        v227 = 0LL;
        v229 = 0;
        if ( P != v194 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v195 = 0;
        if ( v203 != v204 && v203 )
          ExFreePoolWithTag(v203, 0);
        v203 = 0LL;
        v205 = 0;
        if ( v207 != v208 && v207 )
          ExFreePoolWithTag(v207, 0);
        v207 = 0LL;
        v209 = 0;
        if ( v188 )
        {
          v188 = 0;
          ExReleaseResourceLite(v187[51]);
          KeLeaveCriticalRegion();
        }
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v230);
        if ( v189 && v190 )
        {
          ExReleaseResourceLite(*(PERESOURCE *)(v189 + 136));
          KeLeaveCriticalRegion();
        }
        if ( v199 && !v200 )
          DXGCONTEXT::ReleaseReference(v199);
        goto LABEL_152;
      }
      v183 = (_QWORD *)WdLogNewEntry5_WdError(v104, v103);
      v183[3] = v192;
      v183[4] = *v212;
      v183[5] = 0LL;
      v183[6] = v106;
      WdLogEvent5_WdError(v183);
      if ( v213 != v214 && v213 )
        ExFreePoolWithTag(v213, 0);
      v213 = 0LL;
      v215 = 0;
      DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
        (__int64)v223,
        v184);
      if ( v227 != v228 && v227 )
        ExFreePoolWithTag(v227, 0);
      v227 = 0LL;
      v229 = 0;
      if ( P != v194 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v195 = 0;
      if ( v203 != v204 && v203 )
        ExFreePoolWithTag(v203, 0);
      v203 = 0LL;
      v205 = 0;
      if ( v207 != v208 && v207 )
        ExFreePoolWithTag(v207, 0);
      v207 = 0LL;
      v209 = 0;
      if ( v188 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v187, v185);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v230);
      if ( v189 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v189);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v199);
      if ( v196 != v197 && v196 )
        ExFreePoolWithTag(v196, 0);
      return (unsigned int)v106;
    }
  }
  v177 = WdLogNewEntry5_WdError(v98, v96);
  *(_QWORD *)(v177 + 24) = v97;
  WdLogEvent5_WdError(v177);
  if ( v213 != v214 && v213 )
    ExFreePoolWithTag(v213, 0);
  v213 = 0LL;
  v215 = 0;
  DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
    (__int64)v223,
    v178);
  if ( v227 != v228 && v227 )
    ExFreePoolWithTag(v227, 0);
  v227 = 0LL;
  v229 = 0;
  if ( P != v194 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v195 = 0;
  if ( v203 != v204 && v203 )
    ExFreePoolWithTag(v203, 0);
  v203 = 0LL;
  v205 = 0;
  if ( v207 != v208 && v207 )
    ExFreePoolWithTag(v207, 0);
  v207 = 0LL;
  v209 = 0;
  if ( v188 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v187, v179);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v230);
  if ( v189 )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v189);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v199);
  v126 = v196;
  if ( v196 == v197 || !v196 )
    return (unsigned int)-1073741811;
LABEL_220:
  ExFreePoolWithTag(v126, 0);
  return (unsigned int)-1073741811;
}
