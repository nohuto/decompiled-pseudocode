/*
 * XREFs of ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C010C740
 * Callers:
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C010E330 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0008348 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C00099AC (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0009A0C (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000A1D4 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000A3BC (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C000AA18 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000AA48 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C000D034 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D3D0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D42C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00115CC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z @ 0x1C0011CC8 (-AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C0011DB0 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x1C0013964 (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C001AB20 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C001E1C0 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0024550 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00247AC (--0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C00247D4 (--0DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?IsDisplayedPrimary@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@@Z @ 0x1C003DB08 (-IsDisplayedPrimary@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00DB790 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00DD24C (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FD2B0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEAVDXGRESOURCE@@@Z @ 0x1C010BEA0 (-ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEA.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C010D860 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C011438C (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C012BF80 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C012F300 (-AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C012F3AC (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x1C0130398 (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 *     ?ReleaseWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C01303C8 (-ReleaseWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C0130678 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C0130968 (-SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0133440 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C013FA94 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C01402B0 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?Flush@DXGDODPRESENT@@QEAAXXZ @ 0x1C0152430 (-Flush@DXGDODPRESENT@@QEAAXXZ.c)
 *     ?IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z @ 0x1C015A728 (-IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z.c)
 *     ?RemoveAllocationsAndTransferToList@DXGDEVICE@@QEAAXPEAPEAVDXGALLOCATION@@I0@Z @ 0x1C015B5C4 (-RemoveAllocationsAndTransferToList@DXGDEVICE@@QEAAXPEAPEAVDXGALLOCATION@@I0@Z.c)
 *     ?DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C020D6E0 (-DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C020D908 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 *     ?DisableTransitionalPrimaryAllocations@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C020DC0C (-DisableTransitionalPrimaryAllocations@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@P.c)
 *     DxgkDestroyClientAllocation @ 0x1C0225724 (DxgkDestroyClientAllocation.c)
 *     ?VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C02439C8 (-VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDIC.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C026494C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C027B394 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
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
  __int64 v40; // rcx
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
  __int64 v53; // rcx
  __int64 v54; // rax
  unsigned int v55; // r8d
  unsigned int v56; // r8d
  ADAPTER_DISPLAY *v57; // rcx
  __int64 v58; // rax
  bool v59; // r14
  unsigned int v60; // r12d
  struct DXGALLOCATION **v61; // r14
  struct DXGALLOCATION *v62; // rdi
  __int64 v63; // rax
  __int64 v64; // rax
  unsigned int v65; // r8d
  unsigned int v66; // r8d
  __int64 v67; // r9
  int v68; // r12d
  __int64 v69; // rax
  int v70; // eax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rdi
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rdi
  __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rcx
  unsigned int v81; // edi
  __int64 v82; // rcx
  struct ADAPTER_RENDER *v83; // rdx
  __int64 v84; // r14
  __int64 v85; // rax
  struct DXGALLOCATION *v86; // rdi
  struct DXGDEVICE *VidPnSourceOwner; // rax
  __int64 v88; // rdx
  __int64 v89; // r10
  __int64 v90; // r8
  unsigned int v91; // r9d
  ADAPTER_DISPLAY *v92; // r10
  unsigned __int8 v93; // r8
  __int64 v94; // rcx
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rdx
  __int64 v99; // rcx
  struct DXGDEVICE *v100; // rbx
  __int64 v101; // rdx
  __int64 v102; // rax
  __int64 v103; // rdx
  int v104; // eax
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // rdi
  __int64 v108; // rax
  char *v109; // rdx
  DXGDODPRESENT *v110; // rcx
  __int64 v111; // rcx
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // rax
  __int64 v115; // r13
  struct DXGRESOURCE *v116; // r14
  unsigned int v117; // r12d
  unsigned int v118; // edi
  struct DXGPROCESS *Current; // rax
  DXG_GUEST_VIRTUALGPU_VMBUS *v120; // rcx
  unsigned int v121; // r13d
  struct DXGALLOCATION **v122; // r10
  struct DXGALLOCATION **v123; // rcx
  __int64 v124; // rdx
  __int64 v125; // rdx
  struct DXGALLOCATION *v126; // rdi
  struct DXGRESOURCE *v127; // r14
  struct DXGALLOCATION *v128; // r9
  _QWORD *v129; // rax
  struct DXGALLOCATION *v130; // r9
  _QWORD *v131; // rax
  unsigned __int8 v132; // al
  struct DXGDEVICE *v133; // rbx
  __int64 v134; // rdx
  __int64 v135; // rax
  __int64 v136; // rdx
  __int64 v137; // rcx
  struct DXGADAPTER *v138; // rbx
  char v139; // bl
  __int64 v140; // rax
  char v141; // [rsp+40h] [rbp-3C8h] BYREF
  unsigned __int8 v142; // [rsp+41h] [rbp-3C7h]
  char i; // [rsp+42h] [rbp-3C6h]
  bool v144; // [rsp+43h] [rbp-3C5h]
  char v145; // [rsp+44h] [rbp-3C4h]
  unsigned __int8 v146; // [rsp+45h] [rbp-3C3h] BYREF
  char v147; // [rsp+46h] [rbp-3C2h]
  char v148; // [rsp+47h] [rbp-3C1h]
  unsigned __int8 v149[4]; // [rsp+48h] [rbp-3C0h] BYREF
  unsigned int v150; // [rsp+4Ch] [rbp-3BCh]
  __int64 v151; // [rsp+50h] [rbp-3B8h]
  struct DXGRESOURCE *v152; // [rsp+58h] [rbp-3B0h] BYREF
  struct DXGDEVICE *v153; // [rsp+60h] [rbp-3A8h]
  struct DXGALLOCATION *v154; // [rsp+68h] [rbp-3A0h]
  struct DXGALLOCATION **v155; // [rsp+70h] [rbp-398h]
  __int64 v156; // [rsp+78h] [rbp-390h]
  struct DXGALLOCATION *v157; // [rsp+80h] [rbp-388h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v158; // [rsp+88h] [rbp-380h]
  __int64 v159; // [rsp+90h] [rbp-378h] BYREF
  struct DXGADAPTER *v160; // [rsp+98h] [rbp-370h]
  char v161; // [rsp+A0h] [rbp-368h]
  unsigned int v162; // [rsp+A8h] [rbp-360h]
  _BYTE v163[16]; // [rsp+B0h] [rbp-358h] BYREF
  struct _KTHREAD **v164; // [rsp+C0h] [rbp-348h]
  _BYTE v165[8]; // [rsp+D0h] [rbp-338h] BYREF
  char v166; // [rsp+D8h] [rbp-330h] BYREF
  DXGADAPTER *v167; // [rsp+E8h] [rbp-320h]
  char v168; // [rsp+F0h] [rbp-318h]
  __int64 v169; // [rsp+F8h] [rbp-310h]
  _BYTE v170[88]; // [rsp+118h] [rbp-2F0h] BYREF
  _QWORD v171[2]; // [rsp+170h] [rbp-298h] BYREF
  int v172; // [rsp+180h] [rbp-288h]
  _BYTE v173[400]; // [rsp+188h] [rbp-280h] BYREF
  _BYTE v174[160]; // [rsp+320h] [rbp-E8h] BYREF

  v155 = a4;
  v12 = a3;
  v164 = a1;
  v15.0 = a8.0;
  v158 = a10;
  if ( a11 )
  {
    v16 = 0;
    v162 = 0;
    v17 = a7;
    while ( v16 < a7 )
    {
      v18 = (unsigned int *)&a9[4 * v16];
      if ( (unsigned __int64)v18 >= MmUserProbeAddress )
        v18 = (unsigned int *)MmUserProbeAddress;
      a3[v16++] = *v18;
      v162 = v16;
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
  v152 = 0LL;
  v20 = ValidateDestroyAllocation(a1, this, a5, *a6, v17, (struct _EX_RUNDOWN_REF **)a4, &v152);
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
  v151 = v27;
  i = 0;
  if ( (a8.Value & 0x80000000) != 0 )
  {
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v174, (__int64)this, 2, v24, 0);
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v174, v28);
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL))
      && *((_DWORD *)this + 108) == 1
      && *((_BYTE *)DXGPROCESS::GetCurrent() + 346) )
    {
      if ( v152 )
      {
        v29 = (const struct DXGALLOCATION *)*((_QWORD *)v152 + 3);
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
      v27 = v151;
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v174);
  }
  if ( v27 )
    v31 = *(_QWORD *)(v27 + 2672);
  else
    v31 = 0LL;
  v171[0] = v31;
  v171[1] = a1;
  if ( v31 )
    v32 = *(_DWORD *)(v31 + 80);
  else
    v32 = 0;
  v172 = 4 * v32;
  memset(v173, 0, sizeof(v173));
  v33 = *(volatile signed __int64 **)(*((_QWORD *)this + 2) + 16LL);
  v160 = (struct DXGADAPTER *)v33;
  _InterlockedIncrement64(v33 + 3);
  v159 = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v33 + 17, 0LL);
  v161 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v165, (__int64)this, 2, v34, 0);
  if ( v170[72] )
    COREACCESS::AcquireShared((COREACCESS *)v170, 0LL);
  if ( v168 )
  {
    v37 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v36, v35);
    v37[3] = 275LL;
    v37[4] = 4LL;
    v37[5] = &v166;
    v37[6] = 0LL;
    v37[7] = 0LL;
    WdLogEvent5_WdCriticalError(v37);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v167 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v167 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v38, &EventBlockThread, v39, 72);
      KeWaitForSingleObject((char *)v167 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v167, 0LL);
  }
  v169 = 0LL;
  v168 = 1;
  v40 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( *(_DWORD *)(v40 + 200) == 4 )
  {
    v41 = WdLogNewEntry5_WdEvent(v40, v35);
    *(_QWORD *)(v41 + 24) = this;
    WdLogEvent5_WdEvent(v41);
LABEL_46:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v165);
LABEL_47:
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v159);
LABEL_48:
    MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v171);
    return 0LL;
  }
  if ( *((_DWORD *)this + 144) == 4 )
  {
    v42 = WdLogNewEntry5_WdEvent(v40, v35);
    *(_QWORD *)(v42 + 24) = this;
    WdLogEvent5_WdEvent(v42);
    DxgkDestroyClientAllocation(v43, this, v17, a4, v152);
    goto LABEL_46;
  }
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 216LL) + 64LL) + 40LL)
                 + 28LL) < 0x5015u )
    v15.0 = (struct _D3DDDICB_DESTROYALLOCATION2FLAGS::$D35BDED8E381779C59C0009B00E168F7::$815964D178D3487C3146BEBBE8BF611F)(a8.Value & 0xFFFFFFFE);
  v147 = 0;
  v148 = 0;
  v142 = 0;
  v145 = 0;
  v144 = 0;
  v150 = 0;
  v154 = 0LL;
  v44 = -1;
  DXGSESSIONMODECHANGELOCK::DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v141);
  v153 = 0LL;
  DXGPROCESSCOPYPROTECTIONMUTEX::DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v163, a1);
  v47 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  v156 = v47;
  v48 = v152;
  if ( v152 )
  {
    if ( *((struct DXGDEVICE **)v152 + 1) != this )
    {
      v49 = WdLogNewEntry5_WdAssertion(v46, v45);
      *(_QWORD *)(v49 + 24) = 9434LL;
      WdLogEvent5_WdAssertion(v49);
    }
    v50 = (struct DXGALLOCATION *)*((_QWORD *)v48 + 3);
    if ( v50 )
    {
      v51 = i;
      while ( 1 )
      {
        v52 = *((_QWORD *)v50 + 6);
        v45 = *(_DWORD *)(v52 + 4) & 1;
        v53 = (unsigned int)v45 + ((*(_DWORD *)(v52 + 4) >> 1) & 1) + ((*(_DWORD *)(v52 + 4) >> 13) & 1);
        if ( (unsigned int)v53 > 1 )
        {
          v54 = WdLogNewEntry5_WdAssertion(v53, v45);
          *(_QWORD *)(v54 + 24) = 9443LL;
          WdLogEvent5_WdAssertion(v54);
          v52 = *((_QWORD *)v50 + 6);
        }
        v55 = *(_DWORD *)(v52 + 4);
        if ( (v55 & 1) != 0
          && (DXGDEVICE::IsVidPnSourcePrimaryValid(this, (v55 >> 6) & 0xF)
           || v47
           && (v57 = *(ADAPTER_DISPLAY **)(v47 + 2672)) != 0LL
           && !ADAPTER_DISPLAY::IsVidPnSourceVisible(v57, v56))
          && !v51 )
        {
          v142 = 1;
          v154 = v50;
          v58 = *((_QWORD *)v50 + 6);
          v44 = (*(_DWORD *)(v58 + 4) >> 6) & 0xF;
          v46 = (ADAPTER_DISPLAY *)v44;
          v150 = 1 << ((*(_DWORD *)(v58 + 4) >> 6) & 0xF);
          v59 = 0;
          goto LABEL_87;
        }
        v46 = (ADAPTER_DISPLAY *)*(unsigned int *)(*((_QWORD *)v50 + 6) + 4LL);
        if ( ((unsigned __int8)v46 & 2) != 0 )
          break;
        v50 = (struct DXGALLOCATION *)*((_QWORD *)v50 + 8);
        if ( !v50 )
          goto LABEL_71;
      }
      v145 = 1;
    }
LABEL_71:
    v59 = 0;
LABEL_87:
    v48 = v152;
    goto LABEL_88;
  }
  if ( v17 )
  {
    v60 = 0;
    v61 = v155;
    while ( 1 )
    {
      v62 = *v61;
      if ( !*v61 )
      {
        v63 = WdLogNewEntry5_WdAssertion(v46, v45);
        *(_QWORD *)(v63 + 24) = 9473LL;
        WdLogEvent5_WdAssertion(v63);
      }
      if ( *((struct DXGDEVICE **)v62 + 1) != this )
      {
        v64 = WdLogNewEntry5_WdAssertion(v46, v45);
        *(_QWORD *)(v64 + 24) = 9474LL;
        WdLogEvent5_WdAssertion(v64);
      }
      if ( *(_DWORD *)(v156 + 324) == 1297040209 )
      {
        v45 = *(unsigned int *)(*((_QWORD *)v62 + 6) + 4LL);
        if ( (v45 & 8) != 0 )
          break;
      }
      v65 = *(_DWORD *)(*((_QWORD *)v62 + 6) + 4LL);
      if ( (v65 & 1) != 0
        && (DXGDEVICE::IsVidPnSourcePrimaryValid(this, (v65 >> 6) & 0xF)
         || (v46 = *(ADAPTER_DISPLAY **)(v67 + 2672)) != 0LL && !ADAPTER_DISPLAY::IsVidPnSourceVisible(v46, v66)) )
      {
        v142 = 1;
        v144 = v154 != 0LL;
        v154 = v62;
        v44 = (*(_DWORD *)(*((_QWORD *)v62 + 6) + 4LL) >> 6) & 0xF;
        v46 = (ADAPTER_DISPLAY *)v44;
        v150 |= 1 << ((*(_DWORD *)(*((_QWORD *)v62 + 6) + 4LL) >> 6) & 0xF);
      }
      ++v60;
      ++v61;
      if ( v60 >= a7 )
        goto LABEL_86;
    }
    v147 = 1;
    if ( !DXGDEVICE::IsDisplayedPrimary((struct _KTHREAD **)this, ((unsigned int)v45 >> 6) & 0xF, v62) )
    {
LABEL_86:
      v59 = v144;
      goto LABEL_87;
    }
    v148 = 1;
    v142 = 1;
    v59 = v154 != 0LL;
    v154 = v62;
    v44 = (*(_DWORD *)(*((_QWORD *)v62 + 6) + 4LL) >> 6) & 0xF;
    v46 = (ADAPTER_DISPLAY *)v44;
    v150 |= 1 << ((*(_DWORD *)(*((_QWORD *)v62 + 6) + 4LL) >> 6) & 0xF);
    goto LABEL_87;
  }
  v59 = 0;
LABEL_88:
  v68 = 0;
  if ( (*((_BYTE *)v164 + 347) & 0x20) == 0 )
    v68 = v142;
  LODWORD(v156) = v68;
  if ( !(_BYTE)v68 )
  {
    v84 = v151;
    if ( i )
      ADAPTER_DISPLAY::DisableTransitionalPrimaryAllocations(
        *(ADAPTER_DISPLAY **)(v151 + 2672),
        this,
        *((struct DXGALLOCATION **)v48 + 3),
        (struct COREDEVICEACCESS *)v165);
    goto LABEL_136;
  }
  if ( !v151 || !*(_QWORD *)(v151 + 2672) )
  {
    v69 = WdLogNewEntry5_WdAssertion(v46, v45);
    *(_QWORD *)(v69 + 24) = 9526LL;
    WdLogEvent5_WdAssertion(v69);
  }
  COREDEVICEACCESS::Release((COREDEVICEACCESS *)v165);
  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v159);
  DXGDEVICE::FlushScheduler(this, 5u);
  v15.0 = (struct _D3DDDICB_DESTROYALLOCATION2FLAGS::$D35BDED8E381779C59C0009B00E168F7::$815964D178D3487C3146BEBBE8BF611F)(v15.Value | 1);
  MANAGEDPRIMARIESTRACKER::AcquireWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v171);
  v70 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v141, 1);
  v73 = v70;
  if ( v70 >= 0 )
  {
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession((struct _LUID *)(v151 + 316), 0);
    v77 = CddDeviceAndContextForCurrentSession;
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      v78 = WdLogNewEntry5_WdEvent(v76, v75);
      *(_QWORD *)(v78 + 24) = v77;
      WdLogEvent5_WdEvent(v78);
    }
    if ( v153 )
    {
      if ( *((_QWORD *)v153 + 2) == *((_QWORD *)this + 2) )
      {
        *((_BYTE *)v153 + 1905) = 1;
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v163);
      }
      else
      {
        v153 = 0LL;
      }
    }
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v159);
    COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v165);
    if ( *((_DWORD *)this + 144) == 4 )
    {
      v97 = WdLogNewEntry5_WdEvent(v80, v79);
      *(_QWORD *)(v97 + 24) = this;
      WdLogEvent5_WdEvent(v97);
      v100 = v153;
      if ( v153 )
      {
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v163, v98);
        *((_BYTE *)v100 + 1905) = 0;
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v100 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v153 + 2), v153);
      }
      DxgkDestroyClientAllocation(v99, this, a7, v155, v152);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v163, v101);
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v141);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v165);
      if ( !v161 )
        goto LABEL_48;
      goto LABEL_47;
    }
    v81 = v150;
    MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v171, this, v150);
    v83 = (struct ADAPTER_RENDER *)*((_QWORD *)this + 2);
    if ( *((_QWORD *)this + 231) != *((_QWORD *)v83 + 2) )
    {
      v84 = v151;
LABEL_136:
      if ( v145 || v147 )
      {
        if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v167) )
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)v165);
        if ( v148 )
        {
          v104 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(*(ADAPTER_DISPLAY **)(v84 + 2672), v44, 0, 0x10u, 0);
          v107 = v104;
          if ( v104 < 0 )
          {
            v108 = WdLogNewEntry5_WdError(v106, v105);
            *(_QWORD *)(v108 + 24) = v44;
            *(_QWORD *)(v108 + 32) = v107;
            WdLogEvent5_WdError(v108);
          }
        }
        DXGDEVICE::FlushScheduler(this, 6u);
        if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v167) )
          COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v165, v109);
        if ( !*(_QWORD *)(v84 + 2680) )
        {
          v110 = *(DXGDODPRESENT **)(*(_QWORD *)(v84 + 2672) + 384LL);
          if ( v110 )
            DXGDODPRESENT::Flush(v110);
        }
      }
      v111 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v111 + 184)
        && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v111 + 168)) )
      {
        v114 = WdLogNewEntry5_WdAssertion(v113, v112);
        *(_QWORD *)(v114 + 24) = 6229LL;
        WdLogEvent5_WdAssertion(v114);
      }
      v115 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      v116 = v152;
      if ( *(_BYTE *)(v115 + 209) )
      {
        if ( v152 )
          v117 = *((_DWORD *)v152 + 5);
        else
          v117 = 0;
        v118 = *((_DWORD *)this + 110);
        Current = DXGPROCESS::GetCurrent();
        v120 = (DXG_GUEST_VIRTUALGPU_VMBUS *)(v115 + 4208);
        v121 = a7;
        DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyAllocation(
          v120,
          *((_DWORD *)Current + 106),
          v118,
          v117,
          a7,
          v155,
          v15);
        if ( v116 )
          *((_DWORD *)v116 + 5) = 0;
        v122 = v155;
        if ( a7 )
        {
          v123 = v155;
          v124 = a7;
          do
          {
            *((_DWORD *)*v123++ + 24) = 0;
            --v124;
          }
          while ( v124 );
        }
        LOBYTE(v68) = v156;
      }
      else
      {
        v121 = a7;
        v122 = v155;
      }
      if ( v116 )
      {
        DXGDEVICE::TerminateAllocations(
          this,
          v116,
          1,
          *((struct DXGALLOCATION **)v116 + 3),
          (struct COREDEVICEACCESS *)v165,
          v15);
      }
      else
      {
        v157 = 0LL;
        DXGDEVICE::RemoveAllocationsAndTransferToList(this, v122, v121, &v157);
        v126 = v157;
        if ( v157 )
        {
          v127 = (struct DXGRESOURCE *)*((_QWORD *)v157 + 5);
          if ( v127 )
          {
            do
            {
              v128 = v126;
              v129 = (_QWORD *)((char *)v126 + 64);
              v126 = (struct DXGALLOCATION *)*((_QWORD *)v126 + 8);
              *v129 = 0LL;
              DXGDEVICE::TerminateAllocations(this, v127, 0, v128, (struct COREDEVICEACCESS *)v165, v15);
            }
            while ( v126 );
          }
          else
          {
            do
            {
              v130 = v126;
              v131 = (_QWORD *)((char *)v126 + 64);
              v126 = (struct DXGALLOCATION *)*((_QWORD *)v126 + 8);
              *v131 = 0LL;
              DXGDEVICE::TerminateAllocations(this, 0LL, 0, v130, (struct COREDEVICEACCESS *)v165, v15);
            }
            while ( v126 );
          }
          v157 = v126;
        }
      }
      if ( v145 )
        DXGDEVICE::CloseInternalCddPrimaryHandle(this, (struct COREDEVICEACCESS *)v165);
      v132 = 0;
      v146 = 0;
      v149[0] = 0;
      if ( (_BYTE)v68 )
      {
        v133 = v153;
        if ( v153 )
        {
          ADAPTER_DISPLAY::EnsureGdiOutput(
            *(ADAPTER_DISPLAY **)(v151 + 2672),
            v153,
            (struct COREDEVICEACCESS *)v165,
            &v146,
            v149,
            v158);
          v132 = v146;
        }
        MANAGEDPRIMARIESTRACKER::RestoreManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v171, v132);
        if ( v133 )
        {
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)v165);
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v159);
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v163, v134);
          *((_BYTE *)v133 + 1905) = 0;
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v133 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v153 + 2), v153);
          if ( v141 )
          {
            v141 = 0;
            DxgkReleaseSessionModeChangeLock();
          }
          if ( v146 )
          {
            if ( v149[0] )
            {
              v135 = *(_QWORD *)(*((_QWORD *)this + 5) + 88LL);
              if ( v135 )
                (*(void (**)(void))(v135 + 192))();
            }
          }
        }
      }
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v163, v125);
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v141);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v165);
      if ( v161 )
      {
        v138 = v160;
        ExReleasePushLockSharedEx((char *)v160 + 136, 0LL);
        KeLeaveCriticalRegion();
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v138 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v160 + 2), v160);
      }
      v139 = v172;
      if ( (v172 & 2) != 0 )
      {
        v140 = WdLogNewEntry5_WdAssertion(v137, v136);
        *(_QWORD *)(v140 + 24) = 216LL;
        WdLogEvent5_WdAssertion(v140);
      }
      if ( (v139 & 1) != 0 )
        MANAGEDPRIMARIESTRACKER::ReleaseWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v171);
      return 0LL;
    }
    if ( ((v81 - 1) & v81) != 0 )
    {
      v84 = v151;
      ADAPTER_DISPLAY::DisableAllPrimaries(*(ADAPTER_DISPLAY **)(v151 + 2672), v83);
      goto LABEL_136;
    }
    if ( v59 )
    {
      if ( v44 == -1 )
      {
        v85 = WdLogNewEntry5_WdAssertion(v82, v83);
        *(_QWORD *)(v85 + 24) = 9676LL;
        WdLogEvent5_WdAssertion(v85);
      }
      v84 = v151;
      ADAPTER_DISPLAY::DisablePrimaryOnDevice(*(ADAPTER_DISPLAY **)(v151 + 2672), this, v44, 0);
      goto LABEL_136;
    }
    v84 = v151;
    v86 = v154;
    VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner(
                         *(ADAPTER_DISPLAY **)(v151 + 2672),
                         (*(_DWORD *)(*((_QWORD *)v154 + 6) + 4LL) >> 6) & 0xF);
    if ( !VidPnSourceOwner || VidPnSourceOwner == this )
    {
      v89 = *(_QWORD *)(v84 + 2672);
      if ( *(_QWORD *)(*(_QWORD *)(v89 + 16) + 2680LL) )
      {
        if ( !DXGADAPTER::IsLegacyDisplayStateSynchronization(*(DXGADAPTER **)(v89 + 16)) )
        {
          v93 = 1;
LABEL_119:
          ADAPTER_DISPLAY::DisableMPOPlanes(v92, v91, v93);
          goto LABEL_120;
        }
        if ( *(_DWORD *)(v90 + 2572) == 2200 )
        {
          v93 = 0;
          goto LABEL_119;
        }
      }
    }
LABEL_120:
    v94 = *((_QWORD *)v86 + 6);
    if ( (*(_DWORD *)(v94 + 4) & 1) == 0 )
    {
      v95 = WdLogNewEntry5_WdAssertion(v94, v88);
      *(_QWORD *)(v95 + 24) = 9703LL;
      WdLogEvent5_WdAssertion(v95);
      v94 = *((_QWORD *)v86 + 6);
    }
    if ( ((*(_DWORD *)(v94 + 4) >> 6) & 0xF) != v44 )
    {
      v96 = WdLogNewEntry5_WdAssertion(v94, v88);
      *(_QWORD *)(v96 + 24) = 9704LL;
      WdLogEvent5_WdAssertion(v96);
    }
    ADAPTER_DISPLAY::DisablePrimaryAllocation(*(ADAPTER_DISPLAY **)(v84 + 2672), this, v86);
    goto LABEL_136;
  }
  v102 = WdLogNewEntry5_WdError(v72, v71);
  *(_QWORD *)(v102 + 24) = v73;
  WdLogEvent5_WdError(v102);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v163, v103);
  DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v141);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v165);
  if ( v161 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v159);
  MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v171);
  return (unsigned int)v73;
}
