/*
 * XREFs of ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N66@Z @ 0x1C017EED0
 * Callers:
 *     ?DxgkSignalSynchronizationObjectFromGpu2Impl@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU2@@PEAX@Z @ 0x1C017B090 (-DxgkSignalSynchronizationObjectFromGpu2Impl@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU2.c)
 *     ?DxgkSignalSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU@@H_N@Z @ 0x1C0182B30 (-DxgkSignalSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMG.c)
 *     DxgkSignalSynchronizationObjectInternal @ 0x1C01D1400 (DxgkSignalSynchronizationObjectInternal.c)
 *     ?InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z @ 0x1C022583C (-InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z.c)
 *     ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x1C02E5B80 (-IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z.c)
 *     ?Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C0323928 (-Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 *     ?VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0381650 (-VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C0001960 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IEE@Z @ 0x1C0001DB4 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x1C0008FF0 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0009178 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ @ 0x1C00091E8 (-TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00096EC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009A8C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000BB70 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C000BC60 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000E694 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000FB18 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C002B26C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x1C002B450 (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ?GetHeadIterator@?$DXGNODELIST@VDXGCONTEXT@@VDXGHWQUEUE@@@@QEAA?AVITERATOR@1@XZ @ 0x1C002BF64 (-GetHeadIterator@-$DXGNODELIST@VDXGCONTEXT@@VDXGHWQUEUE@@@@QEAA-AVITERATOR@1@XZ.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@PEAPEAVDXGSYNCOBJECT@@IEE@Z @ 0x1C002C578 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@XZ @ 0x1C002C640 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z @ 0x1C004B9B0 (-AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z.c)
 *     ?ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z @ 0x1C004BA80 (-ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z.c)
 *     McTemplateK0qPR0qqPR3XR3_EtwWriteTransfer @ 0x1C00542D0 (McTemplateK0qPR0qqPR3XR3_EtwWriteTransfer.c)
 *     ?FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z @ 0x1C0059A28 (-FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z.c)
 *     McTemplateK0qPR0qPR2qx_EtwWriteTransfer @ 0x1C005A058 (McTemplateK0qPR0qPR2qx_EtwWriteTransfer.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C016E850 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C016ED94 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C017EB60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?GetRenderHwQueueCount@DXGCONTEXT@@QEAAIXZ @ 0x1C030ED78 (-GetRenderHwQueueCount@DXGCONTEXT@@QEAAIXZ.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C033FC10 (-GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@.c)
 *     ?VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGNALFLAGS@@K1PEB_K_KPEBQEAX_N6PEAVDXGDEVICE@@@Z @ 0x1C037CE14 (-VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGN.c)
 */

