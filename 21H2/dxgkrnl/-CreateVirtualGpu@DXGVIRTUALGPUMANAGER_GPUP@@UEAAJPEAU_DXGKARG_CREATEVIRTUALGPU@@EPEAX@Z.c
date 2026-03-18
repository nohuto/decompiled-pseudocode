/*
 * XREFs of ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EPEAX@Z @ 0x1C035F620
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BC90 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000BED0 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C000EF98 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01CF87C (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     DpiKsrIsSoftBoot @ 0x1C021BECC (DpiKsrIsSoftBoot.c)
 *     ?GetVirtualGpuDevice@DXGPROCESS@@QEAAPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@@Z @ 0x1C0336544 (-GetVirtualGpuDevice@DXGPROCESS@@QEAAPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@@Z.c)
 *     ??0DXGK_VIRTUAL_GPU@@QEAA@PEAVADAPTER_RENDER@@E@Z @ 0x1C0356A64 (--0DXGK_VIRTUAL_GPU@@QEAA@PEAVADAPTER_RENDER@@E@Z.c)
 *     ?GetTargetPartitionId@DXGVIRTUALGPUMANAGER@@QEAAJIPEAI@Z @ 0x1C0357DB0 (-GetTargetPartitionId@DXGVIRTUALGPUMANAGER@@QEAAJIPEAI@Z.c)
 *     ?ReportState@DXGK_VIRTUAL_GPU@@QEAAXXZ @ 0x1C03588B0 (-ReportState@DXGK_VIRTUAL_GPU@@QEAAXXZ.c)
 *     ?DdiCreateVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@@Z @ 0x1C035A824 (-DdiCreateVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@@Z.c)
 *     ?DdiSetVirtualGpuResources@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETVIRTUALGPURESOURCES@@@Z @ 0x1C035D2E8 (-DdiSetVirtualGpuResources@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETVIRTUALGPURESOURCES@@@Z.c)
 *     DpiKsrGetSavedAdapterState @ 0x1C03940D8 (DpiKsrGetSavedAdapterState.c)
 */

