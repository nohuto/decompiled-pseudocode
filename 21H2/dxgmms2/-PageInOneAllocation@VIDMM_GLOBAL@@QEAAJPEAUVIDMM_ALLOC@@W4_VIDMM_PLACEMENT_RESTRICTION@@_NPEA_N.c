/*
 * XREFs of ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C00873F0
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00880D0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0093DF0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C009FF38 (-CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC.c)
 *     ?CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A11D8 (-CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A23A0 (-PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?PageInFaultedAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z @ 0x1C00A2598 (-PageInFaultedAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z.c)
 *     ?InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z @ 0x1C00A5ACC (-InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z.c)
 *     ?LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z @ 0x1C00D7ED8 (-LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z.c)
 * Callees:
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C0002698 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C001A5B0 (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001E570 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C002E3C0 (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0pqx_EtwWriteTransfer @ 0x1C002EDC8 (McTemplateK0pqx_EtwWriteTransfer.c)
 *     ?VerifyGlobalResidentLimit@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x1C00865F0 (-VerifyGlobalResidentLimit@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C008661C (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z @ 0x1C0086A8C (-EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z.c)
 *     ?FindResourcesForOneAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NI_K@Z @ 0x1C0086B7C (-FindResourcesForOneAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTIO.c)
 *     ?ReferenceAllocationForPreparation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C0087B5C (-ReferenceAllocationForPreparation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAE@Z.c)
 *     ?AddCommitment@VIDMM_PROCESS@@QEAAXPEAU_VIDMM_DEVICE_COMMITMENT_INFO@@KPEAVVIDMM_SEGMENT@@EPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0087C88 (-AddCommitment@VIDMM_PROCESS@@QEAAXPEAU_VIDMM_DEVICE_COMMITMENT_INFO@@KPEAVVIDMM_SEGMENT@@EPEAU_.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C008A360 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0095CE0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C00A0E24 (-MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z.c)
 *     GetBucketIdForAllocationSizePow2 @ 0x1C00A53DC (GetBucketIdForAllocationSizePow2.c)
 *     ?EvictAllAllocationInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@PEAIPEA_K@Z @ 0x1C00A8608 (-EvictAllAllocationInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@PEAIPEA_K@Z.c)
 *     ?CancelAllReclaimedAllocationsInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00D5604 (-CancelAllReclaimedAllocationsInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?NotifyAllocationReclaimed@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@H@Z @ 0x1C00D8948 (-NotifyAllocationReclaimed@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@H@Z.c)
 *     ?TrimMarkedForEvictionAllocations@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C00DA1E0 (-TrimMarkedForEvictionAllocations@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?GetAllocationPriorityClassFromPriority@@YA?AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z @ 0x1C00E1960 (-GetAllocationPriorityClassFromPriority@@YA-AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z.c)
 *     ?VidMmiEnsureVirtualAddressRangeValid@@YAJPEAX_K@Z @ 0x1C00E1EDC (-VidMmiEnsureVirtualAddressRangeValid@@YAJPEAX_K@Z.c)
 *     ?GetBucketIdFromSize@VIDMM_TELEMETRY_PROCESS_DEMOTED_CONTENT_BY_FREE_MEMORY@@CAI_K@Z @ 0x1C00E4E14 (-GetBucketIdFromSize@VIDMM_TELEMETRY_PROCESS_DEMOTED_CONTENT_BY_FREE_MEMORY@@CAI_K@Z.c)
 *     ?ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00EB918 (-ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?TrimResidentBytes@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x1C00ED69C (-TrimResidentBytes@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::PageInOneAllocation(
        __int64 a1,
        __int64 **a2,
        __int64 a3,
        __int64 a4,
        _BYTE *a5,
        __int64 ***a6,
        unsigned int a7,
        __int64 a8)
{
  unsigned int v8; // ebp
  _BYTE *v9; // rdi
  signed int v10; // r13d
  __int64 **v11; // r14
  __int64 *v13; // rbx
  __int64 v14; // rbx
  _QWORD *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r12
  __int64 v20; // rsi
  __int64 v21; // rdx
  VIDMM_GLOBAL *v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r9
  unsigned __int8 v26; // di
  __int64 v27; // r13
  unsigned int *v28; // r12
  struct VIDMM_PARTITION_ADAPTER_INFO *v29; // rdi
  _QWORD *v30; // rdi
  __int64 v31; // rcx
  struct _VIDMM_GLOBAL_ALLOC *v32; // rsi
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  unsigned __int64 v38; // rcx
  int v39; // ecx
  __int64 v40; // rcx
  __int64 *v41; // rsi
  __int64 v42; // rdi
  VIDMM_PROCESS *v43; // r15
  unsigned int *v44; // rbp
  _QWORD *v45; // rcx
  __int64 v46; // rdx
  __int64 *v47; // r8
  __int64 v48; // r8
  __int64 v50; // rcx
  int v51; // eax
  __int64 *v52; // rax
  struct _KTHREAD **v53; // r10
  struct _KTHREAD **v54; // r13
  struct _VIDMM_GLOBAL_ALLOC *v55; // rax
  unsigned int v56; // edi
  struct _VIDMM_GLOBAL_ALLOC *v57; // rcx
  _DWORD *v58; // rsi
  __int64 v59; // rcx
  _DWORD *v60; // rax
  CVirtualAddressAllocator *v61; // rsi
  unsigned __int64 v62; // rbx
  unsigned __int64 v63; // r14
  int v64; // r9d
  __int64 *v65; // rcx
  _QWORD *v66; // rax
  __int64 *v67; // rdx
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  unsigned int *v72; // rax
  unsigned int *v73; // rsi
  struct _VIDMM_GLOBAL_ALLOC *v74; // rcx
  VIDMM_GLOBAL *v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rax
  unsigned int i; // edi
  unsigned __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // rcx
  struct _VIDMM_GLOBAL_ALLOC *v83; // rax
  struct _VIDMM_GLOBAL_ALLOC *v84; // rdx
  struct _VIDMM_GLOBAL_ALLOC **v85; // rcx
  __int64 *v86; // rax
  LARGE_INTEGER PerformanceCounter; // rdi
  VIDMM_GLOBAL *v88; // rcx
  LARGE_INTEGER v89; // rax
  unsigned int BucketIdForAllocationSizePow2; // eax
  struct _VIDMM_GLOBAL_ALLOC *v91; // r9
  unsigned __int64 v92; // r8
  __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  VIDMM_CPU_HOST_APERTURE **v98; // rcx
  VIDMM_GLOBAL *v99; // rcx
  VIDMM_GLOBAL *v100; // rcx
  unsigned __int64 v101; // rax
  unsigned __int64 v102; // rdi
  __int64 v103; // rsi
  unsigned int BucketIdFromSize; // eax
  unsigned int AllocationPriorityClassFromPriority; // eax
  _QWORD *v106; // rax
  int v107; // ecx
  __int64 *v108; // rax
  __int64 *v109; // rsi
  __int64 v110; // rcx
  __int64 v111; // rcx
  __int64 v112; // rax
  int v113; // [rsp+20h] [rbp-108h]
  void *v114; // [rsp+20h] [rbp-108h]
  unsigned __int8 v115; // [rsp+50h] [rbp-D8h]
  unsigned __int8 v116; // [rsp+50h] [rbp-D8h]
  unsigned __int8 v117; // [rsp+51h] [rbp-D7h]
  unsigned __int8 v118[2]; // [rsp+52h] [rbp-D6h] BYREF
  unsigned int v119; // [rsp+54h] [rbp-D4h] BYREF
  CVirtualAddressAllocator *v120; // [rsp+58h] [rbp-D0h]
  _BYTE *v121; // [rsp+60h] [rbp-C8h]
  struct _VIDMM_GLOBAL_ALLOC *v122; // [rsp+68h] [rbp-C0h]
  unsigned __int64 v123; // [rsp+70h] [rbp-B8h] BYREF
  unsigned __int64 v124; // [rsp+78h] [rbp-B0h]
  __int64 ***v125; // [rsp+80h] [rbp-A8h]
  __int64 v126; // [rsp+88h] [rbp-A0h]
  struct _MDL *FullMDL; // [rsp+90h] [rbp-98h]
  __int64 v128; // [rsp+98h] [rbp-90h]
  __int64 **v129; // [rsp+A0h] [rbp-88h]
  struct _KAPC_STATE ApcState; // [rsp+A8h] [rbp-80h] BYREF

  v8 = 0;
  v9 = a5;
  v10 = a3;
  v125 = a6;
  v11 = a2;
  v115 = a4;
  *a6 = 0LL;
  LODWORD(v120) = a3;
  v129 = a2;
  v121 = a5;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2, a3, a4) + 24) = a2;
  if ( (*((_DWORD *)v11 + 7) & 3) == 1 )
  {
    v65 = v11[7];
    v66 = v11 + 7;
    if ( (__int64 **)v65[1] != v11 + 7 )
      goto LABEL_150;
    v67 = v11[8];
    if ( (_QWORD *)*v67 != v66 )
      goto LABEL_150;
    *v67 = (__int64)v65;
    v65[1] = (__int64)v67;
    *((_DWORD *)v11 + 7) &= 0xFFFFFFFC;
    v11[8] = 0LL;
    *v66 = 0LL;
  }
  v13 = *v11;
  v118[0] = 0;
  v14 = *v13;
  v128 = v14;
  LODWORD(v19) = VIDMM_GLOBAL::ReferenceAllocationForPreparation((VIDMM_GLOBAL *)a1, (struct VIDMM_ALLOC *)v11, v118);
  if ( (int)v19 < 0 )
  {
    v20 = v14 + 496;
    while ( 1 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v20, 0LL);
      if ( *(_QWORD *)(v14 + 200) )
        goto LABEL_12;
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v22, v21, v23, v24);
      VIDMM_GLOBAL::EvictTemporaryAllocations((VIDMM_GLOBAL **)a1, v10 != 0, *(_DWORD *)(v14 + 68) & 0x3F, v24);
      if ( *v125 )
        VIDMM_GLOBAL::EvictTemporaryAllocations((VIDMM_GLOBAL **)a1, v10 != 0, *(_DWORD *)(***v125 + 68) & 0x3F, v25);
      v26 = v115;
      LODWORD(v19) = VIDMM_GLOBAL::FindResourcesForOneAllocation(a1, (__int64)v11, v10, v115, a7, a8);
      if ( (int)v19 >= 0 )
      {
LABEL_12:
        v27 = **v11;
        v28 = *(unsigned int **)(v27 + 200);
        v29 = *(struct VIDMM_PARTITION_ADAPTER_INFO **)(v27 + 504);
        if ( (v28[20] & 0x1001) != 0
          && !VIDMM_GLOBAL::VerifyGlobalResidentLimit(
                v22,
                *(struct VIDMM_PARTITION_ADAPTER_INFO **)(v27 + 504),
                v23,
                v24) )
        {
          v72 = v28 + 44;
          v73 = (unsigned int *)*((_QWORD *)v28 + 22);
          if ( v73 != v28 + 44 )
          {
            do
            {
              v74 = (struct _VIDMM_GLOBAL_ALLOC *)(v73 - 100);
              v73 = *(unsigned int **)v73;
              v122 = v74;
              if ( *((struct VIDMM_PARTITION_ADAPTER_INFO **)v74 + 63) == v29 )
              {
                (*(void (__fastcall **)(unsigned int *, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, _QWORD))(*(_QWORD *)v28 + 24LL))(
                  v28,
                  v74,
                  *((_QWORD *)v74 + 17),
                  *((_QWORD *)v74 + 2));
                VIDMM_GLOBAL::NotifyAllocationReclaimed(*((VIDMM_GLOBAL **)v28 + 1), v122, 0);
                if ( VIDMM_GLOBAL::VerifyGlobalResidentLimit(v75, v29, v76, v77) )
                  break;
                v72 = v28 + 44;
              }
            }
            while ( v73 != v72 );
          }
        }
        v30 = *(_QWORD **)(v27 + 504);
        v31 = *v30;
        if ( *(_QWORD *)(*v30 + 64LL) > v30[2] )
        {
          if ( g_IsInternalReleaseOrDbg )
          {
            v78 = WdLogNewEntry5_WdTrace(v31, v21, v23, v24);
            *(_QWORD *)(v78 + 24) = v30[2];
            v31 = *v30;
            v21 = *(_QWORD *)(*v30 + 64LL);
            *(_QWORD *)(v78 + 32) = v21;
          }
          for ( i = 0; i < *(_DWORD *)(a1 + 3704); ++i )
            VIDMM_SEGMENT::TrimResidentBytes(
              *(VIDMM_SEGMENT **)(*(_QWORD *)(a1 + 3712) + 8LL * i),
              *(struct VIDMM_PARTITION_ADAPTER_INFO **)(v27 + 504));
        }
        if ( g_IsInternalReleaseOrDbg )
          WdLogNewEntry5_WdTrace(v31, v21, v23, v24);
        v32 = *(struct _VIDMM_GLOBAL_ALLOC **)(a1 + 3736);
        if ( v32 != (struct _VIDMM_GLOBAL_ALLOC *)(a1 + 3736) )
        {
          while ( 1 )
          {
            v80 = (unsigned __int64)v32 - 344;
            v122 = v32;
            v81 = *((_QWORD *)v32 - 28);
            v32 = *(struct _VIDMM_GLOBAL_ALLOC **)v32;
            LOBYTE(v23) = 1;
            v124 = v80;
            LOBYTE(v113) = 0;
            (*(void (__fastcall **)(__int64, unsigned __int64, __int64, _QWORD, int, _QWORD))(*(_QWORD *)v81 + 48LL))(
              v81,
              v80,
              v23,
              0LL,
              v113,
              0LL);
            if ( bTracingEnabled && (byte_1C006E941 & 1) != 0 )
              McTemplateK0p_EtwWriteTransfer(v82, &EventEvictAllocation, v23, v124);
            v83 = v122;
            v84 = *(struct _VIDMM_GLOBAL_ALLOC **)v122;
            if ( *(struct _VIDMM_GLOBAL_ALLOC **)(*(_QWORD *)v122 + 8LL) != v122 )
              break;
            v85 = (struct _VIDMM_GLOBAL_ALLOC **)*((_QWORD *)v122 + 1);
            if ( *v85 != v122 )
              break;
            *v85 = v84;
            *((_QWORD *)v84 + 1) = v85;
            *(_QWORD *)v83 = 0LL;
            *(_QWORD *)(v124 + 352) = 0LL;
            if ( v32 == (struct _VIDMM_GLOBAL_ALLOC *)(a1 + 3736) )
              goto LABEL_18;
          }
LABEL_150:
          __fastfail(3u);
        }
LABEL_18:
        if ( *(_QWORD *)(a1 + 3752) != a1 + 3752 )
        {
          v86 = v11[1];
          v119 = 0;
          v123 = 0LL;
          v122 = (struct _VIDMM_GLOBAL_ALLOC *)v86[2];
          if ( v122 )
          {
            PerformanceCounter = KeQueryPerformanceCounter(0LL);
            VIDMM_GLOBAL::EvictAllAllocationInList(v88, (struct _LIST_ENTRY *)(a1 + 3752), &v119, &v123);
            v89 = KeQueryPerformanceCounter(0LL);
            BucketIdForAllocationSizePow2 = GetBucketIdForAllocationSizePow2(
                                              *(unsigned int *)(**v11 + 16),
                                              **v11,
                                              v89.QuadPart - PerformanceCounter.QuadPart);
            v91 = v122;
            _InterlockedIncrement((volatile signed __int32 *)v122 + BucketIdForAllocationSizePow2 + 304);
            _InterlockedExchangeAdd((volatile signed __int32 *)v91 + BucketIdForAllocationSizePow2 + 326, v119);
            _InterlockedExchangeAdd64((volatile signed __int64 *)v91 + BucketIdForAllocationSizePow2 + 174, v123);
            _InterlockedExchangeAdd64((volatile signed __int64 *)v91 + BucketIdForAllocationSizePow2 + 196, v92);
            *((_BYTE *)v91 + 1744) = 1;
          }
          else
          {
            VIDMM_GLOBAL::EvictAllAllocationInList(0LL, (struct _LIST_ENTRY *)(a1 + 3752), &v119, &v123);
          }
        }
        if ( (*(_DWORD *)(344LL * v28[95] + *(_QWORD *)(*(_QWORD *)(a1 + 24) + 2680LL) + 16) & 4) != 0 )
          VIDMM_SEGMENT::ProcessPendingMoves((VIDMM_SEGMENT *)v28);
        v33 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v27 + 200) + 40LL))(
                *(_QWORD *)(v27 + 200),
                v27);
        v19 = v33;
        if ( v33 >= 0 )
        {
          VIDMM_GLOBAL::FlushPagingBufferInternal((VIDMM_GLOBAL *)a1, *(_DWORD *)(v27 + 68) & 0x3F, 0, 0LL, 0LL, 0, 0);
          LODWORD(v19) = 0;
          v38 = *(_QWORD *)(a1 + 44720) - *(_QWORD *)(a1 + 44728);
          if ( *(_QWORD *)(v14 + 16) < v38
            && (*(_DWORD *)(*(_QWORD *)(v14 + 120) + 80LL) & 0x1001) != 0
            && (*(_DWORD *)(v14 + 68) & 0x400) == 0 )
          {
            v102 = *(_QWORD *)(v27 + 16);
            v103 = v11[1][2];
            BucketIdFromSize = VIDMM_TELEMETRY_PROCESS_DEMOTED_CONTENT_BY_FREE_MEMORY::GetBucketIdFromSize(v38);
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v103 + 8LL * BucketIdFromSize + 800), v102);
            _InterlockedIncrement((volatile signed __int32 *)(v103 + 4LL * BucketIdFromSize + 1032));
            *(_BYTE *)(v103 + 1148) = 1;
            AllocationPriorityClassFromPriority = GetAllocationPriorityClassFromPriority(*(unsigned int *)(v27 + 392));
            _InterlockedExchangeAdd64(
              (volatile signed __int64 *)(v103 + 8LL * AllocationPriorityClassFromPriority + 1152),
              *(_QWORD *)(v27 + 16));
            _InterlockedIncrement((volatile signed __int32 *)(v103 + 4LL * AllocationPriorityClassFromPriority + 1192));
            *(_BYTE *)(v103 + 1212) = 1;
          }
          v118[0] = 1;
          ExReleasePushLockExclusiveEx(v14 + 496, 0LL);
          KeLeaveCriticalRegion();
          v16 = *(_QWORD *)a1;
          *(_QWORD *)(*(_QWORD *)a1 + 288LL) += *(_QWORD *)(v14 + 16);
LABEL_27:
          v9 = v121;
          break;
        }
        if ( !g_IsInternalReleaseOrDbg )
        {
          v26 = v115;
          v20 = v14 + 496;
          v10 = (int)v120;
          goto LABEL_126;
        }
        v93 = WdLogNewEntry5_WdTrace(v35, v34, v36, v37);
        *(_QWORD *)(v93 + 24) = v27;
        *(_QWORD *)(v93 + 32) = v19;
        WdLogNewEntry5_WdTrace(v95, v94, v96, v97);
        v10 = (int)v120;
        v20 = v14 + 496;
        v26 = v115;
      }
      else
      {
        if ( !g_IsInternalReleaseOrDbg )
          goto LABEL_126;
        WdLogNewEntry5_WdTrace(v22, v21, v23, v24);
      }
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v69, v68, v70, v71) + 24) = v11;
LABEL_126:
      v98 = *(VIDMM_CPU_HOST_APERTURE ***)(v14 + 200);
      if ( v98 )
      {
        if ( *(_DWORD *)(v14 + 488) != -1 )
        {
          VIDMM_CPU_HOST_APERTURE::ReleaseRange(v98[63], (struct _VIDMM_GLOBAL_ALLOC *)v14);
          v98 = *(VIDMM_CPU_HOST_APERTURE ***)(v14 + 200);
        }
        (*((void (__fastcall **)(VIDMM_CPU_HOST_APERTURE **, __int64, _QWORD, _QWORD))*v98 + 3))(
          v98,
          v14,
          *(_QWORD *)(v14 + 184),
          *(_QWORD *)(v14 + 16));
        *(_QWORD *)(v14 + 200) = 0LL;
        *(_QWORD *)(v14 + 184) = 0LL;
      }
      ExReleasePushLockExclusiveEx(v20, 0LL);
      KeLeaveCriticalRegion();
      VIDMM_GLOBAL::CancelAllReclaimedAllocationsInList(v99, (struct _LIST_ENTRY *)(a1 + 3736));
      VIDMM_GLOBAL::CancelAllReclaimedAllocationsInList(v100, (struct _LIST_ENTRY *)(a1 + 3752));
      WdLogSingleEntry2(3LL, v11, v10);
      if ( v10 || (*(_DWORD *)(v14 + 68) & 0x40) == 0 || v26 )
        goto LABEL_27;
      v101 = *(_QWORD *)(v14 + 16);
      v10 = 2;
      LODWORD(v120) = 2;
      VIDMM_GLOBAL::TrimMarkedForEvictionAllocations((VIDMM_GLOBAL *)a1, v101 + (v101 >> 2));
    }
  }
  if ( (*(_DWORD *)(v14 + 68) & 0x200000) != 0 )
  {
    LODWORD(v19) = -1071775466;
    *v9 = 0;
    if ( !g_IsInternalReleaseOrDbg )
      goto LABEL_155;
    v106 = (_QWORD *)WdLogNewEntry5_WdTrace(v16, v15, v17, v18);
    v106[5] = 18161LL;
LABEL_154:
    v106[4] = v14;
    v106[3] = v11;
    goto LABEL_155;
  }
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 24) + 2742LL) || *(_BYTE *)(*(_QWORD *)(a1 + 16) + 913LL) )
  {
    LODWORD(v19) = -1073741130;
    *v9 = 0;
    if ( !g_IsInternalReleaseOrDbg )
      goto LABEL_155;
    v106 = (_QWORD *)WdLogNewEntry5_WdTrace(v16, v15, v17, v18);
    v106[5] = 18169LL;
    goto LABEL_154;
  }
  if ( (int)v19 < 0 )
  {
    *v121 = 1;
    *v125 = v11;
    return (unsigned int)v19;
  }
  if ( !*((_BYTE *)v11 + 26) )
  {
    v39 = *(_DWORD *)(v14 + 72);
    if ( (v39 & 0x400) == 0 )
    {
      if ( v11[18] )
      {
        if ( (*(_BYTE *)(a1 + 40936) & 8) != 0 )
        {
          if ( (v39 & 0x80u) == 0 || (v107 = **(_DWORD **)(v14 + 528), (v107 & 8) != 0) || (v107 & 0x20000000) != 0 )
          {
            v108 = *v11;
            memset(&ApcState, 0, sizeof(ApcState));
            KeStackAttachProcess(*(PRKPROCESS *)v108[1], &ApcState);
            v109 = v11[18];
            v19 = (int)VidMmiEnsureVirtualAddressRangeValid(v109, *(_QWORD *)(v14 + 8));
            KeUnstackDetachProcess(&ApcState);
            if ( (int)v19 < 0 )
            {
              WdLogSingleEntry2(1LL, v109, v19);
              DxgkLogInternalTriageEvent(v110, 0x40000LL);
              *v121 = 0;
              goto LABEL_155;
            }
          }
        }
      }
      *((_BYTE *)v11 + 26) = 1;
    }
  }
  v40 = *(unsigned __int8 *)(a1 + 40936);
  if ( (v40 & 2) == 0
    || (LOBYTE(v40) = ((*(_DWORD *)(v14 + 68) & 0x100) != 0) & ((unsigned __int8)v40 >> 4), (v40 & 1) != 0)
    || (*(_DWORD *)(v14 + 72) & 0x400) != 0 )
  {
LABEL_38:
    if ( (*((_DWORD *)v11 + 7) & 3) != 2 )
    {
      v41 = v11[1];
      v42 = **v11;
      v43 = (VIDMM_PROCESS *)(*v11)[1];
      v44 = *(unsigned int **)(v42 + 120);
      if ( g_IsInternalReleaseOrDbg )
      {
        v112 = WdLogNewEntry5_WdTrace(v40, v15, v17, v18);
        *(_QWORD *)(v112 + 24) = v11;
        *(_QWORD *)(v112 + 32) = v41;
      }
      v45 = v11 + 7;
      v46 = v41[5] + 56LL * v44[5];
      ++*(_DWORD *)v46;
      *(_QWORD *)(v46 + 8) += *(_QWORD *)(v42 + 16);
      *(_QWORD *)(v46 + 48) = v41;
      v47 = *(__int64 **)(v46 + 40);
      if ( *v47 != v46 + 32 )
        goto LABEL_150;
      *v45 = v46 + 32;
      v11[8] = v47;
      *v47 = (__int64)v45;
      *(_QWORD *)(v46 + 40) = v45;
      VIDMM_PROCESS::AddCommitment(
        v43,
        (struct _VIDMM_DEVICE_COMMITMENT_INFO *)v46,
        *(_DWORD *)(*(_QWORD *)(*v41 + 24) + 240LL),
        (struct VIDMM_SEGMENT *)v44,
        *(_DWORD *)v46 == 1,
        (struct _VIDMM_GLOBAL_ALLOC *)v42);
      *((_DWORD *)v11 + 7) = *((_DWORD *)v11 + 7) & 0xFFFFFFFC | 2;
      ++*(_DWORD *)(v42 + 144);
      *((_DWORD *)v11 + 7) |= 0x10u;
      if ( bTracingEnabled && (byte_1C006E941 & 1) != 0 )
      {
        LODWORD(v114) = *(_DWORD *)(*(_QWORD *)(v14 + 120) + 16LL) + 1;
        McTemplateK0pqx_EtwWriteTransfer(
          (unsigned int)v114,
          &EventPageInAllocation,
          v48,
          v11,
          v114,
          *(_QWORD *)(v14 + 128));
      }
    }
    *(_BYTE *)(v14 + 83) = 1;
    *v121 = 0;
    return (unsigned int)v19;
  }
  v50 = *(_QWORD *)(v14 + 120);
  v51 = *(_DWORD *)(v50 + 80);
  if ( (v51 & 0x1001) != 0 )
  {
    v119 = 0;
    v126 = 0LL;
    FullMDL = VidMmGetFullMDL((struct _VIDMM_GLOBAL_ALLOC *)v14, 0LL);
    if ( !FullMDL )
    {
      WdLogSingleEntry1(1LL, v14);
      DxgkLogInternalTriageEvent(v111, 0x40000LL);
      LODWORD(v19) = -1073741801;
      goto LABEL_155;
    }
  }
  else
  {
    if ( (v51 & 0x1000) != 0 )
      v119 = 0;
    else
      v119 = *(_DWORD *)(v50 + 16) + 1;
    v126 = *(_QWORD *)(v14 + 128);
    FullMDL = 0LL;
  }
  v52 = *v11;
  v18 = *(_DWORD *)(v14 + 68) & 0x3F;
  v124 = -1LL;
  v123 = 0LL;
  v17 = v52[1];
  v40 = *(unsigned int *)(*(_QWORD *)(a1 + 24) + 240LL);
  v15 = *(_QWORD **)(*(_QWORD *)(v17 + 16) + 8 * v40);
  if ( v15 && *(_DWORD *)(*v15 + 40928LL) )
  {
    if ( (*(_DWORD *)(v17 + 96) & 2) != 0 )
      v53 = *(struct _KTHREAD ***)(*v15 + 8 * v18 + 40416);
    else
      v53 = (struct _KTHREAD **)v15[63];
  }
  else
  {
    v53 = 0LL;
  }
  v54 = v53 + 7;
  LOBYTE(v40) = 0;
  v120 = (CVirtualAddressAllocator *)v53;
  v116 = 0;
  if ( v53[8] != KeGetCurrentThread() )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v54, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v64 = *((_DWORD *)v54 + 6);
        if ( v64 != -1 && (byte_1C006E941 & 1) != 0 )
          McTemplateK0q_EtwWriteTransfer(v40, (__int64)&EventBlockThread, v17, v64);
      }
      ExAcquirePushLockExclusiveEx(v54, 0LL);
    }
    LOBYTE(v40) = 1;
    v53 = (struct _KTHREAD **)v120;
    v54[1] = KeGetCurrentThread();
    v116 = 1;
  }
  LOBYTE(v15) = 0;
  v55 = (struct _VIDMM_GLOBAL_ALLOC *)v11[16];
  v56 = 0;
  v117 = 0;
  v122 = v55;
  if ( v55 == (struct _VIDMM_GLOBAL_ALLOC *)(v11 + 16) )
  {
LABEL_77:
    if ( (_BYTE)v40 )
    {
      v54[1] = 0LL;
      ExReleasePushLockExclusiveEx(v54, 0LL);
      KeLeaveCriticalRegion();
      v15 = (_QWORD *)v117;
    }
    if ( (_BYTE)v15 && v56 )
    {
      v61 = v120;
      v62 = v123;
      v63 = v124;
      do
      {
        if ( (v56 & 1) != 0 )
          CVirtualAddressAllocator::FlushGpuVaTlb(v61, v8, v63, v62);
        ++v8;
        v56 >>= 1;
      }
      while ( v56 );
      v14 = v128;
      v11 = v129;
    }
    goto LABEL_38;
  }
  v57 = (struct _VIDMM_GLOBAL_ALLOC *)(v11 + 16);
  while ( 1 )
  {
    v58 = (_DWORD *)((char *)v55 - 24);
    if ( (*((_DWORD *)v55 + 10) & 0x400) != 0 )
      goto LABEL_75;
    LODWORD(v19) = CVirtualAddressAllocator::CommitVirtualAddressRange(
                     v53,
                     (char *)v55 - 24,
                     *(_DWORD *)(v14 + 68) & 0x3F,
                     v119,
                     *((_QWORD *)v58 + 9) + v126,
                     FullMDL,
                     0,
                     v125,
                     0LL);
    if ( (int)v19 < 0 )
      break;
    v59 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 1152LL);
    if ( v59 )
      v60 = (_DWORD *)(v59 + 144LL * ((v58[16] >> 4) & 0x3F));
    else
      v60 = 0LL;
    if ( (*v60 & 0x400) != 0 )
    {
      v15 = (_QWORD *)v117;
    }
    else
    {
      v56 |= 1 << ((v58[16] >> 4) & 0x3F);
      if ( v124 >= *((_QWORD *)v58 + 12) )
        v124 = *((_QWORD *)v58 + 12);
      if ( v123 <= *((_QWORD *)v58 + 13) )
        v123 = *((_QWORD *)v58 + 13);
      LOBYTE(v15) = 1;
      v117 = 1;
    }
    v57 = (struct _VIDMM_GLOBAL_ALLOC *)(v11 + 16);
LABEL_75:
    v55 = *(struct _VIDMM_GLOBAL_ALLOC **)v122;
    v122 = v55;
    if ( v55 == v57 )
    {
      v40 = v116;
      goto LABEL_77;
    }
    v53 = (struct _KTHREAD **)v120;
  }
  WdLogSingleEntry2(3LL, v11, 18270LL);
  if ( v116 )
  {
    v54[1] = 0LL;
    ExReleasePushLockExclusiveEx(v54, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( (_DWORD)v19 == -1073741267 )
    *v121 = 1;
LABEL_155:
  if ( v118[0] )
    VIDMM_SEGMENT::MarkResourcesForEviction(*(VIDMM_SEGMENT **)(v14 + 120), (struct _VIDMM_GLOBAL_ALLOC *)v14, 0LL, 0LL);
  return (unsigned int)v19;
}
