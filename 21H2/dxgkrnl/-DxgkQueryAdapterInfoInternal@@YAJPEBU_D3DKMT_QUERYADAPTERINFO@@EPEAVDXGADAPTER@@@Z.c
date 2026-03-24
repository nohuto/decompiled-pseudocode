/*
 * XREFs of ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C0126EB0
 * Callers:
 *     ?VmBusQueryAdapterInfoCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00DA8D0 (-VmBusQueryAdapterInfoCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkQueryAdapterInfo @ 0x1C0126E90 (DxgkQueryAdapterInfo.c)
 *     ?VmBusQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0244FC0 (-VmBusQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002CC0 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004130 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00065B8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006614 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?GetDeviceDescriptor@DXGADAPTER@@QEBAXKPEAG@Z @ 0x1C0006674 (-GetDeviceDescriptor@DXGADAPTER@@QEBAXKPEAG@Z.c)
 *     ?IsIndirectDisplayDevice@DXGADAPTER@@QEBAEXZ @ 0x1C00068CC (-IsIndirectDisplayDevice@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006DE4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0007174 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007578 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007658 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?QueryWDDM1_2Caps@DXGADAPTER@@QEBAXPEAU_D3DKMT_WDDM_1_2_CAPS@@@Z @ 0x1C00096D4 (-QueryWDDM1_2Caps@DXGADAPTER@@QEBAXPEAU_D3DKMT_WDDM_1_2_CAPS@@@Z.c)
 *     ?RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C00097F0 (-RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009DE0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C000A914 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C000D22C (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@0E@Z @ 0x1C0025A60 (--0DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@0E@Z.c)
 *     ??1DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C0025B2C (--1DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Release@DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0025B98 (-Release@DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0028C40 (memmove.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     DxgkInvalidateDeviceState @ 0x1C00527C8 (DxgkInvalidateDeviceState.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E49F4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C00F7BC0 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C00F7CD0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FBBF0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?QueryWDDM1_3Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_1_3_CAPS@@@Z @ 0x1C01291E4 (-QueryWDDM1_3Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_1_3_CAPS@@@Z.c)
 *     ?CopyUmdFileName@ADAPTER_RENDER@@QEBAJPEAU_D3DKMT_UMDFILENAMEINFO@@@Z @ 0x1C0129260 (-CopyUmdFileName@ADAPTER_RENDER@@QEBAJPEAU_D3DKMT_UMDFILENAMEINFO@@@Z.c)
 *     ?IsNullUmdDriver@@YAHAEBU_UNICODE_STRING@@@Z @ 0x1C01292BC (-IsNullUmdDriver@@YAHAEBU_UNICODE_STRING@@@Z.c)
 *     ?GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C0129368 (-GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C012A308 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     DpiIsDriverUpdateInProgress @ 0x1C012B960 (DpiIsDriverUpdateInProgress.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x1C015FF1C (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     ?QueryGpuMmuCaps@ADAPTER_RENDER@@QEBAXIPEAU_D3DKMT_GPUMMU_CAPS@@@Z @ 0x1C0160BE8 (-QueryGpuMmuCaps@ADAPTER_RENDER@@QEBAXIPEAU_D3DKMT_GPUMMU_CAPS@@@Z.c)
 *     ?QueryNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z @ 0x1C0165C24 (-QueryNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z.c)
 *     ?QueryWDDM2_0Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_2_0_CAPS@@@Z @ 0x1C0168B70 (-QueryWDDM2_0Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_2_0_CAPS@@@Z.c)
 *     ?DxgkpQueryRegistry@@YAJPEAVDXGADAPTER@@PEAXI@Z @ 0x1C0174594 (-DxgkpQueryRegistry@@YAJPEAVDXGADAPTER@@PEAXI@Z.c)
 *     DpiReadBlockListInfo @ 0x1C0175CB4 (DpiReadBlockListInfo.c)
 *     ?QueryWDDM2_7Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_2_7_CAPS@@@Z @ 0x1C0175D98 (-QueryWDDM2_7Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_2_7_CAPS@@@Z.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C0175F44 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     DpiFdoGetAdapterUniqueGUID @ 0x1C0176450 (DpiFdoGetAdapterUniqueGUID.c)
 *     ?GetKmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C01997B0 (-GetKmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 *     ?GetAdapterPerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATA@@@Z @ 0x1C020CF70 (-GetAdapterPerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATA@@@Z.c)
 *     ?GetAdapterPerfDataCaps@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATACAPS@@@Z @ 0x1C020D118 (-GetAdapterPerfDataCaps@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATACAPS@@@Z.c)
 *     ?GetGpuVersion@DXGADAPTER@@QEAAJPEAU_D3DKMT_GPUVERSION@@@Z @ 0x1C020D1A8 (-GetGpuVersion@DXGADAPTER@@QEAAJPEAU_D3DKMT_GPUVERSION@@@Z.c)
 *     ?GetNodePerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_NODE_PERFDATA@@@Z @ 0x1C020D234 (-GetNodePerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_NODE_PERFDATA@@@Z.c)
 *     ?QueryTrackedWorkloadSupport@DXGADAPTER@@QEAAJIW4DXGK_ENGINE_TYPE@@PEAH@Z @ 0x1C020EAA0 (-QueryTrackedWorkloadSupport@DXGADAPTER@@QEAAJIW4DXGK_ENGINE_TYPE@@PEAH@Z.c)
 *     ?CopyDListFileName@ADAPTER_RENDER@@QEBAJPEAGI@Z @ 0x1C02154FC (-CopyDListFileName@ADAPTER_RENDER@@QEBAJPEAGI@Z.c)
 *     ?GetDisplayUMDFileName@ADAPTER_RENDER@@AEBAAEBU_UNICODE_STRING@@W4_KMT_DISPLAY_UMD_VERSION@@@Z @ 0x1C021615C (-GetDisplayUMDFileName@ADAPTER_RENDER@@AEBAAEBU_UNICODE_STRING@@W4_KMT_DISPLAY_UMD_VERSION@@@Z.c)
 *     ?DxgkReadPnPRegistryPath@@YAJPEAVDXGADAPTER@@IW4_DXGK_PNP_KEY_TYPE@@PEAGPEAI@Z @ 0x1C02214F8 (-DxgkReadPnPRegistryPath@@YAJPEAVDXGADAPTER@@IW4_DXGK_PNP_KEY_TYPE@@PEAGPEAI@Z.c)
 *     ?PostProcessUMDFileName@@YAJW4_KMTQUERYADAPTERINFOTYPE@@PEAXI@Z @ 0x1C0221E28 (-PostProcessUMDFileName@@YAJW4_KMTQUERYADAPTERINFOTYPE@@PEAXI@Z.c)
 *     ?QueryDriverCapsExt@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRIVERCAPS_EXT@@@Z @ 0x1C0221F24 (-QueryDriverCapsExt@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRIVERCAPS_EXT@@@Z.c)
 *     ?VmBusSendQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYADAPTERINFO@@I@Z @ 0x1C024A634 (-VmBusSendQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYADA.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0268F1C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x1C029CC28 (-RunForAdapter@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@@@SAJPEAVDXGADAPTER@@_NIP.c)
 *     DpiQueryAdapterRegistryInfo @ 0x1C02C6F60 (DpiQueryAdapterRegistryInfo.c)
 */