__int64 __fastcall DXGVIRTUALGPUMANAGER_GPUP::CreateVirtualGpu(
        DXGVIRTUALGPUMANAGER_GPUP *this,
        struct _DXGKARG_CREATEVIRTUALGPU *a2,
        __int64 a3,
        void *a4)
{
  DXGK_VIRTUAL_GPU *v4; // r14
  DXGVIRTUALGPUMANAGER_GPUP *v6; // r15
  UINT64 v7; // r12
  UINT64 v8; // r13
  __int64 v9; // rbx
  __int64 StandardAllocation; // rdi
  char v11; // r13
  __int64 v12; // r9
  int v13; // eax
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r9
  __int64 v17; // rbx
  DXGK_VIRTUAL_GPU *v18; // rax
  __int64 v19; // r9
  _QWORD *v21; // rcx
  __int64 v22; // rdx
  _QWORD *v23; // rax
  _DWORD *v24; // rax
  int VirtualGpu; // eax
  __int64 PartitionId; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // r9
  __int64 NumMemorySegments; // rax
  _DWORD *v33; // r13
  unsigned __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  int SavedAdapterState; // eax
  _DWORD *v38; // rcx
  unsigned int v39; // edx
  unsigned int v40; // ebx
  __int64 v41; // rdi
  DXGDEVICE *v42; // rbx
  unsigned int v43; // ebx
  __int64 v44; // rax
  __int64 v45; // rdx
  int v46; // ecx
  __int64 v47; // rdi
  ULONG v48; // r9d
  __int64 v49; // rdx
  PVOID v50; // rcx
  __int64 v51; // rbx
  int v52; // eax
  __int64 v53; // rcx
  __int64 v54; // r8
  ULONG v55; // r13d
  DXGDEVICE *v56; // r12
  __int64 v57; // rax
  __int64 v58; // rdi
  __int64 v59; // rbx
  __int64 v60; // rdx
  ULONG v61; // ecx
  int v62; // eax
  unsigned __int64 v63; // r13
  __int64 v64; // r15
  __int64 *p_MemorySegmentOffset; // rbx
  NTSTATUS v66; // eax
  PVOID v67; // rbx
  PVOID v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // r8
  unsigned int i; // [rsp+50h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+58h] [rbp-A8h] BYREF
  UINT64 v73; // [rsp+60h] [rbp-A0h] BYREF
  DXGDEVICE *VirtualGpuDevice; // [rsp+68h] [rbp-98h]
  __int64 v75; // [rsp+70h] [rbp-90h]
  void *v76; // [rsp+78h] [rbp-88h]
  char v77[8]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v78; // [rsp+88h] [rbp-78h]
  char v79; // [rsp+90h] [rbp-70h]
  DXGVIRTUALGPUMANAGER_GPUP *v80; // [rsp+98h] [rbp-68h]
  HANDLE Handle; // [rsp+A0h] [rbp-60h]
  char v82[8]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v83; // [rsp+B0h] [rbp-50h]
  char v84; // [rsp+B8h] [rbp-48h]
  char v85[8]; // [rsp+C0h] [rbp-40h] BYREF
  DXGPUSHLOCK *v86; // [rsp+C8h] [rbp-38h]
  int v87; // [rsp+D0h] [rbp-30h]
  _BYTE v88[24]; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v89[54]; // [rsp+F0h] [rbp-10h] BYREF
  UINT64 Size; // [rsp+2A0h] [rbp+1A0h] BYREF
  UINT Alignment; // [rsp+2A8h] [rbp+1A8h]
  ULONG DriverSegmentId; // [rsp+2ACh] [rbp+1ACh]
  UINT PrivateDriverData; // [rsp+2B0h] [rbp+1B0h]
  int v94; // [rsp+2B4h] [rbp+1B4h]
  struct _KAPC_STATE ApcState; // [rsp+2B8h] [rbp+1B8h] BYREF
  _BYTE v96[144]; // [rsp+2F0h] [rbp+1F0h] BYREF
  char v97[8]; // [rsp+380h] [rbp+280h] BYREF
  char v98[64]; // [rsp+388h] [rbp+288h] BYREF
  char v99[88]; // [rsp+3C8h] [rbp+2C8h] BYREF
  _DXGKARG_SETVIRTUALGPURESOURCES v100; // [rsp+420h] [rbp+320h] BYREF
  _BYTE v101[992]; // [rsp+448h] [rbp+348h] BYREF

  v4 = 0LL;
  Handle = a4;
  v76 = 0LL;
  v6 = this;
  v80 = this;
  Object = DXGPROCESS::GetCurrent((__int64)this, (__int64)a2, a3, (__int64)a4);
  if ( !Object )
  {
    WdLogSingleEntry1(1LL, 437LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProcess != nullptr", 437LL, 0LL, 0LL, 0LL, 0LL);
  }
  *((_DWORD *)Object + 106) |= 0x40u;
  v75 = *(_QWORD *)(*((_QWORD *)v6 + 4) + 16LL);
  StandardAllocation = v75;
  v7 = *((_QWORD *)DXGGLOBAL_GetGlobal() + 175);
  v73 = v7;
  memset(&ApcState, 0, sizeof(ApcState));
  v8 = v7 + 216;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v7 + 216, 0LL);
  *(_QWORD *)(v7 + 224) = KeGetCurrentThread();
  v9 = *((_QWORD *)v6 + 4) + 24LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v9, 0LL);
  *(_QWORD *)(v9 + 8) = KeGetCurrentThread();
  v78 = StandardAllocation;
  v79 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v77);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v96, (struct DXGADAPTER *const)StandardAllocation, 0LL);
  LODWORD(StandardAllocation) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v96, 0LL);
  if ( (int)StandardAllocation < 0 )
    goto LABEL_6;
  KeStackAttachProcess(*(PRKPROCESS *)(v7 + 56), &ApcState);
  VirtualGpuDevice = DXGPROCESS::GetVirtualGpuDevice((DXGPROCESS *)v7, *((struct ADAPTER_RENDER **)v6 + 4));
  StandardAllocation = (__int64)VirtualGpuDevice;
  KeUnstackDetachProcess(&ApcState);
  if ( !VirtualGpuDevice )
  {
    WdLogSingleEntry1(2LL, 477LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to create partitioned GPU device 0x%I64x",
      477LL,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(StandardAllocation) = -1073741801;
LABEL_6:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v96);
    if ( v79 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v77);
    *(_QWORD *)(v9 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v9, 0LL);
    KeLeaveCriticalRegion();
    *(_QWORD *)(v7 + 224) = 0LL;
    ExReleasePushLockExclusiveEx(v8, 0LL);
    KeLeaveCriticalRegion();
    return (unsigned int)StandardAllocation;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v96);
  if ( v79 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v77);
  *(_QWORD *)(v9 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v9, 0LL);
  KeLeaveCriticalRegion();
  *(_QWORD *)(v7 + 224) = 0LL;
  ExReleasePushLockExclusiveEx(v8, 0LL);
  KeLeaveCriticalRegion();
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v88,
    (struct DXGDEVICE *)StandardAllocation);
  v11 = 0;
  v83 = v75;
  v84 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v82);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v97, StandardAllocation, 2, v12, 0);
  v13 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v97, 0LL);
  LODWORD(StandardAllocation) = v13;
  if ( v13 >= 0 )
  {
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v85, (struct _KTHREAD **)v6 + 5, 0);
    DXGPUSHLOCK::AcquireExclusive(v86);
    v87 = 2;
    if ( *((_BYTE *)DXGGLOBAL_GetGlobal() + 305220) )
    {
      v11 = 1;
      if ( a2->PartitionId == 0xFFFF )
      {
        WdLogSingleEntry1(1LL, 558LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pArgs->PartitionId != GPUP_INVALID_PARTITION_ID",
          558LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
LABEL_29:
      VirtualGpu = ADAPTER_RENDER::DdiCreateVirtualGpu(*((ADAPTER_RENDER **)v6 + 4), a2, v14);
      StandardAllocation = VirtualGpu;
      if ( VirtualGpu < 0 )
      {
LABEL_30:
        WdLogSingleEntry1(3LL, StandardAllocation);
LABEL_93:
        if ( v76 )
          operator delete(v76);
        if ( v4 )
          (*(void (__fastcall **)(DXGVIRTUALGPUMANAGER_GPUP *, DXGK_VIRTUAL_GPU *))(*(_QWORD *)v6 + 24LL))(v6, v4);
        goto LABEL_21;
      }
      if ( v11 )
      {
        PartitionId = a2->PartitionId;
        v27 = *((_QWORD *)v6 + 3);
        v28 = *(_QWORD *)(v27 + 8 * PartitionId);
        v29 = *(_QWORD *)&a2->UserModeVirtualDeviceProvider.Data1 - *(_QWORD *)(v28 + 36);
        if ( !v29 )
          v29 = *(_QWORD *)a2->UserModeVirtualDeviceProvider.Data4 - *(_QWORD *)(v28 + 44);
        if ( v29 )
        {
          WdLogSingleEntry1(1LL, 571LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"pArgs->UserModeVirtualDeviceProvider == m_pVirtualGpu[pArgs->PartitionId]->UserModeDllId",
            571LL,
            0LL,
            0LL,
            0LL,
            0LL);
          LODWORD(PartitionId) = a2->PartitionId;
          v27 = *((_QWORD *)v6 + 3);
        }
        v30 = *(_QWORD *)(v27 + 8LL * (unsigned int)PartitionId);
        if ( a2->VirtualGpuLuid.LowPart != *(_DWORD *)(v30 + 28) || a2->VirtualGpuLuid.HighPart != *(_DWORD *)(v30 + 32) )
        {
          WdLogSingleEntry1(1LL, 572LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"RtlEqualLuid(&pArgs->VirtualGpuLuid, &m_pVirtualGpu[pArgs->PartitionId]->VirtualGpuLuid)",
            572LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
      }
      else
      {
        *((_BYTE *)v4 + 192) = 1;
        *(CLSID *)((char *)v4 + 36) = a2->UserModeVirtualDeviceProvider;
        RtlCopyLuid((PLUID)((char *)v4 + 28), &a2->VirtualGpuLuid);
        NumMemorySegments = a2->NumMemorySegments;
        if ( (unsigned int)NumMemorySegments > 0x20 )
        {
          WdLogSingleEntry2(3LL, (unsigned int)NumMemorySegments, 582LL);
          LODWORD(StandardAllocation) = -1073741811;
          goto LABEL_93;
        }
        v33 = 0LL;
        if ( (_DWORD)NumMemorySegments )
        {
          v34 = 32 * NumMemorySegments;
          if ( !is_mul_ok(a2->NumMemorySegments, 0x20uLL) )
            v34 = -1LL;
          v35 = operator new[](v34, 0x4B677844u, 256LL, v31);
          *((_QWORD *)v4 + 23) = v35;
          if ( !v35 )
          {
            WdLogSingleEntry1(6LL, 591LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262145,
              -1,
              (__int64)L"Failed to allocate allocations array",
              591LL,
              0LL,
              0LL,
              0LL,
              0LL);
            LODWORD(StandardAllocation) = -1073741801;
            goto LABEL_93;
          }
          *((_DWORD *)v4 + 42) = a2->NumMemorySegments;
        }
        if ( DpiKsrIsSoftBoot() )
        {
          v36 = *((_QWORD *)v6 + 4);
          i = 0;
          Object = 0LL;
          SavedAdapterState = DpiKsrGetSavedAdapterState(*(_QWORD *)(*(_QWORD *)(v36 + 16) + 216LL), &i, &Object);
          StandardAllocation = SavedAdapterState;
          if ( SavedAdapterState < 0 )
          {
            WdLogSingleEntry1(2LL, SavedAdapterState);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to find saved GPU-P state. Status: 0x%I64x",
              StandardAllocation,
              0LL,
              0LL,
              0LL,
              0LL);
            goto LABEL_93;
          }
          if ( Object )
          {
            v38 = (char *)Object + 4;
            v39 = 0;
            if ( *(_DWORD *)Object )
            {
              while ( *v38 != a2->PartitionId )
              {
                ++v39;
                v38 = (_DWORD *)((char *)v38 + (unsigned int)v38[3]);
                if ( v39 >= *(_DWORD *)Object )
                  goto LABEL_54;
              }
              v48 = a2->NumMemorySegments;
              if ( v38[2] != v48 )
              {
                WdLogSingleEntry1(2LL, 627LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"NumMemorySegments in saved virtual function and new vGPU is different",
                  627LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                goto LABEL_93;
              }
              v49 = 0LL;
              v33 = v38 + 4;
              if ( v48 )
              {
                while ( v33[6 * v49] == a2->SegmentInfo[v49].DriverSegmentId
                     && *(_QWORD *)&v33[6 * v49 + 4] == a2->SegmentInfo[v49].Size
                     && v33[6 * v49 + 1] == a2->SegmentInfo[v49].Alignment )
                {
                  v49 = (unsigned int)(v49 + 1);
                  if ( (unsigned int)v49 >= v48 )
                    goto LABEL_54;
                }
                WdLogSingleEntry1(2LL, 637LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Segment parameters in the saved data do not match",
                  637LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                goto LABEL_93;
              }
            }
          }
        }
LABEL_54:
        v40 = a2->NumMemorySegments;
        v41 = 0LL;
        for ( i = 0; (unsigned int)v41 < v40; v40 = a2->NumMemorySegments )
        {
          v94 = 0;
          memset(v89, 0, 0x1A8uLL);
          v42 = VirtualGpuDevice;
          LODWORD(v89[0]) |= 0x200u;
          Object = (PVOID)(unsigned int)v41;
          HIDWORD(v89[0]) = *((_DWORD *)VirtualGpuDevice + 109);
          v89[3] = &Size;
          LODWORD(v89[2]) = 5;
          Size = a2->SegmentInfo[v41].Size;
          Alignment = a2->SegmentInfo[v41].Alignment;
          DriverSegmentId = a2->SegmentInfo[v41].DriverSegmentId;
          PrivateDriverData = a2->SegmentInfo[v41].PrivateDriverData;
          KeStackAttachProcess(*(PRKPROCESS *)(v73 + 56), &ApcState);
          StandardAllocation = (int)DXGDEVICE::CreateStandardAllocation(
                                      v42,
                                      (struct _D3DKM_CREATESTANDARDALLOCATION *)v89,
                                      0LL);
          KeUnstackDetachProcess(&ApcState);
          if ( (int)StandardAllocation < 0 )
            goto LABEL_30;
          v43 = HIDWORD(v89[6]);
          DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v73 + 248));
          v44 = (v43 >> 6) & 0xFFFFFF;
          if ( (unsigned int)v44 < *(_DWORD *)(v73 + 296)
            && (v45 = *(_QWORD *)(v73 + 280),
                v46 = *(_DWORD *)(v45 + 16 * v44 + 8),
                ((v43 >> 25) & 0x60) == (*(_BYTE *)(v45 + 16 * v44 + 8) & 0x60))
            && (v46 & 0x2000) == 0
            && (v46 & 0x1F) != 0 )
          {
            if ( (v46 & 0x1F) == 5 )
            {
              v47 = *(_QWORD *)(v45 + 16LL * (unsigned int)v44);
            }
            else
            {
              WdLogSingleEntry1(2LL, 267LL);
              DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
              v47 = 0LL;
            }
          }
          else
          {
            v47 = 0LL;
          }
          ExReleasePushLockSharedEx(v73 + 248, 0LL);
          KeLeaveCriticalRegion();
          v50 = Object;
          v51 = 32LL * (_QWORD)Object;
          *(_QWORD *)(32LL * (_QWORD)Object + *((_QWORD *)v4 + 23)) = v47;
          if ( v33 )
            v52 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)VirtualGpuDevice + 2) + 648LL)
                                                                                        + 8LL)
                                                                            + 1248LL))(
                    *(_QWORD *)(*((_QWORD *)v6 + 4) + 656LL),
                    *(_QWORD *)(*(_QWORD *)(v51 + *((_QWORD *)v4 + 23)) + 24LL),
                    (unsigned int)v33[6 * (_QWORD)v50],
                    *(_QWORD *)&v33[6 * (_QWORD)v50 + 2]);
          else
            v52 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)VirtualGpuDevice + 2) + 648LL) + 8LL)
                                                                                            + 232LL))(
                    *(_QWORD *)(*((_QWORD *)v6 + 4) + 656LL),
                    *(_QWORD *)(*(_QWORD *)(v51 + *((_QWORD *)v4 + 23)) + 24LL),
                    0LL,
                    0LL,
                    0LL,
                    0LL);
          LODWORD(StandardAllocation) = v52;
          if ( v52 < 0 )
          {
            WdLogSingleEntry1(2LL, v52);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to pin virtual GPU allocation. Status = 0x%I64x",
              (int)StandardAllocation,
              0LL,
              0LL,
              0LL,
              0LL);
            goto LABEL_93;
          }
          v41 = i + 1;
          *(_QWORD *)(v51 + *((_QWORD *)v4 + 23) + 16) = Size;
          v53 = *((_QWORD *)v4 + 23);
          i = v41;
          *(_DWORD *)(v51 + v53 + 24) = Alignment;
        }
        memset(v100.MemoryInfo, 0, sizeof(v100.MemoryInfo));
        memset(v101, 0, sizeof(v101));
        v55 = 0;
        v100.PartitionId = a2->PartitionId;
        v100.NumMemoryAllocations = v40;
        if ( v40 )
        {
          v56 = VirtualGpuDevice;
          do
          {
            v57 = *((_QWORD *)v56 + 2);
            i = 0;
            Object = 0LL;
            v73 = 0LL;
            v58 = v55;
            v59 = v55;
            (*(void (__fastcall **)(_QWORD, _QWORD, unsigned int *, PVOID *, UINT64 *))(*(_QWORD *)(*(_QWORD *)(v57 + 648)
                                                                                                  + 8LL)
                                                                                      + 224LL))(
              *(_QWORD *)(*((_QWORD *)v6 + 4) + 656LL),
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v58 * 32 + *((_QWORD *)v4 + 23)) + 48LL) + 8LL),
              &i,
              &Object,
              &v73);
            v60 = *((_QWORD *)v4 + 23);
            ++v55;
            v61 = i;
            v100.MemoryInfo[v58].DriverAllocationHandle = *(HANDLE *)(*(_QWORD *)(*(_QWORD *)(v58 * 32 + v60) + 48LL)
                                                                    + 16LL);
            v100.MemoryInfo[v58].AllocationAddress.MemorySegmentOffset = v73;
            v100.MemoryInfo[v58].AllocationAddress.MemorySegmentId = v61;
            v100.MemoryInfo[v58].AllocationSize = a2->SegmentInfo[v59].Size;
            *(_DWORD *)(v58 * 32 + v60 + 28) = v61;
            *(_QWORD *)(v58 * 32 + *((_QWORD *)v4 + 23) + 8) = v73;
          }
          while ( v55 < a2->NumMemorySegments );
        }
        v62 = ADAPTER_RENDER::DdiSetVirtualGpuResources(*((ADAPTER_RENDER **)v6 + 4), &v100, v54);
        v63 = 0LL;
        StandardAllocation = v62;
        if ( bTracingEnabled )
        {
          DxgkLogInternalTriageEvent(
            v75,
            196610,
            a2->PartitionId,
            (__int64)L"Setting vGPU resources with %1 segments returns %2",
            a2->NumMemorySegments,
            v62,
            0LL,
            0LL,
            0LL);
          if ( a2->NumMemorySegments )
          {
            v64 = v75;
            p_MemorySegmentOffset = (__int64 *)&v100.MemoryInfo[0].AllocationAddress.MemorySegmentOffset;
            do
            {
              DxgkLogInternalTriageEvent(
                v64,
                196610,
                a2->PartitionId,
                (__int64)L"vGPU has a resource set on segment %1 at offset %2 with a size of %3",
                *((unsigned int *)p_MemorySegmentOffset - 2),
                *p_MemorySegmentOffset,
                p_MemorySegmentOffset[1],
                0LL,
                0LL);
              p_MemorySegmentOffset += 4;
              ++v63;
            }
            while ( v63 < a2->NumMemorySegments );
            v6 = v80;
          }
        }
        if ( (int)StandardAllocation < 0 )
        {
          WdLogSingleEntry2(3LL, StandardAllocation, 788LL);
          goto LABEL_93;
        }
        Object = 0LL;
        v66 = ObReferenceObjectByHandle(Handle, 0x20000u, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
        v67 = Object;
        LODWORD(StandardAllocation) = v66;
        if ( v66 < 0 )
        {
          WdLogSingleEntry1(3LL, v66);
          goto LABEL_93;
        }
        if ( *((_QWORD *)Object + 4) )
        {
          WdLogSingleEntry1(2LL, 806LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"The device file handle to bind to the new vGPU has already been bound to some other object.",
            806LL,
            0LL,
            0LL,
            0LL,
            0LL);
          LODWORD(StandardAllocation) = -1073741816;
          ObfDereferenceObject(v67);
          goto LABEL_93;
        }
        v68 = Object;
        *((_QWORD *)Object + 4) = v76;
        *((_QWORD *)v4 + 20) = v67;
        ObfDereferenceObject(v68);
        DXGK_VIRTUAL_GPU::ReportState(v4, v69, v70);
      }
      LODWORD(StandardAllocation) = 0;
