/*
 * XREFs of ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00EE230
 * Callers:
 *     DxgkQueryAdapterInfo @ 0x1C00EE210 (DxgkQueryAdapterInfo.c)
 *     ?VmBusQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0240EE0 (-VmBusQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C0008D70 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?QueryWDDM1_2Caps@DXGADAPTER@@QEBAXPEAU_D3DKMT_WDDM_1_2_CAPS@@@Z @ 0x1C0009C84 (-QueryWDDM1_2Caps@DXGADAPTER@@QEBAXPEAU_D3DKMT_WDDM_1_2_CAPS@@@Z.c)
 *     ?RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C0009DA0 (-RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D3D0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D42C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?GetDeviceDescriptor@DXGADAPTER@@QEBAXKPEAG@Z @ 0x1C000D48C (-GetDeviceDescriptor@DXGADAPTER@@QEBAXKPEAG@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000E2A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000E2C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C000E994 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000ECD8 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C001188C (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@0E@Z @ 0x1C0024748 (--0DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@0E@Z.c)
 *     ??1DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C0024814 (--1DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Release@DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0024880 (-Release@DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     DxgkInvalidateDeviceState @ 0x1C0050968 (DxgkInvalidateDeviceState.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00DB790 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?QueryWDDM1_3Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_1_3_CAPS@@@Z @ 0x1C00EF4C4 (-QueryWDDM1_3Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_1_3_CAPS@@@Z.c)
 *     ?CopyUmdFileName@ADAPTER_RENDER@@QEBAJPEAU_D3DKMT_UMDFILENAMEINFO@@@Z @ 0x1C00EF540 (-CopyUmdFileName@ADAPTER_RENDER@@QEBAJPEAU_D3DKMT_UMDFILENAMEINFO@@@Z.c)
 *     ?IsNullUmdDriver@@YAHAEBU_UNICODE_STRING@@@Z @ 0x1C00EF59C (-IsNullUmdDriver@@YAHAEBU_UNICODE_STRING@@@Z.c)
 *     ?GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C00EF648 (-GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C00F05E8 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     DpiIsDriverUpdateInProgress @ 0x1C00F154C (DpiIsDriverUpdateInProgress.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C00FA130 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C00FA240 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FBEF0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x1C014CA3C (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     ?QueryGpuMmuCaps@ADAPTER_RENDER@@QEBAXIPEAU_D3DKMT_GPUMMU_CAPS@@@Z @ 0x1C014D0A0 (-QueryGpuMmuCaps@ADAPTER_RENDER@@QEBAXIPEAU_D3DKMT_GPUMMU_CAPS@@@Z.c)
 *     ?QueryNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z @ 0x1C0150E44 (-QueryNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z.c)
 *     ?QueryWDDM2_0Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_2_0_CAPS@@@Z @ 0x1C0153E80 (-QueryWDDM2_0Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_2_0_CAPS@@@Z.c)
 *     ?DxgkpQueryRegistry@@YAJPEAVDXGADAPTER@@PEAXI@Z @ 0x1C0160270 (-DxgkpQueryRegistry@@YAJPEAVDXGADAPTER@@PEAXI@Z.c)
 *     DpiReadBlockListInfo @ 0x1C0161994 (DpiReadBlockListInfo.c)
 *     ?QueryWDDM2_7Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_2_7_CAPS@@@Z @ 0x1C0161A78 (-QueryWDDM2_7Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_2_7_CAPS@@@Z.c)
 *     DpiFdoGetAdapterUniqueGUID @ 0x1C0161B90 (DpiFdoGetAdapterUniqueGUID.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C0161CE4 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     ?GetKmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C016EEB4 (-GetKmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 *     ?GetAdapterPerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATA@@@Z @ 0x1C0208FF0 (-GetAdapterPerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATA@@@Z.c)
 *     ?GetAdapterPerfDataCaps@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATACAPS@@@Z @ 0x1C0209198 (-GetAdapterPerfDataCaps@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATACAPS@@@Z.c)
 *     ?GetGpuVersion@DXGADAPTER@@QEAAJPEAU_D3DKMT_GPUVERSION@@@Z @ 0x1C0209228 (-GetGpuVersion@DXGADAPTER@@QEAAJPEAU_D3DKMT_GPUVERSION@@@Z.c)
 *     ?GetNodePerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_NODE_PERFDATA@@@Z @ 0x1C02092B4 (-GetNodePerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_NODE_PERFDATA@@@Z.c)
 *     ?QueryTrackedWorkloadSupport@DXGADAPTER@@QEAAJIW4DXGK_ENGINE_TYPE@@PEAH@Z @ 0x1C020AB20 (-QueryTrackedWorkloadSupport@DXGADAPTER@@QEAAJIW4DXGK_ENGINE_TYPE@@PEAH@Z.c)
 *     ?CopyDListFileName@ADAPTER_RENDER@@QEBAJPEAGI@Z @ 0x1C021157C (-CopyDListFileName@ADAPTER_RENDER@@QEBAJPEAGI@Z.c)
 *     ?GetDisplayUMDFileName@ADAPTER_RENDER@@AEBAAEBU_UNICODE_STRING@@W4_KMT_DISPLAY_UMD_VERSION@@@Z @ 0x1C02121DC (-GetDisplayUMDFileName@ADAPTER_RENDER@@AEBAAEBU_UNICODE_STRING@@W4_KMT_DISPLAY_UMD_VERSION@@@Z.c)
 *     ?DxgkReadPnPRegistryPath@@YAJPEAVDXGADAPTER@@IW4_DXGK_PNP_KEY_TYPE@@PEAGPEAI@Z @ 0x1C021D568 (-DxgkReadPnPRegistryPath@@YAJPEAVDXGADAPTER@@IW4_DXGK_PNP_KEY_TYPE@@PEAGPEAI@Z.c)
 *     ?PostProcessUMDFileName@@YAJW4_KMTQUERYADAPTERINFOTYPE@@PEAXI@Z @ 0x1C021DE98 (-PostProcessUMDFileName@@YAJW4_KMTQUERYADAPTERINFOTYPE@@PEAXI@Z.c)
 *     ?QueryDriverCapsExt@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRIVERCAPS_EXT@@@Z @ 0x1C021DF94 (-QueryDriverCapsExt@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRIVERCAPS_EXT@@@Z.c)
 *     ?VmBusSendQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYADAPTERINFO@@I@Z @ 0x1C02464F4 (-VmBusSendQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYADA.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C026494C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x1C0298258 (-RunForAdapter@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@@@SAJPEAVDXGADAPTER@@_NIP.c)
 *     DpiQueryAdapterRegistryInfo @ 0x1C02C2630 (DpiQueryAdapterRegistryInfo.c)
 */

