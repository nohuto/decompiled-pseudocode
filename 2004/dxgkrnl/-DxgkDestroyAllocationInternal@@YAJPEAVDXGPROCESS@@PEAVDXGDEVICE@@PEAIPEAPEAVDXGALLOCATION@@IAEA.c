/*
 * XREFs of ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0108470
 * Callers:
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C010A060 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 * Callees:
 *     ?AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z @ 0x1C0001DE0 (-AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000217C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002B94 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0003EE0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C00056C8 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C00056F8 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00063E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006444 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0007264 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0007AE4 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00099A8 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C0009D18 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000A37C (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000B3EC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x1C000D2A4 (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C0014810 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C001E210 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00246D0 (--0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C00246F8 (--0DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     ?IsDisplayedPrimary@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@@Z @ 0x1C003E9E4 (-IsDisplayedPrimary@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E4064 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00E4748 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FCD20 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEAVDXGRESOURCE@@@Z @ 0x1C0107C30 (-ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEA.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0109590 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C0120184 (DxgkReleaseSessionModeChangeLock.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C013BF44 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C014021C (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x1C01411FC (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 *     ?ReleaseWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C014122C (-ReleaseWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ?AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C014129C (-AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C0141348 (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 *     ?SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C01414A0 (-SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C0148508 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01493BC (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C014A790 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?Flush@DXGDODPRESENT@@QEAAXXZ @ 0x1C0162AD0 (-Flush@DXGDODPRESENT@@QEAAXXZ.c)
 *     ?IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z @ 0x1C0169D68 (-IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z.c)
 *     ?RemoveAllocationsAndTransferToList@DXGDEVICE@@QEAAXPEAPEAVDXGALLOCATION@@I0@Z @ 0x1C016B024 (-RemoveAllocationsAndTransferToList@DXGDEVICE@@QEAAXPEAPEAVDXGALLOCATION@@I0@Z.c)
 *     ?DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C0211930 (-DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C0211B58 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 *     ?DisableTransitionalPrimaryAllocations@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0211E5C (-DisableTransitionalPrimaryAllocations@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@P.c)
 *     DxgkDestroyClientAllocation @ 0x1C0229964 (DxgkDestroyClientAllocation.c)
 *     ?VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0247C98 (-VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDIC.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0268C6C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C027F7F4 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
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
  const struct DXGALLOCATION *v29; // rdi
  unsigned int v30; // edx
  __int64 v31; // rax
  int v32; // eax
  volatile signed __int64 *v33; // rdi
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  _QWORD *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  unsigned int v43; // r13d
  __int64 v44; // rdx
  ADAPTER_DISPLAY *v45; // rcx
  __int64 v46; // r14
  struct DXGRESOURCE *v47; // rdi
  __int64 v48; // rax
  struct DXGALLOCATION *v49; // rdi
  char v50; // r12
  __int64 v51; // r8
  __int64 v52; // rcx
  __int64 v53; // rax
  unsigned int v54; // r8d
  unsigned int v55; // r8d
  ADAPTER_DISPLAY *v56; // rcx
  __int64 v57; // rax
  bool v58; // r14
  unsigned int v59; // r12d
  struct DXGALLOCATION **v60; // r14
  struct DXGALLOCATION *v61; // rdi
  __int64 v62; // rax
  __int64 v63; // rax
  unsigned int v64; // r8d
  unsigned int v65; // r8d
  __int64 v66; // r9
  int v67; // r12d
  __int64 v68; // rax
  int v69; // eax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rdi
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v74; // rdi
  __int64 v75; // rax
  unsigned int v76; // edi
  __int64 v77; // rcx
  struct ADAPTER_RENDER *v78; // rdx
  __int64 v79; // r14
  __int64 v80; // rax
  struct DXGALLOCATION *v81; // rdi
  struct DXGDEVICE *VidPnSourceOwner; // rax
  __int64 v83; // rdx
  __int64 v84; // r10
  __int64 v85; // r8
  unsigned int v86; // r9d
  ADAPTER_DISPLAY *v87; // r10
  unsigned __int8 v88; // r8
  __int64 v89; // rcx
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rcx
  struct DXGDEVICE *v95; // rbx
  __int64 v96; // rax
  __int64 v97; // rdx
  int v98; // eax
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // rdi
  __int64 v102; // rax
  char *v103; // rdx
  DXGDODPRESENT *v104; // rcx
  __int64 v105; // rcx
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // rax
  __int64 v109; // r13
  struct DXGRESOURCE *v110; // r14
  unsigned int v111; // r12d
  unsigned int v112; // edi
  struct DXGPROCESS *Current; // rax
  DXG_GUEST_VIRTUALGPU_VMBUS *v114; // rcx
  unsigned int v115; // r13d
  struct DXGALLOCATION **v116; // r10
  struct DXGALLOCATION **v117; // rcx
  __int64 v118; // rdx
  struct DXGALLOCATION *v119; // rdi
  struct DXGRESOURCE *v120; // r14
  struct DXGALLOCATION *v121; // r9
  _QWORD *v122; // rax
  struct DXGALLOCATION *v123; // r9
  _QWORD *v124; // rax
  unsigned __int8 v125; // al
  struct DXGDEVICE *v126; // rbx
  __int64 v127; // rdx
  __int64 v128; // rdx
  __int64 v129; // rax
  __int64 v130; // rdx
  __int64 v131; // rcx
  struct DXGADAPTER *v132; // rbx
  char v133; // bl
  __int64 v134; // rax
  char v135; // [rsp+40h] [rbp-3C8h] BYREF
  unsigned __int8 v136; // [rsp+41h] [rbp-3C7h]
  char i; // [rsp+42h] [rbp-3C6h]
  bool v138; // [rsp+43h] [rbp-3C5h]
  char v139; // [rsp+44h] [rbp-3C4h]
  unsigned __int8 v140; // [rsp+45h] [rbp-3C3h] BYREF
  char v141; // [rsp+46h] [rbp-3C2h]
  char v142; // [rsp+47h] [rbp-3C1h]
  unsigned __int8 v143[4]; // [rsp+48h] [rbp-3C0h] BYREF
  unsigned int v144; // [rsp+4Ch] [rbp-3BCh]
  __int64 v145; // [rsp+50h] [rbp-3B8h]
  struct DXGRESOURCE *v146; // [rsp+58h] [rbp-3B0h] BYREF
  struct DXGDEVICE *v147; // [rsp+60h] [rbp-3A8h]
  struct DXGALLOCATION *v148; // [rsp+68h] [rbp-3A0h]
  struct DXGALLOCATION **v149; // [rsp+70h] [rbp-398h]
  __int64 v150; // [rsp+78h] [rbp-390h]
  struct DXGALLOCATION *v151; // [rsp+80h] [rbp-388h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v152; // [rsp+88h] [rbp-380h]
  __int64 v153; // [rsp+90h] [rbp-378h] BYREF
  struct DXGADAPTER *v154; // [rsp+98h] [rbp-370h]
  char v155; // [rsp+A0h] [rbp-368h]
  unsigned int v156; // [rsp+A8h] [rbp-360h]
  _BYTE v157[16]; // [rsp+B0h] [rbp-358h] BYREF
  struct _KTHREAD **v158; // [rsp+C0h] [rbp-348h]
  _BYTE v159[8]; // [rsp+D0h] [rbp-338h] BYREF
  char v160; // [rsp+D8h] [rbp-330h] BYREF
  DXGADAPTER *v161; // [rsp+E8h] [rbp-320h]
  char v162; // [rsp+F0h] [rbp-318h]
  __int64 v163; // [rsp+F8h] [rbp-310h]
  _BYTE v164[88]; // [rsp+118h] [rbp-2F0h] BYREF
  _QWORD v165[2]; // [rsp+170h] [rbp-298h] BYREF
  int v166; // [rsp+180h] [rbp-288h]
  _BYTE v167[400]; // [rsp+188h] [rbp-280h] BYREF
  _BYTE v168[160]; // [rsp+320h] [rbp-E8h] BYREF

  v149 = a4;
  v12 = a3;
  v158 = a1;
  v15.0 = a8.0;
  v152 = a10;
  if ( a11 )
  {
    v16 = 0;
    v156 = 0;
    v17 = a7;
    while ( v16 < a7 )
    {
      v18 = (unsigned int *)&a9[4 * v16];
      if ( (unsigned __int64)v18 >= MmUserProbeAddress )
        v18 = (unsigned int *)MmUserProbeAddress;
      a3[v16++] = *v18;
      v156 = v16;
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
  v146 = 0LL;
  v20 = ValidateDestroyAllocation(
          a1,
          this,
          a5,
          (struct _EX_RUNDOWN_REF *)*a6,
          v17,
          (struct _EX_RUNDOWN_REF **)a4,
          &v146);
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
  v145 = v27;
  i = 0;
  if ( (a8.Value & 0x80000000) != 0 )
  {
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v168, (__int64)this, 2, v24, 0);
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v168, v28);
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL))
      && *((_DWORD *)this + 108) == 1
      && *((_BYTE *)DXGPROCESS::GetCurrent() + 346) )
    {
      if ( v146 )
      {
        v29 = (const struct DXGALLOCATION *)*((_QWORD *)v146 + 3);
        for ( i = 1; v29; v29 = (const struct DXGALLOCATION *)*((_QWORD *)v29 + 8) )
        {
          v30 = *(_DWORD *)(*((_QWORD *)v29 + 6) + 4LL);
          if ( (v30 & 1) == 0
            || *((_QWORD *)this + 231) != *(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
            || v29 == DXGDEVICE::GetDisplayedPrimary((struct _KTHREAD **)this, (v30 >> 6) & 0xF) )
          {
            i = 0;
          }
        }
      }
      v27 = v145;
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v168);
  }
  if ( v27 )
    v31 = *(_QWORD *)(v27 + 2696);
  else
    v31 = 0LL;
  v165[0] = v31;
  v165[1] = a1;
  if ( v31 )
    v32 = *(_DWORD *)(v31 + 80);
  else
    v32 = 0;
  v166 = 4 * v32;
  memset(v167, 0, sizeof(v167));
  v33 = *(volatile signed __int64 **)(*((_QWORD *)this + 2) + 16LL);
  v154 = (struct DXGADAPTER *)v33;
  _InterlockedIncrement64(v33 + 3);
  v153 = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v33 + 17, 0LL);
  v155 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v159, (__int64)this, 2, v34, 0);
  if ( v164[72] )
    COREACCESS::AcquireShared((COREACCESS *)v164, 0LL);
  if ( v162 )
  {
    v37 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v36, v35);
    v37[3] = 275LL;
    v37[4] = 4LL;
    v37[5] = &v160;
    v37[6] = 0LL;
    v37[7] = 0LL;
    WdLogEvent5_WdCriticalError(v37);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v161 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v161 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v38, &EventBlockThread, v39, 72);
      KeWaitForSingleObject((char *)v161 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v161, 0LL);
  }
  v163 = 0LL;
  v162 = 1;
  if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 200LL) == 4 )
  {
    v40 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v40 + 24) = this;
    WdLogEvent5_WdEvent(v40);
LABEL_46:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v159);
LABEL_47:
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v153);
LABEL_48:
    MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v165);
    return 0LL;
  }
  if ( *((_DWORD *)this + 144) == 4 )
  {
    v41 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v41 + 24) = this;
    WdLogEvent5_WdEvent(v41);
    DxgkDestroyClientAllocation(v42, this, v17, a4, v146);
    goto LABEL_46;
  }
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 216LL) + 64LL) + 40LL)
                 + 28LL) < 0x5015u )
    v15.0 = (struct _D3DDDICB_DESTROYALLOCATION2FLAGS::$D35BDED8E381779C59C0009B00E168F7::$815964D178D3487C3146BEBBE8BF611F)(a8.Value & 0xFFFFFFFE);
  v141 = 0;
  v142 = 0;
  v136 = 0;
  v139 = 0;
  v138 = 0;
  v144 = 0;
  v148 = 0LL;
  v43 = -1;
  DXGSESSIONMODECHANGELOCK::DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v135);
  v147 = 0LL;
  DXGPROCESSCOPYPROTECTIONMUTEX::DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v157, a1);
  v46 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  v150 = v46;
  v47 = v146;
  if ( v146 )
  {
    if ( *((struct DXGDEVICE **)v146 + 1) != this )
    {
      v48 = WdLogNewEntry5_WdAssertion(v45, v44);
      *(_QWORD *)(v48 + 24) = 9574LL;
      WdLogEvent5_WdAssertion(v48);
    }
    v49 = (struct DXGALLOCATION *)*((_QWORD *)v47 + 3);
    if ( v49 )
    {
      v50 = i;
      while ( 1 )
      {
        v51 = *((_QWORD *)v49 + 6);
        v44 = *(_DWORD *)(v51 + 4) & 1;
        v52 = (unsigned int)v44 + ((*(_DWORD *)(v51 + 4) >> 1) & 1) + ((*(_DWORD *)(v51 + 4) >> 13) & 1);
        if ( (unsigned int)v52 > 1 )
        {
          v53 = WdLogNewEntry5_WdAssertion(v52, v44);
          *(_QWORD *)(v53 + 24) = 9583LL;
          WdLogEvent5_WdAssertion(v53);
          v51 = *((_QWORD *)v49 + 6);
        }
        v54 = *(_DWORD *)(v51 + 4);
        if ( (v54 & 1) != 0
          && (DXGDEVICE::IsVidPnSourcePrimaryValid(this, (v54 >> 6) & 0xF)
           || v46
           && (v56 = *(ADAPTER_DISPLAY **)(v46 + 2696)) != 0LL
           && !ADAPTER_DISPLAY::IsVidPnSourceVisible(v56, v55))
          && !v50 )
        {
          v136 = 1;
          v148 = v49;
          v57 = *((_QWORD *)v49 + 6);
          v43 = (*(_DWORD *)(v57 + 4) >> 6) & 0xF;
          v45 = (ADAPTER_DISPLAY *)v43;
          v144 = 1 << ((*(_DWORD *)(v57 + 4) >> 6) & 0xF);
          v58 = 0;
          goto LABEL_87;
        }
        v45 = (ADAPTER_DISPLAY *)*(unsigned int *)(*((_QWORD *)v49 + 6) + 4LL);
        if ( ((unsigned __int8)v45 & 2) != 0 )
          break;
        v49 = (struct DXGALLOCATION *)*((_QWORD *)v49 + 8);
        if ( !v49 )
          goto LABEL_71;
      }
      v139 = 1;
    }
LABEL_71:
    v58 = 0;
LABEL_87:
    v47 = v146;
    goto LABEL_88;
  }
  if ( v17 )
  {
    v59 = 0;
    v60 = v149;
    while ( 1 )
    {
      v61 = *v60;
      if ( !*v60 )
      {
        v62 = WdLogNewEntry5_WdAssertion(v45, v44);
        *(_QWORD *)(v62 + 24) = 9613LL;
        WdLogEvent5_WdAssertion(v62);
      }
      if ( *((struct DXGDEVICE **)v61 + 1) != this )
      {
        v63 = WdLogNewEntry5_WdAssertion(v45, v44);
        *(_QWORD *)(v63 + 24) = 9614LL;
        WdLogEvent5_WdAssertion(v63);
      }
      if ( *(_DWORD *)(v150 + 324) == 1297040209 )
      {
        v44 = *(unsigned int *)(*((_QWORD *)v61 + 6) + 4LL);
        if ( (v44 & 8) != 0 )
          break;
      }
      v64 = *(_DWORD *)(*((_QWORD *)v61 + 6) + 4LL);
      if ( (v64 & 1) != 0
        && (DXGDEVICE::IsVidPnSourcePrimaryValid(this, (v64 >> 6) & 0xF)
         || (v45 = *(ADAPTER_DISPLAY **)(v66 + 2696)) != 0LL && !ADAPTER_DISPLAY::IsVidPnSourceVisible(v45, v65)) )
      {
        v136 = 1;
        v138 = v148 != 0LL;
        v148 = v61;
        v43 = (*(_DWORD *)(*((_QWORD *)v61 + 6) + 4LL) >> 6) & 0xF;
        v45 = (ADAPTER_DISPLAY *)v43;
        v144 |= 1 << ((*(_DWORD *)(*((_QWORD *)v61 + 6) + 4LL) >> 6) & 0xF);
      }
      ++v59;
      ++v60;
      if ( v59 >= a7 )
        goto LABEL_86;
    }
    v141 = 1;
    if ( !DXGDEVICE::IsDisplayedPrimary((struct _KTHREAD **)this, ((unsigned int)v44 >> 6) & 0xF, v61) )
    {
LABEL_86:
      v58 = v138;
      goto LABEL_87;
    }
    v142 = 1;
    v136 = 1;
    v58 = v148 != 0LL;
    v148 = v61;
    v43 = (*(_DWORD *)(*((_QWORD *)v61 + 6) + 4LL) >> 6) & 0xF;
    v45 = (ADAPTER_DISPLAY *)v43;
    v144 |= 1 << ((*(_DWORD *)(*((_QWORD *)v61 + 6) + 4LL) >> 6) & 0xF);
    goto LABEL_87;
  }
  v58 = 0;
LABEL_88:
  v67 = 0;
  if ( (*((_BYTE *)v158 + 347) & 0x20) == 0 )
    v67 = v136;
  LODWORD(v150) = v67;
  if ( !(_BYTE)v67 )
  {
    v79 = v145;
    if ( i )
      ADAPTER_DISPLAY::DisableTransitionalPrimaryAllocations(
        *(ADAPTER_DISPLAY **)(v145 + 2696),
        this,
        *((struct DXGALLOCATION **)v47 + 3),
        (struct COREDEVICEACCESS *)v159);
    goto LABEL_136;
  }
  if ( !v145 || !*(_QWORD *)(v145 + 2696) )
  {
    v68 = WdLogNewEntry5_WdAssertion(v45, v44);
    *(_QWORD *)(v68 + 24) = 9666LL;
    WdLogEvent5_WdAssertion(v68);
  }
  COREDEVICEACCESS::Release((COREDEVICEACCESS *)v159, v44);
  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v153);
  DXGDEVICE::FlushScheduler(this, 5u);
  v15.0 = (struct _D3DDDICB_DESTROYALLOCATION2FLAGS::$D35BDED8E381779C59C0009B00E168F7::$815964D178D3487C3146BEBBE8BF611F)(v15.Value | 1);
  MANAGEDPRIMARIESTRACKER::AcquireWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v165);
  v69 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v135, 1);
  v72 = v69;
  if ( v69 >= 0 )
  {
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession((struct _LUID *)(v145 + 316), 0);
    v74 = CddDeviceAndContextForCurrentSession;
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      v75 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v75 + 24) = v74;
      WdLogEvent5_WdEvent(v75);
    }
    if ( v147 )
    {
      if ( *((_QWORD *)v147 + 2) == *((_QWORD *)this + 2) )
      {
        *((_BYTE *)v147 + 1905) = 1;
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v157);
      }
      else
      {
        v147 = 0LL;
      }
    }
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v153);
    COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v159);
    if ( *((_DWORD *)this + 144) == 4 )
    {
      v92 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v92 + 24) = this;
      WdLogEvent5_WdEvent(v92);
      v95 = v147;
      if ( v147 )
      {
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v157, v93);
        *((_BYTE *)v95 + 1905) = 0;
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v95 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v147 + 2), v147);
      }
      DxgkDestroyClientAllocation(v94, this, a7, v149, v146);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v157);
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v135);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v159);
      if ( !v155 )
        goto LABEL_48;
      goto LABEL_47;
    }
    v76 = v144;
    MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v165, this, v144);
    v78 = (struct ADAPTER_RENDER *)*((_QWORD *)this + 2);
    if ( *((_QWORD *)this + 231) != *((_QWORD *)v78 + 2) )
    {
      v79 = v145;
LABEL_136:
      if ( v139 || v141 )
      {
        if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v161) )
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)v159, v97);
        if ( v142 )
        {
          v98 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(*(ADAPTER_DISPLAY **)(v79 + 2696), v43, 0, 0x10u, 0);
          v101 = v98;
          if ( v98 < 0 )
          {
            v102 = WdLogNewEntry5_WdError(v100, v99);
            *(_QWORD *)(v102 + 24) = v43;
            *(_QWORD *)(v102 + 32) = v101;
            WdLogEvent5_WdError(v102);
          }
        }
        DXGDEVICE::FlushScheduler(this, 6u);
        if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v161) )
          COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v159, v103);
        if ( !*(_QWORD *)(v79 + 2704) )
        {
          v104 = *(DXGDODPRESENT **)(*(_QWORD *)(v79 + 2696) + 384LL);
          if ( v104 )
            DXGDODPRESENT::Flush(v104);
        }
      }
      v105 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v105 + 184)
        && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v105 + 168)) )
      {
        v108 = WdLogNewEntry5_WdAssertion(v107, v106);
        *(_QWORD *)(v108 + 24) = 6343LL;
        WdLogEvent5_WdAssertion(v108);
      }
      v109 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      v110 = v146;
      if ( *(_BYTE *)(v109 + 209) )
      {
        if ( v146 )
          v111 = *((_DWORD *)v146 + 5);
        else
          v111 = 0;
        v112 = *((_DWORD *)this + 110);
        Current = DXGPROCESS::GetCurrent();
        v114 = (DXG_GUEST_VIRTUALGPU_VMBUS *)(v109 + 4240);
        v115 = a7;
        DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyAllocation(
          v114,
          *((_DWORD *)Current + 106),
          v112,
          v111,
          a7,
          v149,
          v15);
        if ( v110 )
          *((_DWORD *)v110 + 5) = 0;
        v116 = v149;
        if ( a7 )
        {
          v117 = v149;
          v118 = a7;
          do
          {
            *((_DWORD *)*v117++ + 24) = 0;
            --v118;
          }
          while ( v118 );
        }
        LOBYTE(v67) = v150;
      }
      else
      {
        v115 = a7;
        v116 = v149;
      }
      if ( v110 )
      {
        DXGDEVICE::TerminateAllocations(
          this,
          v110,
          1,
          *((struct DXGALLOCATION **)v110 + 3),
          (struct COREDEVICEACCESS *)v159,
          v15);
      }
      else
      {
        v151 = 0LL;
        DXGDEVICE::RemoveAllocationsAndTransferToList(this, v116, v115, &v151);
        v119 = v151;
        if ( v151 )
        {
          v120 = (struct DXGRESOURCE *)*((_QWORD *)v151 + 5);
          if ( v120 )
          {
            do
            {
              v121 = v119;
              v122 = (_QWORD *)((char *)v119 + 64);
              v119 = (struct DXGALLOCATION *)*((_QWORD *)v119 + 8);
              *v122 = 0LL;
              DXGDEVICE::TerminateAllocations(this, v120, 0, v121, (struct COREDEVICEACCESS *)v159, v15);
            }
            while ( v119 );
          }
          else
          {
            do
            {
              v123 = v119;
              v124 = (_QWORD *)((char *)v119 + 64);
              v119 = (struct DXGALLOCATION *)*((_QWORD *)v119 + 8);
              *v124 = 0LL;
              DXGDEVICE::TerminateAllocations(this, 0LL, 0, v123, (struct COREDEVICEACCESS *)v159, v15);
            }
            while ( v119 );
          }
          v151 = v119;
        }
      }
      if ( v139 )
        DXGDEVICE::CloseInternalCddPrimaryHandle(this, (struct COREDEVICEACCESS *)v159);
      v125 = 0;
      v140 = 0;
      v143[0] = 0;
      if ( (_BYTE)v67 )
      {
        v126 = v147;
        if ( v147 )
        {
          ADAPTER_DISPLAY::EnsureGdiOutput(
            *(ADAPTER_DISPLAY **)(v145 + 2696),
            v147,
            (struct COREDEVICEACCESS *)v159,
            &v140,
            v143,
            v152);
          v125 = v140;
        }
        MANAGEDPRIMARIESTRACKER::RestoreManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v165, v125);
        if ( v126 )
        {
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)v159, v127);
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v153);
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v157, v128);
          *((_BYTE *)v126 + 1905) = 0;
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v126 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v147 + 2), v147);
          if ( v135 )
          {
            v135 = 0;
            DxgkReleaseSessionModeChangeLock();
          }
          if ( v140 )
          {
            if ( v143[0] )
            {
              v129 = *(_QWORD *)(*((_QWORD *)this + 5) + 88LL);
              if ( v129 )
                (*(void (**)(void))(v129 + 192))();
            }
          }
        }
      }
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v157);
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v135);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v159);
      if ( v155 )
      {
        v132 = v154;
        ExReleasePushLockSharedEx((char *)v154 + 136, 0LL);
        KeLeaveCriticalRegion();
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v132 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v154 + 2), v154);
      }
      v133 = v166;
      if ( (v166 & 2) != 0 )
      {
        v134 = WdLogNewEntry5_WdAssertion(v131, v130);
        *(_QWORD *)(v134 + 24) = 216LL;
        WdLogEvent5_WdAssertion(v134);
      }
      if ( (v133 & 1) != 0 )
        MANAGEDPRIMARIESTRACKER::ReleaseWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v165);
      return 0LL;
    }
    if ( ((v76 - 1) & v76) != 0 )
    {
      v79 = v145;
      ADAPTER_DISPLAY::DisableAllPrimaries(*(ADAPTER_DISPLAY **)(v145 + 2696), v78);
      goto LABEL_136;
    }
    if ( v58 )
    {
      if ( v43 == -1 )
      {
        v80 = WdLogNewEntry5_WdAssertion(v77, v78);
        *(_QWORD *)(v80 + 24) = 9816LL;
        WdLogEvent5_WdAssertion(v80);
      }
      v79 = v145;
      ADAPTER_DISPLAY::DisablePrimaryOnDevice(*(ADAPTER_DISPLAY **)(v145 + 2696), this, v43, 0);
      goto LABEL_136;
    }
    v79 = v145;
    v81 = v148;
    VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner(
                         *(ADAPTER_DISPLAY **)(v145 + 2696),
                         (*(_DWORD *)(*((_QWORD *)v148 + 6) + 4LL) >> 6) & 0xF);
    if ( !VidPnSourceOwner || VidPnSourceOwner == this )
    {
      v84 = *(_QWORD *)(v79 + 2696);
      if ( *(_QWORD *)(*(_QWORD *)(v84 + 16) + 2704LL) )
      {
        if ( !DXGADAPTER::IsLegacyDisplayStateSynchronization(*(DXGADAPTER **)(v84 + 16)) )
        {
          v88 = 1;
LABEL_119:
          ADAPTER_DISPLAY::DisableMPOPlanes(v87, v86, v88);
          goto LABEL_120;
        }
        if ( *(_DWORD *)(v85 + 2596) == 2200 )
        {
          v88 = 0;
          goto LABEL_119;
        }
      }
    }
LABEL_120:
    v89 = *((_QWORD *)v81 + 6);
    if ( (*(_DWORD *)(v89 + 4) & 1) == 0 )
    {
      v90 = WdLogNewEntry5_WdAssertion(v89, v83);
      *(_QWORD *)(v90 + 24) = 9843LL;
      WdLogEvent5_WdAssertion(v90);
      v89 = *((_QWORD *)v81 + 6);
    }
    if ( ((*(_DWORD *)(v89 + 4) >> 6) & 0xF) != v43 )
    {
      v91 = WdLogNewEntry5_WdAssertion(v89, v83);
      *(_QWORD *)(v91 + 24) = 9844LL;
      WdLogEvent5_WdAssertion(v91);
    }
    ADAPTER_DISPLAY::DisablePrimaryAllocation(*(ADAPTER_DISPLAY **)(v79 + 2696), this, v81);
    goto LABEL_136;
  }
  v96 = WdLogNewEntry5_WdError(v71, v70);
  *(_QWORD *)(v96 + 24) = v72;
  WdLogEvent5_WdError(v96);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v157);
  DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v135);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v159);
  if ( v155 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v153);
  MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v165);
  return (unsigned int)v72;
}
