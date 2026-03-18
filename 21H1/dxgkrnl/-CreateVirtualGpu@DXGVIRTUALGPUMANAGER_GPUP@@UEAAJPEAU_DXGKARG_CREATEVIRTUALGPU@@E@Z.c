/*
 * XREFs of ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C0232470
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0008348 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000A788 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000A800 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000A89C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000AAC0 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000AE64 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D3D0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D42C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000E2C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C000E83C (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000E890 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EB8C (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000EE8C (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01187B0 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DpiKsrIsSoftBoot @ 0x1C016FA38 (DpiKsrIsSoftBoot.c)
 *     ??0DXGK_VIRTUAL_GPU@@QEAA@PEAVADAPTER_RENDER@@E@Z @ 0x1C022AE60 (--0DXGK_VIRTUAL_GPU@@QEAA@PEAVADAPTER_RENDER@@E@Z.c)
 *     ?GetTargetPartitionId@DXGVIRTUALGPUMANAGER@@QEAAJIPEAI@Z @ 0x1C022BF24 (-GetTargetPartitionId@DXGVIRTUALGPUMANAGER@@QEAAJIPEAI@Z.c)
 *     ?DdiCreateVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@@Z @ 0x1C022DE70 (-DdiCreateVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@@Z.c)
 *     ?DdiSetVirtualGpuResources@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETVIRTUALGPURESOURCES@@@Z @ 0x1C0230890 (-DdiSetVirtualGpuResources@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETVIRTUALGPURESOURCES@@@Z.c)
 *     ?GetVirtualGpuDevice@DXGPROCESS@@QEAAPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@@Z @ 0x1C0280BB4 (-GetVirtualGpuDevice@DXGPROCESS@@QEAAPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@@Z.c)
 *     DpiKsrGetSavedAdapterState @ 0x1C02CE3B4 (DpiKsrGetSavedAdapterState.c)
 */

