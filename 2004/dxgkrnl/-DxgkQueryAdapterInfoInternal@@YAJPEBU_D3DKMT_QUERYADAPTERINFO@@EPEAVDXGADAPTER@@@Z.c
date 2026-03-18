/*
 * XREFs of ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C01248A0
 * Callers:
 *     ?VmBusQueryAdapterInfoCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00D9800 (-VmBusQueryAdapterInfoCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkQueryAdapterInfo @ 0x1C0124880 (DxgkQueryAdapterInfo.c)
 *     ?VmBusQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0245160 (-VmBusQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0003F80 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00063E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006444 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?GetDeviceDescriptor@DXGADAPTER@@QEBAXKPEAG@Z @ 0x1C00064A4 (-GetDeviceDescriptor@DXGADAPTER@@QEBAXKPEAG@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006B34 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0006EC4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00072C8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00073A8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?QueryWDDM1_2Caps@DXGADAPTER@@QEBAXPEAU_D3DKMT_WDDM_1_2_CAPS@@@Z @ 0x1C0009424 (-QueryWDDM1_2Caps@DXGADAPTER@@QEBAXPEAU_D3DKMT_WDDM_1_2_CAPS@@@Z.c)
 *     ?RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C0009540 (-RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009A9C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C000A5C4 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C000D090 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@0E@Z @ 0x1C002466C (--0DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@0E@Z.c)
 *     ??1DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C0024738 (--1DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Release@DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00247A4 (-Release@DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0027200 (memmove.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     DxgkInvalidateDeviceState @ 0x1C0051978 (DxgkInvalidateDeviceState.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E4064 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C00F71B0 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C00F72C0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FAE40 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?QueryWDDM1_3Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_1_3_CAPS@@@Z @ 0x1C0125B34 (-QueryWDDM1_3Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_1_3_CAPS@@@Z.c)
 *     ?CopyUmdFileName@ADAPTER_RENDER@@QEBAJPEAU_D3DKMT_UMDFILENAMEINFO@@@Z @ 0x1C0125BB0 (-CopyUmdFileName@ADAPTER_RENDER@@QEBAJPEAU_D3DKMT_UMDFILENAMEINFO@@@Z.c)
 *     ?IsNullUmdDriver@@YAHAEBU_UNICODE_STRING@@@Z @ 0x1C0125C0C (-IsNullUmdDriver@@YAHAEBU_UNICODE_STRING@@@Z.c)
 *     ?GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C0125CB8 (-GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C0126C58 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     DpiIsDriverUpdateInProgress @ 0x1C0128290 (DpiIsDriverUpdateInProgress.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x1C015AF6C (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     ?QueryGpuMmuCaps@ADAPTER_RENDER@@QEBAXIPEAU_D3DKMT_GPUMMU_CAPS@@@Z @ 0x1C015BC38 (-QueryGpuMmuCaps@ADAPTER_RENDER@@QEBAXIPEAU_D3DKMT_GPUMMU_CAPS@@@Z.c)
 *     ?QueryNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z @ 0x1C0160C74 (-QueryNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z.c)
 *     ?QueryWDDM2_0Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_2_0_CAPS@@@Z @ 0x1C0163BA0 (-QueryWDDM2_0Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_2_0_CAPS@@@Z.c)
 *     ?DxgkpQueryRegistry@@YAJPEAVDXGADAPTER@@PEAXI@Z @ 0x1C016FCC0 (-DxgkpQueryRegistry@@YAJPEAVDXGADAPTER@@PEAXI@Z.c)
 *     DpiReadBlockListInfo @ 0x1C01713E4 (DpiReadBlockListInfo.c)
 *     ?QueryWDDM2_7Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_2_7_CAPS@@@Z @ 0x1C01714C8 (-QueryWDDM2_7Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_2_7_CAPS@@@Z.c)
 *     DpiFdoGetAdapterUniqueGUID @ 0x1C01715E0 (DpiFdoGetAdapterUniqueGUID.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C0171734 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     ?GetKmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C0177164 (-GetKmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 *     ?GetAdapterPerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATA@@@Z @ 0x1C020D240 (-GetAdapterPerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATA@@@Z.c)
 *     ?GetAdapterPerfDataCaps@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATACAPS@@@Z @ 0x1C020D3E8 (-GetAdapterPerfDataCaps@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATACAPS@@@Z.c)
 *     ?GetGpuVersion@DXGADAPTER@@QEAAJPEAU_D3DKMT_GPUVERSION@@@Z @ 0x1C020D478 (-GetGpuVersion@DXGADAPTER@@QEAAJPEAU_D3DKMT_GPUVERSION@@@Z.c)
 *     ?GetNodePerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_NODE_PERFDATA@@@Z @ 0x1C020D504 (-GetNodePerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_NODE_PERFDATA@@@Z.c)
 *     ?QueryTrackedWorkloadSupport@DXGADAPTER@@QEAAJIW4DXGK_ENGINE_TYPE@@PEAH@Z @ 0x1C020ED70 (-QueryTrackedWorkloadSupport@DXGADAPTER@@QEAAJIW4DXGK_ENGINE_TYPE@@PEAH@Z.c)
 *     ?CopyDListFileName@ADAPTER_RENDER@@QEBAJPEAGI@Z @ 0x1C02157CC (-CopyDListFileName@ADAPTER_RENDER@@QEBAJPEAGI@Z.c)
 *     ?GetDisplayUMDFileName@ADAPTER_RENDER@@AEBAAEBU_UNICODE_STRING@@W4_KMT_DISPLAY_UMD_VERSION@@@Z @ 0x1C021642C (-GetDisplayUMDFileName@ADAPTER_RENDER@@AEBAAEBU_UNICODE_STRING@@W4_KMT_DISPLAY_UMD_VERSION@@@Z.c)
 *     ?DxgkReadPnPRegistryPath@@YAJPEAVDXGADAPTER@@IW4_DXGK_PNP_KEY_TYPE@@PEAGPEAI@Z @ 0x1C02217B8 (-DxgkReadPnPRegistryPath@@YAJPEAVDXGADAPTER@@IW4_DXGK_PNP_KEY_TYPE@@PEAGPEAI@Z.c)
 *     ?PostProcessUMDFileName@@YAJW4_KMTQUERYADAPTERINFOTYPE@@PEAXI@Z @ 0x1C02220E8 (-PostProcessUMDFileName@@YAJW4_KMTQUERYADAPTERINFOTYPE@@PEAXI@Z.c)
 *     ?QueryDriverCapsExt@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRIVERCAPS_EXT@@@Z @ 0x1C02221E4 (-QueryDriverCapsExt@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRIVERCAPS_EXT@@@Z.c)
 *     ?VmBusSendQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYADAPTERINFO@@I@Z @ 0x1C024A7C4 (-VmBusSendQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYADA.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0268C6C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x1C029C748 (-RunForAdapter@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@@@SAJPEAVDXGADAPTER@@_NIP.c)
 *     DpiQueryAdapterRegistryInfo @ 0x1C02C6BB0 (DpiQueryAdapterRegistryInfo.c)
 */