__int64 __fastcall SignalSynchronizationObjectInternal(
        unsigned int a1,
        unsigned int *a2,
        struct _D3DDDICB_SIGNALFLAGS a3,
        __int64 a4,
        unsigned int *a5,
        unsigned __int64 *a6,
        unsigned __int64 a7,
        void **a8,
        struct DXGPROCESS *a9,
        bool a10,
        bool a11,
        bool a12)
{
  unsigned int v12; // r12d
  unsigned __int64 Value; // rbx
  void **v14; // rsi
  struct DXGPROCESS *v15; // r14
  _BYTE *Pool2; // rax
  char v18; // r12
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // r14
  __int64 v22; // rsi
  unsigned int v23; // ebx
  struct _KEVENT *v24; // rsi
  struct _KEVENT *v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // r8
  unsigned int v28; // esi
  unsigned int v29; // r11d
  __int64 v30; // r10
  _QWORD *v31; // r15
  const unsigned int *v32; // r12
  __int64 v33; // rax
  __int64 v34; // r9
  unsigned int v35; // ecx
  __int64 v36; // rdx
  __int64 v37; // r9
  bool v38; // zf
  bool v39; // zf
  bool v40; // zf
  __int64 v41; // rcx
  __int64 v42; // r8
  struct DXGGLOBAL *Global; // rax
  PERESOURCE *v44; // rsi
  _QWORD *v45; // r9
  __int64 v46; // r14
  __int64 v47; // rcx
  __int64 v48; // rbx
  unsigned int v49; // r15d
  unsigned int v50; // r12d
  unsigned int v51; // r13d
  unsigned __int64 v52; // rsi
  DXGCONTEXT **v53; // r8
  _QWORD *v54; // r15
  _BYTE *v55; // rcx
  _BYTE *v56; // r12
  int v57; // r11d
  __int64 v58; // r10
  __int64 v59; // rdx
  int v60; // r8d
  _QWORD *v61; // rdx
  __int64 *v62; // r15
  void *v63; // r14
  struct DXG_SIGNAL_GUEST_CPU_EVENT *v64; // rsi
  struct DXGPROCESS *v65; // r13
  __int64 v66; // rax
  bool v67; // zf
  int v68; // eax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r14
  unsigned int v73; // r13d
  _BYTE *v74; // r8
  unsigned __int64 v75; // r14
  void *v76; // rsi
  char v77; // r15
  unsigned int v78; // r12d
  char *v79; // r14
  unsigned int *v80; // r13
  unsigned int v81; // esi
  __int64 v82; // rcx
  __int64 v83; // r8
  int v84; // r9d
  __int64 v85; // rax
  unsigned int v86; // esi
  __int64 v87; // r8
  unsigned int v88; // ecx
  _DWORD *v89; // rsi
  int v90; // eax
  unsigned int *v91; // rbx
  __int64 v92; // r14
  struct DXGPROCESS *v93; // r15
  unsigned int v94; // esi
  __int64 v95; // rcx
  __int64 v96; // r8
  int v97; // r9d
  __int64 v98; // rax
  unsigned int v99; // esi
  struct DXGPROCESS *v100; // r15
  __int64 v101; // r8
  unsigned int v102; // ecx
  __int64 v103; // rsi
  __int64 v104; // r8
  __int64 v105; // rdx
  void **v106; // rax
  PVOID v107; // r9
  unsigned int v108; // r10d
  int v109; // edx
  void **v110; // rsi
  __int64 v111; // r9
  unsigned int *v112; // rbx
  struct DXGPROCESS *v113; // rbx
  unsigned int *v114; // rbx
  unsigned int *v115; // r14
  void **v116; // r8
  void *v117; // rdx
  _QWORD *v118; // r14
  unsigned int v119; // r13d
  unsigned int v120; // r9d
  _QWORD *v121; // r12
  signed __int64 v122; // rsi
  __int64 v123; // r14
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r15
  __int64 v127; // r8
  int DxgAdapterSyncObject; // esi
  __int64 v129; // r15
  struct DXGPROCESS *v130; // r14
  __int64 v131; // rax
  __int64 v132; // r12
  void **v133; // rsi
  int v134; // eax
  __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // r8
  __int64 v138; // r15
  unsigned int *v139; // r14
  struct DXGPROCESS *v140; // rsi
  __int64 v141; // rcx
  char v142; // [rsp+70h] [rbp-3D8h]
  char v143; // [rsp+70h] [rbp-3D8h]
  __int64 v144; // [rsp+78h] [rbp-3D0h] BYREF
  int v145; // [rsp+80h] [rbp-3C8h]
  PERESOURCE *v146; // [rsp+88h] [rbp-3C0h] BYREF
  char v147; // [rsp+90h] [rbp-3B8h]
  unsigned int v148; // [rsp+98h] [rbp-3B0h]
  PVOID P; // [rsp+A0h] [rbp-3A8h]
  _BYTE v150[16]; // [rsp+A8h] [rbp-3A0h] BYREF
  unsigned int v151; // [rsp+B8h] [rbp-390h]
  PVOID v152; // [rsp+C0h] [rbp-388h]
  _BYTE v153[16]; // [rsp+C8h] [rbp-380h] BYREF
  unsigned int v154; // [rsp+D8h] [rbp-370h]
  DXGCONTEXT *v155; // [rsp+E0h] [rbp-368h] BYREF
  char v156; // [rsp+E8h] [rbp-360h]
  unsigned int v157; // [rsp+F0h] [rbp-358h]
  _QWORD *v158; // [rsp+F8h] [rbp-350h]
  struct DXGPROCESS *v159; // [rsp+100h] [rbp-348h]
  void **v160; // [rsp+108h] [rbp-340h]
  PVOID v161; // [rsp+110h] [rbp-338h]
  _BYTE v162[64]; // [rsp+118h] [rbp-330h] BYREF
  unsigned int v163; // [rsp+158h] [rbp-2F0h]
  unsigned int *v164; // [rsp+160h] [rbp-2E8h] BYREF
  PVOID v165; // [rsp+170h] [rbp-2D8h]
  _BYTE v166[64]; // [rsp+178h] [rbp-2D0h] BYREF
  unsigned int v167; // [rsp+1B8h] [rbp-290h]
  PVOID v168; // [rsp+1C0h] [rbp-288h]
  unsigned int v169; // [rsp+1C8h] [rbp-280h]
  unsigned int v170; // [rsp+1CCh] [rbp-27Ch]
  __int64 v171; // [rsp+1D0h] [rbp-278h]
  unsigned __int64 v172; // [rsp+1D8h] [rbp-270h]
  PVOID v173; // [rsp+1E0h] [rbp-268h]
  _BYTE v174[16]; // [rsp+1E8h] [rbp-260h] BYREF
  unsigned int v175; // [rsp+1F8h] [rbp-250h]
  _QWORD v176[6]; // [rsp+200h] [rbp-248h] BYREF
  char v177; // [rsp+230h] [rbp-218h]
  void *Src; // [rsp+238h] [rbp-210h]
  _BYTE *v179; // [rsp+240h] [rbp-208h]
  struct DXGADAPTERSYNCOBJECT *v180; // [rsp+248h] [rbp-200h] BYREF
  __int128 v181; // [rsp+250h] [rbp-1F8h] BYREF
  _QWORD v182[4]; // [rsp+260h] [rbp-1E8h] BYREF
  char v183; // [rsp+280h] [rbp-1C8h]
  _BYTE v184[24]; // [rsp+288h] [rbp-1C0h] BYREF
  PVOID v185; // [rsp+2A0h] [rbp-1A8h]
  _BYTE v186[32]; // [rsp+2A8h] [rbp-1A0h] BYREF
  unsigned int v187; // [rsp+2C8h] [rbp-180h]
  char v188[8]; // [rsp+2D0h] [rbp-178h] BYREF
  _BYTE v189[16]; // [rsp+2D8h] [rbp-170h] BYREF
  DXGADAPTER *v190; // [rsp+2E8h] [rbp-160h]
  char v191; // [rsp+2F0h] [rbp-158h]
  __int64 v192; // [rsp+2F8h] [rbp-150h]
  _BYTE v193[16]; // [rsp+318h] [rbp-130h] BYREF
  __int64 v194; // [rsp+328h] [rbp-120h]
  __int64 v195; // [rsp+358h] [rbp-F0h]
  char v196; // [rsp+360h] [rbp-E8h]
  _BYTE v197[144]; // [rsp+370h] [rbp-D8h] BYREF

  v12 = a4;
  v157 = a4;
  Value = a3.Value;
  v164 = a2;
  v148 = a1;
  Src = a6;
  v14 = a8;
  v160 = a8;
  v15 = a9;
  v159 = a9;
  v180 = a9;
  if ( !(_DWORD)a4 )
  {
    WdLogSingleEntry1(2LL, 336LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"No contexts were provided to signal.",
      336LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return -1073741811LL;
  }
  P = 0LL;
  v151 = 0;
  v172 = (unsigned int)a4;
  if ( (unsigned int)a4 <= 2 )
  {
    P = v150;
    memset(v150, 0, 8LL * (unsigned int)a4);
    Pool2 = v150;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)a4 < 8 )
    {
      Pool2 = 0LL;
      goto LABEL_9;
    }
    Pool2 = (_BYTE *)ExAllocatePool2(256LL, 8LL * (unsigned int)a4, 1265072196LL, a4);
    P = Pool2;
  }
  v151 = v12;