__int64 __fastcall DXGVIRTUALGPUMANAGER_GPUP::CreateVirtualGpu(
        DXGVIRTUALGPUMANAGER_GPUP *this,
        struct _DXGKARG_CREATEVIRTUALGPU *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // r13
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rdx
  struct DXGADAPTER *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DXGDEVICE *v13; // r12
  __int64 v14; // rax
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  ULONG PartitionId; // edx
  __int64 v22; // rdi
  DXGK_VIRTUAL_GPU *v23; // rax
  __int64 v24; // r8
  DXGK_VIRTUAL_GPU *v25; // rsi
  _QWORD *v26; // rcx
  _QWORD *v27; // rax
  __int64 v28; // rdx
  int VirtualGpu; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 NumMemorySegments; // rax
  __int64 v38; // rax
  SIZE_T v39; // rax
  PVOID v40; // rax
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  void *v44; // rcx
  __int64 v45; // rax
  ULONG v46; // eax
  _DWORD *v47; // r12
  __int64 v48; // rax
  int SavedAdapterState; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rax
  _DWORD *v53; // rcx
  __int64 v54; // rdx
  unsigned int v55; // ebx
  struct DXGADAPTER *v56; // rdi
  int StandardAllocation; // eax
  unsigned int v58; // ebx
  __int64 v59; // rax
  __int64 v60; // r8
  int v61; // ecx
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rbx
  __int64 v65; // rdi
  __int64 v66; // r8
  int v67; // eax
  __int64 v68; // rdx
  __int64 v69; // rcx
  ULONG v70; // r9d
  __int64 v71; // rdx
  __int64 v72; // r8
  __int64 v73; // r12
  __int64 v74; // rdi
  void *v75; // rcx
  __int64 v76; // rax
  int v77; // eax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  unsigned int v82; // [rsp+40h] [rbp-C0h] BYREF
  ULONG v83; // [rsp+44h] [rbp-BCh] BYREF
  int v84; // [rsp+48h] [rbp-B8h] BYREF
  DXGDEVICE *VirtualGpuDevice; // [rsp+50h] [rbp-B0h]
  UINT64 v86; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGADAPTER *v87; // [rsp+60h] [rbp-A0h]
  _DWORD *v88; // [rsp+68h] [rbp-98h] BYREF
  char v89[8]; // [rsp+70h] [rbp-90h] BYREF
  struct DXGADAPTER *v90; // [rsp+78h] [rbp-88h]
  char v91; // [rsp+80h] [rbp-80h]
  __int64 v92; // [rsp+88h] [rbp-78h] BYREF
  char v93[8]; // [rsp+90h] [rbp-70h] BYREF
  struct DXGADAPTER *v94; // [rsp+98h] [rbp-68h]
  char v95; // [rsp+A0h] [rbp-60h]
  char v96[8]; // [rsp+A8h] [rbp-58h] BYREF
  DXGPUSHLOCK *v97; // [rsp+B0h] [rbp-50h]
  int v98; // [rsp+B8h] [rbp-48h]
  _BYTE v99[16]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v100[54]; // [rsp+D0h] [rbp-30h] BYREF
  UINT64 v101; // [rsp+280h] [rbp+180h] BYREF
  UINT Alignment; // [rsp+288h] [rbp+188h]
  ULONG DriverSegmentId; // [rsp+28Ch] [rbp+18Ch]
  UINT PrivateDriverData; // [rsp+290h] [rbp+190h]
  int v105; // [rsp+294h] [rbp+194h]
  _BYTE v106[144]; // [rsp+2A0h] [rbp+1A0h] BYREF
  char v107[8]; // [rsp+330h] [rbp+230h] BYREF
  char v108[64]; // [rsp+338h] [rbp+238h] BYREF
  char v109[88]; // [rsp+378h] [rbp+278h] BYREF
  _DXGKARG_SETVIRTUALGPURESOURCES v110[26]; // [rsp+3D0h] [rbp+2D0h] BYREF

  Current = DXGPROCESS::GetCurrent((__int64)this, (__int64)a2);
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v7 + 24) = 408LL;
    WdLogEvent5_WdAssertion(v7);
  }
  *((_BYTE *)Current + 347) |= 8u;
  v87 = *(struct DXGADAPTER **)(*((_QWORD *)this + 4) + 16LL);
  v10 = v87;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)Current + 176, 0LL);
  *((_QWORD *)Current + 23) = KeGetCurrentThread();
  v8 = *((_QWORD *)this + 4) + 24LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v8, 0LL);
  *(_QWORD *)(v8 + 8) = KeGetCurrentThread();
  v90 = v10;
  v91 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v89);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v106, v10, 0LL);
  LODWORD(v10) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v106, 0LL);
  if ( (int)v10 < 0 )
    goto LABEL_6;
  VirtualGpuDevice = DXGPROCESS::GetVirtualGpuDevice(Current, *((struct ADAPTER_RENDER **)this + 4));
  v13 = VirtualGpuDevice;
  if ( !VirtualGpuDevice )
  {
    v14 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v14 + 24) = 440LL;
    WdLogEvent5_WdError(v14);
    LODWORD(v10) = -1073741801;