__int64 __fastcall DxgkQueryAdapterInfoInternal(
        const struct _D3DKMT_QUERYADAPTERINFO *a1,
        char a2,
        struct DXGADAPTER *a3)
{
  const struct _D3DKMT_QUERYADAPTERINFO *v5; // rbx
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v11; // rdx
  ULONG64 v12; // rcx
  __int64 v13; // r8
  struct DXGPROCESS *v14; // rdi
  struct DXGTHREAD *Current; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  bool v20; // zf
  __int128 v21; // xmm0
  size_t v22; // xmm1_8
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  size_t v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  unsigned int v33; // eax
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  unsigned int *v41; // r14
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  unsigned __int64 v46; // rsi
  size_t v47; // r12
  struct _KTHREAD **v48; // rdi
  struct DXGADAPTER **v49; // r9
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  DXGADAPTER *v53; // r13
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rdi
  unsigned int v57; // ebx
  __int64 v58; // rax
  int PairingAdapters; // eax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  struct DXGADAPTER *v66; // rbx
  DXGADAPTER *v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  int v71; // eax
  bool v72; // cl
  __int64 v73; // rcx
  unsigned int v74; // ebx
  int v75; // eax
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  _QWORD *v79; // rax
  ADAPTER_DISPLAY **v80; // rbx
  signed __int64 v81; // rax
  __int64 v82; // r13
  __int64 v83; // r9
  __int64 v84; // rcx
  DXGADAPTER *v85; // r8
  __int64 HostSilo; // rax
  __int64 v87; // rdx
  __int64 v88; // rax
  struct DXGADAPTER *v89; // rbx
  int v90; // eax
  __int64 v91; // rdx
  __int64 v92; // rcx
  _QWORD *v93; // rax
  _QWORD *v94; // rax
  __int64 v95; // r8
  unsigned __int64 v96; // r9
  char *v97; // r8
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // rax
  __int64 v101; // rcx
  __int64 v102; // rdx
  __int64 v103; // rax
  __int64 v104; // rdx
  __int64 v105; // rcx
  struct DXGPROCESS *v106; // rsi
  unsigned int *v107; // rbx
  __int64 v108; // rax
  struct DXGADAPTER *v109; // rax
  DXGADAPTER *v110; // rbx
  __int64 v111; // rcx
  __int64 v112; // rax
  const void **AdapterUniqueGUID; // rax
  size_t v114; // r8
  struct DXGADAPTER *v115; // rax
  __int64 v116; // rcx
  struct DXGADAPTER *v117; // rcx
  char v118; // cl
  struct DXGADAPTER *v119; // rbx
  int v120; // eax
  unsigned __int8 IsDriverUpdateInProgress; // al
  void *v122; // rbx
  struct DXGADAPTER *v123; // rax
  int v124; // edx
  struct DXGADAPTER *v125; // rbx
  DXGADAPTER *v126; // rcx
  int *AdapterType; // rax
  int v128; // ecx
  __int64 v129; // rdx
  __int64 v130; // rcx
  __int64 v131; // r8
  __int64 v132; // rdx
  DXGADAPTER *v133; // rcx
  DXGADAPTER *v134; // rcx
  struct DXGADAPTER *v135; // rbx
  DXGADAPTER *v136; // rcx
  DXGADAPTER *v137; // rbx
  DXGADAPTER *v138; // r11
  __int64 v139; // r8
  __int64 v140; // r8
  __int64 v141; // rdx
  __int64 v142; // rcx
  __int64 v143; // rbx
  _DWORD *v144; // rcx
  int v145; // eax
  __int64 v146; // rdx
  __int64 v147; // rcx
  __int64 v148; // r8
  __int64 v149; // rbx
  __int64 v150; // rcx
  struct DXGADAPTER *v151; // rbx
  struct DXGADAPTER *v152; // rbx
  __int64 v153; // rcx
  __int64 v154; // rax
  ADAPTER_RENDER *v155; // rsi
  __int64 v156; // rbx
  __int64 v157; // rdx
  __int64 v158; // rcx
  __int64 v159; // rax
  DXGADAPTER *v160; // rcx
  struct DXGADAPTER *v161; // rbx
  __int64 v162; // rcx
  __int64 v163; // rdx
  const struct _UNICODE_STRING *DisplayUMDFileName; // rax
  char **v165; // r8
  __int64 v166; // rcx
  __int64 v167; // rax
  int v168; // eax
  __int64 v169; // rcx
  __int64 v170; // r8
  __int64 v171; // rax
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int64 v173; // rcx
  __int64 v174; // r8
  __int64 v175; // rax
  void *v176; // rcx
  __int64 v177; // rdx
  __int64 v178; // rcx
  __int64 v179; // r8
  struct DXGADAPTER *v180; // [rsp+50h] [rbp-298h] BYREF
  void *Src[2]; // [rsp+58h] [rbp-290h]
  size_t Size; // [rsp+68h] [rbp-280h]
  char v183; // [rsp+70h] [rbp-278h] BYREF
  char v184; // [rsp+71h] [rbp-277h]
  DXGADAPTER *v185; // [rsp+78h] [rbp-270h] BYREF
  int v186; // [rsp+80h] [rbp-268h] BYREF
  __int64 v187; // [rsp+88h] [rbp-260h]
  char v188; // [rsp+90h] [rbp-258h]
  DXGADAPTER *v189; // [rsp+98h] [rbp-250h] BYREF
  struct DXGPROCESS *v190; // [rsp+A0h] [rbp-248h]
  unsigned int v191; // [rsp+A8h] [rbp-240h]
  _D3DKMT_WDDM_1_3_CAPS v192; // [rsp+B0h] [rbp-238h] BYREF
  unsigned int v193; // [rsp+B4h] [rbp-234h] BYREF
  BOOL IsRemoteConnection; // [rsp+B8h] [rbp-230h]
  unsigned int v195; // [rsp+C0h] [rbp-228h]
  unsigned int v196; // [rsp+C4h] [rbp-224h] BYREF
  __int64 v197; // [rsp+C8h] [rbp-220h] BYREF
  struct DXGADAPTER *v198; // [rsp+D0h] [rbp-218h] BYREF
  unsigned __int64 v199; // [rsp+E0h] [rbp-208h] BYREF
  struct DXGDEVICE *v200; // [rsp+E8h] [rbp-200h] BYREF
  struct DXGDEVICE *v201; // [rsp+F0h] [rbp-1F8h] BYREF
  void *v202; // [rsp+F8h] [rbp-1F0h]
  unsigned int *v203; // [rsp+100h] [rbp-1E8h]
  char v204[8]; // [rsp+108h] [rbp-1E0h] BYREF
  struct DXGADAPTER *v205; // [rsp+110h] [rbp-1D8h]
  char v206; // [rsp+118h] [rbp-1D0h]
  int v207; // [rsp+120h] [rbp-1C8h] BYREF
  unsigned __int64 v208; // [rsp+128h] [rbp-1C0h] BYREF
  _DXGKARG_QUERYADAPTERINFO v209; // [rsp+130h] [rbp-1B8h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v210; // [rsp+160h] [rbp-188h] BYREF
  __int128 v211; // [rsp+190h] [rbp-158h] BYREF
  int v212; // [rsp+1A0h] [rbp-148h]
  _D3DKMT_QUERYADAPTERINFO v213; // [rsp+1A8h] [rbp-140h] BYREF
  _BYTE v214[64]; // [rsp+1C0h] [rbp-128h] BYREF
  _BYTE v215[144]; // [rsp+200h] [rbp-E8h] BYREF
  wchar_t Str2[20]; // [rsp+290h] [rbp-58h] BYREF