__int64 __fastcall DxgkQueryAdapterInfoInternal(
        const struct _D3DKMT_QUERYADAPTERINFO *a1,
        char a2,
        struct DXGADAPTER *a3)
{
  const struct _D3DKMT_QUERYADAPTERINFO *v5; // rdi
  __int64 v6; // r15
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v9; // rdx
  ULONG64 v10; // rcx
  __int64 v11; // r8
  DXGPROCESS *v12; // rbx
  __int128 v13; // xmm0
  size_t v14; // xmm1_8
  size_t v15; // rbx
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned int *v20; // r13
  unsigned __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  struct DXGADAPTER **v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  DXGADAPTER *v43; // rsi
  __int64 v44; // rdx
  __int64 v45; // rcx
  struct DXGADAPTER *v46; // rbx
  struct DXGADAPTER *v47; // r14
  struct DXGADAPTER *v48; // rbx
  int v49; // eax
  bool v50; // cl
  ADAPTER_DISPLAY **v51; // rdi
  signed __int64 v52; // rax
  __int64 v53; // r14
  __int64 v54; // r9
  __int64 v55; // rcx
  struct DXGADAPTER *v56; // r8
  struct DXGADAPTER *v57; // rdi
  DXGADAPTER *v58; // rcx
  unsigned int *v59; // rax
  unsigned int v60; // ecx
  DXGPROCESS *v61; // rsi
  size_t v62; // rdi
  __int64 v63; // rdx
  void *v64; // rcx
  size_t v65; // r8
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  DXGADAPTER *v69; // rdi
  DXGADAPTER *v70; // rcx
  DXGADAPTER *v71; // r11
  DXGADAPTER *v72; // rcx
  struct DXGADAPTER *v73; // rdi
  int v74; // eax
  __int64 v75; // rdx
  __int64 v76; // rcx
  int v77; // ecx
  char v78; // cl
  DXGADAPTER *v79; // rax
  int v80; // edx
  __int64 v81; // rdi
  __int64 v82; // rax
  char v83; // cl
  DXGADAPTER *v84; // rdi
  int v85; // eax
  unsigned __int8 IsDriverUpdateInProgress; // al
  __int64 v87; // rax
  __int64 v88; // rcx
  __int64 v89; // rdi
  _DWORD *v90; // rcx
  struct DXGADAPTER *v91; // rbx
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // rcx
  __int64 v96; // rax
  __int64 v97; // rcx
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // rdx
  __int64 v102; // rcx
  const void **AdapterUniqueGUID; // rbx
  size_t v104; // r8
  DXGADAPTER *v105; // rcx
  struct DXGTHREAD *Current; // rax
  __int64 v107; // rax
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r8
  bool v111; // zf
  __int64 v112; // rdx
  __int64 v113; // rax
  DXGADAPTER *v114; // rcx
  __int64 v115; // rax
  __int64 v116; // rax
  __int64 v117; // rdx
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // rcx
  unsigned int v123; // edi
  int v124; // eax
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // r8
  _QWORD *v128; // rax
  __int64 HostSilo; // rax
  __int64 v130; // rax
  _QWORD *v131; // rax
  __int64 v132; // r8
  unsigned __int64 v133; // r9
  char *v134; // r8
  __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // rax
  __int64 v138; // rcx
  __int64 v139; // rdx
  __int64 v140; // rax
  __int64 v141; // rdx
  __int64 v142; // rcx
  struct DXGADAPTER *v143; // rax
  __int64 v144; // rax
  struct DXGADAPTER *v145; // rax
  __int64 v146; // rcx
  struct DXGADAPTER *v147; // rcx
  void *v148; // rbx
  __int64 v149; // rdx
  DXGADAPTER *v150; // rcx
  __int64 v151; // r8
  unsigned __int64 v152; // r9
  char *v153; // r8
  __int64 v154; // r8
  int v155; // eax
  int v156; // eax
  __int64 v157; // rdx
  __int64 v158; // rcx
  __int64 v159; // r8
  __int64 v160; // rdi
  int v161; // ecx
  __int64 v162; // rcx
  __int64 v163; // rax
  ADAPTER_RENDER *v164; // rdi
  __int64 v165; // rbx
  char v166; // cl
  __int64 v167; // rax
  struct DXGADAPTER *v168; // rdi
  __int64 v169; // rcx
  __int64 v170; // rdx
  const struct _UNICODE_STRING *DisplayUMDFileName; // rax
  char **v172; // r8
  __int64 v173; // rdx
  __int64 v174; // rax
  int v175; // eax
  __int64 v176; // rcx
  __int64 v177; // r8
  __int64 v178; // rax
  __int64 v179; // rax
  size_t v180; // [rsp+50h] [rbp-2A8h]
  DXGPROCESS *v181; // [rsp+58h] [rbp-2A0h]
  struct DXGADAPTER *v182; // [rsp+68h] [rbp-290h] BYREF
  void *Src[2]; // [rsp+70h] [rbp-288h]
  size_t Size; // [rsp+80h] [rbp-278h]
  char v185; // [rsp+88h] [rbp-270h] BYREF
  char v186; // [rsp+89h] [rbp-26Fh]
  DXGADAPTER *v187; // [rsp+90h] [rbp-268h] BYREF
  int v188; // [rsp+98h] [rbp-260h] BYREF
  __int64 v189; // [rsp+A0h] [rbp-258h]
  char v190; // [rsp+A8h] [rbp-250h]
  struct DXGADAPTER *v191; // [rsp+B0h] [rbp-248h] BYREF
  unsigned int v192; // [rsp+B8h] [rbp-240h]
  BOOL IsRemoteConnection; // [rsp+C0h] [rbp-238h]
  _D3DKMT_WDDM_1_3_CAPS v194; // [rsp+C4h] [rbp-234h] BYREF
  unsigned int v195; // [rsp+C8h] [rbp-230h] BYREF
  unsigned int v196; // [rsp+CCh] [rbp-22Ch]
  unsigned int v197; // [rsp+D0h] [rbp-228h] BYREF
  __int64 v198; // [rsp+D8h] [rbp-220h] BYREF
  struct DXGADAPTER *v199; // [rsp+E0h] [rbp-218h] BYREF
  struct DXGDEVICE *v200; // [rsp+F0h] [rbp-208h] BYREF
  void *v201; // [rsp+F8h] [rbp-200h]
  unsigned int *v202; // [rsp+100h] [rbp-1F8h]
  unsigned __int64 v203; // [rsp+108h] [rbp-1F0h] BYREF
  struct DXGDEVICE *v204; // [rsp+110h] [rbp-1E8h] BYREF
  char v205[8]; // [rsp+118h] [rbp-1E0h] BYREF
  struct DXGADAPTER *v206; // [rsp+120h] [rbp-1D8h]
  char v207; // [rsp+128h] [rbp-1D0h]
  unsigned __int64 v208; // [rsp+130h] [rbp-1C8h] BYREF
  _DXGKARG_QUERYADAPTERINFO v209; // [rsp+140h] [rbp-1B8h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v210; // [rsp+170h] [rbp-188h] BYREF
  __int128 v211; // [rsp+1A0h] [rbp-158h] BYREF
  int v212; // [rsp+1B0h] [rbp-148h]
  _D3DKMT_QUERYADAPTERINFO v213; // [rsp+1B8h] [rbp-140h] BYREF
  _BYTE v214[64]; // [rsp+1D0h] [rbp-128h] BYREF
  _BYTE v215[144]; // [rsp+210h] [rbp-E8h] BYREF
  wchar_t Str2[20]; // [rsp+2A0h] [rbp-58h] BYREF

  v186 = a2;
  v5 = a1;
  v188 = -1;
  v6 = 0LL;
  v189 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v190 = 1;
    v188 = 2015;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 2015);
  }
  else
  {
    v190 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v188, 2015LL);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v12 = (DXGPROCESS *)ProcessDxgProcess;
  if ( (ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
     || (Current = DXGTHREAD::GetCurrent()) == 0LL
     || (v181 = (DXGPROCESS *)*((_QWORD *)Current + 1)) == 0LL)
    && (v181 = v12) == 0LL
    || a3 && a2 )
  {
    v107 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v107 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v107);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v188, v108);
    v111 = v190 == 0;
