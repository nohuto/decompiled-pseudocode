/*
 * XREFs of ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C019B990
 * Callers:
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C019B070 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000A924 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C000BC60 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000E694 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C000EE78 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000EEA8 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000F45C (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0011BE8 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00131F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z @ 0x1C0013AD8 (-AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C0013D10 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C0013DA8 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x1C0014310 (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C001D198 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C002B250 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C002B608 (--0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C002B630 (--0DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?IsDisplayedPrimary@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@@Z @ 0x1C004AC58 (-IsDisplayedPrimary@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@@Z.c)
 *     ?Flush@DXGDODPRESENT@@QEAAXXZ @ 0x1C016037C (-Flush@DXGDODPRESENT@@QEAAXXZ.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C0164D50 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z @ 0x1C016E478 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C017EB60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEAVDXGRESOURCE@@@Z @ 0x1C019C2A0 (-ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEA.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C019CBB0 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C01A46EC (DxgkReleaseSessionModeChangeLock.c)
 *     ?AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C01BB228 (-AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C01BB50C (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x1C01C1F0C (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 *     ?ReleaseWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C01C1F3C (-ReleaseWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ?SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C01C21D4 (-SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C3530 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C01C66CC (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C01C69E4 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C01C70A8 (-DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C01C7E74 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z @ 0x1C01E9DD8 (-IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C02BFF14 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 *     ?DisableTransitionalPrimaryAllocations@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C02C02D4 (-DisableTransitionalPrimaryAllocations@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@P.c)
 *     DxgkDestroyClientAllocation @ 0x1C02D7FFC (DxgkDestroyClientAllocation.c)
 *     ?RemoveAllocationsAndTransferToList@DXGDEVICE@@QEAAXPEAPEAVDXGALLOCATION@@I0@Z @ 0x1C02E6B50 (-RemoveAllocationsAndTransferToList@DXGDEVICE@@QEAAXPEAPEAVDXGALLOCATION@@I0@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C03099FC (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C032FFB4 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0376620 (-VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDIC.c)
 */