LABEL_9:
  v158 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  v18 = a11;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v155, *a5, v15, (struct DXGCONTEXT **)Pool2, a11, 1);
  v20 = *v158;
  if ( !*v158 )
  {
    WdLogSingleEntry3(2LL, v15, *a5, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x failed with invalid hContext 0x%I64x returning 0x%I64x",
      (__int64)v15,
      *a5,
      -1073741811LL,
      0LL,
      0LL);
LABEL_294:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v155);
    if ( P != v150 && P )
    {
      ExFreePoolWithTag(P, 0);
      return 3221225485LL;
    }
    return 3221225485LL;
  }
  LODWORD(v168) = Value & 2;
  if ( (Value & 2) != 0 )
  {
    if ( v148 )
    {
      WdLogSingleEntry1(2LL, 366LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"ObjectCount must be zero when Flags.EnqueueCpuEvent is set.",
        366LL,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_435;
    }
    if ( !*v14 )
    {
      WdLogSingleEntry1(2LL, 371LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"CpuEventHandle should not be NULL when Flags.EnqueueCpuEvent is set.",
        371LL,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_435;
    }
  }
  v21 = *(_QWORD *)(v20 + 16);
  if ( *(_BYTE *)(v20 + 441) )
  {
    v22 = *(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v197, (struct DXGADAPTER *const)v22, 0LL);
    if ( v18 || (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v197, 0LL) >= 0 )
    {
      v23 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalSyncObject(
              (DXG_GUEST_VIRTUALGPU_VMBUS *)(v22 + 4344),
              v159,
              v148,
              v164,
              (struct _D3DDDICB_SIGNALFLAGS)Value,
              v157,
              a5,
              a6,
              a7,
              v160,
              a10,
              0,
              0LL);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v197);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v155);
      if ( P != v150 && P )
        ExFreePoolWithTag(P, 0);
      return v23;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v197);
    goto LABEL_85;
  }
  v144 = *(_QWORD *)(v20 + 16);
  v145 = 0;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v188, v21, 0, v19, v18);
  v142 = 0;
  if ( v18 )
    goto LABEL_49;
  if ( !a10 && *(_DWORD *)(*(_QWORD *)(*v158 + 16LL) + 432LL) != 2 && a12 )
  {
    if ( !(unsigned int)DXGDEVICEACCESSLOCKEXCLUSIVE::TryAcquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v144) )
    {
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v188);
      if ( v144 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v144);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v155);
      if ( P != v150 && P )
        ExFreePoolWithTag(P, 0);
      return 2147483665LL;
    }
    v21 = v144;
    goto LABEL_49;
  }
  v24 = *(struct _KEVENT **)(v21 + 16);
  if ( *(_DWORD *)(v21 + 432) == 2 )
  {
    if ( !KeReadStateEvent(v24 + 5) )
    {
      v25 = v24 + 5;
LABEL_42:
      KeWaitForSingleObject(v25, Executive, 0, 0, 0LL);
    }
  }
  else if ( !KeReadStateEvent(v24 + 4) )
  {
    v25 = v24 + 4;
    goto LABEL_42;
  }
  KeEnterCriticalRegion();
  if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v21 + 136), 0) )
  {
    DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v21 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0q_EtwWriteTransfer(v26, (const EVENT_DESCRIPTOR *)"g", v27, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v21 + 136), 1u);
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v21 + 16) + 16LL));
  }
  v145 = 1;
  v142 = 1;
LABEL_49:
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v184, v159);
  v28 = 1;
  v29 = v157;
  if ( v157 <= 1 )
    goto LABEL_62;
  v30 = (__int64)v158;
  v31 = v158 + 1;
  v32 = a5 + 1;
  do
  {
    v33 = (*v32 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v33 < *((_DWORD *)v159 + 74) )
    {
      v34 = *((_QWORD *)v159 + 35);
      v35 = *(_DWORD *)(v34 + 16 * v33 + 8);
      if ( *v32 >> 30 == ((v35 >> 5) & 3) && (v35 & 0x2000) == 0 && (v35 & 0x1F) != 0 )
      {
        if ( (v35 & 0x1F) == 7 )
        {
          v36 = *(_QWORD *)(v34 + 16LL * (unsigned int)v33);
          goto LABEL_58;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        v30 = (__int64)v158;
        v29 = v157;
      }
    }
    v36 = 0LL;
LABEL_58:
    *v31 = v36;
    if ( !v36 || *(_QWORD *)(v36 + 16) != *(_QWORD *)(*(_QWORD *)v30 + 16LL) )
    {
      WdLogSingleEntry4(2LL, *a5, a5[v28], v28, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"hContext 0x%I64x failed to signal with invalid broadcast context 0x%I64x at index %I64d returning 0x%I64x",
        *a5,
        a5[v28],
        v28,
        -1073741811LL,
        0LL);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v184);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v188);
      v39 = v21 == 0;
      goto LABEL_292;
    }
    ++v28;
    ++v32;
    ++v31;
  }
  while ( v28 < v29 );
  v18 = a11;
LABEL_62:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v184);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v176,
    P,
    v151,
    v37,
    v142);
  if ( v177 )
  {
    if ( v176[0] )
    {
      WdLogSingleEntry1(3LL, 472LL);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v176);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v188);
      v38 = v21 == 0;
LABEL_433:
      if ( !v38 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v144);
LABEL_435:
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v155);
      if ( P != v150 && P )
        ExFreePoolWithTag(P, 0);
      return 3221225485LL;
    }
    WdLogSingleEntry1(3LL, 467LL);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v176);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v188);
    v40 = v21 == 0;
LABEL_481:
    if ( !v40 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v144);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v155);
    if ( P != v150 && P )
      ExFreePoolWithTag(P, 0);
    return 3221225495LL;
  }
  if ( !v18 )
  {
    if ( v196 )
    {
      COREACCESS::AcquireShared((COREACCESS *)v193, 0LL);
      if ( *(_DWORD *)(v194 + 200) != 1 )
      {
LABEL_82:
        COREACCESS::Release((COREACCESS *)v193);
        goto LABEL_83;
      }
    }
    if ( v191 )
      WdLogSingleEntry5(0LL, 275LL, 4LL, v189, 0LL, 0LL);
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v190 + 23) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v190 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v41, (const EVENT_DESCRIPTOR *)"g", v42, 72);
        KeWaitForSingleObject((char *)v190 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v190, 0LL);
    }
    v192 = 0LL;
    v191 = 1;
    if ( *(_DWORD *)(v195 + 576) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v189);
      if ( v196 )
        goto LABEL_82;