LABEL_261:
    if ( v111 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225485LL;
    goto LABEL_276;
  }
  v201 = 0LL;
  if ( a2 )
  {
    v10 = MmUserProbeAddress;
    if ( (unsigned __int64)v5 >= MmUserProbeAddress )
      v5 = (const struct _D3DKMT_QUERYADAPTERINFO *)MmUserProbeAddress;
    v13 = *(_OWORD *)&v5->hAdapter;
    v14 = *(_QWORD *)&v5->PrivateDriverDataSize;
  }
  else
  {
    v13 = *(_OWORD *)&v5->hAdapter;
    v14 = *(_QWORD *)&v5->PrivateDriverDataSize;
  }
  Size = v14;
  *(_OWORD *)Src = v13;
  if ( *((_QWORD *)&v13 + 1) )
  {
    v15 = (unsigned int)Size;
    if ( (_DWORD)Size )
    {
      v16 = (Size + 7) & 0xFFFFFFF8;
      v196 = v16;
      if ( v16 < (unsigned int)Size )
      {
        v31 = WdLogNewEntry5_WdWarning(v10, v9, v11);
        *(_QWORD *)(v31 + 24) = -1073741811LL;
        *(_QWORD *)(v31 + 32) = 3131LL;
        WdLogEvent5_WdWarning(v31);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v188, v32);
        if ( v190 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v33, &EventProfilerExit, v34, v188);
        return 3221225485LL;
      }
      else
      {
        v20 = (unsigned int *)operator new[](v16, 0x4B677844u, (POOL_TYPE)512);
        v202 = v20;
        v201 = v20;
        if ( v20 )
        {
          v21 = SHIDWORD(Src[0]);
          if ( SHIDWORD(Src[0]) >= 17 && SHIDWORD(Src[0]) < 23
            || SHIDWORD(Src[0]) >= 10 && SHIDWORD(Src[0]) < 16
            || SHIDWORD(Src[0]) < 7 && SHIDWORD(Src[0]) >= 2 )
          {
LABEL_17:
            v180 = (unsigned int)Size;
            memset(v20, 0, (unsigned int)Size);
          }
          else
          {
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
                v180 = (unsigned int)Size;
                if ( v186 )
                {
                  if ( (unsigned __int64)(unsigned int)Size + *((_QWORD *)&v13 + 1) < *((_QWORD *)&v13 + 1)
                    || (unsigned __int64)(unsigned int)Size + *((_QWORD *)&v13 + 1) > MmUserProbeAddress )
                  {
                    *(_BYTE *)MmUserProbeAddress = 0;
                  }
                  memmove(v20, *((const void **)&v13 + 1), v15);
                }
                else
                {
                  memmove(v20, *((const void **)&v13 + 1), (unsigned int)Size);
                }
                break;
              default:
                goto LABEL_17;
            }
          }
          IsRemoteConnection = 0;
          if ( (_DWORD)v21 == 16 )
            IsRemoteConnection = DXGPROCESS::IsRemoteConnection(v181);
          v187 = a3;
          if ( a3 )
            v39 = 0LL;
          else
            v39 = &v187;
          DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
            (DXGADAPTERBYHANDLE *)&v199,
            LODWORD(Src[0]),
            (struct _KTHREAD **)v181,
            v39,
            1);
          v43 = v187;
          if ( v187 )
          {
            v192 = 0;
            if ( (_DWORD)v21 != 9 )
            {
              if ( (_DWORD)v21 != 67 )
              {
LABEL_53:
                v182 = 0LL;
                v191 = 0LL;
                v203 = 0LL;
                v208 = 0LL;
                LODWORD(v46) = DxgkpGetPairingAdapters(v187, v192, &v182, &v203, &v191, &v208, 0);
                if ( (int)v46 >= 0 || (_DWORD)v21 == 9 || (_DWORD)v21 == 67 )
                {
                  v47 = v191;
                }
                else
                {
                  v47 = 0LL;
                  v191 = 0LL;
                  LODWORD(v46) = DxgkpGetPairingAdapters(v43, v192, &v182, &v203, 0LL, 0LL, 0);
                }
                if ( (int)v46 < 0 )
                {
                  v118 = WdLogNewEntry5_WdError(v45, v44);
                  *(_QWORD *)(v118 + 24) = v43;
                  *(_QWORD *)(v118 + 32) = v192;
                  WdLogEvent5_WdError(v118);
                  operator delete[](v20);
                  if ( v199 )
                    DXGADAPTER::ReleaseReferenceNoTracking(v199);
                  goto LABEL_106;
                }
                v48 = v182;
                if ( v182 != v43 && v47 != v43 )
                {
                  v119 = WdLogNewEntry5_WdAssertion(v45, v44);
                  *(_QWORD *)(v119 + 24) = 3306LL;
                  WdLogEvent5_WdAssertion(v119);
                }
                if ( v47 && !*((_QWORD *)v47 + 334) )
                {
                  v120 = WdLogNewEntry5_WdAssertion(v45, v44);
                  *(_QWORD *)(v120 + 24) = 3308LL;
                  WdLogEvent5_WdAssertion(v120);
                }
                if ( !v48 || !*((_QWORD *)v48 + 335) )
                {
                  v121 = WdLogNewEntry5_WdAssertion(v45, v44);
                  *(_QWORD *)(v121 + 24) = 3310LL;
                  WdLogEvent5_WdAssertion(v121);
                }
                v50 = 0;
                if ( (unsigned int)v21 <= 0x1B )
                {
                  v49 = 138619200;
                  if ( _bittest(&v49, v21) )
                    v50 = 1;
                }
                if ( v43 == v48 && *((_BYTE *)v43 + 209) || v48 && *((_BYTE *)v48 + 209) && !v50 )
                {
                  if ( (unsigned int)v21 > 0x39 || (v122 = 0x210F85840908010LL, !_bittest64(&v122, v21)) )
                  {
                    if ( (_DWORD)v21 != 68 )
                    {
                      v206 = v48;
                      v207 = 0;
                      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v205);
                      if ( *((_DWORD *)v48 + 50) == 1 )
                      {
                        *(void **)&v213.hAdapter = Src[0];
                        *(_QWORD *)&v213.PrivateDriverDataSize = Size;
                        v213.pPrivateDriverData = v20;
                        v123 = v196;
                        v124 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryAdapterInfo(
                                 (struct DXGADAPTER *)((char *)v182 + 4208),
                                 v181,
                                 &v213,
                                 v196);
                        v46 = (struct DXGADAPTER *)v124;
                        if ( v124 >= 0 )
                        {
                          LODWORD(v46) = PostProcessUMDFileName(SHIDWORD(Src[0]), v20, v123);
                          if ( !v207 )
                            goto LABEL_291;
                          goto LABEL_290;
                        }
                        v128 = (_QWORD *)WdLogNewEntry5_WdWarning(v126, v125, v127);
                        v128[3] = LODWORD(Src[0]);
                        v128[4] = v46;
                        v128[5] = 3360LL;
                        WdLogEvent5_WdWarning(v128);
                      }
                      else
                      {
                        LODWORD(v46) = -1073741130;
                      }
                      if ( !v207 )
                      {
LABEL_291:
                        v62 = v180;
LABEL_96:
                        if ( (int)v46 >= 0 )
                        {
                          v64 = Src[1];
                          if ( v186 )
                          {
                            v65 = v180;
                            if ( (char *)Src[1] + v180 > (void *)MmUserProbeAddress || (char *)Src[1] + v180 <= Src[1] )
                              *(_BYTE *)MmUserProbeAddress = 0;
                          }
                          else
                          {
                            v65 = v62;
                          }
                          memmove(v64, v20, v65);
                        }
                        operator delete[](v20);
                        if ( v199
                          && _InterlockedExchangeAdd64((volatile signed __int64 *)v199 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                        {
                          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v199 + 2), v199);
                        }
LABEL_106:
                        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v188, v66);
                        if ( v190 )
                        {
                          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
                            McTemplateK0q_EtwWriteTransfer(v67, &EventProfilerExit, v68, v188);
                        }
                        return (unsigned int)v46;
                      }
LABEL_290:
                      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v205);
                      goto LABEL_291;
                    }
                  }
                }
                COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v215, v48, v47);
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v48 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v182 + 2), v182);
                v51 = (ADAPTER_DISPLAY **)v191;
                if ( v191 )
                {
                  v52 = _InterlockedExchangeAdd64((volatile signed __int64 *)v191 + 3, 0xFFFFFFFFFFFFFFFFuLL);
                  v51 = (ADAPTER_DISPLAY **)v191;
                  if ( v52 == 1 )
                    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v191 + 2), v191);
                }
                LODWORD(v53) = HIDWORD(Src[0]);
                if ( HIDWORD(Src[0]) == 9 || HIDWORD(Src[0]) == 67 )
                {
                  LODWORD(v46) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v215, 0LL);
                  if ( (int)v46 < 0 )
                  {
                    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v215, v63);
                    goto LABEL_291;
                  }
                  if ( !v51 || !v51[334] )
                  {
                    v174 = WdLogNewEntry5_WdAssertion(v97, v63);
                    *(_QWORD *)(v174 + 24) = 3393LL;
                    WdLogEvent5_WdAssertion(v174);
                  }
                  if ( (_DWORD)v53 == 9 )
                  {
                    DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(v51[334], *v20);
                    if ( *(_DWORD *)DisplayModeInfo )
                    {
                      *(_OWORD *)(v20 + 1) = *(_OWORD *)DisplayModeInfo;
                      *(_OWORD *)(v20 + 5) = *((_OWORD *)DisplayModeInfo + 1);
                      *(_QWORD *)(v20 + 9) = *((_QWORD *)DisplayModeInfo + 4);
                      v20[11] = *((_DWORD *)DisplayModeInfo + 10);
                    }
                    else
                    {
                      LODWORD(v46) = -1071774919;
                      v179 = WdLogNewEntry5_WdWarning(v99, v63, v100);
                      *(_QWORD *)(v179 + 24) = *v20;
                      *(_QWORD *)(v179 + 32) = v51;
                      WdLogEvent5_WdWarning(v179);
                    }
                  }
                  else if ( (_DWORD)v53 == 67 )
                  {
                    v197 = *v20;
                    v195 = 0;
                    *(_QWORD *)&v210.Type = 33LL;
                    *(_QWORD *)&v210.InputDataSize = 4LL;
                    *(_QWORD *)&v210.Flags.0 = 0LL;
                    HIDWORD(v210.hKmdProcessHandle) = 0;
                    v210.pOutputData = &v195;
                    v210.OutputDataSize = 4;
                    v210.pInputData = &v197;
                    v175 = DXGADAPTER::DdiQueryAdapterInfo((DXGADAPTER *)v51, &v210);
                    v46 = (struct DXGADAPTER *)v175;
                    if ( v175 < 0 )
                    {
                      v178 = WdLogNewEntry5_WdWarning(v176, v63, v177);
                      *(_QWORD *)(v178 + 24) = *v20;
                      *(_QWORD *)(v178 + 32) = v46;
                      WdLogEvent5_WdWarning(v178);
                    }
                    else
                    {
                      v20[1] = v195;
                    }
                  }
                  v62 = v180;
                  v61 = v181;
                  goto LABEL_92;
                }
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::DXGPAIREDADAPTERSTOPRESETLOCKSHARED(
                  (DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214,
                  v182,
                  (struct DXGADAPTER *)v51);
                if ( *((_DWORD *)v187 + 50) == 1 )
                {
                  v55 = *((unsigned int *)v182 + 50);
                  if ( (_DWORD)v55 == 1 )
                  {
                    v56 = v191;
                    if ( !v191 )
                      goto LABEL_81;
                    if ( *((_DWORD *)v191 + 50) == 1 )
                    {
                      v56 = v191;
LABEL_81:
                      v53 = SHIDWORD(Src[0]);
                      switch ( HIDWORD(Src[0]) )
                      {
                        case 0:
                          *(_QWORD *)&v209.Flags.0 = 0LL;
                          HIDWORD(v209.hKmdProcessHandle) = 0;
                          memset(&v209, 0, 24);
                          v209.pOutputData = v20;
                          v209.OutputDataSize = Size;
                          v61 = v181;
                          if ( (*((_BYTE *)v181 + 347) & 0x20) != 0 )
                            v209.Flags.Value = v209.Flags.Value ^ (*(_BYTE *)&v209.Flags.0 ^ (unsigned __int8)(2 * *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v181 + 62) + 496LL) + 296LL))) & 2 | 1;
                          v46 = v182;
                          v81 = *((_QWORD *)v182 + 335);
                          KeEnterCriticalRegion();
                          ExAcquirePushLockSharedEx(v81 + 72, 0LL);
                          v82 = *(_QWORD *)(*((_QWORD *)v181 + 6) + 8LL * *((unsigned int *)v46 + 58));
                          if ( v82 )
                            v209.hKmdProcessHandle = *(HANDLE *)(v82 + 16);
                          ExReleasePushLockSharedEx(v81 + 72, 0LL);
                          KeLeaveCriticalRegion();
                          LODWORD(v46) = DXGADAPTER::DdiQueryAdapterInfo(v46, &v209);
                          goto LABEL_90;
                        case 1:
                          if ( (_DWORD)Size != 524 )
                            goto LABEL_296;
                          v73 = v182;
                          v74 = ADAPTER_RENDER::CopyUmdFileName(
                                  *((ADAPTER_RENDER **)v182 + 335),
                                  (struct _D3DKMT_UMDFILENAMEINFO *)v20);
                          goto LABEL_128;
                        case 2:
                          if ( (_DWORD)Size != 528 )
                            goto LABEL_296;
                          v61 = v181;
                          v132 = *((_QWORD *)v182 + 335);
                          if ( (*((_BYTE *)v181 + 347) & 1) != 0 )
                          {
                            v20[130] = *(_DWORD *)(v132 + 592);
                            v20[131] = *(_DWORD *)(v132 + 596);
                            v133 = *(unsigned __int16 *)(v132 + 576);
                            v134 = *(char **)(v132 + 584);
                          }
                          else
                          {
                            v20[130] = *(_DWORD *)(v132 + 568);
                            v20[131] = *(_DWORD *)(v132 + 572);
                            v133 = *(unsigned __int16 *)(v132 + 552);
                            v134 = *(char **)(v132 + 560);
                          }
                          LODWORD(v46) = RtlStringCbCopyNW((char *)v20, 0x1C0000000LL, v134, v133);
                          if ( (int)v46 < 0 )
                          {
                            v137 = WdLogNewEntry5_WdError(v136, v135);
                            *(_QWORD *)(v137 + 24) = (int)v46;
                            WdLogEvent5_WdError(v137);
                          }
                          goto LABEL_90;
                        case 3:
                          if ( (_DWORD)Size != 24 )
                            goto LABEL_296;
                          v198 = 0LL;
                          (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *, __int64 *, unsigned int *, unsigned int *, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v182 + 335) + 640LL) + 8LL) + 80LL))(
                            *(_QWORD *)(*((_QWORD *)v182 + 335) + 648LL),
                            0LL,
                            &v198,
                            &v198,
                            &v198,
                            v20,
                            v20 + 2,
                            v20 + 4);
                          goto LABEL_88;
                        case 4:
                        case 0x34:
                          if ( (_DWORD)Size != 16 )
                            goto LABEL_296;
                          v143 = v182;
                          if ( HIDWORD(Src[0]) == 4 )
                            v143 = v187;
                          v62 = v180;
                          v61 = v181;
                          if ( v143 )
                          {
                            *(_OWORD *)v20 = *(_OWORD *)((char *)v143 + 284);
                            LODWORD(v46) = 0;
                          }
                          else
                          {
                            LODWORD(v46) = -1073741823;
                          }
                          goto LABEL_91;
                        case 5:
                          if ( (_DWORD)Size != 12 )
                            goto LABEL_296;
                          LODWORD(v46) = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v182 + 335) + 616LL) + 8LL)
                                                                                           + 504LL))(
                                           *(_QWORD *)(*((_QWORD *)v182 + 335) + 624LL),
                                           v20);
                          goto LABEL_89;
                        case 6:
                        case 0x35:
                          if ( (_DWORD)Size != 12 )
                            goto LABEL_296;
                          LODWORD(v46) = -1073741823;
                          v145 = v182;
                          if ( HIDWORD(Src[0]) == 6 )
                            v145 = v187;
                          v62 = v180;
                          v61 = v181;
                          if ( v145 )
                          {
                            v146 = *(_QWORD *)(*((_QWORD *)v145 + 27) + 64LL);
                            *v20 = *(_DWORD *)(v146 + 1144);
                            v20[1] = *(unsigned __int16 *)(v146 + 1150);
                            v20[2] = (unsigned __int16)*(_DWORD *)(v146 + 1148);
                            LODWORD(v46) = 0;
                          }
                          goto LABEL_91;
                        case 7:
                          if ( (_DWORD)Size != 12 )
                            goto LABEL_296;
                          v141 = *(_QWORD *)(*((_QWORD *)v182 + 335) + 640LL);
                          v61 = v181;
                          v142 = *((_QWORD *)v181 + 8);
                          if ( v142 )
                            v6 = *(_QWORD *)(v142 + 8LL * (unsigned int)(*(_DWORD *)v141 - 1));
                          LODWORD(v46) = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)(v141 + 8)
                                                                                            + 376LL))(
                                           v6,
                                           v20);
                          goto LABEL_90;
                        case 8:
                        case 0x36:
                          if ( (_DWORD)Size != 2080 )
                            goto LABEL_296;
                          LODWORD(v46) = -1073741823;
                          v147 = v182;
                          if ( HIDWORD(Src[0]) == 8 )
                            v147 = v187;
                          if ( v147 )
                            LODWORD(v46) = DpiQueryAdapterRegistryInfo(*((_QWORD *)v147 + 27), v20);
                          goto LABEL_89;
                        case 0xB:
                        case 0x37:
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          v83 = 0;
                          v185 = 0;
                          LODWORD(v46) = -1073741823;
                          if ( HIDWORD(Src[0]) == 11 )
                            v84 = v187;
                          else
                            v84 = v182;
                          if ( !v84 )
                            goto LABEL_89;
                          v85 = *((_DWORD *)v84 + 87);
                          if ( (v85 & 0x20) != 0 || (v85 & 4) != 0 )
                          {
                            IsDriverUpdateInProgress = 0;
                          }
                          else
                          {
                            IsDriverUpdateInProgress = DpiIsDriverUpdateInProgress(*((_QWORD *)v84 + 27), &v185);
                            v83 = v185;
                          }
                          *v20 = IsDriverUpdateInProgress;
                          if ( v83 )
                          {
                            v148 = (void *)*((_QWORD *)v84 + 27);
                            ObfReferenceObject(v148);
                            DXGPAIREDADAPTERSTOPRESETLOCKSHARED::Release((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214);
                            DxgkInvalidateDeviceState((__int64)v148);
                            ObfDereferenceObject(v148);
                          }
                          goto LABEL_88;
                        case 0xC:
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          *v20 = 0;
                          *v20 = (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v182 + 335) + 16LL) + 2036LL) >> 5) & 1;
                          goto LABEL_88;
                        case 0xD:
                        case 0x38:
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          LODWORD(v46) = -1073741823;
                          if ( HIDWORD(Src[0]) == 13 )
                            v79 = v187;
                          else
                            v79 = v182;
                          v61 = v181;
                          if ( v79 )
                          {
                            v80 = *((_DWORD *)v79 + 643);
                            *v20 = v80;
                            if ( (*((_BYTE *)v181 + 347) & 0x20) != 0
                              && *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v181 + 62) + 496LL) + 352LL) <= 0x10u )
                            {
                              if ( v80 > 2600 )
                                v80 = 2600;
                              *v20 = v80;
                            }
                            LODWORD(v46) = 0;
                          }
                          goto LABEL_90;
                        case 0xF:
                        case 0x39:
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          LODWORD(v46) = -1073741823;
                          v57 = v182;
                          if ( HIDWORD(Src[0]) == 15 )
                            v58 = v187;
                          else
                            v58 = v182;
                          if ( !v58 )
                            goto LABEL_89;
                          LODWORD(v59) = DXGADAPTER::GetAdapterType(v58);
                          v60 = *v59;
                          *v20 = *v59;
                          if ( v57 )
                            *v20 = v60 ^ ((unsigned __int16)v60 ^ (unsigned __int16)(*((unsigned __int8 *)v57 + 212) << 8)) & 0x100;
                          goto LABEL_88;
                        case 0x10:
                          if ( (_DWORD)Size != 8 )
                            goto LABEL_296;
                          if ( !*((_BYTE *)DXGPROCESS::GetCurrent() + 346) )
                            goto LABEL_208;
                          DXGPAIREDADAPTERSTOPRESETLOCKSHARED::Release((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214);
                          v150 = v187;
                          if ( IsRemoteConnection )
                            v150 = 0LL;
                          LODWORD(v46) = OutputDuplThunks<_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT *>::RunForAdapter(
                                           v150,
                                           v149,
                                           *v20,
                                           v20,
                                           lambda_d61da4d51b31b33ef5e605a1dd45d7b4_::_lambda_invoker_cdecl_);
                          goto LABEL_89;
                        case 0x11:
                        case 0x3A:
                          if ( (_DWORD)Size != 12 )
                            goto LABEL_296;
                          LODWORD(v46) = -1073741823;
                          if ( HIDWORD(Src[0]) == 17 )
                            v72 = v187;
                          else
                            v72 = v182;
                          if ( !v72 )
                            goto LABEL_89;
                          DXGADAPTER::QueryWDDM1_2Caps(v72, (struct _D3DKMT_WDDM_1_2_CAPS *)v20);
                          goto LABEL_88;
                        case 0x12:
                          if ( (_DWORD)Size != 8 )
                            goto LABEL_296;
                          LODWORD(v46) = ADAPTER_RENDER::GetUmdFileVersion(
                                           *((ADAPTER_RENDER **)v182 + 335),
                                           (union _LARGE_INTEGER *)v20);
                          goto LABEL_89;
                        case 0x13:
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          LODWORD(v46) = 0;
                          v62 = v180;
                          v61 = v181;
                          if ( !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v182 + 335) + 16LL) + 2507LL) )
                            goto LABEL_207;
                          *v20 = 1;
                          goto LABEL_91;
                        case 0x14:
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          LODWORD(v46) = 0;
                          v62 = v180;
                          v61 = v181;
                          if ( !ADAPTER_RENDER::IsMultiPlaneOverlaySupported(*((ADAPTER_RENDER **)v182 + 335)) )
                            goto LABEL_207;
                          *v20 = 1;
                          goto LABEL_91;
                        case 0x15:
                          if ( (_DWORD)Size != 520 )
                            goto LABEL_296;
                          v73 = v182;
                          if ( !(_BYTE)word_1C00AFA1D || !*((_BYTE *)v182 + 2511) )
                          {
                            v131 = (_QWORD *)WdLogNewEntry5_WdEvent(v55, 0x1C0000000uLL);
                            v131[3] = v20;
                            v131[4] = v73;
                            LODWORD(v46) = -1073741637;
                            v131[5] = -1073741637LL;
                            goto LABEL_299;
                          }
                          v74 = ADAPTER_RENDER::CopyDListFileName(
                                  *((ADAPTER_RENDER **)v182 + 335),
                                  (unsigned __int16 *)v20,
                                  (unsigned int)v56);
