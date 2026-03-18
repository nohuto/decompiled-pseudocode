/*
 * XREFs of ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00880D0
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C00ABE70 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00DF1D8 (-SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0002224 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0005C90 (VidSchSignalSyncObjectsFromGpu.c)
 *     ?OfferRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C001A564 (-OfferRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C001BA6C (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ?SetDelayedEvictionTimerScheduled@VIDMM_GLOBAL@@QEAAXJ@Z @ 0x1C002E070 (-SetDelayedEvictionTimerScheduled@VIDMM_GLOBAL@@QEAAXJ@Z.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C002E3C0 (McTemplateK0p_EtwWriteTransfer.c)
 *     VidSchSignalSyncObjectsFromCpu @ 0x1C003DF40 (VidSchSignalSyncObjectsFromCpu.c)
 *     ?EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z @ 0x1C0086A8C (-EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C00873F0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?StartPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z @ 0x1C0088898 (-StartPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z.c)
 *     ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00894A4 (-FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0089730 (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0095CE0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C0097060 (-EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C009F9F0 (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C00A0810 (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00A08E8 (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C00A2170 (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C00A2358 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A23A0 (-PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C00A28BC (-IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00A2EA0 (-ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z @ 0x1C00A2EC8 (-FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z.c)
 *     ?UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z @ 0x1C00A30D4 (-UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z.c)
 *     ?EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A8ADC (-EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1C00AA598 (-RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 *     ?UnmapAllPagingBuffers@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00AB30C (-UnmapAllPagingBuffers@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?PurgePageTables@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z @ 0x1C00AB3CC (-PurgePageTables@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z.c)
 *     VidSchSignalPagingFences @ 0x1C00AB498 (VidSchSignalPagingFences.c)
 *     ?DoDeferredUnlock@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00AB520 (-DoDeferredUnlock@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     VidSchiResumeFlipQueues @ 0x1C00ABA3C (VidSchiResumeFlipQueues.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C00B79C0 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00D5758 (-CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?DisableIoMmuIsolation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00D6248 (-DisableIoMmuIsolation@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?EnableIoMmuIsolation@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00D62DC (-EnableIoMmuIsolation@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?MoveResourcesSysCommandHelper@VIDMM_GLOBAL@@QEAAJIW4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@11W4VIDMM_DEFRAGMENT_DIRECTION@@@Z @ 0x1C00D8710 (-MoveResourcesSysCommandHelper@VIDMM_GLOBAL@@QEAAJIW4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_.c)
 *     ?ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00D9688 (-ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?TrimOfferCommitmentInternal@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS@@_KPEA_K@Z @ 0x1C00DA24C (-TrimOfferCommitmentInternal@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3.c)
 *     ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x1C00DC580 (-VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z.c)
 *     ?PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEA_K@Z @ 0x1C00E914C (-PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEA_K@Z.c)
 *     ?ValidateFrameBufferRotation@VIDMM_MEMORY_SEGMENT@@QEAAXXZ @ 0x1C00E997C (-ValidateFrameBufferRotation@VIDMM_MEMORY_SEGMENT@@QEAAXXZ.c)
 *     ?FreeVPRReserve@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00EAAA4 (-FreeVPRReserve@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00EAD60 (-InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?ProcessUnblockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z @ 0x1C00EBD1C (-ProcessUnblockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANG.c)
 *     ?PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@PEA_K@Z @ 0x1C00EBD94 (-PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@PEA_K@Z.c)
 *     ?SuspendCpuAccess@VIDMM_SEGMENT@@QEAAJXZ @ 0x1C00ECFB0 (-SuspendCpuAccess@VIDMM_SEGMENT@@QEAAJXZ.c)
 *     ?MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX_K1@Z @ 0x1C00EF788 (-MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX_K1@Z.c)
 *     VidSchWaitForPagingFence @ 0x1C00F5BEC (VidSchWaitForPagingFence.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ProcessSystemCommand(
        VIDMM_GLOBAL *this,
        struct _VIDMM_SYSTEM_COMMAND *a2,
        char a3,
        struct VIDMM_ALLOC *a4,
        struct _VIDSCH_SYNC_OBJECT *a5)
{
  __int64 v5; // rbx
  __int64 v7; // rcx
  char v8; // r15
  int v10; // r14d
  int inited; // r12d
  __int64 v12; // rdx
  unsigned int v13; // ebx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r9
  __int64 v17; // r8
  _QWORD *v18; // rdx
  CVirtualAddressAllocator *v19; // rcx
  int *v20; // rax
  struct _KEVENT *v21; // r13
  unsigned int v22; // r15d
  unsigned int v23; // ebx
  __int64 v24; // r14
  __int64 v25; // rcx
  _QWORD **v26; // rbx
  int v27; // r8d
  _QWORD *v28; // r9
  _QWORD *v29; // rdx
  __int64 v30; // rcx
  unsigned int v31; // eax
  unsigned int v32; // ecx
  VIDMM_DEVICE *v34; // rbx
  __int64 v35; // rax
  CVirtualAddressAllocator *v36; // rbx
  PRKPROCESS *v37; // rcx
  __int64 v38; // rbx
  __int64 **v39; // rdx
  struct _VIDMM_GLOBAL_ALLOC *v40; // rdx
  PRKPROCESS *v41; // rcx
  VIDMM_GLOBAL *v42; // rcx
  int updated; // eax
  unsigned int v44; // ebx
  __int64 v45; // r15
  __int64 v46; // rcx
  char v47; // r13
  __int64 v48; // rdx
  __int64 v49; // r10
  unsigned int v50; // r15d
  unsigned int i; // ebx
  __int64 v52; // rcx
  unsigned int v53; // eax
  unsigned __int64 j; // rdx
  __int64 v55; // rcx
  char v56; // r8
  int v57; // edx
  __int64 v58; // r8
  _QWORD *v59; // rdx
  int v60; // eax
  __int64 v61; // rdx
  __int64 v62; // rdx
  unsigned int m; // ebx
  int v64; // ebx
  __int64 v65; // r15
  int v66; // eax
  VIDMM_GLOBAL *v67; // rcx
  __int64 v68; // rcx
  PRKPROCESS *v69; // rcx
  struct VIDMM_DEVICE *v70; // rdx
  unsigned int k; // ebx
  __int64 v72; // rcx
  _QWORD *v73; // rsi
  _QWORD *v74; // rax
  _QWORD *v75; // r14
  _QWORD *v76; // rcx
  __int64 v77; // [rsp+20h] [rbp-81h]
  int v78; // [rsp+30h] [rbp-71h]
  bool v80; // [rsp+51h] [rbp-50h] BYREF
  bool v81; // [rsp+52h] [rbp-4Fh]
  struct VIDMM_ALLOC *v82; // [rsp+58h] [rbp-49h] BYREF
  __int64 v83; // [rsp+60h] [rbp-41h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v84; // [rsp+68h] [rbp-39h] BYREF
  __int64 v85; // [rsp+70h] [rbp-31h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v86; // [rsp+78h] [rbp-29h] BYREF
  struct VIDMM_ALLOC *v87; // [rsp+80h] [rbp-21h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp-19h] BYREF

  v5 = *(int *)a2;
  v7 = *((int *)this + 2);
  v8 = a3;
  v87 = a4;
  v10 = 0;
  v86 = a5;
  inited = 0;
  LODWORD(v84) = 0;
  LODWORD(v82) = 0;
  if ( (_DWORD)v7 )
    WdLogSingleEntry5(0LL, 270LL, 64LL, this, v7, v5);
  ++*((_QWORD *)this + 578);
  v12 = *((unsigned int *)this + 1754);
  *((_DWORD *)this + 2) = v5;
  v13 = 0;
  *((_DWORD *)this + 12) = -1;
  *((_QWORD *)this + 879) = 0LL;
  for ( *((_QWORD *)this + 880) = 0LL; v13 < (unsigned int)v12; ++v13 )
  {
    VIDMM_GLOBAL::StartPreparationOnPhysicalAdapter(this, v13);
    v12 = *((unsigned int *)this + 1754);
  }
  v14 = *(int *)a2;
  v15 = 1LL;
  if ( (_DWORD)v14 != 121 )
  {
    switch ( (int)v14 )
    {
      case 101:
        wil_details_FeatureReporting_ReportUsageToService(
          (__int64)&Feature_DelayedForceEviction__private_reporting,
          0x1BDA86Au,
          0LL,
          0LL,
          (const struct FEATURE_LOGGED_TRAITS *)&Feature_Wddm30CpuVisible_logged_traits,
          1,
          v78);
        if ( *((_DWORD *)this + 11204) && KeCancelTimer((PKTIMER)((char *)this + 44752)) )
          VIDMM_GLOBAL::SetDelayedEvictionTimerScheduled(this);
        for ( i = 0; i < *((_DWORD *)this + 926); ++i )
        {
          v52 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * i);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 144LL))(v52);
        }
        v53 = 0;
        for ( j = 0LL; v53 < *((_DWORD *)this + 1754); ++v53 )
        {
          v55 = *((_QWORD *)this + 5028) + 1584LL * v53;
          v56 = *(_BYTE *)(v55 + 436);
          if ( (v56 & 0x10) != 0 )
          {
            j |= 1LL << v53;
            *(_BYTE *)(v55 + 436) = v56 & 0xEF;
          }
        }
        VIDMM_GLOBAL::RecommitGpuVirtualAddresses(this, j);
        goto LABEL_11;
      case 102:
        v44 = *((_DWORD *)a2 + 10);
        if ( !*((_DWORD *)this + 926) )
          goto LABEL_66;
        v80 = (v44 & 2) != 0;
        break;
      case 103:
        VIDMM_GLOBAL::CleanupPrimaryAllocation((VIDMM_GLOBAL *)v7, *((struct _VIDMM_GLOBAL_ALLOC **)a2 + 5));
        goto LABEL_11;
      case 104:
        v39 = (__int64 **)*((_QWORD *)a2 + 2);
        v80 = 0;
        v82 = 0LL;
        inited = VIDMM_GLOBAL::PageInOneAllocation((__int64)this, v39, 4LL, 0LL, &v80, (__int64 ***)&v82, 0, -1LL);
        goto LABEL_11;
      case 105:
        VIDMM_GLOBAL::EvictOneAllocation(this, *((struct VIDMM_ALLOC **)a2 + 2), 0);
        goto LABEL_11;
      case 106:
        VIDMM_GLOBAL::ReportVidMmStateWorker(this);
        goto LABEL_11;
      case 110:
        v64 = 0;
        if ( *((int *)this + 926) > 0 )
        {
          v65 = 0LL;
          do
          {
            v7 = *(_QWORD *)(v65 + *((_QWORD *)this + 464));
            v66 = *(_DWORD *)(v7 + 80);
            if ( (v66 & 0x1001) == 0 && (v66 & 4) != 0 )
            {
              inited = VIDMM_SEGMENT::SuspendCpuAccess((VIDMM_SEGMENT *)v7);
              if ( inited < 0 )
                break;
            }
            ++v64;
            v65 += 8LL;
          }
          while ( v64 < *((_DWORD *)this + 926) );
LABEL_71:
          v8 = a3;
        }
        goto LABEL_11;
      case 112:
        v38 = *((_QWORD *)a2 + 5);
        if ( *(_QWORD *)(v38 + 120) )
        {
          VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, 0xFFFFFFFF);
          LOBYTE(v77) = 0;
          (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, _DWORD, _QWORD))(**(_QWORD **)(v38 + 120) + 48LL))(
            *(_QWORD *)(v38 + 120),
            v38,
            0LL,
            0LL,
            v77,
            0LL);
        }
        if ( *(_QWORD *)(v38 + 240) )
        {
          if ( g_IsInternalReleaseOrDbg )
            WdLogNewEntry5_WdTrace(v7, v12, v14, v15);
          VIDMM_GLOBAL::FlushPagingBufferInternal(this, *(_DWORD *)(v38 + 68) & 0x3F, 0, 0LL, 0LL, 0, 0);
          VIDMM_GLOBAL::EvictTemporaryAllocation(v67, (struct _VIDMM_GLOBAL_ALLOC *)v38);
          VIDMM_GLOBAL::FlushPagingBufferInternal(this, *(_DWORD *)(v38 + 68) & 0x3F, 0, 0LL, 0LL, 0, 0);
        }
        goto LABEL_11;
      case 113:
        v82 = 0LL;
        inited = VIDMM_GLOBAL::CommitVirtualAddressRangeSystemCommand(
                   (VIDMM_GLOBAL *)v7,
                   (struct _VIDMM_SYSTEM_COMMAND *)((char *)a2 + 40),
                   &v82);
        goto LABEL_11;
      case 114:
        v41 = (PRKPROCESS *)*((_QWORD *)this + 5048);
        memset(&ApcState, 0, sizeof(ApcState));
        KeStackAttachProcess(*v41, &ApcState);
        updated = VIDMM_GLOBAL::UncommitVirtualAddressRangeSystemCommand(v42, a2);
        goto LABEL_54;
      case 115:
        v35 = *((_QWORD *)a2 + 6);
        v36 = *(CVirtualAddressAllocator **)(v35 + 504);
        if ( v36 )
        {
          if ( *((_QWORD *)a2 + 5) )
          {
            v37 = (PRKPROCESS *)*((_QWORD *)this + 5048);
            memset(&ApcState, 0, sizeof(ApcState));
            KeStackAttachProcess(*v37, &ApcState);
            CVirtualAddressAllocator::DestroyVaAllocator(v36);
            KeUnstackDetachProcess(&ApcState);
          }
          else
          {
            CVirtualAddressAllocator::DestroyVaAllocator(*(CVirtualAddressAllocator **)(v35 + 504));
          }
          *(_QWORD *)(*((_QWORD *)a2 + 6) + 504LL) = 0LL;
        }
        goto LABEL_11;
      case 116:
        v70 = (struct VIDMM_DEVICE *)*((_QWORD *)a2 + 3);
        v80 = 0;
        v82 = 0LL;
        inited = VIDMM_GLOBAL::PageInDeviceInternal(this, v70, 0, &v80, &v82);
        goto LABEL_11;
      case 117:
        v69 = (PRKPROCESS *)*((_QWORD *)this + 5048);
        memset(&ApcState, 0, sizeof(ApcState));
        KeStackAttachProcess(*v69, &ApcState);
        updated = VIDMM_GLOBAL::VidMmUpdateContextAllocationCb(
                    this,
                    *((const struct _DXGKARGCB_UPDATECONTEXTALLOCATION **)a2 + 5),
                    1u);
LABEL_54:
        inited = updated;
        KeUnstackDetachProcess(&ApcState);
        goto LABEL_11;
      case 118:
        inited = VIDMM_GLOBAL::InitPagingProcessVaSpace(this, *((_DWORD *)a2 + 1), 0);
        if ( inited < 0 )
        {
          WdLogSingleEntry1(1LL, 10469LL);
          v77 = 10469LL;
          DxgkLogInternalTriageEvent(v68, 0x40000LL);
        }
        goto LABEL_11;
      case 120:
        inited = VIDMM_GLOBAL::FreeGpuVirtualAddressSystemCommand(
                   this,
                   *((struct CVirtualAddressAllocator **)a2 + 5),
                   *((_QWORD *)a2 + 6),
                   1uLL,
                   *((_BYTE *)a2 + 64));
        goto LABEL_11;
      case 122:
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)a2 + 5) + 24LL))(
          *((_QWORD *)a2 + 5),
          0LL,
          *((_QWORD *)a2 + 6),
          *((_QWORD *)a2 + 7));
        goto LABEL_11;
      case 123:
        v34 = (VIDMM_DEVICE *)*((_QWORD *)a2 + 5);
        if ( *((_BYTE *)a2 + 48) )
        {
          VIDMM_DEVICE::IndefinitelySuspend(v34, *((_BYTE *)a2 + 49));
          VIDMM_DEVICE::FaultAllAllocations(v34);
        }
        else
        {
          VIDMM_DEVICE::EnsureSchedulable(v34, 0);
        }
        goto LABEL_11;
      case 124:
        VIDMM_GLOBAL::TrimOfferCommitmentInternal(
          this,
          *((struct VIDMM_PROCESS **)a2 + 5),
          *((struct DXGDECOMMITITERATOR **)a2 + 6),
          *(union _D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS *)((char *)a2 + 56),
          *((_QWORD *)a2 + 8),
          *((unsigned __int64 **)a2 + 9));
        goto LABEL_11;
      case 126:
        VIDMM_GLOBAL::MoveResourcesSysCommandHelper(
          this,
          *((unsigned int *)a2 + 1),
          *((unsigned int *)a2 + 10),
          *((unsigned int *)a2 + 11));
        goto LABEL_11;
      case 127:
        for ( k = 0; k < *((_DWORD *)this + 926); ++k )
          VIDMM_SEGMENT::InvalidateAllVirtualAddress(*(VIDMM_SEGMENT **)(*((_QWORD *)this + 464) + 8LL * k));
        goto LABEL_11;
      case 128:
        v72 = *((_QWORD *)a2 + 5);
        if ( *((_DWORD *)a2 + 12) )
          VIDMM_SEGMENT::FreeVPRReserve((VIDMM_SEGMENT *)v72);
        else
          VIDMM_LINEAR_POOL::MarkBlockAsAllocatedScrubPending(
            *(VIDMM_LINEAR_POOL **)(v72 + 152),
            *(void **)(v72 + 456),
            *(_QWORD *)(v72 + 424) - *(_QWORD *)(v72 + 464),
            *(_QWORD *)(v72 + 424));
        goto LABEL_11;
      case 129:
        v40 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 5);
        v7 = *((_QWORD *)v40 + 15);
        if ( v7 && *((_QWORD *)v40 + 58) )
          VIDMM_CPU_HOST_APERTURE::OfferRange(*(VIDMM_CPU_HOST_APERTURE **)(v7 + 504), v40);
        goto LABEL_11;
      case 130:
        inited = VIDMM_GLOBAL::EnableIoMmuIsolation(this);
        goto LABEL_11;
      case 131:
        VIDMM_GLOBAL::DisableIoMmuIsolation(this);
        goto LABEL_11;
      case 132:
        wil_details_FeatureReporting_ReportUsageToService(
          (__int64)&Feature_VidMMVerifyIntegrity__private_reporting,
          0x148F1C8u,
          0LL,
          0LL,
          (const struct FEATURE_LOGGED_TRAITS *)&Feature_VidMMVerifyIntegrity_logged_traits,
          0,
          v78);
        WdLogSingleEntry5(0LL, 270LL, 23LL, -1073741811LL, *(int *)a2, 0LL);
        goto LABEL_11;
      case 205:
        VIDMM_GLOBAL::EvictOneAllocation(this, *((struct VIDMM_ALLOC **)a2 + 2), 1);
        _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)a2 + 2) + 164LL));
        goto LABEL_11;
      case 216:
        VIDMM_SEGMENT::ProcessUnblockMemoryRanges(
          *((_QWORD *)a2 + 5),
          *((unsigned __int8 *)a2 + 48),
          v14,
          (char *)a2 + 56);
        goto LABEL_11;
      default:
        WdLogSingleEntry5(0LL, 270LL, 23LL, -1073741811LL, v14, 0LL);
        goto LABEL_11;
    }
    while ( 1 )
    {
      v45 = 8LL * (unsigned int)inited;
      v46 = *(_QWORD *)(v45 + *((_QWORD *)this + 464));
      if ( (*(_DWORD *)(v46 + 80) & 0x1001) != 0 )
      {
        v81 = 1;
      }
      else
      {
        v81 = *((_DWORD *)this + 10046) == -1
           || (v44 & 0x40) != 0 && *(_QWORD *)(v46 + 232) > (unsigned __int64)qword_1C006E518;
        if ( *((_DWORD *)this + 10046) != -1 && *(_QWORD *)(v46 + 232) <= (unsigned __int64)qword_1C006E518 )
        {
          v47 = 0;
          goto LABEL_60;
        }
      }
      v47 = 1;
LABEL_60:
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_DelayedForceEviction__private_reporting,
        0x1BDA86Au,
        0LL,
        0LL,
        (const struct FEATURE_LOGGED_TRAITS *)&Feature_Wddm30CpuVisible_logged_traits,
        1,
        v78);
      v48 = *(_QWORD *)(v45 + *((_QWORD *)this + 464));
      v7 = *(unsigned int *)(v48 + 80);
      if ( (v7 & 0x1001) == 0
        && (v7 & 0x200000) == 0
        && *((_DWORD *)this + 10046) != -1
        && (v44 & 0x80u) == 0
        && *(_QWORD *)(v48 + 232) > (unsigned __int64)qword_1C006E518 )
      {
        v15 = 1LL;
        LOBYTE(v7) = (v7 & 0x80u) != 0LL;
        if ( ((unsigned __int8)v7 & ((v44 & 0x20) != 0)) == 0
          || _InterlockedCompareExchange((volatile signed __int32 *)this + 11204, 1, 0) )
        {
          goto LABEL_62;
        }
        KeSetTimer((PKTIMER)((char *)this + 44752), (LARGE_INTEGER)-qword_1C006E5C0, (PKDPC)((char *)this + 44824));
      }
      v15 = 1LL;
LABEL_62:
      v49 = *(_QWORD *)(v45 + *((_QWORD *)this + 464));
      LOBYTE(v14) = (*(_DWORD *)(v49 + 80) & 0x80u) != 0;
      if ( ((unsigned __int8)v14 & v80) != 0 && v81 )
        goto LABEL_64;
      LOBYTE(v7) = (*(_DWORD *)(v49 + 80) & 0x100) != 0;
      if ( ((unsigned __int8)v7 & ((v44 & 4) != 0)) != 0 )
        goto LABEL_64;
      v57 = *(_DWORD *)(v49 + 80) & 0x1001;
      if ( !v57 && (v44 & 0x10) != 0 )
        goto LABEL_64;
      if ( (((v44 & 0x20) != 0) & (unsigned __int8)v14) == 0 || !v47 || (v44 & 0x80u) != 0 )
      {
        if ( v57 && (v44 & 0x80u) != 0 )
          goto LABEL_64;
        v58 = *((_QWORD *)a2 + 6);
        v83 = 0LL;
        VIDMM_SEGMENT::PurgeContent(v49, v44, v58, &v83);
        v59 = (_QWORD *)*((_QWORD *)a2 + 7);
        if ( (*(_DWORD *)(*(_QWORD *)(v45 + *((_QWORD *)this + 464)) + 80LL) & 0x1001) != 0 )
          v59[1] += v83;
        else
          *v59 += v83;
        if ( (v44 & 8) == 0 )
        {
          v60 = VIDMM_SEGMENT::DriverId(*(VIDMM_SEGMENT **)(v45 + *((_QWORD *)this + 464)));
          if ( v60 == *(_DWORD *)(v61 + 56) || v60 == *(_DWORD *)(v61 + 40) )
            *(_BYTE *)(v61 + 436) |= 0x80u;
          if ( v60 == *(_DWORD *)(v61 + 64) || v60 == *(_DWORD *)(v61 + 48) )
            *(_BYTE *)(v61 + 437) |= 1u;
        }
        v7 = *(_QWORD *)(v45 + *((_QWORD *)this + 464));
        v62 = *(unsigned int *)(v7 + 368);
        if ( (_DWORD)v62 != -1 )
        {
          (*((void (__fastcall **)(_QWORD, __int64, _QWORD))this + 5018))(*((_QWORD *)this + 5019), v62, 0LL);
          v15 = 1LL;
          goto LABEL_64;
        }
        goto LABEL_112;
      }
      if ( !v57 )
      {
        v85 = 0LL;
        VIDMM_MEMORY_SEGMENT::PurgeCpuVisibleAllocations(v49, v44, &v85, 1LL);
        v7 = *((_QWORD *)a2 + 7);
        *(_QWORD *)v7 += v85;
LABEL_112:
        v15 = 1LL;
      }
LABEL_64:
      if ( (unsigned int)++inited >= *((_DWORD *)this + 926) )
      {
        v10 = (int)v84;
        inited = (int)v84;
        v12 = *((unsigned int *)this + 1754);
LABEL_66:
        v50 = 0;
        if ( (_DWORD)v12 )
        {
          do
          {
            LOBYTE(v12) = 1;
            VIDMM_GLOBAL::EvictTemporaryAllocations((VIDMM_GLOBAL **)this, v12, v50++, v15);
          }
          while ( v50 < *((_DWORD *)this + 1754) );
        }
        if ( (v44 & 8) == 0 )
        {
          VIDMM_GLOBAL::PurgePageTables(this, v44, v14, v15);
          v10 = 1;
          VIDMM_GLOBAL::DoDeferredUnlock(this);
        }
        if ( (v44 & 0x20) != 0 )
        {
          for ( m = 0; m < *((_DWORD *)this + 926); ++m )
          {
            v7 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * m);
            if ( (*(_DWORD *)(v7 + 80) & 0x1001) == 0 )
              VIDMM_MEMORY_SEGMENT::ValidateFrameBufferRotation((VIDMM_MEMORY_SEGMENT *)v7);
          }
        }
        goto LABEL_71;
      }
    }
  }
  v16 = *((_QWORD *)a2 + 2);
  v17 = *(_QWORD *)(*(_QWORD *)v16 + 8LL);
  v18 = *(_QWORD **)(*(_QWORD *)(v17 + 16) + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL));
  if ( v18 && *(_DWORD *)(*v18 + 40928LL) )
  {
    if ( (*(_DWORD *)(v17 + 96) & 2) != 0 )
      v19 = *(CVirtualAddressAllocator **)(*v18 + 8LL * (*(_DWORD *)(**(_QWORD **)v16 + 68LL) & 0x3F) + 40416);
    else
      v19 = (CVirtualAddressAllocator *)v18[63];
  }
  else
  {
    v19 = 0LL;
  }
  CVirtualAddressAllocator::FreeAllocMappedVaRangeList(v19, *((struct VIDMM_ALLOC **)a2 + 2));
LABEL_11:
  v20 = (int *)*((_QWORD *)a2 + 4);
  if ( v20 )
    *v20 = inited;
  if ( !v10 )
  {
    v21 = (struct _KEVENT *)*((_QWORD *)a2 + 1);
    v22 = 0;
    v84 = v86;
    v82 = v87;
    *((_QWORD *)this + 466) = (char *)this + 3720;
    for ( *((_QWORD *)this + 465) = (char *)this + 3720; v22 < *((_DWORD *)this + 1754); ++v22 )
    {
      v23 = 0;
      v24 = 1584LL * v22;
      if ( *(_DWORD *)(*((_QWORD *)this + 5028) + v24 + 24) )
      {
        do
        {
          v25 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * (v23 + *(_DWORD *)(*((_QWORD *)this + 5028) + v24 + 20)));
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 152LL))(v25);
          ++v23;
        }
        while ( v23 < *(_DWORD *)(*((_QWORD *)this + 5028) + v24 + 24) );
      }
      if ( (byte_1C006E941 & 1) != 0 )
        McTemplateK0p_EtwWriteTransfer(v7, &EventPagingEndPreparation, v14, *((_QWORD *)this + v22 + 143));
      if ( *((_DWORD *)this + v22 + 414) != *((_DWORD *)this + v22 + 478)
        || *((_DWORD *)this + v22 + 542) != *((_DWORD *)this + v22 + 606) )
      {
        VIDMM_GLOBAL::FlushPagingBufferInternal(this, v22, 0, 0LL, 0LL, 0, 0);
      }
      v7 = *((_QWORD *)this + v22 + 143);
      if ( v7 )
        *(_DWORD *)(v7 + 172) = *(_DWORD *)(v7 + 168);
    }
    v26 = (_QWORD **)((char *)this + 44680);
    if ( *v26 != v26 )
    {
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, 0xFFFFFFFF);
      v73 = *v26;
      while ( v73 != v26 )
      {
        v74 = (_QWORD *)*v73;
        v75 = v73 - 38;
        if ( *(_QWORD **)(*v73 + 8LL) != v73 || (v76 = (_QWORD *)v73[1], (_QWORD *)*v76 != v73) )
          __fastfail(3u);
        *v76 = v74;
        v74[1] = v76;
        *v73 = 0LL;
        v73 = v74;
        if ( (*((_DWORD *)v75 + 15) & 7) != 0 )
          WdLogSingleEntry5(0LL, 270LL, 63LL, v75, v75[4], 0LL);
        VIDMM_DEVICE::ResumeSchedulerDevice((VIDMM_DEVICE *)v75);
      }
    }
    if ( *((_BYTE *)this + 44696) )
    {
      VidSchiResumeFlipQueues(*(_QWORD *)(*((_QWORD *)this + 2) + 632LL), 0xFFFFFFFFLL);
      *((_BYTE *)this + 44696) = 0;
    }
    if ( !a3 )
    {
      if ( v21 )
      {
        VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, 0xFFFFFFFF);
        KeSetEvent(v21, 0, 0);
      }
      goto LABEL_33;
    }
    v27 = 0;
    v28 = 0LL;
    v29 = 0LL;
    v30 = *(_QWORD *)(*((_QWORD *)this + 2) + 632LL);
    v31 = 0;
    if ( *(_BYTE *)(v30 + 55) )
    {
      v29 = *(_QWORD **)(v30 + 280);
      if ( !*v29 )
      {
        VidSchSignalSyncObjectsFromCpu(1u, &v84, 0, (char *)&v82);
LABEL_31:
        v32 = *((_DWORD *)this + 1754);
        if ( v32 > 1 )
          VidSchWaitForPagingFence(
            *(_QWORD *)(*((_QWORD *)this + 2) + 632LL),
            v84,
            v82,
            (unsigned int)((1 << v32) - 1),
            v77);
LABEL_33:
        *((_QWORD *)this + 879) = 0LL;
        *((_QWORD *)this + 880) = 0LL;
        *((_DWORD *)this + 2) = 0;
        return (unsigned int)inited;
      }
      v31 = *(_DWORD *)(v30 + 76);
    }
    else
    {
      v27 = *(_DWORD *)(v30 + 76);
      v28 = *(_QWORD **)(v30 + 264);
    }
    VidSchSignalSyncObjectsFromGpu(v31, (__int64)v29, v27, v28, 1u, (__int64)&v84, 0, (unsigned __int64 *)&v82);
    goto LABEL_31;
  }
  VIDMM_GLOBAL::EndPreparation(this, 0xFFFFFFFF, 0LL, 0, 0LL, 0LL);
  VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, 0xFFFFFFFF);
  VIDMM_GLOBAL::UnmapAllPagingBuffers(this);
  if ( v8 )
    VidSchSignalPagingFences(*(_QWORD *)(*((_QWORD *)this + 2) + 632LL), &v86, &v87);
  else
    KeSetEvent(*((PRKEVENT *)a2 + 1), 0, 0);
  return (unsigned int)inited;
}
