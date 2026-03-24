/*
 * XREFs of ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C006ECA0
 * Callers:
 *     ?PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00611D4 (-PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?PageInFaultedAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z @ 0x1C00613C0 (-PageInFaultedAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0065C20 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006BD00 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0088760 (-CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC.c)
 *     ?CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0088EF8 (-CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z @ 0x1C008D56C (-InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z.c)
 *     ?LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z @ 0x1C00B1020 (-LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001BD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGpuMmuCaps@ADAPTER_RENDER@@QEBAPEBUDXGADAPTER_GPUMMUCAPS@@I@Z @ 0x1C0001C88 (-GetGpuMmuCaps@ADAPTER_RENDER@@QEBAPEBUDXGADAPTER_GPUMMUCAPS@@I@Z.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C0001CAC (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0001D90 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x1C0017820 (__security_check_cookie.c)
 *     Feature_3895685435__private_IsEnabledDeviceUsage @ 0x1C00179EC (Feature_3895685435__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018BF0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqx_EtwWriteTransfer @ 0x1C0024C84 (McTemplateK0pqx_EtwWriteTransfer.c)
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00295C0 (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     CommitVirtualAddressRangesInList @ 0x1C005D0E0 (CommitVirtualAddressRangesInList.c)
 *     MergeAllocationPendingVaRangeList @ 0x1C005EAC0 (MergeAllocationPendingVaRangeList.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C006D860 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?ReferenceAllocationForPreparation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C006F668 (-ReferenceAllocationForPreparation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAE@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C006F95C (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?AddCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C006F9A0 (-AddCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C006FD28 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?TrimResidentBytes@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x1C00737A0 (-TrimResidentBytes@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z.c)
 *     ?MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C0073BAC (-MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z.c)
 *     ?VerifyGlobalResidentLimit@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x1C0073EA4 (-VerifyGlobalResidentLimit@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z.c)
 *     ?FindResourcesForOneAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NI_K@Z @ 0x1C008791C (-FindResourcesForOneAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTIO.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00898C4 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C008992C (-EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z @ 0x1C00899AC (-EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z.c)
 *     ?CancelAllReclaimedAllocationsInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00AE258 (-CancelAllReclaimedAllocationsInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?TrimMarkedForEvictionAllocations@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C00B4118 (-TrimMarkedForEvictionAllocations@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?VidMmiEnsureVirtualAddressRangeValid@@YAJPEAX_K@Z @ 0x1C00BC46C (-VidMmiEnsureVirtualAddressRangeValid@@YAJPEAX_K@Z.c)
 *     ?ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00C7D64 (-ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_GLOBAL::PageInOneAllocation(
        __int64 a1,
        __int64 **a2,
        unsigned int a3,
        unsigned __int8 a4,
        bool *a5,
        __int64 ***a6,
        int a7,
        __int64 a8)
{
  unsigned int v8; // r12d
  unsigned __int8 v9; // r13
  unsigned int v10; // r14d
  __int64 *v13; // rcx
  _QWORD *v14; // rax
  __int64 *v15; // rdx
  __int64 *v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // r14
  unsigned int *v22; // r13
  VIDMM_GLOBAL *v23; // rcx
  unsigned int i; // edi
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  VIDMM_CPU_HOST_APERTURE **v29; // rcx
  VIDMM_GLOBAL *v30; // rcx
  VIDMM_GLOBAL *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // r14
  unsigned __int64 v36; // rax
  bool *v37; // rcx
  _QWORD *v38; // rax
  int v39; // ecx
  __int64 *v40; // rax
  __int64 *v41; // r14
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rax
  char v46; // al
  VIDMM_SEGMENT *v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 *v53; // rcx
  unsigned int v54; // r8d
  VIDMM_PROCESS *v55; // rcx
  struct _KTHREAD **VirtualAddressAllocator; // rax
  struct _KTHREAD **v57; // r13
  unsigned int v58; // r14d
  CVirtualAddressAllocator *v59; // rsi
  unsigned __int64 v60; // rsi
  __int64 **v61; // r13
  __int64 v62; // rdx
  __int64 v63; // rcx
  char v64; // dl
  unsigned __int64 v65; // rax
  unsigned __int64 v66; // rcx
  CVirtualAddressAllocator *v67; // rbx
  unsigned __int64 v68; // r13
  __int64 v69; // r8
  __int64 v70; // rax
  struct _KTHREAD **v71; // rcx
  bool *v72; // rcx
  void *v74; // [rsp+20h] [rbp-E0h]
  char v76; // [rsp+50h] [rbp-B0h]
  char v77; // [rsp+51h] [rbp-AFh]
  unsigned __int8 v78[2]; // [rsp+52h] [rbp-AEh] BYREF
  int v79; // [rsp+54h] [rbp-ACh]
  bool *v80; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v81; // [rsp+60h] [rbp-A0h]
  __int64 ***v82; // [rsp+68h] [rbp-98h]
  __int64 v83; // [rsp+70h] [rbp-90h]
  struct _MDL *FullMDL; // [rsp+78h] [rbp-88h]
  struct _KTHREAD **v85; // [rsp+80h] [rbp-80h]
  unsigned __int64 v86; // [rsp+88h] [rbp-78h]
  CVirtualAddressAllocator *v87; // [rsp+90h] [rbp-70h]
  __int64 v88; // [rsp+98h] [rbp-68h]
  __int64 **v89[3]; // [rsp+A0h] [rbp-60h] BYREF
  int v90; // [rsp+B8h] [rbp-48h]
  int v91; // [rsp+BCh] [rbp-44h]
  __int64 v92; // [rsp+C0h] [rbp-40h]
  struct _MDL *v93; // [rsp+C8h] [rbp-38h]
  __int64 **v94; // [rsp+D0h] [rbp-30h]
  _BOOL8 v95; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v96; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v97; // [rsp+E8h] [rbp-18h]
  struct _KAPC_STATE ApcState; // [rsp+F0h] [rbp-10h] BYREF

  v8 = 0;
  v80 = a5;
  v9 = a4;
  v10 = a3;
  v82 = a6;
  v79 = a3;
  *a6 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1) + 24) = a2;
  if ( (*((_DWORD *)a2 + 7) & 3) == 1 )
  {
    v13 = a2[7];
    v14 = a2 + 7;
    if ( (__int64 **)v13[1] != a2 + 7 || (v15 = a2[8], (_QWORD *)*v15 != v14) )
      __fastfail(3u);
    *v15 = (__int64)v13;
    v13[1] = (__int64)v15;
    *((_DWORD *)a2 + 7) &= 0xFFFFFFFC;
    a2[8] = 0LL;
    *v14 = 0LL;
  }
  v16 = *a2;
  v78[0] = 0;
  v17 = *v16;
  v88 = *v16;
  LODWORD(v18) = VIDMM_GLOBAL::ReferenceAllocationForPreparation((VIDMM_GLOBAL *)a1, (struct VIDMM_ALLOC *)a2, v78);
  if ( (int)v18 < 0 )
  {
    while ( 1 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v17 + 488, 0LL);
      if ( !*(_QWORD *)(v17 + 216) )
      {
        if ( g_IsInternalReleaseOrDbg )
          WdLogNewEntry5_WdTrace(v19);
        VIDMM_GLOBAL::EvictTemporaryAllocations((VIDMM_GLOBAL *)a1, v10 != 0, *(_DWORD *)(v17 + 76) & 0x3F);
        if ( *v82 )
          VIDMM_GLOBAL::EvictTemporaryAllocations((VIDMM_GLOBAL *)a1, v10 != 0, *(_DWORD *)(***v82 + 76) & 0x3F);
        LODWORD(v18) = VIDMM_GLOBAL::FindResourcesForOneAllocation(a1, a2, v10, v9, a7, a8);
        if ( (int)v18 < 0 )
          goto LABEL_22;
      }
      v21 = **a2;
      v22 = *(unsigned int **)(v21 + 216);
      VIDMM_SEGMENT::TrimResidentBytes((VIDMM_SEGMENT *)v22, *(struct VIDMM_PARTITION_ADAPTER_INFO **)(v21 + 496));
      if ( !VIDMM_GLOBAL::VerifyGlobalResidentLimit(v23, *(struct VIDMM_PARTITION_ADAPTER_INFO **)(v21 + 496)) )
      {
        for ( i = 0; i < *(_DWORD *)(a1 + 3704); ++i )
          VIDMM_SEGMENT::TrimResidentBytes(
            *(VIDMM_SEGMENT **)(*(_QWORD *)(a1 + 3712) + 8LL * i),
            *(struct VIDMM_PARTITION_ADAPTER_INFO **)(v21 + 496));
      }
      VIDMM_GLOBAL::EvictAllReclaimedAllocation((VIDMM_GLOBAL *)a1);
      if ( (*(_DWORD *)(360LL * v22[95] + *(_QWORD *)(*(_QWORD *)(a1 + 24) + 2584LL) + 16) & 4) != 0 )
        VIDMM_SEGMENT::ProcessPendingMoves((VIDMM_SEGMENT *)v22);
      v25 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v21 + 216) + 40LL))(*(_QWORD *)(v21 + 216), v21);
      v18 = v25;
      if ( v25 >= 0 )
      {
        VIDMM_GLOBAL::FlushPagingBufferInternal((VIDMM_GLOBAL *)a1, *(_DWORD *)(v21 + 76) & 0x3F, 0, 0LL, 0LL, 0, 0);
        v78[0] = 1;
        LODWORD(v18) = 0;
        ExReleasePushLockExclusiveEx(v17 + 488, 0LL);
        KeLeaveCriticalRegion();
        goto LABEL_34;
      }
      if ( g_IsInternalReleaseOrDbg )
        break;
LABEL_24:
      v29 = *(VIDMM_CPU_HOST_APERTURE ***)(v17 + 216);
      if ( v29 )
      {
        if ( *(_DWORD *)(v17 + 480) != -1 )
        {
          VIDMM_CPU_HOST_APERTURE::ReleaseRange(v29[61], (struct _VIDMM_GLOBAL_ALLOC *)v17);
          v29 = *(VIDMM_CPU_HOST_APERTURE ***)(v17 + 216);
        }
        (*((void (__fastcall **)(VIDMM_CPU_HOST_APERTURE **, __int64, _QWORD, _QWORD))*v29 + 3))(
          v29,
          v17,
          *(_QWORD *)(v17 + 200),
          *(_QWORD *)(v17 + 16));
        *(_QWORD *)(v17 + 216) = 0LL;
        *(_QWORD *)(v17 + 200) = 0LL;
      }
      ExReleasePushLockExclusiveEx(v17 + 488, 0LL);
      KeLeaveCriticalRegion();
      VIDMM_GLOBAL::CancelAllReclaimedAllocationsInList(v30, (struct _LIST_ENTRY *)(a1 + 3736));
      VIDMM_GLOBAL::CancelAllReclaimedAllocationsInList(v31, (struct _LIST_ENTRY *)(a1 + 3752));
      v34 = WdLogNewEntry5_WdWarning(v33, v32);
      v35 = v79;
      *(_QWORD *)(v34 + 24) = a2;
      *(_QWORD *)(v34 + 32) = v35;
      WdLogEvent5_WdWarning(v34);
      if ( (_DWORD)v35 )
        goto LABEL_34;
      if ( (*(_DWORD *)(v17 + 76) & 0x40) == 0 )
        goto LABEL_34;
      v9 = a4;
      if ( a4 )
        goto LABEL_34;
      v36 = *(_QWORD *)(v17 + 16);
      v10 = 2;
      v79 = 2;
      VIDMM_GLOBAL::TrimMarkedForEvictionAllocations((VIDMM_GLOBAL *)a1, v36 + (v36 >> 2));
    }
    v27 = WdLogNewEntry5_WdTrace(v26);
    *(_QWORD *)(v27 + 24) = v21;
    *(_QWORD *)(v27 + 32) = v18;
LABEL_22:
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(v20);
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v28) + 24) = a2;
    }
    goto LABEL_24;
  }
LABEL_34:
  if ( (*(_DWORD *)(v17 + 76) & 0x100000) != 0 )
  {
    v37 = v80;
    LODWORD(v18) = -1071775466;
    *v80 = 0;
    if ( !g_IsInternalReleaseOrDbg )
      goto LABEL_104;
    v38 = (_QWORD *)WdLogNewEntry5_WdTrace(v37);
    v38[5] = 17850LL;
LABEL_103:
    v38[4] = v17;
    v38[3] = a2;
    goto LABEL_104;
  }
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 24) + 2646LL) || *(_BYTE *)(*(_QWORD *)(a1 + 16) + 889LL) )
  {
    v72 = v80;
    LODWORD(v18) = -1073741130;
    *v80 = 0;
    if ( !g_IsInternalReleaseOrDbg )
      goto LABEL_104;
    v38 = (_QWORD *)WdLogNewEntry5_WdTrace(v72);
    v38[5] = 17858LL;
    goto LABEL_103;
  }
  if ( (int)v18 < 0 )
  {
LABEL_94:
    *v80 = (int)v18 < 0;
    if ( (int)v18 < 0 )
      *v82 = a2;
    return (unsigned int)v18;
  }
  if ( !*((_BYTE *)a2 + 26) )
  {
    v39 = *(_DWORD *)(v17 + 80);
    if ( (v39 & 0x400) == 0 )
    {
      if ( a2[20]
        && (*(_BYTE *)(a1 + 40936) & 8) != 0
        && ((v39 & 0x80u) == 0 || (**(_DWORD **)(v17 + 512) & 0x20000008) != 0) )
      {
        v40 = *a2;
        memset(&ApcState, 0, sizeof(ApcState));
        KeStackAttachProcess(*(PRKPROCESS *)v40[1], &ApcState);
        v41 = a2[20];
        v18 = (int)VidMmiEnsureVirtualAddressRangeValid(v41, *(_QWORD *)(v17 + 8));
        KeUnstackDetachProcess(&ApcState);
        if ( (int)v18 < 0 )
        {
          v45 = WdLogNewEntry5_WdAssertion(v43, v42, v44);
          *(_QWORD *)(v45 + 24) = v41;
          *(_QWORD *)(v45 + 32) = v18;
          WdLogEvent5_WdAssertion(v45);
          *v80 = 0;
          goto LABEL_104;
        }
      }
      *((_BYTE *)a2 + 26) = 1;
    }
  }
  v46 = *(_BYTE *)(a1 + 40936);
  if ( (v46 & 2) == 0
    || (v46 & 0x10) != 0 && (*(_DWORD *)(v17 + 76) & 0x100) != 0
    || (*(_DWORD *)(v17 + 80) & 0x400) != 0 )
  {
LABEL_89:
    if ( (*((_DWORD *)a2 + 7) & 3) != 2 )
    {
      VIDMM_DEVICE::AddCommitment((VIDMM_DEVICE *)a2[1], (struct VIDMM_ALLOC *)a2);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          LODWORD(v74) = *(_DWORD *)(*(_QWORD *)(v17 + 128) + 16LL) + 1;
          McTemplateK0pqx_EtwWriteTransfer(
            (unsigned int)v74,
            &EventPageInAllocation,
            v69,
            a2,
            v74,
            *(_QWORD *)(v17 + 136));
        }
      }
    }
    *(_BYTE *)(v17 + 90) = 1;
    goto LABEL_94;
  }
  v47 = *(VIDMM_SEGMENT **)(v17 + 128);
  if ( (*((_DWORD *)v47 + 20) & 0x1001) != 0 )
  {
    v79 = 0;
    v83 = 0LL;
    FullMDL = VidMmGetFullMDL((struct _VIDMM_GLOBAL_ALLOC *)v17, 0LL);
    if ( !FullMDL )
    {
      v51 = WdLogNewEntry5_WdAssertion(v49, v48, v50);
      *(_QWORD *)(v51 + 24) = v17;
      WdLogEvent5_WdAssertion(v51);
      LODWORD(v18) = -1073741801;
      goto LABEL_104;
    }
  }
  else
  {
    v79 = VIDMM_SEGMENT::DriverId(v47);
    v83 = *(_QWORD *)(v17 + 136);
    FullMDL = 0LL;
  }
  v52 = *(_QWORD *)(a1 + 24);
  v53 = *a2;
  v54 = *(_DWORD *)(v17 + 76) & 0x3F;
  v86 = -1LL;
  LODWORD(v52) = *(_DWORD *)(v52 + 232);
  v55 = (VIDMM_PROCESS *)v53[1];
  v81 = 0LL;
  VirtualAddressAllocator = (struct _KTHREAD **)VIDMM_PROCESS::GetVirtualAddressAllocator(v55, v52, v54);
  v87 = (CVirtualAddressAllocator *)VirtualAddressAllocator;
  v57 = VirtualAddressAllocator + 7;
  v85 = VirtualAddressAllocator + 7;
  if ( VirtualAddressAllocator[8] == KeGetCurrentThread() )
  {
    v77 = 1;
  }
  else
  {
    v77 = 0;
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(VirtualAddressAllocator + 7));
  }
  v76 = 0;
  v58 = 0;
  if ( (unsigned int)Feature_3895685435__private_IsEnabledDeviceUsage() )
  {
    v59 = v87;
    v89[2] = 0LL;
    v91 = 0;
    v95 = 0LL;
    v90 = v79;
    v93 = FullMDL;
    v92 = v83;
    v94 = 0LL;
    v89[0] = a2;
    v89[1] = (__int64 **)v87;
    v96 = -1LL;
    v97 = 0LL;
    LODWORD(v18) = CommitVirtualAddressRangesInList(a2 + 16, v89);
    if ( (int)v18 < 0
      || (LODWORD(v18) = CommitVirtualAddressRangesInList(a2 + 18, v89), (int)v18 < 0)
      || (LODWORD(v18) = MergeAllocationPendingVaRangeList(v59, (__int64)a2), (int)v18 < 0) )
    {
      if ( !v77 )
      {
        v57[1] = 0LL;
        ExReleasePushLockExclusiveEx(v57, 0LL);
        KeLeaveCriticalRegion();
      }
      *v82 = v94;
      *v80 = v95;
      goto LABEL_104;
    }
    v58 = HIDWORD(v95);
    v60 = v96;
    v81 = v97;
    v76 = 1;
    goto LABEL_80;
  }
  v61 = (__int64 **)a2[16];
  if ( v61 == a2 + 16 )
  {
    v60 = -1LL;
LABEL_79:
    v57 = v85;
LABEL_80:
    if ( !v77 )
    {
      v57[1] = 0LL;
      ExReleasePushLockExclusiveEx(v57, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( v76 && v58 )
    {
      v67 = v87;
      v68 = v81;
      do
      {
        if ( (v58 & 1) != 0 )
          CVirtualAddressAllocator::FlushGpuVaTlb(v67, v8, v60, v68);
        ++v8;
        v58 >>= 1;
      }
      while ( v58 );
      v17 = v88;
    }
    goto LABEL_89;
  }
  while ( ((_DWORD)v61[5] & 0x400) != 0 )
  {
LABEL_77:
    v61 = (__int64 **)*v61;
    if ( v61 == a2 + 16 )
    {
      v60 = v86;
      goto LABEL_79;
    }
  }
  LODWORD(v18) = CVirtualAddressAllocator::CommitVirtualAddressRange(
                   v87,
                   v61 - 3,
                   *(_DWORD *)(v17 + 76) & 0x3F,
                   (unsigned int)v79,
                   (char *)v61[6] + v83,
                   FullMDL,
                   0,
                   v82,
                   0LL);
  if ( (int)v18 >= 0 )
  {
    if ( (*(_DWORD *)ADAPTER_RENDER::GetGpuMmuCaps(*(ADAPTER_RENDER **)(a1 + 16), (*((_DWORD *)v61 + 10) >> 4) & 0x3F) & 0x400) == 0 )
    {
      v65 = (unsigned __int64)v61[9];
      v58 |= 1 << v64;
      v66 = (unsigned __int64)v61[10];
      if ( v86 < v65 )
        v65 = v86;
      v76 = 1;
      if ( v81 > v66 )
        v66 = v81;
      v81 = v66;
      v86 = v65;
    }
    goto LABEL_77;
  }
  v70 = WdLogNewEntry5_WdWarning(v63, v62);
  *(_QWORD *)(v70 + 24) = a2;
  *(_QWORD *)(v70 + 32) = 18018LL;
  WdLogEvent5_WdWarning(v70);
  if ( !v77 )
  {
    v71 = v85;
    v85[1] = 0LL;
    ExReleasePushLockExclusiveEx(v71, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( (_DWORD)v18 == -1073741267 )
    *v80 = 1;
LABEL_104:
  if ( v78[0] )
    VIDMM_SEGMENT::MarkResourcesForEviction(*(VIDMM_SEGMENT **)(v17 + 128), (struct _VIDMM_GLOBAL_ALLOC *)v17, 0LL, 0LL);
  return (unsigned int)v18;
}
