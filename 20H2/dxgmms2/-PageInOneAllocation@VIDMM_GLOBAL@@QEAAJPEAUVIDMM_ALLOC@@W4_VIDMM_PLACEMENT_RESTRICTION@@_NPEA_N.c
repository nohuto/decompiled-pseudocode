/*
 * XREFs of ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C0077E50
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0075620 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C007E17C (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0080AD8 (-CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0082B7C (-PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?PageInFaultedAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z @ 0x1C0082D68 (-PageInFaultedAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z.c)
 *     ?CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C008389C (-CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC.c)
 *     ?InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z @ 0x1C008A48C (-InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z.c)
 *     ?LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z @ 0x1C00B1F04 (-LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0011B20 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0012350 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGpuMmuCaps@ADAPTER_RENDER@@QEBAPEBUDXGADAPTER_GPUMMUCAPS@@I@Z @ 0x1C0012530 (-GetGpuMmuCaps@ADAPTER_RENDER@@QEBAPEBUDXGADAPTER_GPUMMUCAPS@@I@Z.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C0012554 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     __security_check_cookie @ 0x1C0017740 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00182E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqx_EtwWriteTransfer @ 0x1C0024A28 (McTemplateK0pqx_EtwWriteTransfer.c)
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0029360 (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C006E62C (-MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0077180 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?ReferenceAllocationForPreparation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C00783A8 (-ReferenceAllocationForPreparation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAE@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C007869C (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?AddCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00786E0 (-AddCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C007A8B4 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?FindResourcesForOneAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NI_K@Z @ 0x1C0084E7C (-FindResourcesForOneAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTIO.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0085A68 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?TrimResidentBytes@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x1C0085AD0 (-TrimResidentBytes@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z.c)
 *     ?VerifyGlobalResidentLimit@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x1C0085B28 (-VerifyGlobalResidentLimit@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z.c)
 *     ?EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0085B54 (-EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z @ 0x1C0085F74 (-EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z.c)
 *     ?CancelAllReclaimedAllocationsInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00AF138 (-CancelAllReclaimedAllocationsInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?TrimMarkedForEvictionAllocations@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C00B4FF8 (-TrimMarkedForEvictionAllocations@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?VidMmiEnsureVirtualAddressRangeValid@@YAJPEAX_K@Z @ 0x1C00BD2BC (-VidMmiEnsureVirtualAddressRangeValid@@YAJPEAX_K@Z.c)
 *     ?ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00C8B64 (-ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_GLOBAL::PageInOneAllocation(
        __int64 a1,
        __int64 **a2,
        int a3,
        unsigned __int8 a4,
        _BYTE *a5,
        __int64 ***a6,
        int a7,
        __int64 a8)
{
  unsigned int v8; // esi
  _BYTE *v9; // r12
  __int64 **v11; // rdi
  __int64 *v13; // rbx
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // r14
  __int64 v17; // r12
  __int64 v18; // rcx
  unsigned __int8 v19; // bp
  __int64 v20; // rcx
  __int64 v21; // rbp
  unsigned int *v22; // r14
  VIDMM_GLOBAL *v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  int v26; // ecx
  char v27; // al
  VIDMM_SEGMENT *v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 *v33; // rcx
  unsigned int v34; // r8d
  VIDMM_PROCESS *v35; // rcx
  struct _KTHREAD **VirtualAddressAllocator; // rax
  struct _MDL *v37; // r10
  CVirtualAddressAllocator *v38; // r11
  struct _KTHREAD **v39; // r13
  __int64 **v40; // rcx
  char v41; // al
  __int64 **v42; // r12
  unsigned int v43; // ebp
  __int64 v44; // rdx
  __int64 v45; // rcx
  char v46; // dl
  unsigned __int64 v47; // rbx
  unsigned __int64 v48; // rdi
  CVirtualAddressAllocator *v49; // r15
  __int64 v50; // r8
  __int64 *v52; // rcx
  _QWORD *v53; // rax
  __int64 *v54; // rdx
  __int64 v55; // rcx
  unsigned int v56; // r12d
  __int64 v57; // rax
  __int64 v58; // rcx
  VIDMM_CPU_HOST_APERTURE **v59; // rcx
  VIDMM_GLOBAL *v60; // rcx
  VIDMM_GLOBAL *v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rax
  _QWORD *v65; // rax
  __int64 *v66; // rax
  __int64 *v67; // rbp
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  void *v74; // [rsp+20h] [rbp-F8h]
  char v76; // [rsp+50h] [rbp-C8h]
  char v77; // [rsp+51h] [rbp-C7h]
  unsigned __int8 v78[2]; // [rsp+52h] [rbp-C6h] BYREF
  unsigned int v79; // [rsp+54h] [rbp-C4h]
  _BYTE *v80; // [rsp+58h] [rbp-C0h]
  struct _MDL *FullMDL; // [rsp+60h] [rbp-B8h]
  unsigned __int64 v82; // [rsp+68h] [rbp-B0h]
  unsigned __int64 v83; // [rsp+70h] [rbp-A8h]
  CVirtualAddressAllocator *v84; // [rsp+78h] [rbp-A0h]
  __int64 ***v85; // [rsp+80h] [rbp-98h]
  __int64 v86; // [rsp+88h] [rbp-90h]
  __int64 v87; // [rsp+98h] [rbp-80h]
  __int64 **v88; // [rsp+A0h] [rbp-78h]
  struct _KAPC_STATE ApcState; // [rsp+A8h] [rbp-70h] BYREF

  v8 = 0;
  v9 = a5;
  v85 = a6;
  v11 = a2;
  *a6 = 0LL;
  v88 = a2;
  v80 = a5;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1) + 24) = a2;
  if ( (*((_DWORD *)v11 + 7) & 3) == 1 )
  {
    v52 = v11[7];
    v53 = v11 + 7;
    if ( (__int64 **)v52[1] != v11 + 7 || (v54 = v11[8], (_QWORD *)*v54 != v53) )
      __fastfail(3u);
    *v54 = (__int64)v52;
    v52[1] = (__int64)v54;
    *((_DWORD *)v11 + 7) &= 0xFFFFFFFC;
    v11[8] = 0LL;
    *v53 = 0LL;
  }
  v13 = *v11;
  v78[0] = 0;
  v14 = *v13;
  v87 = v14;
  LODWORD(v16) = VIDMM_GLOBAL::ReferenceAllocationForPreparation((VIDMM_GLOBAL *)a1, (struct VIDMM_ALLOC *)v11, v78);
  if ( (int)v16 >= 0 )
    goto LABEL_18;
  v17 = v14 + 472;
  while ( 1 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v17, 0LL);
    if ( !*(_QWORD *)(v14 + 216) )
    {
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v18);
      VIDMM_GLOBAL::EvictTemporaryAllocations((VIDMM_GLOBAL *)a1, a3 != 0, *(_DWORD *)(v14 + 76) & 0x3F);
      if ( *v85 )
        VIDMM_GLOBAL::EvictTemporaryAllocations((VIDMM_GLOBAL *)a1, a3 != 0, *(_DWORD *)(***v85 + 76) & 0x3F);
      v19 = a4;
      LODWORD(v16) = VIDMM_GLOBAL::FindResourcesForOneAllocation(a1, v11, (unsigned int)a3, a4, a7, a8);
      if ( (int)v16 < 0 )
      {
        if ( !g_IsInternalReleaseOrDbg )
          goto LABEL_79;
        WdLogNewEntry5_WdTrace(v20);
        goto LABEL_76;
      }
    }
    v21 = **v11;
    v22 = *(unsigned int **)(v21 + 216);
    VIDMM_SEGMENT::TrimResidentBytes((VIDMM_SEGMENT *)v22, *(struct VIDMM_PARTITION_ADAPTER_INFO **)(v21 + 480));
    if ( !VIDMM_GLOBAL::VerifyGlobalResidentLimit(v23, *(struct VIDMM_PARTITION_ADAPTER_INFO **)(v21 + 480))
      && *(_DWORD *)(a1 + 3704) )
    {
      v56 = 0;
      do
        VIDMM_SEGMENT::TrimResidentBytes(
          *(VIDMM_SEGMENT **)(*(_QWORD *)(a1 + 3712) + 8LL * v56++),
          *(struct VIDMM_PARTITION_ADAPTER_INFO **)(v21 + 480));
      while ( v56 < *(_DWORD *)(a1 + 3704) );
      v17 = v14 + 472;
    }
    VIDMM_GLOBAL::EvictAllReclaimedAllocation((VIDMM_GLOBAL *)a1);
    if ( (*(_DWORD *)(360LL * v22[95] + *(_QWORD *)(*(_QWORD *)(a1 + 24) + 2584LL) + 16) & 4) != 0 )
      VIDMM_SEGMENT::ProcessPendingMoves((VIDMM_SEGMENT *)v22);
    v24 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v21 + 216) + 40LL))(*(_QWORD *)(v21 + 216), v21);
    v16 = v24;
    if ( v24 >= 0 )
      break;
    if ( !g_IsInternalReleaseOrDbg )
    {
      v19 = a4;
      goto LABEL_79;
    }
    v57 = WdLogNewEntry5_WdTrace(v25);
    *(_QWORD *)(v57 + 24) = v21;
    *(_QWORD *)(v57 + 32) = v16;
    WdLogNewEntry5_WdTrace(v58);
    v19 = a4;
LABEL_76:
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v55) + 24) = v11;
LABEL_79:
    v59 = *(VIDMM_CPU_HOST_APERTURE ***)(v14 + 216);
    if ( v59 )
    {
      if ( *(_DWORD *)(v14 + 464) != -1 )
      {
        VIDMM_CPU_HOST_APERTURE::ReleaseRange(v59[61], (struct _VIDMM_GLOBAL_ALLOC *)v14);
        v59 = *(VIDMM_CPU_HOST_APERTURE ***)(v14 + 216);
      }
      (*((void (__fastcall **)(VIDMM_CPU_HOST_APERTURE **, __int64, _QWORD, _QWORD))*v59 + 3))(
        v59,
        v14,
        *(_QWORD *)(v14 + 200),
        *(_QWORD *)(v14 + 16));
      *(_QWORD *)(v14 + 216) = 0LL;
      *(_QWORD *)(v14 + 200) = 0LL;
    }
    ExReleasePushLockExclusiveEx(v17, 0LL);
    KeLeaveCriticalRegion();
    VIDMM_GLOBAL::CancelAllReclaimedAllocationsInList(v60, (struct _LIST_ENTRY *)(a1 + 3736));
    VIDMM_GLOBAL::CancelAllReclaimedAllocationsInList(v61, (struct _LIST_ENTRY *)(a1 + 3752));
    v64 = WdLogNewEntry5_WdWarning(v63, v62);
    *(_QWORD *)(v64 + 32) = a3;
    *(_QWORD *)(v64 + 24) = v11;
    WdLogEvent5_WdWarning(v64);
    if ( a3 || (*(_DWORD *)(v14 + 76) & 0x40) == 0 || v19 )
      goto LABEL_17;
    a3 = 2;
    VIDMM_GLOBAL::TrimMarkedForEvictionAllocations(
      (VIDMM_GLOBAL *)a1,
      *(_QWORD *)(v14 + 16) + (*(_QWORD *)(v14 + 16) >> 2));
  }
  VIDMM_GLOBAL::FlushPagingBufferInternal((VIDMM_GLOBAL *)a1, *(_DWORD *)(v21 + 76) & 0x3F, 0, 0LL, 0LL, 0, 0);
  v78[0] = 1;
  LODWORD(v16) = 0;
  ExReleasePushLockExclusiveEx(v17, 0LL);
  KeLeaveCriticalRegion();
LABEL_17:
  v9 = v80;
LABEL_18:
  if ( (*(_DWORD *)(v14 + 76) & 0x100000) != 0 )
  {
    LODWORD(v16) = -1071775466;
    *v9 = 0;
    if ( !g_IsInternalReleaseOrDbg )
      goto LABEL_106;
    v65 = (_QWORD *)WdLogNewEntry5_WdTrace(v15);
    v65[5] = 17608LL;
LABEL_105:
    v65[4] = v14;
    v65[3] = v11;
    goto LABEL_106;
  }
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 24) + 2646LL) || *(_BYTE *)(*(_QWORD *)(a1 + 16) + 889LL) )
  {
    LODWORD(v16) = -1073741130;
    *v9 = 0;
    if ( !g_IsInternalReleaseOrDbg )
      goto LABEL_106;
    v65 = (_QWORD *)WdLogNewEntry5_WdTrace(v15);
    v65[5] = 17616LL;
    goto LABEL_105;
  }
  if ( (int)v16 < 0 )
  {
    *v80 = 1;
    *v85 = v11;
    return (unsigned int)v16;
  }
  if ( !*((_BYTE *)v11 + 26) )
  {
    v26 = *(_DWORD *)(v14 + 80);
    if ( (v26 & 0x400) == 0 )
    {
      if ( v11[18]
        && (*(_BYTE *)(a1 + 40936) & 8) != 0
        && ((v26 & 0x80u) == 0 || (**(_DWORD **)(v14 + 496) & 0x20000008) != 0) )
      {
        v66 = *v11;
        memset(&ApcState, 0, sizeof(ApcState));
        KeStackAttachProcess(*(PRKPROCESS *)v66[1], &ApcState);
        v67 = v11[18];
        v16 = (int)VidMmiEnsureVirtualAddressRangeValid(v67, *(_QWORD *)(v14 + 8));
        KeUnstackDetachProcess(&ApcState);
        if ( (int)v16 < 0 )
        {
          v71 = WdLogNewEntry5_WdAssertion(v69, v68, v70);
          *(_QWORD *)(v71 + 24) = v67;
          *(_QWORD *)(v71 + 32) = v16;
          WdLogEvent5_WdAssertion(v71);
          *v9 = 0;
          goto LABEL_106;
        }
      }
      *((_BYTE *)v11 + 26) = 1;
    }
  }
  v27 = *(_BYTE *)(a1 + 40936);
  if ( (v27 & 2) == 0
    || (v27 & 0x10) != 0 && (*(_DWORD *)(v14 + 76) & 0x100) != 0
    || (*(_DWORD *)(v14 + 80) & 0x400) != 0 )
  {
    goto LABEL_52;
  }
  v28 = *(VIDMM_SEGMENT **)(v14 + 128);
  if ( (*((_DWORD *)v28 + 20) & 0x1001) != 0 )
  {
    v79 = 0;
    v86 = 0LL;
    FullMDL = VidMmGetFullMDL((struct _VIDMM_GLOBAL_ALLOC *)v14, 0LL);
    if ( !FullMDL )
    {
      v72 = WdLogNewEntry5_WdAssertion(v30, v29, v31);
      *(_QWORD *)(v72 + 24) = v14;
      WdLogEvent5_WdAssertion(v72);
      LODWORD(v16) = -1073741801;
      goto LABEL_106;
    }
  }
  else
  {
    v79 = VIDMM_SEGMENT::DriverId(v28);
    v86 = *(_QWORD *)(v14 + 136);
    FullMDL = 0LL;
  }
  v32 = *(_QWORD *)(a1 + 24);
  v33 = *v11;
  v34 = *(_DWORD *)(v14 + 76) & 0x3F;
  v83 = -1LL;
  LODWORD(v32) = *(_DWORD *)(v32 + 232);
  v35 = (VIDMM_PROCESS *)v33[1];
  v82 = 0LL;
  VirtualAddressAllocator = (struct _KTHREAD **)VIDMM_PROCESS::GetVirtualAddressAllocator(v35, v32, v34);
  v38 = (CVirtualAddressAllocator *)VirtualAddressAllocator;
  v84 = (CVirtualAddressAllocator *)VirtualAddressAllocator;
  v39 = VirtualAddressAllocator + 7;
  if ( VirtualAddressAllocator[8] == KeGetCurrentThread() )
  {
    v77 = 1;
  }
  else
  {
    v77 = 0;
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(VirtualAddressAllocator + 7));
    v37 = FullMDL;
    v38 = v84;
  }
  v40 = v11 + 16;
  v41 = 0;
  v42 = (__int64 **)v11[16];
  v43 = 0;
  v76 = 0;
  if ( v42 == v11 + 16 )
  {
LABEL_43:
    if ( !v77 )
    {
      v39[1] = 0LL;
      ExReleasePushLockExclusiveEx(v39, 0LL);
      KeLeaveCriticalRegion();
      v41 = v76;
    }
    if ( v41 && v43 )
    {
      v47 = v82;
      v48 = v83;
      v49 = v84;
      do
      {
        if ( (v43 & 1) != 0 )
          CVirtualAddressAllocator::FlushGpuVaTlb(v49, v8, v48, v47);
        ++v8;
        v43 >>= 1;
      }
      while ( v43 );
      v14 = v87;
      v11 = v88;
    }
LABEL_52:
    if ( (*((_DWORD *)v11 + 7) & 3) != 2 )
    {
      VIDMM_DEVICE::AddCommitment((VIDMM_DEVICE *)v11[1], (struct VIDMM_ALLOC *)v11);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          LODWORD(v74) = *(_DWORD *)(*(_QWORD *)(v14 + 128) + 16LL) + 1;
          McTemplateK0pqx_EtwWriteTransfer(
            (unsigned int)v74,
            &EventPageInAllocation,
            v50,
            v11,
            v74,
            *(_QWORD *)(v14 + 136));
        }
      }
    }
    *(_BYTE *)(v14 + 90) = 1;
    *v80 = 0;
    return (unsigned int)v16;
  }
  while ( 2 )
  {
    if ( ((_DWORD)v42[5] & 0x400) != 0 )
      goto LABEL_60;
    LODWORD(v16) = CVirtualAddressAllocator::CommitVirtualAddressRange(
                     v38,
                     v42 - 3,
                     *(_DWORD *)(v14 + 76) & 0x3F,
                     v79,
                     (char *)v42[6] + v86,
                     v37,
                     0,
                     v85,
                     0LL);
    if ( (int)v16 >= 0 )
    {
      if ( (*(_DWORD *)ADAPTER_RENDER::GetGpuMmuCaps(*(ADAPTER_RENDER **)(a1 + 16), (*((_DWORD *)v42 + 10) >> 4) & 0x3F) & 0x400) == 0 )
      {
        v43 |= 1 << v46;
        if ( v83 >= (unsigned __int64)v42[9] )
          v83 = (unsigned __int64)v42[9];
        if ( v82 <= (unsigned __int64)v42[10] )
          v82 = (unsigned __int64)v42[10];
        v41 = 1;
        v40 = v11 + 16;
        v76 = 1;
        goto LABEL_42;
      }
      v40 = v11 + 16;
LABEL_60:
      v41 = v76;
LABEL_42:
      v42 = (__int64 **)*v42;
      if ( v42 == v40 )
        goto LABEL_43;
      v37 = FullMDL;
      v38 = v84;
      continue;
    }
    break;
  }
  v73 = WdLogNewEntry5_WdWarning(v45, v44);
  *(_QWORD *)(v73 + 24) = v11;
  *(_QWORD *)(v73 + 32) = 17717LL;
  WdLogEvent5_WdWarning(v73);
  if ( !v77 )
  {
    v39[1] = 0LL;
    ExReleasePushLockExclusiveEx(v39, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( (_DWORD)v16 == -1073741267 )
    *v80 = 1;
LABEL_106:
  if ( v78[0] )
    VIDMM_SEGMENT::MarkResourcesForEviction(
      *(VIDMM_LINEAR_POOL ***)(v14 + 128),
      (struct _VIDMM_POOL_BLOCK **)v14,
      0LL,
      0LL);
  return (unsigned int)v16;
}