  v184 = a2;
  v5 = a1;
  v186 = -1;
  v6 = 0LL;
  v187 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v188 = 1;
    v186 = 2015;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 2015);
  }
  else
  {
    v188 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v186, 2015LL);
  CurrentProcess = PsGetCurrentProcess(v8, v7);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v14 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( (ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
     || (Current = DXGTHREAD::GetCurrent(v12, v11)) == 0LL
     || (v190 = (struct DXGPROCESS *)*((_QWORD *)Current + 1)) == 0LL)
    && (v190 = v14) == 0LL
    || a3 && a2 )
  {
    v16 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v16 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v16);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v186, v17);
    v20 = v188 == 0;
LABEL_62:
    if ( !v20 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v186);
    return 3221225485LL;
  }
  v202 = 0LL;
  if ( a2 )
  {
    v12 = MmUserProbeAddress;
    if ( (unsigned __int64)v5 >= MmUserProbeAddress )
      v5 = (const struct _D3DKMT_QUERYADAPTERINFO *)MmUserProbeAddress;
    v21 = *(_OWORD *)&v5->hAdapter;
    v22 = *(_QWORD *)&v5->PrivateDriverDataSize;
  }
  else
  {
    v21 = *(_OWORD *)&v5->hAdapter;
    v22 = *(_QWORD *)&v5->PrivateDriverDataSize;
  }
  Size = v22;
  *(_OWORD *)Src = v21;
  if ( !*((_QWORD *)&v21 + 1) )
  {
    v23 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v23 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v23);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v186, v24);
    if ( v188 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v25, &EventProfilerExit, v26, v186);
    return 3221225485LL;
  }
  v28 = (unsigned int)Size;
  if ( !(_DWORD)Size )
  {
    v29 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v29 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v29);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v186, v30);
    if ( v188 != (_BYTE)v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v31, &EventProfilerExit, v32, v186);
    return 3221225485LL;
  }
  v33 = (Size + 7) & 0xFFFFFFF8;
  v195 = v33;
  if ( v33 < (unsigned int)Size )
  {
    v34 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v34 + 24) = -1073741811LL;
    *(_QWORD *)(v34 + 32) = 3131LL;
    WdLogEvent5_WdWarning(v34);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v186, v35);
    if ( v188 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v36, &EventProfilerExit, v37, v186);
    return 3221225485LL;
  }
  v41 = (unsigned int *)operator new[](v33, 0x4B677844u, (POOL_TYPE)512);
  v203 = v41;
  v202 = v41;
  if ( !v41 )
  {
    v42 = WdLogNewEntry5_WdWarning(v39, v38, v40);
    *(_QWORD *)(v42 + 24) = -1073741801LL;
    WdLogEvent5_WdWarning(v42);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v186, v43);
    if ( v188 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v44, &EventProfilerExit, v45, v186);
    return 3221225495LL;
  }
  v46 = SHIDWORD(Src[0]);
  switch ( HIDWORD(Src[0]) )
  {
    case 1:
    case 7:
    case 9:
    case 0x10:
    case 0x17:
    case 0x19:
    case 0x1F:
    case 0x22:
    case 0x29:
    case 0x2A:
    case 0x2E:
    case 0x2F:
    case 0x30:
    case 0x32:
    case 0x33:
    case 0x3D:
    case 0x3E:
    case 0x3F:
    case 0x40:
    case 0x43:
    case 0x47:
    case 0x48:
      v20 = a2 == 0;
      v47 = (unsigned int)Size;
      if ( !v20
        && ((unsigned __int64)(unsigned int)Size + *((_QWORD *)&v21 + 1) < *((_QWORD *)&v21 + 1)
         || (unsigned __int64)(unsigned int)Size + *((_QWORD *)&v21 + 1) > MmUserProbeAddress) )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
      }
      memmove(v41, *((const void **)&v21 + 1), v28);
      break;
    default:
      v47 = (unsigned int)Size;
      memset(v41, 0, (unsigned int)Size);
      break;
  }
  IsRemoteConnection = 0;
  v48 = (struct _KTHREAD **)v190;
  if ( (_DWORD)v46 == 16 )
    IsRemoteConnection = DXGPROCESS::IsRemoteConnection(v190);
  v185 = a3;
  v49 = &v185;
  if ( a3 )
    v49 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v198, LODWORD(Src[0]), v48, v49, 1);
  v53 = v185;
  if ( !v185 )
  {
    v54 = WdLogNewEntry5_WdWarning(v51, v50, v52);
    *(_QWORD *)(v54 + 24) = LODWORD(Src[0]);
    *(_QWORD *)(v54 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v54);
    operator delete[](v41);
    if ( v198 )
      DXGADAPTER::ReleaseReference(v198);
LABEL_61:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v186, v55);
    v20 = v188 == 0;
    goto LABEL_62;
  }
  LODWORD(v56) = 0;
  if ( (_DWORD)v46 == 9 )
  {
    if ( (_DWORD)v28 == 48 )
      goto LABEL_56;
LABEL_59:
    v58 = WdLogNewEntry5_WdWarning(v51, v50, v52);
    *(_QWORD *)(v58 + 24) = v47;
    *(_QWORD *)(v58 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v58);
    operator delete[](v41);
    if ( v198 )
      DXGADAPTER::ReleaseReference(v198);
    goto LABEL_61;
  }
  if ( (_DWORD)v46 != 67 )
  {
    v57 = 0;
    goto LABEL_67;
  }
  if ( (_DWORD)v28 != 8 )
    goto LABEL_59;
LABEL_56:
  v57 = *v41;