__int64 __fastcall DxgkQueryAdapterInfoInternal(
        const struct _D3DKMT_QUERYADAPTERINFO *a1,
        char a2,
        struct DXGADAPTER *a3)
{
  const struct _D3DKMT_QUERYADAPTERINFO *v5; // rdi
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v11; // rdx
  ULONG64 v12; // rcx
  __int64 v13; // r8
  struct DXGPROCESS *v14; // rbx
  __int128 v15; // xmm0
  size_t v16; // xmm1_8
  size_t v17; // rbx
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned int *v22; // r13
  unsigned __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  struct DXGADAPTER **v41; // r9
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  DXGADAPTER *v45; // rsi
  __int64 v46; // rdx
  __int64 v47; // rcx
  DXGADAPTER *v48; // rbx
  struct DXGADAPTER *v49; // r14
  DXGADAPTER *v50; // rbx
  int v51; // eax
  bool v52; // cl
  ADAPTER_DISPLAY **v53; // rdi
  signed __int64 v54; // rax
  __int64 v55; // r14
  __int64 v56; // r9
  __int64 v57; // rcx
  struct DXGADAPTER *v58; // r8
  DXGADAPTER *v59; // rdi
  DXGADAPTER *v60; // rcx
  int *AdapterType; // rax
  int v62; // ecx
  struct DXGPROCESS *v63; // rsi
  size_t v64; // rdi
  __int64 v65; // rdx
  void *v66; // rcx
  size_t v67; // r8
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  DXGADAPTER *v71; // rdi
  DXGADAPTER *v72; // rcx
  DXGADAPTER *v73; // r11
  DXGADAPTER *v74; // rcx
  DXGADAPTER *v75; // rdi
  int v76; // eax
  __int64 v77; // rdx
  __int64 v78; // rcx
  int v79; // ecx
  char v80; // cl
  DXGADAPTER *v81; // rax
  int v82; // edx
  __int64 v83; // rdi
  __int64 v84; // rax
  char v85; // cl
  DXGADAPTER *v86; // rdi
  int v87; // eax
  unsigned __int8 IsDriverUpdateInProgress; // al
  __int64 v89; // rax
  __int64 v90; // rcx
  __int64 v91; // rdi
  _DWORD *v92; // rcx
  DXGADAPTER *v93; // rbx
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // rcx
  __int64 v98; // rax
  __int64 v99; // rcx
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // rdx
  __int64 v104; // rcx
  const void **AdapterUniqueGUID; // rbx
  size_t v106; // r8
  DXGADAPTER *v107; // rcx
  struct DXGTHREAD *Current; // rax
  __int64 v109; // rax
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // r8
  bool v113; // zf
  __int64 v114; // rdx
  __int64 v115; // rax
  DXGADAPTER *v116; // rcx
  __int64 v117; // rax
  __int64 v118; // rax
  __int64 v119; // rdx
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 v124; // rcx
  unsigned int v125; // edi
  int v126; // eax
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // r8
  _QWORD *v130; // rax
  __int64 HostSilo; // rax
  __int64 v132; // rax
  _QWORD *v133; // rax
  __int64 v134; // r8
  unsigned __int64 v135; // r9
  char *v136; // r8
  __int64 v137; // rdx
  __int64 v138; // rcx
  __int64 v139; // rax
  __int64 v140; // rcx
  __int64 v141; // rdx
  __int64 v142; // rax
  __int64 v143; // rdx
  __int64 v144; // rcx
  DXGADAPTER *v145; // rax
  __int64 v146; // rax
  DXGADAPTER *v147; // rax
  __int64 v148; // rcx
  DXGADAPTER *v149; // rcx
  void *v150; // rbx
  __int64 v151; // rdx
  DXGADAPTER *v152; // rcx
  __int64 v153; // r8
  unsigned __int64 v154; // r9
  char *v155; // r8
  __int64 v156; // r8
  int v157; // eax
  int v158; // eax
  __int64 v159; // rdx
  __int64 v160; // rcx
  __int64 v161; // r8
  __int64 v162; // rdi
  int v163; // ecx
  __int64 v164; // rcx
  __int64 v165; // rax
  ADAPTER_RENDER *v166; // rdi
  __int64 v167; // rbx
  char v168; // cl
  __int64 v169; // rax
  DXGADAPTER *v170; // rdi
  __int64 v171; // rcx
  __int64 v172; // rdx
  const struct _UNICODE_STRING *DisplayUMDFileName; // rax
  char **v174; // r8
  __int64 v175; // rdx
  __int64 v176; // rax
  int v177; // eax
  __int64 v178; // rcx
  __int64 v179; // r8
  __int64 v180; // rax
  __int64 v181; // rax
  size_t v182; // [rsp+50h] [rbp-2A8h]
  struct DXGPROCESS *v183; // [rsp+58h] [rbp-2A0h]
  DXGADAPTER *v184; // [rsp+68h] [rbp-290h] BYREF
  void *Src[2]; // [rsp+70h] [rbp-288h]
  size_t Size; // [rsp+80h] [rbp-278h]
  char v187; // [rsp+88h] [rbp-270h] BYREF
  char v188; // [rsp+89h] [rbp-26Fh]
  DXGADAPTER *v189; // [rsp+90h] [rbp-268h] BYREF
  int v190; // [rsp+98h] [rbp-260h] BYREF
  __int64 v191; // [rsp+A0h] [rbp-258h]
  char v192; // [rsp+A8h] [rbp-250h]
  struct DXGADAPTER *v193; // [rsp+B0h] [rbp-248h] BYREF
  unsigned int v194; // [rsp+B8h] [rbp-240h]
  BOOL IsRemoteConnection; // [rsp+C0h] [rbp-238h]
  _D3DKMT_WDDM_1_3_CAPS v196; // [rsp+C4h] [rbp-234h] BYREF
  unsigned int v197; // [rsp+C8h] [rbp-230h] BYREF
  unsigned int v198; // [rsp+CCh] [rbp-22Ch]
  unsigned int v199; // [rsp+D0h] [rbp-228h] BYREF
  __int64 v200; // [rsp+D8h] [rbp-220h] BYREF
  struct DXGADAPTER *v201; // [rsp+E0h] [rbp-218h] BYREF
  struct DXGDEVICE *v202; // [rsp+F0h] [rbp-208h] BYREF
  void *v203; // [rsp+F8h] [rbp-200h]
  unsigned int *v204; // [rsp+100h] [rbp-1F8h]
  unsigned __int64 v205; // [rsp+108h] [rbp-1F0h] BYREF
  struct DXGDEVICE *v206; // [rsp+110h] [rbp-1E8h] BYREF
  char v207[8]; // [rsp+118h] [rbp-1E0h] BYREF
  DXGADAPTER *v208; // [rsp+120h] [rbp-1D8h]
  char v209; // [rsp+128h] [rbp-1D0h]
  unsigned __int64 v210; // [rsp+130h] [rbp-1C8h] BYREF
  int v211; // [rsp+138h] [rbp-1C0h] BYREF
  _DXGKARG_QUERYADAPTERINFO v212; // [rsp+140h] [rbp-1B8h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v213; // [rsp+170h] [rbp-188h] BYREF
  __int128 v214; // [rsp+1A0h] [rbp-158h] BYREF
  int v215; // [rsp+1B0h] [rbp-148h]
  _D3DKMT_QUERYADAPTERINFO v216; // [rsp+1B8h] [rbp-140h] BYREF
  _BYTE v217[64]; // [rsp+1D0h] [rbp-128h] BYREF
  _BYTE v218[144]; // [rsp+210h] [rbp-E8h] BYREF
  wchar_t Str2[20]; // [rsp+2A0h] [rbp-58h] BYREF

  v188 = a2;
  v5 = a1;
  v190 = -1;
  v6 = 0LL;
  v191 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v192 = 1;
    v190 = 2015;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 2015);
  }
  else
  {
    v192 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v190, 2015LL);
  CurrentProcess = PsGetCurrentProcess(v8, v7);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v14 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( (ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
     || (Current = DXGTHREAD::GetCurrent(v12, v11)) == 0LL
     || (v183 = (struct DXGPROCESS *)*((_QWORD *)Current + 1)) == 0LL)
    && (v183 = v14) == 0LL
    || a3 && a2 )
  {
    v109 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v109 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v109);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v190, v110);
    v113 = v192 == 0;