LABEL_83:
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v176);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v188);
      if ( v144 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v144);
LABEL_85:
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v155);
      if ( P != v150 && P )
        ExFreePoolWithTag(P, 0);
      return 3221226166LL;
    }
  }
  Global = DXGGLOBAL_GetGlobal();
  v146 = (PERESOURCE *)Global;
  v147 = 0;
  if ( !Global )
  {
    WdLogSingleEntry1(1LL, 2725LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pGlobal != NULL", 2725LL, 0LL, 0LL, 0LL, 0LL);
    Global = (struct DXGGLOBAL *)v146;
  }
  if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 79)) )
  {
    WdLogSingleEntry1(1LL, 2730LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!m_pGlobal->IsSyncObjectLockSharedOwner() || bAllowRecursive",
      2730LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( v147 )
    WdLogSingleEntry5(0LL, 275LL, 4LL, &v146, 0LL, 0LL);
  v44 = v146;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v44[79], 1u);
  v147 = 1;
  v46 = (__int64)v158;
  v47 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v158 + 16LL) + 16LL) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v47 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v47 + 168)) )
  {
    WdLogSingleEntry1(1LL, 493LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pBroadcastDxgContext[0]->GetRenderCore()->IsCoreResourceSharedOwner()",
      493LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( a10
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v46 + 16LL) + 16LL)
                                                                 + 16LL)
                                                     + 216LL)
                                         + 64LL)
                             + 40LL)
                 + 28LL) > 0x1052u )
  {
    if ( (Value & 0x7FFFFFF8) != 0 )
    {
      v48 = (Value >> 3) & 0xFFFFFFF;
      WdLogSingleEntry3(2LL, *a5, (unsigned int)v48, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"hContext 0x%I64x SignalSyncObject.Flags.Reserved is not Zero, but %I64d, returning 0x%I64x",
        *a5,
        (unsigned int)v48,
        -1073741811LL,
        0LL,
        0LL);
LABEL_289:
      if ( v147 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v146);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v176);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v188);
      v39 = v144 == 0;
LABEL_292:
      if ( !v39 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v144);
      goto LABEL_294;
    }
    if ( (Value & 0x80000000) != 0LL )
    {
      WdLogSingleEntry1(2LL, 511LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"SignalSynchronizationObject is called with the DXGK_SIGNAL_FLAG_INTERNAL0 flag bits.",
        511LL,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_104;
    }
  }
  v49 = 0;
  v169 = 0;
  v50 = 0;
  v170 = 0;
  v51 = v157;
  v52 = v172;
  if ( v157 )
  {
    v53 = (DXGCONTEXT **)v46;
    v45 = (_QWORD *)v172;
    do
    {
      if ( (*((_DWORD *)*v53 + 101) & 0x10) != 0 )
        v50 += DXGCONTEXT::GetRenderHwQueueCount(*v53);
      else
        ++v49;
      ++v53;
      v45 = (_QWORD *)((char *)v45 - 1);
    }
    while ( v45 );
    v170 = v50;
    v169 = v49;
  }
  v165 = 0LL;
  v167 = 0;
  if ( v49 <= 8 )
  {
    v165 = v166;
    if ( v49 )
      memset(v166, 0, 8LL * v49);
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v49 < 8 )
    {
      v54 = 0LL;
      goto LABEL_121;
    }
    v165 = (PVOID)ExAllocatePool2(64LL, 8LL * v49, 1265072196LL, v45);
  }
  v167 = v49;
  v54 = v165;
LABEL_121:
  v172 = (unsigned __int64)v54;
  v55 = 0LL;
  v161 = 0LL;
  v163 = 0;
  if ( v50 <= 8 )
  {
    v55 = v162;
    v161 = v162;
    if ( v50 )
    {
      memset(v162, 0, 8LL * v50);
      v55 = v161;
    }
    goto LABEL_127;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v50 >= 8 )
  {
    v55 = (_BYTE *)ExAllocatePool2(64LL, 8LL * v50, 1265072196LL, v45);
    v161 = v55;
LABEL_127:
    v163 = v50;
    v56 = v55;
    goto LABEL_128;
  }
  v56 = 0LL;