LABEL_67:
  v180 = 0LL;
  v189 = 0LL;
  v199 = 0LL;
  v208 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(v185, v57, &v180, &v199, &v189, &v208, 0);
  v191 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    if ( (_DWORD)v46 != 9 && (_DWORD)v46 != 67 )
    {
      v189 = 0LL;
      PairingAdapters = DxgkpGetPairingAdapters(v53, v57, &v180, &v199, 0LL, 0LL, 0);
      v191 = PairingAdapters;
    }
    if ( PairingAdapters < 0 )
    {
      v62 = WdLogNewEntry5_WdError(v61, v60);
      *(_QWORD *)(v62 + 24) = v53;
      *(_QWORD *)(v62 + 32) = v57;
      WdLogEvent5_WdError(v62);
      operator delete[](v41);
      if ( v198 )
        DXGADAPTER::ReleaseReference(v198);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v186, v63);
      if ( v188 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v64, &EventProfilerExit, v65, v186);
      return v191;
    }
  }
  v66 = v180;
  v67 = v189;
  if ( v180 != v53 && v189 != v53 )
  {
    v68 = WdLogNewEntry5_WdAssertion(v61, v60);
    *(_QWORD *)(v68 + 24) = 3306LL;
    WdLogEvent5_WdAssertion(v68);
    v67 = v189;
  }
  if ( v67 && !*((_QWORD *)v67 + 337) )
  {
    v69 = WdLogNewEntry5_WdAssertion(v61, v60);
    *(_QWORD *)(v69 + 24) = 3308LL;
    WdLogEvent5_WdAssertion(v69);
  }
  if ( !v66 || !*((_QWORD *)v66 + 338) )
  {
    v70 = WdLogNewEntry5_WdAssertion(v61, v60);
    *(_QWORD *)(v70 + 24) = 3310LL;
    WdLogEvent5_WdAssertion(v70);
  }
  v72 = 0;
  if ( (unsigned int)v46 <= 0x1B )
  {
    v71 = 138619200;
    if ( _bittest(&v71, v46) )
      v72 = 1;
  }
  if ( (v53 != v66 || !*((_BYTE *)v53 + 209)) && (!v66 || !*((_BYTE *)v66 + 209) || v72)
    || (unsigned int)v46 <= 0x39 && (v73 = 0x210F85840908010LL, _bittest64(&v73, v46))
    || (_DWORD)v46 == 68 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v215, v66, v189);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v66 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v180 + 2), v180);
    v80 = (ADAPTER_DISPLAY **)v189;
    if ( v189 )
    {
      v81 = _InterlockedExchangeAdd64((volatile signed __int64 *)v189 + 3, 0xFFFFFFFFFFFFFFFFuLL);
      v80 = (ADAPTER_DISPLAY **)v189;
      if ( v81 == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v189 + 2), v189);
    }
    LODWORD(v82) = HIDWORD(Src[0]);
    if ( HIDWORD(Src[0]) == 9 || HIDWORD(Src[0]) == 67 )
    {
      LODWORD(v56) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v215, 0LL);
      if ( (int)v56 >= 0 )
      {
        if ( !v80 || !v80[337] )
        {
          v167 = WdLogNewEntry5_WdAssertion(v166, v87);
          *(_QWORD *)(v167 + 24) = 3393LL;
          WdLogEvent5_WdAssertion(v167);
        }
        if ( (_DWORD)v82 == 9 )
        {
          DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(v80[337], *v41);
          if ( *(_DWORD *)DisplayModeInfo )
          {
            *(_OWORD *)(v41 + 1) = *(_OWORD *)DisplayModeInfo;
            *(_OWORD *)(v41 + 5) = *((_OWORD *)DisplayModeInfo + 1);
            *(_QWORD *)(v41 + 9) = *((_QWORD *)DisplayModeInfo + 4);
            v41[11] = *((_DWORD *)DisplayModeInfo + 10);
          }
          else
          {
            LODWORD(v56) = -1071774919;
            v175 = WdLogNewEntry5_WdWarning(v173, v87, v174);
            *(_QWORD *)(v175 + 24) = *v41;
            *(_QWORD *)(v175 + 32) = v80;
            WdLogEvent5_WdWarning(v175);
          }
        }
        else if ( (_DWORD)v82 == 67 )
        {
          v196 = *v41;
          v193 = 0;
          *(_QWORD *)&v210.Type = 33LL;
          *(_QWORD *)&v210.InputDataSize = 4LL;
          *(_QWORD *)&v210.Flags.0 = 0LL;
          HIDWORD(v210.hKmdProcessHandle) = 0;
          v210.pOutputData = &v193;
          v210.OutputDataSize = 4;
          v210.pInputData = &v196;
          v168 = DXGADAPTER::DdiQueryAdapterInfo((DXGADAPTER *)v80, &v210);
          v56 = v168;
          if ( v168 < 0 )
          {
            v171 = WdLogNewEntry5_WdWarning(v169, v87, v170);
            *(_QWORD *)(v171 + 24) = *v41;
            *(_QWORD *)(v171 + 32) = v56;
            WdLogEvent5_WdWarning(v171);
          }
          else
          {
            v41[1] = v193;
          }
        }
        goto LABEL_382;
      }
    }
    else
    {
      DXGPAIREDADAPTERSTOPRESETLOCKSHARED::DXGPAIREDADAPTERSTOPRESETLOCKSHARED(
        (DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214,
        v180,
        (struct DXGADAPTER *)v80);
      if ( *((_DWORD *)v185 + 50) == 1 )
      {
        v84 = *((unsigned int *)v180 + 50);
        if ( (_DWORD)v84 == 1 )
        {
          v85 = v189;
          if ( !v189 )
            goto LABEL_119;
          if ( *((_DWORD *)v189 + 50) == 1 )
          {
            v85 = v189;
LABEL_119:
            v82 = SHIDWORD(Src[0]);
            switch ( HIDWORD(Src[0]) )
            {
              case 0:
                *(_QWORD *)&v209.Flags.0 = 0LL;
                HIDWORD(v209.hKmdProcessHandle) = 0;
                memset(&v209, 0, 24);
                v209.pOutputData = v41;
                v209.OutputDataSize = Size;
                v106 = v190;
                if ( (*((_BYTE *)v190 + 347) & 0x20) != 0 )
                  v209.Flags.Value = (2 * *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v190 + 62) + 496LL) + 296LL)) & 2 | 1;
                v107 = (unsigned int *)v180;
                v56 = *((_QWORD *)v180 + 338);
                KeEnterCriticalRegion();
                ExAcquirePushLockSharedEx(v56 + 72, 0LL);
                v108 = *(_QWORD *)(*((_QWORD *)v106 + 6) + 8LL * v107[58]);
                if ( v108 )
                  v209.hKmdProcessHandle = *(HANDLE *)(v108 + 16);
                ExReleasePushLockSharedEx(v56 + 72, 0LL);
                KeLeaveCriticalRegion();
                LODWORD(v56) = DXGADAPTER::DdiQueryAdapterInfo((DXGADAPTER *)v107, &v209);
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214);
                break;
              case 1:
                if ( (_DWORD)Size != 524 )
                  goto LABEL_125;
                v89 = v180;
                v90 = ADAPTER_RENDER::CopyUmdFileName(
                        *((ADAPTER_RENDER **)v180 + 338),
                        (struct _D3DKMT_UMDFILENAMEINFO *)v41);
                goto LABEL_127;
              case 2:
                if ( (_DWORD)Size != 528 )
                  goto LABEL_125;
                v95 = *((_QWORD *)v180 + 338);
                if ( (*((_BYTE *)v190 + 347) & 1) != 0 )
                {
                  v41[130] = *(_DWORD *)(v95 + 592);
                  v41[131] = *(_DWORD *)(v95 + 596);
                  v96 = *(unsigned __int16 *)(v95 + 576);
                  v97 = *(char **)(v95 + 584);
                }
                else
                {
                  v41[130] = *(_DWORD *)(v95 + 568);
                  v41[131] = *(_DWORD *)(v95 + 572);
                  v96 = *(unsigned __int16 *)(v95 + 552);
                  v97 = *(char **)(v95 + 560);
                }
                LODWORD(v56) = RtlStringCbCopyNW((char *)v41, 0x1C0000000LL, v97, v96);
                if ( (int)v56 >= 0 )
                  goto LABEL_368;
                v100 = WdLogNewEntry5_WdError(v99, v98);
                *(_QWORD *)(v100 + 24) = (int)v56;
                WdLogEvent5_WdError(v100);
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214);
                break;
              case 3:
                if ( (_DWORD)Size != 24 )
                  goto LABEL_125;
                v197 = 0LL;
                (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *, __int64 *, unsigned int *, unsigned int *, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v180 + 338) + 640LL) + 8LL) + 80LL))(
                  *(_QWORD *)(*((_QWORD *)v180 + 338) + 648LL),
                  0LL,
                  &v197,
                  &v197,
                  &v197,
                  v41,
                  v41 + 2,
                  v41 + 4);
                LODWORD(v56) = 0;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214);
                break;
              case 4:
              case 0x34:
                if ( (_DWORD)Size != 16 )
                  goto LABEL_125;
                v109 = v180;
                if ( HIDWORD(Src[0]) == 4 )
                  v109 = v185;
                if ( !v109 )
                  goto LABEL_165;
                *(_OWORD *)v41 = *(_OWORD *)((char *)v109 + 284);
                LODWORD(v56) = 0;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214);
                break;
              case 5:
                if ( (_DWORD)Size != 12 )
                  goto LABEL_125;
                LODWORD(v56) = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v180 + 338) + 616LL)
                                                                                             + 8LL)
                                                                                 + 504LL))(
                                 *(_QWORD *)(*((_QWORD *)v180 + 338) + 624LL),
                                 v41);
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214);
                break;
              case 6:
              case 0x35:
                if ( (_DWORD)Size != 12 )
                  goto LABEL_125;
                LODWORD(v56) = -1073741823;
                v115 = v180;
                if ( HIDWORD(Src[0]) == 6 )
                  v115 = v185;
                if ( !v115 )
                  goto LABEL_368;
                v116 = *(_QWORD *)(*((_QWORD *)v115 + 27) + 64LL);
                *v41 = *(_DWORD *)(v116 + 1144);
                v41[1] = *(unsigned __int16 *)(v116 + 1150);
                v41[2] = (unsigned __int16)*(_DWORD *)(v116 + 1148);
                LODWORD(v56) = 0;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214);
                break;
              case 7:
                if ( (_DWORD)Size != 12 )
                  goto LABEL_125;
                v104 = *(_QWORD *)(*((_QWORD *)v180 + 338) + 640LL);
                v105 = *((_QWORD *)v190 + 8);
                if ( v105 )
                  v6 = *(_QWORD *)(v105 + 8LL * (unsigned int)(*(_DWORD *)v104 - 1));
                LODWORD(v56) = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)(v104 + 8) + 376LL))(
                                 v6,
                                 v41);
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214);
                break;
              case 8:
              case 0x36:
                if ( (_DWORD)Size != 2080 )
                  goto LABEL_125;
                LODWORD(v56) = -1073741823;
                v117 = v180;
                if ( HIDWORD(Src[0]) == 8 )
                  v117 = v185;
                if ( !v117 )
                  goto LABEL_368;
                LODWORD(v56) = DpiQueryAdapterRegistryInfo(*((_QWORD *)v117 + 27), v41);
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214);
                break;
              case 0xB:
              case 0x37:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_125;
                v118 = 0;
                v183 = 0;
                LODWORD(v56) = -1073741823;
                v119 = v180;
                if ( HIDWORD(Src[0]) == 11 )
                  v119 = v185;
                if ( !v119 )
                  goto LABEL_368;
                v120 = *((_DWORD *)v119 + 87);
                if ( (v120 & 0x20) != 0 || (v120 & 4) != 0 )
                {
                  IsDriverUpdateInProgress = 0;
                }
                else
                {
                  IsDriverUpdateInProgress = DpiIsDriverUpdateInProgress(*((_QWORD *)v119 + 27), &v183);
                  v118 = v183;
                }
                *v41 = IsDriverUpdateInProgress;
                if ( !v118 )
                  goto LABEL_361;
                v122 = (void *)*((_QWORD *)v119 + 27);
                ObfReferenceObject(v122);
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::Release((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214);
                DxgkInvalidateDeviceState((__int64)v122);
                ObfDereferenceObject(v122);
                LODWORD(v56) = 0;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214);
                break;
              case 0xC:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_125;
                *v41 = 0;
                *v41 = (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v180 + 338) + 16LL) + 2060LL) >> 5) & 1;
                LODWORD(v56) = 0;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214);
                break;
              case 0xD:
              case 0x38:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_125;
                LODWORD(v56) = -1073741823;
                v123 = v180;
                if ( HIDWORD(Src[0]) == 13 )
                  v123 = v185;
                if ( !v123 )
                  goto LABEL_368;
                v124 = *((_DWORD *)v123 + 649);
                *v41 = v124;
                if ( (*((_BYTE *)v190 + 347) & 0x20) != 0
                  && *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v190 + 62) + 496LL) + 352LL) <= 0x10u )
                {
                  if ( v124 > 2600 )
                    v124 = 2600;
                  *v41 = v124;
                }
                goto LABEL_361;
              case 0xF:
              case 0x39:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_125;
                LODWORD(v56) = -1073741823;
                v125 = v180;
                v126 = v180;
                if ( HIDWORD(Src[0]) == 15 )
                  v126 = v185;
                if ( !v126 )
                  goto LABEL_368;
                AdapterType = DXGADAPTER::GetAdapterType(v126, &v207);
                v128 = *AdapterType;
                *v41 = *AdapterType;
                if ( v125 )
                  *v41 = v128 ^ ((unsigned __int16)v128 ^ (unsigned __int16)(*((unsigned __int8 *)v125 + 212) << 8)) & 0x100;
                goto LABEL_361;
              case 0x10:
                if ( (_DWORD)Size != 8 )
                  goto LABEL_125;
                if ( !*((_BYTE *)DXGPROCESS::GetCurrent(v84, 0x1C0000000LL) + 346) )
                  goto LABEL_216;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::Release((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214);
                v133 = v185;
                if ( IsRemoteConnection )
                  v133 = 0LL;
                LODWORD(v56) = OutputDuplThunks<_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT *>::RunForAdapter(
                                 v133,
                                 v132,
                                 *v41,
                                 v41,
                                 lambda_d61da4d51b31b33ef5e605a1dd45d7b4_::_lambda_invoker_cdecl_);
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214);
                break;
              case 0x11:
              case 0x3A:
                if ( (_DWORD)Size != 12 )
                  goto LABEL_125;
                LODWORD(v56) = -1073741823;
                v134 = v180;
                if ( HIDWORD(Src[0]) == 17 )
                  v134 = v185;
                if ( !v134 )
                  goto LABEL_368;
                DXGADAPTER::QueryWDDM1_2Caps(v134, (struct _D3DKMT_WDDM_1_2_CAPS *)v41);
                LODWORD(v56) = 0;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214);
                break;
              case 0x12:
                if ( (_DWORD)Size != 8 )
                  goto LABEL_125;
                LODWORD(v56) = ADAPTER_RENDER::GetUmdFileVersion(
                                 *((ADAPTER_RENDER **)v180 + 338),
                                 (union _LARGE_INTEGER *)v41);
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214);
                break;
              case 0x13:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_125;
                if ( v85 && DXGADAPTER::IsIndirectDisplayDevice(v85) )
                  goto LABEL_232;
                LOBYTE(v6) = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v180 + 338) + 16LL) + 2531LL) != 0;
                *v41 = v6;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214);
                break;
              case 0x14:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_125;
                LOBYTE(v6) = ADAPTER_RENDER::IsMultiPlaneOverlaySupported(*((ADAPTER_RENDER **)v180 + 338)) != 0;
                *v41 = v6;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214);
                break;
              case 0x15:
                if ( (_DWORD)Size != 520 )
                  goto LABEL_125;
                v89 = v180;
                if ( !(_BYTE)word_1C00B2B1D || !*((_BYTE *)v180 + 2535) )
                {
                  v94 = (_QWORD *)WdLogNewEntry5_WdEvent(v84, 0x1C0000000uLL);
                  v94[3] = v41;
                  v94[4] = v89;
                  LODWORD(v56) = -1073741637;
                  v94[5] = -1073741637LL;
                  WdLogEvent5_WdEvent(v94);
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214);
                  break;
                }
                v90 = ADAPTER_RENDER::CopyDListFileName(
                        *((ADAPTER_RENDER **)v180 + 338),
                        (unsigned __int16 *)v41,
                        (unsigned int)v85);