LABEL_261:
    if ( v113 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225485LL;
    goto LABEL_276;
  }
  v203 = 0LL;
  if ( a2 )
  {
    v12 = MmUserProbeAddress;
    if ( (unsigned __int64)v5 >= MmUserProbeAddress )
      v5 = (const struct _D3DKMT_QUERYADAPTERINFO *)MmUserProbeAddress;
    v15 = *(_OWORD *)&v5->hAdapter;
    v16 = *(_QWORD *)&v5->PrivateDriverDataSize;
  }
  else
  {
    v15 = *(_OWORD *)&v5->hAdapter;
    v16 = *(_QWORD *)&v5->PrivateDriverDataSize;
  }
  Size = v16;
  *(_OWORD *)Src = v15;
  if ( *((_QWORD *)&v15 + 1) )
  {
    v17 = (unsigned int)Size;
    if ( (_DWORD)Size )
    {
      v18 = (Size + 7) & 0xFFFFFFF8;
      v198 = v18;
      if ( v18 < (unsigned int)Size )
      {
        v33 = WdLogNewEntry5_WdWarning(v12, v11, v13);
        *(_QWORD *)(v33 + 24) = -1073741811LL;
        *(_QWORD *)(v33 + 32) = 3131LL;
        WdLogEvent5_WdWarning(v33);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v190, v34);
        if ( v192 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v35, &EventProfilerExit, v36, v190);
        return 3221225485LL;
      }
      else
      {
        v22 = (unsigned int *)operator new[](v18, 0x4B677844u, (POOL_TYPE)512);
        v204 = v22;
        v203 = v22;
        if ( v22 )
        {
          v23 = SHIDWORD(Src[0]);
          if ( SHIDWORD(Src[0]) >= 17 && SHIDWORD(Src[0]) < 23
            || SHIDWORD(Src[0]) >= 10 && SHIDWORD(Src[0]) < 16
            || SHIDWORD(Src[0]) < 7 && SHIDWORD(Src[0]) >= 2 )
          {
LABEL_17:
            v182 = (unsigned int)Size;
            memset(v22, 0, (unsigned int)Size);
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
                v182 = (unsigned int)Size;
                if ( v188 )
                {
                  if ( (unsigned __int64)(unsigned int)Size + *((_QWORD *)&v15 + 1) < *((_QWORD *)&v15 + 1)
                    || (unsigned __int64)(unsigned int)Size + *((_QWORD *)&v15 + 1) > MmUserProbeAddress )
                  {
                    *(_BYTE *)MmUserProbeAddress = 0;
                  }
                  memmove(v22, *((const void **)&v15 + 1), v17);
                }
                else
                {
                  memmove(v22, *((const void **)&v15 + 1), (unsigned int)Size);
                }
                break;
              default:
                goto LABEL_17;
            }
          }
          IsRemoteConnection = 0;
          if ( (_DWORD)v23 == 16 )
            IsRemoteConnection = DXGPROCESS::IsRemoteConnection(v183);
          v189 = a3;
          if ( a3 )
            v41 = 0LL;
          else
            v41 = &v189;
          DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
            (DXGADAPTERBYHANDLE *)&v201,
            LODWORD(Src[0]),
            (struct _KTHREAD **)v183,
            v41,
            1);
          v45 = v189;
          if ( v189 )
          {
            v194 = 0;
            if ( (_DWORD)v23 != 9 )
            {
              if ( (_DWORD)v23 != 67 )
              {
LABEL_53:
                v184 = 0LL;
                v193 = 0LL;
                v205 = 0LL;
                v210 = 0LL;
                LODWORD(v48) = DxgkpGetPairingAdapters(v189, v194, &v184, &v205, &v193, &v210, 0);
                if ( (int)v48 >= 0 || (_DWORD)v23 == 9 || (_DWORD)v23 == 67 )
                {
                  v49 = v193;
                }
                else
                {
                  v49 = 0LL;
                  v193 = 0LL;
                  LODWORD(v48) = DxgkpGetPairingAdapters(v45, v194, &v184, &v205, 0LL, 0LL, 0);
                }
                if ( (int)v48 < 0 )
                {
                  v120 = WdLogNewEntry5_WdError(v47, v46);
                  *(_QWORD *)(v120 + 24) = v45;
                  *(_QWORD *)(v120 + 32) = v194;
                  WdLogEvent5_WdError(v120);
                  operator delete[](v22);
                  if ( v201 )
                    DXGADAPTER::ReleaseReference(v201);
                  goto LABEL_106;
                }
                v50 = v184;
                if ( v184 != v45 && v49 != v45 )
                {
                  v121 = WdLogNewEntry5_WdAssertion(v47, v46);
                  *(_QWORD *)(v121 + 24) = 3306LL;
                  WdLogEvent5_WdAssertion(v121);
                }
                if ( v49 && !*((_QWORD *)v49 + 337) )
                {
                  v122 = WdLogNewEntry5_WdAssertion(v47, v46);
                  *(_QWORD *)(v122 + 24) = 3308LL;
                  WdLogEvent5_WdAssertion(v122);
                }
                if ( !v50 || !*((_QWORD *)v50 + 338) )
                {
                  v123 = WdLogNewEntry5_WdAssertion(v47, v46);
                  *(_QWORD *)(v123 + 24) = 3310LL;
                  WdLogEvent5_WdAssertion(v123);
                }
                v52 = 0;
                if ( (unsigned int)v23 <= 0x1B )
                {
                  v51 = 138619200;
                  if ( _bittest(&v51, v23) )
                    v52 = 1;
                }
                if ( v45 == v50 && *((_BYTE *)v45 + 209) || v50 && *((_BYTE *)v50 + 209) && !v52 )
                {
                  if ( (unsigned int)v23 > 0x39 || (v124 = 0x210F85840908010LL, !_bittest64(&v124, v23)) )
                  {
                    if ( (_DWORD)v23 != 68 )
                    {
                      v208 = v50;
                      v209 = 0;
                      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v207);
                      if ( *((_DWORD *)v50 + 50) == 1 )
                      {
                        *(void **)&v216.hAdapter = Src[0];
                        *(_QWORD *)&v216.PrivateDriverDataSize = Size;
                        v216.pPrivateDriverData = v22;
                        v125 = v198;
                        v126 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryAdapterInfo(
                                 (DXGADAPTER *)((char *)v184 + 4240),
                                 v183,
                                 &v216,
                                 v198);
                        v48 = (DXGADAPTER *)v126;
                        if ( v126 >= 0 )
                        {
                          LODWORD(v48) = PostProcessUMDFileName(SHIDWORD(Src[0]), v22, v125);
                          if ( !v209 )
                            goto LABEL_291;
                          goto LABEL_290;
                        }
                        v130 = (_QWORD *)WdLogNewEntry5_WdWarning(v128, v127, v129);
                        v130[3] = LODWORD(Src[0]);
                        v130[4] = v48;
                        v130[5] = 3360LL;
                        WdLogEvent5_WdWarning(v130);
                      }
                      else
                      {
                        LODWORD(v48) = -1073741130;
                      }
                      if ( !v209 )
                      {
LABEL_291:
                        v64 = v182;
LABEL_96:
                        if ( (int)v48 >= 0 )
                        {
                          v66 = Src[1];
                          if ( v188 )
                          {
                            v67 = v182;
                            if ( (char *)Src[1] + v182 > (void *)MmUserProbeAddress || (char *)Src[1] + v182 <= Src[1] )
                              *(_BYTE *)MmUserProbeAddress = 0;
                          }
                          else
                          {
                            v67 = v64;
                          }
                          memmove(v66, v22, v67);
                        }
                        operator delete[](v22);
                        if ( v201
                          && _InterlockedExchangeAdd64((volatile signed __int64 *)v201 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                        {
                          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v201 + 2), v201);
                        }
LABEL_106:
                        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v190, v68);
                        if ( v192 )
                        {
                          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
                            McTemplateK0q_EtwWriteTransfer(v69, &EventProfilerExit, v70, v190);
                        }
                        return (unsigned int)v48;
                      }
LABEL_290:
                      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v207);
                      goto LABEL_291;
                    }
                  }
                }
                COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v218, v50, v49);
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v50 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v184 + 2), v184);
                v53 = (ADAPTER_DISPLAY **)v193;
                if ( v193 )
                {
                  v54 = _InterlockedExchangeAdd64((volatile signed __int64 *)v193 + 3, 0xFFFFFFFFFFFFFFFFuLL);
                  v53 = (ADAPTER_DISPLAY **)v193;
                  if ( v54 == 1 )
                    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v193 + 2), v193);
                }
                LODWORD(v55) = HIDWORD(Src[0]);
                if ( HIDWORD(Src[0]) == 9 || HIDWORD(Src[0]) == 67 )
                {
                  LODWORD(v48) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v218, 0LL);
                  if ( (int)v48 < 0 )
                  {
                    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v218, v65);
                    goto LABEL_291;
                  }
                  if ( !v53 || !v53[337] )
                  {
                    v176 = WdLogNewEntry5_WdAssertion(v99, v65);
                    *(_QWORD *)(v176 + 24) = 3393LL;
                    WdLogEvent5_WdAssertion(v176);
                  }
                  if ( (_DWORD)v55 == 9 )
                  {
                    DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(v53[337], *v22);
                    if ( *(_DWORD *)DisplayModeInfo )
                    {
                      *(_OWORD *)(v22 + 1) = *(_OWORD *)DisplayModeInfo;
                      *(_OWORD *)(v22 + 5) = *((_OWORD *)DisplayModeInfo + 1);
                      *(_QWORD *)(v22 + 9) = *((_QWORD *)DisplayModeInfo + 4);
                      v22[11] = *((_DWORD *)DisplayModeInfo + 10);
                    }
                    else
                    {
                      LODWORD(v48) = -1071774919;
                      v181 = WdLogNewEntry5_WdWarning(v101, v65, v102);
                      *(_QWORD *)(v181 + 24) = *v22;
                      *(_QWORD *)(v181 + 32) = v53;
                      WdLogEvent5_WdWarning(v181);
                    }
                  }
                  else if ( (_DWORD)v55 == 67 )
                  {
                    v199 = *v22;
                    v197 = 0;
                    *(_QWORD *)&v213.Type = 33LL;
                    *(_QWORD *)&v213.InputDataSize = 4LL;
                    *(_QWORD *)&v213.Flags.0 = 0LL;
                    HIDWORD(v213.hKmdProcessHandle) = 0;
                    v213.pOutputData = &v197;
                    v213.OutputDataSize = 4;
                    v213.pInputData = &v199;
                    v177 = DXGADAPTER::DdiQueryAdapterInfo((DXGADAPTER *)v53, &v213);
                    v48 = (DXGADAPTER *)v177;
                    if ( v177 < 0 )
                    {
                      v180 = WdLogNewEntry5_WdWarning(v178, v65, v179);
                      *(_QWORD *)(v180 + 24) = *v22;
                      *(_QWORD *)(v180 + 32) = v48;
                      WdLogEvent5_WdWarning(v180);
                    }
                    else
                    {
                      v22[1] = v197;
                    }
                  }
                  v64 = v182;
                  v63 = v183;
                  goto LABEL_92;
                }
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::DXGPAIREDADAPTERSTOPRESETLOCKSHARED(
                  (DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v217,
                  v184,
                  (struct DXGADAPTER *)v53);
                if ( *((_DWORD *)v189 + 50) == 1 )
                {
                  v57 = *((unsigned int *)v184 + 50);
                  if ( (_DWORD)v57 == 1 )
                  {
                    v58 = v193;
                    if ( !v193 )
                      goto LABEL_81;
                    if ( *((_DWORD *)v193 + 50) == 1 )
                    {
                      v58 = v193;
LABEL_81:
                      v55 = SHIDWORD(Src[0]);
                      switch ( HIDWORD(Src[0]) )
                      {
                        case 0:
                          *(_QWORD *)&v212.Flags.0 = 0LL;
                          HIDWORD(v212.hKmdProcessHandle) = 0;
                          memset(&v212, 0, 24);
                          v212.pOutputData = v22;
                          v212.OutputDataSize = Size;
                          v63 = v183;
                          if ( (*((_BYTE *)v183 + 347) & 0x20) != 0 )
                            v212.Flags.Value = v212.Flags.Value ^ (*(_BYTE *)&v212.Flags.0 ^ (unsigned __int8)(2 * *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v183 + 62) + 496LL) + 296LL))) & 2 | 1;
                          v48 = v184;
                          v83 = *((_QWORD *)v184 + 338);
                          KeEnterCriticalRegion();
                          ExAcquirePushLockSharedEx(v83 + 72, 0LL);
                          v84 = *(_QWORD *)(*((_QWORD *)v183 + 6) + 8LL * *((unsigned int *)v48 + 58));
                          if ( v84 )
                            v212.hKmdProcessHandle = *(HANDLE *)(v84 + 16);
                          ExReleasePushLockSharedEx(v83 + 72, 0LL);
                          KeLeaveCriticalRegion();
                          LODWORD(v48) = DXGADAPTER::DdiQueryAdapterInfo(v48, &v212);
                          goto LABEL_90;
                        case 1:
                          if ( (_DWORD)Size != 524 )
                            goto LABEL_296;
                          v75 = v184;
                          v76 = ADAPTER_RENDER::CopyUmdFileName(
                                  *((ADAPTER_RENDER **)v184 + 338),
                                  (struct _D3DKMT_UMDFILENAMEINFO *)v22);
                          goto LABEL_128;
                        case 2:
                          if ( (_DWORD)Size != 528 )
                            goto LABEL_296;
                          v63 = v183;
                          v134 = *((_QWORD *)v184 + 338);
                          if ( (*((_BYTE *)v183 + 347) & 1) != 0 )
                          {
                            v22[130] = *(_DWORD *)(v134 + 592);
                            v22[131] = *(_DWORD *)(v134 + 596);
                            v135 = *(unsigned __int16 *)(v134 + 576);
                            v136 = *(char **)(v134 + 584);
                          }
                          else
                          {
                            v22[130] = *(_DWORD *)(v134 + 568);
                            v22[131] = *(_DWORD *)(v134 + 572);
                            v135 = *(unsigned __int16 *)(v134 + 552);
                            v136 = *(char **)(v134 + 560);
                          }
                          LODWORD(v48) = RtlStringCbCopyNW((char *)v22, 0x1C0000000LL, v136, v135);
                          if ( (int)v48 < 0 )
                          {
                            v139 = WdLogNewEntry5_WdError(v138, v137);
                            *(_QWORD *)(v139 + 24) = (int)v48;
                            WdLogEvent5_WdError(v139);
                          }
                          goto LABEL_90;
                        case 3:
                          if ( (_DWORD)Size != 24 )
                            goto LABEL_296;
                          v200 = 0LL;
                          (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *, __int64 *, unsigned int *, unsigned int *, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v184 + 338) + 640LL) + 8LL) + 80LL))(
                            *(_QWORD *)(*((_QWORD *)v184 + 338) + 648LL),
                            0LL,
                            &v200,
                            &v200,
                            &v200,
                            v22,
                            v22 + 2,
                            v22 + 4);
                          goto LABEL_88;
                        case 4:
                        case 0x34:
                          if ( (_DWORD)Size != 16 )
                            goto LABEL_296;
                          v145 = v184;
                          if ( HIDWORD(Src[0]) == 4 )
                            v145 = v189;
                          v64 = v182;
                          v63 = v183;
                          if ( v145 )
                          {
                            *(_OWORD *)v22 = *(_OWORD *)((char *)v145 + 284);
                            LODWORD(v48) = 0;
                          }
                          else
                          {
                            LODWORD(v48) = -1073741823;
                          }
                          goto LABEL_91;
                        case 5:
                          if ( (_DWORD)Size != 12 )
                            goto LABEL_296;
                          LODWORD(v48) = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v184 + 338) + 616LL) + 8LL)
                                                                                           + 504LL))(
                                           *(_QWORD *)(*((_QWORD *)v184 + 338) + 624LL),
                                           v22);
                          goto LABEL_89;
                        case 6:
                        case 0x35:
                          if ( (_DWORD)Size != 12 )
                            goto LABEL_296;
                          LODWORD(v48) = -1073741823;
                          v147 = v184;
                          if ( HIDWORD(Src[0]) == 6 )
                            v147 = v189;
                          v64 = v182;
                          v63 = v183;
                          if ( v147 )
                          {
                            v148 = *(_QWORD *)(*((_QWORD *)v147 + 27) + 64LL);
                            *v22 = *(_DWORD *)(v148 + 1144);
                            v22[1] = *(unsigned __int16 *)(v148 + 1150);
                            v22[2] = (unsigned __int16)*(_DWORD *)(v148 + 1148);
                            LODWORD(v48) = 0;
                          }
                          goto LABEL_91;
                        case 7:
                          if ( (_DWORD)Size != 12 )
                            goto LABEL_296;
                          v143 = *(_QWORD *)(*((_QWORD *)v184 + 338) + 640LL);
                          v63 = v183;
                          v144 = *((_QWORD *)v183 + 8);
                          if ( v144 )
                            v6 = *(_QWORD *)(v144 + 8LL * (unsigned int)(*(_DWORD *)v143 - 1));
                          LODWORD(v48) = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)(v143 + 8)
                                                                                            + 376LL))(
                                           v6,
                                           v22);
                          goto LABEL_90;
                        case 8:
                        case 0x36:
                          if ( (_DWORD)Size != 2080 )
                            goto LABEL_296;
                          LODWORD(v48) = -1073741823;
                          v149 = v184;
                          if ( HIDWORD(Src[0]) == 8 )
                            v149 = v189;
                          if ( v149 )
                            LODWORD(v48) = DpiQueryAdapterRegistryInfo(*((_QWORD *)v149 + 27), v22);
                          goto LABEL_89;
                        case 0xB:
                        case 0x37:
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          v85 = 0;
                          v187 = 0;
                          LODWORD(v48) = -1073741823;
                          if ( HIDWORD(Src[0]) == 11 )
                            v86 = v189;
                          else
                            v86 = v184;
                          if ( !v86 )
                            goto LABEL_89;
                          v87 = *((_DWORD *)v86 + 87);
                          if ( (v87 & 0x20) != 0 || (v87 & 4) != 0 )
                          {
                            IsDriverUpdateInProgress = 0;
                          }
                          else
                          {
                            IsDriverUpdateInProgress = DpiIsDriverUpdateInProgress(*((_QWORD *)v86 + 27), &v187);
                            v85 = v187;
                          }
                          *v22 = IsDriverUpdateInProgress;
                          if ( v85 )
                          {
                            v150 = (void *)*((_QWORD *)v86 + 27);
                            ObfReferenceObject(v150);
                            DXGPAIREDADAPTERSTOPRESETLOCKSHARED::Release((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v217);
                            DxgkInvalidateDeviceState((__int64)v150);
                            ObfDereferenceObject(v150);
                          }
                          goto LABEL_88;
                        case 0xC:
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          *v22 = 0;
                          *v22 = (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v184 + 338) + 16LL) + 2060LL) >> 5) & 1;
                          goto LABEL_88;
                        case 0xD:
                        case 0x38:
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          LODWORD(v48) = -1073741823;
                          if ( HIDWORD(Src[0]) == 13 )
                            v81 = v189;
                          else
                            v81 = v184;
                          v63 = v183;
                          if ( v81 )
                          {
                            v82 = *((_DWORD *)v81 + 649);
                            *v22 = v82;
                            if ( (*((_BYTE *)v183 + 347) & 0x20) != 0
                              && *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v183 + 62) + 496LL) + 352LL) <= 0x10u )
                            {
                              if ( v82 > 2600 )
                                v82 = 2600;
                              *v22 = v82;
                            }
                            LODWORD(v48) = 0;
                          }
                          goto LABEL_90;
                        case 0xF:
                        case 0x39:
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          LODWORD(v48) = -1073741823;
                          v59 = v184;
                          if ( HIDWORD(Src[0]) == 15 )
                            v60 = v189;
                          else
                            v60 = v184;
                          if ( !v60 )
                            goto LABEL_89;
                          AdapterType = DXGADAPTER::GetAdapterType(v60, &v211);
                          v62 = *AdapterType;
                          *v22 = *AdapterType;
                          if ( v59 )
                            *v22 = v62 ^ ((unsigned __int16)v62 ^ (unsigned __int16)(*((unsigned __int8 *)v59 + 212) << 8)) & 0x100;
                          goto LABEL_88;
                        case 0x10:
                          if ( (_DWORD)Size != 8 )
                            goto LABEL_296;
                          if ( !*((_BYTE *)DXGPROCESS::GetCurrent(v57, 0x1C0000000LL) + 346) )
                            goto LABEL_208;
                          DXGPAIREDADAPTERSTOPRESETLOCKSHARED::Release((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v217);
                          v152 = v189;
                          if ( IsRemoteConnection )
                            v152 = 0LL;
                          LODWORD(v48) = OutputDuplThunks<_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT *>::RunForAdapter(
                                           v152,
                                           v151,
                                           *v22,
                                           v22,
                                           lambda_d61da4d51b31b33ef5e605a1dd45d7b4_::_lambda_invoker_cdecl_);
                          goto LABEL_89;
                        case 0x11:
                        case 0x3A:
                          if ( (_DWORD)Size != 12 )
                            goto LABEL_296;
                          LODWORD(v48) = -1073741823;
                          if ( HIDWORD(Src[0]) == 17 )
                            v74 = v189;
                          else
                            v74 = v184;
                          if ( !v74 )
                            goto LABEL_89;
                          DXGADAPTER::QueryWDDM1_2Caps(v74, (struct _D3DKMT_WDDM_1_2_CAPS *)v22);
                          goto LABEL_88;
                        case 0x12:
                          if ( (_DWORD)Size != 8 )
                            goto LABEL_296;
                          LODWORD(v48) = ADAPTER_RENDER::GetUmdFileVersion(
                                           *((ADAPTER_RENDER **)v184 + 338),
                                           (union _LARGE_INTEGER *)v22);
                          goto LABEL_89;
                        case 0x13:
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          LODWORD(v48) = 0;
                          v64 = v182;
                          v63 = v183;
                          if ( !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v184 + 338) + 16LL) + 2531LL) )
                            goto LABEL_207;
                          *v22 = 1;
                          goto LABEL_91;
                        case 0x14:
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          LODWORD(v48) = 0;
                          v64 = v182;
                          v63 = v183;
                          if ( !ADAPTER_RENDER::IsMultiPlaneOverlaySupported(*((ADAPTER_RENDER **)v184 + 338)) )
                            goto LABEL_207;
                          *v22 = 1;
                          goto LABEL_91;
                        case 0x15:
                          if ( (_DWORD)Size != 520 )
                            goto LABEL_296;
                          v75 = v184;
                          if ( !(_BYTE)word_1C00B1B1D || !*((_BYTE *)v184 + 2535) )
                          {
                            v133 = (_QWORD *)WdLogNewEntry5_WdEvent(v57, 0x1C0000000uLL);
                            v133[3] = v22;
                            v133[4] = v75;
                            LODWORD(v48) = -1073741637;
                            v133[5] = -1073741637LL;
                            goto LABEL_299;
                          }
                          v76 = ADAPTER_RENDER::CopyDListFileName(
                                  *((ADAPTER_RENDER **)v184 + 338),
                                  (unsigned __int16 *)v22,
                                  (unsigned int)v58);