LABEL_128:
  v179 = v56;
  if ( !v54 || !v56 )
  {
    if ( v56 != v162 )
    {
      v67 = v56 == 0LL;
      goto LABEL_473;
    }
    goto LABEL_475;
  }
  v57 = 0;
  if ( v51 )
  {
    v58 = v46;
    do
    {
      v59 = *(_QWORD *)v58;
      if ( (*(_DWORD *)(*(_QWORD *)v58 + 404LL) & 0x10) != 0 )
      {
        DXGNODELIST<DXGCONTEXT,DXGHWQUEUE>::GetHeadIterator((_QWORD *)(v59 + 408), &v181);
        v61 = (_QWORD *)*((_QWORD *)&v181 + 1);
        v45 = (_QWORD *)v181;
        while ( v61 != v45 && v61 )
        {
          *(_QWORD *)&v56[8 * v60++] = v61[5];
          v61 = (_QWORD *)*v61;
        }
        v181 = 0LL;
      }
      else
      {
        v54[v57++] = *(_QWORD *)(v59 + 256);
      }
      v58 += 8LL;
      --v52;
    }
    while ( v52 );
    v55 = v161;
  }
  if ( (_DWORD)v168 )
  {
    v62 = (__int64 *)v160;
    v63 = *v160;
    v64 = 0LL;
    v65 = v159;
    if ( (*((_DWORD *)v159 + 106) & 0x110) == 0x10 )
    {
      v66 = ExAllocatePool2(64LL, 40LL, 1265072196LL, v45);
      v64 = (struct DXG_SIGNAL_GUEST_CPU_EVENT *)v66;
      if ( !v66 )
      {
        WdLogSingleEntry1(6LL, 580LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Failed to allocate memory for DXG_SIGNAL_GUEST_CPU_EVENT",
          580LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v55 = v161;
        if ( v161 != v162 )
        {
          v67 = v161 == 0LL;
LABEL_473:
          if ( !v67 )
            ExFreePoolWithTag(v55, 0);
        }
        goto LABEL_475;
      }
      *(_QWORD *)(v66 + 8) = v63;
      *(_WORD *)(v66 + 16) = 1;
      *(_BYTE *)(v66 + 19) = 1;
      v63 = (void *)v66;
      DXG_SIGNAL_GUEST_CPU_EVENT::AcquireReference((struct DXG_SIGNAL_GUEST_CPU_EVENT *)v66);
    }
    v68 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, _QWORD, unsigned __int64, _DWORD, void *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v158 + 16LL) + 16LL) + 624LL) + 8LL)
                                                                                               + 832LL))(
            v170,
            v56,
            v169,
            v172,
            Value,
            v63);
    v72 = v68;
    if ( v68 < 0 )
    {
      WdLogSingleEntry3(2LL, v65, *v62, v68);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x failed to enqueue CPU event 0x%I64x returning 0x%I64x",
        (__int64)v65,
        *v62,
        v72,
        0LL,
        0LL);
      if ( v64 )
        DXG_SIGNAL_GUEST_CPU_EVENT::ReleaseReference(v64);
      if ( v161 != v162 && v161 )
        ExFreePoolWithTag(v161, 0);
      v161 = 0LL;
      v163 = 0;
      if ( v165 != v166 && v165 )
        ExFreePoolWithTag(v165, 0);
      v165 = 0LL;
      v167 = 0;
      if ( v147 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v146);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v176);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v188);
      if ( v144 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v144);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v155);
      if ( P != v150 && P )
        ExFreePoolWithTag(P, 0);
      return (unsigned int)v72;
    }
    if ( bTracingEnabled )
    {
      v164 = (unsigned int *)*v62;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qPR0qPR2qx_EtwWriteTransfer(v70, v69, v71, v157, (__int64)v158, 1, (__int64)&v164, Value, 0);
    }
    if ( v161 != v162 && v161 )
      ExFreePoolWithTag(v161, 0);
    v161 = 0LL;
    v163 = 0;
    if ( v165 != v166 && v165 )
      ExFreePoolWithTag(v165, 0);
    v165 = 0LL;
    v167 = 0;
    if ( v147 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v146);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v176);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v188);
    if ( v144 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v144);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v155);
LABEL_178:
    if ( P != v150 && P )
      ExFreePoolWithTag(P, 0);
    return 0LL;
  }
  v73 = v148;
  if ( !v148 )
  {
    WdLogSingleEntry1(2LL, 626LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Can't signal zero sync objects.", 626LL, 0LL, 0LL, 0LL, 0LL);
LABEL_184:
    if ( v161 != v162 && v161 )
      ExFreePoolWithTag(v161, 0);
    v163 = 0;
    v161 = 0LL;
    if ( v165 != v166 && v165 )
      ExFreePoolWithTag(v165, 0);
    v165 = 0LL;
    v167 = 0;
LABEL_104:
    if ( v147 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v146);
LABEL_432:
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v176);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v188);
    v38 = v144 == 0;
    goto LABEL_433;
  }
  v74 = 0LL;
  v152 = 0LL;
  v154 = 0;
  v75 = v148;
  v171 = v148;
  if ( v148 <= 2 )
  {
    v152 = v153;
    memset(v153, 0, 8LL * v148);
    v74 = v152;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v148 < 8 )
    {
      v76 = 0LL;
      v168 = 0LL;
      goto LABEL_197;
    }
    v74 = (_BYTE *)ExAllocatePool2(256LL, 8LL * v148, 1265072196LL, v45);
    v152 = v74;
  }
  v154 = v73;
  v76 = v74;
  v168 = v74;
  v55 = v161;