LABEL_127:
                v56 = v90;
                if ( v90 < 0 )
                {
                  v93 = (_QWORD *)WdLogNewEntry5_WdEvent(v92, v91);
                  v93[3] = v41;
                  v93[4] = v89;
                  v93[5] = v56;
                  goto LABEL_129;
                }
                goto LABEL_368;
              case 0x16:
              case 0x3B:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_125;
                LODWORD(v56) = -1073741823;
                v136 = v180;
                v137 = v185;
                if ( HIDWORD(Src[0]) == 22 )
                  v136 = v185;
                if ( !v136 )
                  goto LABEL_368;
                DXGADAPTER::QueryWDDM1_3Caps(v136, (struct _D3DKMT_WDDM_1_3_CAPS *)v41);
                if ( v138 && v137 != v138 )
                {
                  v192.0 = 0;
                  DXGADAPTER::QueryWDDM1_3Caps(v138, &v192);
                  *v41 ^= (*v41 ^ v192.Value) & 0x20;
                }
                goto LABEL_361;
              case 0x17:
                if ( (_DWORD)Size != 16 )
                  goto LABEL_125;
                if ( !v41[1] )
                  goto LABEL_241;
                if ( !*((_BYTE *)DXGPROCESS::GetCurrent(v84, 0x1C0000000LL) + 346) )
                {
LABEL_216:
                  LODWORD(v56) = -1073741790;
                  v88 = WdLogNewEntry5_WdWarning(v130, v129, v131);
                  *(_QWORD *)(v88 + 24) = -1073741790LL;
                  goto LABEL_367;
                }
                if ( v41[1] )
                {
                  *(_DWORD *)(*((_QWORD *)v180 + 338) + 1104LL) = v41[3];
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214);
                }
                else
                {
LABEL_241:
                  v135 = v180;
                  v41[2] = ADAPTER_RENDER::IsMultiPlaneOverlaySupported(*((ADAPTER_RENDER **)v180 + 338));
                  v41[3] = *(_DWORD *)(*((_QWORD *)v135 + 338) + 1104LL);
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214);
                }
                break;
              case 0x18:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_125;
                DXGADAPTER::QueryWDDM2_0Caps(v180, (struct _D3DKMT_WDDM_2_0_CAPS *)v41);
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214);
                break;
              case 0x19:
                if ( (_DWORD)Size != 78 )
                  goto LABEL_125;
                LODWORD(v56) = DXGADAPTER::QueryNodeMetadata(v180, *v41, (struct _DXGK_NODEMETADATA *)(v41 + 1));
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214);
                break;
              case 0x1A:
                if ( (_DWORD)Size != 520 )
                  goto LABEL_125;
                v89 = v180;
                v139 = *((_QWORD *)v180 + 338);
                *(_WORD *)v41 = 0;
                v90 = RtlStringCbCopyNW(
                        (char *)v41,
                        0x1C0000000LL,
                        *(char **)(v139 + 528),
                        *(unsigned __int16 *)(v139 + 520));
                goto LABEL_127;
              case 0x1B:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_125;
                *v41 = (*((_DWORD *)v185 + 87) >> 9) & 1;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214);
                break;
              case 0x1C:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_125;
                *v41 = (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v180 + 338) + 16LL) + 2052LL) & 0x10) != 0;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214);
                break;
              case 0x1D:
                if ( (_DWORD)Size != 520 )
                  goto LABEL_125;
                v89 = v180;
                v140 = *((_QWORD *)v180 + 338);
                *(_WORD *)v41 = 0;
                v90 = RtlStringCbCopyNW(
                        (char *)v41,
                        0x1C0000000LL,
                        *(char **)(v140 + 544),
                        *(unsigned __int16 *)(v140 + 536));
                goto LABEL_127;
              case 0x1E:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_125;
                if ( *((int *)v180 + 582) < 0x2000 )
                  *v41 = 1;
                else
                  *v41 = *((_DWORD *)v180 + 70);
                goto LABEL_361;
              case 0x1F:
                if ( (_DWORD)Size != 28 )
                  goto LABEL_125;
                v141 = *v41;
                if ( *((int *)v180 + 582) < 0x2000 )
                  v142 = 1LL;
                else
                  v142 = *((unsigned int *)v180 + 70);
                v143 = *v41;
                if ( (unsigned int)v141 < (unsigned int)v142 )
                {
                  _mm_lfence();
                  v144 = *(_DWORD **)(*(_QWORD *)(360 * v143 + *((_QWORD *)v180 + 323) + 8) + 64LL);
                  v41[1] = v144[281];
                  v41[2] = v144[282];
                  v41[3] = v144[283];
                  v41[4] = v144[284];
                  v41[5] = v144[285];
                  v41[6] = v144[280];
                  LODWORD(v56) = 0;
                  LODWORD(v82) = HIDWORD(Src[0]);
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214);
                  break;
                }
                LODWORD(v56) = -1073741811;
                v88 = WdLogNewEntry5_WdWarning(v142, v141, v85);
                *(_QWORD *)(v88 + 24) = v143;
                goto LABEL_366;
              case 0x20:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_125;
                QueryDriverCapsExt(v85, (struct _D3DKMT_DRIVERCAPS_EXT *)v41);
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214);
                break;
              case 0x21:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_125;
                v211 = 0LL;
                v212 = 0;
                v145 = DxgkMiracastQueryMiracastSupportInternal(&v211);
                v149 = v145;
                if ( v145 == -1073741637 )
                  goto LABEL_232;
                if ( v145 < 0 )
                {
                  LODWORD(v56) = v145;
                  v88 = WdLogNewEntry5_WdWarning(v147, v146, v148);
                  *(_QWORD *)(v88 + 24) = v149;
                  goto LABEL_367;
                }
                *v41 = 2 - (BYTE8(v211) != 0);
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214);
                break;
              case 0x22:
                if ( (_DWORD)Size != 12 )
                  goto LABEL_125;
                if ( *((int *)v180 + 582) < 0x2000 )
                  v150 = 1LL;
                else
                  v150 = *((unsigned int *)v180 + 70);
                if ( (*((_DWORD *)v180 + 515) & 0x40) == 0 )
                {
                  LODWORD(v56) = -1073741811;
                  v88 = WdLogNewEntry5_WdWarning(v150, v180, v85);
                  *(_QWORD *)(v88 + 24) = -1073741811LL;
                  goto LABEL_367;
                }
                if ( *v41 >= (unsigned int)v150 )
                {
                  LODWORD(v56) = -1073741811;
                  v88 = WdLogNewEntry5_WdWarning(v150, v180, v85);
                  *(_QWORD *)(v88 + 24) = *v41;
                  goto LABEL_366;
                }
                ADAPTER_RENDER::QueryGpuMmuCaps(
                  *((ADAPTER_RENDER **)v180 + 338),
                  *v41,
                  (struct _D3DKMT_GPUMMU_CAPS *)(v41 + 1));
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214);
                break;
              case 0x23:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_125;
                LOBYTE(v6) = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v180 + 338) + 16LL) + 2637LL) != 0;
                *v41 = v6;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214);
                break;
              case 0x24:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_125;
                *v41 = *((_DWORD *)DXGGLOBAL::GetGlobal(v84, 0x1C0000000LL) + 342);
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214);
                break;
              case 0x25:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_125;
                LOBYTE(v6) = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v180 + 338) + 16LL) + 2638LL) != 0;
                *v41 = v6;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214);
                break;
              case 0x26:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_125;
                LOBYTE(v6) = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v180 + 338) + 16LL) + 2639LL) != 0;
                *v41 = v6;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214);
                break;
              case 0x27:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_125;
                LOBYTE(v6) = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v180 + 338) + 16LL) + 2640LL) != 0;
                *v41 = v6;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214);
                break;
              case 0x28:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_125;
                LOBYTE(v6) = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v180 + 338) + 16LL) + 2641LL) != 0;
                *v41 = v6;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214);
                break;
              case 0x29:
                if ( (_DWORD)Size != 24 )
                  goto LABEL_125;
                LODWORD(v56) = DxgkReadPnPRegistryPath(v180, *v41, v41[1], *((_QWORD *)v41 + 1), *((_QWORD *)v41 + 2));
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214);
                break;
              case 0x2A:
                if ( (_DWORD)Size != 56 )
                  goto LABEL_125;
                if ( *((int *)v180 + 582) < 0x2000 )
                  v101 = 1LL;
                else
                  v101 = *((unsigned int *)v180 + 70);
                v102 = *v41;
                if ( (unsigned int)v102 >= (unsigned int)v101 )
                {
                  v103 = WdLogNewEntry5_WdWarning(v101, v102, v85);
                  *(_QWORD *)(v103 + 24) = *v41;
                  *(_QWORD *)(v103 + 32) = -1073741811LL;
                  WdLogEvent5_WdWarning(v103);
LABEL_361:
                  LODWORD(v56) = 0;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214);
                }
                else
                {
                  (*(void (__fastcall **)(_QWORD, __int64, unsigned int *, unsigned int *, unsigned int *, unsigned int *, unsigned int *, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v180 + 338) + 640LL) + 8LL) + 80LL))(
                    *(_QWORD *)(*((_QWORD *)v180 + 338) + 648LL),
                    v102,
                    v41 + 8,
                    v41 + 10,
                    v41 + 12,
                    v41 + 2,
                    v41 + 4,
                    v41 + 6);
                  LODWORD(v56) = 0;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214);
                }
                break;
              case 0x2B:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_125;
                LOBYTE(v6) = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v180 + 338) + 16LL) + 2642LL) != 0;
                *v41 = v6;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214);
                break;
              case 0x2C:
                if ( (_DWORD)Size != 1 )
                  goto LABEL_125;
                *(_BYTE *)v41 = 1;
                v151 = v180;
                if ( *((_DWORD *)v180 + 81) != 1297040209 )
                  goto LABEL_368;
                wcscpy(Str2, L"Qualcomm Adreno 530");
                if ( wcsncmp(*((const wchar_t **)v180 + 189), Str2, 0x14uLL)
                  || (*(_DWORD *)(*((_QWORD *)v151 + 323) + 16LL) & 0x10) != 0 )
                {
                  goto LABEL_368;
                }
                *(_BYTE *)v41 = 0;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214);
                break;
              case 0x2D:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_125;
                v152 = v180;
                if ( !ADAPTER_RENDER::IsMultiPlaneOverlaySupported(*((ADAPTER_RENDER **)v180 + 338))
                  || (v153 = *(_QWORD *)(*((_QWORD *)v152 + 338) + 16LL), *(_QWORD *)(v153 + 1152))
                  && *(_BYTE *)(v153 + 2642)
                  || *(_QWORD *)(v153 + 1160) && *(_BYTE *)(v153 + 2642) )
                {
                  *v41 = 1;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214);
                }
                else
                {
LABEL_232:
                  *v41 = 0;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214);
                }
                break;
              case 0x2E:
                if ( (_DWORD)Size != 12 )
                  goto LABEL_125;
                if ( v41[1] )
                {
                  v154 = *v41;
                  if ( (unsigned int)v154 >= 0x10 )
                    goto LABEL_368;
                  *(_BYTE *)(v154 + *((_QWORD *)v180 + 338) + 1088) = v41[2] != 0;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214);
                }
                else
                {
                  v155 = (ADAPTER_RENDER *)*((_QWORD *)v180 + 338);
                  v156 = *v41;
                  if ( ADAPTER_RENDER::IsMultiPlaneOverlaySupported(v155) && (unsigned int)v156 < 0x10 )
                  {
                    LOBYTE(v6) = *((_BYTE *)v155 + v156 + 1088) != 0;
                    v41[2] = v6;
                    DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214);
                  }
                  else
                  {
                    LOBYTE(v6) = 0;
                    v41[2] = v6;
                    DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214);
                  }
                }
                break;
              case 0x2F:
                if ( (_DWORD)Size != 8 )
                  goto LABEL_125;
                v200 = 0LL;
                DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v201, *v41, (struct _KTHREAD **)v190, &v200);
                if ( v200 )
                {
                  *((_BYTE *)v41 + 4) = *((_BYTE *)v200 + 1906);
                  LODWORD(v56) = 0;
                }
                else
                {
                  v159 = WdLogNewEntry5_WdError(v158, v157);
                  *(_QWORD *)(v159 + 24) = *v41;
                  WdLogEvent5_WdError(v159);
                  LODWORD(v56) = -1073741811;
                }
                if ( !v201 )
                  goto LABEL_368;
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v201 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v201 + 2), v201);
                LODWORD(v82) = HIDWORD(Src[0]);
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214);
                break;
              case 0x30:
                if ( (*((_BYTE *)v190 + 348) & 4) != 0 )
                {
                  HostSilo = PsGetHostSilo();
                  v6 = PsAttachSiloToCurrentThread(HostSilo);
                }
                LODWORD(v56) = DxgkpQueryRegistry(v180, v41, Size);
                if ( !v6 )
                  goto LABEL_368;
                PsAttachSiloToCurrentThread(v6);
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214);
                break;
              case 0x31:
                if ( (_DWORD)Size != 8 )
                  goto LABEL_125;
                LODWORD(v56) = ADAPTER_RENDER::GetKmdFileVersion(
                                 *((ADAPTER_RENDER **)v180 + 338),
                                 (union _LARGE_INTEGER *)v41);
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214);
                break;
              case 0x32:
              case 0x33:
                if ( (unsigned int)Size < 8 )
                  goto LABEL_125;
                LOBYTE(v83) = HIDWORD(Src[0]) == 50;
                LODWORD(v56) = DpiReadBlockListInfo(*((_QWORD *)v180 + 27), v41, (unsigned int)Size, v83);
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214);
                break;
              case 0x3C:
                if ( (_DWORD)Size != 80 )
                  goto LABEL_125;
                v110 = v185;
                v111 = *((_QWORD *)v185 + 27);
                if ( !v111 )
                {
                  v112 = WdLogNewEntry5_WdAssertion(0LL, 0x1C0000000uLL);
                  *(_QWORD *)(v112 + 24) = 3749LL;
                  WdLogEvent5_WdAssertion(v112);
                  v111 = *((_QWORD *)v110 + 27);
                }
                AdapterUniqueGUID = (const void **)DpiFdoGetAdapterUniqueGUID(v111);
                if ( AdapterUniqueGUID )
                {
                  *(_OWORD *)v41 = 0LL;
                  *((_OWORD *)v41 + 1) = 0LL;
                  *((_OWORD *)v41 + 2) = 0LL;
                  *((_OWORD *)v41 + 3) = 0LL;
                  *((_OWORD *)v41 + 4) = 0LL;
                  v114 = *(unsigned __int16 *)AdapterUniqueGUID;
                  if ( *(unsigned __int16 *)AdapterUniqueGUID >= 0x4Eu )
                    v114 = 78LL;
                  memmove(v41, AdapterUniqueGUID[1], v114);
                  LODWORD(v56) = 0;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214);
                }
                else
                {
LABEL_165:
                  LODWORD(v56) = -1073741823;
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214);
                }
                break;
              case 0x3D:
                if ( (_DWORD)Size != 56 )
                  goto LABEL_125;
                LODWORD(v56) = DXGADAPTER::GetNodePerfData(v180, (struct _D3DKMT_NODE_PERFDATA *)v41);
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214);
                break;
              case 0x3E:
                if ( (_DWORD)Size != 64 )
                  goto LABEL_125;
                LODWORD(v56) = DXGADAPTER::GetAdapterPerfData(v180, (struct _D3DKMT_ADAPTER_PERFDATA *)v41);
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214);
                break;
              case 0x3F:
                if ( (_DWORD)Size != 40 )
                  goto LABEL_125;
                LODWORD(v56) = DXGADAPTER::GetAdapterPerfDataCaps(v180, (struct _D3DKMT_ADAPTER_PERFDATACAPS *)v41);
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214);
                break;
              case 0x40:
                if ( (_DWORD)Size != 132 )
                  goto LABEL_125;
                LODWORD(v56) = DXGADAPTER::GetGpuVersion(v180, (struct _D3DKMT_GPUVERSION *)v41);
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214);
                break;
              case 0x41:
              case 0x42:
                if ( (_DWORD)Size != 0x2000 )
                  goto LABEL_125;
                LODWORD(v56) = -1073741823;
                v160 = v180;
                if ( HIDWORD(Src[0]) == 65 )
                  v160 = v185;
                if ( !v160 )
                  goto LABEL_368;
                DXGADAPTER::GetDeviceDescriptor(v160, 0x2000u, (unsigned __int16 *)v41);
                LODWORD(v56) = 0;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214);
                break;
              case 0x44:
                if ( (_DWORD)Size != 1 )
                  goto LABEL_125;
                if ( v180 )
                  *(_BYTE *)v41 = *((_BYTE *)v180 + 210);
                else
                  *(_BYTE *)v41 = 0;
                goto LABEL_361;
              case 0x46:
                if ( (_DWORD)Size != 4 )
                  goto LABEL_125;
                DXGADAPTER::QueryWDDM2_7Caps(v180, (struct _D3DKMT_WDDM_2_7_CAPS *)v41);
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214);
                break;
              case 0x47:
                if ( (_DWORD)Size != 524 )
                  goto LABEL_125;
                v161 = v180;
                v162 = *((_QWORD *)v180 + 338);
                v163 = *v41;
                if ( (_DWORD)v163 )
                {
                  LODWORD(v56) = -1073741811;
                }
                else
                {
                  DisplayUMDFileName = (const struct _UNICODE_STRING *)ADAPTER_RENDER::GetDisplayUMDFileName(v162);
                  if ( (unsigned int)IsNullUmdDriver(DisplayUMDFileName) )
                  {
                    LODWORD(v56) = -1073741811;
                  }
                  else
                  {
                    LODWORD(v56) = RtlStringCbCopyNW((char *)v41 + 4, v163, v165[1], *(unsigned __int16 *)v165);
                    if ( (int)v56 >= 0 )
                      goto LABEL_368;
                  }
                }
                v93 = (_QWORD *)WdLogNewEntry5_WdEvent(v162, v163);
                v93[3] = v41;
                v93[4] = v161;
                v93[5] = (int)v56;