LABEL_128:
                          v46 = (struct DXGADAPTER *)v74;
                          if ( v74 >= 0 )
                            goto LABEL_89;
LABEL_357:
                          v131 = (_QWORD *)WdLogNewEntry5_WdEvent(v76, v75);
                          v131[3] = v20;
                          v131[4] = v73;
                          v131[5] = v46;
                          goto LABEL_299;
                        case 0x16:
                        case 0x3B:
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          LODWORD(v46) = -1073741823;
                          v69 = v187;
                          if ( HIDWORD(Src[0]) == 22 )
                            v70 = v187;
                          else
                            v70 = v182;
                          if ( !v70 )
                            goto LABEL_89;
                          DXGADAPTER::QueryWDDM1_3Caps(v70, (struct _D3DKMT_WDDM_1_3_CAPS *)v20);
                          if ( v71 && v69 != v71 )
                          {
                            v194.0 = 0;
                            DXGADAPTER::QueryWDDM1_3Caps(v71, &v194);
                            *v20 ^= (*v20 ^ v194.Value) & 0x20;
                          }
                          goto LABEL_88;
                        case 0x17:
                          if ( (_DWORD)Size != 16 )
                            goto LABEL_296;
                          if ( !v20[1] )
                            goto LABEL_242;
                          if ( !*((_BYTE *)DXGPROCESS::GetCurrent() + 346) )
                          {
LABEL_208:
                            LODWORD(v46) = -1073741790;
                            v96 = WdLogNewEntry5_WdWarning(v93, v92, v94);
                            *(_QWORD *)(v96 + 24) = -1073741790LL;
                            goto LABEL_193;
                          }
                          if ( v20[1] )
                          {
                            *(_DWORD *)(*((_QWORD *)v182 + 335) + 1104LL) = v20[3];
LABEL_187:
                            LODWORD(v46) = 0;
                          }
                          else
                          {
LABEL_242:
                            v46 = v182;
                            v20[2] = ADAPTER_RENDER::IsMultiPlaneOverlaySupported(*((ADAPTER_RENDER **)v182 + 335));
                            v20[3] = *(_DWORD *)(*((_QWORD *)v46 + 335) + 1104LL);
                            LODWORD(v46) = 0;
                          }
                          goto LABEL_89;
                        case 0x18:
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          DXGADAPTER::QueryWDDM2_0Caps(v182, (struct _D3DKMT_WDDM_2_0_CAPS *)v20);
                          LODWORD(v46) = 0;
                          goto LABEL_89;
                        case 0x19:
                          if ( (_DWORD)Size != 78 )
                            goto LABEL_296;
                          LODWORD(v46) = DXGADAPTER::QueryNodeMetadata(
                                           v182,
                                           *v20,
                                           (struct _DXGK_NODEMETADATA *)(v20 + 1));
                          goto LABEL_89;
                        case 0x1A:
                          if ( (_DWORD)Size != 520 )
                            goto LABEL_296;
                          v73 = v182;
                          v151 = *((_QWORD *)v182 + 335);
                          *(_WORD *)v20 = 0;
                          v152 = *(unsigned __int16 *)(v151 + 520);
                          v153 = *(char **)(v151 + 528);
                          goto LABEL_356;
                        case 0x1B:
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          *v20 = (*((_DWORD *)v187 + 87) & 0x200) != 0;
                          LODWORD(v46) = 0;
                          goto LABEL_89;
                        case 0x1C:
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          LODWORD(v46) = 0;
                          v62 = v180;
                          v61 = v181;
                          if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v182 + 335) + 16LL) + 2028LL) & 0x10) == 0 )
                            goto LABEL_207;
                          *v20 = 1;
                          goto LABEL_91;
                        case 0x1D:
                          if ( (_DWORD)Size != 520 )
                            goto LABEL_296;
                          v73 = v182;
                          v154 = *((_QWORD *)v182 + 335);
                          *(_WORD *)v20 = 0;
                          v152 = *(unsigned __int16 *)(v154 + 536);
                          v153 = *(char **)(v154 + 544);