LABEL_128:
                          v48 = (DXGADAPTER *)v76;
                          if ( v76 >= 0 )
                            goto LABEL_89;
LABEL_357:
                          v133 = (_QWORD *)WdLogNewEntry5_WdEvent(v78, v77);
                          v133[3] = v22;
                          v133[4] = v75;
                          v133[5] = v48;
                          goto LABEL_299;
                        case 0x16:
                        case 0x3B:
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          LODWORD(v48) = -1073741823;
                          v71 = v189;
                          if ( HIDWORD(Src[0]) == 22 )
                            v72 = v189;
                          else
                            v72 = v184;
                          if ( !v72 )
                            goto LABEL_89;
                          DXGADAPTER::QueryWDDM1_3Caps(v72, (struct _D3DKMT_WDDM_1_3_CAPS *)v22);
                          if ( v73 && v71 != v73 )
                          {
                            v196.0 = 0;
                            DXGADAPTER::QueryWDDM1_3Caps(v73, &v196);
                            *v22 ^= (*v22 ^ v196.Value) & 0x20;
                          }
                          goto LABEL_88;
                        case 0x17:
                          if ( (_DWORD)Size != 16 )
                            goto LABEL_296;
                          if ( !v22[1] )
                            goto LABEL_242;
                          if ( !*((_BYTE *)DXGPROCESS::GetCurrent(v57, 0x1C0000000LL) + 346) )
                          {
LABEL_208:
                            LODWORD(v48) = -1073741790;
                            v98 = WdLogNewEntry5_WdWarning(v95, v94, v96);
                            *(_QWORD *)(v98 + 24) = -1073741790LL;
                            goto LABEL_193;
                          }
                          if ( v22[1] )
                          {
                            *(_DWORD *)(*((_QWORD *)v184 + 338) + 1104LL) = v22[3];
LABEL_187:
                            LODWORD(v48) = 0;
                          }
                          else
                          {
LABEL_242:
                            v48 = v184;
                            v22[2] = ADAPTER_RENDER::IsMultiPlaneOverlaySupported(*((ADAPTER_RENDER **)v184 + 338));
                            v22[3] = *(_DWORD *)(*((_QWORD *)v48 + 338) + 1104LL);
                            LODWORD(v48) = 0;
                          }
                          goto LABEL_89;
                        case 0x18:
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          DXGADAPTER::QueryWDDM2_0Caps(v184, (struct _D3DKMT_WDDM_2_0_CAPS *)v22);
                          LODWORD(v48) = 0;
                          goto LABEL_89;
                        case 0x19:
                          if ( (_DWORD)Size != 78 )
                            goto LABEL_296;
                          LODWORD(v48) = DXGADAPTER::QueryNodeMetadata(
                                           v184,
                                           *v22,
                                           (struct _DXGK_NODEMETADATA *)(v22 + 1));
                          goto LABEL_89;
                        case 0x1A:
                          if ( (_DWORD)Size != 520 )
                            goto LABEL_296;
                          v75 = v184;
                          v153 = *((_QWORD *)v184 + 338);
                          *(_WORD *)v22 = 0;
                          v154 = *(unsigned __int16 *)(v153 + 520);
                          v155 = *(char **)(v153 + 528);
                          goto LABEL_356;
                        case 0x1B:
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          *v22 = (*((_DWORD *)v189 + 87) & 0x200) != 0;
                          LODWORD(v48) = 0;
                          goto LABEL_89;
                        case 0x1C:
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          LODWORD(v48) = 0;
                          v64 = v182;
                          v63 = v183;
                          if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v184 + 338) + 16LL) + 2052LL) & 0x10) == 0 )
                            goto LABEL_207;
                          *v22 = 1;
                          goto LABEL_91;
                        case 0x1D:
                          if ( (_DWORD)Size != 520 )
                            goto LABEL_296;
                          v75 = v184;
                          v156 = *((_QWORD *)v184 + 338);
                          *(_WORD *)v22 = 0;
                          v154 = *(unsigned __int16 *)(v156 + 536);
                          v155 = *(char **)(v156 + 544);
