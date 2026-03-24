/*
 * XREFs of ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0065C20
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C008EC90 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00B9974 (-SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0001D90 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x1C0017820 (__security_check_cookie.c)
 *     Feature_VidMMVerifyIntegrity__private_ReportDeviceUsage @ 0x1C0017AE8 (Feature_VidMMVerifyIntegrity__private_ReportDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018BF0 (_guard_dispatch_icall_nop.c)
 *     ?OfferRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0029520 (-OfferRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C006118C (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00611D4 (-PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z @ 0x1C0062C90 (-FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z.c)
 *     ?UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z @ 0x1C0062E98 (-UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0063FD0 (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     VidSchSignalPagingFences @ 0x1C00668AC (VidSchSignalPagingFences.c)
 *     ?EndPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z @ 0x1C0066934 (-EndPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z.c)
 *     ?StartPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z @ 0x1C00669C8 (-StartPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z.c)
 *     ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0068080 (-FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C006D860 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C006ECA0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C006F95C (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0073444 (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00741DC (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C0075FFC (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C00803E0 (-EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C0084A18 (-IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C0084D48 (-ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C00880DC (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 *     ?EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z @ 0x1C00899AC (-EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z.c)
 *     ?EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C008D838 (-EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C0098F98 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00AE3BC (-CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?DisableIoMmuIsolation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00AF034 (-DisableIoMmuIsolation@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?DoDeferredUnlock@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00AF0D8 (-DoDeferredUnlock@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?EnableIoMmuIsolation@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00AF148 (-EnableIoMmuIsolation@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?MoveResourcesSysCommandHelper@VIDMM_GLOBAL@@QEAAJIW4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@11W4VIDMM_DEFRAGMENT_DIRECTION@@@Z @ 0x1C00B1B74 (-MoveResourcesSysCommandHelper@VIDMM_GLOBAL@@QEAAJIW4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_.c)
 *     ?PurgePageTables@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z @ 0x1C00B2790 (-PurgePageTables@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z.c)
 *     ?RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1C00B2CC0 (-RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 *     ?ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00B3368 (-ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?TrimOfferCommitmentInternal@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS@@_KPEA_K@Z @ 0x1C00B4184 (-TrimOfferCommitmentInternal@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3.c)
 *     ?UnmapAllPagingBuffers@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00B4588 (-UnmapAllPagingBuffers@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x1C00B6A94 (-VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z.c)
 *     ?PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEA_K@Z @ 0x1C00C5390 (-PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEA_K@Z.c)
 *     ?ValidateFrameBufferRotation@VIDMM_MEMORY_SEGMENT@@QEAAXXZ @ 0x1C00C5DB4 (-ValidateFrameBufferRotation@VIDMM_MEMORY_SEGMENT@@QEAAXXZ.c)
 *     ?FreeVPRReserve@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00C6ED8 (-FreeVPRReserve@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00C718C (-InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?ProcessUnblockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z @ 0x1C00C8194 (-ProcessUnblockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANG.c)
 *     ?PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@PEA_K@Z @ 0x1C00C820C (-PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@PEA_K@Z.c)
 *     ?SuspendCpuAccess@VIDMM_SEGMENT@@QEAAJXZ @ 0x1C00C940C (-SuspendCpuAccess@VIDMM_SEGMENT@@QEAAJXZ.c)
 *     ?RunApertureCoherencyTest@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00C9F88 (-RunApertureCoherencyTest@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?ValidateApertureUnmapToDummyPage@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00CA6D0 (-ValidateApertureUnmapToDummyPage@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX_K1@Z @ 0x1C00CEE74 (-MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX_K1@Z.c)
 *     VidSchiResumeFlipQueues @ 0x1C00D0490 (VidSchiResumeFlipQueues.c)
 *     VidSchWaitForPagingFence @ 0x1C00D31D0 (VidSchWaitForPagingFence.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ProcessSystemCommand(
        unsigned __int64 this,
        struct _VIDMM_SYSTEM_COMMAND *a2,
        __int64 a3,
        __int64 a4,
        struct _VIDSCH_SYNC_OBJECT *a5)
{
  __int64 v5; // r14
  __int64 v7; // rbx
  unsigned __int64 v8; // rdi
  int v9; // r15d
  int inited; // r13d
  _QWORD *v11; // rax
  __int64 v12; // rdx
  unsigned int v13; // ebx
  __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // rdx
  unsigned int v17; // r14d
  unsigned int v18; // ebx
  __int64 v19; // r10
  int v20; // r8d
  char v21; // cl
  char v22; // dl
  __int64 v23; // r8
  _QWORD *v24; // rdx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rdx
  unsigned int j; // r14d
  __int64 k; // rbx
  VIDMM_MEMORY_SEGMENT *v30; // rcx
  unsigned int v31; // ebx
  __int64 v32; // rcx
  unsigned __int64 v33; // rcx
  unsigned int v34; // eax
  __int64 v35; // rdx
  char v36; // r8
  __int64 v37; // rcx
  struct VIDMM_DEVICE *v38; // rdx
  __int64 v39; // rax
  CVirtualAddressAllocator *v40; // rbx
  PRKPROCESS *v41; // rcx
  PRKPROCESS *v42; // rcx
  VIDMM_GLOBAL *v43; // rcx
  __int64 v44; // r8
  int updated; // eax
  struct _KAPC_STATE *v46; // rcx
  __int64 v47; // rbx
  VIDMM_GLOBAL *v48; // rcx
  int v49; // ebx
  __int64 v50; // r14
  VIDMM_SEGMENT *v51; // rcx
  int v52; // eax
  PRKPROCESS *v53; // rcx
  VIDMM_DEVICE *v54; // rbx
  CVirtualAddressAllocator *VirtualAddressAllocator; // rax
  struct VIDMM_ALLOC *v56; // r10
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // rax
  _QWORD *v61; // rax
  struct _VIDMM_GLOBAL_ALLOC *v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rcx
  unsigned int i; // ebx
  int *v66; // rax
  unsigned int v67; // ebx
  struct _KEVENT *v68; // r12
  unsigned int v69; // esi
  __int64 v70; // r14
  __int64 v71; // rcx
  _QWORD **v72; // r14
  __int64 v73; // rdx
  _QWORD *v74; // rsi
  _QWORD *v75; // rax
  _QWORD *v76; // r15
  _QWORD *v77; // rcx
  __int64 v78; // rbx
  _QWORD *v79; // rax
  unsigned int v80; // ecx
  char v82; // [rsp+50h] [rbp-B0h]
  char v83; // [rsp+51h] [rbp-AFh] BYREF
  bool v84; // [rsp+52h] [rbp-AEh] BYREF
  __int64 v85; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v86; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v87; // [rsp+68h] [rbp-98h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v88; // [rsp+70h] [rbp-90h] BYREF
  __int64 v89; // [rsp+78h] [rbp-88h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v90; // [rsp+80h] [rbp-80h] BYREF
  __int64 v91; // [rsp+88h] [rbp-78h] BYREF
  struct VIDMM_ALLOC *v92; // [rsp+90h] [rbp-70h] BYREF
  struct VIDMM_ALLOC *v93; // [rsp+98h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+A0h] [rbp-60h] BYREF
  struct _KAPC_STATE v95; // [rsp+D0h] [rbp-30h] BYREF
  struct _KAPC_STATE v96; // [rsp+100h] [rbp+0h] BYREF

  v5 = *(int *)(this + 8);
  v7 = *(int *)a2;
  v8 = this;
  v82 = a3;
  v9 = 0;
  v89 = a4;
  inited = 0;
  v88 = a5;
  if ( (_DWORD)v5 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
    v11[3] = 270LL;
    v11[4] = 64LL;
    v11[5] = v8;
    v11[6] = v5;
    v11[7] = v7;
    WdLogEvent5_WdCriticalError(v11);
  }
  *(_DWORD *)(v8 + 48) = -1;
  ++*(_QWORD *)(v8 + 4608);
  v12 = *(unsigned int *)(v8 + 7000);
  *(_DWORD *)(v8 + 8) = v7;
  v13 = 0;
  *(_QWORD *)(v8 + 7024) = 0LL;
  for ( *(_QWORD *)(v8 + 7032) = 0LL; v13 < (unsigned int)v12; ++v13 )
  {
    VIDMM_GLOBAL::StartPreparationOnPhysicalAdapter((VIDMM_GLOBAL *)v8, v13);
    v12 = *(unsigned int *)(v8 + 7000);
  }
  v14 = *(int *)a2;
  if ( (int)v14 > 205 )
  {
    if ( (_DWORD)v14 == 216 )
    {
      LOBYTE(v12) = *((_BYTE *)a2 + 48);
      VIDMM_SEGMENT::ProcessUnblockMemoryRanges(*((_QWORD *)a2 + 5), v12, a3, (char *)a2 + 56);
      goto LABEL_149;
    }
    goto LABEL_134;
  }
  if ( (_DWORD)v14 == 205 )
  {
    VIDMM_GLOBAL::EvictOneAllocation((VIDMM_GLOBAL *)v8, *((struct VIDMM_ALLOC **)a2 + 2), 1);
    _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)a2 + 2) + 180LL));
    goto LABEL_149;
  }
  if ( (int)v14 > 117 )
  {
    if ( (int)v14 > 126 )
    {
      switch ( (_DWORD)v14 )
      {
        case 0x7F:
          for ( i = 0; i < *(_DWORD *)(v8 + 3704); ++i )
            VIDMM_SEGMENT::InvalidateAllVirtualAddress(*(VIDMM_SEGMENT **)(*(_QWORD *)(v8 + 3712) + 8LL * i));
          goto LABEL_149;
        case 0x80:
          v64 = *((_QWORD *)a2 + 5);
          if ( *((_DWORD *)a2 + 12) )
            VIDMM_SEGMENT::FreeVPRReserve((VIDMM_SEGMENT *)v64);
          else
            VIDMM_LINEAR_POOL::MarkBlockAsAllocatedScrubPending(
              *(VIDMM_LINEAR_POOL **)(v64 + 152),
              *(void **)(v64 + 456),
              *(_QWORD *)(v64 + 424) - *(_QWORD *)(v64 + 464),
              *(_QWORD *)(v64 + 424));
          goto LABEL_149;
        case 0x81:
          v62 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 5);
          v63 = *((_QWORD *)v62 + 16);
          if ( v63 && *((_QWORD *)v62 + 57) )
            VIDMM_CPU_HOST_APERTURE::OfferRange(*(VIDMM_CPU_HOST_APERTURE **)(v63 + 488), v62);
          goto LABEL_149;
        case 0x82:
          v15 = VIDMM_GLOBAL::EnableIoMmuIsolation((VIDMM_GLOBAL *)v8);
          goto LABEL_19;
      }
      this = (unsigned int)(v14 - 131);
      if ( (_DWORD)v14 == 131 )
      {
        VIDMM_GLOBAL::DisableIoMmuIsolation((VIDMM_GLOBAL *)v8);
        goto LABEL_149;
      }
      if ( (_DWORD)v14 == 132 )
      {
        Feature_VidMMVerifyIntegrity__private_ReportDeviceUsage();
        v14 = *(int *)a2;
      }
    }
    else
    {
      switch ( (_DWORD)v14 )
      {
        case '~':
          VIDMM_GLOBAL::MoveResourcesSysCommandHelper(
            v8,
            *((unsigned int *)a2 + 1),
            *((unsigned int *)a2 + 10),
            *((unsigned int *)a2 + 11));
          goto LABEL_149;
        case 'v':
          inited = VIDMM_GLOBAL::InitPagingProcessVaSpace((VIDMM_GLOBAL *)v8, *((_DWORD *)a2 + 1), 0);
          if ( inited < 0 )
          {
            v60 = WdLogNewEntry5_WdAssertion(v58, v57, v59);
            *(_QWORD *)(v60 + 24) = 10208LL;
            WdLogEvent5_WdAssertion(v60);
          }
          goto LABEL_149;
        case 'x':
          v15 = VIDMM_GLOBAL::FreeGpuVirtualAddressSystemCommand(
                  (VIDMM_GLOBAL *)v8,
                  *((struct _KTHREAD ***)a2 + 5),
                  *((_QWORD *)a2 + 6),
                  a4,
                  *((_BYTE *)a2 + 64));
          goto LABEL_19;
        case 'y':
          VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                      *(VIDMM_PROCESS **)(**((_QWORD **)a2 + 2) + 8LL),
                                      *(_DWORD *)(*(_QWORD *)(v8 + 24) + 232LL),
                                      *(_DWORD *)(***((_QWORD ***)a2 + 2) + 76LL) & 0x3F);
          CVirtualAddressAllocator::FreeAllocMappedVaRangeList(VirtualAddressAllocator, v56);
          goto LABEL_149;
        case 'z':
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)a2 + 5) + 24LL))(
            *((_QWORD *)a2 + 5),
            0LL,
            *((_QWORD *)a2 + 6),
            *((_QWORD *)a2 + 7));
          goto LABEL_149;
      }
      this = (unsigned int)(v14 - 123);
      if ( (_DWORD)v14 == 123 )
      {
        v54 = (VIDMM_DEVICE *)*((_QWORD *)a2 + 5);
        if ( *((_BYTE *)a2 + 48) )
        {
          VIDMM_DEVICE::IndefinitelySuspend(v54, *((_BYTE *)a2 + 49));
          VIDMM_DEVICE::FaultAllAllocations(v54);
        }
        else
        {
          VIDMM_DEVICE::EnsureSchedulable(v54, 0);
        }
        goto LABEL_149;
      }
      if ( (_DWORD)v14 == 124 )
      {
        VIDMM_GLOBAL::TrimOfferCommitmentInternal(
          (VIDMM_GLOBAL *)v8,
          *((struct VIDMM_PROCESS **)a2 + 5),
          *((struct DXGDECOMMITITERATOR **)a2 + 6),
          *(union _D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS *)((char *)a2 + 56),
          *((_QWORD *)a2 + 8),
          *((unsigned __int64 **)a2 + 9));
        goto LABEL_149;
      }
    }
    goto LABEL_134;
  }
  if ( (_DWORD)v14 == 117 )
  {
    v53 = *(PRKPROCESS **)(v8 + 40384);
    memset(&v96, 0, sizeof(v96));
    KeStackAttachProcess(*v53, &v96);
    updated = VIDMM_GLOBAL::VidMmUpdateContextAllocationCb(
                (VIDMM_GLOBAL *)v8,
                *((const struct _DXGKARGCB_UPDATECONTEXTALLOCATION **)a2 + 5),
                1u);
    v46 = &v96;
    goto LABEL_93;
  }
  if ( (int)v14 > 108 )
  {
    if ( (_DWORD)v14 == 110 )
    {
      v49 = 0;
      if ( *(int *)(v8 + 3704) > 0 )
      {
        v50 = 0LL;
        do
        {
          v51 = *(VIDMM_SEGMENT **)(v50 + *(_QWORD *)(v8 + 3712));
          v52 = *((_DWORD *)v51 + 20);
          if ( (v52 & 0x1001) == 0 && (v52 & 4) != 0 )
          {
            inited = VIDMM_SEGMENT::SuspendCpuAccess(v51);
            if ( inited < 0 )
              break;
          }
          ++v49;
          v50 += 8LL;
        }
        while ( v49 < *(_DWORD *)(v8 + 3704) );
      }
      goto LABEL_149;
    }
    v37 = (unsigned int)(v14 - 112);
    if ( (_DWORD)v14 == 112 )
    {
      v47 = *((_QWORD *)a2 + 5);
      if ( *(_QWORD *)(v47 + 128) )
      {
        VIDMM_GLOBAL::WaitForAllPagingEnginesIdle((VIDMM_GLOBAL *)v8, 0xFFFFFFFF);
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, _BYTE, _QWORD))(**(_QWORD **)(v47 + 128) + 48LL))(
          *(_QWORD *)(v47 + 128),
          v47,
          0LL,
          0LL,
          0,
          0LL);
      }
      if ( *(_QWORD *)(v47 + 256) )
      {
        if ( g_IsInternalReleaseOrDbg )
          WdLogNewEntry5_WdTrace(v37);
        VIDMM_GLOBAL::FlushPagingBufferInternal((VIDMM_GLOBAL *)v8, *(_DWORD *)(v47 + 76) & 0x3F, 0, 0LL, 0LL, 0, 0);
        VIDMM_GLOBAL::EvictTemporaryAllocation(v48, (struct _VIDMM_GLOBAL_ALLOC *)v47);
        VIDMM_GLOBAL::FlushPagingBufferInternal((VIDMM_GLOBAL *)v8, *(_DWORD *)(v47 + 76) & 0x3F, 0, 0LL, 0LL, 0, 0);
      }
      goto LABEL_149;
    }
    if ( (_DWORD)v14 == 113 )
    {
      v93 = 0LL;
      v15 = VIDMM_GLOBAL::CommitVirtualAddressRangeSystemCommand(
              (VIDMM_GLOBAL *)(unsigned int)(v14 - 113),
              (struct _VIDMM_SYSTEM_COMMAND *)((char *)a2 + 40),
              &v93);
      goto LABEL_19;
    }
    if ( (_DWORD)v14 != 114 )
    {
      this = (unsigned int)(v14 - 115);
      if ( (_DWORD)v14 == 115 )
      {
        v39 = *((_QWORD *)a2 + 6);
        v40 = *(CVirtualAddressAllocator **)(v39 + 504);
        if ( v40 )
        {
          if ( *((_QWORD *)a2 + 5) )
          {
            v41 = *(PRKPROCESS **)(v8 + 40384);
            memset(&ApcState, 0, sizeof(ApcState));
            KeStackAttachProcess(*v41, &ApcState);
            CVirtualAddressAllocator::DestroyVaAllocator(v40);
            KeUnstackDetachProcess(&ApcState);
          }
          else
          {
            CVirtualAddressAllocator::DestroyVaAllocator(*(CVirtualAddressAllocator **)(v39 + 504));
          }
          *(_QWORD *)(*((_QWORD *)a2 + 6) + 504LL) = 0LL;
        }
        goto LABEL_149;
      }
      if ( (_DWORD)v14 == 116 )
      {
        v38 = (struct VIDMM_DEVICE *)*((_QWORD *)a2 + 3);
        v84 = 0;
        v92 = 0LL;
        v15 = VIDMM_GLOBAL::PageInDeviceInternal((VIDMM_GLOBAL *)v8, v38, 0, &v84, &v92);
        goto LABEL_19;
      }
      goto LABEL_134;
    }
    v42 = *(PRKPROCESS **)(v8 + 40384);
    memset(&v95, 0, sizeof(v95));
    KeStackAttachProcess(*v42, &v95);
    updated = VIDMM_GLOBAL::UncommitVirtualAddressRangeSystemCommand(v43, a2, v44);
    v46 = &v95;
LABEL_93:
    inited = updated;
    KeUnstackDetachProcess(v46);
    goto LABEL_149;
  }
  if ( (_DWORD)v14 == 108 )
  {
    v15 = VIDMM_GLOBAL::ValidateApertureUnmapToDummyPage((VIDMM_GLOBAL *)v8);
    goto LABEL_19;
  }
  if ( (_DWORD)v14 == 101 )
  {
    v31 = 0;
    if ( *(_DWORD *)(v8 + 3704) )
    {
      do
      {
        v32 = *(_QWORD *)(*(_QWORD *)(v8 + 3712) + 8LL * v31);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 152LL))(v32);
        ++v31;
      }
      while ( v31 < *(_DWORD *)(v8 + 3704) );
      LODWORD(v12) = *(_DWORD *)(v8 + 7000);
    }
    v33 = 0LL;
    v34 = 0;
    if ( (_DWORD)v12 )
    {
      do
      {
        v35 = *(_QWORD *)(v8 + 40216) + 1584LL * v34;
        v36 = *(_BYTE *)(v35 + 436);
        if ( (v36 & 0x10) != 0 )
        {
          v33 |= 1LL << v34;
          *(_BYTE *)(v35 + 436) = v36 & 0xEF;
        }
        ++v34;
      }
      while ( v34 < *(_DWORD *)(v8 + 7000) );
    }
    VIDMM_GLOBAL::RecommitGpuVirtualAddresses((VIDMM_GLOBAL *)v8, v33);
    goto LABEL_149;
  }
  if ( (_DWORD)v14 != 102 )
  {
    switch ( (_DWORD)v14 )
    {
      case 'g':
        VIDMM_GLOBAL::CleanupPrimaryAllocation(0LL, *((struct _VIDMM_GLOBAL_ALLOC **)a2 + 5));
        goto LABEL_149;
      case 'h':
        v16 = *((_QWORD *)a2 + 2);
        v83 = 0;
        v91 = 0LL;
        v15 = VIDMM_GLOBAL::PageInOneAllocation(v8, v16, 4LL, 0LL, &v83, &v91, 0, -1LL);
        goto LABEL_19;
      case 'i':
        VIDMM_GLOBAL::EvictOneAllocation((VIDMM_GLOBAL *)v8, *((struct VIDMM_ALLOC **)a2 + 2), 0);
        goto LABEL_149;
    }
    this = (unsigned int)(v14 - 106);
    if ( (_DWORD)v14 == 106 )
    {
      VIDMM_GLOBAL::ReportVidMmStateWorker((VIDMM_GLOBAL *)v8);
      goto LABEL_149;
    }
    if ( (_DWORD)v14 == 107 )
    {
      v15 = VIDMM_GLOBAL::RunApertureCoherencyTest((VIDMM_GLOBAL *)v8);
LABEL_19:
      inited = v15;
      goto LABEL_149;
    }
LABEL_134:
    v61 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, v12);
    v61[3] = 270LL;
    v61[4] = 23LL;
    v61[5] = -1073741811LL;
    v61[6] = v14;
    v61[7] = 0LL;
    WdLogEvent5_WdCriticalError(v61);
    goto LABEL_149;
  }
  v17 = 0;
  v18 = *((_DWORD *)a2 + 10);
  if ( !*(_DWORD *)(v8 + 3704) )
    goto LABEL_61;
  do
  {
    v19 = *(_QWORD *)(*(_QWORD *)(v8 + 3712) + 8LL * v17);
    v20 = *(_DWORD *)(v19 + 80);
    if ( (v20 & 0x1001) != 0
      || *(_DWORD *)(v8 + 40176) == -1
      || (v18 & 0x40) != 0 && *(_QWORD *)(v19 + 232) > (unsigned __int64)qword_1C00504A8 )
    {
      v21 = 1;
      if ( (v20 & 0x1001) != 0 )
        goto LABEL_34;
    }
    else
    {
      v21 = 0;
    }
    if ( *(_DWORD *)(v8 + 40176) != -1 && *(_QWORD *)(v19 + 232) <= (unsigned __int64)qword_1C00504A8 )
    {
      v22 = 0;
      goto LABEL_35;
    }
LABEL_34:
    v22 = 1;
LABEL_35:
    if ( ((v20 & 0x80) == 0 || (v18 & 2) == 0 || !v21)
      && ((v20 & 0x100) == 0 || (v18 & 4) == 0)
      && ((v20 & 0x1001) != 0 || (v18 & 0x10) == 0) )
    {
      if ( (v20 & 0x80) != 0 && (v18 & 0x20) != 0 && v22 )
      {
        if ( (v20 & 0x1001) == 0 )
        {
          v87 = 0LL;
          VIDMM_MEMORY_SEGMENT::PurgeCpuVisibleAllocations(v19, v18, &v87);
          **((_QWORD **)a2 + 7) += v87;
        }
      }
      else
      {
        v23 = *((_QWORD *)a2 + 6);
        v86 = 0LL;
        VIDMM_SEGMENT::PurgeContent(v19, v18, v23, &v86);
        v24 = (_QWORD *)*((_QWORD *)a2 + 7);
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 3712) + 8LL * v17) + 80LL) & 0x1001) != 0 )
          v24[1] += v86;
        else
          *v24 += v86;
        if ( (v18 & 8) == 0 )
        {
          v25 = VIDMM_SEGMENT::DriverId(*(VIDMM_SEGMENT **)(*(_QWORD *)(v8 + 3712) + 8LL * v17));
          if ( v25 == *(_DWORD *)(v26 + 56) || v25 == *(_DWORD *)(v26 + 40) )
            *(_BYTE *)(v26 + 436) |= 0x80u;
          if ( v25 == *(_DWORD *)(v26 + 64) || v25 == *(_DWORD *)(v26 + 48) )
            *(_BYTE *)(v26 + 437) |= 1u;
        }
        v27 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v8 + 3712) + 8LL * v17) + 368LL);
        if ( (_DWORD)v27 != -1 )
          (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(v8 + 40136))(*(_QWORD *)(v8 + 40144), v27, 0LL);
      }
    }
    ++v17;
  }
  while ( v17 < *(_DWORD *)(v8 + 3704) );
  v9 = 0;
LABEL_61:
  for ( j = 0; j < *(_DWORD *)(v8 + 7000); ++j )
    VIDMM_GLOBAL::EvictTemporaryAllocations((VIDMM_GLOBAL *)v8, 1u, j);
  if ( (v18 & 8) == 0 )
  {
    VIDMM_GLOBAL::PurgePageTables(v8, v18);
    v9 = 1;
    VIDMM_GLOBAL::DoDeferredUnlock((VIDMM_GLOBAL *)v8);
  }
  if ( (v18 & 0x20) != 0 )
  {
    for ( k = 0LL; (unsigned int)k < *(_DWORD *)(v8 + 3704); k = (unsigned int)(k + 1) )
    {
      v30 = *(VIDMM_MEMORY_SEGMENT **)(*(_QWORD *)(v8 + 3712) + 8 * k);
      if ( (*((_DWORD *)v30 + 20) & 0x1001) == 0 )
        VIDMM_MEMORY_SEGMENT::ValidateFrameBufferRotation(v30);
    }
  }
LABEL_149:
  v66 = (int *)*((_QWORD *)a2 + 4);
  v67 = 0;
  if ( v66 )
    *v66 = inited;
  if ( v9 )
  {
    VIDMM_GLOBAL::EndPreparation((VIDMM_GLOBAL *)v8, 0xFFFFFFFF, 0LL, 0, 0LL, 0LL);
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle((VIDMM_GLOBAL *)v8, 0xFFFFFFFF);
    VIDMM_GLOBAL::UnmapAllPagingBuffers((VIDMM_GLOBAL *)v8);
    if ( v82 )
      VidSchSignalPagingFences(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 624LL), &v88, &v89);
    else
      KeSetEvent(*((PRKEVENT *)a2 + 1), 0, 0);
  }
  else
  {
    v68 = (struct _KEVENT *)*((_QWORD *)a2 + 1);
    v90 = v88;
    v85 = v89;
    *(_QWORD *)(v8 + 3728) = v8 + 3720;
    *(_QWORD *)(v8 + 3720) = v8 + 3720;
    if ( *(_DWORD *)(v8 + 7000) )
    {
      do
      {
        v69 = 0;
        v70 = 1584LL * v67;
        if ( *(_DWORD *)(v70 + *(_QWORD *)(v8 + 40216) + 24) )
        {
          do
          {
            v71 = *(_QWORD *)(*(_QWORD *)(v8 + 3712) + 8LL * (v69 + *(_DWORD *)(v70 + *(_QWORD *)(v8 + 40216) + 20)));
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v71 + 160LL))(v71);
            ++v69;
          }
          while ( v69 < *(_DWORD *)(v70 + *(_QWORD *)(v8 + 40216) + 24) );
        }
        VIDMM_GLOBAL::EndPreparationOnPhysicalAdapter((VIDMM_GLOBAL *)v8, v67++);
      }
      while ( v67 < *(_DWORD *)(v8 + 7000) );
    }
    v72 = (_QWORD **)(v8 + 44672);
    if ( *v72 != v72 )
    {
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle((VIDMM_GLOBAL *)v8, 0xFFFFFFFF);
      v74 = *v72;
      while ( v74 != v72 )
      {
        v75 = (_QWORD *)*v74;
        v76 = v74 - 37;
        if ( *(_QWORD **)(*v74 + 8LL) != v74 || (v77 = (_QWORD *)v74[1], (_QWORD *)*v77 != v74) )
          __fastfail(3u);
        *v77 = v75;
        v75[1] = v77;
        *v74 = 0LL;
        v74 = v75;
        if ( (*((_DWORD *)v76 + 13) & 7) != 0 )
        {
          v78 = v76[4];
          v79 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v77, v73);
          v79[7] = 0LL;
          v79[3] = 270LL;
          v79[4] = 63LL;
          v79[5] = v76;
          v79[6] = v78;
          WdLogEvent5_WdCriticalError(v79);
        }
        VIDMM_DEVICE::ResumeSchedulerDevice((VIDMM_DEVICE *)v76);
      }
    }
    if ( *(_BYTE *)(v8 + 44688) )
    {
      VidSchiResumeFlipQueues(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 624LL), 0xFFFFFFFFLL);
      *(_BYTE *)(v8 + 44688) = 0;
    }
    if ( v82 )
    {
      VidSchSignalPagingFences(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 624LL), &v90, &v85);
      v80 = *(_DWORD *)(v8 + 7000);
      if ( v80 > 1 )
        VidSchWaitForPagingFence(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 624LL), v90, v85, (unsigned int)((1 << v80) - 1));
    }
    else if ( v68 )
    {
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle((VIDMM_GLOBAL *)v8, 0xFFFFFFFF);
      KeSetEvent(v68, 0, 0);
    }
    *(_QWORD *)(v8 + 7024) = 0LL;
    *(_QWORD *)(v8 + 7032) = 0LL;
    *(_DWORD *)(v8 + 8) = 0;
  }
  return (unsigned int)inited;
}
