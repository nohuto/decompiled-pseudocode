/*
 * XREFs of ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C00F28E0
 * Callers:
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C00EF6B0 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0112380 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C0115C38 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C011AE60 (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 * Callees:
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0002118 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00025F8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C00028D0 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0002A80 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002ADC (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B54 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002B94 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C00042D8 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0006568 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C00065E8 (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C000D8EC (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     ??0_MOCKDRIVERSTATE_PER_PLANE@@QEAA@XZ @ 0x1C001B0F0 (--0_MOCKDRIVERSTATE_PER_PLANE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?Feature_WSL_Device_GPU__private_IsEnabled@@YAHXZ @ 0x1C0024918 (-Feature_WSL_Device_GPU__private_IsEnabled@@YAHXZ.c)
 *     ?GetResourceUnsafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0024AFC (-GetResourceUnsafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ?ReleaseIfAcquired@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0024C1C (-ReleaseIfAcquired@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0027200 (memmove.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     ?OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@EPEAU_EPROCESS@@PEAU_DXGSHAREDALLOCOBJECT@@PEAVDXGRESOURCEREFERENCE@@PEAEPEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVDXGAUTOMUTEX@@PEAVDXGAUTOPUSHLOCK@@@Z @ 0x1C00D5B2C (-OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@E.c)
 *     ?CheckNoKmdAccessPrivateData@@YAJIPEAXI@Z @ 0x1C00DB7C4 (-CheckNoKmdAccessPrivateData@@YAJIPEAXI@Z.c)
 *     ?OpenAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAVDXGALLOCATION@@PEAU_DXGK_OPENALLOCATIONINFO@@PEAPEAX4PEAXEEIPEAIPEA_K@Z @ 0x1C00EF140 (-OpenAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAV.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00F6970 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00F7150 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FD140 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00FE8C0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C0108424 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z @ 0x1C010B450 (-CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C010B7A0 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C011B654 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?CreateDriverAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAPEAX5PEAXPEBU_D3DKM_CREATESTANDARDALLOCATION@@HPEAU_D3DKMT_CREATESTANDARDALLOCATION@@@Z @ 0x1C011BE40 (-CreateDriverAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINF.c)
 *     ?DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0126EB0 (-DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCA.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0126F74 (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?ReplicateGdiContent@DXGADAPTER@@QEBAEXZ @ 0x1C014C0F4 (-ReplicateGdiContent@DXGADAPTER@@QEBAEXZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C014FC8C (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?CreateVidMmAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@EPEAVCOREDEVICEACCESS@@@Z @ 0x1C014FDB0 (-CreateVidMmAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO.c)
 *     ?AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z @ 0x1C0166F14 (-AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z.c)
 *     ?AppendAllocationListToResourceOrDevice@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@1@Z @ 0x1C016AE70 (-AppendAllocationListToResourceOrDevice@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@1@Z.c)
 *     ?ProcessSectionAttributes@@YAJPEAXPEAU_DXGK_ALLOCATIONINFO@@@Z @ 0x1C02284C8 (-ProcessSectionAttributes@@YAJPEAXPEAU_DXGK_ALLOCATIONINFO@@@Z.c)
 *     ?ProcessSysMemAttributes@@YAJPEAXIPEAU_DXGK_ALLOCATIONINFO@@@Z @ 0x1C02285F8 (-ProcessSysMemAttributes@@YAJPEAXIPEAU_DXGK_ALLOCATIONINFO@@@Z.c)
 *     ?VmBusSendCreateAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIPEBU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAPEAXPEBX3EEPEAPEAE@Z @ 0x1C024671C (-VmBusSendCreateAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIPEBU_D3DKMT_CREATEALLOCATION@@PEA.c)
 *     ?VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K2@Z @ 0x1C0249948 (-VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGA.c)
 *     ?VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAPGPUVIRTUALADDRESS@@@Z @ 0x1C0249B30 (-VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAP.c)
 *     ?RemoveAllocationsWithoutDestroy@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@I@Z @ 0x1C0256084 (-RemoveAllocationsWithoutDestroy@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@I@Z.c)
 *     ?RemoveResourceFromDeviceList@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C0256178 (-RemoveResourceFromDeviceList@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0284E64 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXGDEVICE::CreateAllocation(
        struct _DXGK_ALLOCATIONINFO *this,
        struct _D3DKMT_CREATEALLOCATION *a2,
        __int64 a3,
        char a4,
        struct _DXGSHAREDALLOCOBJECT *a5,
        const struct _D3DKM_CREATESTANDARDALLOCATION *a6,
        struct COREDEVICEACCESS *a7,
        UINT a8,
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
  void **v28; // r13
  __int64 NumAllocations; // rax
  char *v30; // r12
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rdi
  int v33; // r15d
  SIZE_T v34; // rax
  SIZE_T v35; // rax
  SIZE_T v36; // rax
  void **v37; // rdi
  SIZE_T v38; // rax
  unsigned __int8 v39; // al
  SIZE_T v40; // rax
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
  unsigned __int64 v52; // rdi
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
  unsigned int v97; // edx
  __int64 v98; // rcx
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // rax
  __int64 j; // rcx
  SIZE_T v103; // rax
  struct _EPROCESS *v104; // rax
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  _QWORD *v108; // rax
  void *v109; // rcx
  __int64 v110; // rcx
  D3DKMT_CREATEALLOCATIONFLAGS v111; // eax
  int v112; // eax
  __int64 v113; // rax
  __int64 v114; // rax
  char v115; // cl
  D3DKMT_CREATEALLOCATIONFLAGS v116; // eax
  struct _DXGK_ALLOCATIONINFO *v117; // r8
  UINT Value; // edx
  unsigned int v119; // eax
  int v120; // edx
  __int64 v121; // rax
  __int64 v122; // rcx
  UINT v123; // r15d
  struct COREDEVICEACCESS *v124; // r12
  __int64 v125; // rsi
  ULONG64 v126; // r14
  unsigned __int8 *v127; // r13
  __int64 v128; // r8
  __int64 v129; // rax
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // rax
  __int64 v133; // rdx
  struct DXGGLOBAL *Global; // r15
  struct _DXGK_ALLOCATIONINFO *v135; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v137; // rax
  int v138; // eax
  __int64 v139; // rdx
  __int64 v140; // r8
  __int64 v141; // rcx
  __int64 v142; // rax
  __int64 v143; // rdx
  __int64 v144; // rax
  D3DKMT_HANDLE v145; // eax
  D3DKMT_CREATEALLOCATIONFLAGS v146; // eax
  D3DKMT_HANDLE v147; // ecx
  __int64 v148; // r8
  struct DXGALLOCATION *k; // r9
  UINT v150; // eax
  struct DXGALLOCATION *v151; // r9
  __int64 v152; // rcx
  __int64 v153; // rdx
  __int64 v154; // r8
  __int64 v155; // rcx
  _QWORD *v156; // rax
  struct _D3DKMT_CREATEALLOCATION *v157; // r12
  unsigned __int8 v158; // r15
  size_t PrivateRuntimeDataSize; // r8
  char *pPrivateRuntimeData; // rdx
  void *v161; // r9
  UINT v162; // eax
  __int64 v163; // rcx
  __int64 v164; // rdx
  __int64 v165; // r8
  __int64 v166; // rcx
  struct _D3DKMT_CREATEALLOCATION *v167; // rdx
  const void *v168; // rdx
  struct DXGALLOCATION *v169; // rax
  struct DXGALLOCATION *v170; // r12
  unsigned int *v171; // rcx
  unsigned int *v172; // r15
  PVOID v173; // rax
  __int64 v174; // rdx
  __int64 v175; // r8
  __int64 v176; // rcx
  void *v177; // r9
  const void *v178; // rdx
  __int64 v179; // rdx
  __int64 v180; // rcx
  __int64 v181; // rax
  _QWORD *v182; // rax
  void *v183; // r12
  unsigned int v184; // eax
  D3DKMT_CREATEALLOCATIONFLAGS v185; // edx
  const void *v186; // r15
  const void *v187; // r11
  void **v188; // rax
  unsigned int v189; // r9d
  __int64 v190; // rdx
  __int64 v191; // rcx
  __int64 v192; // r15
  __int64 v193; // rax
  __int64 v194; // rcx
  int v195; // eax
  __int64 v196; // rax
  struct DXGALLOCATION *v197; // rax
  struct DXGALLOCATION *v198; // r8
  UINT v199; // r11d
  unsigned __int8 *v200; // r14
  unsigned __int8 *v201; // r9
  D3DKMT_CREATEALLOCATIONFLAGS v202; // eax
  struct DXGALLOCATION *v203; // r15
  UINT v204; // eax
  __int64 v205; // r12
  unsigned int v206; // edx
  D3DKMT_CREATEALLOCATIONFLAGS v207; // ecx
  bool v208; // zf
  struct _DXGK_ALLOCATIONINFO *v209; // rcx
  __int64 v210; // r8
  int v211; // edx
  struct _DXGK_ALLOCATIONINFO *v212; // rcx
  NTSTATUS v213; // eax
  __int64 v214; // rdx
  __int64 v215; // rcx
  __int64 v216; // rax
  PVOID v217; // r12
  int v218; // eax
  __int64 v219; // rdx
  __int64 v220; // rcx
  _QWORD *v221; // rax
  __int64 v222; // rdx
  int v223; // ecx
  struct _DXGK_ALLOCATIONINFO *v224; // r8
  unsigned __int64 v225; // r8
  struct COREDEVICEACCESS *v226; // r9
  unsigned int v227; // edi
  struct DXGPROCESS *Current; // rax
  int Resident; // eax
  __int64 v230; // rdx
  __int64 v231; // rcx
  __int64 v232; // rax
  D3DKMT_CREATEALLOCATIONFLAGS v233; // eax
  int v234; // eax
  __int64 v235; // rdx
  __int64 v236; // rcx
  __int64 v237; // r8
  _QWORD *v238; // rax
  _OWORD *v239; // rdx
  unsigned __int8 *v240; // rcx
  size_t v241; // rcx
  size_t v242; // r12
  const void *v243; // rdx
  char *v244; // rcx
  size_t v245; // r8
  void **v246; // rax
  _QWORD *v247; // rax
  __int64 v248; // r15
  __int64 v249; // rcx
  __int64 v250; // rax
  struct DXGALLOCATION *v251; // rdx
  __int64 v252; // r15
  D3DKMT_CREATEALLOCATIONFLAGS v253; // ecx
  void *v254; // rcx
  NTSTATUS v255; // eax
  __int64 v256; // rdx
  PVOID v257; // rcx
  __int64 v258; // rax
  int v259; // ecx
  struct _D3DKM_CREATESTANDARDALLOCATION *v260; // rcx
  UINT v261; // r12d
  int v262; // edi
  int v263; // ecx
  struct DXGPROCESS *v264; // rax
  int v265; // eax
  __int64 v266; // rdx
  __int64 v267; // rcx
  __int64 v268; // r8
  unsigned __int8 v269; // al
  D3DGPU_VIRTUAL_ADDRESS BaseAddress; // rcx
  __int64 v271; // rsi
  __int64 v272; // r15
  __int64 v273; // rcx
  __int64 v274; // r8
  int v275; // r9d
  unsigned int v276; // r8d
  __int64 v277; // rax
  __int64 v278; // rdx
  __int64 v279; // rsi
  __int64 v280; // rax
  __int64 v281; // rcx
  __int64 v282; // rdx
  int v283; // eax
  __int64 v284; // rax
  struct DXGALLOCATION *v285; // rax
  struct DXGALLOCATION *v286; // r15
  __int64 v287; // rcx
  __int64 v288; // rax
  __int64 v289; // rdx
  _QWORD *v290; // rcx
  __int64 v291; // rcx
  __int64 v292; // rcx
  char v293; // r15
  int v294; // eax
  __int64 v295; // rcx
  unsigned int v296; // r8d
  unsigned int v297; // ecx
  struct _KTHREAD *v298; // r9
  int v299; // edx
  void **v300; // rsi
  struct _SLIST_ENTRY *v301; // rsi
  __int64 v302; // rbx
  int Object; // [rsp+20h] [rbp-348h]
  unsigned __int8 v304; // [rsp+70h] [rbp-2F8h]
  char v305; // [rsp+71h] [rbp-2F7h]
  unsigned int *v306; // [rsp+80h] [rbp-2E8h]
  struct DXGALLOCATION *v307; // [rsp+88h] [rbp-2E0h]
  unsigned __int8 v308[4]; // [rsp+90h] [rbp-2D8h] BYREF
  unsigned int HostProcess; // [rsp+94h] [rbp-2D4h]
  char v310; // [rsp+98h] [rbp-2D0h]
  UINT v311; // [rsp+9Ch] [rbp-2CCh]
  char v312; // [rsp+A0h] [rbp-2C8h]
  char v313; // [rsp+A1h] [rbp-2C7h]
  struct _DXGK_ALLOCATIONINFO *v314; // [rsp+A8h] [rbp-2C0h]
  void **v315; // [rsp+B0h] [rbp-2B8h]
  void **v316; // [rsp+B8h] [rbp-2B0h]
  char v317; // [rsp+C0h] [rbp-2A8h]
  char v318; // [rsp+C8h] [rbp-2A0h]
  struct DXGALLOCATION *v319; // [rsp+D0h] [rbp-298h] BYREF
  unsigned __int64 v320; // [rsp+D8h] [rbp-290h]
  void *Src; // [rsp+E0h] [rbp-288h]
  int v322; // [rsp+E8h] [rbp-280h]
  struct _D3DKM_CREATESTANDARDALLOCATION *v323; // [rsp+F0h] [rbp-278h]
  unsigned __int8 *v324; // [rsp+F8h] [rbp-270h]
  int v325; // [rsp+100h] [rbp-268h]
  struct _DXGSHAREDALLOCOBJECT *v326; // [rsp+108h] [rbp-260h]
  struct _D3DKMT_CREATEALLOCATION *v327; // [rsp+110h] [rbp-258h]
  void *v328; // [rsp+118h] [rbp-250h]
  __int64 *v329; // [rsp+120h] [rbp-248h]
  struct DXGRESOURCE *v330; // [rsp+128h] [rbp-240h]
  DXGDEVICE *v331; // [rsp+130h] [rbp-238h]
  struct _D3DKMT_CREATEALLOCATION *v332; // [rsp+140h] [rbp-228h]
  struct _DXGK_OPENALLOCATIONINFO *v333; // [rsp+150h] [rbp-218h]
  struct DXGALLOCATION *v334; // [rsp+158h] [rbp-210h]
  struct DXGRESOURCE *v335; // [rsp+160h] [rbp-208h]
  PVOID v336; // [rsp+168h] [rbp-200h] BYREF
  struct _KTHREAD **v337; // [rsp+170h] [rbp-1F8h] BYREF
  struct COREDEVICEACCESS *v338; // [rsp+178h] [rbp-1F0h]
  struct DXGRESOURCE *v339; // [rsp+180h] [rbp-1E8h] BYREF
  struct _D3DKMT_CREATEALLOCATION *v340; // [rsp+188h] [rbp-1E0h]
  unsigned __int8 *v341; // [rsp+190h] [rbp-1D8h] BYREF
  __int64 v342; // [rsp+198h] [rbp-1D0h] BYREF
  __int64 *v343; // [rsp+1A0h] [rbp-1C8h]
  struct _EPROCESS *v344; // [rsp+1A8h] [rbp-1C0h]
  unsigned __int64 *v345; // [rsp+1B0h] [rbp-1B8h]
  unsigned int *v346; // [rsp+1B8h] [rbp-1B0h]
  PSLIST_ENTRY ListEntry; // [rsp+1C0h] [rbp-1A8h]
  char v348[8]; // [rsp+1C8h] [rbp-1A0h] BYREF
  char *v349; // [rsp+1D0h] [rbp-198h]
  char v350[8]; // [rsp+1D8h] [rbp-190h] BYREF
  __int64 v351; // [rsp+1E0h] [rbp-188h] BYREF
  struct DXGALLOCATION *v352; // [rsp+1E8h] [rbp-180h] BYREF
  PVOID v353; // [rsp+1F0h] [rbp-178h] BYREF
  struct _D3DKMT_CREATESTANDARDALLOCATION *v354; // [rsp+1F8h] [rbp-170h]
  char *v355; // [rsp+200h] [rbp-168h]
  __int64 v356; // [rsp+208h] [rbp-160h]
  _BYTE v357[16]; // [rsp+210h] [rbp-158h] BYREF
  _BYTE v358[16]; // [rsp+220h] [rbp-148h] BYREF
  _DXGKARG_DESCRIBEALLOCATION v359; // [rsp+230h] [rbp-138h] BYREF
  _BYTE v360[24]; // [rsp+260h] [rbp-108h] BYREF
  _BYTE v361[24]; // [rsp+278h] [rbp-F0h] BYREF
  _BYTE v362[32]; // [rsp+290h] [rbp-D8h] BYREF
  D3DDDI_MAPGPUVIRTUALADDRESS v363; // [rsp+2B0h] [rbp-B8h] BYREF

  v305 = a4;
  v15 = a3;
  v304 = a3;
  v17 = (DXGDEVICE *)this;
  v320 = (unsigned __int64)this;
  v331 = (DXGDEVICE *)this;
  v332 = a2;
  v327 = a2;
  v340 = a2;
  v317 = a3;
  v326 = a5;
  v323 = a6;
  v338 = a7;
  v344 = a9;
  v346 = a10;
  v345 = a11;
  v324 = a12;
  v354 = a13;
  v18 = *(_QWORD *)(this->Size + 16);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v18 + 184) )
  {
    if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v18 + 168)) )
    {
      v19 = WdLogNewEntry5_WdAssertion(v18, a2);
      *(_QWORD *)(v19 + 24) = 4637LL;
      WdLogEvent5_WdAssertion(v19);
    }
    a4 = v305;
  }
  if ( v15 && a4 )
  {
    v20 = WdLogNewEntry5_WdAssertion(v18, a2);
    *(_QWORD *)(v20 + 24) = 4642LL;
    WdLogEvent5_WdAssertion(v20);
  }
  v21 = *((_QWORD *)v17 + 2);
  v22 = *(_QWORD *)(v21 + 16);
  v310 = *(_BYTE *)(v22 + 209);
  v318 = v310;
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
  v28 = 0LL;
  v315 = 0LL;
  Src = 0LL;
  ListEntry = 0LL;
  v356 = v21;
  NumAllocations = a2->NumAllocations;
  if ( (unsigned int)NumAllocations <= 5 )
  {
    v45 = v21 + 1472;
    ++*(_DWORD *)(v45 + 20);
    v30 = (char *)ExpInterlockedPopEntrySList((PSLIST_HEADER)v45);
    v306 = (unsigned int *)v30;
    if ( !v30 )
    {
      ++*(_DWORD *)(v45 + 24);
      v30 = (char *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v45 + 48))(
                      *(unsigned int *)(v45 + 36),
                      *(unsigned int *)(v45 + 44),
                      *(unsigned int *)(v45 + 40));
      v306 = (unsigned int *)v30;
    }
    ListEntry = (PSLIST_ENTRY)v30;
    if ( !v30 )
    {
      v50 = WdLogNewEntry5_WdLowResource(v47, v46, v48, v49);
      *(_QWORD *)(v50 + 24) = v17;
      WdLogEvent5_WdLowResource(v50);
      return -1073741801LL;
    }
    v314 = (struct _DXGK_ALLOCATIONINFO *)(v30 + 720);
    v333 = (struct _DXGK_OPENALLOCATIONINFO *)(v30 + 480);
    v37 = (void **)(v30 + 640);
    v316 = (void **)(v30 + 640);
    v28 = (void **)(v30 + 680);
    v315 = (void **)(v30 + 680);
    v328 = v30;
    goto LABEL_58;
  }
  v30 = 0LL;
  v306 = 0LL;
  v328 = 0LL;
  v31 = (unsigned int)NumAllocations;
  v32 = 96 * NumAllocations;
  v33 = 0;
  if ( (unsigned __int64)(96 * NumAllocations) <= 0xFFFFFFFF )
  {
    v34 = 96LL * (unsigned int)NumAllocations;
    if ( !is_mul_ok(v31, 0x60uLL) )
      v34 = -1LL;
    v30 = (char *)operator new[](v34, 0x4B677844u, PagedPool);
    v306 = (unsigned int *)v30;
    v328 = v30;
  }
  else
  {
    v33 = -1073741675;
  }
  v314 = 0LL;
  if ( v32 <= 0xFFFFFFFF )
  {
    v33 = 0;
    if ( 88 * (unsigned __int64)a2->NumAllocations <= 0xFFFFFFFF )
    {
      v35 = 88LL * a2->NumAllocations;
      if ( !is_mul_ok(a2->NumAllocations, 0x58uLL) )
        v35 = -1LL;
      v314 = (struct _DXGK_ALLOCATIONINFO *)operator new[](v35, 0x4B677844u, PagedPool);
    }
    else
    {
      v33 = -1073741675;
    }
  }
  v333 = 0LL;
  if ( v33 >= 0 )
  {
    v33 = 0;
    if ( 32 * (unsigned __int64)a2->NumAllocations <= 0xFFFFFFFF )
    {
      v36 = 32LL * a2->NumAllocations;
      if ( !is_mul_ok(a2->NumAllocations, 0x20uLL) )
        v36 = -1LL;
      v333 = (struct _DXGK_OPENALLOCATIONINFO *)operator new[](v36, 0x4B677844u, PagedPool);
    }
    else
    {
      v33 = -1073741675;
    }
  }
  v37 = 0LL;
  v316 = 0LL;
  if ( v33 >= 0 )
  {
    v33 = 0;
    if ( 8 * (unsigned __int64)a2->NumAllocations <= 0xFFFFFFFF )
    {
      v38 = 8LL * a2->NumAllocations;
      if ( !is_mul_ok(a2->NumAllocations, 8uLL) )
        v38 = -1LL;
      v37 = (void **)operator new[](v38, 0x4B677844u, PagedPool);
      v316 = v37;
      v39 = v304;
      if ( !v304 )
        goto LABEL_41;
      v40 = 8LL * a2->NumAllocations;
      if ( !is_mul_ok(a2->NumAllocations, 8uLL) )
        v40 = -1LL;
      v28 = (void **)operator new[](v40, 0x4B677844u, PagedPool);
      v315 = v28;
    }
    else
    {
      v33 = -1073741675;
    }
  }
  v39 = v304;
LABEL_41:
  if ( v33 < 0 || !v30 || !v314 || !v333 || !v37 || !v28 && v39 )
  {
    operator delete[](v30);
    operator delete[](v314);
    operator delete[](v333);
    operator delete[](v37);
    operator delete[](v28);
    v44 = (_QWORD *)WdLogNewEntry5_WdWarning(v42, v41, v43);
    v44[3] = v17;
    v44[4] = a2->NumAllocations;
    if ( v33 >= 0 )
    {
      v33 = -1073741801;
      v44[5] = -1073741801LL;
    }
    else
    {
      v44[5] = v33;
    }
    WdLogEvent5_WdWarning(v44);
    return (unsigned int)v33;
  }
  v15 = v304;
LABEL_58:
  v349 = v30;
  v355 = v30;
  v51 = 0;
  v311 = 0;
  if ( a2->NumAllocations )
  {
    do
    {
      v37[v51] = 0LL;
      if ( v15 )
        v28[v51] = 0LL;
      ++v51;
    }
    while ( v51 < a2->NumAllocations );
    v311 = v51;
  }
  v307 = 0LL;
  v319 = 0LL;
  LODWORD(v52) = 0;
  v308[0] = 0;
  v53 = 0LL;
  v313 = 0;
  v339 = 0LL;
  _MOCKDRIVERSTATE_PER_PLANE::_MOCKDRIVERSTATE_PER_PLANE((_MOCKDRIVERSTATE_PER_PLANE *)v358);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v360, 0LL, 0);
  if ( v15 )
  {
    v54 = 96LL * a2->NumAllocations;
    pAllocationInfo = a2->pAllocationInfo;
    if ( (D3DDDI_ALLOCATIONINFO *)((char *)pAllocationInfo + v54) < pAllocationInfo
      || (unsigned __int64)pAllocationInfo + v54 > MmUserProbeAddress )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v30, pAllocationInfo, v54);
  }
  else
  {
    memmove(v30, a2->pAllocationInfo, 96LL * a2->NumAllocations);
  }
  v325 = -1;
  v322 = -1;
  if ( (*(_DWORD *)&a2->Flags & 0x10000) != 0 )
  {
    *((_QWORD *)v30 + 2) = a14;
    *((_DWORD *)v30 + 6) = a15;
  }
  v57 = 0;
  HostProcess = 0;
  if ( !a2->NumAllocations )
  {
LABEL_102:
    for ( i = 0; ; i = HostProcess + 1 )
    {
      v311 = i;
      HostProcess = i;
      if ( i >= a2->NumAllocations )
        break;
      v71 = i;
      v72 = 96LL * i;
      v73 = *(unsigned int *)&v30[v72 + 24];
      if ( (unsigned int)v73 > 0x7FFFFFFF )
      {
        v74 = (_QWORD *)WdLogNewEntry5_WdWarning(v73, v72, Size);
        v74[3] = -1073741811LL;
        goto LABEL_109;
      }
      if ( *(_QWORD *)&v30[v72 + 16] && (_DWORD)v73 )
      {
        if ( v304 && (*(_DWORD *)&a2->Flags & 0x10000) == 0 )
          v73 = (unsigned int)(2 * v73);
        v83 = (char *)operator new[](v73, 0x4B677844u, PagedPool);
        v316[v71] = v83;
        if ( !v83 )
        {
          LODWORD(v52) = -1073741801;
          v74 = (_QWORD *)WdLogNewEntry5_WdWarning(v84, 0LL, Size);
          v74[3] = v17;
          v74[4] = a2->NumAllocations;
          v74[5] = -1073741801LL;
          goto LABEL_109;
        }
        if ( v304 && (*(_DWORD *)&a2->Flags & 0x10000) == 0 )
        {
          v85 = &v83[*(unsigned int *)&v30[96 * v71 + 24]];
          v315[v71] = v85;
          v86 = *(unsigned int *)&v30[96 * v71 + 24];
          v87 = *(char **)&v30[96 * v71 + 16];
          if ( &v87[v86] < v87 || (unsigned __int64)&v87[v86] > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v85, v87, v86);
        }
      }
      else
      {
        v316[i] = 0LL;
        if ( v304 )
          v315[i] = 0LL;
      }
    }
    if ( v304 )
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
            LODWORD(v52) = -1073741801;
            v74 = (_QWORD *)WdLogNewEntry5_WdWarning(v90, v89, v91);
            v74[3] = v17;
            v74[4] = a2->PrivateDriverDataSize;
            v74[5] = -1073741801LL;
LABEL_109:
            WdLogEvent5_WdWarning(v74);
            v77 = 0LL;
            goto LABEL_405;
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
    LODWORD(v52) = DXGDEVICE::OpenResourceObject(
                     (ADAPTER_RENDER **)v17,
                     a2,
                     (struct _D3DDDI_ALLOCATIONINFO2 *)v30,
                     v305,
                     v344,
                     v326,
                     (struct DXGRESOURCEREFERENCE *)&v339,
                     v308,
                     v323,
                     (struct DXGAUTOMUTEX *)v358,
                     (struct DXGAUTOPUSHLOCK *)v360);
    if ( (v52 & 0x80000000) != 0LL )
    {
LABEL_107:
      v77 = 0LL;
      goto LABEL_405;
    }
    v53 = v339;
    v335 = v339;
    v330 = v339;
    if ( v339 && (*((_DWORD *)v339 + 1) & 1) == 0 && (*(_DWORD *)&a2->Flags & 2) != 0 )
    {
      v96 = (_QWORD *)WdLogNewEntry5_WdError(v95, v76);
      v96[3] = v17;
      v96[4] = v53;
      v96[5] = -1073741811LL;
      WdLogEvent5_WdError(v96);
      LODWORD(v52) = -1073741811;
      v77 = 0LL;
      goto LABEL_405;
    }
    v97 = v308[0];
    HostProcess = v308[0];
    v52 = a2->NumAllocations;
    v98 = *(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v98 + 184) )
    {
      if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v98 + 168)) )
      {
        v101 = WdLogNewEntry5_WdAssertion(v100, v99);
        *(_QWORD *)(v101 + 24) = 4557LL;
        WdLogEvent5_WdAssertion(v101);
      }
      v97 = HostProcess;
    }
    if ( v53 )
    {
      if ( !v97 )
      {
        for ( j = *((_QWORD *)v53 + 3); j; v52 = (unsigned int)(v52 + 1) )
          j = *(_QWORD *)(j + 64);
      }
      if ( (unsigned int)v52 > 0x10 )
      {
        v103 = 8 * v52;
        if ( !is_mul_ok(v52, 8uLL) )
          v103 = -1LL;
        v104 = (struct _EPROCESS *)operator new[](v103, 0x4B677844u, PagedPool);
        v344 = v104;
        if ( !v104 )
        {
          v108 = (_QWORD *)WdLogNewEntry5_WdWarning(v106, v105, v107);
          v108[3] = v17;
          v108[4] = v52;
          v108[5] = -1073741801LL;
          WdLogEvent5_WdWarning(v108);
          LODWORD(v52) = -1073741801;
LABEL_157:
          v77 = v319;
          v307 = v319;
          goto LABEL_405;
        }
        if ( !HostProcess )
        {
          v109 = (void *)*((_QWORD *)v53 + 8);
          if ( v109 )
          {
            operator delete[](v109);
            v104 = v344;
          }
        }
        *((_QWORD *)v53 + 8) = v104;
      }
    }
    v352 = 0LL;
    LODWORD(v52) = DXGDEVICE::CreateAllocationObjects(v17, a2->NumAllocations, &v319, v53, &v352);
    if ( (v52 & 0x80000000) != 0LL )
      goto LABEL_157;
    v307 = v319;
    if ( v352 )
    {
      DXGDEVICE::AppendAllocationListToResourceOrDevice(v17, v53, v319, v352);
      v313 = 1;
    }
    v111 = a2->Flags;
    if ( (*(_WORD *)&v111 & 0x800) != 0 )
    {
      if ( v325 != -1 )
      {
        *(_DWORD *)(*((_QWORD *)v53 + 7) + 12LL) |= 0x40u;
        *((_DWORD *)v53 + 1) |= 8u;
        *(_DWORD *)(*((_QWORD *)v53 + 7) + 12LL) ^= (*(_DWORD *)(*((_QWORD *)v53 + 7) + 12LL) ^ (*(_DWORD *)&a2->Flags >> 3)) & 0x80;
      }
      goto LABEL_178;
    }
    if ( (*(_WORD *)&v111 & 0x1000) != 0 )
    {
      if ( !v323 )
        goto LABEL_178;
      v112 = *(_DWORD *)v323;
      if ( (*(_DWORD *)v323 & 0x80u) != 0 )
      {
        v113 = WdLogNewEntry5_WdAssertion(v110, v76);
        *(_QWORD *)(v113 + 24) = 5188LL;
        WdLogEvent5_WdAssertion(v113);
        v112 = *(_DWORD *)v323;
      }
      if ( (v112 & 0x100) == 0 )
      {
LABEL_178:
        if ( v310 )
          goto LABEL_198;
        memset(v314, 0, 88LL * a2->NumAllocations);
        v115 = v305;
        if ( !v305 )
        {
          LODWORD(v52) = DXGDEVICE::CreateDriverAllocations(
                           v17,
                           a2,
                           (struct _D3DDDI_ALLOCATIONINFO2 *)v30,
                           v314,
                           v307,
                           v53,
                           v316,
                           v315,
                           Src,
                           v323,
                           v304,
                           v354);
          v115 = 0;
        }
        if ( (v52 & 0x80000000) != 0LL )
          goto LABEL_404;
        v77 = v307;
        LODWORD(v52) = DXGDEVICE::OpenAllocations(
                         v17,
                         a2,
                         (struct _D3DDDI_ALLOCATIONINFO2 *)v30,
                         v307,
                         v333,
                         v316,
                         v315,
                         (D3DKMT_CREATESTANDARDALLOCATION *)Src,
                         v304,
                         v115,
                         a8,
                         v346,
                         v345);
        if ( (v52 & 0x80000000) != 0LL )
          goto LABEL_405;
        v116 = a2->Flags;
        v117 = v314;
        Value = v314->Flags.Value;
        if ( (*(_BYTE *)&v116 & 8) != 0 )
        {
          Value |= 0x4000008u;
          v314->Flags.Value = Value;
          v116 = a2->Flags;
        }
        if ( (*(_WORD *)&v116 & 0x100) != 0 )
        {
          Value = Value & 0xFEFFFFFB | 0x1000000;
        }
        else
        {
          if ( (*(_WORD *)&v116 & 0x200) == 0 )
          {
LABEL_190:
            v119 = Value & 0xFFFFF7FF;
            v120 = Value | 0x800;
            if ( (*(_DWORD *)&a2->Flags & 0x8000) == 0 )
              v120 = v119;
            v117->Flags.Value = v120;
            LODWORD(v52) = DXGDEVICE::CreateVidMmAllocations(
                             v17,
                             a2,
                             (struct _D3DDDI_ALLOCATIONINFO2 *)v30,
                             v117,
                             v307,
                             v323,
                             v305,
                             v338);
            if ( (v52 & 0x80000000) != 0LL )
              goto LABEL_405;
            if ( !v324 )
            {
LABEL_199:
              if ( v308[0] )
              {
                if ( v53 )
                {
                  if ( (*((_DWORD *)v53 + 1) & 1) != 0 )
                  {
                    v129 = *((_QWORD *)v53 + 7);
                    if ( !*(_DWORD *)(v129 + 24) && (*(_DWORD *)(v129 + 12) & 8) == 0 )
                    {
                      DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v357, v76);
                      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v357);
                      if ( (*(_DWORD *)&a2->Flags & 2) == 0 )
                      {
                        v132 = WdLogNewEntry5_WdAssertion(v131, v130);
                        *(_QWORD *)(v132 + 24) = 5322LL;
                        WdLogEvent5_WdAssertion(v132);
                      }
                      Global = DXGGLOBAL::GetGlobal(v131, v130);
                      v135 = (struct _DXGK_ALLOCATIONINFO *)*((_QWORD *)v53 + 7);
                      v320 = (unsigned __int64)v135;
                      CurrentThread = KeGetCurrentThread();
                      if ( *((struct _KTHREAD **)Global + 33) != CurrentThread )
                      {
                        v137 = WdLogNewEntry5_WdAssertion(CurrentThread, v133);
                        *(_QWORD *)(v137 + 24) = 1100LL;
                        WdLogEvent5_WdAssertion(v137);
                        v135 = (struct _DXGK_ALLOCATIONINFO *)v320;
                      }
                      Object = 0;
                      v138 = HMGRTABLE::AllocHandle((char *)Global + 288, v135, 2LL);
                      v141 = *((_QWORD *)v53 + 7);
                      *(_DWORD *)(v141 + 24) = v138;
                      if ( !*(_DWORD *)(*((_QWORD *)v53 + 7) + 24LL) )
                      {
                        v142 = WdLogNewEntry5_WdWarning(v141, v139, v140);
                        *(_QWORD *)(v142 + 24) = v17;
                        *(_QWORD *)(v142 + 32) = -1073741801LL;
                        WdLogEvent5_WdWarning(v142);
                        LODWORD(v52) = -1073741801;
                        DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v357, v143);
                        v77 = v319;
                        v307 = v319;
                        goto LABEL_405;
                      }
                      DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v357, v139);
                      v77 = v319;
                      v307 = v319;
                    }
                  }
                }
                DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
                  (DXGAUTOPUSHLOCKEXCLUSIVE *)v361,
                  (DXGDEVICE *)((char *)v17 + 240));
                v144 = *((_QWORD *)v17 + 7);
                if ( v144 )
                {
                  *(_QWORD *)(v144 + 32) = v53;
                  v144 = *((_QWORD *)v17 + 7);
                }
                *((_QWORD *)v53 + 5) = v144;
                *((_QWORD *)v17 + 7) = v53;
                DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v361);
              }
              v145 = 0;
              if ( v53 )
                v145 = *((_DWORD *)v53 + 4);
              a2->hResource = v145;
              v146 = a2->Flags;
              if ( ((*(_BYTE *)&v146 & 2) != 0 || v305) && (*(_BYTE *)&v146 & 0x40) == 0 )
                v147 = *(_DWORD *)(*((_QWORD *)v53 + 7) + 24LL);
              else
                v147 = 0;
              a2->hGlobalShare = v147;
              if ( v304 )
              {
                v148 = 0LL;
                v311 = 0;
                for ( k = v77; ; k = (struct DXGALLOCATION *)*((_QWORD *)k + 8) )
                {
                  v150 = a2->NumAllocations;
                  if ( (unsigned int)v148 >= v150 )
                    break;
                  v76 = (ULONG64)a2->pAllocationInfo + 96 * (unsigned int)v148;
                  if ( v76 >= MmUserProbeAddress )
                    v76 = MmUserProbeAddress;
                  *(_DWORD *)v76 = *((_DWORD *)k + 4);
                  v148 = (unsigned int)(v148 + 1);
                  v311 = v148;
                }
              }
              else
              {
                v148 = 0LL;
                v151 = v77;
                v150 = a2->NumAllocations;
                if ( v150 )
                {
                  do
                  {
                    v76 = 96LL * (unsigned int)v148;
                    *(D3DKMT_HANDLE *)((char *)&a2->pAllocationInfo->hAllocation + v76) = *((_DWORD *)v151 + 4);
                    v148 = (unsigned int)(v148 + 1);
                    v151 = (struct DXGALLOCATION *)*((_QWORD *)v151 + 8);
                    v150 = a2->NumAllocations;
                  }
                  while ( (unsigned int)v148 < v150 );
                }
              }
              v311 = 0;
              v334 = v77;
              if ( v150 )
              {
                do
                {
                  v76 = *(unsigned int *)(*((_QWORD *)v77 + 6) + 4LL);
                  if ( (v76 & 1) != 0 )
                  {
                    LODWORD(v52) = DXGDEVICE::AddPrimaryAllocation(v17, v77);
                    if ( (v52 & 0x80000000) != 0LL )
                      goto LABEL_404;
                  }
                  else if ( (v76 & 2) != 0 )
                  {
                    DXGDEVICE::SetDisplayedPrimary((struct _KTHREAD **)v17, ((unsigned int)v76 >> 6) & 0xF, v77, 0, 1u);
                  }
                  ++v311;
                  v77 = (struct DXGALLOCATION *)*((_QWORD *)v77 + 8);
                  v334 = v77;
                }
                while ( v311 < a2->NumAllocations );
              }
              if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
              {
                if ( a2->pPrivateRuntimeData )
                {
                  v152 = *((_QWORD *)v53 + 7);
                  if ( *(_QWORD *)(v152 + 104) )
                  {
                    v157 = v327;
                    if ( *(_DWORD *)(v152 + 112) != v327->PrivateRuntimeDataSize )
                    {
                      LODWORD(v52) = -1073741811;
                      v156 = (_QWORD *)WdLogNewEntry5_WdWarning(v152, v76, v148);
                      v156[3] = v17;
                      v156[4] = a2->PrivateRuntimeDataSize;
                      v156[5] = *(unsigned int *)(*((_QWORD *)v53 + 7) + 112LL);
                      goto LABEL_403;
                    }
                  }
                  else
                  {
                    *(_QWORD *)(*((_QWORD *)v53 + 7) + 104LL) = operator new[](
                                                                  a2->PrivateRuntimeDataSize,
                                                                  0x4B677844u,
                                                                  PagedPool);
                    v155 = *((_QWORD *)v53 + 7);
                    if ( !*(_QWORD *)(v155 + 104) )
                    {
                      LODWORD(v52) = -1073741801;
                      v156 = (_QWORD *)WdLogNewEntry5_WdWarning(v155, v153, v154);
                      v156[3] = v17;
                      v156[4] = v327->PrivateRuntimeDataSize;
                      v156[5] = -1073741801LL;
LABEL_403:
                      WdLogEvent5_WdWarning(v156);
                      goto LABEL_404;
                    }
                    v157 = v327;
                    *(_DWORD *)(v155 + 112) = v327->PrivateRuntimeDataSize;
                  }
                  v158 = v304;
                  if ( v304 )
                  {
                    PrivateRuntimeDataSize = v157->PrivateRuntimeDataSize;
                    pPrivateRuntimeData = (char *)a2->pPrivateRuntimeData;
                    v161 = *(void **)(*((_QWORD *)v53 + 7) + 104LL);
                    if ( &pPrivateRuntimeData[PrivateRuntimeDataSize] < pPrivateRuntimeData
                      || (unsigned __int64)&pPrivateRuntimeData[PrivateRuntimeDataSize] > MmUserProbeAddress )
                    {
                      *(_BYTE *)MmUserProbeAddress = 0;
                    }
                    memmove(v161, pPrivateRuntimeData, PrivateRuntimeDataSize);
                  }
                  else
                  {
                    memmove(
                      *(void **)(*((_QWORD *)v53 + 7) + 104LL),
                      a2->pPrivateRuntimeData,
                      a2->PrivateRuntimeDataSize);
                  }
                  if ( (unsigned int)Feature_WSL_Device_GPU__private_IsEnabled() )
                  {
                    if ( (*(_DWORD *)&a2->Flags & 0x100000) != 0 )
                    {
                      LODWORD(v52) = CheckNoKmdAccessPrivateData(
                                       v157->PrivateRuntimeDataSize,
                                       *(_DWORD **)(*((_QWORD *)v53 + 7) + 104LL),
                                       0xFF000004);
                      if ( (v52 & 0x80000000) != 0LL )
                        goto LABEL_404;
                    }
                  }
                }
                else
                {
                  v158 = v304;
                }
                if ( a2->pStandardAllocation )
                {
                  v162 = a2->PrivateDriverDataSize;
                  if ( v162 )
                  {
                    v163 = *((_QWORD *)v53 + 7);
                    if ( *(_QWORD *)(v163 + 120) )
                    {
                      if ( *(_DWORD *)(v163 + 128) != v162 )
                      {
                        LODWORD(v52) = -1073741811;
                        v156 = (_QWORD *)WdLogNewEntry5_WdWarning(v163, v76, v148);
                        v156[3] = v17;
                        v156[4] = a2->PrivateDriverDataSize;
                        v156[5] = *(unsigned int *)(*((_QWORD *)v53 + 7) + 128LL);
                        v156[6] = 5563LL;
                        goto LABEL_403;
                      }
                    }
                    else
                    {
                      *(_QWORD *)(*((_QWORD *)v53 + 7) + 120LL) = operator new[](v162, 0x4B677844u, PagedPool);
                      v166 = *((_QWORD *)v53 + 7);
                      if ( !*(_QWORD *)(v166 + 120) )
                      {
                        LODWORD(v52) = -1073741801;
                        v156 = (_QWORD *)WdLogNewEntry5_WdWarning(v166, v164, v165);
                        v156[3] = v17;
                        v156[4] = v327->PrivateDriverDataSize;
                        v156[5] = -1073741801LL;
                        goto LABEL_403;
                      }
                      v167 = v327;
                      *(_DWORD *)(v166 + 128) = v327->PrivateDriverDataSize;
                      v162 = v167->PrivateDriverDataSize;
                    }
                    v168 = Src;
                    if ( !v158 )
                      v168 = a2->pStandardAllocation;
                    memmove(*(void **)(*((_QWORD *)v53 + 7) + 120LL), v168, v162);
                    if ( (unsigned int)Feature_WSL_Device_GPU__private_IsEnabled() )
                    {
                      if ( (*(_DWORD *)&a2->Flags & 0x100000) != 0 )
                      {
                        LODWORD(v52) = CheckNoKmdAccessPrivateData(
                                         a2->PrivateDriverDataSize,
                                         *(_DWORD **)(*((_QWORD *)v53 + 7) + 120LL),
                                         0xFF000001);
                        if ( (v52 & 0x80000000) != 0LL )
                          goto LABEL_404;
                      }
                    }
                  }
                }
                v169 = 0LL;
                v311 = 0;
                v77 = v307;
                v170 = v307;
                v334 = v307;
                if ( a2->NumAllocations )
                {
                  v171 = v306;
                  while ( 1 )
                  {
                    v334 = v169;
                    v172 = &v171[24 * (_QWORD)v169];
                    if ( *((_QWORD *)v172 + 2) )
                    {
                      v173 = operator new[](v172[6], 0x4B677844u, PagedPool);
                      v176 = *((_QWORD *)v170 + 6);
                      *(_QWORD *)(v176 + 32) = v173;
                      v177 = *(void **)(*((_QWORD *)v170 + 6) + 32LL);
                      if ( !v177 )
                      {
                        LODWORD(v52) = -1073741801;
                        v182 = (_QWORD *)WdLogNewEntry5_WdWarning(v176, v174, v175);
                        v182[3] = v17;
                        v182[4] = v311 + 1;
                        v183 = v306;
                        v182[5] = v306[24 * (_QWORD)v334 + 6];
                        v182[6] = -1073741801LL;
                        WdLogEvent5_WdWarning(v182);
                        v77 = v307;
                        goto LABEL_406;
                      }
                      if ( !v304 || (*(_DWORD *)&a2->Flags & 0x10000) != 0 )
                        v178 = (const void *)*((_QWORD *)v172 + 2);
                      else
                        v178 = v315[(_QWORD)v334];
                      memmove(v177, v178, v172[6]);
                      *(_DWORD *)(*((_QWORD *)v170 + 6) + 40LL) = v172[6];
                      v171 = v306;
                    }
                    v169 = (struct DXGALLOCATION *)(v311 + 1);
                    v311 = (unsigned int)v169;
                    v170 = (struct DXGALLOCATION *)*((_QWORD *)v170 + 8);
                    v334 = v170;
                    if ( (unsigned int)v169 >= a2->NumAllocations )
                    {
                      v30 = (char *)v306;
                      goto LABEL_280;
                    }
                  }
                }
                v30 = (char *)v306;
              }
              else
              {
LABEL_280:
                v77 = v307;
              }
              v320 = *(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL);
              if ( !*(_BYTE *)(v320 + 209) || v305 )
                goto LABEL_348;
              HostProcess = DXGPROCESS::GetHostProcess(*((DXGPROCESS **)v17 + 5));
              if ( !HostProcess )
              {
                v181 = WdLogNewEntry5_WdError(v180, v179);
                *(_QWORD *)(v181 + 24) = -1073741823LL;
                WdLogEvent5_WdError(v181);
                LODWORD(v52) = -1073741823;
                goto LABEL_405;
              }
              v341 = 0LL;
              if ( !DXGDEVICE::UmdManagesResidency(v17)
                || !v323
                || (v184 = *((_DWORD *)v323 + 4) - 1, v312 = 1, v184 > 2) )
              {
                v312 = 0;
              }
              v185 = a2->Flags;
              if ( (*(_BYTE *)&v185 & 2) != 0 )
                v186 = *(const void **)(*((_QWORD *)v53 + 7) + 104LL);
              else
                v186 = 0LL;
              v187 = Src;
              if ( v304 )
              {
                v188 = v315;
                if ( (*(_DWORD *)&v185 & 0x10000) == 0 )
                  goto LABEL_298;
              }
              else
              {
                v187 = a2->pStandardAllocation;
              }
              v188 = v316;
LABEL_298:
              if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
                v189 = *((_DWORD *)v53 + 5);
              else
                v189 = 0;
              v192 = (int)DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateAllocation(
                            (DXG_GUEST_VIRTUALGPU_VMBUS *)(v320 + 4240),
                            HostProcess,
                            *((_DWORD *)v17 + 110),
                            v189,
                            a2,
                            (struct _D3DDDI_ALLOCATIONINFO2 *)v30,
                            v188,
                            v187,
                            v186,
                            v304,
                            v312,
                            &v341);
              if ( !v341 )
              {
                v193 = WdLogNewEntry5_WdError(v191, v190);
                *(_QWORD *)(v193 + 24) = v192;
                WdLogEvent5_WdError(v193);
                LODWORD(v52) = v192;
LABEL_404:
                v77 = v307;
                goto LABEL_405;
              }
              v76 = (ULONG64)v341;
              v324 = v341;
              if ( !v53 )
                goto LABEL_312;
              *((_DWORD *)v53 + 5) = *((_DWORD *)v341 + 1);
              v194 = (unsigned int)a2->Flags;
              if ( (v194 & 2) == 0 )
                goto LABEL_312;
              v195 = *(_DWORD *)(v76 + 8);
              if ( (v194 & 0x40) != 0 )
              {
                if ( v195 )
                {
                  v196 = WdLogNewEntry5_WdAssertion(v194, v76);
                  *(_QWORD *)(v196 + 24) = 5687LL;
LABEL_310:
                  WdLogEvent5_WdAssertion(v196);
                  v76 = (ULONG64)v324;
                }
              }
              else if ( !v195 )
              {
                v196 = WdLogNewEntry5_WdAssertion(v194, v76);
                *(_QWORD *)(v196 + 24) = 5691LL;
                goto LABEL_310;
              }
              *(_DWORD *)(*((_QWORD *)v53 + 7) + 28LL) = *(_DWORD *)(v76 + 8);
LABEL_312:
              v329 = 0LL;
              v343 = 0LL;
              if ( (*(_DWORD *)&a2->Flags & 2) != 0 && v53 )
              {
                v329 = *(__int64 **)(*((_QWORD *)v53 + 7) + 136LL);
                v343 = v329;
              }
              v197 = v307;
              v198 = v307;
              v199 = 0;
              if ( a2->NumAllocations )
              {
                v200 = v324;
                do
                {
                  v201 = &v200[72 * v199];
                  *((_DWORD *)v198 + 24) = *((_DWORD *)v201 + 4);
                  *((_DWORD *)v198 + 25) = *((_DWORD *)v201 + 4);
                  v202 = a2->Flags;
                  if ( (*(_BYTE *)&v202 & 2) != 0 && (*(_DWORD *)&v202 & 0x20020) != 0 )
                    *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v198 + 5) + 56LL) + 200LL) = *((_DWORD *)v201 + 7);
                  else
                    *((_DWORD *)v198 + 32) = *((_DWORD *)v201 + 7);
                  *((_DWORD *)v198 + 33) = *((_DWORD *)v200 + 3);
                  if ( v200[12] & 1 | ((v200[12] & 2) != 0) )
                    *((_QWORD *)v198 + 14) = *(_QWORD *)&v30[96 * v199 + 8];
                  *(_DWORD *)(*((_QWORD *)v198 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v198 + 6) + 4LL) ^ *((_DWORD *)v201 + 6)) & 1;
                  *(_DWORD *)(*((_QWORD *)v198 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v198 + 6) + 4LL) ^ *((_DWORD *)v201 + 6)) & 2;
                  *(_DWORD *)(*((_QWORD *)v198 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v198 + 6) + 4LL) ^ *((_DWORD *)v201 + 6)) & 4;
                  *(_DWORD *)(*((_QWORD *)v198 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v198 + 6) + 4LL) ^ *((_DWORD *)v201 + 6)) & 8;
                  *(_DWORD *)(*((_QWORD *)v198 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v198 + 6) + 4LL) ^ *((_DWORD *)v201 + 6)) & 0x20;
                  *(_DWORD *)(*((_QWORD *)v198 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v198 + 6) + 4LL) ^ *((_DWORD *)v201 + 6)) & 0x800;
                  *(_DWORD *)(*((_QWORD *)v198 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v198 + 6) + 4LL) ^ *((_DWORD *)v201 + 6)) & 0x1000;
                  *(_DWORD *)(*((_QWORD *)v198 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v198 + 6) + 4LL) ^ *((_DWORD *)v201 + 6)) & 0x2000;
                  *(_DWORD *)(*((_QWORD *)v198 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v198 + 6) + 4LL) ^ *((_DWORD *)v201 + 6)) & 0x4000;
                  *(_DWORD *)(*((_QWORD *)v198 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v198 + 6) + 4LL) ^ *((_DWORD *)v201 + 6)) & 0x40000;
                  *(_DWORD *)(*((_QWORD *)v198 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v198 + 6) + 4LL) ^ *((_DWORD *)v201 + 6)) & 0x80000;
                  *(_DWORD *)(*((_QWORD *)v198 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v198 + 6) + 4LL) ^ *((_DWORD *)v201 + 6)) & 0x100000;
                  *(_DWORD *)(*((_QWORD *)v198 + 6) + 4LL) |= 0x20000u;
                  if ( (*(_DWORD *)&v30[96 * v199 + 32] & 1) != 0 )
                  {
                    *(_DWORD *)(*((_QWORD *)v198 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v198 + 6) + 4LL) ^ (*(_DWORD *)&v30[96 * v199 + 28] << 6)) & 0x3C0;
                    if ( *((_QWORD *)v17 + 231) != *(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL) )
                      *(_DWORD *)(*((_QWORD *)v198 + 6) + 4LL) |= 4u;
                  }
                  ++v199;
                  v198 = (struct DXGALLOCATION *)*((_QWORD *)v198 + 8);
                }
                while ( v199 < a2->NumAllocations );
                v27 = 0;
                v76 = (ULONG64)v324;
                v197 = v307;
              }
              if ( (int)v192 < 0 )
              {
                LODWORD(v52) = v192;
                goto LABEL_404;
              }
              v203 = v197;
              v335 = v197;
              v204 = 0;
              while ( 1 )
              {
                HostProcess = v204;
                if ( v204 >= a2->NumAllocations )
                  break;
                v205 = v204;
                v206 = *(_DWORD *)(v76 + 72LL * v204 + 32);
                v207 = a2->Flags;
                if ( (*(_DWORD *)&v207 & 0x10000) != 0 )
                {
                  v320 = 96LL * v204;
                  v208 = (*(_BYTE *)&v207 & 0x20) == 0;
                  v209 = *(struct _DXGK_ALLOCATIONINFO **)&v349[v320 + 8];
                  if ( v208 )
                  {
                    v353 = 0LL;
                    v213 = ObReferenceObjectByHandle(v209, 0x20000u, MmSectionObjectType, v304, &v353, 0LL);
                    v52 = v213;
                    if ( v213 < 0 )
                    {
                      v216 = WdLogNewEntry5_WdError(v215, v214);
                      v183 = v306;
                      *(_QWORD *)(v216 + 24) = *(_QWORD *)((char *)v306 + v320 + 8);
                      *(_QWORD *)(v216 + 32) = v52;
                      WdLogEvent5_WdError(v216);
                      v77 = v307;
                      goto LABEL_406;
                    }
                    v320 = (unsigned __int64)&v314[v205];
                    v217 = v353;
                    v218 = ProcessSectionAttributes(v353, (struct _DXGK_ALLOCATIONINFO *)v320);
                    v52 = v218;
                    if ( v218 < 0 )
                    {
                      v221 = (_QWORD *)WdLogNewEntry5_WdError(v220, v219);
                      v221[3] = v17;
                      v221[4] = v52;
                      v221[5] = 5830LL;
                      WdLogEvent5_WdError(v221);
                      ObfDereferenceObject(v217);
                      goto LABEL_404;
                    }
                    v222 = *(_QWORD *)(*((_QWORD *)v203 + 5) + 56LL);
                    *(_DWORD *)(v222 + 12) |= 0x400u;
                    v223 = *(_DWORD *)(v222 + 12);
                    *(_QWORD *)(v222 + 192) = v217;
                    v224 = (struct _DXGK_ALLOCATIONINFO *)v320;
                    *(_DWORD *)(v222 + 204) = *(_DWORD *)(v320 + 12);
                    *(_DWORD *)(v222 + 12) = v223 ^ ((unsigned __int16)v223 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)&v224->Flags.0 << 9)) & 0x800;
                  }
                  else
                  {
                    v320 = *(_QWORD *)&v349[v320 + 8];
                    if ( (*((_BYTE *)v17 + 1869) & 1) == 0 )
                    {
                      LODWORD(v52) = ProcessSysMemAttributes(v209, v206, &v314[v204]);
                      if ( (v52 & 0x80000000) != 0LL )
                        goto LABEL_404;
                      v209 = (struct _DXGK_ALLOCATIONINFO *)v320;
                    }
                    if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
                    {
                      v210 = *(_QWORD *)(*((_QWORD *)v203 + 5) + 56LL);
                      *(_DWORD *)(v210 + 12) |= 0x200u;
                      v211 = *(_DWORD *)(v210 + 12);
                      *(_QWORD *)(v210 + 192) = v209;
                      v212 = &v314[v205];
                      *(_DWORD *)(v210 + 204) = v212->Alignment;
                      *(_DWORD *)(v210 + 12) = v211 ^ ((unsigned __int16)v211 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)&v212->Flags.0 << 9)) & 0x800;
                    }
                  }
                }
                v225 = HostProcess;
                v320 = HostProcess;
                v30 = (char *)v306;
                v226 = (struct COREDEVICEACCESS *)&v306[24 * HostProcess];
                v338 = v226;
                if ( (*((_DWORD *)v226 + 8) & 1) != 0 )
                {
                  v342 = 0LL;
                  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v348, v203);
                  DXGALLOCATIONREFERENCE::MoveAssign(&v342, v348);
                  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v348);
                  v227 = *((_DWORD *)v17 + 110);
                  Current = DXGPROCESS::GetCurrent();
                  Resident = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMakeResident(
                               (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL) + 4240LL),
                               *((_DWORD *)Current + 106),
                               v227,
                               0,
                               (struct D3DDDI_MAKERESIDENT_FLAGS)3,
                               1u,
                               (const struct DXGALLOCATIONREFERENCE *)&v342,
                               0LL,
                               0LL);
                  v52 = Resident;
                  if ( Resident < 0 )
                  {
                    v232 = WdLogNewEntry5_WdError(v231, v230);
                    *(_QWORD *)(v232 + 24) = v52;
                    WdLogEvent5_WdError(v232);
                    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v342);
                    break;
                  }
                  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v342);
                  v225 = v320;
                  v226 = v338;
                }
                *(_QWORD *)(*((_QWORD *)v203 + 6) + 16LL) = *((_QWORD *)v203 + 6);
                v239 = (_OWORD *)*((_QWORD *)v203 + 6);
                v240 = &v324[72 * v225];
                *((_QWORD *)v203 + 15) = *((_QWORD *)v240 + 4);
                v239[4] = *(_OWORD *)(v240 + 40);
                v239[5] = *(_OWORD *)(v240 + 56);
                v239[6] = *(_OWORD *)(v240 + 72);
                v241 = *((unsigned int *)v226 + 6);
                if ( !v304 || (*(_DWORD *)&a2->Flags & 0x10000) != 0 )
                {
                  v242 = *((unsigned int *)v226 + 6);
                  v326 = (struct _DXGSHAREDALLOCOBJECT *)(8 * v225);
                  v245 = v241;
                  v243 = *(void **)((char *)v316 + (_QWORD)v326);
                  v244 = (char *)*((_QWORD *)v226 + 2);
                }
                else
                {
                  v242 = (unsigned int)v241;
                  v326 = (struct _DXGSHAREDALLOCOBJECT *)(8 * v225);
                  v243 = v315[v225];
                  v244 = (char *)*((_QWORD *)v226 + 2);
                  if ( (unsigned __int64)&v244[v242] > MmUserProbeAddress || &v244[v242] <= v244 )
                    *(_BYTE *)MmUserProbeAddress = 0;
                  v245 = v242;
                }
                memmove(v244, v243, v245);
                if ( v329 )
                {
                  if ( !v304 || (v246 = v315, (*(_DWORD *)&a2->Flags & 0x10000) != 0) )
                    v246 = v316;
                  memmove((void *)*(v329 - 2), *(const void **)((char *)v246 + (_QWORD)v326), v242);
                  v329 = (__int64 *)*v329;
                  v343 = v329;
                }
                v30 = (char *)v306;
                v76 = (ULONG64)v324;
                v204 = HostProcess + 1;
                v203 = (struct DXGALLOCATION *)*((_QWORD *)v203 + 8);
                v335 = v203;
              }
              operator delete[](v341);
              if ( (v52 & 0x80000000) != 0LL )
                goto LABEL_404;
LABEL_348:
              v233 = a2->Flags;
              if ( (*(_WORD *)&v233 & 0x800) != 0 )
              {
                memset(&v359.Width, 0, 40);
                v77 = v307;
                v359.hAllocation = *(HANDLE *)(*((_QWORD *)v307 + 6) + 16LL);
                v234 = ADAPTER_RENDER::DdiDescribeAllocation(*((ADAPTER_RENDER **)v17 + 2), &v359);
                v52 = v234;
                if ( v234 < 0 )
                {
                  v238 = (_QWORD *)WdLogNewEntry5_WdWarning(v236, v235, v237);
                  v238[3] = v52;
                  v238[4] = v17;
                  v238[5] = *((unsigned int *)v307 + 4);
                  v238[6] = v307;
                  WdLogEvent5_WdWarning(v238);
                  goto LABEL_405;
                }
                if ( v359.Format == D3DDDIFMT_UNKNOWN && v359.Height != 1 )
                {
                  v247 = (_QWORD *)WdLogNewEntry5_WdWarning(v236, v235, v237);
                  v247[3] = -1073741811LL;
                  v247[4] = v17;
                  v247[5] = v359.Height;
                  WdLogEvent5_WdWarning(v247);
                  LODWORD(v52) = -1073741811;
                  goto LABEL_405;
                }
                v248 = *((_QWORD *)v307 + 5);
                v249 = *(unsigned int *)(*(_QWORD *)(v248 + 56) + 12LL);
                if ( (v249 & 0x20) != 0 )
                {
                  v251 = v307;
                }
                else
                {
                  v250 = WdLogNewEntry5_WdAssertion(v249, v235);
                  *(_QWORD *)(v250 + 24) = 5957LL;
                  WdLogEvent5_WdAssertion(v250);
                  v251 = v307;
                  v248 = *((_QWORD *)v307 + 5);
                }
                v252 = *(_QWORD *)(v248 + 56);
                *(_DWORD *)(v252 + 208) = v359.Width;
                *(_DWORD *)(v252 + 212) = v359.Height;
                *(_DWORD *)(v252 + 216) = v359.Format;
                v253 = v327->Flags;
                if ( (*((_BYTE *)v17 + 1869) & 1) != 0 )
                {
                  if ( (*(_DWORD *)&v253 & 0x20000) != 0 )
                  {
                    v254 = (void *)*((_QWORD *)v30 + 1);
                    v336 = 0LL;
                    v255 = ObReferenceObjectByHandle(v254, 0x20000u, MmSectionObjectType, v304, &v336, 0LL);
                    v257 = v336;
                    *(_QWORD *)(v252 + 192) = v336;
                    v52 = v255;
                    if ( v255 < 0 )
                    {
                      v258 = WdLogNewEntry5_WdError(v257, v256);
                      *(_QWORD *)(v258 + 24) = *((_QWORD *)v30 + 1);
                      *(_QWORD *)(v258 + 32) = v52;
                      WdLogEvent5_WdError(v258);
                      goto LABEL_404;
                    }
                    *(_DWORD *)(v252 + 12) |= 0x400u;
                  }
                }
                else
                {
                  if ( (*(_BYTE *)&v253 & 0x20) == 0 )
                  {
                    *(_QWORD *)(v252 + 192) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v17 + 2) + 640LL) + 8LL)
                                                                                        + 688LL))(
                                                *(_QWORD *)(*((_QWORD *)v17 + 2) + 648LL),
                                                *((_QWORD *)v251 + 3));
                    *(_DWORD *)(v252 + 12) |= 0x400u;
                  }
                  *(_QWORD *)(v252 + 224) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v17 + 2) + 640LL)
                                                                                                  + 8LL)
                                                                                      + 760LL))(
                                              *(_QWORD *)(*((_QWORD *)v17 + 2) + 648LL),
                                              *((_QWORD *)v307 + 3));
                }
                v259 = v325;
                *(_DWORD *)(v252 + 232) = v325;
                if ( v259 != -1 )
                {
                  *(_DWORD *)(v252 + 12) |= 0x40u;
                  *(_DWORD *)(v252 + 12) ^= ((unsigned __int8)*(_DWORD *)(v252 + 12) ^ (unsigned __int8)(*(_DWORD *)&a2->Flags >> 3)) & 0x80;
                }
              }
              else if ( (*(_WORD *)&v233 & 0x1000) != 0 )
              {
                v77 = v307;
                (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v17 + 2) + 640LL)
                                                                           + 8LL)
                                                               + 768LL))(
                  *(_QWORD *)(*((_QWORD *)v17 + 2) + 648LL),
                  *((_QWORD *)v307 + 3),
                  *((_QWORD *)v323 + 43));
LABEL_382:
                v76 = *((_QWORD *)v17 + 2);
                v336 = (PVOID)v76;
                if ( (*(_DWORD *)(*(_QWORD *)(v76 + 16) + 2060LL) & 0x40) == 0 )
                  goto LABEL_405;
                v260 = v323;
                if ( !v323 || (*(_DWORD *)v323 & 0x200) != 0 )
                  goto LABEL_405;
                memset(&v363, 0, 56);
                memset(&v363.DriverProtection, 0, 40);
                v363.Protection.Value = 1LL;
                v261 = 0;
                if ( !a2->NumAllocations )
                  goto LABEL_404;
                while ( 1 )
                {
                  v262 = (*((_DWORD *)v77 + 18) >> 12) & 0x3F;
                  if ( *((_DWORD *)v260 + 4) == 4 )
                  {
                    v263 = *(_DWORD *)(*((_QWORD *)v260 + 3) + 12LL);
                    if ( ((v263 - 1) & 0xFFFFFFFC) != 0 || v263 == 2 )
                    {
                      if ( DXGADAPTER::ReplicateGdiContent(*(DXGADAPTER **)(*((_QWORD *)v17 + 2) + 16LL)) )
                        v262 = -1;
                      v76 = (ULONG64)v336;
                    }
                  }
                  if ( v310 )
                  {
                    v264 = DXGPROCESS::GetCurrent();
                    v265 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMapGpuVirtualAddress(
                             (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL) + 4240LL),
                             *((_DWORD *)v264 + 106),
                             v17,
                             0,
                             *((_DWORD *)v77 + 24),
                             &v363);
                  }
                  else
                  {
                    LOBYTE(Object) = 0;
                    v265 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, D3DDDI_MAPGPUVIRTUALADDRESS *, int, int))(*(_QWORD *)(*(_QWORD *)(v76 + 640) + 8LL) + 800LL))(
                             *(_QWORD *)(v76 + 648),
                             0LL,
                             *((_QWORD *)v77 + 3),
                             &v363,
                             Object,
                             v262);
                  }
                  LODWORD(v52) = v265;
                  if ( v265 < 0 )
                    break;
                  v269 = DXGADAPTER::ReplicateGdiContent(*(DXGADAPTER **)(*((_QWORD *)v17 + 2) + 16LL));
                  BaseAddress = v363.BaseAddress;
                  if ( v269 )
                    BaseAddress = v363.VirtualAddress;
                  v363.BaseAddress = BaseAddress;
                  v363.VirtualAddress = 0LL;
                  ++v261;
                  v77 = (struct DXGALLOCATION *)*((_QWORD *)v77 + 8);
                  v76 = (ULONG64)v336;
                  v260 = v323;
                  if ( v261 >= a2->NumAllocations )
                    goto LABEL_404;
                }
                v156 = (_QWORD *)WdLogNewEntry5_WdWarning(v267, v266, v268);
                v156[3] = (int)v52;
                goto LABEL_403;
              }
              v77 = v307;
              goto LABEL_382;
            }
            v121 = *((_QWORD *)v17 + 2);
            v122 = *(_QWORD *)(v121 + 648);
            v76 = *(_QWORD *)(v121 + 640);
            v338 = v307;
            v123 = 0;
            if ( a2->NumAllocations )
            {
              v124 = v338;
              v125 = v122;
              v126 = v76;
              v127 = v324;
              do
              {
                v128 = *(_DWORD *)&a2->Flags >> 5;
                LOBYTE(v128) = (*(_DWORD *)&a2->Flags & 0x20) != 0;
                *(_QWORD *)&v127[8 * v123] = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(v126 + 8)
                                                                                                 + 632LL))(
                                               v125,
                                               *((_QWORD *)v124 + 3),
                                               v128);
                v124 = (struct COREDEVICEACCESS *)*((_QWORD *)v124 + 8);
                ++v123;
              }
              while ( v123 < a2->NumAllocations );
              v17 = (DXGDEVICE *)v320;
              v27 = 0;
              v53 = v335;
              v30 = (char *)v306;
            }
LABEL_198:
            v77 = v307;
            goto LABEL_199;
          }
          Value |= 0x800004u;
        }
        v117->Flags.Value = Value;
        goto LABEL_190;
      }
    }
    else
    {
      if ( !v53 )
        goto LABEL_178;
      v114 = *((_QWORD *)v53 + 7);
      if ( !v114 || (*(_BYTE *)(v114 + 12) & 0x60) != 0x60 )
        goto LABEL_178;
    }
    *((_DWORD *)v53 + 1) |= 8u;
    goto LABEL_178;
  }
  v58 = (unsigned int)a2->Flags;
  while ( 1 )
  {
    v59 = v57;
    if ( (v58 & 0x800) != 0 )
    {
      v60 = 96LL * v57;
      Size = *(unsigned int *)&v30[v60 + 32];
      v58 = (unsigned int)Size;
      if ( (Size & 1) != 0 )
      {
        v325 = *(_DWORD *)&v30[v60 + 28];
        v322 = v325;
        if ( !*((_QWORD *)v17 + 231) )
        {
          v58 = (unsigned int)Size & 0xFFFFFFFE;
          *(_DWORD *)&v30[v60 + 32] = v58;
        }
      }
      if ( (v58 & 2) != 0 )
      {
        v75 = WdLogNewEntry5_WdWarning(v58, v57, Size);
        *(_QWORD *)(v75 + 24) = v17;
        *(_QWORD *)(v75 + 32) = -1073741811LL;
        WdLogEvent5_WdWarning(v75);
        LODWORD(v52) = -1073741811;
        goto LABEL_107;
      }
    }
    v61 = &v30[96 * v57];
    if ( (*((_DWORD *)v61 + 8) & 1) != 0 )
    {
      v62 = (__int64 *)*((_QWORD *)v17 + 231);
      v329 = v62;
      if ( !v62 )
        goto LABEL_110;
      v63 = v62[337];
      if ( !v63 || !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v63 + 16)) )
      {
        v64 = WdLogNewEntry5_WdAssertion(v63, v59);
        *(_QWORD *)(v64 + 24) = 4892LL;
        WdLogEvent5_WdAssertion(v64);
      }
      v58 = *(unsigned int *)(v329[337] + 80);
      v65 = *((_DWORD *)v17 + 464);
      if ( (_DWORD)v58 != v65 )
      {
        v66 = WdLogNewEntry5_WdAssertion(v58, v59);
        *(_QWORD *)(v66 + 24) = 4898LL;
        WdLogEvent5_WdAssertion(v66);
        v65 = *((_DWORD *)v17 + 464);
      }
      if ( *((_DWORD *)v61 + 7) >= v65 )
      {
LABEL_110:
        v79 = (_QWORD *)WdLogNewEntry5_WdWarning(v58, v59, Size);
        v79[3] = v17;
        v79[4] = *(unsigned int *)&v30[96 * HostProcess + 28];
        v79[5] = -1073741811LL;
        WdLogEvent5_WdWarning(v79);
        LODWORD(v52) = -1073741811;
        v77 = 0LL;
        goto LABEL_405;
      }
      if ( !*((_DWORD *)v17 + 108)
        && !v305
        && (*((_BYTE *)DXGPROCESS::GetCurrent() + 347) & 0x20) == 0
        && !ADAPTER_DISPLAY::IsVidPnSourceOwner((DXGADAPTER **)v329[337], v17, *((_DWORD *)v61 + 7)) )
      {
        v74 = (_QWORD *)WdLogNewEntry5_WdWarning(v58, v59, Size);
        LODWORD(v52) = -1071775744;
        v74[3] = -1071775744LL;
        v74[4] = v17;
        v78 = HostProcess;
        v74[5] = *(unsigned int *)&v30[96 * HostProcess + 28];
        v74[6] = v78;
        goto LABEL_109;
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
      LODWORD(v52) = -1073741811;
      v77 = 0LL;
      goto LABEL_405;
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
        LODWORD(v52) = -1073741811;
        v77 = 0LL;
        goto LABEL_405;
      }
      v69 = *((_QWORD *)v61 + 1);
      Size = a2->pStandardAllocation->ExistingHeapData.Size;
      v335 = (struct DXGRESOURCE *)Size;
      if ( (v58 & 0x20) != 0 && v69 != (v69 & 0xFFFFFFFFFFFFF000uLL) )
        break;
      if ( Size != (Size & 0xFFFFFFFFFFFFF000uLL) )
        break;
    }
    HostProcess = ++v57;
    if ( v57 >= a2->NumAllocations )
      goto LABEL_102;
  }
  v82 = WdLogNewEntry5_WdError(v58, v68);
  *(_QWORD *)(v82 + 24) = v69;
  *(_QWORD *)(v82 + 32) = v335;
  WdLogEvent5_WdError(v82);
  LODWORD(v52) = -1073741811;
  v77 = 0LL;
LABEL_405:
  v183 = v306;
LABEL_406:
  DXGAUTOMUTEX::ReleaseIfAcquired((DXGAUTOMUTEX *)v358, v76);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v360);
  if ( (v52 & 0x80000000) == 0LL )
  {
    if ( v308[0] )
    {
      v271 = *((_QWORD *)v17 + 5);
      v340 = (struct _D3DKMT_CREATEALLOCATION *)v271;
      v272 = v271 + 208;
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v271 + 208, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v275 = *(_DWORD *)(v271 + 232);
          if ( v275 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q_EtwWriteTransfer(v273, &EventBlockThread, v274, v275);
        }
        ExAcquirePushLockExclusiveEx(v271 + 208, 0LL);
      }
      *(_QWORD *)(v271 + 216) = KeGetCurrentThread();
      v276 = *((_DWORD *)v53 + 4);
      v277 = (v276 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v277 < *(_DWORD *)(v271 + 256) )
      {
        v278 = *(_QWORD *)(v271 + 240);
        if ( ((v276 >> 25) & 0x60) == (*(_BYTE *)(v278 + 16 * v277 + 8) & 0x60)
          && (*(_DWORD *)(v278 + 16 * v277 + 8) & 0x1F) != 0 )
        {
          v279 = 2LL * ((v276 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v278 + 16LL * ((v276 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
          {
            v280 = WdLogNewEntry5_WdAssertion((v276 >> 25) & 0x60, v278);
            *(_QWORD *)(v280 + 24) = 217LL;
            WdLogEvent5_WdAssertion(v280);
            v278 = *(_QWORD *)&v340[3].PrivateRuntimeDataSize;
          }
          *(_DWORD *)(v278 + 8 * v279 + 8) &= ~0x2000u;
        }
      }
      *(_QWORD *)(v272 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v272, 0LL);
      KeLeaveCriticalRegion();
    }
    goto LABEL_467;
  }
  if ( v77 )
  {
    v281 = 0LL;
    v322 = 0;
    if ( a2->NumAllocations )
    {
      do
      {
        v282 = *((_QWORD *)v77 + 6);
        if ( *(_QWORD *)(v282 + 8) && !v305 )
        {
          if ( (v283 = *(_DWORD *)(v282 + 4), (v283 & 1) != 0) && !*((_DWORD *)v17 + 108) || (v283 & 2) != 0 )
          {
            if ( (v283 & 0x10) != 0 )
            {
              v284 = WdLogNewEntry5_WdAssertion(v281, v282);
              *(_QWORD *)(v284 + 24) = 6147LL;
              WdLogEvent5_WdAssertion(v284);
              v282 = *((_QWORD *)v77 + 6);
            }
            (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v17 + 2) + 640LL) + 8LL) + 200LL))(
              *(_QWORD *)(*((_QWORD *)v17 + 2) + 648LL),
              *(_QWORD *)(v282 + 8));
            *(_DWORD *)(*((_QWORD *)v77 + 6) + 4LL) |= 0x10u;
            LODWORD(v281) = v322;
          }
        }
        v281 = (unsigned int)(v281 + 1);
        v322 = v281;
        v77 = (struct DXGALLOCATION *)*((_QWORD *)v77 + 8);
      }
      while ( (unsigned int)v281 < a2->NumAllocations );
      v183 = v306;
    }
    v77 = v307;
  }
  if ( v308[0] )
  {
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v337, 0LL);
    DXGRESOURCEREFERENCE::MoveAssign(&v339, &v337);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v337);
    DXGDEVICE::RemoveResourceFromDeviceList(v17, v53);
  }
  else
  {
    if ( !v77 )
      goto LABEL_467;
    if ( v313 )
      DXGDEVICE::RemoveAllocationsWithoutDestroy(v17, v53, v77, a2->NumAllocations);
    if ( !v53 || *((_QWORD *)v53 + 7) )
    {
      v285 = v77;
      do
      {
        v286 = v285;
        v340 = (struct _D3DKMT_CREATEALLOCATION *)*((_QWORD *)v285 + 8);
        *((_QWORD *)v285 + 7) = 0LL;
        *((_QWORD *)v285 + 8) = 0LL;
        if ( v53 )
        {
          v287 = *((_QWORD *)v53 + 7);
          if ( v287 )
          {
            if ( *(_QWORD *)(*((_QWORD *)v285 + 6) + 48LL) )
            {
              DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v287 + 32));
              --*(_DWORD *)(*((_QWORD *)v53 + 7) + 132LL);
              v288 = *((_QWORD *)v286 + 6) + 48LL;
              v289 = *(_QWORD *)v288;
              v290 = *(_QWORD **)(*((_QWORD *)v286 + 6) + 56LL);
              if ( *(_QWORD *)(*(_QWORD *)v288 + 8LL) != v288 || *v290 != v288 )
                __fastfail(3u);
              *v290 = v289;
              *(_QWORD *)(v289 + 8) = v290;
              *(_QWORD *)(*((_QWORD *)v286 + 6) + 48LL) = 0LL;
              v291 = *((_QWORD *)v53 + 7) + 32LL;
              *(_QWORD *)(v291 + 8) = 0LL;
              ExReleasePushLockExclusiveEx(v291, 0LL);
              KeLeaveCriticalRegion();
            }
          }
        }
        DXGDEVICE::DestroyAllocations(v17, 0LL, 0, v286, 0LL, 0);
        v285 = (struct DXGALLOCATION *)v340;
      }
      while ( v340 );
      v77 = v307;
    }
    if ( !v53 )
      goto LABEL_467;
    v292 = *((_QWORD *)v53 + 7);
    if ( !v292 )
    {
      DXGDEVICE::DestroyAllocations(v17, v53, 0, v77, 0LL, 0);
      goto LABEL_467;
    }
    v293 = 0;
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v292 + 32));
    v294 = *((_DWORD *)v53 + 1);
    if ( (v294 & 0x10) == 0 )
    {
      *((_DWORD *)v53 + 1) = v294 | 0x10;
      v293 = 1;
    }
    v295 = *((_QWORD *)v53 + 7) + 32LL;
    *(_QWORD *)(v295 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v295, 0LL);
    KeLeaveCriticalRegion();
    if ( !v293 )
      goto LABEL_467;
    DXGDEVICE::RemoveResourceFromDeviceList(v17, v53);
    v337 = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v362, v337);
    DXGPROCESS::GetResourceUnsafe((__int64)v337, (DXGRESOURCEREFERENCE *)&v351, *((_DWORD *)v53 + 4));
    if ( v351 )
    {
      v296 = *(_DWORD *)(v351 + 16);
      v297 = (v296 >> 6) & 0xFFFFFF;
      if ( v297 < *((_DWORD *)v337 + 64) )
      {
        v298 = v337[30];
        v299 = *((_DWORD *)v298 + 4 * v297 + 2);
        if ( ((v296 >> 25) & 0x60) == (v299 & 0x60) && (v299 & 0x2000) == 0 && (v299 & 0x1F) != 0 )
          *((_DWORD *)v298 + 4 * ((v296 >> 6) & 0xFFFFFF) + 2) |= 0x2000u;
      }
      DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v350, 0LL);
      DXGRESOURCEREFERENCE::MoveAssign(&v339, v350);
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v350);
    }
    else
    {
      v293 = 0;
    }
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v351);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v362);
    if ( !v293 )
      goto LABEL_467;
  }
  DXGDEVICE::DestroyResource(v17, v53, 0LL, 0);
LABEL_467:
  v300 = v316;
  if ( a2->NumAllocations )
  {
    do
      operator delete[](v300[v27++]);
    while ( v27 < a2->NumAllocations );
  }
  operator delete[](Src);
  if ( a2->NumAllocations > 5 )
  {
    operator delete[](v183);
    operator delete[](v314);
    operator delete[](v333);
    operator delete[](v300);
    operator delete[](v315);
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v360);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v358);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v339);
  v301 = ListEntry;
  if ( ListEntry )
  {
    v302 = v356 + 1472;
    ++*(_DWORD *)(v356 + 1500);
    if ( ExQueryDepthSList((PSLIST_HEADER)v302) < *(_WORD *)(v302 + 16) )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v302, v301);
    }
    else
    {
      ++*(_DWORD *)(v302 + 32);
      (*(void (__fastcall **)(struct _SLIST_ENTRY *))(v302 + 56))(v301);
    }
  }
  return (unsigned int)v52;
}