LABEL_356:
                          v157 = RtlStringCbCopyNW((char *)v22, 0x1C0000000LL, v155, v154);
                          v48 = (DXGADAPTER *)v157;
                          if ( v157 < 0 )
                            goto LABEL_357;
                          goto LABEL_89;
                        case 0x1E:
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          if ( *((int *)v184 + 582) < 0x2000 )
                            v79 = 1;
                          else
                            v79 = *((_DWORD *)v184 + 70);
                          *v22 = v79;
                          goto LABEL_88;
                        case 0x1F:
                          if ( (_DWORD)Size != 28 )
                            goto LABEL_296;
                          v89 = *v22;
                          if ( *((int *)v184 + 582) >= 0x2000 )
                            v90 = *((unsigned int *)v184 + 70);
                          else
                            v90 = 1LL;
                          v91 = *v22;
                          if ( (unsigned int)v89 < (unsigned int)v90 )
                          {
                            _mm_lfence();
                            v92 = *(_DWORD **)(*(_QWORD *)(360 * v89 + *((_QWORD *)v184 + 323) + 8) + 64LL);
                            v22[1] = v92[281];
                            v22[2] = v92[282];
                            v22[3] = v92[283];
                            v22[4] = v92[284];
                            v22[5] = v92[285];
                            v22[6] = v92[280];
                            LODWORD(v55) = HIDWORD(Src[0]);
                            goto LABEL_88;
                          }
                          LODWORD(v48) = -1073741811;
                          v98 = WdLogNewEntry5_WdWarning(v90, 0x1C0000000uLL, v58);
                          *(_QWORD *)(v98 + 24) = v91;
                          *(_QWORD *)(v98 + 32) = -1073741811LL;
                          goto LABEL_193;
                        case 0x20:
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          QueryDriverCapsExt(v58, (struct _D3DKMT_DRIVERCAPS_EXT *)v22);
                          LODWORD(v48) = 0;
                          goto LABEL_89;
                        case 0x21:
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          v214 = 0LL;
                          v215 = 0;
                          v158 = DxgkMiracastQueryMiracastSupportInternal(&v214);
                          v162 = v158;
                          if ( v158 == -1073741637 )
                          {
                            *v22 = 0;
                            LODWORD(v48) = 0;
                            goto LABEL_89;
                          }
                          if ( v158 < 0 )
                          {
                            LODWORD(v48) = v158;
                            v98 = WdLogNewEntry5_WdWarning(v160, v159, v161);
                            *(_QWORD *)(v98 + 24) = v162;
                            goto LABEL_193;
                          }
                          *v22 = 2 - (BYTE8(v214) != 0);
                          LODWORD(v48) = 0;
                          goto LABEL_89;
                        case 0x22:
                          if ( (_DWORD)Size != 12 )
                            goto LABEL_296;
                          if ( *((int *)v184 + 582) < 0x2000 )
                            v97 = 1LL;
                          else
                            v97 = *((unsigned int *)v184 + 70);
                          if ( (*((_DWORD *)v184 + 515) & 0x40) == 0 )
                          {
                            LODWORD(v48) = -1073741811;
                            v98 = WdLogNewEntry5_WdWarning(v97, v184, v58);
                            *(_QWORD *)(v98 + 24) = -1073741811LL;
LABEL_193:
                            WdLogEvent5_WdWarning(v98);
                            goto LABEL_89;
                          }
                          if ( *v22 >= (unsigned int)v97 )
                          {
                            LODWORD(v48) = -1073741811;
                            v98 = WdLogNewEntry5_WdWarning(v97, v184, v58);
                            *(_QWORD *)(v98 + 24) = *v22;
                            *(_QWORD *)(v98 + 32) = -1073741811LL;
                            goto LABEL_193;
                          }
                          ADAPTER_RENDER::QueryGpuMmuCaps(
                            *((ADAPTER_RENDER **)v184 + 338),
                            *v22,
                            (struct _D3DKMT_GPUMMU_CAPS *)(v22 + 1));
                          LODWORD(v48) = 0;