LABEL_356:
                          v155 = RtlStringCbCopyNW((char *)v20, 0x1C0000000LL, v153, v152);
                          v46 = (struct DXGADAPTER *)v155;
                          if ( v155 < 0 )
                            goto LABEL_357;
                          goto LABEL_89;
                        case 0x1E:
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          if ( *((int *)v182 + 576) < 0x2000 )
                            v77 = 1;
                          else
                            v77 = *((_DWORD *)v182 + 70);
                          *v20 = v77;
                          goto LABEL_88;
                        case 0x1F:
                          if ( (_DWORD)Size != 28 )
                            goto LABEL_296;
                          v87 = *v20;
                          if ( *((int *)v182 + 576) >= 0x2000 )
                            v88 = *((unsigned int *)v182 + 70);
                          else
                            v88 = 1LL;
                          v89 = *v20;
                          if ( (unsigned int)v87 < (unsigned int)v88 )
                          {
                            _mm_lfence();
                            v90 = *(_DWORD **)(*(_QWORD *)(360 * v87 + *((_QWORD *)v182 + 320) + 8) + 64LL);
                            v20[1] = v90[281];
                            v20[2] = v90[282];
                            v20[3] = v90[283];
                            v20[4] = v90[284];
                            v20[5] = v90[285];
                            v20[6] = v90[280];
                            LODWORD(v53) = HIDWORD(Src[0]);
                            goto LABEL_88;
                          }
                          LODWORD(v46) = -1073741811;
                          v96 = WdLogNewEntry5_WdWarning(v88, 0x1C0000000uLL, v56);
                          *(_QWORD *)(v96 + 24) = v89;
                          *(_QWORD *)(v96 + 32) = -1073741811LL;
                          goto LABEL_193;
                        case 0x20:
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          QueryDriverCapsExt(v56, (struct _D3DKMT_DRIVERCAPS_EXT *)v20);
                          LODWORD(v46) = 0;
                          goto LABEL_89;
                        case 0x21:
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          v211 = 0LL;
                          v212 = 0;
                          v156 = DxgkMiracastQueryMiracastSupportInternal(&v211);
                          v160 = v156;
                          if ( v156 == -1073741637 )
                          {
                            *v20 = 0;
                            LODWORD(v46) = 0;
                            goto LABEL_89;
                          }
                          if ( v156 < 0 )
                          {
                            LODWORD(v46) = v156;
                            v96 = WdLogNewEntry5_WdWarning(v158, v157, v159);
                            *(_QWORD *)(v96 + 24) = v160;
                            goto LABEL_193;
                          }
                          *v20 = 2 - (BYTE8(v211) != 0);
                          LODWORD(v46) = 0;
                          goto LABEL_89;
                        case 0x22:
                          if ( (_DWORD)Size != 12 )
                            goto LABEL_296;
                          if ( *((int *)v182 + 576) < 0x2000 )
                            v95 = 1LL;
                          else
                            v95 = *((unsigned int *)v182 + 70);
                          if ( (*((_DWORD *)v182 + 509) & 0x40) == 0 )
                          {
                            LODWORD(v46) = -1073741811;
                            v96 = WdLogNewEntry5_WdWarning(v95, v182, v56);
                            *(_QWORD *)(v96 + 24) = -1073741811LL;
LABEL_193:
                            WdLogEvent5_WdWarning(v96);
                            goto LABEL_89;
                          }
                          if ( *v20 >= (unsigned int)v95 )
                          {
                            LODWORD(v46) = -1073741811;
                            v96 = WdLogNewEntry5_WdWarning(v95, v182, v56);
                            *(_QWORD *)(v96 + 24) = *v20;
                            *(_QWORD *)(v96 + 32) = -1073741811LL;
                            goto LABEL_193;
                          }
                          ADAPTER_RENDER::QueryGpuMmuCaps(
                            *((ADAPTER_RENDER **)v182 + 335),
                            *v20,
                            (struct _D3DKMT_GPUMMU_CAPS *)(v20 + 1));
                          LODWORD(v46) = 0;