LABEL_129:
                WdLogEvent5_WdEvent(v93);
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214);
                break;
              case 0x48:
                if ( (_DWORD)Size == 12 )
                {
                  LODWORD(v56) = DXGADAPTER::QueryTrackedWorkloadSupport(
                                   v180,
                                   *v41,
                                   (enum DXGK_ENGINE_TYPE)v41[1],
                                   (int *)v41 + 2);
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214);
                }
                else
                {
LABEL_125:
                  LODWORD(v56) = -1073741811;
                  v88 = WdLogNewEntry5_WdWarning(v84, 0x1C0000000uLL, v85);
                  *(_QWORD *)(v88 + 24) = v47;
LABEL_366:
                  *(_QWORD *)(v88 + 32) = -1073741811LL;
LABEL_367:
                  WdLogEvent5_WdWarning(v88);
LABEL_368:
                  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214);
                }
                break;
              default:
                LODWORD(v56) = -1073741811;
                v88 = WdLogNewEntry5_WdWarning(v84, 0x1C0000000uLL, v85);
                *(_QWORD *)(v88 + 24) = v82;
                goto LABEL_366;
            }
LABEL_382:
            if ( (int)v56 >= 0 && (*((_BYTE *)v190 + 348) & 4) != 0 )
              LODWORD(v56) = PostProcessUMDFileName((enum _KMTQUERYADAPTERINFOTYPE)v82, v41, Size);
            goto LABEL_385;
          }
        }
      }
      LODWORD(v56) = -1073741130;
      DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214);
    }