__int64 __fastcall DxgkDestroyAllocationInternal(
        struct DXGPROCESS *a1,
        struct DXGDEVICE *this,
        unsigned int *a3,
        struct DXGALLOCATION **a4,
        unsigned int a5,
        const unsigned int **a6,
        unsigned int a7,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a8,
        const unsigned int *a9,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a10,
        unsigned __int8 a11)
{
  DXG_GUEST_VIRTUALGPU_VMBUS *v12; // r13
  struct _D3DDDICB_DESTROYALLOCATION2FLAGS v13; // ebx
  unsigned int v14; // eax
  unsigned int v15; // r14d
  unsigned int *v16; // rdx
  int v17; // eax
  __int64 v18; // r9
  __int64 v19; // rdi
  __int64 v20; // rax
  int v21; // eax
  volatile signed __int64 *v22; // rdi
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // r8
  unsigned __int8 v26; // di
  __int64 v27; // r9
  struct DXGRESOURCE *v28; // rax
  unsigned int j; // edi
  struct DXGALLOCATION *v30; // r13
  unsigned int v31; // r8d
  unsigned __int8 v32; // dl
  unsigned __int8 v33; // r8
  unsigned int v34; // ecx
  __int64 v35; // r13
  struct ADAPTER_RENDER *v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rcx
  __int64 v40; // rcx
  struct DXGRESOURCE *v41; // r13
  struct DXGALLOCATION **v42; // r10
  struct DXGALLOCATION **v43; // rdi
  struct DXGRESOURCE *v44; // r14
  struct DXGALLOCATION *v45; // r9
  _QWORD *v46; // rax
  unsigned __int8 v47; // al
  struct DXGADAPTER *v48; // rbx
  char v49; // bl
  struct DXGALLOCATION *i; // rdi
  __int64 v52; // rdx
  unsigned int v53; // r8d
  unsigned int v54; // r8d
  __int64 v55; // r9
  ADAPTER_DISPLAY *v56; // rcx
  char v57; // r9
  unsigned int v58; // r8d
  int v59; // eax
  int CddDeviceAndContextForCurrentSession; // eax
  struct DXGDEVICE *VidPnSourceOwner; // rax
  __int64 v62; // r10
  __int64 v63; // r8
  unsigned int v64; // r9d
  ADAPTER_DISPLAY *v65; // r10
  unsigned __int8 v66; // r8
  __int64 v67; // rcx
  struct DXGDEVICE *v68; // rbx
  unsigned int v69; // edx
  char *v70; // rdx
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  const struct DXGALLOCATION *v75; // rdi
  unsigned int v76; // edx
  __int64 v77; // rcx
  unsigned int v78; // edx
  unsigned int v79; // r8d
  ADAPTER_DISPLAY *v80; // rcx
  unsigned __int8 IsVidPnSourceVisible; // al
  unsigned int v82; // eax
  __int64 v83; // rcx
  struct DXGDEVICE *v84; // rbx
  __int64 v85; // rbx
  int v86; // eax
  __int64 v87; // rdi
  DXGDODPRESENT *v88; // rcx
  unsigned int v89; // edi
  struct DXGPROCESS *Current; // rax
  struct DXGALLOCATION **v91; // rcx
  __int64 v92; // rdx
  struct DXGALLOCATION *v93; // r9
  _QWORD *v94; // rax
  __int64 v95; // rax
  char v96; // [rsp+50h] [rbp-3C8h]
  unsigned __int8 v97; // [rsp+51h] [rbp-3C7h] BYREF
  char v98; // [rsp+52h] [rbp-3C6h]
  char v99; // [rsp+53h] [rbp-3C5h] BYREF
  bool v100; // [rsp+54h] [rbp-3C4h]
  unsigned __int8 v101; // [rsp+55h] [rbp-3C3h]
  unsigned int v102; // [rsp+58h] [rbp-3C0h]
  char v103; // [rsp+5Ch] [rbp-3BCh]
  unsigned __int8 v104[3]; // [rsp+5Dh] [rbp-3BBh] BYREF
  unsigned int v105; // [rsp+60h] [rbp-3B8h]
  __int64 v106; // [rsp+68h] [rbp-3B0h]
  struct DXGALLOCATION **v107; // [rsp+70h] [rbp-3A8h] BYREF
  struct DXGALLOCATION *v108; // [rsp+78h] [rbp-3A0h]
  __int64 v109; // [rsp+80h] [rbp-398h]
  struct DXGRESOURCE *v110; // [rsp+88h] [rbp-390h] BYREF
  struct DXGDEVICE *v111; // [rsp+90h] [rbp-388h] BYREF
  DXG_GUEST_VIRTUALGPU_VMBUS *v112; // [rsp+98h] [rbp-380h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v113; // [rsp+A0h] [rbp-378h]
  __int64 v114; // [rsp+A8h] [rbp-370h] BYREF
  struct DXGADAPTER *v115; // [rsp+B0h] [rbp-368h]
  char v116; // [rsp+B8h] [rbp-360h]
  unsigned int v117; // [rsp+C0h] [rbp-358h]
  _BYTE v118[24]; // [rsp+C8h] [rbp-350h] BYREF
  _BYTE v119[8]; // [rsp+E0h] [rbp-338h] BYREF
  _BYTE v120[16]; // [rsp+E8h] [rbp-330h] BYREF
  DXGADAPTER *v121; // [rsp+F8h] [rbp-320h]
  char v122; // [rsp+100h] [rbp-318h]
  __int64 v123; // [rsp+108h] [rbp-310h]
  _BYTE v124[88]; // [rsp+128h] [rbp-2F0h] BYREF
  _QWORD v125[2]; // [rsp+180h] [rbp-298h] BYREF
  int v126; // [rsp+190h] [rbp-288h]
  _BYTE v127[400]; // [rsp+198h] [rbp-280h] BYREF
  _BYTE v128[160]; // [rsp+330h] [rbp-E8h] BYREF

  v107 = a4;
  v12 = a1;
  v112 = a1;
  v13.0 = a8.0;
  v113 = a10;
  if ( a11 )
  {
    v14 = 0;
    v15 = a7;
    while ( 1 )
    {
      v117 = v14;
      if ( v14 >= a7 )
        break;
      v16 = (unsigned int *)&a9[v14];
      if ( (unsigned __int64)v16 >= MmUserProbeAddress )
        v16 = (unsigned int *)MmUserProbeAddress;
      a3[v14++] = *v16;
    }
    *a6 = a3;
    a4 = v107;
  }
  else
  {
    v69 = 0;
    v15 = a7;
    while ( v69 < a7 )
    {
      a3[v69] = a9[v69];
      ++v69;
    }
    a3 = (unsigned int *)*a6;
  }
  v110 = 0LL;
  v17 = ValidateDestroyAllocation(a1, this, a5, a3, v15, a4, &v110);
  if ( v17 == 255 )
    return 0LL;
  if ( v17 < 0 )
  {
    WdLogSingleEntry2(3LL, this, -1073741811LL);
    return 3221225485LL;
  }
  v19 = *((_QWORD *)this + 231);
  v106 = v19;
  v97 = 0;
  if ( (a8.Value & 0x80000000) != 0 )
  {
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v128, (__int64)this, 2, v18, 0);
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v128, v70);
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL))
      && *((_DWORD *)this + 108) == 1
      && (*((_DWORD *)DXGPROCESS::GetCurrent(v72, v71, v73, v74) + 106) & 4) != 0 )
    {
      if ( v110 )
      {
        v75 = (const struct DXGALLOCATION *)*((_QWORD *)v110 + 3);
        v97 = 1;
        while ( v75 )
        {
          v76 = *(_DWORD *)(*((_QWORD *)v75 + 6) + 4LL);
          if ( (v76 & 1) == 0
            || *((_QWORD *)this + 231) != *(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
            || v75 == DXGDEVICE::GetDisplayedPrimary((struct _KTHREAD **)this, (v76 >> 6) & 0xF) )
          {
            v97 = 0;
          }
          v75 = (const struct DXGALLOCATION *)*((_QWORD *)v75 + 8);
        }
      }
      v19 = v106;
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v128);
  }
  if ( v19 )
    v20 = *(_QWORD *)(v19 + 2792);
  else
    v20 = 0LL;
  v125[0] = v20;
  v125[1] = v12;
  if ( v20 )
    v21 = *(_DWORD *)(v20 + 96);
  else
    v21 = 0;
  v126 = 4 * v21;
  memset(v127, 0, sizeof(v127));
  v22 = *(volatile signed __int64 **)(*((_QWORD *)this + 2) + 16LL);
  v115 = (struct DXGADAPTER *)v22;
  _InterlockedIncrement64(v22 + 3);
  v114 = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v22 + 17, 0LL);
  v116 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v119, (__int64)this, 2, v23, 0);
  if ( v124[72] )
    COREACCESS::AcquireShared((COREACCESS *)v124, 0LL);
  if ( v122 )
    WdLogSingleEntry5(0LL, 275LL, 4LL, v120, 0LL, 0LL);
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v121 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v121 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v24, (const EVENT_DESCRIPTOR *)"g", v25, 72);
      KeWaitForSingleObject((char *)v121 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v121, 0LL);
  }
  v123 = 0LL;
  v122 = 1;
  if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 200LL) == 4 )
  {
    WdLogSingleEntry1(4LL, this);
LABEL_141:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v119);
LABEL_142:
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v114);
LABEL_143:
    MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v125);
    return 0LL;
  }
  if ( *((_DWORD *)this + 144) == 4 )
  {
    WdLogSingleEntry1(4LL, this);
    DxgkDestroyClientAllocation(v77, this, v15, v107, v110);
    goto LABEL_141;
  }
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 216LL) + 64LL) + 40LL)
                 + 28LL) < 0x5015u )
    v13.0 = (struct _D3DDDICB_DESTROYALLOCATION2FLAGS::$D35BDED8E381779C59C0009B00E168F7::$815964D178D3487C3146BEBBE8BF611F)(a8.Value & 0xFFFFFFFE);
  v101 = 0;
  v103 = 0;
  v96 = 0;
  v26 = 0;
  v98 = 0;
  v100 = 0;
  v105 = 0;
  v108 = 0LL;
  v102 = -1;
  DXGSESSIONMODECHANGELOCK::DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v99);
  v111 = 0LL;
  DXGPROCESSCOPYPROTECTIONMUTEX::DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v118, v12);
  v27 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  v109 = v27;
  v28 = v110;
  if ( v110 )
  {
    if ( *((struct DXGDEVICE **)v110 + 1) != this )
    {
      WdLogSingleEntry1(1LL, 9760LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pResource->m_pDevice == pDevice",
        9760LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v28 = v110;
    }
    for ( i = (struct DXGALLOCATION *)*((_QWORD *)v28 + 3); ; i = (struct DXGALLOCATION *)*((_QWORD *)i + 8) )
    {
      if ( !i )
        goto LABEL_84;
      v52 = *((_QWORD *)i + 6);
      if ( ((*(_DWORD *)(v52 + 4) & 2) != 0) + (*(_DWORD *)(v52 + 4) & 1) + ((*(_DWORD *)(v52 + 4) >> 13) & 1u) > 1 )
      {
        WdLogSingleEntry1(1LL, 9769LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"(pCurrentAlloc->m_pAllocation->m_Primary ? 1 : 0) + (pCurrentAlloc->m_pAllocation->m_CddPrimary ? 1 :"
                    " 0) + (pCurrentAlloc->m_pAllocation->m_DirectFlip ? 1 : 0) <= 1",
          9769LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v52 = *((_QWORD *)i + 6);
      }
      v53 = *(_DWORD *)(v52 + 4);
      if ( (v53 & 1) != 0
        && (DXGDEVICE::IsVidPnSourcePrimaryValid(this, (v53 >> 6) & 0xF)
         || v55 && (v56 = *(ADAPTER_DISPLAY **)(v55 + 2792)) != 0LL && !ADAPTER_DISPLAY::IsVidPnSourceVisible(v56, v54))
        && !v97 )
      {
        v96 = 1;
        v108 = i;
        v102 = (*(_DWORD *)(*((_QWORD *)i + 6) + 4LL) >> 6) & 0xF;
        v105 = 1 << v102;
LABEL_84:
        v26 = 0;
        goto LABEL_85;
      }
      if ( (*(_DWORD *)(*((_QWORD *)i + 6) + 4LL) & 2) != 0 )
        break;
    }
    v26 = 1;
    v98 = 1;
LABEL_85:
    v100 = 0;
LABEL_38:
    v32 = v96;
    goto LABEL_39;
  }
  if ( !v15 )
  {
    v32 = 0;
LABEL_39:
    v33 = 0;
    v34 = v102;
    goto LABEL_40;
  }
  for ( j = 0; ; ++j )
  {
    if ( j >= v15 )
      goto LABEL_37;
    v30 = v107[j];
    if ( !v30 )
    {
      WdLogSingleEntry1(1LL, 9799LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pCurrentAlloc != NULL", 9799LL, 0LL, 0LL, 0LL, 0LL);
      v27 = v109;
    }
    if ( *((struct DXGDEVICE **)v30 + 1) != this )
    {
      WdLogSingleEntry1(1LL, 9800LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pCurrentAlloc->m_pDevice == pDevice",
        9800LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v27 = v109;
    }
    if ( *(_DWORD *)(v27 + 412) == 1297040209 )
    {
      v78 = *(_DWORD *)(*((_QWORD *)v30 + 6) + 4LL);
      if ( (v78 & 8) != 0 )
        break;
    }
    v31 = *(_DWORD *)(*((_QWORD *)v30 + 6) + 4LL);
    if ( (v31 & 1) != 0 )
    {
      if ( DXGDEVICE::IsVidPnSourcePrimaryValid(this, (v31 >> 6) & 0xF)
        || (v80 = *(ADAPTER_DISPLAY **)(v27 + 2792)) != 0LL
        && (IsVidPnSourceVisible = ADAPTER_DISPLAY::IsVidPnSourceVisible(v80, v79), v27 = v109, !IsVidPnSourceVisible) )
      {
        v96 = 1;
        v100 = v108 != 0LL;
        v108 = v30;
        v102 = (*(_DWORD *)(*((_QWORD *)v30 + 6) + 4LL) >> 6) & 0xF;
        v105 |= 1 << v102;
      }
    }
  }
  v101 = 1;
  if ( !DXGDEVICE::IsDisplayedPrimary((struct _KTHREAD **)this, (v78 >> 6) & 0xF, v30) )
  {
LABEL_37:
    v26 = 0;
    v12 = v112;
    goto LABEL_38;
  }
  v33 = 1;
  v103 = 1;
  v32 = 1;
  v96 = 1;
  v100 = v108 != 0LL;
  v108 = v30;
  v34 = (*(_DWORD *)(*((_QWORD *)v30 + 6) + 4LL) >> 6) & 0xF;
  v102 = v34;
  v105 |= 1 << v34;
  v12 = v112;
  v26 = 0;
LABEL_40:
  if ( (*((_DWORD *)v12 + 106) & 0x100) != 0 )
  {
    v32 = 0;
    v96 = 0;
  }
  v35 = v34;
  WdLogSingleEntry5(8LL, v32, v101, v33, v26, v34);
  if ( !v96 )
  {
    if ( v97 )
      ADAPTER_DISPLAY::DisableTransitionalPrimaryAllocations(
        *(ADAPTER_DISPLAY **)(v106 + 2792),
        this,
        *((struct DXGALLOCATION **)v110 + 3),
        (struct COREDEVICEACCESS *)v119);
    goto LABEL_45;
  }
  if ( !v106 || !*(_QWORD *)(v106 + 2792) )
  {
    WdLogSingleEntry1(1LL, 9854LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pDisplayAdapter != NULL) && (pDisplayAdapter->IsDisplayAdapter())",
      9854LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  COREDEVICEACCESS::Release((COREDEVICEACCESS *)v119);
  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v114);
  if ( *(int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 2692LL) <= 2200 )
  {
    v57 = 0;
    goto LABEL_154;
  }
  v57 = 1;
  if ( ((v105 - 1) & v105) != 0 )
  {
LABEL_154:
    v58 = -3;
    goto LABEL_95;
  }
  v58 = v102;
LABEL_95:
  DXGDEVICE::FlushScheduler(this, 5u, v58, v57);
  v13.0 = (struct _D3DDDICB_DESTROYALLOCATION2FLAGS::$D35BDED8E381779C59C0009B00E168F7::$815964D178D3487C3146BEBBE8BF611F)(v13.Value | 1);
  MANAGEDPRIMARIESTRACKER::AcquireWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v125);
  v59 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v99, 1);
  LODWORD(v109) = v59;
  if ( v59 >= 0 )
  {
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                             (struct _LUID *)(v106 + 404),
                                             &v111,
                                             0LL,
                                             0LL,
                                             0);
    if ( CddDeviceAndContextForCurrentSession < 0 )
      WdLogSingleEntry1(4LL, CddDeviceAndContextForCurrentSession);
    if ( v111 )
    {
      if ( *((_QWORD *)v111 + 2) == *((_QWORD *)this + 2) )
      {
        *((_BYTE *)v111 + 1905) = 1;
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v118);
      }
      else
      {
        v111 = 0LL;
      }
    }
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v114);
    COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v119);
    if ( *((_DWORD *)this + 144) != 4 )
    {
      MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v125, this, v105);
      v36 = (struct ADAPTER_RENDER *)*((_QWORD *)this + 2);
      if ( *((_QWORD *)this + 231) == *((_QWORD *)v36 + 2) )
      {
        if ( ((v105 - 1) & v105) == 0 )
        {
          if ( v100 )
          {
            v82 = v102;
            if ( v102 == -1 )
            {
              WdLogSingleEntry1(1LL, 10027LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"VidpnSourceInvolved != D3DDDI_ID_UNINITIALIZED",
                10027LL,
                0LL,
                0LL,
                0LL,
                0LL);
              v82 = v102;
            }
            ADAPTER_DISPLAY::DisablePrimaryOnDevice(*(ADAPTER_DISPLAY **)(v106 + 2792), this, v82, 0);
            goto LABEL_45;
          }
          VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner(
                               *(ADAPTER_DISPLAY **)(v106 + 2792),
                               (*(_DWORD *)(*((_QWORD *)v108 + 6) + 4LL) >> 6) & 0xF);
          if ( VidPnSourceOwner && VidPnSourceOwner != this )
            goto LABEL_108;
          v62 = *(_QWORD *)(v106 + 2792);
          if ( !*(_QWORD *)(*(_QWORD *)(v62 + 16) + 2800LL) )
            goto LABEL_108;
          if ( DXGADAPTER::IsLegacyDisplayStateSynchronization(*(DXGADAPTER **)(v62 + 16)) )
          {
            if ( *(_DWORD *)(v63 + 2692) != 2200 )
              goto LABEL_108;
            v66 = 0;
          }
          else
          {
            v66 = 1;
          }
          ADAPTER_DISPLAY::DisableMPOPlanes(v65, v64, v66);
LABEL_108:
          v67 = *((_QWORD *)v108 + 6);
          if ( (*(_DWORD *)(v67 + 4) & 1) == 0 )
          {
            WdLogSingleEntry1(1LL, 10054LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"PrimaryAllocation->m_pAllocation->m_Primary",
              10054LL,
              0LL,
              0LL,
              0LL,
              0LL);
            v67 = *((_QWORD *)v108 + 6);
          }
          if ( ((*(_DWORD *)(v67 + 4) >> 6) & 0xF) != v102 )
          {
            WdLogSingleEntry1(1LL, 10055LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"PrimaryAllocation->m_pAllocation->m_VidPnSourceId == VidpnSourceInvolved",
              10055LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          ADAPTER_DISPLAY::DisablePrimaryAllocation(*(ADAPTER_DISPLAY **)(v106 + 2792), this, v108);
          goto LABEL_45;
        }
        ADAPTER_DISPLAY::DisableAllPrimaries(*(ADAPTER_DISPLAY **)(v106 + 2792), v36);
      }
LABEL_45:
      if ( v26 || v101 )
      {
        if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v121) )
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)v119);
        if ( v103 )
        {
          v86 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(*(ADAPTER_DISPLAY **)(v106 + 2792), v102, 0, 0x10u, 0);
          if ( v86 < 0 )
          {
            v87 = v86;
            WdLogSingleEntry2(2LL, v35, v86);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"SetVidPnSourceVisibility(0x%I64x) failed with status 0x%I64x",
              v35,
              v87,
              0LL,
              0LL,
              0LL);
            v26 = v98;
          }
        }
        DXGDEVICE::FlushScheduler(this, 6u, 0xFFFFFFFD, 0);
        if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v121) )
          COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v119, (char *)v36);
        if ( v106 )
        {
          if ( !*(_QWORD *)(v106 + 2800) )
          {
            v88 = *(DXGDODPRESENT **)(*(_QWORD *)(v106 + 2792) + 448LL);
            if ( v88 )
              DXGDODPRESENT::Flush(v88);
          }
        }
      }
      v39 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v39 + 184)
        && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v39 + 168)) )
      {
        WdLogSingleEntry1(1LL, 6528LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"GetRenderAdapter()->IsCoreResourceSharedOwner()",
          6528LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v40 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      v41 = v110;
      if ( *(_BYTE *)(v40 + 209) )
      {
        v112 = (DXG_GUEST_VIRTUALGPU_VMBUS *)(v40 + 4344);
        if ( v110 )
          v105 = *((_DWORD *)v110 + 5);
        else
          v105 = 0;
        v89 = *((_DWORD *)this + 110);
        Current = DXGPROCESS::GetCurrent(v40, (__int64)v36, v37, v38);
        DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyAllocation(
          v112,
          *((_DWORD *)Current + 126),
          v89,
          v105,
          v15,
          v107,
          v13);
        if ( v41 )
          *((_DWORD *)v41 + 5) = 0;
        v42 = v107;
        if ( v15 )
        {
          v91 = v107;
          v92 = v15;
          do
          {
            *((_BYTE *)*v91++ + 128) &= ~4u;
            --v92;
          }
          while ( v92 );
        }
        v26 = v98;
      }
      else
      {
        v42 = v107;
      }
      if ( v41 )
      {
        DXGDEVICE::TerminateAllocations(
          this,
          v41,
          1,
          *((struct DXGALLOCATION **)v41 + 3),
          (struct COREDEVICEACCESS *)v119,
          v13);
      }
      else
      {
        v107 = 0LL;
        DXGDEVICE::RemoveAllocationsAndTransferToList(this, v42, v15, (struct DXGALLOCATION **)&v107);
        v43 = v107;
        if ( v107 )
        {
          v44 = v107[5];
          if ( v44 )
          {
            do
            {
              v93 = (struct DXGALLOCATION *)v43;
              v94 = v43 + 8;
              v43 = (struct DXGALLOCATION **)v43[8];
              *v94 = 0LL;
              DXGDEVICE::TerminateAllocations(this, v44, 0, v93, (struct COREDEVICEACCESS *)v119, v13);
            }
            while ( v43 );
          }
          else
          {
            do
            {
              v45 = (struct DXGALLOCATION *)v43;
              v46 = v43 + 8;
              v43 = (struct DXGALLOCATION **)v43[8];
              *v46 = 0LL;
              DXGDEVICE::TerminateAllocations(this, 0LL, 0, v45, (struct COREDEVICEACCESS *)v119, v13);
            }
            while ( v43 );
          }
          v107 = v43;
        }
        v26 = v98;
      }
      if ( v26 )
        DXGDEVICE::CloseInternalCddPrimaryHandle(this, (struct COREDEVICEACCESS *)v119);
      v47 = 0;
      v97 = 0;
      v104[0] = 0;
      if ( v96 )
      {
        v68 = v111;
        if ( v111 )
        {
          ADAPTER_DISPLAY::EnsureGdiOutput(
            *(ADAPTER_DISPLAY **)(v106 + 2792),
            v111,
            (struct COREDEVICEACCESS *)v119,
            &v97,
            v104,
            v113);
          v47 = v97;
        }
        MANAGEDPRIMARIESTRACKER::RestoreManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v125, v47);
        if ( v68 )
        {
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)v119);
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v114);
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v118);
          *((_BYTE *)v68 + 1905) = 0;
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v68 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v111 + 2), v111);
          if ( v99 )
          {
            v99 = 0;
            DxgkReleaseSessionModeChangeLock();
          }
          if ( v97 )
          {
            if ( v104[0] )
            {
              v95 = *(_QWORD *)(*((_QWORD *)this + 5) + 88LL);
              if ( v95 )
                (*(void (**)(void))(v95 + 192))();
            }
          }
        }
      }
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v118);
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v99);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v119);
      if ( v116 )
      {
        v48 = v115;
        ExReleasePushLockSharedEx((char *)v115 + 136, 0LL);
        KeLeaveCriticalRegion();
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v48 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v115 + 2), v115);
      }
      v49 = v126;
      if ( (v126 & 2) != 0 )
      {
        WdLogSingleEntry1(1LL, 217LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"(FALSE == m_bStateSaved)", 217LL, 0LL, 0LL, 0LL, 0LL);
      }
      if ( (v49 & 1) != 0 )
        MANAGEDPRIMARIESTRACKER::ReleaseWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v125);
      return 0LL;
    }
    WdLogSingleEntry1(4LL, this);
    v84 = v111;
    if ( v111 )
    {
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v118);
      *((_BYTE *)v84 + 1905) = 0;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v84 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v111 + 2), v111);
    }
    DxgkDestroyClientAllocation(v83, this, v15, v107, v110);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v118);
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v99);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v119);
    if ( !v116 )
      goto LABEL_143;
    goto LABEL_142;
  }
  v85 = v59;
  WdLogSingleEntry1(2LL, v59);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to acquire session mode change lock exclusively (Status = 0x%I64x)",
    v85,
    0LL,
    0LL,
    0LL,
    0LL);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v118);
  DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v99);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v119);
  if ( v116 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v114);
  MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v125);
  return (unsigned int)v109;
}