LABEL_89:
                          v61 = v181;
LABEL_90:
                          v62 = v180;
LABEL_91:
                          DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214);
                          break;
                        case 0x23:
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          LODWORD(v46) = 0;
                          v62 = v180;
                          v61 = v181;
                          if ( !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v182 + 335) + 16LL) + 2613LL) )
                            goto LABEL_207;
                          *v20 = 1;
                          goto LABEL_91;
                        case 0x24:
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          *v20 = *((_DWORD *)DXGGLOBAL::GetGlobal(v55, 0x1C0000000LL) + 314);
                          LODWORD(v46) = 0;
                          goto LABEL_89;
                        case 0x25:
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          LOBYTE(v6) = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v182 + 335) + 16LL) + 2614LL) != 0;
                          *v20 = v6;
                          LODWORD(v46) = 0;
                          goto LABEL_89;
                        case 0x26:
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          LOBYTE(v6) = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v182 + 335) + 16LL) + 2615LL) != 0;
                          *v20 = v6;
                          LODWORD(v46) = 0;
                          goto LABEL_89;
                        case 0x27:
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          LOBYTE(v6) = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v182 + 335) + 16LL) + 2616LL) != 0;
                          *v20 = v6;
                          LODWORD(v46) = 0;
                          goto LABEL_89;
                        case 0x28:
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          LOBYTE(v6) = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v182 + 335) + 16LL) + 2617LL) != 0;
                          *v20 = v6;
                          LODWORD(v46) = 0;
                          goto LABEL_89;
                        case 0x29:
                          if ( (_DWORD)Size != 24 )
                            goto LABEL_296;
                          LODWORD(v46) = DxgkReadPnPRegistryPath(
                                           v182,
                                           *v20,
                                           v20[1],
                                           *((_QWORD *)v20 + 1),
                                           *((_QWORD *)v20 + 2));
                          goto LABEL_89;
                        case 0x2A:
                          if ( (_DWORD)Size != 56 )
                            goto LABEL_296;
                          if ( *((int *)v182 + 576) < 0x2000 )
                            v138 = 1LL;
                          else
                            v138 = *((unsigned int *)v182 + 70);
                          v139 = *v20;
                          if ( (unsigned int)v139 >= (unsigned int)v138 )
                          {
                            v140 = WdLogNewEntry5_WdWarning(v138, v139, v56);
                            *(_QWORD *)(v140 + 24) = *v20;
                            *(_QWORD *)(v140 + 32) = -1073741811LL;
                            WdLogEvent5_WdWarning(v140);
                          }
                          else
                          {
                            (*(void (__fastcall **)(_QWORD, __int64, unsigned int *, unsigned int *, unsigned int *, unsigned int *, unsigned int *, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v182 + 335) + 640LL) + 8LL) + 80LL))(
                              *(_QWORD *)(*((_QWORD *)v182 + 335) + 648LL),
                              v139,
                              v20 + 8,
                              v20 + 10,
                              v20 + 12,
                              v20 + 2,
                              v20 + 4,
                              v20 + 6);
                          }
                          goto LABEL_88;
                        case 0x2B:
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          LODWORD(v46) = 0;
                          v62 = v180;
                          v61 = v181;
                          if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v182 + 335) + 16LL) + 2618LL) )
                            *v20 = 1;
                          else