LABEL_89:
                          v63 = v183;
LABEL_90:
                          v64 = v182;
LABEL_91:
                          DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v217);
                          break;
                        case 0x23:
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          LODWORD(v48) = 0;
                          v64 = v182;
                          v63 = v183;
                          if ( !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v184 + 338) + 16LL) + 2637LL) )
                            goto LABEL_207;
                          *v22 = 1;
                          goto LABEL_91;
                        case 0x24:
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          *v22 = *((_DWORD *)DXGGLOBAL::GetGlobal(v57, 0x1C0000000LL) + 342);
                          LODWORD(v48) = 0;
                          goto LABEL_89;
                        case 0x25:
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          LOBYTE(v6) = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v184 + 338) + 16LL) + 2638LL) != 0;
                          *v22 = v6;
                          LODWORD(v48) = 0;
                          goto LABEL_89;
                        case 0x26:
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          LOBYTE(v6) = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v184 + 338) + 16LL) + 2639LL) != 0;
                          *v22 = v6;
                          LODWORD(v48) = 0;
                          goto LABEL_89;
                        case 0x27:
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          LOBYTE(v6) = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v184 + 338) + 16LL) + 2640LL) != 0;
                          *v22 = v6;
                          LODWORD(v48) = 0;
                          goto LABEL_89;
                        case 0x28:
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          LOBYTE(v6) = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v184 + 338) + 16LL) + 2641LL) != 0;
                          *v22 = v6;
                          LODWORD(v48) = 0;
                          goto LABEL_89;
                        case 0x29:
                          if ( (_DWORD)Size != 24 )
                            goto LABEL_296;
                          LODWORD(v48) = DxgkReadPnPRegistryPath(
                                           v184,
                                           *v22,
                                           v22[1],
                                           *((_QWORD *)v22 + 1),
                                           *((_QWORD *)v22 + 2));
                          goto LABEL_89;
                        case 0x2A:
                          if ( (_DWORD)Size != 56 )
                            goto LABEL_296;
                          if ( *((int *)v184 + 582) < 0x2000 )
                            v140 = 1LL;
                          else
                            v140 = *((unsigned int *)v184 + 70);
                          v141 = *v22;
                          if ( (unsigned int)v141 >= (unsigned int)v140 )
                          {
                            v142 = WdLogNewEntry5_WdWarning(v140, v141, v58);
                            *(_QWORD *)(v142 + 24) = *v22;
                            *(_QWORD *)(v142 + 32) = -1073741811LL;
                            WdLogEvent5_WdWarning(v142);
                          }
                          else
                          {
                            (*(void (__fastcall **)(_QWORD, __int64, unsigned int *, unsigned int *, unsigned int *, unsigned int *, unsigned int *, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v184 + 338) + 640LL) + 8LL) + 80LL))(
                              *(_QWORD *)(*((_QWORD *)v184 + 338) + 648LL),
                              v141,
                              v22 + 8,
                              v22 + 10,
                              v22 + 12,
                              v22 + 2,
                              v22 + 4,
                              v22 + 6);
                          }
                          goto LABEL_88;
                        case 0x2B:
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          LODWORD(v48) = 0;
                          v64 = v182;
                          v63 = v183;
                          if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v184 + 338) + 16LL) + 2642LL) )
                            *v22 = 1;
                          else