LABEL_21:
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v85);
      goto LABEL_22;
    }
    v15 = a2->PartitionId;
    i = 0xFFFF;
    LODWORD(StandardAllocation) = DXGVIRTUALGPUMANAGER::GetTargetPartitionId(v6, v15, &i);
    if ( (int)StandardAllocation < 0 )
      goto LABEL_21;
    v17 = i;
    a2->PartitionId = i;
    v18 = (DXGK_VIRTUAL_GPU *)operator new[](0xC8uLL, 0x4B677844u, 256LL, v16);
    v4 = v18;
    if ( v18 )
    {
      DXGK_VIRTUAL_GPU::DXGK_VIRTUAL_GPU(v18, *((struct ADAPTER_RENDER **)v6 + 4), 0);
      *(_QWORD *)v4 = &DXGK_VIRTUAL_GPU_GPUP::`vftable';
      v76 = (void *)operator new[](0x10uLL, 0x4B677844u, 256LL, v19);
      if ( v76 )
      {
        *((_QWORD *)v4 + 11) = Object;
        *((_QWORD *)v4 + 22) = VirtualGpuDevice;
        *((_DWORD *)v4 + 6) = v17;
        *(_QWORD *)(*((_QWORD *)v6 + 3) + 8 * v17) = v4;
        ++*((_DWORD *)v6 + 4);
        DXGPUSHLOCK::AcquireExclusive((DXGVIRTUALGPUMANAGER_GPUP *)((char *)v6 + 72));
        v21 = (_QWORD *)((char *)v6 + 104);
        v22 = *((_QWORD *)v6 + 13);
        v23 = (_QWORD *)((char *)v4 + 120);
        if ( *(DXGVIRTUALGPUMANAGER_GPUP **)(v22 + 8) != (DXGVIRTUALGPUMANAGER_GPUP *)((char *)v6 + 104) )
          __fastfail(3u);
        *v23 = v22;
        *((_QWORD *)v4 + 16) = v21;
        *(_QWORD *)(v22 + 8) = v23;
        *v21 = v23;
        *((_QWORD *)v6 + 10) = 0LL;
        ExReleasePushLockExclusiveEx((char *)v6 + 72, 0LL);
        KeLeaveCriticalRegion();
        v24 = v76;
        *(_QWORD *)v76 = v75;
        v24[2] = v17;
        goto LABEL_29;
      }
      WdLogSingleEntry1(6LL, 534LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Not enough memory to allocate the DXGSHAREDVGPUOBJECT for handle tracking.",
        534LL,
        0LL,
        0LL,
        0LL,
        0LL);
      (**(void (__fastcall ***)(DXGK_VIRTUAL_GPU *, __int64))v4)(v4, 1LL);
    }
    LODWORD(StandardAllocation) = -1073741801;
    goto LABEL_21;
  }
  WdLogSingleEntry2(3LL, VirtualGpuDevice, v13);
LABEL_22:
  COREACCESS::~COREACCESS((COREACCESS *)v99);
  COREACCESS::~COREACCESS((COREACCESS *)v98);
  if ( v84 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v82);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v88);
  return (unsigned int)StandardAllocation;
}
