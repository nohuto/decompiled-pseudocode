/*
 * XREFs of ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C00F2BE0
 * Callers:
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C00EF9B0 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0113A10 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C0117FD8 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C011D460 (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 * Callees:
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0002258 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002630 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002848 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C0002910 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0002AC0 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002B1C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B94 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002BD4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0002CC0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004448 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0004488 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00044A0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000568C (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C00068E0 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C000D9DC (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     ??0_MOCKDRIVERSTATE_PER_PLANE@@QEAA@XZ @ 0x1C001B6D0 (--0_MOCKDRIVERSTATE_PER_PLANE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetResourceUnsafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0025E54 (-GetResourceUnsafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ?ReleaseIfAcquired@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0025F74 (-ReleaseIfAcquired@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage @ 0x1C0026138 (Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0028C40 (memmove.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ?OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@EPEAU_EPROCESS@@PEAU_DXGSHAREDALLOCOBJECT@@PEAVDXGRESOURCEREFERENCE@@PEAEPEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVDXGAUTOMUTEX@@PEAVDXGAUTOPUSHLOCK@@@Z @ 0x1C00D6D5C (-OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@E.c)
 *     ?CheckNoKmdAccessPrivateData@@YAJIPEAXI@Z @ 0x1C00DC880 (-CheckNoKmdAccessPrivateData@@YAJIPEAXI@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00EF950 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?OpenAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAVDXGALLOCATION@@PEAU_DXGK_OPENALLOCATIONINFO@@PEAPEAX4PEAXEEIPEAIPEA_K@Z @ 0x1C00F5DB0 (-OpenAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAV.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00F73E0 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FDE00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00FF580 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C01093F4 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z @ 0x1C010C650 (-CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C010C9A0 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C011DC54 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?CreateDriverAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAPEAX5PEAXPEBU_D3DKM_CREATESTANDARDALLOCATION@@HPEAU_D3DKMT_CREATESTANDARDALLOCATION@@@Z @ 0x1C011E450 (-CreateDriverAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINF.c)
 *     ?DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C012A560 (-DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCA.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C012A624 (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?ReplicateGdiContent@DXGADAPTER@@QEBAEXZ @ 0x1C014F964 (-ReplicateGdiContent@DXGADAPTER@@QEBAEXZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C015352C (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?CreateVidMmAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@EPEAVCOREDEVICEACCESS@@@Z @ 0x1C0153650 (-CreateVidMmAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO.c)
 *     ?AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z @ 0x1C016C0A4 (-AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z.c)
 *     ?CreateDestructionBuffers@DXGDEVICE@@QEAAJIPEAVDXGRESOURCE@@H@Z @ 0x1C016F100 (-CreateDestructionBuffers@DXGDEVICE@@QEAAJIPEAVDXGRESOURCE@@H@Z.c)
 *     ?AppendAllocationListToResourceOrDevice@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@1@Z @ 0x1C016F390 (-AppendAllocationListToResourceOrDevice@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@1@Z.c)
 *     ?ProcessSectionAttributes@@YAJPEAXPEAU_DXGK_ALLOCATIONINFO@@@Z @ 0x1C0228224 (-ProcessSectionAttributes@@YAJPEAXPEAU_DXGK_ALLOCATIONINFO@@@Z.c)
 *     ?ProcessSysMemAttributes@@YAJPEAXIPEAU_DXGK_ALLOCATIONINFO@@@Z @ 0x1C0228354 (-ProcessSysMemAttributes@@YAJPEAXIPEAU_DXGK_ALLOCATIONINFO@@@Z.c)
 *     ?VmBusSendCreateAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIPEBU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAPEAXPEBX3EEPEAPEAE@Z @ 0x1C024658C (-VmBusSendCreateAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIPEBU_D3DKMT_CREATEALLOCATION@@PEA.c)
 *     ?VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K2@Z @ 0x1C02497B8 (-VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGA.c)
 *     ?VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAPGPUVIRTUALADDRESS@@@Z @ 0x1C02499A0 (-VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAP.c)
 *     ?RemoveAllocationsWithoutDestroy@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@I@Z @ 0x1C025618C (-RemoveAllocationsWithoutDestroy@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@I@Z.c)
 *     ?RemoveResourceFromDeviceList@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C0256280 (-RemoveResourceFromDeviceList@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0285260 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXGDEVICE::CreateAllocation(
        DXGDEVICE *this,
        struct _D3DKMT_CREATEALLOCATION *a2,
        __int64 a3,
        char a4,
        struct _DXGSHAREDALLOCOBJECT *a5,
        const struct _D3DKM_CREATESTANDARDALLOCATION *a6,
        struct COREDEVICEACCESS *a7,
        unsigned int a8,
        struct _EPROCESS *a9,
        unsigned int *a10,
        unsigned __int64 *a11,
        unsigned __int8 *a12,
        struct _D3DKMT_CREATESTANDARDALLOCATION *a13,
        void *a14,
        unsigned int a15)
{
  unsigned __int8 v15; // r15
  DXGDEVICE *v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 Flags; // rcx
  __int64 v24; // rax
  _QWORD *v26; // rax
  UINT v27; // r14d
  __int64 NumAllocations; // rax
  char *v29; // r12
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // r13
  int v32; // r15d
  SIZE_T v33; // rax
  SIZE_T v34; // rax
  SIZE_T v35; // rax
  void **v36; // r13
  SIZE_T v37; // rax
  unsigned __int8 v38; // al
  SIZE_T v39; // rax
  void **v40; // rdi
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  _QWORD *v44; // rax
  __int64 v45; // rdi
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rax
  UINT v51; // ecx
  __int64 DriverAllocations; // rdi
  struct DXGRESOURCE *v53; // r13
  size_t v54; // r8
  D3DDDI_ALLOCATIONINFO *pAllocationInfo; // rdx
  SIZE_T Size; // r8
  UINT v57; // r10d
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // r9
  char *v61; // r15
  __int64 *v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rax
  unsigned int v65; // eax
  __int64 v66; // rax
  int v67; // eax
  __int64 v68; // rdx
  __int64 v69; // r15
  UINT i; // eax
  __int64 v71; // r15
  __int64 v72; // rdx
  SIZE_T v73; // rcx
  _QWORD *v74; // rax
  __int64 v75; // rax
  ULONG64 v76; // rdx
  struct DXGALLOCATION *v77; // r15
  __int64 v78; // rdx
  _QWORD *v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  char *v83; // rdx
  __int64 v84; // rcx
  char *v85; // r9
  size_t v86; // r8
  char *v87; // rdx
  UINT PrivateDriverDataSize; // eax
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  PVOID v92; // r9
  size_t v93; // r8
  D3DKMT_CREATESTANDARDALLOCATION *pStandardAllocation; // rdx
  __int64 v95; // rcx
  _QWORD *v96; // rax
  __int64 v97; // rcx
  D3DKMT_CREATEALLOCATIONFLAGS v98; // eax
  int v99; // eax
  __int64 v100; // rax
  __int64 v101; // rax
  char v102; // cl
  D3DKMT_CREATEALLOCATIONFLAGS v103; // eax
  struct _DXGK_ALLOCATIONINFO *v104; // r8
  UINT Value; // edx
  unsigned int v106; // eax
  int v107; // edx
  __int64 v108; // rax
  __int64 v109; // rcx
  UINT v110; // r15d
  struct COREDEVICEACCESS *v111; // r13
  __int64 v112; // r12
  ULONG64 v113; // rsi
  unsigned __int8 *v114; // rdi
  __int64 v115; // r8
  __int64 v116; // rax
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // rax
  __int64 v120; // rdx
  struct DXGGLOBAL *Global; // r15
  struct COREDEVICEACCESS *v122; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v124; // rax
  int v125; // eax
  __int64 v126; // rdx
  __int64 v127; // r8
  __int64 v128; // rcx
  __int64 v129; // rax
  __int64 v130; // rdx
  __int64 v131; // rax
  D3DKMT_HANDLE v132; // eax
  D3DKMT_CREATEALLOCATIONFLAGS v133; // eax
  D3DKMT_HANDLE v134; // ecx
  __int64 v135; // r8
  struct DXGALLOCATION *j; // r9
  UINT v137; // eax
  struct DXGALLOCATION *v138; // r9
  __int64 v139; // rcx
  __int64 v140; // rdx
  __int64 v141; // r8
  __int64 v142; // rcx
  _QWORD *v143; // rax
  struct _D3DKMT_CREATEALLOCATION *v144; // r12
  unsigned __int8 v145; // r15
  size_t PrivateRuntimeDataSize; // r8
  char *pPrivateRuntimeData; // rdx
  void *v148; // r9
  UINT v149; // eax
  __int64 v150; // rcx
  __int64 v151; // rdx
  __int64 v152; // r8
  __int64 v153; // rcx
  struct _D3DKMT_CREATEALLOCATION *v154; // rdx
  const void *v155; // rdx
  struct DXGALLOCATION *v156; // rax
  struct DXGALLOCATION *v157; // r12
  char *v158; // rcx
  char *v159; // r15
  PVOID v160; // rax
  __int64 v161; // rdx
  __int64 v162; // r8
  __int64 v163; // rcx
  void *v164; // r9
  const void *v165; // rdx
  __int64 v166; // rdx
  __int64 v167; // rcx
  __int64 v168; // rax
  unsigned int v169; // eax
  D3DKMT_CREATEALLOCATIONFLAGS v170; // edx
  const void *v171; // r11
  const void *v172; // r10
  bool v173; // cf
  void **v174; // rdx
  unsigned int v175; // r9d
  __int64 v176; // rdx
  __int64 v177; // rcx
  __int64 v178; // rax
  __int64 v179; // rcx
  int v180; // eax
  __int64 v181; // rax
  struct DXGALLOCATION *v182; // r8
  UINT v183; // r11d
  unsigned __int8 *v184; // r14
  unsigned __int8 *v185; // r9
  D3DKMT_CREATEALLOCATIONFLAGS v186; // eax
  UINT v187; // eax
  __int64 v188; // r12
  unsigned int v189; // edx
  D3DKMT_CREATEALLOCATIONFLAGS v190; // ecx
  bool v191; // zf
  struct COREDEVICEACCESS *v192; // rcx
  __int64 v193; // r8
  int v194; // edx
  struct _DXGK_ALLOCATIONINFO *v195; // rcx
  NTSTATUS v196; // eax
  __int64 v197; // rdx
  __int64 v198; // rcx
  __int64 v199; // rax
  __int64 v200; // rcx
  PVOID v201; // r12
  int v202; // eax
  __int64 v203; // rdx
  __int64 v204; // rcx
  _QWORD *v205; // rax
  __int64 v206; // rdx
  int v207; // ecx
  struct COREDEVICEACCESS *v208; // r8
  struct COREDEVICEACCESS *v209; // r8
  unsigned int *v210; // r9
  unsigned int v211; // edi
  struct DXGPROCESS *v212; // rax
  int Resident; // eax
  __int64 v214; // rdx
  __int64 v215; // rcx
  __int64 v216; // rax
  D3DKMT_CREATEALLOCATIONFLAGS v217; // eax
  int v218; // eax
  __int64 v219; // rdx
  __int64 v220; // rcx
  __int64 v221; // r8
  _QWORD *v222; // rax
  _OWORD *v223; // rdx
  unsigned __int8 *v224; // rcx
  size_t v225; // rcx
  size_t v226; // r12
  const void *v227; // rdx
  char *v228; // rcx
  size_t v229; // r8
  void **v230; // rax
  _QWORD *v231; // rax
  __int64 v232; // rdx
  __int64 v233; // rcx
  __int64 v234; // rax
  __int64 v235; // r15
  D3DKMT_CREATEALLOCATIONFLAGS v236; // ecx
  struct DXGALLOCATION *v237; // r12
  void *v238; // rcx
  NTSTATUS v239; // eax
  __int64 v240; // rdx
  PVOID v241; // rcx
  int v242; // ecx
  struct _D3DKM_CREATESTANDARDALLOCATION *v243; // rcx
  UINT v244; // r12d
  int v245; // edi
  int v246; // ecx
  struct DXGPROCESS *Current; // rax
  int v248; // eax
  __int64 v249; // rdx
  __int64 v250; // rcx
  __int64 v251; // r8
  unsigned __int8 v252; // al
  D3DGPU_VIRTUAL_ADDRESS BaseAddress; // rcx
  __int64 v254; // rcx
  UINT v255; // esi
  struct DXGALLOCATION *v256; // r13
  DXGDEVICE *v257; // rdi
  struct DXGPROCESS *v258; // rax
  __int64 v259; // r15
  unsigned __int64 v260; // r12
  DXGPUSHLOCK *v261; // rcx
  __int64 v262; // rax
  __int64 v263; // rdx
  __int64 v264; // rcx
  __int64 v265; // r12
  __int64 v266; // rax
  __int64 v267; // rdx
  __int64 v268; // r8
  __int64 v269; // rcx
  __int64 v270; // r12
  __int64 v271; // rax
  __int64 v272; // r12
  __int64 v273; // rcx
  __int64 v274; // r8
  int v275; // r9d
  unsigned int v276; // r8d
  __int64 v277; // rax
  __int64 v278; // rdx
  __int64 v279; // rsi
  __int64 v280; // rax
  unsigned int v281; // eax
  UINT v282; // r12d
  __int64 v283; // rdx
  int v284; // eax
  __int64 v285; // rax
  __int64 v286; // rdx
  struct DXGALLOCATION *v287; // r12
  struct DXGALLOCATION *v288; // r15
  _QWORD *v289; // rax
  __int64 v290; // rcx
  __int64 v291; // rax
  __int64 v292; // rdx
  _QWORD *v293; // rcx
  __int64 v294; // rcx
  __int64 v295; // rcx
  char v296; // r15
  int v297; // eax
  __int64 v298; // rcx
  struct DXGPROCESS *v299; // r12
  __int64 v300; // rdx
  unsigned int Count; // r8d
  unsigned int v302; // ecx
  __int64 v303; // r9
  int v304; // edx
  __int64 v305; // rdx
  void **v306; // rsi
  __int64 v307; // rdx
  struct _SLIST_ENTRY *v308; // rsi
  __int64 v309; // rbx
  int Object; // [rsp+20h] [rbp-348h]
  unsigned __int8 v311; // [rsp+70h] [rbp-2F8h]
  char v312; // [rsp+71h] [rbp-2F7h]
  unsigned __int8 v313[8]; // [rsp+80h] [rbp-2E8h] BYREF
  __int64 v314; // [rsp+88h] [rbp-2E0h]
  struct DXGALLOCATION *v315; // [rsp+90h] [rbp-2D8h]
  unsigned int HostProcess; // [rsp+98h] [rbp-2D0h]
  char v317; // [rsp+9Ch] [rbp-2CCh]
  UINT v318; // [rsp+A0h] [rbp-2C8h]
  char v319; // [rsp+A4h] [rbp-2C4h]
  char v320; // [rsp+A5h] [rbp-2C3h]
  void **v321; // [rsp+A8h] [rbp-2C0h]
  void *v322; // [rsp+B0h] [rbp-2B8h]
  void **v323; // [rsp+B8h] [rbp-2B0h]
  struct _DXGK_ALLOCATIONINFO *v324; // [rsp+C0h] [rbp-2A8h]
  char v325; // [rsp+C8h] [rbp-2A0h]
  char v326; // [rsp+D0h] [rbp-298h]
  struct COREDEVICEACCESS *v327; // [rsp+D8h] [rbp-290h]
  struct _DXGSHAREDALLOCOBJECT *v328; // [rsp+E0h] [rbp-288h]
  struct DXGALLOCATION *v329; // [rsp+E8h] [rbp-280h] BYREF
  void *Src; // [rsp+F0h] [rbp-278h]
  unsigned __int8 *v331; // [rsp+F8h] [rbp-270h]
  struct _D3DKM_CREATESTANDARDALLOCATION *v332; // [rsp+100h] [rbp-268h]
  int v333; // [rsp+108h] [rbp-260h]
  struct _D3DKMT_CREATEALLOCATION *v334; // [rsp+110h] [rbp-258h]
  DXGDEVICE *v335; // [rsp+118h] [rbp-250h]
  struct DXGRESOURCE *v336; // [rsp+120h] [rbp-248h]
  __int64 *v337; // [rsp+128h] [rbp-240h]
  char *v338; // [rsp+130h] [rbp-238h]
  DXGDEVICE *v339; // [rsp+138h] [rbp-230h]
  struct _D3DKMT_CREATEALLOCATION *v340; // [rsp+140h] [rbp-228h]
  struct DXGALLOCATION *v341; // [rsp+150h] [rbp-218h]
  struct _DXGK_OPENALLOCATIONINFO *v342; // [rsp+158h] [rbp-210h]
  int v343; // [rsp+160h] [rbp-208h]
  struct DXGRESOURCE *v344; // [rsp+168h] [rbp-200h] BYREF
  PVOID v345; // [rsp+170h] [rbp-1F8h] BYREF
  unsigned int *v346; // [rsp+178h] [rbp-1F0h]
  __int64 v347; // [rsp+180h] [rbp-1E8h] BYREF
  unsigned __int8 *v348; // [rsp+188h] [rbp-1E0h] BYREF
  SIZE_T v349; // [rsp+190h] [rbp-1D8h]
  __int64 *v350; // [rsp+198h] [rbp-1D0h]
  PSLIST_ENTRY ListEntry; // [rsp+1A0h] [rbp-1C8h]
  unsigned __int64 *v352; // [rsp+1A8h] [rbp-1C0h]
  char *v353; // [rsp+1B0h] [rbp-1B8h]
  struct _EX_RUNDOWN_REF *v354; // [rsp+1B8h] [rbp-1B0h] BYREF
  struct _EX_RUNDOWN_REF *v355; // [rsp+1C0h] [rbp-1A8h] BYREF
  struct _EX_RUNDOWN_REF *v356; // [rsp+1C8h] [rbp-1A0h] BYREF
  struct DXGALLOCATION *v357; // [rsp+1D0h] [rbp-198h] BYREF
  PVOID v358; // [rsp+1D8h] [rbp-190h] BYREF
  char v359[8]; // [rsp+1E0h] [rbp-188h] BYREF
  struct _D3DKMT_CREATESTANDARDALLOCATION *v360; // [rsp+1E8h] [rbp-180h]
  struct _EPROCESS *v361; // [rsp+1F0h] [rbp-178h]
  char *v362; // [rsp+1F8h] [rbp-170h]
  struct _D3DKMT_CREATEALLOCATION *v363; // [rsp+200h] [rbp-168h]
  DXGDEVICE *v364; // [rsp+208h] [rbp-160h]
  __int64 v365; // [rsp+210h] [rbp-158h]
  _BYTE v366[16]; // [rsp+218h] [rbp-150h] BYREF
  _BYTE v367[16]; // [rsp+228h] [rbp-140h] BYREF
  _DXGKARG_DESCRIBEALLOCATION v368; // [rsp+238h] [rbp-130h] BYREF
  _BYTE v369[24]; // [rsp+268h] [rbp-100h] BYREF
  _BYTE v370[24]; // [rsp+280h] [rbp-E8h] BYREF
  _BYTE v371[24]; // [rsp+298h] [rbp-D0h] BYREF
  D3DDDI_MAPGPUVIRTUALADDRESS v372; // [rsp+2B0h] [rbp-B8h] BYREF

  v312 = a4;
  v15 = a3;
  v311 = a3;
  v17 = this;
  v335 = this;
  v339 = this;
  v364 = this;
  v340 = a2;
  v334 = a2;
  v363 = a2;
  v325 = a3;
  v328 = a5;
  v332 = a6;
  v327 = a7;
  v361 = a9;
  v346 = a10;
  v352 = a11;
  v331 = a12;
  v360 = a13;
  v18 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v18 + 184) )
  {
    if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v18 + 168)) )
    {
      v19 = WdLogNewEntry5_WdAssertion(v18, a2);
      *(_QWORD *)(v19 + 24) = 4676LL;
      WdLogEvent5_WdAssertion(v19);
    }
    a4 = v312;
  }
  if ( v15 && a4 )
  {
    v20 = WdLogNewEntry5_WdAssertion(v18, a2);
    *(_QWORD *)(v20 + 24) = 4681LL;
    WdLogEvent5_WdAssertion(v20);
  }
  v21 = *((_QWORD *)v17 + 2);
  v22 = *(_QWORD *)(v21 + 16);
  v317 = *(_BYTE *)(v22 + 209);
  v326 = v317;
  Flags = (unsigned int)a2->Flags;
  if ( (Flags & 0x800) != 0 )
  {
    if ( (*(_DWORD *)(v22 + 2060) & 0x10) == 0 )
    {
      v24 = WdLogNewEntry5_WdWarning(Flags, a2, a3);
      *(_QWORD *)(v24 + 24) = v17;
      *(_QWORD *)(v24 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v24);
      return 3221225485LL;
    }
    if ( (Flags & 2) == 0 )
    {
      v26 = (_QWORD *)WdLogNewEntry5_WdWarning(Flags, a2, a3);
      v26[3] = v17;
      v26[4] = -1073741811LL;
      v26[5] = 1LL;
      WdLogEvent5_WdWarning(v26);
      return 3221225485LL;
    }
  }
  v27 = 0;
  v321 = 0LL;
  Src = 0LL;
  ListEntry = 0LL;
  v365 = v21;
  NumAllocations = a2->NumAllocations;
  if ( (unsigned int)NumAllocations <= 5 )
  {
    v45 = v21 + 1472;
    ++*(_DWORD *)(v45 + 20);
    v29 = (char *)ExpInterlockedPopEntrySList((PSLIST_HEADER)v45);
    v322 = v29;
    if ( !v29 )
    {
      ++*(_DWORD *)(v45 + 24);
      v29 = (char *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v45 + 48))(
                      *(unsigned int *)(v45 + 36),
                      *(unsigned int *)(v45 + 44),
                      *(unsigned int *)(v45 + 40));
      v322 = v29;
    }
    ListEntry = (PSLIST_ENTRY)v29;
    if ( !v29 )
    {
      v50 = WdLogNewEntry5_WdLowResource(v47, v46, v48, v49);
      *(_QWORD *)(v50 + 24) = v17;
      WdLogEvent5_WdLowResource(v50);
      return -1073741801LL;
    }
    v324 = (struct _DXGK_ALLOCATIONINFO *)(v29 + 720);
    v342 = (struct _DXGK_OPENALLOCATIONINFO *)(v29 + 480);
    v36 = (void **)(v29 + 640);
    v323 = (void **)(v29 + 640);
    v40 = (void **)(v29 + 680);
    v321 = (void **)(v29 + 680);
    v338 = v29;
    goto LABEL_59;
  }
  v29 = 0LL;
  v322 = 0LL;
  v338 = 0LL;
  v30 = (unsigned int)NumAllocations;
  v31 = 96 * NumAllocations;
  v32 = 0;
  if ( (unsigned __int64)(96 * NumAllocations) <= 0xFFFFFFFF )
  {
    v33 = 96LL * (unsigned int)NumAllocations;
    if ( !is_mul_ok(v30, 0x60uLL) )
      v33 = -1LL;
    v29 = (char *)operator new[](v33, 0x4B677844u, PagedPool);
    v322 = v29;
    v338 = v29;
  }
  else
  {
    v32 = -1073741675;
  }
  v324 = 0LL;
  if ( v31 <= 0xFFFFFFFF )
  {
    v32 = 0;
    if ( 88 * (unsigned __int64)a2->NumAllocations <= 0xFFFFFFFF )
    {
      v34 = 88LL * a2->NumAllocations;
      if ( !is_mul_ok(a2->NumAllocations, 0x58uLL) )
        v34 = -1LL;
      v324 = (struct _DXGK_ALLOCATIONINFO *)operator new[](v34, 0x4B677844u, PagedPool);
    }
    else
    {
      v32 = -1073741675;
    }
  }
  v342 = 0LL;
  if ( v32 >= 0 )
  {
    v32 = 0;
    if ( 32 * (unsigned __int64)a2->NumAllocations <= 0xFFFFFFFF )
    {
      v35 = 32LL * a2->NumAllocations;
      if ( !is_mul_ok(a2->NumAllocations, 0x20uLL) )
        v35 = -1LL;
      v342 = (struct _DXGK_OPENALLOCATIONINFO *)operator new[](v35, 0x4B677844u, PagedPool);
    }
    else
    {
      v32 = -1073741675;
    }
  }
  v36 = 0LL;
  v323 = 0LL;
  if ( v32 < 0 )
    goto LABEL_40;
  v32 = 0;
  if ( 8 * (unsigned __int64)a2->NumAllocations > 0xFFFFFFFF )
  {
    v32 = -1073741675;
LABEL_40:
    v38 = v311;
    goto LABEL_41;
  }
  v37 = 8LL * a2->NumAllocations;
  if ( !is_mul_ok(a2->NumAllocations, 8uLL) )
    v37 = -1LL;
  v36 = (void **)operator new[](v37, 0x4B677844u, PagedPool);
  v323 = v36;
  v38 = v311;
  if ( v311 )
  {
    v39 = 8LL * a2->NumAllocations;
    if ( !is_mul_ok(a2->NumAllocations, 8uLL) )
      v39 = -1LL;
    v40 = (void **)operator new[](v39, 0x4B677844u, PagedPool);
    v321 = v40;
    v38 = v311;
    goto LABEL_42;
  }
LABEL_41:
  v40 = 0LL;
LABEL_42:
  if ( v32 < 0 || !v29 || !v324 || !v342 || !v36 || !v40 && v38 )
  {
    operator delete[](v29);
    operator delete[](v324);
    operator delete[](v342);
    operator delete[](v36);
    operator delete[](v40);
    v44 = (_QWORD *)WdLogNewEntry5_WdWarning(v42, v41, v43);
    v44[3] = v17;
    v44[4] = a2->NumAllocations;
    if ( v32 >= 0 )
    {
      v32 = -1073741801;
      v44[5] = -1073741801LL;
    }
    else
    {
      v44[5] = v32;
    }
    WdLogEvent5_WdWarning(v44);
    return (unsigned int)v32;
  }
  v15 = v311;
LABEL_59:
  v353 = v29;
  v362 = v29;
  v51 = 0;
  v318 = 0;
  if ( a2->NumAllocations )
  {
    do
    {
      v36[v51] = 0LL;
      if ( v15 )
        v40[v51] = 0LL;
      ++v51;
    }
    while ( v51 < a2->NumAllocations );
    v318 = v51;
  }
  v315 = 0LL;
  v329 = 0LL;
  LODWORD(DriverAllocations) = 0;
  v314 = 0LL;
  v313[0] = 0;
  v53 = 0LL;
  v336 = 0LL;
  v320 = 0;
  v344 = 0LL;
  _MOCKDRIVERSTATE_PER_PLANE::_MOCKDRIVERSTATE_PER_PLANE((_MOCKDRIVERSTATE_PER_PLANE *)v367);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v369, 0LL, 0);
  if ( v15 )
  {
    v54 = 96LL * a2->NumAllocations;
    pAllocationInfo = a2->pAllocationInfo;
    if ( (D3DDDI_ALLOCATIONINFO *)((char *)pAllocationInfo + v54) < pAllocationInfo
      || (unsigned __int64)pAllocationInfo + v54 > MmUserProbeAddress )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v29, pAllocationInfo, v54);
  }
  else
  {
    memmove(v29, a2->pAllocationInfo, 96LL * a2->NumAllocations);
  }
  v333 = -1;
  v343 = -1;
  if ( (*(_DWORD *)&a2->Flags & 0x10000) != 0 )
  {
    *((_QWORD *)v29 + 2) = a14;
    *((_DWORD *)v29 + 6) = a15;
  }
  v57 = 0;
  HostProcess = 0;
  if ( a2->NumAllocations )
  {
    v58 = (unsigned int)a2->Flags;
    while ( 1 )
    {
      v59 = v57;
      if ( (v58 & 0x800) != 0 )
      {
        v60 = 96LL * v57;
        Size = *(unsigned int *)&v29[v60 + 32];
        v58 = (unsigned int)Size;
        if ( (Size & 1) != 0 )
        {
          v333 = *(_DWORD *)&v29[v60 + 28];
          v343 = v333;
          if ( !*((_QWORD *)v17 + 231) )
          {
            v58 = (unsigned int)Size & 0xFFFFFFFE;
            *(_DWORD *)&v29[v60 + 32] = v58;
          }
        }
        if ( (v58 & 2) != 0 )
        {
          v75 = WdLogNewEntry5_WdWarning(v58, v57, Size);
          *(_QWORD *)(v75 + 24) = v17;
          *(_QWORD *)(v75 + 32) = -1073741811LL;
          WdLogEvent5_WdWarning(v75);
          LODWORD(DriverAllocations) = -1073741811;
          v314 = 3221225485LL;
          goto LABEL_108;
        }
      }
      v61 = &v29[96 * v57];
      if ( (*((_DWORD *)v61 + 8) & 1) != 0 )
      {
        v62 = (__int64 *)*((_QWORD *)v17 + 231);
        v337 = v62;
        if ( !v62 )
          goto LABEL_111;
        v63 = v62[337];
        if ( !v63 || !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v63 + 16)) )
        {
          v64 = WdLogNewEntry5_WdAssertion(v63, v59);
          *(_QWORD *)(v64 + 24) = 4931LL;
          WdLogEvent5_WdAssertion(v64);
        }
        v58 = *(unsigned int *)(v337[337] + 80);
        v65 = *((_DWORD *)v17 + 464);
        if ( (_DWORD)v58 != v65 )
        {
          v66 = WdLogNewEntry5_WdAssertion(v58, v59);
          *(_QWORD *)(v66 + 24) = 4937LL;
          WdLogEvent5_WdAssertion(v66);
          v65 = *((_DWORD *)v17 + 464);
        }
        if ( *((_DWORD *)v61 + 7) >= v65 )
        {
LABEL_111:
          v79 = (_QWORD *)WdLogNewEntry5_WdWarning(v58, v59, Size);
          v79[3] = v17;
          v79[4] = *(unsigned int *)&v29[96 * HostProcess + 28];
          v79[5] = -1073741811LL;
          WdLogEvent5_WdWarning(v79);
          LODWORD(DriverAllocations) = -1073741811;
          v314 = 3221225485LL;
          v77 = 0LL;
          goto LABEL_389;
        }
        if ( !*((_DWORD *)v17 + 108)
          && !v312
          && (*((_BYTE *)DXGPROCESS::GetCurrent() + 347) & 0x20) == 0
          && !ADAPTER_DISPLAY::IsVidPnSourceOwner((DXGADAPTER **)v337[337], v17, *((_DWORD *)v61 + 7)) )
        {
          v74 = (_QWORD *)WdLogNewEntry5_WdWarning(v58, v59, Size);
          LODWORD(DriverAllocations) = -1071775744;
          v314 = -1071775744LL;
          v74[3] = -1071775744LL;
          v74[4] = v17;
          v78 = HostProcess;
          v74[5] = *(unsigned int *)&v29[96 * HostProcess + 28];
          v74[6] = v78;
          goto LABEL_110;
        }
        v57 = HostProcess;
      }
      v67 = *((_DWORD *)v61 + 8);
      if ( (v67 & 2) != 0 && (v67 & 1) == 0 )
      {
        v80 = WdLogNewEntry5_WdWarning(v58, v59, Size);
        *(_QWORD *)(v80 + 24) = -1073741811LL;
        *(_QWORD *)(v80 + 32) = v17;
        WdLogEvent5_WdWarning(v80);
        LODWORD(DriverAllocations) = -1073741811;
        v314 = 3221225485LL;
        v77 = 0LL;
        goto LABEL_389;
      }
      v58 = (unsigned int)a2->Flags;
      if ( (v58 & 0x10000) != 0 )
      {
        v68 = v58 & 0x20;
        if ( (v58 & 0x20) != 0 && !*((_QWORD *)v61 + 1) || (v58 & 0x20000) != 0 && !*((_QWORD *)v61 + 1) )
        {
          v81 = WdLogNewEntry5_WdError(v58, v68);
          *(_QWORD *)(v81 + 24) = v17;
          *(_QWORD *)(v81 + 32) = -1073741811LL;
          WdLogEvent5_WdError(v81);
          LODWORD(DriverAllocations) = -1073741811;
          v314 = 3221225485LL;
          v77 = 0LL;
          goto LABEL_389;
        }
        v69 = *((_QWORD *)v61 + 1);
        Size = a2->pStandardAllocation->ExistingHeapData.Size;
        v349 = Size;
        if ( (v58 & 0x20) != 0 && v69 != (v69 & 0xFFFFFFFFFFFFF000uLL) )
          break;
        if ( Size != (Size & 0xFFFFFFFFFFFFF000uLL) )
          break;
      }
      HostProcess = ++v57;
      if ( v57 >= a2->NumAllocations )
        goto LABEL_103;
    }
    v82 = WdLogNewEntry5_WdError(v58, v68);
    *(_QWORD *)(v82 + 24) = v69;
    *(_QWORD *)(v82 + 32) = v349;
    WdLogEvent5_WdError(v82);
    LODWORD(DriverAllocations) = -1073741811;
    v314 = 3221225485LL;
    v77 = 0LL;
    goto LABEL_389;
  }
LABEL_103:
  for ( i = 0; ; i = HostProcess + 1 )
  {
    v318 = i;
    HostProcess = i;
    if ( i >= a2->NumAllocations )
      break;
    v71 = i;
    v72 = 96LL * i;
    v73 = *(unsigned int *)&v29[v72 + 24];
    if ( (unsigned int)v73 > 0x7FFFFFFF )
    {
      v74 = (_QWORD *)WdLogNewEntry5_WdWarning(v73, v72, Size);
      v74[3] = -1073741811LL;
      goto LABEL_110;
    }
    if ( *(_QWORD *)&v29[v72 + 16] && (_DWORD)v73 )
    {
      if ( v311 && (*(_DWORD *)&a2->Flags & 0x10000) == 0 )
        v73 = (unsigned int)(2 * v73);
      v83 = (char *)operator new[](v73, 0x4B677844u, PagedPool);
      v323[v71] = v83;
      if ( !v83 )
      {
        LODWORD(DriverAllocations) = -1073741801;
        v314 = 3221225495LL;
        v74 = (_QWORD *)WdLogNewEntry5_WdWarning(v84, 0LL, Size);
        v74[3] = v17;
        v74[4] = a2->NumAllocations;
        v74[5] = -1073741801LL;
        goto LABEL_110;
      }
      if ( v311 && (*(_DWORD *)&a2->Flags & 0x10000) == 0 )
      {
        v85 = &v83[*(unsigned int *)&v29[96 * v71 + 24]];
        v321[v71] = v85;
        v86 = *(unsigned int *)&v29[96 * v71 + 24];
        v87 = *(char **)&v29[96 * v71 + 16];
        if ( &v87[v86] < v87 || (unsigned __int64)&v87[v86] > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v85, v87, v86);
      }
    }
    else
    {
      v323[i] = 0LL;
      if ( v311 )
        v321[i] = 0LL;
    }
  }
  if ( v311 )
  {
    if ( a2->pStandardAllocation )
    {
      PrivateDriverDataSize = a2->PrivateDriverDataSize;
      if ( PrivateDriverDataSize )
      {
        v92 = operator new[](PrivateDriverDataSize, 0x4B677844u, PagedPool);
        Src = v92;
        if ( !v92 )
        {
          LODWORD(DriverAllocations) = -1073741801;
          v314 = 3221225495LL;
          v74 = (_QWORD *)WdLogNewEntry5_WdWarning(v90, v89, v91);
          v74[3] = v17;
          v74[4] = a2->PrivateDriverDataSize;
          v74[5] = -1073741801LL;
LABEL_110:
          WdLogEvent5_WdWarning(v74);
          v77 = 0LL;
          goto LABEL_389;
        }
        v93 = a2->PrivateDriverDataSize;
        pStandardAllocation = a2->pStandardAllocation;
        if ( (D3DKMT_CREATESTANDARDALLOCATION *)((char *)pStandardAllocation + v93) < pStandardAllocation
          || (unsigned __int64)pStandardAllocation + v93 > MmUserProbeAddress )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
        }
        memmove(v92, pStandardAllocation, v93);
      }
    }
  }
  LODWORD(DriverAllocations) = DXGDEVICE::OpenResourceObject(
                                 (ADAPTER_RENDER **)v17,
                                 a2,
                                 (struct _D3DDDI_ALLOCATIONINFO2 *)v29,
                                 v312,
                                 v361,
                                 v328,
                                 (struct DXGRESOURCEREFERENCE *)&v344,
                                 v313,
                                 v332,
                                 (struct DXGAUTOMUTEX *)v367,
                                 (struct DXGAUTOPUSHLOCK *)v369);
  v314 = (unsigned int)DriverAllocations;
  if ( (int)DriverAllocations < 0 )
    goto LABEL_108;
  v53 = v344;
  v336 = v344;
  if ( v344 && (*((_DWORD *)v344 + 1) & 1) == 0 && (*(_DWORD *)&a2->Flags & 2) != 0 )
  {
    v96 = (_QWORD *)WdLogNewEntry5_WdError(v95, v76);
    v96[3] = v17;
    v96[4] = v53;
    v96[5] = -1073741811LL;
    WdLogEvent5_WdError(v96);
    LODWORD(DriverAllocations) = -1073741811;
    v314 = 3221225485LL;
    v77 = 0LL;
    goto LABEL_389;
  }
  LODWORD(DriverAllocations) = DXGDEVICE::CreateDestructionBuffers(v17, a2->NumAllocations, v344, v313[0]);
  v314 = (unsigned int)DriverAllocations;
  if ( (int)DriverAllocations < 0 )
  {
LABEL_108:
    v77 = 0LL;
    goto LABEL_389;
  }
  v357 = 0LL;
  LODWORD(DriverAllocations) = DXGDEVICE::CreateAllocationObjects(v17, a2->NumAllocations, &v329, v53, &v357);
  v314 = (unsigned int)DriverAllocations;
  v77 = v329;
  v315 = v329;
  if ( (int)DriverAllocations >= 0 )
  {
    if ( v357 )
    {
      DXGDEVICE::AppendAllocationListToResourceOrDevice(v17, v53, v329, v357);
      v320 = 1;
    }
    v98 = a2->Flags;
    if ( (*(_WORD *)&v98 & 0x800) != 0 )
    {
      if ( v333 != -1 )
      {
        *(_DWORD *)(*((_QWORD *)v53 + 7) + 12LL) |= 0x40u;
        *((_DWORD *)v53 + 1) |= 8u;
        *(_DWORD *)(*((_QWORD *)v53 + 7) + 12LL) ^= (*(_DWORD *)(*((_QWORD *)v53 + 7) + 12LL) ^ (*(_DWORD *)&a2->Flags >> 3)) & 0x80;
      }
      goto LABEL_162;
    }
    if ( (*(_WORD *)&v98 & 0x1000) != 0 )
    {
      if ( !v332 )
        goto LABEL_162;
      v99 = *(_DWORD *)v332;
      if ( (*(_DWORD *)v332 & 0x80u) != 0 )
      {
        v100 = WdLogNewEntry5_WdAssertion(v97, v76);
        *(_QWORD *)(v100 + 24) = 5227LL;
        WdLogEvent5_WdAssertion(v100);
        v99 = *(_DWORD *)v332;
      }
      if ( (v99 & 0x100) == 0 )
      {
LABEL_162:
        if ( v317 )
          goto LABEL_182;
        memset(v324, 0, 88LL * a2->NumAllocations);
        v102 = v312;
        if ( !v312 )
        {
          DriverAllocations = (unsigned int)DXGDEVICE::CreateDriverAllocations(
                                              v17,
                                              a2,
                                              (struct _D3DDDI_ALLOCATIONINFO2 *)v29,
                                              v324,
                                              v77,
                                              v53,
                                              v323,
                                              v321,
                                              Src,
                                              v332,
                                              v311,
                                              v360);
          v314 = DriverAllocations;
          v102 = 0;
        }
        if ( (int)DriverAllocations < 0 )
          goto LABEL_388;
        LODWORD(DriverAllocations) = DXGDEVICE::OpenAllocations(
                                       v17,
                                       a2,
                                       (struct _D3DDDI_ALLOCATIONINFO2 *)v29,
                                       v77,
                                       v342,
                                       v323,
                                       v321,
                                       Src,
                                       v311,
                                       v102,
                                       a8,
                                       v346,
                                       v352);
        v314 = (unsigned int)DriverAllocations;
        if ( (int)DriverAllocations < 0 )
          goto LABEL_388;
        v103 = a2->Flags;
        v104 = v324;
        Value = v324->Flags.Value;
        if ( (*(_BYTE *)&v103 & 8) != 0 )
        {
          Value |= 0x4000008u;
          v324->Flags.Value = Value;
          v103 = a2->Flags;
        }
        if ( (*(_WORD *)&v103 & 0x100) != 0 )
        {
          Value = Value & 0xFEFFFFFB | 0x1000000;
        }
        else
        {
          if ( (*(_WORD *)&v103 & 0x200) == 0 )
          {
LABEL_174:
            v106 = Value & 0xFFFFF7FF;
            v107 = Value | 0x800;
            if ( (*(_DWORD *)&a2->Flags & 0x8000) == 0 )
              v107 = v106;
            v104->Flags.Value = v107;
            LODWORD(DriverAllocations) = DXGDEVICE::CreateVidMmAllocations(
                                           v17,
                                           a2,
                                           (struct _D3DDDI_ALLOCATIONINFO2 *)v29,
                                           v104,
                                           v77,
                                           v332,
                                           v312,
                                           v327);
            v314 = (unsigned int)DriverAllocations;
            if ( (int)DriverAllocations < 0 )
              goto LABEL_388;
            if ( v331 )
            {
              v108 = *((_QWORD *)v17 + 2);
              v109 = *(_QWORD *)(v108 + 648);
              v76 = *(_QWORD *)(v108 + 640);
              v327 = v77;
              v110 = 0;
              if ( a2->NumAllocations )
              {
                v111 = v327;
                v112 = v109;
                v113 = v76;
                v114 = v331;
                do
                {
                  v115 = *(_DWORD *)&a2->Flags >> 5;
                  LOBYTE(v115) = (*(_DWORD *)&a2->Flags & 0x20) != 0;
                  *(_QWORD *)&v114[8 * v110] = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(v113 + 8) + 632LL))(
                                                 v112,
                                                 *((_QWORD *)v111 + 3),
                                                 v115);
                  v111 = (struct COREDEVICEACCESS *)*((_QWORD *)v111 + 8);
                  ++v110;
                }
                while ( v110 < a2->NumAllocations );
                v17 = v335;
                LODWORD(DriverAllocations) = v314;
                v53 = v336;
                v29 = (char *)v322;
              }
            }
LABEL_182:
            if ( v313[0] )
            {
              if ( v53 )
              {
                if ( (*((_DWORD *)v53 + 1) & 1) != 0 )
                {
                  v116 = *((_QWORD *)v53 + 7);
                  if ( !*(_DWORD *)(v116 + 24) && (*(_DWORD *)(v116 + 12) & 8) == 0 )
                  {
                    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v366, v76);
                    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v366);
                    if ( (*(_DWORD *)&a2->Flags & 2) == 0 )
                    {
                      v119 = WdLogNewEntry5_WdAssertion(v118, v117);
                      *(_QWORD *)(v119 + 24) = 5361LL;
                      WdLogEvent5_WdAssertion(v119);
                    }
                    Global = DXGGLOBAL::GetGlobal(v118, v117);
                    v122 = (struct COREDEVICEACCESS *)*((_QWORD *)v53 + 7);
                    v327 = v122;
                    CurrentThread = KeGetCurrentThread();
                    if ( *((struct _KTHREAD **)Global + 33) != CurrentThread )
                    {
                      v124 = WdLogNewEntry5_WdAssertion(CurrentThread, v120);
                      *(_QWORD *)(v124 + 24) = 1100LL;
                      WdLogEvent5_WdAssertion(v124);
                      v122 = v327;
                    }
                    Object = 0;
                    v125 = HMGRTABLE::AllocHandle((char *)Global + 288, v122, 2LL);
                    v128 = *((_QWORD *)v53 + 7);
                    *(_DWORD *)(v128 + 24) = v125;
                    if ( !*(_DWORD *)(*((_QWORD *)v53 + 7) + 24LL) )
                    {
                      v129 = WdLogNewEntry5_WdWarning(v128, v126, v127);
                      *(_QWORD *)(v129 + 24) = v17;
                      *(_QWORD *)(v129 + 32) = -1073741801LL;
                      WdLogEvent5_WdWarning(v129);
                      LODWORD(DriverAllocations) = -1073741801;
                      v314 = 3221225495LL;
                      DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v366, v130);
                      v77 = v329;
                      v315 = v329;
                      goto LABEL_389;
                    }
                    DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v366, v126);
                    v315 = v329;
                  }
                }
              }
              DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
                (DXGAUTOPUSHLOCKEXCLUSIVE *)v370,
                (DXGDEVICE *)((char *)v17 + 240));
              v131 = *((_QWORD *)v17 + 7);
              if ( v131 )
              {
                *(_QWORD *)(v131 + 32) = v53;
                v131 = *((_QWORD *)v17 + 7);
              }
              *((_QWORD *)v53 + 5) = v131;
              *((_QWORD *)v17 + 7) = v53;
              DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v370);
            }
            v132 = 0;
            if ( v53 )
              v132 = *((_DWORD *)v53 + 4);
            a2->hResource = v132;
            v133 = a2->Flags;
            if ( ((*(_BYTE *)&v133 & 2) != 0 || v312) && (*(_BYTE *)&v133 & 0x40) == 0 )
              v134 = *(_DWORD *)(*((_QWORD *)v53 + 7) + 24LL);
            else
              v134 = 0;
            a2->hGlobalShare = v134;
            if ( v311 )
            {
              v135 = 0LL;
              v318 = 0;
              v77 = v315;
              for ( j = v315; ; j = (struct DXGALLOCATION *)*((_QWORD *)j + 8) )
              {
                v137 = a2->NumAllocations;
                if ( (unsigned int)v135 >= v137 )
                  break;
                v76 = (ULONG64)a2->pAllocationInfo + 96 * (unsigned int)v135;
                if ( v76 >= MmUserProbeAddress )
                  v76 = MmUserProbeAddress;
                *(_DWORD *)v76 = *((_DWORD *)j + 4);
                v135 = (unsigned int)(v135 + 1);
                v318 = v135;
              }
              if ( (int)DriverAllocations < 0 )
                goto LABEL_389;
            }
            else
            {
              v135 = 0LL;
              v77 = v315;
              v138 = v315;
              v137 = a2->NumAllocations;
              if ( v137 )
              {
                do
                {
                  v76 = 96LL * (unsigned int)v135;
                  *(D3DKMT_HANDLE *)((char *)&a2->pAllocationInfo->hAllocation + v76) = *((_DWORD *)v138 + 4);
                  v135 = (unsigned int)(v135 + 1);
                  v138 = (struct DXGALLOCATION *)*((_QWORD *)v138 + 8);
                  v137 = a2->NumAllocations;
                }
                while ( (unsigned int)v135 < v137 );
              }
            }
            v318 = 0;
            v341 = v77;
            if ( v137 )
            {
              do
              {
                v76 = *(unsigned int *)(*((_QWORD *)v77 + 6) + 4LL);
                if ( (v76 & 1) != 0 )
                {
                  LODWORD(DriverAllocations) = DXGDEVICE::AddPrimaryAllocation(v17, v77);
                  v314 = (unsigned int)DriverAllocations;
                  if ( (int)DriverAllocations < 0 )
                    goto LABEL_388;
                }
                else if ( (v76 & 2) != 0 )
                {
                  DXGDEVICE::SetDisplayedPrimary((struct _KTHREAD **)v17, ((unsigned int)v76 >> 6) & 0xF, v77, 0, 1u);
                }
                ++v318;
                v77 = (struct DXGALLOCATION *)*((_QWORD *)v77 + 8);
                v341 = v77;
              }
              while ( v318 < a2->NumAllocations );
            }
            if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
            {
              if ( a2->pPrivateRuntimeData )
              {
                v139 = *((_QWORD *)v53 + 7);
                if ( *(_QWORD *)(v139 + 104) )
                {
                  v144 = v334;
                  if ( *(_DWORD *)(v139 + 112) != v334->PrivateRuntimeDataSize )
                  {
                    LODWORD(DriverAllocations) = -1073741811;
                    v314 = 3221225485LL;
                    v143 = (_QWORD *)WdLogNewEntry5_WdWarning(v139, v76, v135);
                    v143[3] = v17;
                    v143[4] = a2->PrivateRuntimeDataSize;
                    v143[5] = *(unsigned int *)(*((_QWORD *)v53 + 7) + 112LL);
                    goto LABEL_387;
                  }
                }
                else
                {
                  *(_QWORD *)(*((_QWORD *)v53 + 7) + 104LL) = operator new[](
                                                                a2->PrivateRuntimeDataSize,
                                                                0x4B677844u,
                                                                PagedPool);
                  v142 = *((_QWORD *)v53 + 7);
                  if ( !*(_QWORD *)(v142 + 104) )
                  {
                    LODWORD(DriverAllocations) = -1073741801;
                    v314 = 3221225495LL;
                    v143 = (_QWORD *)WdLogNewEntry5_WdWarning(v142, v140, v141);
                    v143[3] = v17;
                    v143[4] = v334->PrivateRuntimeDataSize;
                    v143[5] = -1073741801LL;
                    goto LABEL_387;
                  }
                  v144 = v334;
                  *(_DWORD *)(v142 + 112) = v334->PrivateRuntimeDataSize;
                }
                v145 = v311;
                if ( v311 )
                {
                  PrivateRuntimeDataSize = v144->PrivateRuntimeDataSize;
                  pPrivateRuntimeData = (char *)a2->pPrivateRuntimeData;
                  v148 = *(void **)(*((_QWORD *)v53 + 7) + 104LL);
                  if ( &pPrivateRuntimeData[PrivateRuntimeDataSize] < pPrivateRuntimeData
                    || (unsigned __int64)&pPrivateRuntimeData[PrivateRuntimeDataSize] > MmUserProbeAddress )
                  {
                    *(_BYTE *)MmUserProbeAddress = 0;
                  }
                  memmove(v148, pPrivateRuntimeData, PrivateRuntimeDataSize);
                }
                else
                {
                  memmove(*(void **)(*((_QWORD *)v53 + 7) + 104LL), a2->pPrivateRuntimeData, a2->PrivateRuntimeDataSize);
                }
                if ( (unsigned int)Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage() )
                {
                  if ( (*(_DWORD *)&a2->Flags & 0x100000) != 0 )
                  {
                    LODWORD(DriverAllocations) = CheckNoKmdAccessPrivateData(
                                                   v144->PrivateRuntimeDataSize,
                                                   *(_DWORD **)(*((_QWORD *)v53 + 7) + 104LL),
                                                   0xFF000004);
                    v314 = (unsigned int)DriverAllocations;
                    if ( (int)DriverAllocations < 0 )
                      goto LABEL_388;
                  }
                }
              }
              else
              {
                v145 = v311;
              }
              if ( a2->pStandardAllocation )
              {
                v149 = a2->PrivateDriverDataSize;
                if ( v149 )
                {
                  v150 = *((_QWORD *)v53 + 7);
                  if ( *(_QWORD *)(v150 + 120) )
                  {
                    if ( *(_DWORD *)(v150 + 128) != v149 )
                    {
                      LODWORD(DriverAllocations) = -1073741811;
                      v314 = 3221225485LL;
                      v143 = (_QWORD *)WdLogNewEntry5_WdWarning(v150, v76, v135);
                      v143[3] = v17;
                      v143[4] = a2->PrivateDriverDataSize;
                      v143[5] = *(unsigned int *)(*((_QWORD *)v53 + 7) + 128LL);
                      v143[6] = 5602LL;
                      goto LABEL_387;
                    }
                  }
                  else
                  {
                    *(_QWORD *)(*((_QWORD *)v53 + 7) + 120LL) = operator new[](v149, 0x4B677844u, PagedPool);
                    v153 = *((_QWORD *)v53 + 7);
                    if ( !*(_QWORD *)(v153 + 120) )
                    {
                      LODWORD(DriverAllocations) = -1073741801;
                      v314 = 3221225495LL;
                      v143 = (_QWORD *)WdLogNewEntry5_WdWarning(v153, v151, v152);
                      v143[3] = v17;
                      v143[4] = v334->PrivateDriverDataSize;
                      v143[5] = -1073741801LL;
                      goto LABEL_387;
                    }
                    v154 = v334;
                    *(_DWORD *)(v153 + 128) = v334->PrivateDriverDataSize;
                    v149 = v154->PrivateDriverDataSize;
                  }
                  v155 = Src;
                  if ( !v145 )
                    v155 = a2->pStandardAllocation;
                  memmove(*(void **)(*((_QWORD *)v53 + 7) + 120LL), v155, v149);
                  if ( (unsigned int)Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage() )
                  {
                    if ( (*(_DWORD *)&a2->Flags & 0x100000) != 0 )
                    {
                      LODWORD(DriverAllocations) = CheckNoKmdAccessPrivateData(
                                                     a2->PrivateDriverDataSize,
                                                     *(_DWORD **)(*((_QWORD *)v53 + 7) + 120LL),
                                                     0xFF000001);
                      v314 = (unsigned int)DriverAllocations;
                      if ( (int)DriverAllocations < 0 )
                        goto LABEL_388;
                    }
                  }
                }
              }
              v156 = 0LL;
              v318 = 0;
              v77 = v315;
              v157 = v315;
              v341 = v315;
              if ( a2->NumAllocations )
              {
                v158 = (char *)v322;
                while ( 1 )
                {
                  v341 = v156;
                  v159 = &v158[96 * (_QWORD)v156];
                  if ( *((_QWORD *)v159 + 2) )
                  {
                    v160 = operator new[](*((unsigned int *)v159 + 6), 0x4B677844u, PagedPool);
                    v163 = *((_QWORD *)v157 + 6);
                    *(_QWORD *)(v163 + 32) = v160;
                    v164 = *(void **)(*((_QWORD *)v157 + 6) + 32LL);
                    if ( !v164 )
                    {
                      LODWORD(DriverAllocations) = -1073741801;
                      v314 = 3221225495LL;
                      v143 = (_QWORD *)WdLogNewEntry5_WdWarning(v163, v161, v162);
                      v143[3] = v17;
                      v143[4] = v318 + 1;
                      v143[5] = *((unsigned int *)v322 + 24 * (_QWORD)v341 + 6);
                      v143[6] = -1073741801LL;
                      goto LABEL_387;
                    }
                    if ( !v311 || (*(_DWORD *)&a2->Flags & 0x10000) != 0 )
                      v165 = (const void *)*((_QWORD *)v159 + 2);
                    else
                      v165 = v321[(_QWORD)v341];
                    memmove(v164, v165, *((unsigned int *)v159 + 6));
                    *(_DWORD *)(*((_QWORD *)v157 + 6) + 40LL) = *((_DWORD *)v159 + 6);
                    v158 = (char *)v322;
                  }
                  v156 = (struct DXGALLOCATION *)(v318 + 1);
                  v318 = (unsigned int)v156;
                  v157 = (struct DXGALLOCATION *)*((_QWORD *)v157 + 8);
                  v341 = v157;
                  if ( (unsigned int)v156 >= a2->NumAllocations )
                  {
                    v29 = (char *)v322;
                    goto LABEL_264;
                  }
                }
              }
              v29 = (char *)v322;
            }
            else
            {
LABEL_264:
              v77 = v315;
            }
            v327 = *(struct COREDEVICEACCESS **)(*((_QWORD *)v17 + 2) + 16LL);
            if ( !*((_BYTE *)v327 + 209) || v312 )
            {
LABEL_333:
              v217 = a2->Flags;
              if ( (*(_WORD *)&v217 & 0x800) != 0 )
              {
                memset(&v368.Width, 0, 40);
                v77 = v315;
                v368.hAllocation = *(HANDLE *)(*((_QWORD *)v315 + 6) + 16LL);
                v218 = ADAPTER_RENDER::DdiDescribeAllocation(*((ADAPTER_RENDER **)v17 + 2), &v368);
                DriverAllocations = v218;
                v314 = v218;
                if ( v218 < 0 )
                {
                  v222 = (_QWORD *)WdLogNewEntry5_WdWarning(v220, v219, v221);
                  v222[3] = DriverAllocations;
                  v222[4] = v17;
                  v222[5] = *((unsigned int *)v77 + 4);
                  v222[6] = v77;
                  WdLogEvent5_WdWarning(v222);
                  goto LABEL_389;
                }
                if ( v368.Format == D3DDDIFMT_UNKNOWN && v368.Height != 1 )
                {
                  v231 = (_QWORD *)WdLogNewEntry5_WdWarning(v220, v219, v221);
                  v231[3] = -1073741811LL;
                  v231[4] = v17;
                  v231[5] = v368.Height;
                  WdLogEvent5_WdWarning(v231);
                  LODWORD(DriverAllocations) = -1073741811;
                  v314 = 3221225485LL;
                  goto LABEL_389;
                }
                v232 = *((_QWORD *)v77 + 5);
                v233 = *(unsigned int *)(*(_QWORD *)(v232 + 56) + 12LL);
                if ( (v233 & 0x20) == 0 )
                {
                  v234 = WdLogNewEntry5_WdAssertion(v233, v232);
                  *(_QWORD *)(v234 + 24) = 5996LL;
                  WdLogEvent5_WdAssertion(v234);
                  v232 = *((_QWORD *)v77 + 5);
                }
                v235 = *(_QWORD *)(v232 + 56);
                *(_DWORD *)(v235 + 208) = v368.Width;
                *(_DWORD *)(v235 + 212) = v368.Height;
                *(_DWORD *)(v235 + 216) = v368.Format;
                v236 = v334->Flags;
                if ( (*((_BYTE *)v17 + 1869) & 1) != 0 )
                {
                  if ( (*(_DWORD *)&v236 & 0x20000) != 0 )
                  {
                    v238 = (void *)*((_QWORD *)v29 + 1);
                    v345 = 0LL;
                    v239 = ObReferenceObjectByHandle(v238, 0x20000u, MmSectionObjectType, v311, &v345, 0LL);
                    v241 = v345;
                    *(_QWORD *)(v235 + 192) = v345;
                    DriverAllocations = v239;
                    v314 = v239;
                    if ( v239 < 0 )
                    {
                      v199 = WdLogNewEntry5_WdError(v241, v240);
                      v200 = *((_QWORD *)v29 + 1);
LABEL_325:
                      *(_QWORD *)(v199 + 24) = v200;
                      *(_QWORD *)(v199 + 32) = DriverAllocations;
                      WdLogEvent5_WdError(v199);
                      goto LABEL_388;
                    }
                    *(_DWORD *)(v235 + 12) |= 0x400u;
                  }
                }
                else
                {
                  v237 = v315;
                  if ( (*(_BYTE *)&v236 & 0x20) == 0 )
                  {
                    *(_QWORD *)(v235 + 192) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v17 + 2) + 640LL) + 8LL)
                                                                                        + 688LL))(
                                                *(_QWORD *)(*((_QWORD *)v17 + 2) + 648LL),
                                                *((_QWORD *)v315 + 3));
                    *(_DWORD *)(v235 + 12) |= 0x400u;
                  }
                  *(_QWORD *)(v235 + 224) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v17 + 2) + 640LL)
                                                                                                  + 8LL)
                                                                                      + 760LL))(
                                              *(_QWORD *)(*((_QWORD *)v17 + 2) + 648LL),
                                              *((_QWORD *)v237 + 3));
                }
                v242 = v333;
                *(_DWORD *)(v235 + 232) = v333;
                if ( v242 != -1 )
                {
                  *(_DWORD *)(v235 + 12) |= 0x40u;
                  *(_DWORD *)(v235 + 12) ^= ((unsigned __int8)*(_DWORD *)(v235 + 12) ^ (unsigned __int8)(*(_DWORD *)&a2->Flags >> 3)) & 0x80;
                }
              }
              else if ( (*(_WORD *)&v217 & 0x1000) != 0 )
              {
                v77 = v315;
                (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v17 + 2) + 640LL)
                                                                           + 8LL)
                                                               + 768LL))(
                  *(_QWORD *)(*((_QWORD *)v17 + 2) + 648LL),
                  *((_QWORD *)v315 + 3),
                  *((_QWORD *)v332 + 43));
LABEL_366:
                v76 = *((_QWORD *)v17 + 2);
                v345 = (PVOID)v76;
                if ( (*(_DWORD *)(*(_QWORD *)(v76 + 16) + 2060LL) & 0x40) == 0 )
                  goto LABEL_389;
                v243 = v332;
                if ( !v332 || (*(_DWORD *)v332 & 0x200) != 0 )
                  goto LABEL_389;
                memset(&v372, 0, 56);
                memset(&v372.DriverProtection, 0, 40);
                v372.Protection.Value = 1LL;
                v244 = 0;
                if ( a2->NumAllocations )
                {
                  while ( 1 )
                  {
                    v245 = (*((_DWORD *)v77 + 18) >> 12) & 0x3F;
                    if ( *((_DWORD *)v243 + 4) == 4 )
                    {
                      v246 = *(_DWORD *)(*((_QWORD *)v243 + 3) + 12LL);
                      if ( ((v246 - 1) & 0xFFFFFFFC) != 0 || v246 == 2 )
                      {
                        if ( DXGADAPTER::ReplicateGdiContent(*(DXGADAPTER **)(*((_QWORD *)v17 + 2) + 16LL)) )
                          v245 = -1;
                        v76 = (ULONG64)v345;
                      }
                    }
                    if ( v317 )
                    {
                      Current = DXGPROCESS::GetCurrent();
                      v248 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMapGpuVirtualAddress(
                               (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL) + 4240LL),
                               *((_DWORD *)Current + 106),
                               v17,
                               0,
                               *((_DWORD *)v77 + 24),
                               &v372);
                    }
                    else
                    {
                      LOBYTE(Object) = 0;
                      v248 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, D3DDDI_MAPGPUVIRTUALADDRESS *, int, int))(*(_QWORD *)(*(_QWORD *)(v76 + 640) + 8LL) + 800LL))(
                               *(_QWORD *)(v76 + 648),
                               0LL,
                               *((_QWORD *)v77 + 3),
                               &v372,
                               Object,
                               v245);
                    }
                    LODWORD(DriverAllocations) = v248;
                    v314 = (unsigned int)v248;
                    if ( v248 < 0 )
                      break;
                    v252 = DXGADAPTER::ReplicateGdiContent(*(DXGADAPTER **)(*((_QWORD *)v17 + 2) + 16LL));
                    BaseAddress = v372.BaseAddress;
                    if ( v252 )
                      BaseAddress = v372.VirtualAddress;
                    v372.BaseAddress = BaseAddress;
                    v372.VirtualAddress = 0LL;
                    ++v244;
                    v77 = (struct DXGALLOCATION *)*((_QWORD *)v77 + 8);
                    v76 = (ULONG64)v345;
                    v243 = v332;
                    if ( v244 >= a2->NumAllocations )
                      goto LABEL_388;
                  }
                  v143 = (_QWORD *)WdLogNewEntry5_WdWarning(v250, v249, v251);
                  v143[3] = (int)DriverAllocations;
LABEL_387:
                  WdLogEvent5_WdWarning(v143);
                }
LABEL_388:
                v77 = v315;
                goto LABEL_389;
              }
              v77 = v315;
              goto LABEL_366;
            }
            HostProcess = DXGPROCESS::GetHostProcess(*((DXGPROCESS **)v17 + 5));
            if ( !HostProcess )
            {
              v168 = WdLogNewEntry5_WdError(v167, v166);
              *(_QWORD *)(v168 + 24) = -1073741823LL;
              WdLogEvent5_WdError(v168);
              LODWORD(DriverAllocations) = -1073741823;
              v314 = 3221225473LL;
              goto LABEL_389;
            }
            v348 = 0LL;
            if ( !DXGDEVICE::UmdManagesResidency(v17) || !v332 || (v169 = *((_DWORD *)v332 + 4) - 1, v319 = 1, v169 > 2) )
              v319 = 0;
            v170 = a2->Flags;
            if ( (*(_BYTE *)&v170 & 2) != 0 )
              v171 = *(const void **)(*((_QWORD *)v53 + 7) + 104LL);
            else
              v171 = 0LL;
            v172 = Src;
            if ( v311 )
            {
              v173 = (*(_DWORD *)&v170 & 0x10000) != 0;
              v174 = v321;
              if ( !v173 )
                goto LABEL_282;
            }
            else
            {
              v172 = a2->pStandardAllocation;
            }
            v174 = v323;
LABEL_282:
            if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
              v175 = *((_DWORD *)v53 + 5);
            else
              v175 = 0;
            HostProcess = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateAllocation(
                            (struct COREDEVICEACCESS *)((char *)v327 + 4240),
                            HostProcess,
                            *((_DWORD *)v17 + 110),
                            v175,
                            a2,
                            (struct _D3DDDI_ALLOCATIONINFO2 *)v29,
                            v174,
                            v172,
                            v171,
                            v311,
                            v319,
                            &v348);
            v17 = v335;
            if ( !v348 )
            {
              v178 = WdLogNewEntry5_WdError(v177, v176);
              DriverAllocations = (int)HostProcess;
              *(_QWORD *)(v178 + 24) = (int)HostProcess;
              WdLogEvent5_WdError(v178);
              v314 = DriverAllocations;
              goto LABEL_389;
            }
            v76 = (ULONG64)v348;
            v331 = v348;
            if ( !v53 || (*((_DWORD *)v53 + 5) = *((_DWORD *)v348 + 1), v179 = (unsigned int)a2->Flags, (v179 & 2) == 0) )
            {
LABEL_296:
              v337 = 0LL;
              v350 = 0LL;
              if ( (*(_DWORD *)&a2->Flags & 2) != 0 && v53 )
              {
                v337 = *(__int64 **)(*((_QWORD *)v53 + 7) + 136LL);
                v350 = v337;
              }
              v182 = v77;
              v183 = 0;
              if ( a2->NumAllocations )
              {
                v184 = v331;
                do
                {
                  v185 = &v184[72 * v183];
                  *((_DWORD *)v182 + 24) = *((_DWORD *)v185 + 4);
                  *((_DWORD *)v182 + 25) = *((_DWORD *)v185 + 4);
                  v186 = a2->Flags;
                  if ( (*(_BYTE *)&v186 & 2) != 0 && (*(_DWORD *)&v186 & 0x20020) != 0 )
                    *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v182 + 5) + 56LL) + 200LL) = *((_DWORD *)v185 + 7);
                  else
                    *((_DWORD *)v182 + 32) = *((_DWORD *)v185 + 7);
                  *((_DWORD *)v182 + 33) = *((_DWORD *)v184 + 3);
                  if ( v184[12] & 1 | ((v184[12] & 2) != 0) )
                    *((_QWORD *)v182 + 14) = *(_QWORD *)&v29[96 * v183 + 8];
                  *(_DWORD *)(*((_QWORD *)v182 + 6) + 4LL) ^= (*((_DWORD *)v185 + 6) ^ *(_DWORD *)(*((_QWORD *)v182 + 6)
                                                                                                 + 4LL)) & 1;
                  *(_DWORD *)(*((_QWORD *)v182 + 6) + 4LL) ^= (*((_DWORD *)v185 + 6) ^ *(_DWORD *)(*((_QWORD *)v182 + 6)
                                                                                                 + 4LL)) & 2;
                  *(_DWORD *)(*((_QWORD *)v182 + 6) + 4LL) ^= (*((_DWORD *)v185 + 6) ^ *(_DWORD *)(*((_QWORD *)v182 + 6)
                                                                                                 + 4LL)) & 4;
                  *(_DWORD *)(*((_QWORD *)v182 + 6) + 4LL) ^= (*((_DWORD *)v185 + 6) ^ *(_DWORD *)(*((_QWORD *)v182 + 6)
                                                                                                 + 4LL)) & 8;
                  *(_DWORD *)(*((_QWORD *)v182 + 6) + 4LL) ^= (*((_DWORD *)v185 + 6) ^ *(_DWORD *)(*((_QWORD *)v182 + 6)
                                                                                                 + 4LL)) & 0x20;
                  *(_DWORD *)(*((_QWORD *)v182 + 6) + 4LL) ^= (*((_DWORD *)v185 + 6) ^ *(_DWORD *)(*((_QWORD *)v182 + 6)
                                                                                                 + 4LL)) & 0x800;
                  *(_DWORD *)(*((_QWORD *)v182 + 6) + 4LL) ^= (*((_DWORD *)v185 + 6) ^ *(_DWORD *)(*((_QWORD *)v182 + 6)
                                                                                                 + 4LL)) & 0x1000;
                  *(_DWORD *)(*((_QWORD *)v182 + 6) + 4LL) ^= (*((_DWORD *)v185 + 6) ^ *(_DWORD *)(*((_QWORD *)v182 + 6)
                                                                                                 + 4LL)) & 0x2000;
                  *(_DWORD *)(*((_QWORD *)v182 + 6) + 4LL) ^= (*((_DWORD *)v185 + 6) ^ *(_DWORD *)(*((_QWORD *)v182 + 6)
                                                                                                 + 4LL)) & 0x4000;
                  *(_DWORD *)(*((_QWORD *)v182 + 6) + 4LL) ^= (*((_DWORD *)v185 + 6) ^ *(_DWORD *)(*((_QWORD *)v182 + 6)
                                                                                                 + 4LL)) & 0x40000;
                  *(_DWORD *)(*((_QWORD *)v182 + 6) + 4LL) ^= (*((_DWORD *)v185 + 6) ^ *(_DWORD *)(*((_QWORD *)v182 + 6)
                                                                                                 + 4LL)) & 0x80000;
                  *(_DWORD *)(*((_QWORD *)v182 + 6) + 4LL) ^= (*((_DWORD *)v185 + 6) ^ *(_DWORD *)(*((_QWORD *)v182 + 6)
                                                                                                 + 4LL)) & 0x100000;
                  *(_DWORD *)(*((_QWORD *)v182 + 6) + 4LL) |= 0x20000u;
                  if ( (*(_DWORD *)&v29[96 * v183 + 32] & 1) != 0 )
                  {
                    *(_DWORD *)(*((_QWORD *)v182 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v182 + 6) + 4LL) ^ (*(_DWORD *)&v29[96 * v183 + 28] << 6)) & 0x3C0;
                    if ( *((_QWORD *)v17 + 231) != *(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL) )
                      *(_DWORD *)(*((_QWORD *)v182 + 6) + 4LL) |= 4u;
                  }
                  ++v183;
                  v182 = (struct DXGALLOCATION *)*((_QWORD *)v182 + 8);
                }
                while ( v183 < a2->NumAllocations );
                v27 = 0;
                v76 = (ULONG64)v331;
              }
              if ( (HostProcess & 0x80000000) != 0 )
              {
                LODWORD(DriverAllocations) = HostProcess;
                v314 = HostProcess;
                goto LABEL_389;
              }
              v187 = 0;
              while ( 1 )
              {
                HostProcess = v187;
                v349 = (SIZE_T)v77;
                if ( v187 >= a2->NumAllocations )
                  break;
                v188 = v187;
                v189 = *(_DWORD *)(v76 + 72LL * v187 + 32);
                v190 = a2->Flags;
                if ( (*(_DWORD *)&v190 & 0x10000) != 0 )
                {
                  v327 = (struct COREDEVICEACCESS *)(96LL * v187);
                  v191 = (*(_BYTE *)&v190 & 0x20) == 0;
                  v192 = *(struct COREDEVICEACCESS **)&v353[(_QWORD)v327 + 8];
                  if ( v191 )
                  {
                    v358 = 0LL;
                    v196 = ObReferenceObjectByHandle(v192, 0x20000u, MmSectionObjectType, v311, &v358, 0LL);
                    DriverAllocations = v196;
                    v314 = v196;
                    if ( v196 < 0 )
                    {
                      v199 = WdLogNewEntry5_WdError(v198, v197);
                      v200 = *(_QWORD *)((char *)v322 + (_QWORD)v327 + 8);
                      goto LABEL_325;
                    }
                    v327 = (struct COREDEVICEACCESS *)&v324[v188];
                    v201 = v358;
                    v202 = ProcessSectionAttributes(v358, (struct _DXGK_ALLOCATIONINFO *)v327);
                    DriverAllocations = v202;
                    v314 = v202;
                    if ( v202 < 0 )
                    {
                      v205 = (_QWORD *)WdLogNewEntry5_WdError(v204, v203);
                      v205[3] = v17;
                      v205[4] = DriverAllocations;
                      v205[5] = 5869LL;
                      WdLogEvent5_WdError(v205);
                      ObfDereferenceObject(v201);
                      goto LABEL_388;
                    }
                    v206 = *(_QWORD *)(*((_QWORD *)v77 + 5) + 56LL);
                    *(_DWORD *)(v206 + 12) |= 0x400u;
                    v207 = *(_DWORD *)(v206 + 12);
                    *(_QWORD *)(v206 + 192) = v201;
                    v208 = v327;
                    *(_DWORD *)(v206 + 204) = *((_DWORD *)v327 + 3);
                    *(_DWORD *)(v206 + 12) = v207 ^ ((unsigned __int16)v207 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v208 + 16) << 9)) & 0x800;
                  }
                  else
                  {
                    v327 = *(struct COREDEVICEACCESS **)&v353[(_QWORD)v327 + 8];
                    if ( (*((_BYTE *)v17 + 1869) & 1) == 0 )
                    {
                      LODWORD(DriverAllocations) = ProcessSysMemAttributes(v192, v189, &v324[v187]);
                      v314 = (unsigned int)DriverAllocations;
                      if ( (int)DriverAllocations < 0 )
                        goto LABEL_388;
                      v192 = v327;
                    }
                    if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
                    {
                      v193 = *(_QWORD *)(*((_QWORD *)v77 + 5) + 56LL);
                      *(_DWORD *)(v193 + 12) |= 0x200u;
                      v194 = *(_DWORD *)(v193 + 12);
                      *(_QWORD *)(v193 + 192) = v192;
                      v195 = &v324[v188];
                      *(_DWORD *)(v193 + 204) = v195->Alignment;
                      *(_DWORD *)(v193 + 12) = v194 ^ ((unsigned __int16)v194 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)&v195->Flags.0 << 9)) & 0x800;
                    }
                  }
                }
                v209 = (struct COREDEVICEACCESS *)HostProcess;
                v327 = (struct COREDEVICEACCESS *)HostProcess;
                v29 = (char *)v322;
                v210 = (unsigned int *)((char *)v322 + 96 * HostProcess);
                v346 = v210;
                if ( (v210[8] & 1) != 0 )
                {
                  v347 = 0LL;
                  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v359, v77);
                  DXGALLOCATIONREFERENCE::MoveAssign(&v347, v359);
                  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v359);
                  v211 = *((_DWORD *)v17 + 110);
                  v212 = DXGPROCESS::GetCurrent();
                  Resident = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMakeResident(
                               (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL) + 4240LL),
                               *((_DWORD *)v212 + 106),
                               v211,
                               0,
                               (struct D3DDDI_MAKERESIDENT_FLAGS)3,
                               1u,
                               (const struct DXGALLOCATIONREFERENCE *)&v347,
                               0LL,
                               0LL);
                  DriverAllocations = Resident;
                  v314 = Resident;
                  if ( Resident < 0 )
                  {
                    v216 = WdLogNewEntry5_WdError(v215, v214);
                    *(_QWORD *)(v216 + 24) = DriverAllocations;
                    WdLogEvent5_WdError(v216);
                    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v347);
                    break;
                  }
                  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v347);
                  v209 = v327;
                  v210 = v346;
                }
                *(_QWORD *)(*((_QWORD *)v77 + 6) + 16LL) = *((_QWORD *)v77 + 6);
                v223 = (_OWORD *)*((_QWORD *)v77 + 6);
                v224 = &v331[72 * (_QWORD)v209];
                *((_QWORD *)v77 + 15) = *((_QWORD *)v224 + 4);
                v223[4] = *(_OWORD *)(v224 + 40);
                v223[5] = *(_OWORD *)(v224 + 56);
                v223[6] = *(_OWORD *)(v224 + 72);
                v225 = v210[6];
                if ( !v311 || (*(_DWORD *)&a2->Flags & 0x10000) != 0 )
                {
                  v226 = v210[6];
                  v328 = (struct _DXGSHAREDALLOCOBJECT *)(8LL * (_QWORD)v209);
                  v229 = v225;
                  v227 = *(void **)((char *)v323 + (_QWORD)v328);
                  v228 = (char *)*((_QWORD *)v210 + 2);
                }
                else
                {
                  v226 = (unsigned int)v225;
                  v328 = (struct _DXGSHAREDALLOCOBJECT *)(8LL * (_QWORD)v209);
                  v227 = v321[(_QWORD)v209];
                  v228 = (char *)*((_QWORD *)v210 + 2);
                  if ( (unsigned __int64)&v228[v226] > MmUserProbeAddress || &v228[v226] <= v228 )
                    *(_BYTE *)MmUserProbeAddress = 0;
                  v229 = v226;
                }
                memmove(v228, v227, v229);
                if ( v337 )
                {
                  if ( !v311 || (v230 = v321, (*(_DWORD *)&a2->Flags & 0x10000) != 0) )
                    v230 = v323;
                  memmove((void *)*(v337 - 2), *(const void **)((char *)v230 + (_QWORD)v328), v226);
                  v337 = (__int64 *)*v337;
                  v350 = v337;
                }
                v29 = (char *)v322;
                v76 = (ULONG64)v331;
                v187 = HostProcess + 1;
                v77 = (struct DXGALLOCATION *)*((_QWORD *)v77 + 8);
              }
              operator delete[](v348);
              if ( (int)DriverAllocations < 0 )
                goto LABEL_388;
              goto LABEL_333;
            }
            v180 = *(_DWORD *)(v76 + 8);
            if ( (v179 & 0x40) != 0 )
            {
              if ( v180 )
              {
                v181 = WdLogNewEntry5_WdAssertion(v179, v76);
                *(_QWORD *)(v181 + 24) = 5726LL;
LABEL_294:
                WdLogEvent5_WdAssertion(v181);
                v76 = (ULONG64)v331;
              }
            }
            else if ( !v180 )
            {
              v181 = WdLogNewEntry5_WdAssertion(v179, v76);
              *(_QWORD *)(v181 + 24) = 5730LL;
              goto LABEL_294;
            }
            *(_DWORD *)(*((_QWORD *)v53 + 7) + 28LL) = *(_DWORD *)(v76 + 8);
            goto LABEL_296;
          }
          Value |= 0x800004u;
        }
        v104->Flags.Value = Value;
        goto LABEL_174;
      }
    }
    else
    {
      if ( !v53 )
        goto LABEL_162;
      v101 = *((_QWORD *)v53 + 7);
      if ( !v101 || (*(_BYTE *)(v101 + 12) & 0x60) != 0x60 )
        goto LABEL_162;
    }
    *((_DWORD *)v53 + 1) |= 8u;
    goto LABEL_162;
  }
LABEL_389:
  DXGAUTOMUTEX::ReleaseIfAcquired((DXGAUTOMUTEX *)v367, v76);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v369);
  if ( (int)DriverAllocations >= 0 )
  {
    if ( v77 )
    {
      LODWORD(v328) = 0;
      if ( a2->NumAllocations )
      {
        v255 = 0;
        v256 = v315;
        v257 = v364;
        do
        {
          v258 = DXGPROCESS::GetCurrent();
          v259 = *((_QWORD *)v257 + 5);
          v260 = *((unsigned int *)v256 + 4);
          v261 = (DXGPUSHLOCK *)(v259 + 208);
          if ( (*((_BYTE *)v258 + 347) & 0x20) != 0 )
          {
            DXGPUSHLOCK::AcquireExclusive(v261);
            v262 = ((unsigned int)v260 >> 6) & 0xFFFFFF;
            if ( (unsigned int)v262 < *(_DWORD *)(v259 + 256) )
            {
              v263 = *(_QWORD *)(v259 + 240);
              v264 = ((unsigned int)v260 >> 25) & 0x60;
              if ( (((unsigned int)v260 >> 25) & 0x60) == (*(_BYTE *)(v263 + 16 * v262 + 8) & 0x60)
                && (*(_DWORD *)(v263 + 16 * v262 + 8) & 0x1F) != 0 )
              {
                v265 = 2 * ((v260 >> 6) & 0xFFFFFF);
                if ( (*(_DWORD *)(v263 + 8 * v265 + 8) & 0x2000) == 0 )
                {
                  v266 = WdLogNewEntry5_WdAssertion(v264, v263);
                  *(_QWORD *)(v266 + 24) = 222LL;
                  WdLogEvent5_WdAssertion(v266);
                  v263 = *(_QWORD *)(v259 + 240);
                }
                *(_DWORD *)(v263 + 8 * v265 + 8) &= ~0x2000u;
              }
            }
          }
          else
          {
            DXGPUSHLOCK::AcquireExclusive(v261);
            v267 = ((unsigned int)v260 >> 6) & 0xFFFFFF;
            LODWORD(v328) = v267;
            if ( (unsigned int)v267 < *(_DWORD *)(v259 + 256) )
            {
              v268 = *(_QWORD *)(v259 + 240);
              v269 = ((unsigned int)v260 >> 25) & 0x60;
              if ( (((unsigned int)v260 >> 25) & 0x60) == (*(_BYTE *)(v268 + 16LL * (unsigned int)v267 + 8) & 0x60)
                && (*(_DWORD *)(v268 + 16LL * (unsigned int)v267 + 8) & 0x1F) != 0 )
              {
                v270 = 2 * ((v260 >> 6) & 0xFFFFFF);
                if ( (*(_DWORD *)(v268 + 8 * v270 + 8) & 0x2000) == 0 )
                {
                  v271 = WdLogNewEntry5_WdAssertion(v269, v267);
                  *(_QWORD *)(v271 + 24) = 222LL;
                  WdLogEvent5_WdAssertion(v271);
                  v268 = *(_QWORD *)(v259 + 240);
                  LODWORD(v267) = (_DWORD)v328;
                }
                *(_DWORD *)(v268 + 8 * v270 + 8) &= ~0x2000u;
              }
              if ( (unsigned int)v267 < *(_DWORD *)(v259 + 256) )
                *(_DWORD *)(*(_QWORD *)(v259 + 240) + 16LL * (unsigned int)v267 + 8) &= ~0x4000u;
            }
          }
          *(_QWORD *)(v259 + 216) = 0LL;
          ExReleasePushLockExclusiveEx(v259 + 208, 0LL);
          KeLeaveCriticalRegion();
          ++v255;
          v256 = (struct DXGALLOCATION *)*((_QWORD *)v256 + 8);
        }
        while ( v255 < a2->NumAllocations );
        v17 = v335;
        LODWORD(DriverAllocations) = v314;
        v53 = v336;
      }
    }
    if ( v313[0] )
    {
      v272 = *((_QWORD *)v17 + 5);
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v272 + 208, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v275 = *(_DWORD *)(v272 + 232);
          if ( v275 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q_EtwWriteTransfer(v273, &EventBlockThread, v274, v275);
        }
        ExAcquirePushLockExclusiveEx(v272 + 208, 0LL);
      }
      *(_QWORD *)(v272 + 216) = KeGetCurrentThread();
      v276 = *((_DWORD *)v53 + 4);
      v277 = (v276 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v277 < *(_DWORD *)(v272 + 256) )
      {
        v278 = *(_QWORD *)(v272 + 240);
        if ( ((v276 >> 25) & 0x60) == (*(_BYTE *)(v278 + 16 * v277 + 8) & 0x60)
          && (*(_DWORD *)(v278 + 16 * v277 + 8) & 0x1F) != 0 )
        {
          v279 = 2LL * ((v276 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v278 + 16LL * ((v276 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
          {
            v280 = WdLogNewEntry5_WdAssertion((v276 >> 25) & 0x60, v278);
            *(_QWORD *)(v280 + 24) = 222LL;
            WdLogEvent5_WdAssertion(v280);
            v278 = *(_QWORD *)(v272 + 240);
          }
          *(_DWORD *)(v278 + 8 * v279 + 8) &= ~0x2000u;
        }
      }
      v281 = (*((_DWORD *)v53 + 4) >> 6) & 0xFFFFFF;
      if ( v281 < *(_DWORD *)(v272 + 256) )
        *(_DWORD *)(*(_QWORD *)(v272 + 240) + 16LL * v281 + 8) &= ~0x4000u;
      *(_QWORD *)(v272 + 216) = 0LL;
      ExReleasePushLockExclusiveEx(v272 + 208, 0LL);
      KeLeaveCriticalRegion();
    }
    goto LABEL_472;
  }
  if ( v77 )
  {
    v282 = 0;
    if ( a2->NumAllocations )
    {
      do
      {
        v283 = *((_QWORD *)v77 + 6);
        if ( *(_QWORD *)(v283 + 8) && !v312 )
        {
          if ( (v284 = *(_DWORD *)(v283 + 4), (v284 & 1) != 0) && !*((_DWORD *)v17 + 108) || (v284 & 2) != 0 )
          {
            if ( (v284 & 0x10) != 0 )
            {
              v285 = WdLogNewEntry5_WdAssertion(v254, v283);
              *(_QWORD *)(v285 + 24) = 6207LL;
              WdLogEvent5_WdAssertion(v285);
              v283 = *((_QWORD *)v77 + 6);
            }
            (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v17 + 2) + 640LL) + 8LL) + 200LL))(
              *(_QWORD *)(*((_QWORD *)v17 + 2) + 648LL),
              *(_QWORD *)(v283 + 8));
            *(_DWORD *)(*((_QWORD *)v77 + 6) + 4LL) |= 0x10u;
          }
        }
        ++v282;
        v77 = (struct DXGALLOCATION *)*((_QWORD *)v77 + 8);
      }
      while ( v282 < a2->NumAllocations );
      LODWORD(DriverAllocations) = v314;
    }
    v77 = v315;
  }
  if ( v313[0] )
  {
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v354, 0LL);
    DXGRESOURCEREFERENCE::MoveAssign(&v344, &v354);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v354, v286);
    DXGDEVICE::RemoveResourceFromDeviceList(v17, v53);
  }
  else
  {
    if ( !v77 )
      goto LABEL_472;
    if ( v320 )
      DXGDEVICE::RemoveAllocationsWithoutDestroy(v17, v53, v77, a2->NumAllocations);
    if ( !v53 || *((_QWORD *)v53 + 7) )
    {
      v287 = v77;
      do
      {
        v288 = v287;
        v289 = (_QWORD *)((char *)v287 + 64);
        v287 = (struct DXGALLOCATION *)*((_QWORD *)v287 + 8);
        *((_QWORD *)v288 + 7) = 0LL;
        *v289 = 0LL;
        if ( v53 )
        {
          v290 = *((_QWORD *)v53 + 7);
          if ( v290 )
          {
            if ( *(_QWORD *)(*((_QWORD *)v288 + 6) + 48LL) )
            {
              DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v290 + 32));
              --*(_DWORD *)(*((_QWORD *)v53 + 7) + 132LL);
              v291 = *((_QWORD *)v288 + 6) + 48LL;
              v292 = *(_QWORD *)v291;
              v293 = *(_QWORD **)(*((_QWORD *)v288 + 6) + 56LL);
              if ( *(_QWORD *)(*(_QWORD *)v291 + 8LL) != v291 || *v293 != v291 )
                __fastfail(3u);
              *v293 = v292;
              *(_QWORD *)(v292 + 8) = v293;
              *(_QWORD *)(*((_QWORD *)v288 + 6) + 48LL) = 0LL;
              v294 = *((_QWORD *)v53 + 7) + 32LL;
              *(_QWORD *)(v294 + 8) = 0LL;
              ExReleasePushLockExclusiveEx(v294, 0LL);
              KeLeaveCriticalRegion();
            }
          }
        }
        DXGDEVICE::DestroyAllocations(v17, 0LL, 0, v288, 0LL, 0);
      }
      while ( v287 );
      v77 = v315;
    }
    if ( !v53 )
      goto LABEL_472;
    v295 = *((_QWORD *)v53 + 7);
    if ( !v295 )
    {
      DXGDEVICE::DestroyAllocations(v17, v53, 0, v77, 0LL, 0);
      goto LABEL_472;
    }
    v296 = 0;
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v295 + 32));
    v297 = *((_DWORD *)v53 + 1);
    if ( (v297 & 0x10) == 0 )
    {
      *((_DWORD *)v53 + 1) = v297 | 0x10;
      v296 = 1;
    }
    v298 = *((_QWORD *)v53 + 7) + 32LL;
    *(_QWORD *)(v298 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v298, 0LL);
    KeLeaveCriticalRegion();
    if ( !v296 )
      goto LABEL_472;
    DXGDEVICE::RemoveResourceFromDeviceList(v17, v53);
    v299 = DXGPROCESS::GetCurrent();
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v371,
      (struct _KTHREAD **)v299);
    DXGPROCESS::GetResourceUnsafe((__int64)v299, (DXGRESOURCEREFERENCE *)&v356, *((_DWORD *)v53 + 4));
    if ( v356 )
    {
      Count = v356[2].Count;
      v302 = (Count >> 6) & 0xFFFFFF;
      if ( v302 < *((_DWORD *)v299 + 64) )
      {
        v303 = *((_QWORD *)v299 + 30);
        v304 = *(_DWORD *)(v303 + 16LL * v302 + 8);
        if ( ((Count >> 25) & 0x60) == (v304 & 0x60) && (v304 & 0x2000) == 0 && (v304 & 0x1F) != 0 )
          *(_DWORD *)(v303 + 16LL * ((Count >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
      }
      DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v355, 0LL);
      DXGRESOURCEREFERENCE::MoveAssign(&v344, &v355);
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v355, v305);
    }
    else
    {
      v296 = 0;
    }
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v356, v300);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v371);
    if ( !v296 )
      goto LABEL_472;
  }
  DXGDEVICE::DestroyResource(v17, v53, 0LL, 0);
LABEL_472:
  v306 = v323;
  if ( a2->NumAllocations )
  {
    do
      operator delete[](v306[v27++]);
    while ( v27 < a2->NumAllocations );
  }
  operator delete[](Src);
  if ( a2->NumAllocations > 5 )
  {
    operator delete[](v322);
    operator delete[](v324);
    operator delete[](v342);
    operator delete[](v306);
    operator delete[](v321);
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v369);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v367);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&v344, v307);
  v308 = ListEntry;
  if ( ListEntry )
  {
    v309 = v365 + 1472;
    ++*(_DWORD *)(v365 + 1500);
    if ( ExQueryDepthSList((PSLIST_HEADER)v309) < *(_WORD *)(v309 + 16) )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v309, v308);
    }
    else
    {
      ++*(_DWORD *)(v309 + 32);
      (*(void (__fastcall **)(struct _SLIST_ENTRY *))(v309 + 56))(v308);
    }
  }
  return (unsigned int)DriverAllocations;
}
