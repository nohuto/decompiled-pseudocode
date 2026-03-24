/*
 * XREFs of ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0109440
 * Callers:
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C010B260 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 * Callees:
 *     ?AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z @ 0x1C0001DE0 (-AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00022BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002848 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002BD4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BF0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004090 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C0005898 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C00058C8 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00065B8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006614 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006910 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0007514 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0007D94 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0009C58 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C000A05C (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000A6CC (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000B73C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x1C000D440 (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C0014FD0 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C001E9EC (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0025AC4 (--0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C0025AEC (--0DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     Feature_253710648__private_IsEnabledDeviceUsage @ 0x1C00260E4 (Feature_253710648__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ?IsDisplayedPrimary@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@@Z @ 0x1C003F7D4 (-IsDisplayedPrimary@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E49F4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00E56E4 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FD9E0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEAVDXGRESOURCE@@@Z @ 0x1C0108B80 (-ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEA.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C010A5F0 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C0122794 (DxgkReleaseSessionModeChangeLock.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C013F584 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C0143960 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x1C014493C (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 *     ?ReleaseWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C014496C (-ReleaseWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ?AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C01449DC (-AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C0144A88 (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 *     ?SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C0144D08 (-SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C014BD78 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C014CC2C (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C014E000 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?Flush@DXGDODPRESENT@@QEAAXXZ @ 0x1C0167A80 (-Flush@DXGDODPRESENT@@QEAAXXZ.c)
 *     ?IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z @ 0x1C016EEF8 (-IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z.c)
 *     ?RemoveAllocationsAndTransferToList@DXGDEVICE@@QEAAXPEAPEAVDXGALLOCATION@@I0@Z @ 0x1C016F574 (-RemoveAllocationsAndTransferToList@DXGDEVICE@@QEAAXPEAPEAVDXGALLOCATION@@I0@Z.c)
 *     ?DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C0211660 (-DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C0211888 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 *     ?DisableTransitionalPrimaryAllocations@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0211B8C (-DisableTransitionalPrimaryAllocations@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@P.c)
 *     DxgkDestroyClientAllocation @ 0x1C02296C4 (DxgkDestroyClientAllocation.c)
 *     ?VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0247B08 (-VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDIC.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0268F1C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C027FAB4 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DxgkDestroyAllocationInternal(
        struct _KTHREAD **a1,
        struct DXGDEVICE *this,
        unsigned int *a3,
        struct DXGALLOCATION **a4,
        unsigned int a5,
        const unsigned int **a6,
        unsigned int a7,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a8,
        char *a9,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a10,
        unsigned __int8 a11)
{
  unsigned int *v12; // r9
  struct _D3DDDICB_DESTROYALLOCATION2FLAGS v15; // ebx
  unsigned int v16; // r10d
  unsigned int v17; // r12d
  unsigned int *v18; // rdx
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v27; // rdi
  char *v28; // rdx
  struct DXGRESOURCE *v29; // rdi
  const struct DXGALLOCATION *v30; // rdi
  unsigned int v31; // edx
  __int64 v32; // rax
  int v33; // eax
  volatile signed __int64 *v34; // rdi
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rcx
  _QWORD *v38; // rax
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rcx
  unsigned int v44; // r13d
  __int64 v45; // rdx
  ADAPTER_DISPLAY *v46; // rcx
  __int64 v47; // r14
  struct DXGRESOURCE *v48; // rdi
  __int64 v49; // rax
  struct DXGALLOCATION *v50; // rdi
  char v51; // r12
  __int64 v52; // r8
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rax
  unsigned int v56; // r8d
  unsigned int v57; // r8d
  ADAPTER_DISPLAY *v58; // rcx
  __int64 v59; // rax
  bool v60; // r14
  unsigned int v61; // r12d
  struct DXGALLOCATION **v62; // r14
  struct DXGALLOCATION *v63; // rdi
  __int64 v64; // rax
  __int64 v65; // rax
  unsigned int v66; // r8d
  unsigned int v67; // r8d
  __int64 v68; // r9
  int v69; // r12d
  __int64 v70; // rax
  int v71; // eax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rdi
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v76; // rdi
  __int64 v77; // rax
  unsigned int v78; // edi
  __int64 v79; // rcx
  struct ADAPTER_RENDER *v80; // rdx
  __int64 v81; // r14
  __int64 v82; // rax
  struct DXGALLOCATION *v83; // rdi
  struct DXGDEVICE *VidPnSourceOwner; // rax
  __int64 v85; // rdx
  __int64 v86; // r10
  __int64 v87; // r8
  unsigned int v88; // r9d
  ADAPTER_DISPLAY *v89; // r10
  unsigned __int8 v90; // r8
  __int64 v91; // rcx
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rdx
  __int64 v96; // rcx
  struct DXGDEVICE *v97; // rbx
  __int64 v98; // rax
  __int64 v99; // rdx
  int v100; // eax
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // rdi
  __int64 v104; // rax
  char *v105; // rdx
  DXGDODPRESENT *v106; // rcx
  __int64 v107; // rcx
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // rax
  __int64 v111; // r13
  struct DXGRESOURCE *v112; // r14
  unsigned int v113; // r12d
  unsigned int v114; // edi
  struct DXGPROCESS *Current; // rax
  DXG_GUEST_VIRTUALGPU_VMBUS *v116; // rcx
  unsigned int v117; // r13d
  struct DXGALLOCATION **v118; // r10
  struct DXGALLOCATION **v119; // rcx
  __int64 v120; // rdx
  struct DXGALLOCATION *v121; // rdi
  struct DXGRESOURCE *v122; // r14
  struct DXGALLOCATION *v123; // r9
  _QWORD *v124; // rax
  struct DXGALLOCATION *v125; // r9
  _QWORD *v126; // rax
  unsigned __int8 v127; // al
  struct DXGDEVICE *v128; // rbx
  __int64 v129; // rdx
  __int64 v130; // rdx
  __int64 v131; // rax
  __int64 v132; // rdx
  __int64 v133; // rcx
  struct DXGADAPTER *v134; // rbx
  char v135; // bl
  __int64 v136; // rax
  char v137; // [rsp+40h] [rbp-3E8h] BYREF
  unsigned __int8 v138; // [rsp+41h] [rbp-3E7h]
  char i; // [rsp+42h] [rbp-3E6h]
  bool v140; // [rsp+43h] [rbp-3E5h]
  char v141; // [rsp+44h] [rbp-3E4h]
  unsigned __int8 v142; // [rsp+45h] [rbp-3E3h] BYREF
  char v143; // [rsp+46h] [rbp-3E2h]
  char v144; // [rsp+47h] [rbp-3E1h]
  unsigned __int8 v145[4]; // [rsp+48h] [rbp-3E0h] BYREF
  unsigned int v146; // [rsp+4Ch] [rbp-3DCh]
  struct DXGRESOURCE *v147; // [rsp+50h] [rbp-3D8h] BYREF
  __int64 v148; // [rsp+58h] [rbp-3D0h]
  struct DXGDEVICE *v149; // [rsp+60h] [rbp-3C8h]
  struct DXGALLOCATION *v150; // [rsp+68h] [rbp-3C0h]
  struct DXGALLOCATION **v151; // [rsp+70h] [rbp-3B8h]
  __int64 v152; // [rsp+78h] [rbp-3B0h]
  struct DXGALLOCATION *v153; // [rsp+80h] [rbp-3A8h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v154; // [rsp+88h] [rbp-3A0h]
  __int64 v155; // [rsp+90h] [rbp-398h] BYREF
  struct DXGADAPTER *v156; // [rsp+98h] [rbp-390h]
  char v157; // [rsp+A0h] [rbp-388h]
  unsigned int v158; // [rsp+A8h] [rbp-380h]
  _BYTE v159[16]; // [rsp+B0h] [rbp-378h] BYREF
  struct _KTHREAD **v160; // [rsp+C0h] [rbp-368h]
  _BYTE v161[16]; // [rsp+C8h] [rbp-360h] BYREF
  _BYTE v162[24]; // [rsp+D8h] [rbp-350h] BYREF
  _BYTE v163[8]; // [rsp+F0h] [rbp-338h] BYREF
  char v164; // [rsp+F8h] [rbp-330h] BYREF
  DXGADAPTER *v165; // [rsp+108h] [rbp-320h]
  char v166; // [rsp+110h] [rbp-318h]
  __int64 v167; // [rsp+118h] [rbp-310h]
  _BYTE v168[88]; // [rsp+138h] [rbp-2F0h] BYREF
  _QWORD v169[2]; // [rsp+190h] [rbp-298h] BYREF
  int v170; // [rsp+1A0h] [rbp-288h]
  _BYTE v171[400]; // [rsp+1A8h] [rbp-280h] BYREF
  _BYTE v172[160]; // [rsp+340h] [rbp-E8h] BYREF

  v151 = a4;
  v12 = a3;
  v160 = a1;
  v15.0 = a8.0;
  v154 = a10;
  if ( a11 )
  {
    v16 = 0;
    v158 = 0;
    v17 = a7;
    while ( v16 < a7 )
    {
      v18 = (unsigned int *)&a9[4 * v16];
      if ( (unsigned __int64)v18 >= MmUserProbeAddress )
        v18 = (unsigned int *)MmUserProbeAddress;
      a3[v16++] = *v18;
      v158 = v16;
    }
    *a6 = a3;
  }
  else
  {
    v17 = a7;
    if ( a7 )
    {
      v19 = a7;
      do
      {
        *v12 = *(unsigned int *)((char *)v12 + a9 - (char *)a3);
        ++v12;
        --v19;
      }
      while ( v19 );
    }
  }
  v147 = 0LL;
  v20 = ValidateDestroyAllocation(
          a1,
          this,
          a5,
          (struct _EX_RUNDOWN_REF *)*a6,
          v17,
          (struct _EX_RUNDOWN_REF **)a4,
          &v147);
  if ( v20 == 255 )
    return 0LL;
  if ( v20 < 0 )
  {
    v25 = WdLogNewEntry5_WdWarning(v22, v21, v23);
    *(_QWORD *)(v25 + 24) = this;
    *(_QWORD *)(v25 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v25);
    return 3221225485LL;
  }
  v27 = *((_QWORD *)this + 231);
  v148 = v27;
  i = 0;
  if ( (a8.Value & 0x80000000) != 0 )
  {
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v172, (__int64)this, 2, v24, 0);
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v172, v28);
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL))
      && *((_DWORD *)this + 108) == 1
      && *((_BYTE *)DXGPROCESS::GetCurrent() + 346) )
    {
      v29 = v147;
      if ( v147 )
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v161, (struct DXGRESOURCE *)((char *)v147 + 80), 0);
        if ( (unsigned int)Feature_253710648__private_IsEnabledDeviceUsage() )
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v161);
        v30 = (const struct DXGALLOCATION *)*((_QWORD *)v29 + 3);
        for ( i = 1; v30; v30 = (const struct DXGALLOCATION *)*((_QWORD *)v30 + 8) )
        {
          v31 = *(_DWORD *)(*((_QWORD *)v30 + 6) + 4LL);
          if ( (v31 & 1) == 0
            || *((_QWORD *)this + 231) != *(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
            || v30 == DXGDEVICE::GetDisplayedPrimary((struct _KTHREAD **)this, (v31 >> 6) & 0xF) )
          {
            i = 0;
          }
        }
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v161);
      }
      v27 = v148;
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v172);
  }
  if ( v27 )
    v32 = *(_QWORD *)(v27 + 2696);
  else
    v32 = 0LL;
  v169[0] = v32;
  v169[1] = a1;
  if ( v32 )
    v33 = *(_DWORD *)(v32 + 80);
  else
    v33 = 0;
  v170 = 4 * v33;
  memset(v171, 0, sizeof(v171));
  v34 = *(volatile signed __int64 **)(*((_QWORD *)this + 2) + 16LL);
  v156 = (struct DXGADAPTER *)v34;
  _InterlockedIncrement64(v34 + 3);
  v155 = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v34 + 17, 0LL);
  v157 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v163, (__int64)this, 2, v35, 0);
  if ( v168[72] )
    COREACCESS::AcquireShared((COREACCESS *)v168, 0LL);
  if ( v166 )
  {
    v38 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v37, v36);
    v38[3] = 275LL;
    v38[4] = 4LL;
    v38[5] = &v164;
    v38[6] = 0LL;
    v38[7] = 0LL;
    WdLogEvent5_WdCriticalError(v38);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v165 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v165 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v39, &EventBlockThread, v40, 72);
      KeWaitForSingleObject((char *)v165 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v165, 0LL);
  }
  v167 = 0LL;
  v166 = 1;
  if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 200LL) == 4 )
  {
    v41 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v41 + 24) = this;
    WdLogEvent5_WdEvent(v41);
LABEL_49:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v163);
LABEL_50:
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v155);
LABEL_51:
    MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v169);
    return 0LL;
  }
  if ( *((_DWORD *)this + 144) == 4 )
  {
    v42 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v42 + 24) = this;
    WdLogEvent5_WdEvent(v42);
    DxgkDestroyClientAllocation(v43, this, v17, a4, v147);
    goto LABEL_49;
  }
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 216LL) + 64LL) + 40LL)
                 + 28LL) < 0x5015u )
    v15.0 = (struct _D3DDDICB_DESTROYALLOCATION2FLAGS::$D35BDED8E381779C59C0009B00E168F7::$815964D178D3487C3146BEBBE8BF611F)(a8.Value & 0xFFFFFFFE);
  v143 = 0;
  v144 = 0;
  v138 = 0;
  v141 = 0;
  v140 = 0;
  v146 = 0;
  v150 = 0LL;
  v44 = -1;
  DXGSESSIONMODECHANGELOCK::DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v137);
  v149 = 0LL;
  DXGPROCESSCOPYPROTECTIONMUTEX::DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v159, a1);
  v47 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  v152 = v47;
  v48 = v147;
  if ( v147 )
  {
    if ( *((struct DXGDEVICE **)v147 + 1) != this )
    {
      v49 = WdLogNewEntry5_WdAssertion(v46, v45);
      *(_QWORD *)(v49 + 24) = 9670LL;
      WdLogEvent5_WdAssertion(v49);
    }
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v162, (struct DXGRESOURCE *)((char *)v48 + 80), 0);
    if ( (unsigned int)Feature_253710648__private_IsEnabledDeviceUsage() )
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v162);
    v50 = (struct DXGALLOCATION *)*((_QWORD *)v48 + 3);
    if ( v50 )
    {
      v51 = i;
      while ( 1 )
      {
        v52 = *((_QWORD *)v50 + 6);
        v53 = *(_DWORD *)(v52 + 4) & 1;
        v54 = (unsigned int)v53 + ((*(_DWORD *)(v52 + 4) >> 1) & 1) + ((*(_DWORD *)(v52 + 4) >> 13) & 1);
        if ( (unsigned int)v54 > 1 )
        {
          v55 = WdLogNewEntry5_WdAssertion(v54, v53);
          *(_QWORD *)(v55 + 24) = 9685LL;
          WdLogEvent5_WdAssertion(v55);
          v52 = *((_QWORD *)v50 + 6);
        }
        v56 = *(_DWORD *)(v52 + 4);
        if ( (v56 & 1) != 0
          && (DXGDEVICE::IsVidPnSourcePrimaryValid(this, (v56 >> 6) & 0xF)
           || v47
           && (v58 = *(ADAPTER_DISPLAY **)(v47 + 2696)) != 0LL
           && !ADAPTER_DISPLAY::IsVidPnSourceVisible(v58, v57))
          && !v51 )
        {
          v138 = 1;
          v150 = v50;
          v59 = *((_QWORD *)v50 + 6);
          v44 = (*(_DWORD *)(v59 + 4) >> 6) & 0xF;
          v146 = 1 << ((*(_DWORD *)(v59 + 4) >> 6) & 0xF);
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v162);
          v60 = 0;
          goto LABEL_92;
        }
        if ( (*(_DWORD *)(*((_QWORD *)v50 + 6) + 4LL) & 2) != 0 )
          break;
        v50 = (struct DXGALLOCATION *)*((_QWORD *)v50 + 8);
        if ( !v50 )
          goto LABEL_76;
      }
      v141 = 1;
    }
LABEL_76:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v162);
    v60 = 0;
LABEL_92:
    v48 = v147;
    goto LABEL_93;
  }
  if ( v17 )
  {
    v61 = 0;
    v62 = v151;
    while ( 1 )
    {
      v63 = *v62;
      if ( !*v62 )
      {
        v64 = WdLogNewEntry5_WdAssertion(v46, v45);
        *(_QWORD *)(v64 + 24) = 9715LL;
        WdLogEvent5_WdAssertion(v64);
      }
      if ( *((struct DXGDEVICE **)v63 + 1) != this )
      {
        v65 = WdLogNewEntry5_WdAssertion(v46, v45);
        *(_QWORD *)(v65 + 24) = 9716LL;
        WdLogEvent5_WdAssertion(v65);
      }
      if ( *(_DWORD *)(v152 + 324) == 1297040209 )
      {
        v45 = *(unsigned int *)(*((_QWORD *)v63 + 6) + 4LL);
        if ( (v45 & 8) != 0 )
          break;
      }
      v66 = *(_DWORD *)(*((_QWORD *)v63 + 6) + 4LL);
      if ( (v66 & 1) != 0
        && (DXGDEVICE::IsVidPnSourcePrimaryValid(this, (v66 >> 6) & 0xF)
         || (v46 = *(ADAPTER_DISPLAY **)(v68 + 2696)) != 0LL && !ADAPTER_DISPLAY::IsVidPnSourceVisible(v46, v67)) )
      {
        v138 = 1;
        v140 = v150 != 0LL;
        v150 = v63;
        v44 = (*(_DWORD *)(*((_QWORD *)v63 + 6) + 4LL) >> 6) & 0xF;
        v46 = (ADAPTER_DISPLAY *)v44;
        v146 |= 1 << ((*(_DWORD *)(*((_QWORD *)v63 + 6) + 4LL) >> 6) & 0xF);
      }
      ++v61;
      ++v62;
      if ( v61 >= a7 )
        goto LABEL_91;
    }
    v143 = 1;
    if ( !DXGDEVICE::IsDisplayedPrimary((struct _KTHREAD **)this, ((unsigned int)v45 >> 6) & 0xF, v63) )
    {
LABEL_91:
      v60 = v140;
      goto LABEL_92;
    }
    v144 = 1;
    v138 = 1;
    v60 = v150 != 0LL;
    v150 = v63;
    v44 = (*(_DWORD *)(*((_QWORD *)v63 + 6) + 4LL) >> 6) & 0xF;
    v46 = (ADAPTER_DISPLAY *)v44;
    v146 |= 1 << ((*(_DWORD *)(*((_QWORD *)v63 + 6) + 4LL) >> 6) & 0xF);
    goto LABEL_92;
  }
  v60 = 0;
LABEL_93:
  v69 = 0;
  if ( (*((_BYTE *)v160 + 347) & 0x20) == 0 )
    v69 = v138;
  LODWORD(v152) = v69;
  if ( !(_BYTE)v69 )
  {
    v81 = v148;
    if ( i )
      ADAPTER_DISPLAY::DisableTransitionalPrimaryAllocations(
        *(ADAPTER_DISPLAY **)(v148 + 2696),
        this,
        *((struct DXGALLOCATION **)v48 + 3),
        (struct COREDEVICEACCESS *)v163);
    goto LABEL_141;
  }
  if ( !v148 || !*(_QWORD *)(v148 + 2696) )
  {
    v70 = WdLogNewEntry5_WdAssertion(v46, v45);
    *(_QWORD *)(v70 + 24) = 9768LL;
    WdLogEvent5_WdAssertion(v70);
  }
  COREDEVICEACCESS::Release((COREDEVICEACCESS *)v163, v45);
  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v155);
  DXGDEVICE::FlushScheduler(this, 5u);
  v15.0 = (struct _D3DDDICB_DESTROYALLOCATION2FLAGS::$D35BDED8E381779C59C0009B00E168F7::$815964D178D3487C3146BEBBE8BF611F)(v15.Value | 1);
  MANAGEDPRIMARIESTRACKER::AcquireWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v169);
  v71 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v137, 1);
  v74 = v71;
  if ( v71 >= 0 )
  {
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession((struct _LUID *)(v148 + 316), 0);
    v76 = CddDeviceAndContextForCurrentSession;
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      v77 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v77 + 24) = v76;
      WdLogEvent5_WdEvent(v77);
    }
    if ( v149 )
    {
      if ( *((_QWORD *)v149 + 2) == *((_QWORD *)this + 2) )
      {
        *((_BYTE *)v149 + 1905) = 1;
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v159);
      }
      else
      {
        v149 = 0LL;
      }
    }
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v155);
    COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v163);
    if ( *((_DWORD *)this + 144) == 4 )
    {
      v94 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v94 + 24) = this;
      WdLogEvent5_WdEvent(v94);
      v97 = v149;
      if ( v149 )
      {
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v159, v95);
        *((_BYTE *)v97 + 1905) = 0;
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v97 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v149 + 2), v149);
      }
      DxgkDestroyClientAllocation(v96, this, a7, v151, v147);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v159);
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v137);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v163);
      if ( !v157 )
        goto LABEL_51;
      goto LABEL_50;
    }
    v78 = v146;
    MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v169, this, v146);
    v80 = (struct ADAPTER_RENDER *)*((_QWORD *)this + 2);
    if ( *((_QWORD *)this + 231) != *((_QWORD *)v80 + 2) )
    {
      v81 = v148;
LABEL_141:
      if ( v141 || v143 )
      {
        if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v165) )
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)v163, v99);
        if ( v144 )
        {
          v100 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(*(ADAPTER_DISPLAY **)(v81 + 2696), v44, 0, 0x10u, 0);
          v103 = v100;
          if ( v100 < 0 )
          {
            v104 = WdLogNewEntry5_WdError(v102, v101);
            *(_QWORD *)(v104 + 24) = v44;
            *(_QWORD *)(v104 + 32) = v103;
            WdLogEvent5_WdError(v104);
          }
        }
        DXGDEVICE::FlushScheduler(this, 6u);
        if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v165) )
          COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v163, v105);
        if ( !*(_QWORD *)(v81 + 2704) )
        {
          v106 = *(DXGDODPRESENT **)(*(_QWORD *)(v81 + 2696) + 392LL);
          if ( v106 )
            DXGDODPRESENT::Flush(v106);
        }
      }
      v107 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v107 + 184)
        && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v107 + 168)) )
      {
        v110 = WdLogNewEntry5_WdAssertion(v109, v108);
        *(_QWORD *)(v110 + 24) = 6403LL;
        WdLogEvent5_WdAssertion(v110);
      }
      v111 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      v112 = v147;
      if ( *(_BYTE *)(v111 + 209) )
      {
        if ( v147 )
          v113 = *((_DWORD *)v147 + 5);
        else
          v113 = 0;
        v114 = *((_DWORD *)this + 110);
        Current = DXGPROCESS::GetCurrent();
        v116 = (DXG_GUEST_VIRTUALGPU_VMBUS *)(v111 + 4240);
        v117 = a7;
        DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyAllocation(
          v116,
          *((_DWORD *)Current + 106),
          v114,
          v113,
          a7,
          v151,
          v15);
        if ( v112 )
          *((_DWORD *)v112 + 5) = 0;
        v118 = v151;
        if ( a7 )
        {
          v119 = v151;
          v120 = a7;
          do
          {
            *((_DWORD *)*v119++ + 24) = 0;
            --v120;
          }
          while ( v120 );
        }
        LOBYTE(v69) = v152;
      }
      else
      {
        v117 = a7;
        v118 = v151;
      }
      if ( v112 )
      {
        DXGDEVICE::TerminateAllocations(
          this,
          v112,
          1,
          *((struct DXGALLOCATION **)v112 + 3),
          (struct COREDEVICEACCESS *)v163,
          v15);
      }
      else
      {
        v153 = 0LL;
        DXGDEVICE::RemoveAllocationsAndTransferToList(this, v118, v117, &v153);
        v121 = v153;
        if ( v153 )
        {
          v122 = (struct DXGRESOURCE *)*((_QWORD *)v153 + 5);
          if ( v122 )
          {
            do
            {
              v123 = v121;
              v124 = (_QWORD *)((char *)v121 + 64);
              v121 = (struct DXGALLOCATION *)*((_QWORD *)v121 + 8);
              *v124 = 0LL;
              DXGDEVICE::TerminateAllocations(this, v122, 0, v123, (struct COREDEVICEACCESS *)v163, v15);
            }
            while ( v121 );
          }
          else
          {
            do
            {
              v125 = v121;
              v126 = (_QWORD *)((char *)v121 + 64);
              v121 = (struct DXGALLOCATION *)*((_QWORD *)v121 + 8);
              *v126 = 0LL;
              DXGDEVICE::TerminateAllocations(this, 0LL, 0, v125, (struct COREDEVICEACCESS *)v163, v15);
            }
            while ( v121 );
          }
          v153 = v121;
        }
      }
      if ( v141 )
        DXGDEVICE::CloseInternalCddPrimaryHandle(this, (struct COREDEVICEACCESS *)v163);
      v127 = 0;
      v142 = 0;
      v145[0] = 0;
      if ( (_BYTE)v69 )
      {
        v128 = v149;
        if ( v149 )
        {
          ADAPTER_DISPLAY::EnsureGdiOutput(
            *(ADAPTER_DISPLAY **)(v148 + 2696),
            v149,
            (struct COREDEVICEACCESS *)v163,
            &v142,
            v145,
            v154);
          v127 = v142;
        }
        MANAGEDPRIMARIESTRACKER::RestoreManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v169, v127);
        if ( v128 )
        {
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)v163, v129);
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v155);
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v159, v130);
          *((_BYTE *)v128 + 1905) = 0;
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v128 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v149 + 2), v149);
          if ( v137 )
          {
            v137 = 0;
            DxgkReleaseSessionModeChangeLock();
          }
          if ( v142 )
          {
            if ( v145[0] )
            {
              v131 = *(_QWORD *)(*((_QWORD *)this + 5) + 88LL);
              if ( v131 )
                (*(void (**)(void))(v131 + 192))();
            }
          }
        }
      }
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v159);
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v137);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v163);
      if ( v157 )
      {
        v134 = v156;
        ExReleasePushLockSharedEx((char *)v156 + 136, 0LL);
        KeLeaveCriticalRegion();
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v134 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v156 + 2), v156);
      }
      v135 = v170;
      if ( (v170 & 2) != 0 )
      {
        v136 = WdLogNewEntry5_WdAssertion(v133, v132);
        *(_QWORD *)(v136 + 24) = 217LL;
        WdLogEvent5_WdAssertion(v136);
      }
      if ( (v135 & 1) != 0 )
        MANAGEDPRIMARIESTRACKER::ReleaseWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v169);
      return 0LL;
    }
    if ( ((v78 - 1) & v78) != 0 )
    {
      v81 = v148;
      ADAPTER_DISPLAY::DisableAllPrimaries(*(ADAPTER_DISPLAY **)(v148 + 2696), v80);
      goto LABEL_141;
    }
    if ( v60 )
    {
      if ( v44 == -1 )
      {
        v82 = WdLogNewEntry5_WdAssertion(v79, v80);
        *(_QWORD *)(v82 + 24) = 9918LL;
        WdLogEvent5_WdAssertion(v82);
      }
      v81 = v148;
      ADAPTER_DISPLAY::DisablePrimaryOnDevice(*(ADAPTER_DISPLAY **)(v148 + 2696), this, v44, 0);
      goto LABEL_141;
    }
    v81 = v148;
    v83 = v150;
    VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner(
                         *(ADAPTER_DISPLAY **)(v148 + 2696),
                         (*(_DWORD *)(*((_QWORD *)v150 + 6) + 4LL) >> 6) & 0xF);
    if ( !VidPnSourceOwner || VidPnSourceOwner == this )
    {
      v86 = *(_QWORD *)(v81 + 2696);
      if ( *(_QWORD *)(*(_QWORD *)(v86 + 16) + 2704LL) )
      {
        if ( !DXGADAPTER::IsLegacyDisplayStateSynchronization(*(DXGADAPTER **)(v86 + 16)) )
        {
          v90 = 1;
LABEL_124:
          ADAPTER_DISPLAY::DisableMPOPlanes(v89, v88, v90);
          goto LABEL_125;
        }
        if ( *(_DWORD *)(v87 + 2596) == 2200 )
        {
          v90 = 0;
          goto LABEL_124;
        }
      }
    }
LABEL_125:
    v91 = *((_QWORD *)v83 + 6);
    if ( (*(_DWORD *)(v91 + 4) & 1) == 0 )
    {
      v92 = WdLogNewEntry5_WdAssertion(v91, v85);
      *(_QWORD *)(v92 + 24) = 9945LL;
      WdLogEvent5_WdAssertion(v92);
      v91 = *((_QWORD *)v83 + 6);
    }
    if ( ((*(_DWORD *)(v91 + 4) >> 6) & 0xF) != v44 )
    {
      v93 = WdLogNewEntry5_WdAssertion(v91, v85);
      *(_QWORD *)(v93 + 24) = 9946LL;
      WdLogEvent5_WdAssertion(v93);
    }
    ADAPTER_DISPLAY::DisablePrimaryAllocation(*(ADAPTER_DISPLAY **)(v81 + 2696), this, v83);
    goto LABEL_141;
  }
  v98 = WdLogNewEntry5_WdError(v73, v72);
  *(_QWORD *)(v98 + 24) = v74;
  WdLogEvent5_WdError(v98);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v159);
  DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v137);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v163);
  if ( v157 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v155);
  MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v169);
  return (unsigned int)v74;
}
