/*
 * XREFs of ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C0104C00
 * Callers:
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C0103720 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01187B0 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C011ECF4 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C0123F30 (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 * Callees:
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0008490 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C000A6F4 (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000A72C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000A788 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000A800 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C000A884 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000A89C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C000CD10 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C000D034 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000D050 (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000DB94 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ??0_MOCKDRIVERSTATE_PER_PLANE@@QEAA@XZ @ 0x1C001AF00 (--0_MOCKDRIVERSTATE_PER_PLANE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseIfAcquired@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0024C7C (-ReleaseIfAcquired@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@EPEAU_EPROCESS@@PEAU_DXGSHAREDALLOCOBJECT@@PEAVDXGRESOURCEREFERENCE@@PEAEPEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVDXGAUTOMUTEX@@PEAVDXGAUTOPUSHLOCK@@@Z @ 0x1C00D31F4 (-OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@E.c)
 *     ?DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00F0840 (-DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCA.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00F08D4 (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?CreateDriverAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAPEAX5PEAXPEBU_D3DKM_CREATESTANDARDALLOCATION@@HPEAU_D3DKMT_CREATESTANDARDALLOCATION@@@Z @ 0x1C00F35F0 (-CreateDriverAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINF.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FD6D0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00FEE50 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C010183C (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z @ 0x1C0103F30 (-CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C0104280 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?OpenAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAVDXGALLOCATION@@PEAU_DXGK_OPENALLOCATIONINFO@@PEAPEAX4PEAXEEIPEAIPEA_K@Z @ 0x1C01043C0 (-OpenAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAV.c)
 *     ?CreateVidMmAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@EPEAVCOREDEVICEACCESS@@@Z @ 0x1C0104760 (-CreateVidMmAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C010C6A0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0124724 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0140940 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ @ 0x1C0149520 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ.c)
 *     ?ReplicateGdiContent@DXGADAPTER@@QEBAEXZ @ 0x1C014D7E4 (-ReplicateGdiContent@DXGADAPTER@@QEBAEXZ.c)
 *     ?AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z @ 0x1C0157234 (-AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z.c)
 *     ?AppendAllocationListToResourceOrDevice@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@1@Z @ 0x1C015B410 (-AppendAllocationListToResourceOrDevice@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@1@Z.c)
 *     ?ProcessSectionAttributes@@YAJPEAXPEAU_DXGK_ALLOCATIONINFO@@@Z @ 0x1C0224288 (-ProcessSectionAttributes@@YAJPEAXPEAU_DXGK_ALLOCATIONINFO@@@Z.c)
 *     ?ProcessSysMemAttributes@@YAJPEAXIPEAU_DXGK_ALLOCATIONINFO@@@Z @ 0x1C02243B8 (-ProcessSysMemAttributes@@YAJPEAXIPEAU_DXGK_ALLOCATIONINFO@@@Z.c)
 *     ?VmBusSendCreateAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIPEBU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAPEAXPEBX3EEPEAPEAE@Z @ 0x1C024244C (-VmBusSendCreateAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIPEBU_D3DKMT_CREATEALLOCATION@@PEA.c)
 *     ?VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K2@Z @ 0x1C0245678 (-VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGA.c)
 *     ?VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAPGPUVIRTUALADDRESS@@@Z @ 0x1C0245860 (-VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAP.c)
 *     ?RemoveAllocationsWithoutDestroy@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@I@Z @ 0x1C0251D84 (-RemoveAllocationsWithoutDestroy@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@I@Z.c)
 *     ?RemoveResourceFromDeviceList@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C0251E78 (-RemoveResourceFromDeviceList@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C02809D4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXGDEVICE::CreateAllocation(
        DXGDEVICE *this,
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
        unsigned __int64 *a12,
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
  void **v27; // r13
  __int64 NumAllocations; // rax
  char *v29; // r12
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rdi
  int v32; // r15d
  SIZE_T v33; // rax
  SIZE_T v34; // rax
  SIZE_T v35; // rax
  void **v36; // rdi
  SIZE_T v37; // rax
  unsigned __int8 v38; // al
  SIZE_T v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  _QWORD *v43; // rax
  __int64 v44; // rdi
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rax
  UINT v50; // ecx
  unsigned __int64 v51; // rdi
  struct DXGRESOURCE *v52; // r13
  size_t v53; // r8
  D3DDDI_ALLOCATIONINFO *pAllocationInfo; // rdx
  SIZE_T v55; // r8
  UINT v56; // r10d
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // r9
  char *v60; // r15
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rax
  unsigned int v64; // eax
  __int64 v65; // rax
  int v66; // eax
  __int64 v67; // rdx
  __int64 v68; // r15
  UINT i; // eax
  __int64 v70; // r15
  __int64 v71; // rdx
  SIZE_T v72; // rcx
  _QWORD *v73; // rax
  __int64 v74; // rax
  ULONG64 v75; // rdx
  struct DXGALLOCATION *v76; // r15
  __int64 v77; // rdx
  _QWORD *v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  char *v82; // rdx
  __int64 v83; // rcx
  char *v84; // r9
  size_t v85; // r8
  char *v86; // rdx
  unsigned __int8 v87; // r15
  UINT PrivateDriverDataSize; // eax
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  PVOID v92; // r9
  size_t v93; // r8
  D3DKMT_CREATESTANDARDALLOCATION *pStandardAllocation; // rdx
  __int64 v95; // rcx
  _QWORD *v96; // rax
  UINT v97; // edx
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
  UINT v122; // r15d
  struct DXGALLOCATION *v123; // r12
  __int64 v124; // rsi
  __int64 v125; // r14
  unsigned __int64 *v126; // r13
  __int64 v127; // r8
  __int64 v128; // rax
  __int64 v129; // rdx
  __int64 v130; // rcx
  __int64 v131; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v133; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v135; // rax
  int v136; // eax
  __int64 v137; // rdx
  __int64 v138; // r8
  __int64 v139; // rcx
  __int64 v140; // rax
  __int64 v141; // rdx
  __int64 v142; // rax
  D3DKMT_HANDLE v143; // eax
  D3DKMT_CREATEALLOCATIONFLAGS v144; // eax
  D3DKMT_HANDLE v145; // ecx
  __int64 v146; // r8
  struct DXGALLOCATION *v147; // r15
  struct DXGALLOCATION *k; // r9
  UINT v149; // eax
  struct DXGALLOCATION *v150; // r9
  __int64 v151; // rcx
  __int64 v152; // rdx
  __int64 v153; // r8
  __int64 v154; // rcx
  _QWORD *v155; // rax
  __int64 PrivateRuntimeDataSize; // rcx
  _QWORD *v157; // rax
  unsigned __int8 v158; // r15
  size_t v159; // r8
  char *pPrivateRuntimeData; // rdx
  void *v161; // r9
  UINT v162; // eax
  __int64 v163; // rcx
  __int64 v164; // rdx
  __int64 v165; // r8
  __int64 v166; // rcx
  struct _D3DKMT_CREATEALLOCATION *v167; // rdx
  const void *v168; // rdx
  __int64 v169; // rax
  struct DXGALLOCATION *v170; // rcx
  char *v171; // r15
  PVOID v172; // rax
  __int64 v173; // r8
  struct DXGALLOCATION *v174; // rdx
  __int64 v175; // rcx
  void *v176; // r9
  const void *v177; // rdx
  _QWORD *v178; // rax
  __int64 v179; // rdx
  __int64 v180; // rcx
  __int64 v181; // rax
  _QWORD *v182; // rax
  char v183; // r15
  D3DKMT_CREATEALLOCATIONFLAGS v184; // edx
  const void *v185; // r11
  const void *v186; // r10
  bool v187; // cf
  void **v188; // rdx
  unsigned int v189; // r9d
  __int64 v190; // rdx
  __int64 v191; // rcx
  __int64 v192; // r15
  __int64 v193; // rax
  __int64 v194; // rcx
  int v195; // eax
  __int64 v196; // rax
  struct _EX_RUNDOWN_REF *v197; // rax
  struct DXGALLOCATION *v198; // r8
  UINT v199; // r11d
  unsigned __int8 *v200; // r14
  unsigned __int8 *v201; // r9
  D3DKMT_CREATEALLOCATIONFLAGS v202; // eax
  struct _EX_RUNDOWN_REF *v203; // r15
  UINT v204; // eax
  __int64 v205; // r12
  unsigned int v206; // edx
  D3DKMT_CREATEALLOCATIONFLAGS v207; // ecx
  bool v208; // zf
  struct COREDEVICEACCESS *v209; // rcx
  __int64 v210; // r8
  int v211; // edx
  struct _DXGK_ALLOCATIONINFO *v212; // rcx
  NTSTATUS v213; // eax
  __int64 v214; // rdx
  __int64 v215; // rcx
  __int64 v216; // rax
  __int64 v217; // rcx
  PVOID v218; // r12
  int v219; // eax
  __int64 v220; // rdx
  __int64 v221; // rcx
  _QWORD *v222; // rax
  __int64 v223; // rsi
  __int64 v224; // r15
  __int64 v225; // rcx
  __int64 v226; // r8
  int v227; // r9d
  unsigned int v228; // r8d
  __int64 v229; // rax
  __int64 v230; // rdx
  __int64 v231; // rsi
  __int64 v232; // rax
  __int64 v233; // rdx
  int v234; // ecx
  struct COREDEVICEACCESS *v235; // r8
  struct COREDEVICEACCESS *v236; // r8
  unsigned int *v237; // r9
  __int64 v238; // rdx
  unsigned int v239; // edi
  struct DXGPROCESS *Current; // rax
  int Resident; // eax
  __int64 v242; // rdx
  __int64 v243; // rcx
  __int64 v244; // rax
  __int64 v245; // rdx
  D3DKMT_CREATEALLOCATIONFLAGS v246; // eax
  int v247; // eax
  __int64 v248; // rdx
  __int64 v249; // rcx
  __int64 v250; // r8
  _QWORD *v251; // rax
  _OWORD *Count; // rdx
  unsigned __int8 *v253; // rcx
  size_t v254; // rcx
  const void *v255; // rdx
  char *v256; // r10
  size_t v257; // r8
  char *v258; // rcx
  void **v259; // rax
  _QWORD *v260; // rax
  __int64 v261; // r15
  __int64 v262; // rcx
  __int64 v263; // rax
  struct DXGALLOCATION *v264; // rdx
  __int64 v265; // r15
  D3DKMT_CREATEALLOCATIONFLAGS v266; // ecx
  void *v267; // rcx
  NTSTATUS v268; // eax
  __int64 v269; // rdx
  PVOID v270; // rcx
  int v271; // ecx
  struct _D3DKM_CREATESTANDARDALLOCATION *v272; // rcx
  int v273; // edi
  int v274; // ecx
  struct DXGPROCESS *v275; // rax
  int v276; // eax
  __int64 v277; // rdx
  __int64 v278; // rcx
  __int64 v279; // r8
  unsigned __int8 v280; // al
  D3DGPU_VIRTUAL_ADDRESS BaseAddress; // rcx
  __int64 v282; // rax
  __int64 v283; // rcx
  __int64 v284; // rdx
  int v285; // eax
  __int64 v286; // rax
  struct DXGALLOCATION *v287; // rax
  struct DXGALLOCATION *v288; // r15
  __int64 v289; // rcx
  __int64 v290; // rax
  __int64 v291; // rdx
  _QWORD *v292; // rcx
  __int64 v293; // rcx
  __int64 v294; // rcx
  char v295; // r15
  int v296; // eax
  __int64 v297; // rcx
  UINT v298; // esi
  void **m; // r15
  __int64 v300; // rdx
  __int64 v301; // rdx
  struct DXGRESOURCE *v302; // rcx
  __int64 v303; // rdx
  __int64 v304; // rcx
  struct _KTHREAD *v305; // r15
  __int64 v306; // rax
  int CurrentProcessSessionId; // esi
  __int64 v308; // rdx
  __int64 v309; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rbx
  void *v312; // rax
  __int64 v313; // rsi
  __int64 v314; // rdx
  __int64 v315; // rcx
  __int64 v316; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v319; // rdx
  __int64 v320; // rcx
  __int64 *ThreadWin32Thread; // rax
  struct DXGTHREAD *ThreadProperty; // rbx
  struct _KTHREAD *v323; // r15
  __int64 v324; // rax
  int v325; // esi
  __int64 v326; // rdx
  __int64 v327; // rcx
  __int64 v328; // rax
  __int64 v329; // rbx
  void *v330; // rax
  __int64 v331; // rsi
  __int64 v332; // rdx
  __int64 v333; // rcx
  __int64 v334; // rax
  int v335; // ebx
  __int64 v336; // rax
  __int64 v337; // rdx
  __int64 v338; // rcx
  __int64 *v339; // rax
  int *DxgThread; // rbx
  _QWORD *v341; // rax
  struct _SLIST_ENTRY *v342; // rsi
  __int64 v343; // rbx
  int Object; // [rsp+20h] [rbp-308h]
  unsigned __int8 v345; // [rsp+70h] [rbp-2B8h]
  char v346; // [rsp+71h] [rbp-2B7h]
  struct DXGALLOCATION *v347; // [rsp+80h] [rbp-2A8h]
  unsigned __int8 v348[4]; // [rsp+88h] [rbp-2A0h] BYREF
  UINT v349; // [rsp+8Ch] [rbp-29Ch]
  char v350; // [rsp+90h] [rbp-298h]
  UINT v351; // [rsp+94h] [rbp-294h]
  char v352; // [rsp+98h] [rbp-290h]
  UINT v353; // [rsp+9Ch] [rbp-28Ch]
  void **v354; // [rsp+A0h] [rbp-288h]
  struct _DXGK_ALLOCATIONINFO *v355; // [rsp+A8h] [rbp-280h]
  void **v356; // [rsp+B0h] [rbp-278h]
  char v357; // [rsp+B8h] [rbp-270h]
  char v358; // [rsp+C0h] [rbp-268h]
  char *v359; // [rsp+C8h] [rbp-260h]
  struct COREDEVICEACCESS *v360; // [rsp+D0h] [rbp-258h]
  struct DXGALLOCATION *v361; // [rsp+D8h] [rbp-250h] BYREF
  void *Src; // [rsp+E0h] [rbp-248h]
  struct _D3DKM_CREATESTANDARDALLOCATION *v363; // [rsp+E8h] [rbp-240h]
  unsigned __int8 *v364; // [rsp+F0h] [rbp-238h]
  int v365; // [rsp+F8h] [rbp-230h]
  struct _D3DKMT_CREATEALLOCATION *v366; // [rsp+100h] [rbp-228h]
  __int64 v367; // [rsp+108h] [rbp-220h]
  size_t Size; // [rsp+110h] [rbp-218h]
  void *v369; // [rsp+118h] [rbp-210h]
  unsigned __int64 *v370; // [rsp+120h] [rbp-208h]
  struct DXGRESOURCE *v371; // [rsp+128h] [rbp-200h]
  unsigned int *v372; // [rsp+130h] [rbp-1F8h]
  struct DXGALLOCATION *v373; // [rsp+138h] [rbp-1F0h]
  DXGDEVICE *v374; // [rsp+140h] [rbp-1E8h]
  struct DXGRESOURCE *v375; // [rsp+148h] [rbp-1E0h]
  struct _D3DKMT_CREATEALLOCATION *v376; // [rsp+150h] [rbp-1D8h]
  struct _DXGK_OPENALLOCATIONINFO *v377; // [rsp+160h] [rbp-1C8h]
  PVOID v378; // [rsp+168h] [rbp-1C0h] BYREF
  struct _D3DKMT_CREATEALLOCATION *v379; // [rsp+170h] [rbp-1B8h]
  unsigned __int8 *v380; // [rsp+178h] [rbp-1B0h] BYREF
  struct DXGRESOURCE *v381; // [rsp+180h] [rbp-1A8h] BYREF
  struct _EX_RUNDOWN_REF *v382; // [rsp+188h] [rbp-1A0h] BYREF
  unsigned __int64 *v383; // [rsp+190h] [rbp-198h]
  PSLIST_ENTRY ListEntry; // [rsp+198h] [rbp-190h]
  struct _EPROCESS *v385; // [rsp+1A0h] [rbp-188h]
  unsigned __int64 *v386; // [rsp+1A8h] [rbp-180h]
  struct DXGALLOCATION *v387; // [rsp+1B0h] [rbp-178h] BYREF
  PVOID v388; // [rsp+1B8h] [rbp-170h] BYREF
  struct _EX_RUNDOWN_REF *v389; // [rsp+1C0h] [rbp-168h] BYREF
  char *v390; // [rsp+1C8h] [rbp-160h]
  __int64 v391; // [rsp+1D0h] [rbp-158h] BYREF
  struct _D3DKMT_CREATESTANDARDALLOCATION *v392; // [rsp+1D8h] [rbp-150h]
  char *v393; // [rsp+1E0h] [rbp-148h]
  __int64 v394; // [rsp+1E8h] [rbp-140h]
  _BYTE v395[16]; // [rsp+1F0h] [rbp-138h] BYREF
  _BYTE v396[16]; // [rsp+200h] [rbp-128h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v397; // [rsp+210h] [rbp-118h] BYREF
  _BYTE v398[24]; // [rsp+240h] [rbp-E8h] BYREF
  _BYTE v399[24]; // [rsp+258h] [rbp-D0h] BYREF
  D3DDDI_MAPGPUVIRTUALADDRESS v400; // [rsp+270h] [rbp-B8h] BYREF

  v346 = a4;
  v15 = a3;
  v345 = a3;
  v17 = this;
  v364 = (unsigned __int8 *)this;
  v374 = this;
  v376 = a2;
  v366 = a2;
  v379 = a2;
  v358 = a3;
  Size = (size_t)a5;
  v363 = a6;
  v360 = a7;
  v385 = a9;
  v372 = a10;
  v386 = a11;
  v370 = a12;
  v392 = a13;
  v18 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v18 + 184) )
  {
    if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v18 + 168)) )
    {
      v19 = WdLogNewEntry5_WdAssertion(v18, a2);
      *(_QWORD *)(v19 + 24) = 4577LL;
      WdLogEvent5_WdAssertion(v19);
    }
    a4 = v346;
  }
  if ( v15 && a4 )
  {
    v20 = WdLogNewEntry5_WdAssertion(v18, a2);
    *(_QWORD *)(v20 + 24) = 4582LL;
    WdLogEvent5_WdAssertion(v20);
  }
  v21 = *((_QWORD *)v17 + 2);
  v22 = *(_QWORD *)(v21 + 16);
  v350 = *(_BYTE *)(v22 + 209);
  v357 = v350;
  Flags = (unsigned int)a2->Flags;
  if ( (Flags & 0x800) != 0 )
  {
    if ( (*(_DWORD *)(v22 + 2036) & 0x10) == 0 )
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
  v27 = 0LL;
  v356 = 0LL;
  Src = 0LL;
  ListEntry = 0LL;
  v394 = v21;
  NumAllocations = a2->NumAllocations;
  if ( (unsigned int)NumAllocations <= 5 )
  {
    v44 = v21 + 1472;
    ++*(_DWORD *)(v44 + 20);
    v29 = (char *)ExpInterlockedPopEntrySList((PSLIST_HEADER)v44);
    v359 = v29;
    if ( !v29 )
    {
      ++*(_DWORD *)(v44 + 24);
      v29 = (char *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v44 + 48))(
                      *(unsigned int *)(v44 + 36),
                      *(unsigned int *)(v44 + 44),
                      *(unsigned int *)(v44 + 40));
      v359 = v29;
    }
    ListEntry = (PSLIST_ENTRY)v29;
    if ( !v29 )
    {
      v49 = WdLogNewEntry5_WdLowResource(v46, v45, v47, v48);
      *(_QWORD *)(v49 + 24) = v17;
      WdLogEvent5_WdLowResource(v49);
      return -1073741801LL;
    }
    v355 = (struct _DXGK_ALLOCATIONINFO *)(v29 + 720);
    v377 = (struct _DXGK_OPENALLOCATIONINFO *)(v29 + 480);
    v36 = (void **)(v29 + 640);
    v354 = (void **)(v29 + 640);
    v27 = (void **)(v29 + 680);
    v356 = (void **)(v29 + 680);
    v369 = v29;
    goto LABEL_58;
  }
  v29 = 0LL;
  v359 = 0LL;
  v369 = 0LL;
  v30 = (unsigned int)NumAllocations;
  v31 = 96 * NumAllocations;
  v32 = 0;
  if ( (unsigned __int64)(96 * NumAllocations) <= 0xFFFFFFFF )
  {
    v33 = 96LL * (unsigned int)NumAllocations;
    if ( !is_mul_ok(v30, 0x60uLL) )
      v33 = -1LL;
    v29 = (char *)operator new[](v33, 0x4B677844u, PagedPool);
    v359 = v29;
    v369 = v29;
  }
  else
  {
    v32 = -1073741675;
  }
  v355 = 0LL;
  if ( v31 <= 0xFFFFFFFF )
  {
    v32 = 0;
    if ( 88 * (unsigned __int64)a2->NumAllocations <= 0xFFFFFFFF )
    {
      v34 = 88LL * a2->NumAllocations;
      if ( !is_mul_ok(a2->NumAllocations, 0x58uLL) )
        v34 = -1LL;
      v355 = (struct _DXGK_ALLOCATIONINFO *)operator new[](v34, 0x4B677844u, PagedPool);
    }
    else
    {
      v32 = -1073741675;
    }
  }
  v377 = 0LL;
  if ( v32 >= 0 )
  {
    v32 = 0;
    if ( 32 * (unsigned __int64)a2->NumAllocations <= 0xFFFFFFFF )
    {
      v35 = 32LL * a2->NumAllocations;
      if ( !is_mul_ok(a2->NumAllocations, 0x20uLL) )
        v35 = -1LL;
      v377 = (struct _DXGK_OPENALLOCATIONINFO *)operator new[](v35, 0x4B677844u, PagedPool);
    }
    else
    {
      v32 = -1073741675;
    }
  }
  v36 = 0LL;
  v354 = 0LL;
  if ( v32 >= 0 )
  {
    v32 = 0;
    if ( 8 * (unsigned __int64)a2->NumAllocations <= 0xFFFFFFFF )
    {
      v37 = 8LL * a2->NumAllocations;
      if ( !is_mul_ok(a2->NumAllocations, 8uLL) )
        v37 = -1LL;
      v36 = (void **)operator new[](v37, 0x4B677844u, PagedPool);
      v354 = v36;
      v38 = v345;
      if ( !v345 )
        goto LABEL_41;
      v39 = 8LL * a2->NumAllocations;
      if ( !is_mul_ok(a2->NumAllocations, 8uLL) )
        v39 = -1LL;
      v27 = (void **)operator new[](v39, 0x4B677844u, PagedPool);
      v356 = v27;
    }
    else
    {
      v32 = -1073741675;
    }
  }
  v38 = v345;
LABEL_41:
  if ( v32 < 0 || !v29 || !v355 || !v377 || !v36 || !v27 && v38 )
  {
    operator delete[](v29);
    operator delete[](v355);
    operator delete[](v377);
    operator delete[](v36);
    operator delete[](v27);
    v43 = (_QWORD *)WdLogNewEntry5_WdWarning(v41, v40, v42);
    v43[3] = v17;
    v43[4] = a2->NumAllocations;
    if ( v32 >= 0 )
    {
      v32 = -1073741801;
      v43[5] = -1073741801LL;
    }
    else
    {
      v43[5] = v32;
    }
    WdLogEvent5_WdWarning(v43);
    return (unsigned int)v32;
  }
  v15 = v345;
LABEL_58:
  v390 = v29;
  v393 = v29;
  v50 = 0;
  v351 = 0;
  if ( a2->NumAllocations )
  {
    do
    {
      v36[v50] = 0LL;
      if ( v15 )
        v27[v50] = 0LL;
      ++v50;
    }
    while ( v50 < a2->NumAllocations );
    v351 = v50;
  }
  v347 = 0LL;
  v361 = 0LL;
  LODWORD(v51) = 0;
  v348[0] = 0;
  v52 = 0LL;
  v352 = 0;
  v381 = 0LL;
  _MOCKDRIVERSTATE_PER_PLANE::_MOCKDRIVERSTATE_PER_PLANE((_MOCKDRIVERSTATE_PER_PLANE *)v396);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v398, 0LL, 0);
  if ( v15 )
  {
    v53 = 96LL * a2->NumAllocations;
    pAllocationInfo = a2->pAllocationInfo;
    if ( (D3DDDI_ALLOCATIONINFO *)((char *)pAllocationInfo + v53) < pAllocationInfo
      || (unsigned __int64)pAllocationInfo + v53 > MmUserProbeAddress )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v29, pAllocationInfo, v53);
  }
  else
  {
    memmove(v29, a2->pAllocationInfo, 96LL * a2->NumAllocations);
  }
  v365 = -1;
  v353 = -1;
  if ( (*(_DWORD *)&a2->Flags & 0x10000) != 0 )
  {
    *((_QWORD *)v29 + 2) = a14;
    *((_DWORD *)v29 + 6) = a15;
  }
  v56 = 0;
  v349 = 0;
  if ( !a2->NumAllocations )
  {
LABEL_102:
    for ( i = 0; ; i = v349 + 1 )
    {
      v351 = i;
      v349 = i;
      if ( i >= a2->NumAllocations )
        break;
      v70 = i;
      v71 = 96LL * i;
      v72 = *(unsigned int *)&v29[v71 + 24];
      if ( (unsigned int)v72 > 0x7FFFFFFF )
      {
        v73 = (_QWORD *)WdLogNewEntry5_WdWarning(v72, v71, v55);
        v73[3] = -1073741811LL;
        goto LABEL_109;
      }
      if ( *(_QWORD *)&v29[v71 + 16] && (_DWORD)v72 )
      {
        if ( v345 && (*(_DWORD *)&a2->Flags & 0x10000) == 0 )
          v72 = (unsigned int)(2 * v72);
        v82 = (char *)operator new[](v72, 0x4B677844u, PagedPool);
        v354[v70] = v82;
        if ( !v82 )
        {
          LODWORD(v51) = -1073741801;
          v73 = (_QWORD *)WdLogNewEntry5_WdWarning(v83, 0LL, v55);
          v73[3] = v17;
          v73[4] = a2->NumAllocations;
          v73[5] = -1073741801LL;
          goto LABEL_109;
        }
        if ( v345 && (*(_DWORD *)&a2->Flags & 0x10000) == 0 )
        {
          v84 = &v82[*(unsigned int *)&v29[96 * v70 + 24]];
          v356[v70] = v84;
          v85 = *(unsigned int *)&v29[96 * v70 + 24];
          v86 = *(char **)&v29[96 * v70 + 16];
          if ( &v86[v85] < v86 || (unsigned __int64)&v86[v85] > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v84, v86, v85);
        }
      }
      else
      {
        v354[i] = 0LL;
        if ( v345 )
          v356[i] = 0LL;
      }
    }
    v87 = v345;
    if ( v345 )
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
            LODWORD(v51) = -1073741801;
            v73 = (_QWORD *)WdLogNewEntry5_WdWarning(v90, v89, v91);
            v73[3] = v17;
            v73[4] = a2->PrivateDriverDataSize;
            v73[5] = -1073741801LL;
LABEL_109:
            WdLogEvent5_WdWarning(v73);
            v76 = 0LL;
            goto LABEL_339;
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
    LODWORD(v51) = DXGDEVICE::OpenResourceObject(
                     (ADAPTER_RENDER **)v17,
                     a2,
                     (struct _D3DDDI_ALLOCATIONINFO2 *)v29,
                     v346,
                     v385,
                     (struct _DXGSHAREDALLOCOBJECT *)Size,
                     (struct DXGRESOURCEREFERENCE *)&v381,
                     v348,
                     v363,
                     (struct DXGAUTOMUTEX *)v396,
                     (struct DXGAUTOPUSHLOCK *)v398);
    if ( (v51 & 0x80000000) != 0LL )
    {
LABEL_107:
      v76 = 0LL;
      goto LABEL_339;
    }
    v52 = v381;
    v375 = v381;
    v371 = v381;
    if ( v381 && (*((_DWORD *)v381 + 1) & 1) == 0 && (*(_DWORD *)&a2->Flags & 2) != 0 )
    {
      v96 = (_QWORD *)WdLogNewEntry5_WdError(v95, v75);
      v96[3] = v17;
      v96[4] = v52;
      v96[5] = -1073741811LL;
      WdLogEvent5_WdError(v96);
      LODWORD(v51) = -1073741811;
      v76 = 0LL;
      goto LABEL_339;
    }
    v97 = v348[0];
    v349 = v348[0];
    v51 = a2->NumAllocations;
    v98 = *(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v98 + 184) )
    {
      if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v98 + 168)) )
      {
        v101 = WdLogNewEntry5_WdAssertion(v100, v99);
        *(_QWORD *)(v101 + 24) = 4497LL;
        WdLogEvent5_WdAssertion(v101);
      }
      v97 = v349;
    }
    if ( v52 )
    {
      if ( !v97 )
      {
        for ( j = *((_QWORD *)v52 + 3); j; v51 = (unsigned int)(v51 + 1) )
          j = *(_QWORD *)(j + 64);
      }
      if ( (unsigned int)v51 > 0x10 )
      {
        v103 = 8 * v51;
        if ( !is_mul_ok(v51, 8uLL) )
          v103 = -1LL;
        v104 = (struct _EPROCESS *)operator new[](v103, 0x4B677844u, PagedPool);
        v385 = v104;
        if ( !v104 )
        {
          v108 = (_QWORD *)WdLogNewEntry5_WdWarning(v106, v105, v107);
          v108[3] = v17;
          v108[4] = v51;
          v108[5] = -1073741801LL;
          WdLogEvent5_WdWarning(v108);
          LODWORD(v51) = -1073741801;
          v76 = v361;
          v347 = v361;
          goto LABEL_339;
        }
        if ( !v349 )
        {
          v109 = (void *)*((_QWORD *)v52 + 8);
          if ( v109 )
          {
            operator delete[](v109);
            v104 = v385;
          }
        }
        *((_QWORD *)v52 + 8) = v104;
      }
    }
    v387 = 0LL;
    LODWORD(v51) = DXGDEVICE::CreateAllocationObjects(v17, a2->NumAllocations, &v361, v52, &v387);
    if ( (v51 & 0x80000000) != 0LL )
    {
LABEL_209:
      v76 = v361;
      v347 = v361;
      goto LABEL_339;
    }
    v347 = v361;
    if ( v387 )
    {
      DXGDEVICE::AppendAllocationListToResourceOrDevice(v17, v52, v361, v387);
      v352 = 1;
    }
    v111 = a2->Flags;
    if ( (*(_WORD *)&v111 & 0x800) != 0 )
    {
      if ( v365 != -1 )
      {
        *(_DWORD *)(*((_QWORD *)v52 + 7) + 12LL) |= 0x40u;
        *((_DWORD *)v52 + 1) |= 8u;
        *(_DWORD *)(*((_QWORD *)v52 + 7) + 12LL) ^= (*(_DWORD *)(*((_QWORD *)v52 + 7) + 12LL) ^ (*(_DWORD *)&a2->Flags >> 3)) & 0x80;
      }
      goto LABEL_177;
    }
    if ( (*(_WORD *)&v111 & 0x1000) != 0 )
    {
      if ( !v363 )
        goto LABEL_177;
      v112 = *(_DWORD *)v363;
      if ( (*(_DWORD *)v363 & 0x80u) != 0 )
      {
        v113 = WdLogNewEntry5_WdAssertion(v110, v75);
        *(_QWORD *)(v113 + 24) = 5128LL;
        WdLogEvent5_WdAssertion(v113);
        v112 = *(_DWORD *)v363;
      }
      if ( (v112 & 0x100) == 0 )
      {
LABEL_177:
        if ( v350 )
          goto LABEL_198;
        memset(v355, 0, 88LL * a2->NumAllocations);
        v115 = v346;
        if ( !v346 )
        {
          LODWORD(v51) = DXGDEVICE::CreateDriverAllocations(
                           v17,
                           a2,
                           (struct _D3DDDI_ALLOCATIONINFO2 *)v29,
                           v355,
                           v347,
                           v52,
                           v354,
                           v356,
                           Src,
                           v363,
                           v345,
                           v392);
          v115 = 0;
        }
        if ( (v51 & 0x80000000) != 0LL )
          goto LABEL_338;
        LODWORD(v51) = DXGDEVICE::OpenAllocations(
                         v17,
                         a2,
                         (struct _D3DDDI_ALLOCATIONINFO2 *)v29,
                         v347,
                         v377,
                         v354,
                         v356,
                         (D3DKMT_CREATESTANDARDALLOCATION *)Src,
                         v345,
                         v115,
                         a8,
                         v372,
                         v386);
        if ( (v51 & 0x80000000) != 0LL )
          goto LABEL_338;
        v116 = a2->Flags;
        v117 = v355;
        Value = v355->Flags.Value;
        if ( (*(_BYTE *)&v116 & 8) != 0 )
        {
          Value |= 0x4000008u;
          v355->Flags.Value = Value;
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
LABEL_189:
            v119 = Value & 0xFFFFF7FF;
            v120 = Value | 0x800;
            if ( (*(_DWORD *)&a2->Flags & 0x8000) == 0 )
              v120 = v119;
            v117->Flags.Value = v120;
            LODWORD(v51) = DXGDEVICE::CreateVidMmAllocations(
                             v17,
                             (unsigned __int64)a2,
                             (struct _D3DDDI_ALLOCATIONINFO2 *)v29,
                             v117,
                             v347,
                             v363,
                             v346);
            if ( (v51 & 0x80000000) != 0LL )
              goto LABEL_338;
            if ( v370 )
            {
              v121 = *((_QWORD *)v17 + 2);
              v75 = *(_QWORD *)(v121 + 640);
              v122 = 0;
              if ( a2->NumAllocations )
              {
                v123 = v347;
                v124 = *(_QWORD *)(v121 + 648);
                v125 = *(_QWORD *)(v121 + 640);
                v126 = v370;
                do
                {
                  v127 = *(_DWORD *)&a2->Flags >> 5;
                  LOBYTE(v127) = (*(_DWORD *)&a2->Flags & 0x20) != 0;
                  v126[v122] = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(v125 + 8) + 632LL))(
                                 v124,
                                 *((_QWORD *)v123 + 3),
                                 v127);
                  v123 = (struct DXGALLOCATION *)*((_QWORD *)v123 + 8);
                  ++v122;
                }
                while ( v122 < a2->NumAllocations );
                v17 = (DXGDEVICE *)v364;
                v52 = v375;
                v29 = v359;
              }
              v87 = v345;
            }
LABEL_198:
            if ( v348[0] )
            {
              if ( v52 )
              {
                if ( (*((_DWORD *)v52 + 1) & 1) != 0 )
                {
                  v128 = *((_QWORD *)v52 + 7);
                  if ( !*(_DWORD *)(v128 + 24) && (*(_DWORD *)(v128 + 12) & 8) == 0 )
                  {
                    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v395, v75);
                    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v395);
                    if ( (*(_DWORD *)&a2->Flags & 2) == 0 )
                    {
                      v131 = WdLogNewEntry5_WdAssertion(v130, v129);
                      *(_QWORD *)(v131 + 24) = 5262LL;
                      WdLogEvent5_WdAssertion(v131);
                    }
                    Global = DXGGLOBAL::GetGlobal(v130, v129);
                    v360 = Global;
                    v372 = (unsigned int *)*((_QWORD *)v52 + 7);
                    CurrentThread = KeGetCurrentThread();
                    if ( *((struct _KTHREAD **)Global + 19) != CurrentThread )
                    {
                      v135 = WdLogNewEntry5_WdAssertion(CurrentThread, v133);
                      *(_QWORD *)(v135 + 24) = 1088LL;
                      WdLogEvent5_WdAssertion(v135);
                      Global = v360;
                    }
                    v136 = HMGRTABLE::AllocHandle((unsigned int *)Global + 44, (__int64)v372, 2, 2, 0);
                    v139 = *((_QWORD *)v52 + 7);
                    *(_DWORD *)(v139 + 24) = v136;
                    if ( !*(_DWORD *)(*((_QWORD *)v52 + 7) + 24LL) )
                    {
                      v140 = WdLogNewEntry5_WdWarning(v139, v137, v138);
                      *(_QWORD *)(v140 + 24) = v17;
                      *(_QWORD *)(v140 + 32) = -1073741801LL;
                      WdLogEvent5_WdWarning(v140);
                      LODWORD(v51) = -1073741801;
                      DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v395, v141);
                      goto LABEL_209;
                    }
                    DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v395, v137);
                    v347 = v361;
                  }
                }
              }
              DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
                (DXGAUTOPUSHLOCKEXCLUSIVE *)v399,
                (DXGDEVICE *)((char *)v17 + 240));
              v142 = *((_QWORD *)v17 + 7);
              if ( v142 )
              {
                *(_QWORD *)(v142 + 32) = v52;
                v142 = *((_QWORD *)v17 + 7);
              }
              *((_QWORD *)v52 + 5) = v142;
              *((_QWORD *)v17 + 7) = v52;
              DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v399);
            }
            v143 = 0;
            if ( v52 )
              v143 = *((_DWORD *)v52 + 4);
            a2->hResource = v143;
            v144 = a2->Flags;
            if ( ((*(_BYTE *)&v144 & 2) != 0 || v346) && (*(_BYTE *)&v144 & 0x40) == 0 )
              v145 = *(_DWORD *)(*((_QWORD *)v52 + 7) + 24LL);
            else
              v145 = 0;
            a2->hGlobalShare = v145;
            if ( v87 )
            {
              v146 = 0LL;
              v351 = 0;
              v147 = v347;
              for ( k = v347; ; k = (struct DXGALLOCATION *)*((_QWORD *)k + 8) )
              {
                v149 = a2->NumAllocations;
                if ( (unsigned int)v146 >= v149 )
                  break;
                v75 = (ULONG64)a2->pAllocationInfo + 96 * (unsigned int)v146;
                if ( v75 >= MmUserProbeAddress )
                  v75 = MmUserProbeAddress;
                *(_DWORD *)v75 = *((_DWORD *)k + 4);
                v146 = (unsigned int)(v146 + 1);
                v351 = v146;
              }
            }
            else
            {
              v146 = 0LL;
              v147 = v347;
              v150 = v347;
              v149 = a2->NumAllocations;
              if ( v149 )
              {
                do
                {
                  v75 = 96LL * (unsigned int)v146;
                  *(D3DKMT_HANDLE *)((char *)&a2->pAllocationInfo->hAllocation + v75) = *((_DWORD *)v150 + 4);
                  v146 = (unsigned int)(v146 + 1);
                  v150 = (struct DXGALLOCATION *)*((_QWORD *)v150 + 8);
                  v149 = a2->NumAllocations;
                }
                while ( (unsigned int)v146 < v149 );
              }
            }
            v351 = 0;
            v373 = v147;
            if ( v149 )
            {
              do
              {
                v75 = *(unsigned int *)(*((_QWORD *)v147 + 6) + 4LL);
                if ( (v75 & 1) != 0 )
                {
                  LODWORD(v51) = DXGDEVICE::AddPrimaryAllocation(v17, v147);
                  if ( (v51 & 0x80000000) != 0LL )
                    goto LABEL_338;
                }
                else if ( (v75 & 2) != 0 )
                {
                  DXGDEVICE::SetDisplayedPrimary((struct _KTHREAD **)v17, ((unsigned int)v75 >> 6) & 0xF, v147, 0, 1u);
                }
                ++v351;
                v147 = (struct DXGALLOCATION *)*((_QWORD *)v147 + 8);
                v373 = v147;
              }
              while ( v351 < a2->NumAllocations );
            }
            if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
            {
              if ( a2->pPrivateRuntimeData )
              {
                v151 = *((_QWORD *)v52 + 7);
                if ( *(_QWORD *)(v151 + 104) )
                {
                  if ( *(_DWORD *)(v151 + 112) != v366->PrivateRuntimeDataSize )
                  {
                    LODWORD(v51) = -1073741811;
                    v157 = (_QWORD *)WdLogNewEntry5_WdWarning(v151, v75, v146);
                    v157[3] = v17;
                    v157[4] = a2->PrivateRuntimeDataSize;
                    v157[5] = *(unsigned int *)(*((_QWORD *)v52 + 7) + 112LL);
                    WdLogEvent5_WdWarning(v157);
                    goto LABEL_338;
                  }
                }
                else
                {
                  *(_QWORD *)(*((_QWORD *)v52 + 7) + 104LL) = operator new[](
                                                                a2->PrivateRuntimeDataSize,
                                                                0x4B677844u,
                                                                PagedPool);
                  v154 = *((_QWORD *)v52 + 7);
                  if ( !*(_QWORD *)(v154 + 104) )
                  {
                    LODWORD(v51) = -1073741801;
                    v155 = (_QWORD *)WdLogNewEntry5_WdWarning(v154, v152, v153);
                    v155[3] = v17;
                    PrivateRuntimeDataSize = v366->PrivateRuntimeDataSize;
LABEL_242:
                    v155[4] = PrivateRuntimeDataSize;
                    v155[5] = -1073741801LL;
                    WdLogEvent5_WdWarning(v155);
                    goto LABEL_338;
                  }
                  *(_DWORD *)(v154 + 112) = v366->PrivateRuntimeDataSize;
                }
                v158 = v345;
                if ( v345 )
                {
                  v159 = a2->PrivateRuntimeDataSize;
                  pPrivateRuntimeData = (char *)a2->pPrivateRuntimeData;
                  v161 = *(void **)(*((_QWORD *)v52 + 7) + 104LL);
                  if ( &pPrivateRuntimeData[v159] < pPrivateRuntimeData
                    || (unsigned __int64)&pPrivateRuntimeData[v159] > MmUserProbeAddress )
                  {
                    *(_BYTE *)MmUserProbeAddress = 0;
                  }
                  memmove(v161, pPrivateRuntimeData, v159);
                }
                else
                {
                  memmove(*(void **)(*((_QWORD *)v52 + 7) + 104LL), a2->pPrivateRuntimeData, a2->PrivateRuntimeDataSize);
                }
              }
              else
              {
                v158 = v345;
              }
              if ( a2->pStandardAllocation )
              {
                v162 = a2->PrivateDriverDataSize;
                if ( v162 )
                {
                  v163 = *((_QWORD *)v52 + 7);
                  if ( *(_QWORD *)(v163 + 120) )
                  {
                    if ( *(_DWORD *)(v163 + 128) != v162 )
                    {
                      LODWORD(v51) = -1073741811;
                      v178 = (_QWORD *)WdLogNewEntry5_WdWarning(v163, v75, v146);
                      v178[3] = v17;
                      v178[4] = a2->PrivateDriverDataSize;
                      v178[5] = *(unsigned int *)(*((_QWORD *)v52 + 7) + 128LL);
                      v178[6] = 5493LL;
                      WdLogEvent5_WdWarning(v178);
                      goto LABEL_338;
                    }
                  }
                  else
                  {
                    *(_QWORD *)(*((_QWORD *)v52 + 7) + 120LL) = operator new[](v162, 0x4B677844u, PagedPool);
                    v166 = *((_QWORD *)v52 + 7);
                    if ( !*(_QWORD *)(v166 + 120) )
                    {
                      LODWORD(v51) = -1073741801;
                      v155 = (_QWORD *)WdLogNewEntry5_WdWarning(v166, v164, v165);
                      v155[3] = v17;
                      PrivateRuntimeDataSize = v366->PrivateDriverDataSize;
                      goto LABEL_242;
                    }
                    v167 = v366;
                    *(_DWORD *)(v166 + 128) = v366->PrivateDriverDataSize;
                    v162 = v167->PrivateDriverDataSize;
                  }
                  v168 = Src;
                  if ( !v158 )
                    v168 = a2->pStandardAllocation;
                  memmove(*(void **)(*((_QWORD *)v52 + 7) + 120LL), v168, v162);
                }
              }
              v169 = 0LL;
              v351 = 0;
              v76 = v347;
              v170 = v347;
              v373 = v347;
              if ( a2->NumAllocations )
              {
                while ( 1 )
                {
                  v367 = v169;
                  v171 = &v29[96 * v169];
                  if ( *((_QWORD *)v171 + 2) )
                  {
                    v172 = operator new[](*((unsigned int *)v171 + 6), 0x4B677844u, PagedPool);
                    v174 = v373;
                    v175 = *((_QWORD *)v373 + 6);
                    *(_QWORD *)(v175 + 32) = v172;
                    v176 = *(void **)(*((_QWORD *)v174 + 6) + 32LL);
                    if ( !v176 )
                    {
                      LODWORD(v51) = -1073741801;
                      v182 = (_QWORD *)WdLogNewEntry5_WdWarning(v175, v174, v173);
                      v182[3] = v17;
                      v182[4] = v351 + 1;
                      v182[5] = *(unsigned int *)&v29[96 * v367 + 24];
                      v182[6] = -1073741801LL;
                      WdLogEvent5_WdWarning(v182);
                      goto LABEL_338;
                    }
                    if ( !v345 || (*(_DWORD *)&a2->Flags & 0x10000) != 0 )
                      v177 = (const void *)*((_QWORD *)v171 + 2);
                    else
                      v177 = v356[v367];
                    memmove(v176, v177, *((unsigned int *)v171 + 6));
                    *(_DWORD *)(*((_QWORD *)v373 + 6) + 40LL) = *((_DWORD *)v171 + 6);
                    v170 = v373;
                  }
                  v169 = v351 + 1;
                  v351 = v169;
                  v170 = (struct DXGALLOCATION *)*((_QWORD *)v170 + 8);
                  v373 = v170;
                  if ( (unsigned int)v169 >= a2->NumAllocations )
                    goto LABEL_273;
                }
              }
            }
            else
            {
LABEL_273:
              v76 = v347;
            }
            v360 = *(struct COREDEVICEACCESS **)(*((_QWORD *)v17 + 2) + 16LL);
            if ( !*((_BYTE *)v360 + 209) || v346 )
              goto LABEL_359;
            LODWORD(Size) = DXGPROCESS::GetHostProcess(*((DXGPROCESS **)v17 + 5));
            if ( !(_DWORD)Size )
            {
              v181 = WdLogNewEntry5_WdError(v180, v179);
              *(_QWORD *)(v181 + 24) = -1073741823LL;
              WdLogEvent5_WdError(v181);
              LODWORD(v51) = -1073741823;
              goto LABEL_339;
            }
            v380 = 0LL;
            v183 = DXGDEVICE::UmdManagesResidency(v17) && v363 && (unsigned int)(*((_DWORD *)v363 + 4) - 1) <= 2;
            v184 = a2->Flags;
            if ( (*(_BYTE *)&v184 & 2) != 0 )
              v185 = *(const void **)(*((_QWORD *)v52 + 7) + 104LL);
            else
              v185 = 0LL;
            v186 = Src;
            if ( v345 )
            {
              v187 = (*(_DWORD *)&v184 & 0x10000) != 0;
              v188 = v356;
              if ( !v187 )
                goto LABEL_291;
            }
            else
            {
              v186 = a2->pStandardAllocation;
            }
            v188 = v354;
LABEL_291:
            if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
              v189 = *((_DWORD *)v52 + 5);
            else
              v189 = 0;
            v192 = (int)DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateAllocation(
                          (struct COREDEVICEACCESS *)((char *)v360 + 4208),
                          Size,
                          *((_DWORD *)v17 + 110),
                          v189,
                          a2,
                          (struct _D3DDDI_ALLOCATIONINFO2 *)v29,
                          v188,
                          v186,
                          v185,
                          v345,
                          v183,
                          &v380);
            v17 = (DXGDEVICE *)v364;
            if ( !v380 )
            {
              v193 = WdLogNewEntry5_WdError(v191, v190);
              *(_QWORD *)(v193 + 24) = v192;
              WdLogEvent5_WdError(v193);
              LODWORD(v51) = v192;
              goto LABEL_338;
            }
            v75 = (ULONG64)v380;
            v364 = v380;
            if ( !v52 )
              goto LABEL_305;
            *((_DWORD *)v52 + 5) = *((_DWORD *)v380 + 1);
            v194 = (unsigned int)a2->Flags;
            if ( (v194 & 2) == 0 )
              goto LABEL_305;
            v195 = *(_DWORD *)(v75 + 8);
            if ( (v194 & 0x40) != 0 )
            {
              if ( v195 )
              {
                v196 = WdLogNewEntry5_WdAssertion(v194, v75);
                *(_QWORD *)(v196 + 24) = 5607LL;
LABEL_303:
                WdLogEvent5_WdAssertion(v196);
                v75 = (ULONG64)v364;
              }
            }
            else if ( !v195 )
            {
              v196 = WdLogNewEntry5_WdAssertion(v194, v75);
              *(_QWORD *)(v196 + 24) = 5611LL;
              goto LABEL_303;
            }
            *(_DWORD *)(*((_QWORD *)v52 + 7) + 28LL) = *(_DWORD *)(v75 + 8);
LABEL_305:
            v370 = 0LL;
            v383 = 0LL;
            if ( (*(_DWORD *)&a2->Flags & 2) != 0 && v52 )
            {
              v370 = *(unsigned __int64 **)(*((_QWORD *)v52 + 7) + 136LL);
              v383 = v370;
            }
            v197 = (struct _EX_RUNDOWN_REF *)v347;
            v198 = v347;
            v199 = 0;
            if ( a2->NumAllocations )
            {
              v200 = v364;
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
                  *((_QWORD *)v198 + 14) = *(_QWORD *)&v29[96 * v199 + 8];
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
                if ( (*(_DWORD *)&v29[96 * v199 + 32] & 1) != 0 )
                {
                  *(_DWORD *)(*((_QWORD *)v198 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v198 + 6) + 4LL) ^ (*(_DWORD *)&v29[96 * v199 + 28] << 6)) & 0x3C0;
                  if ( *((_QWORD *)v17 + 231) != *(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL) )
                    *(_DWORD *)(*((_QWORD *)v198 + 6) + 4LL) |= 4u;
                }
                ++v199;
                v198 = (struct DXGALLOCATION *)*((_QWORD *)v198 + 8);
              }
              while ( v199 < a2->NumAllocations );
              v75 = (ULONG64)v364;
              v197 = (struct _EX_RUNDOWN_REF *)v347;
            }
            if ( (int)v192 < 0 )
            {
              LODWORD(v51) = v192;
              goto LABEL_338;
            }
            v203 = v197;
            v375 = (struct DXGRESOURCE *)v197;
            v204 = 0;
            while ( 1 )
            {
              v349 = v204;
              if ( v204 >= a2->NumAllocations )
                break;
              v205 = v204;
              v206 = *(_DWORD *)(v75 + 72LL * v204 + 32);
              v207 = a2->Flags;
              if ( (*(_DWORD *)&v207 & 0x10000) != 0 )
              {
                v360 = (struct COREDEVICEACCESS *)(96LL * v204);
                v208 = (*(_BYTE *)&v207 & 0x20) == 0;
                v209 = *(struct COREDEVICEACCESS **)&v390[(_QWORD)v360 + 8];
                if ( v208 )
                {
                  v388 = 0LL;
                  v213 = ObReferenceObjectByHandle(v209, 0x20000u, MmSectionObjectType, v345, &v388, 0LL);
                  v51 = v213;
                  if ( v213 < 0 )
                  {
                    v216 = WdLogNewEntry5_WdError(v215, v214);
                    v29 = v359;
                    v217 = *(_QWORD *)&v359[(_QWORD)v360 + 8];
                    goto LABEL_334;
                  }
                  v360 = (struct COREDEVICEACCESS *)&v355[v205];
                  v218 = v388;
                  v219 = ProcessSectionAttributes(v388, (struct _DXGK_ALLOCATIONINFO *)v360);
                  v51 = v219;
                  if ( v219 < 0 )
                  {
                    v222 = (_QWORD *)WdLogNewEntry5_WdError(v221, v220);
                    v222[3] = v17;
                    v222[4] = v51;
                    v222[5] = 5750LL;
                    WdLogEvent5_WdError(v222);
                    ObfDereferenceObject(v218);
LABEL_337:
                    v29 = v359;
                    goto LABEL_338;
                  }
                  v233 = *(_QWORD *)(v203[5].Count + 56);
                  *(_DWORD *)(v233 + 12) |= 0x400u;
                  v234 = *(_DWORD *)(v233 + 12);
                  *(_QWORD *)(v233 + 192) = v218;
                  v235 = v360;
                  *(_DWORD *)(v233 + 204) = *((_DWORD *)v360 + 3);
                  *(_DWORD *)(v233 + 12) = v234 ^ ((unsigned __int16)v234 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v235 + 16) << 9)) & 0x800;
                }
                else
                {
                  v360 = *(struct COREDEVICEACCESS **)&v390[(_QWORD)v360 + 8];
                  if ( (*((_BYTE *)v17 + 1869) & 1) == 0 )
                  {
                    LODWORD(v51) = ProcessSysMemAttributes(v209, v206, &v355[v204]);
                    if ( (v51 & 0x80000000) != 0LL )
                      goto LABEL_337;
                    v209 = v360;
                  }
                  if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
                  {
                    v210 = *(_QWORD *)(v203[5].Count + 56);
                    *(_DWORD *)(v210 + 12) |= 0x200u;
                    v211 = *(_DWORD *)(v210 + 12);
                    *(_QWORD *)(v210 + 192) = v209;
                    v212 = &v355[v205];
                    *(_DWORD *)(v210 + 204) = v212->Alignment;
                    *(_DWORD *)(v210 + 12) = v211 ^ ((unsigned __int16)v211 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)&v212->Flags.0 << 9)) & 0x800;
                  }
                }
              }
              v236 = (struct COREDEVICEACCESS *)v349;
              v360 = (struct COREDEVICEACCESS *)v349;
              v29 = v359;
              v237 = (unsigned int *)&v359[96 * v349];
              v372 = v237;
              if ( (v237[8] & 1) != 0 )
              {
                v382 = 0LL;
                DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v389, v203);
                DXGALLOCATIONREFERENCE::MoveAssign(&v382, &v389);
                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v389, v238);
                v239 = *((_DWORD *)v17 + 110);
                Current = DXGPROCESS::GetCurrent();
                Resident = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMakeResident(
                             (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL) + 4208LL),
                             *((_DWORD *)Current + 106),
                             v239,
                             0,
                             (struct D3DDDI_MAKERESIDENT_FLAGS)3,
                             1u,
                             (const struct DXGALLOCATIONREFERENCE *)&v382,
                             0LL,
                             0LL);
                v51 = Resident;
                if ( Resident < 0 )
                {
                  v244 = WdLogNewEntry5_WdError(v243, v242);
                  *(_QWORD *)(v244 + 24) = v51;
                  WdLogEvent5_WdError(v244);
                  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v382, v245);
                  break;
                }
                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v382, v242);
                v236 = v360;
                v237 = v372;
              }
              *(struct _EX_RUNDOWN_REF *)(v203[6].Count + 16) = v203[6];
              Count = (_OWORD *)v203[6].Count;
              v253 = &v364[72 * (_QWORD)v236];
              v203[15].Count = *(_QWORD *)(v253 + 32);
              Count[4] = *(_OWORD *)(v253 + 40);
              Count[5] = *(_OWORD *)(v253 + 56);
              Count[6] = *(_OWORD *)(v253 + 72);
              v254 = v237[6];
              LODWORD(Size) = v237[6];
              if ( !v345 || (*(_DWORD *)&a2->Flags & 0x10000) != 0 )
              {
                v367 = 8LL * (_QWORD)v236;
                v257 = v254;
                v255 = *(void **)((char *)v354 + v367);
                v258 = (char *)*((_QWORD *)v237 + 2);
              }
              else
              {
                v367 = 8LL * (_QWORD)v236;
                v255 = v356[(_QWORD)v236];
                v256 = (char *)*((_QWORD *)v237 + 2);
                if ( (unsigned __int64)&v256[v254] > MmUserProbeAddress || &v256[v254] <= v256 )
                  *(_BYTE *)MmUserProbeAddress = 0;
                v257 = v254;
                v258 = v256;
              }
              memmove(v258, v255, v257);
              if ( v370 )
              {
                if ( !v345 || (v259 = v356, (*(_DWORD *)&a2->Flags & 0x10000) != 0) )
                  v259 = v354;
                memmove((void *)*(v370 - 2), *(void **)((char *)v259 + v367), (unsigned int)Size);
                v370 = (unsigned __int64 *)*v370;
                v383 = v370;
              }
              v75 = (ULONG64)v364;
              v204 = v349 + 1;
              v203 = (struct _EX_RUNDOWN_REF *)v203[8].Count;
              v375 = (struct DXGRESOURCE *)v203;
            }
            operator delete[](v380);
            if ( (v51 & 0x80000000) != 0LL )
              goto LABEL_338;
LABEL_359:
            v246 = a2->Flags;
            if ( (*(_WORD *)&v246 & 0x800) != 0 )
            {
              memset(&v397.Width, 0, 40);
              v76 = v347;
              v397.hAllocation = *(HANDLE *)(*((_QWORD *)v347 + 6) + 16LL);
              v247 = ADAPTER_RENDER::DdiDescribeAllocation(*((ADAPTER_RENDER **)v17 + 2), &v397);
              v51 = v247;
              if ( v247 < 0 )
              {
                v251 = (_QWORD *)WdLogNewEntry5_WdWarning(v249, v248, v250);
                v251[3] = v51;
                v251[4] = v17;
                v251[5] = *((unsigned int *)v347 + 4);
                v251[6] = v347;
                WdLogEvent5_WdWarning(v251);
                goto LABEL_339;
              }
              if ( v397.Format == D3DDDIFMT_UNKNOWN && v397.Height != 1 )
              {
                v260 = (_QWORD *)WdLogNewEntry5_WdWarning(v249, v248, v250);
                v260[3] = -1073741811LL;
                v260[4] = v17;
                v260[5] = v397.Height;
                WdLogEvent5_WdWarning(v260);
                LODWORD(v51) = -1073741811;
                goto LABEL_339;
              }
              v261 = *((_QWORD *)v347 + 5);
              v262 = *(unsigned int *)(*(_QWORD *)(v261 + 56) + 12LL);
              if ( (v262 & 0x20) != 0 )
              {
                v264 = v347;
              }
              else
              {
                v263 = WdLogNewEntry5_WdAssertion(v262, v248);
                *(_QWORD *)(v263 + 24) = 5877LL;
                WdLogEvent5_WdAssertion(v263);
                v264 = v347;
                v261 = *((_QWORD *)v347 + 5);
              }
              v265 = *(_QWORD *)(v261 + 56);
              *(_DWORD *)(v265 + 208) = v397.Width;
              *(_DWORD *)(v265 + 212) = v397.Height;
              *(_DWORD *)(v265 + 216) = v397.Format;
              v266 = v366->Flags;
              if ( (*((_BYTE *)v17 + 1869) & 1) != 0 )
              {
                if ( (*(_DWORD *)&v266 & 0x20000) != 0 )
                {
                  v267 = (void *)*((_QWORD *)v29 + 1);
                  v378 = 0LL;
                  v268 = ObReferenceObjectByHandle(v267, 0x20000u, MmSectionObjectType, v345, &v378, 0LL);
                  v270 = v378;
                  *(_QWORD *)(v265 + 192) = v378;
                  v51 = v268;
                  if ( v268 < 0 )
                  {
                    v216 = WdLogNewEntry5_WdError(v270, v269);
                    v217 = *((_QWORD *)v29 + 1);
LABEL_334:
                    *(_QWORD *)(v216 + 24) = v217;
                    *(_QWORD *)(v216 + 32) = v51;
                    WdLogEvent5_WdError(v216);
                    goto LABEL_338;
                  }
                  *(_DWORD *)(v265 + 12) |= 0x400u;
                }
              }
              else
              {
                if ( (*(_BYTE *)&v266 & 0x20) == 0 )
                {
                  *(_QWORD *)(v265 + 192) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v17 + 2) + 640LL)
                                                                                                  + 8LL)
                                                                                      + 688LL))(
                                              *(_QWORD *)(*((_QWORD *)v17 + 2) + 648LL),
                                              *((_QWORD *)v264 + 3));
                  *(_DWORD *)(v265 + 12) |= 0x400u;
                }
                *(_QWORD *)(v265 + 224) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v17 + 2) + 640LL)
                                                                                                + 8LL)
                                                                                    + 760LL))(
                                            *(_QWORD *)(*((_QWORD *)v17 + 2) + 648LL),
                                            *((_QWORD *)v347 + 3));
              }
              v271 = v365;
              *(_DWORD *)(v265 + 232) = v365;
              if ( v271 != -1 )
              {
                *(_DWORD *)(v265 + 12) |= 0x40u;
                *(_DWORD *)(v265 + 12) ^= ((unsigned __int8)*(_DWORD *)(v265 + 12) ^ (unsigned __int8)(*(_DWORD *)&a2->Flags >> 3)) & 0x80;
              }
            }
            else if ( (*(_WORD *)&v246 & 0x1000) != 0 )
            {
              v76 = v347;
              (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v17 + 2) + 640LL)
                                                                         + 8LL)
                                                             + 768LL))(
                *(_QWORD *)(*((_QWORD *)v17 + 2) + 648LL),
                *((_QWORD *)v347 + 3),
                *((_QWORD *)v363 + 43));
LABEL_393:
              v75 = *((_QWORD *)v17 + 2);
              v378 = (PVOID)v75;
              if ( (*(_DWORD *)(*(_QWORD *)(v75 + 16) + 2036LL) & 0x40) == 0 )
                goto LABEL_339;
              v272 = v363;
              if ( !v363 || (*(_DWORD *)v363 & 0x200) != 0 )
                goto LABEL_339;
              memset(&v400, 0, 56);
              memset(&v400.DriverProtection, 0, 40);
              v400.Protection.Value = 1LL;
              v353 = 0;
              if ( a2->NumAllocations )
              {
                while ( 1 )
                {
                  v273 = (*((_DWORD *)v76 + 18) >> 12) & 0x3F;
                  if ( *((_DWORD *)v272 + 4) == 4 )
                  {
                    v274 = *(_DWORD *)(*((_QWORD *)v272 + 3) + 12LL);
                    if ( ((v274 - 1) & 0xFFFFFFFC) != 0 || v274 == 2 )
                    {
                      if ( DXGADAPTER::ReplicateGdiContent(*(DXGADAPTER **)(*((_QWORD *)v17 + 2) + 16LL)) )
                        v273 = -1;
                      v75 = (ULONG64)v378;
                    }
                  }
                  if ( v350 )
                  {
                    v275 = DXGPROCESS::GetCurrent();
                    v276 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMapGpuVirtualAddress(
                             (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL) + 4208LL),
                             *((_DWORD *)v275 + 106),
                             v17,
                             0,
                             *((_DWORD *)v76 + 24),
                             &v400);
                  }
                  else
                  {
                    LOBYTE(Object) = 0;
                    v276 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, D3DDDI_MAPGPUVIRTUALADDRESS *, int, int))(*(_QWORD *)(*(_QWORD *)(v75 + 640) + 8LL) + 800LL))(
                             *(_QWORD *)(v75 + 648),
                             0LL,
                             *((_QWORD *)v76 + 3),
                             &v400,
                             Object,
                             v273);
                  }
                  LODWORD(v51) = v276;
                  if ( v276 < 0 )
                    break;
                  v280 = DXGADAPTER::ReplicateGdiContent(*(DXGADAPTER **)(*((_QWORD *)v17 + 2) + 16LL));
                  BaseAddress = v400.BaseAddress;
                  if ( v280 )
                    BaseAddress = v400.VirtualAddress;
                  v400.BaseAddress = BaseAddress;
                  v400.VirtualAddress = 0LL;
                  ++v353;
                  v76 = (struct DXGALLOCATION *)*((_QWORD *)v76 + 8);
                  v75 = (ULONG64)v378;
                  v272 = v363;
                  if ( v353 >= a2->NumAllocations )
                    goto LABEL_338;
                }
                v282 = WdLogNewEntry5_WdWarning(v278, v277, v279);
                *(_QWORD *)(v282 + 24) = (int)v51;
                WdLogEvent5_WdWarning(v282);
              }
LABEL_338:
              v76 = v347;
              goto LABEL_339;
            }
            v76 = v347;
            goto LABEL_393;
          }
          Value |= 0x800004u;
        }
        v117->Flags.Value = Value;
        goto LABEL_189;
      }
    }
    else
    {
      if ( !v52 )
        goto LABEL_177;
      v114 = *((_QWORD *)v52 + 7);
      if ( !v114 || (*(_BYTE *)(v114 + 12) & 0x60) != 0x60 )
        goto LABEL_177;
    }
    *((_DWORD *)v52 + 1) |= 8u;
    goto LABEL_177;
  }
  v57 = (unsigned int)a2->Flags;
  while ( 1 )
  {
    v58 = v56;
    if ( (v57 & 0x800) != 0 )
    {
      v59 = 96LL * v56;
      v55 = *(unsigned int *)&v29[v59 + 32];
      v57 = (unsigned int)v55;
      if ( (v55 & 1) != 0 )
      {
        v365 = *(_DWORD *)&v29[v59 + 28];
        v353 = v365;
        if ( !*((_QWORD *)v17 + 231) )
        {
          v57 = (unsigned int)v55 & 0xFFFFFFFE;
          *(_DWORD *)&v29[v59 + 32] = v57;
        }
      }
      if ( (v57 & 2) != 0 )
      {
        v74 = WdLogNewEntry5_WdWarning(v57, v56, v55);
        *(_QWORD *)(v74 + 24) = v17;
        *(_QWORD *)(v74 + 32) = -1073741811LL;
        WdLogEvent5_WdWarning(v74);
        LODWORD(v51) = -1073741811;
        goto LABEL_107;
      }
    }
    v60 = &v29[96 * v56];
    if ( (*((_DWORD *)v60 + 8) & 1) != 0 )
    {
      v61 = *((_QWORD *)v17 + 231);
      v367 = v61;
      if ( !v61 )
        goto LABEL_110;
      v62 = *(_QWORD *)(v61 + 2672);
      if ( !v62 || !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v62 + 16)) )
      {
        v63 = WdLogNewEntry5_WdAssertion(v62, v58);
        *(_QWORD *)(v63 + 24) = 4832LL;
        WdLogEvent5_WdAssertion(v63);
      }
      v57 = *(unsigned int *)(*(_QWORD *)(v367 + 2672) + 80LL);
      v64 = *((_DWORD *)v17 + 464);
      if ( (_DWORD)v57 != v64 )
      {
        v65 = WdLogNewEntry5_WdAssertion(v57, v58);
        *(_QWORD *)(v65 + 24) = 4838LL;
        WdLogEvent5_WdAssertion(v65);
        v64 = *((_DWORD *)v17 + 464);
      }
      if ( *((_DWORD *)v60 + 7) >= v64 )
      {
LABEL_110:
        v78 = (_QWORD *)WdLogNewEntry5_WdWarning(v57, v58, v55);
        v78[3] = v17;
        v78[4] = *(unsigned int *)&v29[96 * v349 + 28];
        v78[5] = -1073741811LL;
        WdLogEvent5_WdWarning(v78);
        LODWORD(v51) = -1073741811;
        v76 = 0LL;
        goto LABEL_339;
      }
      if ( !*((_DWORD *)v17 + 108)
        && !v346
        && (*((_BYTE *)DXGPROCESS::GetCurrent() + 347) & 0x20) == 0
        && !ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(v367 + 2672), v17, *((_DWORD *)v60 + 7)) )
      {
        v73 = (_QWORD *)WdLogNewEntry5_WdWarning(v57, v58, v55);
        LODWORD(v51) = -1071775744;
        v73[3] = -1071775744LL;
        v73[4] = v17;
        v77 = v349;
        v73[5] = *(unsigned int *)&v29[96 * v349 + 28];
        v73[6] = v77;
        goto LABEL_109;
      }
      v56 = v349;
    }
    v66 = *((_DWORD *)v60 + 8);
    if ( (v66 & 2) != 0 && (v66 & 1) == 0 )
    {
      v79 = WdLogNewEntry5_WdWarning(v57, v58, v55);
      *(_QWORD *)(v79 + 24) = -1073741811LL;
      *(_QWORD *)(v79 + 32) = v17;
      WdLogEvent5_WdWarning(v79);
      LODWORD(v51) = -1073741811;
      v76 = 0LL;
      goto LABEL_339;
    }
    v57 = (unsigned int)a2->Flags;
    if ( (v57 & 0x10000) != 0 )
    {
      v67 = v57 & 0x20;
      if ( (v57 & 0x20) != 0 && !*((_QWORD *)v60 + 1) || (v57 & 0x20000) != 0 && !*((_QWORD *)v60 + 1) )
      {
        v80 = WdLogNewEntry5_WdError(v57, v67);
        *(_QWORD *)(v80 + 24) = v17;
        *(_QWORD *)(v80 + 32) = -1073741811LL;
        WdLogEvent5_WdError(v80);
        LODWORD(v51) = -1073741811;
        v76 = 0LL;
        goto LABEL_339;
      }
      v68 = *((_QWORD *)v60 + 1);
      v55 = a2->pStandardAllocation->ExistingHeapData.Size;
      v375 = (struct DXGRESOURCE *)v55;
      if ( (v57 & 0x20) != 0 && v68 != (v68 & 0xFFFFFFFFFFFFF000uLL) )
        break;
      if ( v55 != (v55 & 0xFFFFFFFFFFFFF000uLL) )
        break;
    }
    v349 = ++v56;
    if ( v56 >= a2->NumAllocations )
      goto LABEL_102;
  }
  v81 = WdLogNewEntry5_WdError(v57, v67);
  *(_QWORD *)(v81 + 24) = v68;
  *(_QWORD *)(v81 + 32) = v375;
  WdLogEvent5_WdError(v81);
  LODWORD(v51) = -1073741811;
  v76 = 0LL;
LABEL_339:
  DXGAUTOMUTEX::ReleaseIfAcquired((DXGAUTOMUTEX *)v396, v75);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v398);
  if ( (v51 & 0x80000000) != 0LL )
  {
    if ( v76 )
    {
      v283 = 0LL;
      v353 = 0;
      if ( a2->NumAllocations )
      {
        do
        {
          v284 = *((_QWORD *)v76 + 6);
          if ( *(_QWORD *)(v284 + 8) && !v346 )
          {
            if ( (v285 = *(_DWORD *)(v284 + 4), (v285 & 1) != 0) && !*((_DWORD *)v17 + 108) || (v285 & 2) != 0 )
            {
              if ( (v285 & 0x10) != 0 )
              {
                v286 = WdLogNewEntry5_WdAssertion(v283, v284);
                *(_QWORD *)(v286 + 24) = 6067LL;
                WdLogEvent5_WdAssertion(v286);
                v284 = *((_QWORD *)v76 + 6);
              }
              (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v17 + 2) + 640LL) + 8LL)
                                                     + 200LL))(
                *(_QWORD *)(*((_QWORD *)v17 + 2) + 648LL),
                *(_QWORD *)(v284 + 8));
              *(_DWORD *)(*((_QWORD *)v76 + 6) + 4LL) |= 0x10u;
              LODWORD(v283) = v353;
            }
          }
          v283 = (unsigned int)(v283 + 1);
          v353 = v283;
          v76 = (struct DXGALLOCATION *)*((_QWORD *)v76 + 8);
        }
        while ( (unsigned int)v283 < a2->NumAllocations );
        v29 = v359;
      }
      v76 = v347;
    }
    if ( v348[0] )
    {
      v391 = 0LL;
      DXGRESOURCEREFERENCE::MoveAssign(&v381, &v391);
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v391);
      DXGDEVICE::RemoveResourceFromDeviceList(v17, v52);
      DXGDEVICE::DestroyResource(v17, (struct DXGALLOCATION **)v52, 0LL, 0);
    }
    else if ( v76 )
    {
      if ( v352 )
        DXGDEVICE::RemoveAllocationsWithoutDestroy(v17, v52, v76, a2->NumAllocations);
      if ( !v52 || *((_QWORD *)v52 + 7) )
      {
        v287 = v76;
        do
        {
          v288 = v287;
          v379 = (struct _D3DKMT_CREATEALLOCATION *)*((_QWORD *)v287 + 8);
          *((_QWORD *)v287 + 7) = 0LL;
          *((_QWORD *)v287 + 8) = 0LL;
          if ( v52 )
          {
            v289 = *((_QWORD *)v52 + 7);
            if ( v289 )
            {
              if ( *(_QWORD *)(*((_QWORD *)v287 + 6) + 48LL) )
              {
                DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v289 + 32));
                --*(_DWORD *)(*((_QWORD *)v52 + 7) + 132LL);
                v290 = *((_QWORD *)v288 + 6) + 48LL;
                v291 = *(_QWORD *)v290;
                v292 = *(_QWORD **)(*((_QWORD *)v288 + 6) + 56LL);
                if ( *(_QWORD *)(*(_QWORD *)v290 + 8LL) != v290 || *v292 != v290 )
                  __fastfail(3u);
                *v292 = v291;
                *(_QWORD *)(v291 + 8) = v292;
                *(_QWORD *)(*((_QWORD *)v288 + 6) + 48LL) = 0LL;
                v293 = *((_QWORD *)v52 + 7) + 32LL;
                *(_QWORD *)(v293 + 8) = 0LL;
                ExReleasePushLockExclusiveEx(v293, 0LL);
                KeLeaveCriticalRegion();
              }
            }
          }
          DXGDEVICE::DestroyAllocations(v17, 0LL, 0, v288, 0LL, 0);
          v287 = (struct DXGALLOCATION *)v379;
        }
        while ( v379 );
        v76 = v347;
      }
      if ( v52 )
      {
        v294 = *((_QWORD *)v52 + 7);
        if ( v294 )
        {
          v295 = 0;
          DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v294 + 32));
          v296 = *((_DWORD *)v52 + 1);
          if ( (v296 & 0x10) == 0 )
          {
            *((_DWORD *)v52 + 1) = v296 | 0x10;
            v295 = 1;
          }
          v297 = *((_QWORD *)v52 + 7) + 32LL;
          *(_QWORD *)(v297 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v297, 0LL);
          KeLeaveCriticalRegion();
          if ( v295 )
          {
            DXGDEVICE::RemoveResourceFromDeviceList(v17, v52);
            DXGDEVICE::DestroyResource(v17, (struct DXGALLOCATION **)v52, 0LL, 0);
          }
        }
        else
        {
          DXGDEVICE::DestroyAllocations(v17, v52, 0, v76, 0LL, 0);
        }
      }
    }
  }
  else if ( v348[0] )
  {
    v223 = *((_QWORD *)v17 + 5);
    v379 = (struct _D3DKMT_CREATEALLOCATION *)v223;
    v224 = v223 + 208;
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v223 + 208, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v227 = *(_DWORD *)(v223 + 232);
        if ( v227 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v225, &EventBlockThread, v226, v227);
      }
      ExAcquirePushLockExclusiveEx(v223 + 208, 0LL);
    }
    *(_QWORD *)(v223 + 216) = KeGetCurrentThread();
    v228 = *((_DWORD *)v52 + 4);
    v229 = (v228 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v229 < *(_DWORD *)(v223 + 256) )
    {
      v230 = *(_QWORD *)(v223 + 240);
      if ( ((v228 >> 25) & 0x60) == (*(_BYTE *)(v230 + 16 * v229 + 8) & 0x60)
        && (*(_DWORD *)(v230 + 16 * v229 + 8) & 0x1F) != 0 )
      {
        v231 = 2LL * ((v228 >> 6) & 0xFFFFFF);
        if ( (*(_DWORD *)(v230 + 16LL * ((v228 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
        {
          v232 = WdLogNewEntry5_WdAssertion((v228 >> 25) & 0x60, v230);
          *(_QWORD *)(v232 + 24) = 217LL;
          WdLogEvent5_WdAssertion(v232);
          v230 = *(_QWORD *)&v379[3].PrivateRuntimeDataSize;
        }
        *(_DWORD *)(v230 + 8 * v231 + 8) &= ~0x2000u;
      }
    }
    *(_QWORD *)(v224 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v224, 0LL);
    KeLeaveCriticalRegion();
  }
  v298 = 0;
  for ( m = v354; v298 < a2->NumAllocations; ++v298 )
    operator delete[](m[v298]);
  operator delete[](Src);
  if ( a2->NumAllocations > 5 )
  {
    operator delete[](v29);
    operator delete[](v355);
    operator delete[](v377);
    operator delete[](m);
    operator delete[](v356);
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v398);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v396, v300);
  v302 = v381;
  if ( v381 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)v381 + 9);
  if ( !*((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v302, v301) + 283) )
    goto LABEL_496;
  v305 = KeGetCurrentThread();
  if ( !v305 )
  {
    v306 = WdLogNewEntry5_WdAssertion(v304, v303);
    *(_QWORD *)(v306 + 24) = 496LL;
    WdLogEvent5_WdAssertion(v306);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v304);
  CurrentProcess = PsGetCurrentProcess(v309, v308);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  if ( !CurrentProcessSessionId )
    goto LABEL_471;
  if ( (unsigned int)PsGetThreadSessionId(v305) != CurrentProcessSessionId )
    goto LABEL_471;
  if ( !ProcessDxgProcess )
    goto LABEL_471;
  v312 = *(void **)(ProcessDxgProcess + 88);
  if ( !v312 || v312 == &gDxgkWin32kEngInterface )
    goto LABEL_471;
  v313 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v316 = PsGetCurrentProcess(v315, v314),
        ProcessSessionId = PsGetProcessSessionIdEx(v316),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(v305);
    if ( ThreadWin32Thread )
      v313 = *ThreadWin32Thread;
  }
  if ( v313 )
  {
    ThreadProperty = *(struct DXGTHREAD **)(v313 + 80);
  }
  else
  {
LABEL_471:
    ThreadProperty = (struct DXGTHREAD *)PsGetThreadProperty(KeGetCurrentThread(), 0x68547844uLL, 0);
    if ( !ThreadProperty )
      ThreadProperty = DxgkThreadObjectCreateDxgThread();
    if ( !ThreadProperty )
      goto LABEL_496;
    ObfDereferenceObject(ThreadProperty);
  }
  if ( ThreadProperty )
  {
    v323 = KeGetCurrentThread();
    if ( !v323 )
    {
      v324 = WdLogNewEntry5_WdAssertion(v320, v319);
      *(_QWORD *)(v324 + 24) = 496LL;
      WdLogEvent5_WdAssertion(v324);
    }
    v325 = PsGetCurrentProcessSessionId(v320);
    v328 = PsGetCurrentProcess(v327, v326);
    v329 = PsGetProcessDxgProcess(v328);
    if ( !v325 )
      goto LABEL_489;
    if ( (unsigned int)PsGetThreadSessionId(v323) != v325 )
      goto LABEL_489;
    if ( !v329 )
      goto LABEL_489;
    v330 = *(void **)(v329 + 88);
    if ( !v330 || v330 == &gDxgkWin32kEngInterface )
      goto LABEL_489;
    v331 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v334 = PsGetCurrentProcess(v333, v332),
          v335 = PsGetProcessSessionIdEx(v334),
          v336 = PsGetCurrentThreadProcess(),
          v335 == (unsigned int)PsGetProcessSessionIdEx(v336)) )
    {
      v339 = (__int64 *)PsGetThreadWin32Thread(v323);
      if ( v339 )
        v331 = *v339;
    }
    if ( v331 )
    {
      DxgThread = *(int **)(v331 + 80);
    }
    else
    {
LABEL_489:
      DxgThread = (int *)PsGetThreadProperty(KeGetCurrentThread(), 0x68547844uLL, 0);
      if ( !DxgThread )
        DxgThread = (int *)DxgkThreadObjectCreateDxgThread();
      if ( DxgThread )
        ObfDereferenceObject(DxgThread);
      else
        DxgThread = 0LL;
    }
    if ( DxgThread[8] )
    {
      v341 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v338, v337);
      v341[3] = 275LL;
      v341[4] = 38LL;
      v341[5] = DxgThread[8];
      v341[6] = 0LL;
      v341[7] = 0LL;
      WdLogEvent5_WdCriticalError(v341);
    }
  }
LABEL_496:
  v342 = ListEntry;
  if ( ListEntry )
  {
    v343 = v394 + 1472;
    ++*(_DWORD *)(v394 + 1500);
    if ( ExQueryDepthSList((PSLIST_HEADER)v343) < *(_WORD *)(v343 + 16) )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v343, v342);
    }
    else
    {
      ++*(_DWORD *)(v343 + 32);
      (*(void (__fastcall **)(struct _SLIST_ENTRY *))(v343 + 56))(v342);
    }
  }
  return (unsigned int)v51;
}