LABEL_197:
  if ( !v76 )
  {
    v152 = 0LL;
    v154 = 0;
    if ( v55 != v162 )
    {
      v67 = v55 == 0LL;
      goto LABEL_473;
    }
LABEL_475:
    v161 = 0LL;
    v163 = 0;
    if ( v165 != v166 && v165 )
      ExFreePoolWithTag(v165, 0);
    v165 = 0LL;
    v167 = 0;
    if ( v147 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v146);
LABEL_480:
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v176);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v188);
    v40 = v144 == 0;
    goto LABEL_481;
  }
  v143 = 0;
  v77 = 0;
  v78 = 0;
  if ( !v73 )
  {
LABEL_245:
    v107 = 0LL;
    v185 = 0LL;
    v108 = 0;
    v187 = 0;
    v109 = *(_DWORD *)(*(_QWORD *)v76 + 200LL);
    if ( (unsigned int)(v109 - 5) > 1 )
    {
      v110 = (void **)&a7;
      if ( v109 != 3 )
        v110 = 0LL;
      v160 = v110;
      v76 = v168;
      goto LABEL_249;
    }
    if ( !a10 )
    {
      v160 = (void **)Src;
      if ( !Src )
      {
        WdLogSingleEntry1(2LL, 783LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"MonitoredFenceValueArray is NULL when signaling monitored fence objects",
          783LL,
          0LL,
          0LL,
          0LL,
          0LL);
        if ( v185 != v186 && v185 )
          ExFreePoolWithTag(v185, 0);
        v185 = 0LL;
        v187 = 0;
LABEL_254:
        if ( v152 != v153 && v152 )
          ExFreePoolWithTag(v152, 0);
        v152 = 0LL;
        v154 = 0;
        goto LABEL_184;
      }
LABEL_249:
      DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
        (__int64)v182,
        v76,
        v73);
      if ( v183 )
      {
        if ( v182[0] )
        {
          WdLogSingleEntry1(2LL, 816LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"The same sync object handle is passed twice",
            816LL,
            0LL,
            0LL,
            0LL,
            0LL);
LABEL_418:
          DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v182);
          if ( v185 != v186 && v185 )
            ExFreePoolWithTag(v185, 0);
          v187 = 0;
          v185 = 0LL;
          if ( v152 != v153 && v152 )
            ExFreePoolWithTag(v152, 0);
          v154 = 0;
          v152 = 0LL;
          if ( v161 != v162 && v161 )
            ExFreePoolWithTag(v161, 0);
          v163 = 0;
          v161 = 0LL;
          if ( v165 != v166 && v165 )
            ExFreePoolWithTag(v165, 0);
          v167 = 0;
          v165 = 0LL;
          if ( v147 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v146);
          goto LABEL_432;
        }
        goto LABEL_330;
      }
      v173 = 0LL;
      v175 = 0;
      if ( v73 <= 2 )
      {
        v173 = v174;
        memset(v174, 0, 8 * v75);
        v118 = v173;
      }
      else
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / v75 < 8 )
        {
          v118 = 0LL;
          v171 = 0LL;
LABEL_351:
          if ( v118 )
          {
            v119 = 0;
            v120 = v148;
            if ( !v148 )
            {
LABEL_390:
              v132 = (__int64)v158;
              v133 = v160;
              v134 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, _QWORD, unsigned __int64, unsigned int, _QWORD *, _DWORD, void **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v158 + 16LL) + 16LL) + 624LL) + 8LL) + 640LL))(
                       v170,
                       v179,
                       v169,
                       v172,
                       v120,
                       v118,
                       Value,
                       v160);
              v138 = v134;
              if ( v134 < 0 )
              {
                v139 = v164;
                v140 = v159;
                WdLogSingleEntry4(2LL, v159, *v164, 0LL, v134);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"0x%I64x failed to signal SyncObject 0x%I64x at index %I64d returning 0x%I64x",
                  (__int64)v140,
                  *v139,
                  0LL,
                  v138,
                  0LL);
                if ( v173 != v174 && v173 )
                  ExFreePoolWithTag(v173, 0);
                v173 = 0LL;
                v175 = 0;
                DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v182);
                if ( v185 != v186 && v185 )
                  ExFreePoolWithTag(v185, 0);
                v185 = 0LL;
                v187 = 0;
                if ( v152 != v153 && v152 )
                  ExFreePoolWithTag(v152, 0);
                v152 = 0LL;
                v154 = 0;
                if ( v161 != v162 && v161 )
                  ExFreePoolWithTag(v161, 0);
                v161 = 0LL;
                v163 = 0;
                if ( v165 != v166 && v165 )
                  ExFreePoolWithTag(v165, 0);
                v165 = 0LL;
                v167 = 0;
                if ( v147 )
                  DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v146);
                DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v176);
                COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v188);
                if ( v144 )
                  DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v144);
                DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v155);
                if ( P != v150 && P )
                  ExFreePoolWithTag(P, 0);
                return (unsigned int)v138;
              }
              if ( v143 )
              {
                if ( bTracingEnabled )
                {
                  v141 = 0LL;
                  if ( v133 )
                    v141 = (__int64)*v133;
                  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                    McTemplateK0qPR0qPR2qx_EtwWriteTransfer(
                      v141,
                      v135,
                      v137,
                      v157,
                      v132,
                      v148,
                      (__int64)v118,
                      Value,
                      v141);
                }
              }
              else if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              {
                McTemplateK0qPR0qqPR3XR3_EtwWriteTransfer(
                  v136,
                  v135,
                  v137,
                  v157,
                  v132,
                  Value,
                  v148,
                  (__int64)v118,
                  (__int64)v133);
              }
              if ( v173 != v174 && v173 )
                ExFreePoolWithTag(v173, 0);
              v173 = 0LL;
              v175 = 0;
              DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v182);
              if ( v185 != v186 && v185 )
                ExFreePoolWithTag(v185, 0);
              v185 = 0LL;
              v187 = 0;
              if ( v152 != v153 && v152 )
                ExFreePoolWithTag(v152, 0);
              v152 = 0LL;
              v154 = 0;
              if ( v161 != v162 && v161 )
                ExFreePoolWithTag(v161, 0);
              v161 = 0LL;
              v163 = 0;
              if ( v165 != v166 && v165 )
                ExFreePoolWithTag(v165, 0);
              v165 = 0LL;
              v167 = 0;
              if ( v147 )
              {
                v147 = 0;
                ExReleaseResourceLite(v146[79]);
                KeLeaveCriticalRegion();
              }
              DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v176);
              COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v188);
              if ( v144 && v145 )
              {
                ExReleaseResourceLite(*(PERESOURCE *)(v144 + 136));
                KeLeaveCriticalRegion();
              }
              if ( v155 && !v156 )
                DXGCONTEXT::ReleaseReference(v155);
              goto LABEL_178;
            }
            v121 = v118;
            v122 = (_BYTE *)v76 - (_BYTE *)v118;
            v168 = (PVOID)v122;
            while ( 1 )
            {
              v123 = *(_QWORD *)((char *)v121 + v122);
              v124 = (__int64)v158;
              v125 = *(_QWORD *)(*v158 + 16LL);
              v126 = *(_QWORD *)(v125 + 16);
              if ( (*(_DWORD *)(v123 + 204) & 4) != 0 )
              {
                DxgAdapterSyncObject = DXGSYNCOBJECTCA::GetDxgAdapterSyncObject(
                                         *(DXGSYNCOBJECTCA **)((char *)v121 + v122),
                                         *(struct ADAPTER_RENDER **)(v125 + 16),
                                         &v180);
                if ( DxgAdapterSyncObject < 0 )
                  goto LABEL_359;
                v122 = (signed __int64)v168;
                v124 = (__int64)v158;
                v120 = v148;
              }
              else if ( v126 )
              {
                v127 = *(_QWORD *)(v123 + 312);
                if ( v127 != v126 )
                {
                  DxgAdapterSyncObject = -1073741811;
                  WdLogSingleEntry4(2LL, v123, v127, v126, -1073741811LL);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"Mismatch RenderCore with 0x%I64x (0x%I64x vs 0x%I64x), returning 0x%I64x",
                    v123,
                    *(_QWORD *)(v123 + 312),
                    v126,
                    -1073741811LL,
                    0LL);
LABEL_359:
                  v129 = (__int64)v158;
                  v130 = v159;
                  WdLogSingleEntry3(
                    2LL,
                    v159,
                    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v158 + 16LL) + 16LL) + 16LL),
                    DxgAdapterSyncObject);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"0x%I64x failed, failed to create a sync object on logical adapter 0x%I64x returning 0x%I64x",
                    (__int64)v130,
                    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v129 + 16LL) + 16LL) + 16LL),
                    DxgAdapterSyncObject,
                    0LL,
                    0LL);
                  if ( v173 != v174 && v173 )
                    ExFreePoolWithTag(v173, 0);
                  v173 = 0LL;
                  v175 = 0;
                  DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v182);
                  if ( v185 != v186 && v185 )
                    ExFreePoolWithTag(v185, 0);
                  v185 = 0LL;
                  v187 = 0;
                  if ( v152 != v153 && v152 )
                    ExFreePoolWithTag(v152, 0);
                  v152 = 0LL;
                  v154 = 0;
                  if ( v161 != v162 && v161 )
                    ExFreePoolWithTag(v161, 0);
                  v161 = 0LL;
                  v163 = 0;
                  if ( v165 != v166 && v165 )
                    ExFreePoolWithTag(v165, 0);
                  v165 = 0LL;
                  v167 = 0;
                  if ( v147 )
                    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v146);
                  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v176);
                  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v188);
                  if ( v144 )
                    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v144);
                  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v155);
                  if ( P != v150 && P )
                    ExFreePoolWithTag(P, 0);
                  return (unsigned int)DxgAdapterSyncObject;
                }
              }
              v131 = (*(_DWORD *)(v123 + 204) & 4) != 0
                   ? *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject(
                                   (DXGSYNCOBJECTCA *)v123,
                                   *(struct ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)v124 + 16LL) + 16LL))
                     + 4)
                   : *(_QWORD *)(v123 + 328);
              *v121 = v131;
              if ( !v131 )
                break;
              ++v119;
              ++v121;
              if ( v119 >= v120 )
              {
                v118 = (_QWORD *)v171;
                goto LABEL_390;
              }
            }
            WdLogSingleEntry1(2LL, v123);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"0x%p sync object adapter state is destroyed, thus it cannot be signaled.",
              v123,
              0LL,
              0LL,
              0LL,
              0LL);
            if ( v173 != v174 && v173 )
              ExFreePoolWithTag(v173, 0);
            v173 = 0LL;
            v175 = 0;
            goto LABEL_418;
          }
          v173 = 0LL;
          v175 = 0;