LABEL_6:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v106, v9);
    if ( v91 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v89);
    *(_QWORD *)(v8 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v8, 0LL);
    KeLeaveCriticalRegion();
    *((_QWORD *)Current + 23) = 0LL;
    ExReleasePushLockExclusiveEx((char *)Current + 176, 0LL);
    KeLeaveCriticalRegion();
    return (unsigned int)v10;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v106, v11);
  if ( v91 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v89);
  *(_QWORD *)(v8 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v8, 0LL);
  KeLeaveCriticalRegion();
  *((_QWORD *)Current + 23) = 0LL;
  ExReleasePushLockExclusiveEx((char *)Current + 176, 0LL);
  KeLeaveCriticalRegion();
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v99,
    v13);
  v94 = v87;
  v95 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v93);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v107, (__int64)v13, 2, v15, 0);
  v16 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v107, 0LL);
  v10 = (struct DXGADAPTER *)v16;
  if ( v16 >= 0 )
  {
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v96, (struct _KTHREAD **)this + 5, 0);
    DXGPUSHLOCK::AcquireExclusive(v97);
    PartitionId = a2->PartitionId;
    v98 = 2;
    v82 = 0xFFFF;
    LODWORD(v10) = DXGVIRTUALGPUMANAGER::GetTargetPartitionId(this, PartitionId, &v82);
    if ( (int)v10 < 0 )
    {
LABEL_71:
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v96);
      goto LABEL_72;
    }
    v22 = v82;
    a2->PartitionId = v82;
    v23 = (DXGK_VIRTUAL_GPU *)operator new(0xC0uLL, 0x4B677844u, 1, PagedPool);
    v25 = v23;
    if ( v23 )
    {
      DXGK_VIRTUAL_GPU::DXGK_VIRTUAL_GPU(v23, *((struct ADAPTER_RENDER **)this + 4), 0);
      *(_QWORD *)v25 = &DXGK_VIRTUAL_GPU_GPUP::`vftable';
    }
    else
    {
      v25 = 0LL;
    }
    if ( !v25 )
    {
      LODWORD(v10) = -1073741801;
      goto LABEL_71;
    }
    *((_QWORD *)v25 + 11) = Current;
    v26 = (_QWORD *)((char *)v25 + 120);
    *((_DWORD *)v25 + 6) = v22;
    *((_QWORD *)v25 + 21) = v13;
    *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v22) = v25;
    v27 = (_QWORD *)((char *)this + 72);
    ++*((_DWORD *)this + 4);
    v28 = *((_QWORD *)this + 9);
    if ( *(DXGVIRTUALGPUMANAGER_GPUP **)(v28 + 8) != (DXGVIRTUALGPUMANAGER_GPUP *)((char *)this + 72) )
      __fastfail(3u);
    *v26 = v28;
    *((_QWORD *)v25 + 16) = v27;
    *(_QWORD *)(v28 + 8) = v26;
    *v27 = v26;
    VirtualGpu = ADAPTER_RENDER::DdiCreateVirtualGpu(*((ADAPTER_RENDER **)this + 4), a2, v24);
    v10 = (struct DXGADAPTER *)VirtualGpu;
    if ( VirtualGpu < 0 )
    {
LABEL_22:
      v33 = WdLogNewEntry5_WdWarning(v31, v30, v32);
LABEL_67:
      *(_QWORD *)(v33 + 24) = v10;
      WdLogEvent5_WdWarning(v33);
      goto LABEL_68;
    }
    *((_BYTE *)v25 + 184) = 1;
    *(CLSID *)((char *)v25 + 36) = a2->UserModeVirtualDeviceProvider;
    RtlCopyLuid((PLUID)((char *)v25 + 28), &a2->VirtualGpuLuid);
    NumMemorySegments = a2->NumMemorySegments;
    if ( (unsigned int)NumMemorySegments > 0x20 )
    {
      v38 = WdLogNewEntry5_WdWarning(v35, v34, v36);
      *(_QWORD *)(v38 + 24) = a2->NumMemorySegments;
      *(_QWORD *)(v38 + 32) = 495LL;
      WdLogEvent5_WdWarning(v38);
      LODWORD(v10) = -1073741811;
LABEL_68:
      (*(void (__fastcall **)(DXGVIRTUALGPUMANAGER_GPUP *, DXGK_VIRTUAL_GPU *))(*(_QWORD *)this + 24LL))(this, v25);
      goto LABEL_71;
    }
    if ( (_DWORD)NumMemorySegments )
    {
      v39 = 32 * NumMemorySegments;
      if ( !is_mul_ok(a2->NumMemorySegments, 0x20uLL) )
        v39 = -1LL;
      v40 = operator new[](v39, 0x4B677844u, PagedPool);
      *((_QWORD *)v25 + 22) = v40;
      v44 = v40;
      if ( !v40 )
      {
        v45 = WdLogNewEntry5_WdLowResource(0LL, v41, v42, v43);
        *(_QWORD *)(v45 + 24) = 504LL;
        WdLogEvent5_WdLowResource(v45);
        LODWORD(v10) = -1073741801;
        goto LABEL_68;
      }
      v46 = a2->NumMemorySegments;
      *((_DWORD *)v25 + 40) = v46;
      memset(v44, 0, 32LL * v46);
    }
    v47 = 0LL;
    if ( DpiKsrIsSoftBoot() )
    {
      v48 = *((_QWORD *)this + 4);
      v84 = 0;
      v88 = 0LL;
      SavedAdapterState = DpiKsrGetSavedAdapterState(*(_QWORD *)(*(_QWORD *)(v48 + 16) + 216LL), &v84, &v88);
      v10 = (struct DXGADAPTER *)SavedAdapterState;
      if ( SavedAdapterState < 0 )
      {
        v52 = WdLogNewEntry5_WdError(v51, v50);
        *(_QWORD *)(v52 + 24) = v10;
LABEL_34:
        WdLogEvent5_WdError(v52);
        goto LABEL_68;
      }
      if ( v88 )
      {
        v53 = v88 + 1;
        v54 = 0LL;
        if ( *v88 )
        {
          while ( *v53 != (_DWORD)v22 )
          {
            v54 = (unsigned int)(v54 + 1);
            v53 = (_DWORD *)((char *)v53 + (unsigned int)v53[3]);
            if ( (unsigned int)v54 >= *v88 )
              goto LABEL_39;
          }
          v70 = a2->NumMemorySegments;
          if ( v53[2] != v70 )
          {
            v52 = WdLogNewEntry5_WdError(v53, v54);
            *(_QWORD *)(v52 + 24) = 541LL;
            goto LABEL_34;
          }
          v71 = 0LL;
          v47 = v53 + 4;
          if ( v70 )
          {
            while ( v47[6 * v71] == a2->SegmentInfo[v71].DriverSegmentId
                 && *(_QWORD *)&v47[6 * v71 + 4] == a2->SegmentInfo[v71].Size
                 && v47[6 * v71 + 1] == a2->SegmentInfo[v71].Alignment )
            {
              v71 = (unsigned int)(v71 + 1);
              if ( (unsigned int)v71 >= v70 )
                goto LABEL_39;
            }
            v52 = WdLogNewEntry5_WdError(v53, v71);
            *(_QWORD *)(v52 + 24) = 551LL;
            goto LABEL_34;
          }
        }
      }
    }
LABEL_39:
    v55 = a2->NumMemorySegments;
    v56 = 0LL;
    v82 = 0;
    if ( !v55 )
    {
LABEL_63:
      memset(v110[0].MemoryInfo, 0, 0x400uLL);
      v73 = 0LL;
      v110[0].PartitionId = a2->PartitionId;
      v110[0].NumMemoryAllocations = v55;
      if ( v55 )
      {
        do
        {
          v83 = 0;
          v92 = 0LL;
          v86 = 0LL;
          v74 = (unsigned int)v73;
          (*(void (__fastcall **)(_QWORD, _QWORD, ULONG *, __int64 *, UINT64 *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)VirtualGpuDevice + 2) + 640LL)
                                                                                           + 8LL)
                                                                               + 224LL))(
            *(_QWORD *)(*((_QWORD *)this + 4) + 648LL),
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v74 * 32 + *((_QWORD *)v25 + 22)) + 48LL) + 8LL),
            &v83,
            &v92,
            &v86);
          v75 = *(void **)(*(_QWORD *)(*(_QWORD *)(v74 * 32 + *((_QWORD *)v25 + 22)) + 48LL) + 16LL);
          v110[0].MemoryInfo[v74].AllocationAddress.MemorySegmentOffset = v86;
          v110[0].MemoryInfo[v74].DriverAllocationHandle = v75;
          LODWORD(v75) = v83;
          v76 = 6 * (v73 + 3);
          v110[0].MemoryInfo[v74].AllocationAddress.MemorySegmentId = v83;
          v73 = (unsigned int)(v73 + 1);
          v110[0].MemoryInfo[v74].AllocationSize = *((_QWORD *)&a2->PartitionId + v76);
          *(_DWORD *)(v74 * 32 + *((_QWORD *)v25 + 22) + 28) = (_DWORD)v75;
          *(_QWORD *)(v74 * 32 + *((_QWORD *)v25 + 22) + 8) = v86;
        }
        while ( (unsigned int)v73 < a2->NumMemorySegments );
      }
      v77 = ADAPTER_RENDER::DdiSetVirtualGpuResources(*((ADAPTER_RENDER **)this + 4), v110, v72);
      v10 = (struct DXGADAPTER *)v77;
      if ( v77 >= 0 )
      {
        LODWORD(v10) = 0;
        goto LABEL_71;
      }
      v33 = WdLogNewEntry5_WdWarning(v79, v78, v80);
      *(_QWORD *)(v33 + 32) = 669LL;
      goto LABEL_67;
    }
    while ( 1 )
    {
      v105 = 0;
      memset(v100, 0, 0x1A8uLL);
      LODWORD(v100[0]) |= 0x200u;
      LODWORD(v100[2]) = 5;
      v87 = v56;
      HIDWORD(v100[0]) = *((_DWORD *)VirtualGpuDevice + 109);
      v100[3] = &v101;
      v101 = *((_QWORD *)&a2->PartitionId + 6 * ((_QWORD)v56 + 3));
      Alignment = a2->SegmentInfo[(_QWORD)v56].Alignment;
      DriverSegmentId = a2->SegmentInfo[(_QWORD)v56].DriverSegmentId;
      PrivateDriverData = a2->SegmentInfo[(_QWORD)v56].PrivateDriverData;
      StandardAllocation = DXGDEVICE::CreateStandardAllocation(
                             VirtualGpuDevice,
                             (struct _D3DKM_CREATESTANDARDALLOCATION *)v100,
                             0LL);
      v10 = (struct DXGADAPTER *)StandardAllocation;
      if ( StandardAllocation < 0 )
        goto LABEL_22;
      v58 = HIDWORD(v100[6]);
      DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 208));
      v59 = (v58 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v59 >= *((_DWORD *)Current + 64) )
        goto LABEL_47;
      v60 = *((_QWORD *)Current + 30);
      v61 = *(_DWORD *)(v60 + 16 * v59 + 8);
      if ( ((v58 >> 25) & 0x60) != (*(_BYTE *)(v60 + 16 * v59 + 8) & 0x60) || (v61 & 0x2000) != 0 || (v61 & 0x1F) == 0 )
        goto LABEL_47;
      v62 = v61 & 0x1F;
      if ( (_BYTE)v62 != 5 )
        break;
      v64 = *(_QWORD *)(v60 + 16LL * (unsigned int)v59);
LABEL_48:
      ExReleasePushLockSharedEx((char *)Current + 208, 0LL);
      KeLeaveCriticalRegion();
      v65 = 32LL * (_QWORD)v56;
      *(_QWORD *)(v65 + *((_QWORD *)v25 + 22)) = v64;
      v66 = *((_QWORD *)VirtualGpuDevice + 2);
      if ( v47 )
        v67 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v66 + 640) + 8LL)
                                                                        + 1240LL))(
                *(_QWORD *)(*((_QWORD *)this + 4) + 648LL),
                *(_QWORD *)(*(_QWORD *)(v65 + *((_QWORD *)v25 + 22)) + 24LL),
                (unsigned int)v47[6 * (_QWORD)v87],
                *(_QWORD *)&v47[6 * (_QWORD)v87 + 2]);
      else
        v67 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v66 + 640) + 8LL)
                                                                                        + 232LL))(
                *(_QWORD *)(*((_QWORD *)this + 4) + 648LL),
                *(_QWORD *)(*(_QWORD *)(v65 + *((_QWORD *)v25 + 22)) + 24LL),
                0LL,
                0LL,
                0LL,
                0LL);
      LODWORD(v10) = v67;
      if ( v67 < 0 )
      {
        v52 = WdLogNewEntry5_WdError(v69, v68);
        *(_QWORD *)(v52 + 24) = (int)v10;
        goto LABEL_34;
      }
      *(_QWORD *)(v65 + *((_QWORD *)v25 + 22) + 16) = v101;
      *(_DWORD *)(v65 + *((_QWORD *)v25 + 22) + 24) = Alignment;
      v55 = a2->NumMemorySegments;
      v56 = (struct DXGADAPTER *)(v82 + 1);
      v82 = (unsigned int)v56;
      if ( (unsigned int)v56 >= v55 )
        goto LABEL_63;
    }
    v63 = WdLogNewEntry5_WdError(v62, 2LL * (unsigned int)v59);
    *(_QWORD *)(v63 + 24) = 267LL;
    WdLogEvent5_WdError(v63);
LABEL_47:
    v64 = 0LL;
    goto LABEL_48;
  }
  v20 = WdLogNewEntry5_WdWarning(v18, v17, v19);
  *(_QWORD *)(v20 + 24) = v13;
  *(_QWORD *)(v20 + 32) = v10;
  WdLogEvent5_WdWarning(v20);
LABEL_72:
  COREACCESS::~COREACCESS((COREACCESS *)v109);
  COREACCESS::~COREACCESS((COREACCESS *)v108);
  if ( v95 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v93);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v99);
  return (unsigned int)v10;
}