LABEL_207:
                            *v20 = 0;
                          goto LABEL_91;
                        case 0x2C:
                          if ( (_DWORD)Size != 1 )
                            goto LABEL_296;
                          *(_BYTE *)v20 = 1;
                          v46 = v182;
                          if ( *((_DWORD *)v182 + 81) != 1297040209 )
                            goto LABEL_187;
                          wcscpy(Str2, L"Qualcomm Adreno 530");
                          if ( wcsncmp(*((const wchar_t **)v182 + 186), Str2, 0x14uLL) )
                            goto LABEL_187;
                          v161 = *(_DWORD *)(*((_QWORD *)v46 + 320) + 16LL);
                          LODWORD(v46) = 0;
                          v62 = v180;
                          v61 = v181;
                          if ( (v161 & 0x10) == 0 )
                            *(_BYTE *)v20 = 0;
                          goto LABEL_91;
                        case 0x2D:
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          v91 = v182;
                          if ( !ADAPTER_RENDER::IsMultiPlaneOverlaySupported(*((ADAPTER_RENDER **)v182 + 335))
                            || (v162 = *(_QWORD *)(*((_QWORD *)v91 + 335) + 16LL), *(_QWORD *)(v162 + 1152))
                            && *(_BYTE *)(v162 + 2618)
                            || *(_QWORD *)(v162 + 1160) && *(_BYTE *)(v162 + 2618) )
                          {
                            *v20 = 1;
                            LODWORD(v46) = 0;
                          }
                          else
                          {
                            *v20 = 0;
                            LODWORD(v46) = 0;
                          }
                          goto LABEL_89;
                        case 0x2E:
                          if ( (_DWORD)Size != 12 )
                            goto LABEL_296;
                          if ( !v20[1] )
                          {
                            v164 = (ADAPTER_RENDER *)*((_QWORD *)v182 + 335);
                            v165 = *v20;
                            if ( ADAPTER_RENDER::IsMultiPlaneOverlaySupported(v164) && (unsigned int)v165 < 0x10 )
                              v166 = *((_BYTE *)v164 + v165 + 1088);
                            else
                              v166 = 0;
                            LOBYTE(v6) = v166 != 0;
                            v20[2] = v6;
                            LODWORD(v46) = 0;
                            goto LABEL_89;
                          }
                          v163 = *v20;
                          LODWORD(v46) = 0;
                          v62 = v180;
                          v61 = v181;
                          if ( (unsigned int)v163 < 0x10 )
                            *(_BYTE *)(v163 + *((_QWORD *)v182 + 335) + 1088) = v20[2] != 0;
                          goto LABEL_91;
                        case 0x2F:
                          if ( (_DWORD)Size != 8 )
                            goto LABEL_296;
                          v204 = 0LL;
                          v61 = v181;
                          DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
                            (DXGDEVICEBYHANDLE *)&v200,
                            *v20,
                            (struct _KTHREAD **)v181,
                            &v204);
                          if ( v204 )
                          {
                            *((_BYTE *)v20 + 4) = *((_BYTE *)v204 + 1906);
                            LODWORD(v46) = 0;
                          }
                          else
                          {
                            v167 = WdLogNewEntry5_WdError(v102, v101);
                            *(_QWORD *)(v167 + 24) = *v20;
                            WdLogEvent5_WdError(v167);
                            LODWORD(v46) = -1073741811;
                          }
                          if ( v200 )
                          {
                            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v200 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v200 + 2), v200);
                            LODWORD(v53) = HIDWORD(Src[0]);
                          }
                          goto LABEL_90;
                        case 0x30:
                          v61 = v181;
                          if ( (*((_BYTE *)v181 + 348) & 4) != 0 )
                          {
                            HostSilo = PsGetHostSilo();
                            v6 = PsAttachSiloToCurrentThread(HostSilo);
                          }
                          LODWORD(v46) = DxgkpQueryRegistry(v182, v20, Size);
                          if ( v6 )
                            PsAttachSiloToCurrentThread(v6);
                          goto LABEL_90;
                        case 0x31:
                          if ( (_DWORD)Size != 8 )
                            goto LABEL_296;
                          LODWORD(v46) = ADAPTER_RENDER::GetKmdFileVersion(
                                           *((ADAPTER_RENDER **)v182 + 335),
                                           (union _LARGE_INTEGER *)v20);
                          goto LABEL_89;
                        case 0x32:
                        case 0x33:
                          if ( (unsigned int)Size < 8 )
                            goto LABEL_296;
                          if ( HIDWORD(Src[0]) == 50 )
                            LOBYTE(v54) = 1;
                          else
                            v54 = 0LL;
                          LODWORD(v46) = DpiReadBlockListInfo(*((_QWORD *)v182 + 27), v20, (unsigned int)Size, v54);
                          goto LABEL_89;
                        case 0x3C:
                          if ( (_DWORD)Size != 80 )
                            goto LABEL_296;
                          if ( !*((_QWORD *)v187 + 27) )
                          {
                            v144 = WdLogNewEntry5_WdAssertion(0LL, 0x1C0000000uLL);
                            *(_QWORD *)(v144 + 24) = 3749LL;
                            WdLogEvent5_WdAssertion(v144);
                          }
                          AdapterUniqueGUID = (const void **)DpiFdoGetAdapterUniqueGUID();
                          if ( AdapterUniqueGUID )
                          {
                            memset(v20, 0, 0x50uLL);
                            if ( *(unsigned __int16 *)AdapterUniqueGUID >= 0x4Eu )
                              v104 = 78LL;
                            else
                              v104 = *(unsigned __int16 *)AdapterUniqueGUID;
                            memmove(v20, AdapterUniqueGUID[1], v104);
LABEL_88:
                            LODWORD(v46) = 0;
                          }
                          else
                          {
                            LODWORD(v46) = -1073741823;
                          }
                          goto LABEL_89;
                        case 0x3D:
                          if ( (_DWORD)Size != 56 )
                            goto LABEL_296;
                          LODWORD(v46) = DXGADAPTER::GetNodePerfData(v182, (struct _D3DKMT_NODE_PERFDATA *)v20);
                          goto LABEL_89;
                        case 0x3E:
                          if ( (_DWORD)Size != 64 )
                            goto LABEL_296;
                          LODWORD(v46) = DXGADAPTER::GetAdapterPerfData(v182, (struct _D3DKMT_ADAPTER_PERFDATA *)v20);
                          goto LABEL_89;
                        case 0x3F:
                          if ( (_DWORD)Size != 40 )
                            goto LABEL_296;
                          LODWORD(v46) = DXGADAPTER::GetAdapterPerfDataCaps(
                                           v182,
                                           (struct _D3DKMT_ADAPTER_PERFDATACAPS *)v20);
                          goto LABEL_89;
                        case 0x40:
                          if ( (_DWORD)Size != 132 )
                            goto LABEL_296;
                          LODWORD(v46) = DXGADAPTER::GetGpuVersion(v182, (struct _D3DKMT_GPUVERSION *)v20);
                          goto LABEL_89;
                        case 0x41:
                        case 0x42:
                          if ( (_DWORD)Size != 0x2000 )
                            goto LABEL_296;
                          LODWORD(v46) = -1073741823;
                          if ( HIDWORD(Src[0]) == 65 )
                            v105 = v187;
                          else
                            v105 = v182;
                          if ( !v105 )
                            goto LABEL_89;
                          DXGADAPTER::GetDeviceDescriptor(v105, 0x2000u, (unsigned __int16 *)v20);
                          goto LABEL_88;
                        case 0x44:
                          if ( (_DWORD)Size != 1 )
                            goto LABEL_296;
                          if ( v182 )
                            v78 = *((_BYTE *)v182 + 210);
                          else
                            v78 = 0;
                          *(_BYTE *)v20 = v78;
                          goto LABEL_88;
                        case 0x46:
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          DXGADAPTER::QueryWDDM2_7Caps(v182, (struct _D3DKMT_WDDM_2_7_CAPS *)v20);
                          LODWORD(v46) = 0;
                          goto LABEL_89;
                        case 0x47:
                          if ( (_DWORD)Size != 524 )
                            goto LABEL_296;
                          v168 = v182;
                          v169 = *((_QWORD *)v182 + 335);
                          v170 = *v20;
                          if ( (_DWORD)v170 )
                          {
                            LODWORD(v46) = -1073741811;
                          }
                          else
                          {
                            DisplayUMDFileName = (const struct _UNICODE_STRING *)ADAPTER_RENDER::GetDisplayUMDFileName(v169);
                            if ( (unsigned int)IsNullUmdDriver(DisplayUMDFileName) )
                            {
                              LODWORD(v46) = -1073741811;
                            }
                            else
                            {
                              LODWORD(v46) = RtlStringCbCopyNW(
                                               (char *)v20 + 4,
                                               v170,
                                               v172[1],
                                               *(unsigned __int16 *)v172);
                              if ( (int)v46 >= 0 )
                                goto LABEL_89;
                            }
                          }
                          v131 = (_QWORD *)WdLogNewEntry5_WdEvent(v169, v170);
                          v131[3] = v20;
                          v131[4] = v168;
                          v131[5] = (int)v46;
