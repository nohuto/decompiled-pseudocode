/*
 * XREFs of ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0074C54
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C008B710 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00BAD88 (-SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0001194 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x1C0015C10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016B50 (_guard_dispatch_icall_nop.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0024038 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?OfferRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0029580 (-OfferRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C006179C (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00633D4 (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0067E30 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C006FFC0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C007080C (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00746A0 (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 *     ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0074A7C (-FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     VidSchSignalPagingFences @ 0x1C0075084 (VidSchSignalPagingFences.c)
 *     ?EndPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z @ 0x1C007510C (-EndPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z.c)
 *     ?StartPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z @ 0x1C00751A0 (-StartPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z.c)
 *     ?UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z @ 0x1C0075568 (-UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00760E8 (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C007EA50 (-EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C0082F5C (-IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C008328C (-ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0083620 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0083668 (-PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C0084B98 (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 *     ?EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z @ 0x1C0086A0C (-EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z.c)
 *     ?FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z @ 0x1C0087314 (-FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z.c)
 *     ?EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C008A6E8 (-EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C00959E0 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00AF57C (-CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?DisableIoMmuIsolation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00B01D8 (-DisableIoMmuIsolation@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?DoDeferredUnlock@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00B0278 (-DoDeferredUnlock@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?EnableIoMmuIsolation@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00B02E8 (-EnableIoMmuIsolation@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?MoveResourcesSysCommandHelper@VIDMM_GLOBAL@@QEAAJIW4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@11W4VIDMM_DEFRAGMENT_DIRECTION@@@Z @ 0x1C00B2DB4 (-MoveResourcesSysCommandHelper@VIDMM_GLOBAL@@QEAAJIW4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_.c)
 *     ?PurgePageTables@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z @ 0x1C00B39D0 (-PurgePageTables@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z.c)
 *     ?RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1C00B3F00 (-RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 *     ?ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00B45A8 (-ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?TrimOfferCommitmentInternal@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS@@_KPEA_K@Z @ 0x1C00B53C4 (-TrimOfferCommitmentInternal@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3.c)
 *     ?UnmapAllPagingBuffers@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00B57C8 (-UnmapAllPagingBuffers@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x1C00B7ED4 (-VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z.c)
 *     ?PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEA_K@Z @ 0x1C00C6760 (-PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEA_K@Z.c)
 *     ?ValidateFrameBufferRotation@VIDMM_MEMORY_SEGMENT@@QEAAXXZ @ 0x1C00C7184 (-ValidateFrameBufferRotation@VIDMM_MEMORY_SEGMENT@@QEAAXXZ.c)
 *     ?FreeVPRReserve@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00C82A8 (-FreeVPRReserve@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00C855C (-InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?ProcessUnblockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z @ 0x1C00C95B4 (-ProcessUnblockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANG.c)
 *     ?PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@PEA_K@Z @ 0x1C00C962C (-PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@PEA_K@Z.c)
 *     ?SuspendCpuAccess@VIDMM_SEGMENT@@QEAAJXZ @ 0x1C00CA82C (-SuspendCpuAccess@VIDMM_SEGMENT@@QEAAJXZ.c)
 *     ?RunApertureCoherencyTest@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00CB3CC (-RunApertureCoherencyTest@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?ValidateApertureUnmapToDummyPage@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00CBB14 (-ValidateApertureUnmapToDummyPage@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX_K1@Z @ 0x1C00D02C4 (-MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX_K1@Z.c)
 *     VidSchiResumeFlipQueues @ 0x1C00D18E0 (VidSchiResumeFlipQueues.c)
 *     VidSchWaitForPagingFence @ 0x1C00D4540 (VidSchWaitForPagingFence.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ProcessSystemCommand(
        unsigned __int64 this,
        struct _VIDMM_SYSTEM_COMMAND *a2,
        __int64 a3,
        unsigned __int64 a4,
        struct _VIDSCH_SYNC_OBJECT *a5)
{
  __int64 v5; // r14
  __int64 v7; // rbx
  VIDMM_GLOBAL *v8; // rdi
  int v9; // r15d
  int inited; // r13d
  __int64 v11; // rdx
  unsigned int v12; // ebx
  __int64 v13; // rbx
  struct _KTHREAD **VirtualAddressAllocator; // rax
  struct VIDMM_ALLOC *v15; // r10
  int *v16; // rax
  unsigned int v17; // ebx
  struct _KEVENT *v18; // r12
  unsigned int v19; // esi
  __int64 v20; // r14
  __int64 v21; // rcx
  _QWORD **v22; // r14
  unsigned int v23; // ecx
  int v25; // eax
  VIDMM_DEVICE *v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // rax
  CVirtualAddressAllocator *v30; // rbx
  PRKPROCESS *v31; // rcx
  __int64 **v32; // rdx
  _QWORD *v33; // rax
  unsigned int v34; // r14d
  unsigned int v35; // ebx
  __int64 v36; // r11
  int v37; // r10d
  char v38; // cl
  char v39; // r8
  __int64 v40; // r8
  _QWORD *v41; // rdx
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rdx
  unsigned int j; // r14d
  __int64 k; // rbx
  VIDMM_MEMORY_SEGMENT *v47; // rcx
  unsigned int v48; // ebx
  __int64 v49; // rcx
  unsigned __int64 v50; // rcx
  unsigned int v51; // eax
  __int64 v52; // rdx
  char v53; // r8
  struct VIDMM_DEVICE *v54; // rdx
  PRKPROCESS *v55; // rcx
  VIDMM_GLOBAL *v56; // rcx
  int updated; // eax
  struct _KAPC_STATE *v58; // rcx
  PRKPROCESS *v59; // rcx
  VIDMM_GLOBAL *v60; // rcx
  int v61; // ebx
  __int64 v62; // r14
  VIDMM_SEGMENT *v63; // rcx
  int v64; // eax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // rax
  _QWORD *v69; // rax
  struct _VIDMM_GLOBAL_ALLOC *v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rcx
  unsigned int i; // ebx
  __int64 v74; // rdx
  _QWORD *v75; // rsi
  _QWORD *v76; // rax
  _QWORD *v77; // r15
  _QWORD *v78; // rcx
  __int64 v79; // rbx
  _QWORD *v80; // rax
  int v81; // [rsp+30h] [rbp-D0h]
  bool v82; // [rsp+50h] [rbp-B0h] BYREF
  char v83; // [rsp+51h] [rbp-AFh]
  bool v84; // [rsp+52h] [rbp-AEh] BYREF
  struct _VIDSCH_SYNC_OBJECT *v85; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v86; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v87; // [rsp+68h] [rbp-98h] BYREF
  __int64 v88; // [rsp+70h] [rbp-90h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v89; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v90; // [rsp+80h] [rbp-80h] BYREF
  __int64 **v91; // [rsp+88h] [rbp-78h] BYREF
  struct VIDMM_ALLOC *v92; // [rsp+90h] [rbp-70h] BYREF
  struct VIDMM_ALLOC *v93; // [rsp+98h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+A0h] [rbp-60h] BYREF
  struct _KAPC_STATE v95; // [rsp+D0h] [rbp-30h] BYREF
  struct _KAPC_STATE v96; // [rsp+100h] [rbp+0h] BYREF

  v5 = *(int *)(this + 8);
  v7 = *(int *)a2;
  v8 = (VIDMM_GLOBAL *)this;
  v83 = a3;
  v9 = 0;
  v90 = a4;
  inited = 0;
  v89 = a5;
  LODWORD(v85) = 0;
  if ( (_DWORD)v5 )
  {
    v33 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
    v33[3] = 270LL;
    v33[4] = 64LL;
    v33[5] = v8;
    v33[6] = v5;
    v33[7] = v7;
    WdLogEvent5_WdCriticalError(v33);
  }
  *((_DWORD *)v8 + 12) = -1;
  ++*((_QWORD *)v8 + 576);
  v11 = *((unsigned int *)v8 + 1750);
  *((_DWORD *)v8 + 2) = v7;
  v12 = 0;
  *((_QWORD *)v8 + 878) = 0LL;
  for ( *((_QWORD *)v8 + 879) = 0LL; v12 < (unsigned int)v11; ++v12 )
  {
    VIDMM_GLOBAL::StartPreparationOnPhysicalAdapter(v8, v12);
    v11 = *((unsigned int *)v8 + 1750);
  }
  v13 = *(int *)a2;
  if ( (int)v13 > 205 )
  {
    if ( (_DWORD)v13 == 216 )
    {
      LOBYTE(v11) = *((_BYTE *)a2 + 48);
      VIDMM_SEGMENT::ProcessUnblockMemoryRanges(*((_QWORD *)a2 + 5), v11, a3, (char *)a2 + 56);
      goto LABEL_14;
    }
    goto LABEL_148;
  }
  if ( (_DWORD)v13 == 205 )
  {
    LOBYTE(a3) = 1;
    VIDMM_GLOBAL::EvictOneAllocation((struct VIDMM_ALLOC **)v8, *((struct VIDMM_ALLOC **)a2 + 2), a3);
    _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)a2 + 2) + 164LL));
    goto LABEL_14;
  }
  if ( (int)v13 > 117 )
  {
    if ( (int)v13 > 126 )
    {
      switch ( (_DWORD)v13 )
      {
        case 0x7F:
          for ( i = 0; i < *((_DWORD *)v8 + 926); ++i )
            VIDMM_SEGMENT::InvalidateAllVirtualAddress(*(VIDMM_SEGMENT **)(*((_QWORD *)v8 + 464) + 8LL * i));
          goto LABEL_14;
        case 0x80:
          v72 = *((_QWORD *)a2 + 5);
          if ( *((_DWORD *)a2 + 12) )
            VIDMM_SEGMENT::FreeVPRReserve((VIDMM_SEGMENT *)v72);
          else
            VIDMM_LINEAR_POOL::MarkBlockAsAllocatedScrubPending(
              *(VIDMM_LINEAR_POOL **)(v72 + 152),
              *(void **)(v72 + 456),
              *(_QWORD *)(v72 + 424) - *(_QWORD *)(v72 + 464),
              *(_QWORD *)(v72 + 424));
          goto LABEL_14;
        case 0x81:
          v70 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 5);
          v71 = *((_QWORD *)v70 + 16);
          if ( v71 && *((_QWORD *)v70 + 55) )
            VIDMM_CPU_HOST_APERTURE::OfferRange(*(VIDMM_CPU_HOST_APERTURE **)(v71 + 488), v70);
          goto LABEL_14;
      }
      if ( (_DWORD)v13 != 130 )
      {
        this = (unsigned int)(v13 - 131);
        if ( (_DWORD)v13 == 131 )
        {
          VIDMM_GLOBAL::DisableIoMmuIsolation(v8);
          goto LABEL_14;
        }
        if ( (_DWORD)v13 == 132 )
        {
          wil_details_FeatureReporting_ReportUsageToService(
            (__int64)&Feature_VidMMVerifyIntegrity__private_reporting,
            0x148F1C8u,
            0LL,
            0LL,
            (const struct FEATURE_LOGGED_TRAITS *)&Feature_VidMMVerifyIntegrity_logged_traits,
            0,
            v81);
          v13 = *(int *)a2;
        }
        goto LABEL_148;
      }
      v25 = VIDMM_GLOBAL::EnableIoMmuIsolation(v8);
    }
    else
    {
      if ( (_DWORD)v13 == 126 )
      {
        VIDMM_GLOBAL::MoveResourcesSysCommandHelper(
          v8,
          *((unsigned int *)a2 + 1),
          *((unsigned int *)a2 + 10),
          *((unsigned int *)a2 + 11));
        goto LABEL_14;
      }
      if ( (_DWORD)v13 == 118 )
      {
        inited = VIDMM_GLOBAL::InitPagingProcessVaSpace(v8, *((_DWORD *)a2 + 1), 0);
        if ( inited < 0 )
        {
          v68 = WdLogNewEntry5_WdAssertion(v66, v65, v67);
          *(_QWORD *)(v68 + 24) = 10106LL;
          WdLogEvent5_WdAssertion(v68);
        }
        goto LABEL_14;
      }
      if ( (_DWORD)v13 != 120 )
      {
        if ( (_DWORD)v13 == 121 )
        {
          VirtualAddressAllocator = (struct _KTHREAD **)VIDMM_PROCESS::GetVirtualAddressAllocator(
                                                          *(VIDMM_PROCESS **)(**((_QWORD **)a2 + 2) + 8LL),
                                                          *(_DWORD *)(*((_QWORD *)v8 + 3) + 232LL),
                                                          *(_DWORD *)(***((_QWORD ***)a2 + 2) + 76LL) & 0x3F);
          CVirtualAddressAllocator::FreeAllocMappedVaRangeList(VirtualAddressAllocator, v15);
          goto LABEL_14;
        }
        if ( (_DWORD)v13 == 122 )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)a2 + 5) + 24LL))(
            *((_QWORD *)a2 + 5),
            0LL,
            *((_QWORD *)a2 + 6),
            *((_QWORD *)a2 + 7));
          goto LABEL_14;
        }
        this = (unsigned int)(v13 - 123);
        if ( (_DWORD)v13 == 123 )
        {
          v26 = (VIDMM_DEVICE *)*((_QWORD *)a2 + 5);
          if ( *((_BYTE *)a2 + 48) )
          {
            VIDMM_DEVICE::IndefinitelySuspend(v26, *((_BYTE *)a2 + 49));
            VIDMM_DEVICE::FaultAllAllocations(v26);
          }
          else
          {
            VIDMM_DEVICE::EnsureSchedulable(v26, 0);
          }
          goto LABEL_14;
        }
        if ( (_DWORD)v13 == 124 )
        {
          VIDMM_GLOBAL::TrimOfferCommitmentInternal(
            v8,
            *((struct VIDMM_PROCESS **)a2 + 5),
            *((struct DXGDECOMMITITERATOR **)a2 + 6),
            *(union _D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS *)((char *)a2 + 56),
            *((_QWORD *)a2 + 8),
            *((unsigned __int64 **)a2 + 9));
          goto LABEL_14;
        }
        goto LABEL_148;
      }
      v25 = VIDMM_GLOBAL::FreeGpuVirtualAddressSystemCommand(
              v8,
              *((struct CVirtualAddressAllocator **)a2 + 5),
              *((_QWORD *)a2 + 6),
              a4,
              *((_BYTE *)a2 + 64));
    }
    goto LABEL_30;
  }
  if ( (_DWORD)v13 == 117 )
  {
    v59 = (PRKPROCESS *)*((_QWORD *)v8 + 5048);
    memset(&v96, 0, sizeof(v96));
    KeStackAttachProcess(*v59, &v96);
    updated = VIDMM_GLOBAL::VidMmUpdateContextAllocationCb(
                v8,
                *((const struct _DXGKARGCB_UPDATECONTEXTALLOCATION **)a2 + 5),
                1u);
    v58 = &v96;
    goto LABEL_123;
  }
  if ( (int)v13 > 108 )
  {
    if ( (_DWORD)v13 == 110 )
    {
      v61 = 0;
      if ( *((int *)v8 + 926) > 0 )
      {
        v62 = 0LL;
        do
        {
          v63 = *(VIDMM_SEGMENT **)(v62 + *((_QWORD *)v8 + 464));
          v64 = *((_DWORD *)v63 + 20);
          if ( (v64 & 0x1001) == 0 && (v64 & 4) != 0 )
          {
            inited = VIDMM_SEGMENT::SuspendCpuAccess(v63);
            if ( inited < 0 )
              break;
          }
          ++v61;
          v62 += 8LL;
        }
        while ( v61 < *((_DWORD *)v8 + 926) );
      }
      goto LABEL_14;
    }
    v27 = (unsigned int)(v13 - 112);
    if ( (_DWORD)v13 == 112 )
    {
      v28 = *((_QWORD *)a2 + 5);
      if ( *(_QWORD *)(v28 + 128) )
      {
        VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(v8, 0xFFFFFFFF);
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, _BYTE, _QWORD))(**(_QWORD **)(v28 + 128) + 48LL))(
          *(_QWORD *)(v28 + 128),
          v28,
          0LL,
          0LL,
          0,
          0LL);
      }
      if ( *(_QWORD *)(v28 + 256) )
      {
        if ( g_IsInternalReleaseOrDbg )
          WdLogNewEntry5_WdTrace(v27);
        VIDMM_GLOBAL::FlushPagingBufferInternal(v8, *(_DWORD *)(v28 + 76) & 0x3F, 0, 0LL, 0LL, 0, 0);
        VIDMM_GLOBAL::EvictTemporaryAllocation(v60, (struct _VIDMM_GLOBAL_ALLOC *)v28);
        VIDMM_GLOBAL::FlushPagingBufferInternal(v8, *(_DWORD *)(v28 + 76) & 0x3F, 0, 0LL, 0LL, 0, 0);
      }
      goto LABEL_14;
    }
    if ( (_DWORD)v13 == 113 )
    {
      v93 = 0LL;
      v25 = VIDMM_GLOBAL::CommitVirtualAddressRangeSystemCommand(
              0LL,
              (struct _VIDMM_SYSTEM_COMMAND *)((char *)a2 + 40),
              &v93);
      goto LABEL_30;
    }
    if ( (_DWORD)v13 != 114 )
    {
      this = (unsigned int)(v13 - 115);
      if ( (_DWORD)v13 == 115 )
      {
        v29 = *((_QWORD *)a2 + 6);
        v30 = *(CVirtualAddressAllocator **)(v29 + 504);
        if ( v30 )
        {
          if ( *((_QWORD *)a2 + 5) )
          {
            v31 = (PRKPROCESS *)*((_QWORD *)v8 + 5048);
            memset(&ApcState, 0, sizeof(ApcState));
            KeStackAttachProcess(*v31, &ApcState);
            CVirtualAddressAllocator::DestroyVaAllocator(v30);
            KeUnstackDetachProcess(&ApcState);
          }
          else
          {
            CVirtualAddressAllocator::DestroyVaAllocator(*(CVirtualAddressAllocator **)(v29 + 504));
          }
          *(_QWORD *)(*((_QWORD *)a2 + 6) + 504LL) = 0LL;
        }
        goto LABEL_14;
      }
      if ( (_DWORD)v13 != 116 )
      {
LABEL_148:
        v69 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, v11);
        v69[3] = 270LL;
        v69[4] = 23LL;
        v69[5] = -1073741811LL;
        v69[6] = v13;
        v69[7] = 0LL;
        WdLogEvent5_WdCriticalError(v69);
        goto LABEL_14;
      }
      v54 = (struct VIDMM_DEVICE *)*((_QWORD *)a2 + 3);
      v84 = 0;
      v92 = 0LL;
      v25 = VIDMM_GLOBAL::PageInDeviceInternal(v8, v54, 0, &v84, &v92);
LABEL_30:
      inited = v25;
      goto LABEL_14;
    }
    v55 = (PRKPROCESS *)*((_QWORD *)v8 + 5048);
    memset(&v95, 0, sizeof(v95));
    KeStackAttachProcess(*v55, &v95);
    updated = VIDMM_GLOBAL::UncommitVirtualAddressRangeSystemCommand(v56, a2);
    v58 = &v95;
LABEL_123:
    inited = updated;
    KeUnstackDetachProcess(v58);
    goto LABEL_14;
  }
  if ( (_DWORD)v13 == 108 )
  {
    v25 = VIDMM_GLOBAL::ValidateApertureUnmapToDummyPage(v8);
    goto LABEL_30;
  }
  if ( (_DWORD)v13 == 101 )
  {
    v48 = 0;
    if ( *((_DWORD *)v8 + 926) )
    {
      do
      {
        v49 = *(_QWORD *)(*((_QWORD *)v8 + 464) + 8LL * v48);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 152LL))(v49);
        ++v48;
      }
      while ( v48 < *((_DWORD *)v8 + 926) );
      LODWORD(v11) = *((_DWORD *)v8 + 1750);
    }
    v50 = 0LL;
    v51 = 0;
    if ( (_DWORD)v11 )
    {
      do
      {
        v52 = *((_QWORD *)v8 + 5027) + 1584LL * v51;
        v53 = *(_BYTE *)(v52 + 436);
        if ( (v53 & 0x10) != 0 )
        {
          v50 |= 1LL << v51;
          *(_BYTE *)(v52 + 436) = v53 & 0xEF;
        }
        ++v51;
      }
      while ( v51 < *((_DWORD *)v8 + 1750) );
    }
    VIDMM_GLOBAL::RecommitGpuVirtualAddresses(v8, v50);
    goto LABEL_14;
  }
  if ( (_DWORD)v13 != 102 )
  {
    switch ( (_DWORD)v13 )
    {
      case 'g':
        VIDMM_GLOBAL::CleanupPrimaryAllocation(0LL, *((struct _VIDMM_GLOBAL_ALLOC **)a2 + 5));
        goto LABEL_14;
      case 'h':
        v32 = (__int64 **)*((_QWORD *)a2 + 2);
        v82 = 0;
        v91 = 0LL;
        v25 = VIDMM_GLOBAL::PageInOneAllocation((__int64)v8, v32, 4, 0, &v82, &v91, 0, -1LL);
        break;
      case 'i':
        VIDMM_GLOBAL::EvictOneAllocation((struct VIDMM_ALLOC **)v8, *((struct VIDMM_ALLOC **)a2 + 2), 0LL);
        goto LABEL_14;
      default:
        this = (unsigned int)(v13 - 106);
        if ( (_DWORD)v13 == 106 )
        {
          VIDMM_GLOBAL::ReportVidMmStateWorker(v8);
          goto LABEL_14;
        }
        if ( (_DWORD)v13 != 107 )
          goto LABEL_148;
        v25 = VIDMM_GLOBAL::RunApertureCoherencyTest(v8);
        break;
    }
    goto LABEL_30;
  }
  v34 = 0;
  v35 = *((_DWORD *)a2 + 10);
  if ( !*((_DWORD *)v8 + 926) )
    goto LABEL_99;
  v82 = (v35 & 2) != 0;
  do
  {
    v36 = *(_QWORD *)(*((_QWORD *)v8 + 464) + 8LL * v34);
    v37 = *(_DWORD *)(v36 + 80);
    if ( (v37 & 0x1001) != 0
      || *((_DWORD *)v8 + 10044) == -1
      || (v35 & 0x40) != 0 && *(_QWORD *)(v36 + 232) > (unsigned __int64)qword_1C00514A8 )
    {
      v38 = 1;
      if ( (v37 & 0x1001) != 0 )
        goto LABEL_75;
    }
    else
    {
      v38 = 0;
    }
    if ( *((_DWORD *)v8 + 10044) != -1 && *(_QWORD *)(v36 + 232) <= (unsigned __int64)qword_1C00514A8 )
    {
      v39 = 0;
      goto LABEL_76;
    }
LABEL_75:
    v39 = 1;
LABEL_76:
    if ( ((v35 & 2) == 0 || (v37 & 0x80u) == 0 || !v38)
      && ((v37 & 0x100) == 0 || (v35 & 4) == 0)
      && ((v37 & 0x1001) != 0 || (v35 & 0x10) == 0) )
    {
      if ( (v35 & 0x20) != 0 && (v37 & 0x80u) != 0 && v39 )
      {
        if ( (v37 & 0x1001) == 0 )
        {
          v88 = 0LL;
          VIDMM_MEMORY_SEGMENT::PurgeCpuVisibleAllocations(v36, v35, &v88);
          **((_QWORD **)a2 + 7) += v88;
        }
      }
      else
      {
        v40 = *((_QWORD *)a2 + 6);
        v87 = 0LL;
        VIDMM_SEGMENT::PurgeContent(v36, v35, v40, &v87);
        v41 = (_QWORD *)*((_QWORD *)a2 + 7);
        if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 464) + 8LL * v34) + 80LL) & 0x1001) != 0 )
          v41[1] += v87;
        else
          *v41 += v87;
        if ( (v35 & 8) == 0 )
        {
          v42 = VIDMM_SEGMENT::DriverId(*(VIDMM_SEGMENT **)(*((_QWORD *)v8 + 464) + 8LL * v34));
          if ( v42 == *(_DWORD *)(v43 + 56) || v42 == *(_DWORD *)(v43 + 40) )
            *(_BYTE *)(v43 + 436) |= 0x80u;
          if ( v42 == *(_DWORD *)(v43 + 64) || v42 == *(_DWORD *)(v43 + 48) )
            *(_BYTE *)(v43 + 437) |= 1u;
        }
        v44 = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v8 + 464) + 8LL * v34) + 368LL);
        if ( (_DWORD)v44 != -1 )
          (*((void (__fastcall **)(_QWORD, __int64, _QWORD))v8 + 5017))(*((_QWORD *)v8 + 5018), v44, 0LL);
      }
    }
    ++v34;
  }
  while ( v34 < *((_DWORD *)v8 + 926) );
  inited = (int)v85;
  v9 = (int)v85;
LABEL_99:
  for ( j = 0; j < *((_DWORD *)v8 + 1750); ++j )
    VIDMM_GLOBAL::EvictTemporaryAllocations(v8, 1u, j);
  if ( (v35 & 8) == 0 )
  {
    VIDMM_GLOBAL::PurgePageTables(v8, v35);
    v9 = 1;
    VIDMM_GLOBAL::DoDeferredUnlock(v8);
  }
  if ( (v35 & 0x20) != 0 )
  {
    for ( k = 0LL; (unsigned int)k < *((_DWORD *)v8 + 926); k = (unsigned int)(k + 1) )
    {
      v47 = *(VIDMM_MEMORY_SEGMENT **)(*((_QWORD *)v8 + 464) + 8 * k);
      if ( (*((_DWORD *)v47 + 20) & 0x1001) == 0 )
        VIDMM_MEMORY_SEGMENT::ValidateFrameBufferRotation(v47);
    }
  }
LABEL_14:
  v16 = (int *)*((_QWORD *)a2 + 4);
  v17 = 0;
  if ( v16 )
    *v16 = inited;
  if ( v9 )
  {
    VIDMM_GLOBAL::EndPreparation(v8, 0xFFFFFFFF, 0LL, 0, 0LL, 0LL);
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(v8, 0xFFFFFFFF);
    VIDMM_GLOBAL::UnmapAllPagingBuffers(v8);
    if ( v83 )
      VidSchSignalPagingFences(*(_QWORD *)(*((_QWORD *)v8 + 2) + 624LL), &v89, &v90);
    else
      KeSetEvent(*((PRKEVENT *)a2 + 1), 0, 0);
  }
  else
  {
    v18 = (struct _KEVENT *)*((_QWORD *)a2 + 1);
    v85 = v89;
    v86 = v90;
    *((_QWORD *)v8 + 466) = (char *)v8 + 3720;
    *((_QWORD *)v8 + 465) = (char *)v8 + 3720;
    if ( *((_DWORD *)v8 + 1750) )
    {
      do
      {
        v19 = 0;
        v20 = 1584LL * v17;
        if ( *(_DWORD *)(v20 + *((_QWORD *)v8 + 5027) + 24) )
        {
          do
          {
            v21 = *(_QWORD *)(*((_QWORD *)v8 + 464) + 8LL * (v19 + *(_DWORD *)(v20 + *((_QWORD *)v8 + 5027) + 20)));
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 160LL))(v21);
            ++v19;
          }
          while ( v19 < *(_DWORD *)(v20 + *((_QWORD *)v8 + 5027) + 24) );
        }
        VIDMM_GLOBAL::EndPreparationOnPhysicalAdapter(v8, v17++);
      }
      while ( v17 < *((_DWORD *)v8 + 1750) );
    }
    v22 = (_QWORD **)((char *)v8 + 44672);
    if ( *v22 != v22 )
    {
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(v8, 0xFFFFFFFF);
      v75 = *v22;
      while ( v75 != v22 )
      {
        v76 = (_QWORD *)*v75;
        v77 = v75 - 37;
        if ( *(_QWORD **)(*v75 + 8LL) != v75 || (v78 = (_QWORD *)v75[1], (_QWORD *)*v78 != v75) )
          __fastfail(3u);
        *v78 = v76;
        v76[1] = v78;
        *v75 = 0LL;
        v75 = v76;
        if ( (*((_DWORD *)v77 + 13) & 7) != 0 )
        {
          v79 = v77[4];
          v80 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v78, v74);
          v80[7] = 0LL;
          v80[3] = 270LL;
          v80[4] = 63LL;
          v80[5] = v77;
          v80[6] = v79;
          WdLogEvent5_WdCriticalError(v80);
        }
        VIDMM_DEVICE::ResumeSchedulerDevice((VIDMM_DEVICE *)v77);
      }
    }
    if ( *((_BYTE *)v8 + 44688) )
    {
      VidSchiResumeFlipQueues(*(_QWORD *)(*((_QWORD *)v8 + 2) + 624LL), 0xFFFFFFFFLL);
      *((_BYTE *)v8 + 44688) = 0;
    }
    if ( v83 )
    {
      VidSchSignalPagingFences(*(_QWORD *)(*((_QWORD *)v8 + 2) + 624LL), &v85, &v86);
      v23 = *((_DWORD *)v8 + 1750);
      if ( v23 > 1 )
        VidSchWaitForPagingFence(*(_QWORD *)(*((_QWORD *)v8 + 2) + 624LL), v85, v86, (unsigned int)((1 << v23) - 1));
    }
    else if ( v18 )
    {
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(v8, 0xFFFFFFFF);
      KeSetEvent(v18, 0, 0);
    }
    *((_QWORD *)v8 + 878) = 0LL;
    *((_QWORD *)v8 + 879) = 0LL;
    *((_DWORD *)v8 + 2) = 0;
  }
  return (unsigned int)inited;
}