LABEL_207:
                            *v22 = 0;
                          goto LABEL_91;
                        case 0x2C:
                          if ( (_DWORD)Size != 1 )
                            goto LABEL_296;
                          *(_BYTE *)v22 = 1;
                          v48 = v184;
                          if ( *((_DWORD *)v184 + 81) != 1297040209 )
                            goto LABEL_187;
                          wcscpy(Str2, L"Qualcomm Adreno 530");
                          if ( wcsncmp(*((const wchar_t **)v184 + 189), Str2, 0x14uLL) )
                            goto LABEL_187;
                          v163 = *(_DWORD *)(*((_QWORD *)v48 + 323) + 16LL);
                          LODWORD(v48) = 0;
                          v64 = v182;
                          v63 = v183;
                          if ( (v163 & 0x10) == 0 )
                            *(_BYTE *)v22 = 0;
                          goto LABEL_91;
                        case 0x2D:
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          v93 = v184;
                          if ( !ADAPTER_RENDER::IsMultiPlaneOverlaySupported(*((ADAPTER_RENDER **)v184 + 338))
                            || (v164 = *(_QWORD *)(*((_QWORD *)v93 + 338) + 16LL), *(_QWORD *)(v164 + 1152))
                            && *(_BYTE *)(v164 + 2642)
                            || *(_QWORD *)(v164 + 1160) && *(_BYTE *)(v164 + 2642) )
                          {
                            *v22 = 1;
                            LODWORD(v48) = 0;
                          }
                          else
                          {
                            *v22 = 0;
                            LODWORD(v48) = 0;
                          }
                          goto LABEL_89;
                        case 0x2E:
                          if ( (_DWORD)Size != 12 )
                            goto LABEL_296;
                          if ( !v22[1] )
                          {
                            v166 = (ADAPTER_RENDER *)*((_QWORD *)v184 + 338);
                            v167 = *v22;
                            if ( ADAPTER_RENDER::IsMultiPlaneOverlaySupported(v166) && (unsigned int)v167 < 0x10 )
                              v168 = *((_BYTE *)v166 + v167 + 1088);
                            else
                              v168 = 0;
                            LOBYTE(v6) = v168 != 0;
                            v22[2] = v6;
                            LODWORD(v48) = 0;
                            goto LABEL_89;
                          }
                          v165 = *v22;
                          LODWORD(v48) = 0;
                          v64 = v182;
                          v63 = v183;
                          if ( (unsigned int)v165 < 0x10 )
                            *(_BYTE *)(v165 + *((_QWORD *)v184 + 338) + 1088) = v22[2] != 0;
                          goto LABEL_91;
                        case 0x2F:
                          if ( (_DWORD)Size != 8 )
                            goto LABEL_296;
                          v206 = 0LL;
                          v63 = v183;
                          DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
                            (DXGDEVICEBYHANDLE *)&v202,
                            *v22,
                            (struct _KTHREAD **)v183,
                            &v206);
                          if ( v206 )
                          {
                            *((_BYTE *)v22 + 4) = *((_BYTE *)v206 + 1906);
                            LODWORD(v48) = 0;
                          }
                          else
                          {
                            v169 = WdLogNewEntry5_WdError(v104, v103);
                            *(_QWORD *)(v169 + 24) = *v22;
                            WdLogEvent5_WdError(v169);
                            LODWORD(v48) = -1073741811;
                          }
                          if ( v202 )
                          {
                            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v202 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v202 + 2), v202);
                            LODWORD(v55) = HIDWORD(Src[0]);
                          }
                          goto LABEL_90;
                        case 0x30:
                          v63 = v183;
                          if ( (*((_BYTE *)v183 + 348) & 4) != 0 )
                          {
                            HostSilo = PsGetHostSilo();
                            v6 = PsAttachSiloToCurrentThread(HostSilo);
                          }
                          LODWORD(v48) = DxgkpQueryRegistry(v184, v22, Size);
                          if ( v6 )
                            PsAttachSiloToCurrentThread(v6);
                          goto LABEL_90;
                        case 0x31:
                          if ( (_DWORD)Size != 8 )
                            goto LABEL_296;
                          LODWORD(v48) = ADAPTER_RENDER::GetKmdFileVersion(
                                           *((ADAPTER_RENDER **)v184 + 338),
                                           (union _LARGE_INTEGER *)v22);
                          goto LABEL_89;
                        case 0x32:
                        case 0x33:
                          if ( (unsigned int)Size < 8 )
                            goto LABEL_296;
                          if ( HIDWORD(Src[0]) == 50 )
                            LOBYTE(v56) = 1;
                          else
                            v56 = 0LL;
                          LODWORD(v48) = DpiReadBlockListInfo(*((_QWORD *)v184 + 27), v22, (unsigned int)Size, v56);
                          goto LABEL_89;
                        case 0x3C:
                          if ( (_DWORD)Size != 80 )
                            goto LABEL_296;
                          if ( !*((_QWORD *)v189 + 27) )
                          {
                            v146 = WdLogNewEntry5_WdAssertion(0LL, 0x1C0000000uLL);
                            *(_QWORD *)(v146 + 24) = 3749LL;
                            WdLogEvent5_WdAssertion(v146);
                          }
                          AdapterUniqueGUID = (const void **)DpiFdoGetAdapterUniqueGUID();
                          if ( AdapterUniqueGUID )
                          {
                            memset(v22, 0, 0x50uLL);
                            if ( *(unsigned __int16 *)AdapterUniqueGUID >= 0x4Eu )
                              v106 = 78LL;
                            else
                              v106 = *(unsigned __int16 *)AdapterUniqueGUID;
                            memmove(v22, AdapterUniqueGUID[1], v106);
LABEL_88:
                            LODWORD(v48) = 0;
                          }
                          else
                          {
                            LODWORD(v48) = -1073741823;
                          }
                          goto LABEL_89;
                        case 0x3D:
                          if ( (_DWORD)Size != 56 )
                            goto LABEL_296;
                          LODWORD(v48) = DXGADAPTER::GetNodePerfData(v184, (struct _D3DKMT_NODE_PERFDATA *)v22);
                          goto LABEL_89;
                        case 0x3E:
                          if ( (_DWORD)Size != 64 )
                            goto LABEL_296;
                          LODWORD(v48) = DXGADAPTER::GetAdapterPerfData(v184, (struct _D3DKMT_ADAPTER_PERFDATA *)v22);
                          goto LABEL_89;
                        case 0x3F:
                          if ( (_DWORD)Size != 40 )
                            goto LABEL_296;
                          LODWORD(v48) = DXGADAPTER::GetAdapterPerfDataCaps(
                                           v184,
                                           (struct _D3DKMT_ADAPTER_PERFDATACAPS *)v22);
                          goto LABEL_89;
                        case 0x40:
                          if ( (_DWORD)Size != 132 )
                            goto LABEL_296;
                          LODWORD(v48) = DXGADAPTER::GetGpuVersion(v184, (struct _D3DKMT_GPUVERSION *)v22);
                          goto LABEL_89;
                        case 0x41:
                        case 0x42:
                          if ( (_DWORD)Size != 0x2000 )
                            goto LABEL_296;
                          LODWORD(v48) = -1073741823;
                          if ( HIDWORD(Src[0]) == 65 )
                            v107 = v189;
                          else
                            v107 = v184;
                          if ( !v107 )
                            goto LABEL_89;
                          DXGADAPTER::GetDeviceDescriptor(v107, 0x2000u, (unsigned __int16 *)v22);
                          goto LABEL_88;
                        case 0x44:
                          if ( (_DWORD)Size != 1 )
                            goto LABEL_296;
                          if ( v184 )
                            v80 = *((_BYTE *)v184 + 210);
                          else
                            v80 = 0;
                          *(_BYTE *)v22 = v80;
                          goto LABEL_88;
                        case 0x46:
                          if ( (_DWORD)Size != 4 )
                            goto LABEL_296;
                          DXGADAPTER::QueryWDDM2_7Caps(v184, (struct _D3DKMT_WDDM_2_7_CAPS *)v22);
                          LODWORD(v48) = 0;
                          goto LABEL_89;
                        case 0x47:
                          if ( (_DWORD)Size != 524 )
                            goto LABEL_296;
                          v170 = v184;
                          v171 = *((_QWORD *)v184 + 338);
                          v172 = *v22;
                          if ( (_DWORD)v172 )
                          {
                            LODWORD(v48) = -1073741811;
                          }
                          else
                          {
                            DisplayUMDFileName = (const struct _UNICODE_STRING *)ADAPTER_RENDER::GetDisplayUMDFileName(v171);
                            if ( (unsigned int)IsNullUmdDriver(DisplayUMDFileName) )
                            {
                              LODWORD(v48) = -1073741811;
                            }
                            else
                            {
                              LODWORD(v48) = RtlStringCbCopyNW(
                                               (char *)v22 + 4,
                                               v172,
                                               v174[1],
                                               *(unsigned __int16 *)v174);
                              if ( (int)v48 >= 0 )
                                goto LABEL_89;
                            }
                          }
                          v133 = (_QWORD *)WdLogNewEntry5_WdEvent(v171, v172);
                          v133[3] = v22;
                          v133[4] = v170;
                          v133[5] = (int)v48;