LABEL_299:
                          WdLogEvent5_WdEvent(v131);
                          goto LABEL_89;
                        case 0x48:
                          if ( (_DWORD)Size != 12 )
                          {
LABEL_296:
                            LODWORD(v46) = -1073741811;
                            v130 = WdLogNewEntry5_WdWarning(v55, 0x1C0000000uLL, v56);
                            v62 = v180;
                            *(_QWORD *)(v130 + 24) = v180;
                            *(_QWORD *)(v130 + 32) = -1073741811LL;
                            WdLogEvent5_WdWarning(v130);
                            v61 = v181;
                            goto LABEL_91;
                          }
                          LODWORD(v46) = DXGADAPTER::QueryTrackedWorkloadSupport(
                                           v182,
                                           *v20,
                                           (enum DXGK_ENGINE_TYPE)v20[1],
                                           (int *)v20 + 2);
                          goto LABEL_89;
                        default:
                          LODWORD(v46) = -1073741811;
                          v96 = WdLogNewEntry5_WdWarning(v55, 0x1C0000000uLL, v56);
                          *(_QWORD *)(v96 + 24) = v53;
                          *(_QWORD *)(v96 + 32) = -1073741811LL;
                          goto LABEL_193;
                      }
LABEL_92:
                      if ( (int)v46 >= 0 && (*((_BYTE *)v61 + 348) & 4) != 0 )
                        LODWORD(v46) = PostProcessUMDFileName((enum _KMTQUERYADAPTERINFOTYPE)v53, v20, Size);
                      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v215, v63);
                      goto LABEL_96;
                    }
                  }
                }
                LODWORD(v46) = -1073741130;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v214);
                COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v215, v173);
                goto LABEL_291;
              }
              if ( (_DWORD)v15 != 8 )
              {
                v116 = WdLogNewEntry5_WdWarning(v41, v40, v42);
                *(_QWORD *)(v116 + 24) = v15;
                *(_QWORD *)(v116 + 32) = -1073741811LL;
                WdLogEvent5_WdWarning(v116);
                operator delete[](v20);
                if ( v199 )
                  DXGADAPTER::ReleaseReferenceNoTracking(v199);
                DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v188, v117);
                if ( !v190 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
                  return 3221225485LL;
LABEL_276:
                McTemplateK0q_EtwWriteTransfer(v109, &EventProfilerExit, v110, v188);
                return 3221225485LL;
              }
LABEL_195:
              v192 = *v20;
              goto LABEL_53;
            }
            if ( (_DWORD)v15 == 48 )
              goto LABEL_195;
            v115 = WdLogNewEntry5_WdWarning(v41, v40, v42);
            *(_QWORD *)(v115 + 24) = v15;
            *(_QWORD *)(v115 + 32) = -1073741811LL;
            WdLogEvent5_WdWarning(v115);
            operator delete[](v20);
            v114 = v199;
            if ( !v199 )
              goto LABEL_260;
          }
          else
          {
            v113 = WdLogNewEntry5_WdWarning(v41, v40, v42);
            *(_QWORD *)(v113 + 24) = LODWORD(Src[0]);
            *(_QWORD *)(v113 + 32) = -1073741811LL;
            WdLogEvent5_WdWarning(v113);
            operator delete[](v20);
            v114 = v199;
            if ( !v199 )
              goto LABEL_260;
          }
          DXGADAPTER::ReleaseReferenceNoTracking(v114);
LABEL_260:
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v188, v112);
          v111 = v190 == 0;
          goto LABEL_261;
        }
        v35 = WdLogNewEntry5_WdWarning(v18, v17, v19);
        *(_QWORD *)(v35 + 24) = -1073741801LL;
        WdLogEvent5_WdWarning(v35);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v188, v36);
        if ( v190 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v37, &EventProfilerExit, v38, v188);
        return 3221225495LL;
      }
    }
    else
    {
      v27 = WdLogNewEntry5_WdWarning(v10, v9, v11);
      *(_QWORD *)(v27 + 24) = -1073741811LL;
      WdLogEvent5_WdWarning(v27);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v188, v28);
      if ( v190 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v29, &EventProfilerExit, v30, v188);
      return 3221225485LL;
    }
  }
  else
  {
    v22 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    *(_QWORD *)(v22 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v22);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v188, v23);
    if ( v190 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v24, &EventProfilerExit, v25, v188);
    return 3221225485LL;
  }
}