LABEL_385:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v215, v87);
    goto LABEL_386;
  }
  v205 = v66;
  v206 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v204);
  if ( *((_DWORD *)v66 + 50) == 1 )
  {
    *(void **)&v213.hAdapter = Src[0];
    *(_QWORD *)&v213.PrivateDriverDataSize = Size;
    v213.pPrivateDriverData = v41;
    v74 = v195;
    v75 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryAdapterInfo(
            (struct DXGADAPTER *)((char *)v180 + 4240),
            v190,
            &v213,
            v195);
    v56 = v75;
    if ( v75 >= 0 )
    {
      LODWORD(v56) = PostProcessUMDFileName(SHIDWORD(Src[0]), v41, v74);
      if ( v206 )
LABEL_106:
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v204);
    }
    else
    {
      v79 = (_QWORD *)WdLogNewEntry5_WdWarning(v77, v76, v78);
      v79[3] = LODWORD(Src[0]);
      v79[4] = v56;
      v79[5] = 3360LL;
      WdLogEvent5_WdWarning(v79);
      if ( v206 )
        goto LABEL_106;
    }
  }
  else
  {
    LODWORD(v56) = -1073741130;
    if ( v206 )
      goto LABEL_106;
  }
LABEL_386:
  if ( (int)v56 >= 0 )
  {
    v176 = Src[1];
    if ( v184 && ((char *)Src[1] + v47 > (void *)MmUserProbeAddress || (char *)Src[1] + v47 <= Src[1]) )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v176, v41, v47);
  }
  operator delete[](v41);
  if ( v198 && _InterlockedExchangeAdd64((volatile signed __int64 *)v198 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v198 + 2), v198);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v186, v177);
  if ( v188 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v178, &EventProfilerExit, v179, v186);
  return (unsigned int)v56;
}