LABEL_299:
                          WdLogEvent5_WdEvent(v133);
                          goto LABEL_89;
                        case 0x48:
                          if ( (_DWORD)Size != 12 )
                          {
LABEL_296:
                            LODWORD(v48) = -1073741811;
                            v132 = WdLogNewEntry5_WdWarning(v57, 0x1C0000000uLL, v58);
                            v64 = v182;
                            *(_QWORD *)(v132 + 24) = v182;
                            *(_QWORD *)(v132 + 32) = -1073741811LL;
                            WdLogEvent5_WdWarning(v132);
                            v63 = v183;
                            goto LABEL_91;
                          }
                          LODWORD(v48) = DXGADAPTER::QueryTrackedWorkloadSupport(
                                           v184,
                                           *v22,
                                           (enum DXGK_ENGINE_TYPE)v22[1],
                                           (int *)v22 + 2);
                          goto LABEL_89;
                        default:
                          LODWORD(v48) = -1073741811;
                          v98 = WdLogNewEntry5_WdWarning(v57, 0x1C0000000uLL, v58);
                          *(_QWORD *)(v98 + 24) = v55;
                          *(_QWORD *)(v98 + 32) = -1073741811LL;
                          goto LABEL_193;
                      }
LABEL_92:
                      if ( (int)v48 >= 0 && (*((_BYTE *)v63 + 348) & 4) != 0 )
                        LODWORD(v48) = PostProcessUMDFileName((enum _KMTQUERYADAPTERINFOTYPE)v55, v22, Size);
                      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v218, v65);
                      goto LABEL_96;
                    }
                  }
                }
                LODWORD(v48) = -1073741130;
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v217);
                COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v218, v175);
                goto LABEL_291;
              }
              if ( (_DWORD)v17 != 8 )
              {
                v118 = WdLogNewEntry5_WdWarning(v43, v42, v44);
                *(_QWORD *)(v118 + 24) = v17;
                *(_QWORD *)(v118 + 32) = -1073741811LL;
                WdLogEvent5_WdWarning(v118);
                operator delete[](v22);
                if ( v201 )
                  DXGADAPTER::ReleaseReference(v201);
                DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v190, v119);
                if ( !v192 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
                  return 3221225485LL;
LABEL_276:
                McTemplateK0q_EtwWriteTransfer(v111, &EventProfilerExit, v112, v190);
                return 3221225485LL;
              }
LABEL_195:
              v194 = *v22;
              goto LABEL_53;
            }
            if ( (_DWORD)v17 == 48 )
              goto LABEL_195;
            v117 = WdLogNewEntry5_WdWarning(v43, v42, v44);
            *(_QWORD *)(v117 + 24) = v17;
            *(_QWORD *)(v117 + 32) = -1073741811LL;
            WdLogEvent5_WdWarning(v117);
            operator delete[](v22);
            v116 = v201;
            if ( !v201 )
              goto LABEL_260;
          }
          else
          {
            v115 = WdLogNewEntry5_WdWarning(v43, v42, v44);
            *(_QWORD *)(v115 + 24) = LODWORD(Src[0]);
            *(_QWORD *)(v115 + 32) = -1073741811LL;
            WdLogEvent5_WdWarning(v115);
            operator delete[](v22);
            v116 = v201;
            if ( !v201 )
              goto LABEL_260;
          }
          DXGADAPTER::ReleaseReference(v116);
LABEL_260:
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v190, v114);
          v113 = v192 == 0;
          goto LABEL_261;
        }
        v37 = WdLogNewEntry5_WdWarning(v20, v19, v21);
        *(_QWORD *)(v37 + 24) = -1073741801LL;
        WdLogEvent5_WdWarning(v37);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v190, v38);
        if ( v192 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v39, &EventProfilerExit, v40, v190);
        return 3221225495LL;
      }
    }
    else
    {
      v29 = WdLogNewEntry5_WdWarning(v12, v11, v13);
      *(_QWORD *)(v29 + 24) = -1073741811LL;
      WdLogEvent5_WdWarning(v29);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v190, v30);
      if ( v192 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v31, &EventProfilerExit, v32, v190);
      return 3221225485LL;
    }
  }
  else
  {
    v24 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v24 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v24);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v190, v25);
    if ( v192 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v26, &EventProfilerExit, v27, v190);
    return 3221225485LL;
  }
}