LABEL_330:
          DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v182);
          if ( v185 != v186 && v185 )
            ExFreePoolWithTag(v185, 0);
          v187 = 0;
          v185 = 0LL;
          if ( v152 != v153 && v152 )
            ExFreePoolWithTag(v152, 0);
          v154 = 0;
          v152 = 0LL;
          if ( v161 != v162 && v161 )
            ExFreePoolWithTag(v161, 0);
          v163 = 0;
          v161 = 0LL;
          if ( v165 != v166 && v165 )
            ExFreePoolWithTag(v165, 0);
          v167 = 0;
          v165 = 0LL;
          if ( v147 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v146);
          goto LABEL_480;
        }
        v118 = (_QWORD *)ExAllocatePool2(64LL, 8 * v75, 1265072196LL, v111);
        v173 = v118;
      }
      v171 = (__int64)v118;
      v175 = v73;
      goto LABEL_351;
    }
    if ( v73 <= 4 )
    {
      v185 = v186;
      memset(v186, 0, 8 * v75);
      v107 = v185;
    }
    else
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v75 < 8 )
      {
LABEL_303:
        if ( !v107 )
        {
          v185 = 0LL;
          v187 = 0;
          if ( v74 != v153 && v74 )
          {
            ExFreePoolWithTag(v74, 0);
            v55 = v161;
          }
          v152 = 0LL;
          v154 = 0;
          if ( v55 != v162 && v55 )
            ExFreePoolWithTag(v55, 0);
          v161 = 0LL;
          v163 = 0;
          if ( v165 != v166 && v165 )
            ExFreePoolWithTag(v165, 0);
          v165 = 0LL;
          v167 = 0;
          if ( v147 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v146);
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v176);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v188);
          if ( v144 )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v144);
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v155);
          if ( P != v150 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v151 = 0;
          return 3221225495LL;
        }
        v116 = (void **)(8LL * v108);
        v160 = v116;
        v171 = (__int64)v107;
        v117 = Src;
        if ( (char *)v116 + (unsigned __int64)Src < Src
          || (void **)((char *)v116 + (_QWORD)Src) > (void **)MmUserProbeAddress )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
        }
        memmove(v107, v117, (size_t)v116);
        v160 = (void **)v185;
        Src = v185;
        v76 = v168;
        goto LABEL_249;
      }
      v107 = (PVOID)ExAllocatePool2(64LL, 8 * v75, 1265072196LL, 0LL);
      v185 = v107;
    }
    v108 = v73;
    v187 = v73;
    v55 = v161;
    v74 = v152;
    goto LABEL_303;
  }
  v79 = (char *)v159 + 248;
  v160 = (void **)v76;
  v80 = v164;
  while ( 1 )
  {
    v81 = *v80;
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v79, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v84 = *((_DWORD *)v79 + 6);
        if ( v84 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v82, (const EVENT_DESCRIPTOR *)"g", v83, v84);
      }
      ExAcquirePushLockSharedEx(v79, 0LL);
    }
    v85 = (v81 >> 6) & 0xFFFFFF;
    v86 = v81 >> 30;
    if ( (unsigned int)v85 < *((_DWORD *)v159 + 74)
      && (v87 = *((_QWORD *)v159 + 35), v88 = *(_DWORD *)(v87 + 16 * v85 + 8), v86 == ((v88 >> 5) & 3))
      && (v88 & 0x2000) == 0
      && (v88 & 0x1F) == 8 )
    {
      v89 = *(_DWORD **)(v87 + 16LL * (unsigned int)v85);
    }
    else
    {
      v89 = 0LL;
    }
    ExReleasePushLockSharedEx(v79, 0LL);
    KeLeaveCriticalRegion();
    if ( !v89 )
      break;
    v90 = v89[50];
    if ( v90 == 5 )
    {
      WdLogSingleEntry1(1LL, 660LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pSyncObject->GetSyncObjectType() != D3DDDI_MONITORED_FENCE",
        660LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v90 = v89[50];
    }
    if ( v90 == 6 )
    {
      WdLogSingleEntry1(1LL, 661LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pSyncObject->GetSyncObjectType() != D3DDDI_PERIODIC_MONITORED_FENCE",
        661LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v143 = 1;
    if ( v77 )
    {
LABEL_258:
      v113 = v159;
      WdLogSingleEntry1(2LL, v159);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x mixes monitored fence and non-monitored fence sync objects in one signal call.",
        (__int64)v113,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_254;
    }
    if ( (v89[51] & 0x100) != 0 )
    {
      v112 = &v164[v78];
      WdLogSingleEntry1(2LL, *v112);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Sync object 0x%I64x is created with SignalByKmd and cannot be signaled",
        *v112,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_254;
    }
    if ( v89[50] == 3 && v148 != 1 )
    {
      v91 = &v164[v78];
      v92 = v171;
      v93 = v159;
      WdLogSingleEntry4(2LL, v159, *v91, v171, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x failed on signaling fence object 0x%I64x at non-1 object count %I64d returning 0x%I64x",
        (__int64)v93,
        *v91,
        v92,
        -1073741811LL,
        0LL);
      goto LABEL_279;
    }
LABEL_243:
    v106 = v160;
    *v160 = v89;
    ++v78;
    ++v80;
    v160 = v106 + 1;
    if ( v78 >= v148 )
    {
      v55 = v161;
      v74 = v152;
      v75 = v171;
      v76 = v168;
      v73 = v148;
      goto LABEL_245;
    }
  }
  v94 = *v80;
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v79, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v97 = *((_DWORD *)v79 + 6);
      if ( v97 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v95, (const EVENT_DESCRIPTOR *)"g", v96, v97);
    }
    ExAcquirePushLockSharedEx(v79, 0LL);
  }
  v98 = (v94 >> 6) & 0xFFFFFF;
  v99 = v94 >> 30;
  v100 = v159;
  if ( (unsigned int)v98 < *((_DWORD *)v159 + 74)
    && (v101 = *((_QWORD *)v159 + 35), v102 = *(_DWORD *)(v101 + 16 * v98 + 8), v99 == ((v102 >> 5) & 3))
    && (v102 & 0x2000) == 0
    && (v102 & 0x1F) != 0 )
  {
    if ( (v102 & 0x1F) != 0xB )
    {
      WdLogSingleEntry1(2LL, 267LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_236;
    }
    v103 = *(_QWORD *)(v101 + 16LL * (unsigned int)v98);
  }
  else
  {
LABEL_236:
    v103 = 0LL;
  }
  ExReleasePushLockSharedEx(v79, 0LL);
  KeLeaveCriticalRegion();
  if ( !v103 )
  {
    v115 = v164;
    WdLogSingleEntry4(2LL, v100, v164[v78], v78, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x failed to signal with invalid hSyncObject 0x%I64x at index %I64d returning 0x%I64x",
      (__int64)v100,
      v115[v78],
      v78,
      -1073741811LL,
      0LL);
LABEL_279:
    if ( v152 != v153 && v152 )
      ExFreePoolWithTag(v152, 0);
    v154 = 0;
    v152 = 0LL;
    if ( v161 != v162 && v161 )
      ExFreePoolWithTag(v161, 0);
    v163 = 0;
    v161 = 0LL;
    if ( v165 != v166 && v165 )
      ExFreePoolWithTag(v165, 0);
    v167 = 0;
    v165 = 0LL;
    goto LABEL_289;
  }
  v77 = 1;
  if ( v143 )
    goto LABEL_258;
  if ( (*(_DWORD *)(v103 + 72) & 0x10) == 0 )
  {
    v104 = *(_QWORD *)(v103 + 16);
    v105 = *(_QWORD *)(*v158 + 16LL);
    if ( v104 != v105 )
    {
      WdLogSingleEntry2(2LL, v105, v104);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"SignalSynchronizationObjectFromGpu on device 0x%p attempts to use a sync object opened on a different device 0x%p.",
        *(_QWORD *)(*v158 + 16LL),
        *(_QWORD *)(v103 + 16),
        0LL,
        0LL,
        0LL);
      goto LABEL_254;
    }
    v89 = *(_DWORD **)(v103 + 32);
    if ( (unsigned int)(v89[50] - 5) > 1 )
    {
      WdLogSingleEntry1(1LL, 741LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pSyncObject->GetSyncObjectType() == D3DDDI_MONITORED_FENCE || pSyncObject->GetSyncObjectType() == D3DDD"
                  "I_PERIODIC_MONITORED_FENCE",
        741LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    goto LABEL_243;
  }
  v114 = &v164[v78];
  WdLogSingleEntry1(2LL, *v114);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"0x%I64x object is opened with NoSignal flag and thus cannot be signaled.",
    *v114,
    0LL,
    0LL,
    0LL,
    0LL);
  if ( v152 != v153 && v152 )
    ExFreePoolWithTag(v152, 0);
  v152 = 0LL;
  v154 = 0;
  if ( v161 != v162 && v161 )
    ExFreePoolWithTag(v161, 0);
  v161 = 0LL;
  v163 = 0;
  if ( v165 != v166 && v165 )
    ExFreePoolWithTag(v165, 0);
  v165 = 0LL;
  v167 = 0;
  if ( v147 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v146);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v176);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v188);
  if ( v144 )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v144);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v155);
  if ( P != v150 && P )
    ExFreePoolWithTag(P, 0);
  return 3221225506LL;
}
