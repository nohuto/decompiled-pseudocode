/*
 * XREFs of ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0075620
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C008B830 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?ProcessPendingTerminations@VIDMM_WORKER_THREAD@@AEAAX_NPEA_N1@Z @ 0x1C00BA6F8 (-ProcessPendingTerminations@VIDMM_WORKER_THREAD@@AEAAX_NPEA_N1@Z.c)
 *     ?SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00BA7C4 (-SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_.c)
 * Callees:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C00069E0 (VidSchSignalSyncObjectsFromGpu.c)
 *     ?InsertToPenaltyBox@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@W4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C001145C (-InsertToPenaltyBox@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@W4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0011A88 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C0011B94 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     ?NotifyDeferredDestructionComplete@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C00120F4 (-NotifyDeferredDestructionComplete@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0012350 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00123C8 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0012DD8 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     VidSchMarkDeviceAsError @ 0x1C0015BD0 (VidSchMarkDeviceAsError.c)
 *     __security_check_cookie @ 0x1C0017740 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00182E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0023D70 (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024BB4 (McTemplateK0q_EtwWriteTransfer.c)
 *     VidSchCancelDeviceCommand @ 0x1C00337D4 (VidSchCancelDeviceCommand.c)
 *     VidSchSignalSyncObjectsFromCpu @ 0x1C0035530 (VidSchSignalSyncObjectsFromCpu.c)
 *     ?SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C0069D64 (-SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1C0069D8C (-SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C006C2D4 (-CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C006C4D4 (-BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C006D0E0 (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1C006DFD8 (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C006E060 (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z @ 0x1C006E190 (-NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z.c)
 *     ?FindNewAllocOwner@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006F9F8 (-FindNewAllocOwner@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006FBAC (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?NotifyAllocationEvicted@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00708C0 (-NotifyAllocationEvicted@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0071CF8 (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 *     ?LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z @ 0x1C0075270 (-LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0077180 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C0077E50 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C007F608 (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0082B34 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C0083084 (-ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?ResumePagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00830AC (-ResumePagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z @ 0x1C0084520 (-VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z.c)
 *     ?VerifyPreferredSegmentIsSubset@VIDMM_GLOBAL@@IEAAEU_D3DDDI_SEGMENTPREFERENCE@@K@Z @ 0x1C0084BF0 (-VerifyPreferredSegmentIsSubset@VIDMM_GLOBAL@@IEAAEU_D3DDDI_SEGMENTPREFERENCE@@K@Z.c)
 *     ?GetMostPreferredSegment@VIDMM_GLOBAL@@IEAAPEAVVIDMM_SEGMENT@@KU_D3DDDI_SEGMENTPREFERENCE@@PEA_N@Z @ 0x1C0084D24 (-GetMostPreferredSegment@VIDMM_GLOBAL@@IEAAPEAVVIDMM_SEGMENT@@KU_D3DDDI_SEGMENTPREFERENCE@@PEA_N.c)
 *     ?EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0085B54 (-EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?TransferAllocationOwnership@VIDMM_GLOBAL@@IEAA_NPEAUVIDMM_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@1@Z @ 0x1C0085BD4 (-TransferAllocationOwnership@VIDMM_GLOBAL@@IEAA_NPEAUVIDMM_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@1@Z.c)
 *     ?NeedsApertureForLock@VIDMM_GLOBAL@@IEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0087128 (-NeedsApertureForLock@VIDMM_GLOBAL@@IEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictTemporaryResourceForCleanup@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0087238 (-EvictTemporaryResourceForCleanup@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_A.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C008754C (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?CalculateLockData@VIDMM_GLOBAL@@IEAA?AUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@@Z @ 0x1C0088334 (-CalculateLockData@VIDMM_GLOBAL@@IEAA-AUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@@Z.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C008A328 (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z @ 0x1C008A48C (-InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z.c)
 *     ?EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C008A758 (-EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00AF8A8 (-DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00B0738 (-EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?EvictFromFaultedList@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@@Z @ 0x1C00B083C (-EvictFromFaultedList@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@@Z.c)
 *     ?PageInFromFaultedList@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@@Z @ 0x1C00B2DEC (-PageInFromFaultedList@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@@Z.c)
 *     ?RecommitTrimmedList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00B3CC0 (-RecommitTrimmedList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B3F48 (-RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z @ 0x1C00B3F78 (-RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_PROCESS_.c)
 *     ?TransferAllocationDecommit@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@1@Z @ 0x1C00B4FA8 (-TransferAllocationDecommit@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@.c)
 *     ?UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z @ 0x1C00B5750 (-UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z.c)
 *     ?UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z @ 0x1C00B58E0 (-UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00B5E48 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 *     ?SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00BA968 (-SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     VidSchiResumeFlipQueues @ 0x1C00D12C0 (VidSchiResumeFlipQueues.c)
 *     VidSchWaitForPagingFence @ 0x1C00D3F20 (VidSchWaitForPagingFence.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ProcessDeferredCommand(
        VIDMM_GLOBAL *this,
        struct _VIDMM_DEFERRED_COMMAND *a2,
        bool *a3,
        char a4,
        unsigned __int64 a5,
        struct _VIDSCH_SYNC_OBJECT *a6,
        bool a7,
        struct VIDMM_ALLOC **a8)
{
  __int64 *v9; // r13
  __int64 v10; // r14
  struct _VIDMM_GLOBAL_ALLOC ***v11; // r15
  __int64 v12; // r12
  __int64 v13; // rbx
  __int64 v14; // rdi
  _QWORD *v15; // rax
  bool v16; // zf
  unsigned int v17; // edi
  __int64 v18; // rbx
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  char v22; // r11
  struct _VIDMM_DEFERRED_COMMAND *v23; // r10
  int v24; // edx
  int inited; // ebx
  struct _VIDMM_DEFERRED_COMMAND *v26; // r13
  __int64 v27; // rbx
  unsigned __int64 v28; // rdx
  char v29; // di
  VIDMM_DEVICE **v30; // rcx
  VIDMM_GLOBAL *v31; // rcx
  VIDMM_GLOBAL *v32; // rcx
  __int64 v33; // rbx
  _QWORD *v34; // rax
  int v35; // eax
  _QWORD *v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // r8
  int v42; // r9d
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // rbx
  VIDMM_DEVICE *v46; // rdx
  VIDMM_GLOBAL *v47; // rcx
  VIDMM_DEVICE *v48; // r8
  int v49; // eax
  __int64 v50; // rax
  int v51; // eax
  int v52; // r9d
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rcx
  struct _VIDMM_LOCAL_ALLOC *NewAllocOwner; // r13
  char v57; // di
  __int64 v58; // r9
  struct _VIDMM_GLOBAL_ALLOC ***v59; // rax
  char v60; // al
  struct _VIDMM_LOCAL_ALLOC *v61; // rbx
  __int64 v62; // rax
  bool v63; // al
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rbx
  _QWORD *v68; // rax
  int v69; // eax
  __int64 v70; // rax
  int v71; // eax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rcx
  __int64 v76; // r8
  int v77; // r9d
  __int64 *v78; // rdi
  struct _VIDMM_LOCAL_ALLOC *v79; // r12
  VIDMM_GLOBAL *v80; // rcx
  __int64 v81; // rdx
  __int64 v82; // rax
  __int64 **v83; // rcx
  VIDMM_GLOBAL *v84; // rcx
  __int64 v85; // rcx
  __int64 v86; // r8
  int v87; // r9d
  __int64 *v88; // r14
  __int64 v89; // rax
  __int64 **v90; // rcx
  __int64 v91; // rcx
  __int64 v92; // rcx
  unsigned int v93; // ecx
  int v94; // edx
  __int64 v95; // rax
  int v96; // eax
  struct _VIDMM_GLOBAL_ALLOC *v97; // rbx
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // rax
  unsigned int updated; // eax
  struct _KEVENT *v102; // rcx
  unsigned int v103; // eax
  _QWORD **v104; // r12
  _QWORD *i; // r14
  _QWORD *j; // rbx
  __int64 v107; // rdi
  VIDMM_GLOBAL *v108; // rcx
  int v109; // eax
  PRKPROCESS *v110; // rcx
  struct VIDMM_ALLOC **v111; // r12
  bool *v112; // r14
  unsigned int v113; // edx
  __int64 v114; // rbx
  struct _D3DDDI_SEGMENTPREFERENCE v115; // edi
  __int64 v116; // r13
  int v117; // ecx
  int v118; // eax
  unsigned __int8 v119; // r12
  __int64 v120; // rcx
  unsigned int v121; // r8d
  unsigned int v122; // r9d
  int v123; // eax
  int v124; // r9d
  int v125; // ebx
  int v126; // eax
  char v127; // dl
  __int64 v128; // r8
  __int64 v129; // r10
  char v130; // bl
  __int64 v131; // r9
  __int64 v132; // r8
  int v133; // eax
  char v134; // r9
  unsigned __int64 v135; // rcx
  unsigned __int64 v136; // rbx
  int v137; // eax
  __int64 v138; // rdx
  __int64 v139; // rcx
  __int64 v140; // r8
  __int64 v141; // rax
  struct VIDMM_SEGMENT *MostPreferredSegment; // rax
  __int64 v143; // rdx
  __int64 v144; // rcx
  __int64 v145; // rax
  __int64 v146; // r13
  __int64 v147; // r12
  __int64 v148; // r8
  unsigned int v149; // r9d
  __int64 v150; // rdx
  __int64 v151; // rcx
  __int64 v152; // rcx
  struct _VIDMM_GLOBAL_ALLOC *v153; // rbx
  char v154; // di
  _QWORD *v155; // rax
  int *v156; // rax
  unsigned int v157; // r12d
  unsigned int v158; // ebx
  __int64 v159; // r14
  __int64 v160; // rcx
  _QWORD **v161; // r12
  __int64 v162; // rdx
  _QWORD *v163; // rdi
  _QWORD *v164; // rax
  _QWORD *v165; // r14
  _QWORD *v166; // rcx
  __int64 v167; // rbx
  _QWORD *v168; // rax
  __int64 v169; // r8
  _QWORD *v170; // r9
  _QWORD *v171; // rdx
  __int64 v172; // rcx
  unsigned int v173; // eax
  __int64 result; // rax
  int v175; // [rsp+20h] [rbp-E0h]
  unsigned int v176; // [rsp+40h] [rbp-C0h]
  bool v177; // [rsp+44h] [rbp-BCh]
  bool v178; // [rsp+44h] [rbp-BCh]
  bool v181; // [rsp+54h] [rbp-ACh]
  unsigned int v182; // [rsp+54h] [rbp-ACh]
  struct _VIDMM_LOCAL_ALLOC *v184; // [rsp+60h] [rbp-A0h]
  unsigned int v185; // [rsp+60h] [rbp-A0h]
  bool v186; // [rsp+70h] [rbp-90h] BYREF
  int v187; // [rsp+74h] [rbp-8Ch]
  int v188; // [rsp+78h] [rbp-88h]
  int v189; // [rsp+7Ch] [rbp-84h] BYREF
  unsigned __int64 v190; // [rsp+80h] [rbp-80h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v191; // [rsp+88h] [rbp-78h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+90h] [rbp-70h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v193; // [rsp+98h] [rbp-68h]
  char v194[8]; // [rsp+A0h] [rbp-60h] BYREF
  DXGPUSHLOCK *v195; // [rsp+A8h] [rbp-58h]
  int v196; // [rsp+B0h] [rbp-50h]
  char v197[8]; // [rsp+B8h] [rbp-48h] BYREF
  DXGPUSHLOCK *v198; // [rsp+C0h] [rbp-40h]
  int v199; // [rsp+C8h] [rbp-38h]
  char v200[8]; // [rsp+D0h] [rbp-30h] BYREF
  DXGPUSHLOCK *v201; // [rsp+D8h] [rbp-28h]
  int v202; // [rsp+E0h] [rbp-20h]
  char v203[8]; // [rsp+E8h] [rbp-18h] BYREF
  DXGPUSHLOCK *v204; // [rsp+F0h] [rbp-10h]
  int v205; // [rsp+F8h] [rbp-8h]
  char v206[16]; // [rsp+100h] [rbp+0h] BYREF
  _OWORD v207[2]; // [rsp+110h] [rbp+10h] BYREF
  __int128 v208; // [rsp+130h] [rbp+30h]
  __int128 v209; // [rsp+140h] [rbp+40h]
  __int128 v210; // [rsp+150h] [rbp+50h]
  __int128 v211; // [rsp+160h] [rbp+60h]
  __int128 v212; // [rsp+170h] [rbp+70h]
  __int128 v213; // [rsp+180h] [rbp+80h]
  __int64 v214; // [rsp+190h] [rbp+90h]
  struct _KAPC_STATE ApcState; // [rsp+1A0h] [rbp+A0h] BYREF

  v193 = a6;
  v9 = 0LL;
  v10 = 0LL;
  *a8 = 0LL;
  v11 = (struct _VIDMM_GLOBAL_ALLOC ***)*((_QWORD *)a2 + 2);
  v184 = 0LL;
  v181 = 0;
  if ( v11 )
  {
    v9 = (__int64 *)*v11;
    v10 = (__int64)**v11;
    v184 = *(struct _VIDMM_LOCAL_ALLOC **)(v10 + 96);
    v181 = (*(_DWORD *)(v10 + 76) & 0x20000000) != 0;
  }
  v12 = *((_QWORD *)a2 + 1);
  v177 = 0;
  v176 = 0;
  if ( !v12 )
    v12 = (__int64)v11[1];
  *a3 = 0;
  v13 = *((int *)this + 2);
  v14 = *(int *)a2;
  if ( (_DWORD)v13 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdCriticalError(0LL, a2);
    v15[3] = 270LL;
    v15[4] = 64LL;
    v15[5] = this;
    v15[6] = v13;
    v15[7] = v14;
    WdLogEvent5_WdCriticalError(v15);
  }
  ++*((_QWORD *)this + 576);
  v16 = *((_DWORD *)this + 1750) == 0;
  *((_DWORD *)this + 2) = v14;
  v17 = 0;
  *((_DWORD *)this + 12) = -1;
  *((_QWORD *)this + 878) = v12;
  *((_QWORD *)this + 879) = v11;
  if ( !v16 )
  {
    do
    {
      v18 = v17;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0p_EtwWriteTransfer(0LL, &EventPagingStartPreparation, (__int64)a3, *((_QWORD *)this + v17 + 143));
      if ( *((_DWORD *)this + v17 + 414) != *((_DWORD *)this + v17 + 478)
        || *((_DWORD *)this + v17 + 542) != *((_DWORD *)this + v17 + 606) )
      {
        v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError(0LL, a2);
        v19[3] = 270LL;
        v19[4] = 33LL;
        v19[5] = this;
        v19[6] = 0LL;
        v19[7] = 0LL;
        WdLogEvent5_WdCriticalError(v19);
      }
      ++v17;
      *((_DWORD *)this + v18 + 1024) = *((_DWORD *)this + v18 + 414);
      *((_DWORD *)this + v18 + 1088) = *((_DWORD *)this + v18 + 542);
      *((_DWORD *)this + v18 + 960) = 0;
    }
    while ( v17 < *((_DWORD *)this + 1750) );
  }
  v20 = *(_QWORD *)(v12 + 32);
  v21 = -1LL;
  v22 = 1;
  if ( *(_BYTE *)(v20 + 204)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v20 + 200), 0, 0)
    || *(_BYTE *)(*((_QWORD *)this + 3) + 2646LL)
    || *(_BYTE *)(*((_QWORD *)this + 2) + 889LL) )
  {
    v23 = a2;
    *((_DWORD *)a2 + 19) = -1071775232;
    *((_BYTE *)a2 + 72) = 1;
    goto LABEL_21;
  }
  v23 = a2;
  if ( *((_BYTE *)a2 + 72) )
  {
LABEL_21:
    v20 = *(unsigned int *)v23;
    if ( (unsigned int)(v20 - 203) <= 0xB )
    {
      v24 = 2281;
      if ( _bittest(&v24, v20 - 203) )
      {
        inited = *((_DWORD *)v23 + 19);
        v176 = inited;
LABEL_24:
        v26 = a2;
        goto LABEL_279;
      }
    }
    if ( (_DWORD)v20 == 113 )
      *((_BYTE *)v23 + 64) = 0;
  }
  v27 = *(int *)v23;
  v28 = 0x1C0000000uLL;
  switch ( (int)v27 )
  {
    case 113:
      updated = VIDMM_GLOBAL::CommitVirtualAddressRangeSystemCommand(
                  (VIDMM_GLOBAL *)v20,
                  (struct _VIDMM_DEFERRED_COMMAND *)((char *)v23 + 32),
                  a8);
      goto LABEL_184;
    case 119:
      updated = VIDMM_GLOBAL::UpdateGpuVirtualAddressSystemCommand(this, *((PVOID *)v23 + 4), a8);
LABEL_184:
      v176 = updated;
      inited = updated;
      if ( updated != -1073741267 )
        goto LABEL_24;
      *a3 = 1;
      goto LABEL_186;
    case 200:
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v20) + 24) = v11;
      if ( *((_DWORD *)v11 + 26) || *((_DWORD *)v11 + 39) )
      {
        v33 = *((int *)v11 + 26);
        v34 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v28);
        v34[3] = 270LL;
        v34[4] = 42LL;
        v34[5] = this;
        v34[6] = v11;
        v34[7] = v33;
        WdLogEvent5_WdCriticalError(v34);
      }
      v35 = *((_DWORD *)v11 + 7) & 3;
      if ( v35 == 2 )
      {
        VIDMM_GLOBAL::NotifyAllocationEviction(this, (VIDMM_DEVICE **)v11, 0, 0LL, 0LL);
      }
      else if ( v35 == 1 )
      {
        v28 = (unsigned __int64)v11[7];
        v36 = v11 + 7;
        if ( *(struct _VIDMM_GLOBAL_ALLOC ****)(v28 + 8) != v11 + 7 )
          goto LABEL_307;
        v20 = (__int64)v11[8];
        if ( *(_QWORD **)v20 != v36 )
          goto LABEL_307;
        *(_QWORD *)v20 = v28;
        *(_QWORD *)(v28 + 8) = v20;
        *((_DWORD *)v11 + 7) &= 0xFFFFFFFC;
        v11[8] = 0LL;
        *v36 = 0LL;
      }
      if ( (*((_BYTE *)v11 + 25) & 1) != 0 )
        VIDMM_GLOBAL::UnpinOneAllocation(this, v11, 3LL);
      if ( (*((_DWORD *)v11 + 7) & 0x10) != 0 && g_IsInternalRelease )
      {
        v37 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v28);
        v37[3] = 270LL;
        v37[4] = 9LL;
        v37[5] = 0LL;
        v37[6] = 0LL;
        v37[7] = 0LL;
        WdLogEvent5_WdCriticalError(v37);
      }
      if ( v11 == *(struct _VIDMM_GLOBAL_ALLOC ****)(v12 + 248) )
        *(_QWORD *)(v12 + 248) = 0LL;
      v38 = *(_QWORD *)(v12 + 16) + 360LL;
      if ( *(_QWORD *)(v12 + 16) != -360LL
        && *(struct _KTHREAD **)(*(_QWORD *)(v12 + 16) + 368LL) == KeGetCurrentThread() )
      {
        v39 = WdLogNewEntry5_WdAssertion(v20, v28, v21);
        *(_QWORD *)(v39 + 24) = 1571LL;
        WdLogEvent5_WdAssertion(v39);
      }
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v38, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v42 = *(_DWORD *)(v38 + 24);
          if ( v42 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q_EtwWriteTransfer(v40, &EventBlockThread, v41, v42);
        }
        ExAcquirePushLockExclusiveEx(v38, 0LL);
      }
      *(_QWORD *)(v38 + 8) = KeGetCurrentThread();
      if ( *((_BYTE *)v11 + 25) & 1 | *((_DWORD *)v11 + 38) )
      {
        VIDMM_PROCESS_ADAPTER_INFO::BeginMemoryUsageChange(*(VIDMM_PROCESS_ADAPTER_INFO **)(v12 + 16));
        VIDMM_DEVICE::NotifyAllocationEvicted((VIDMM_DEVICE ***)v12, (struct VIDMM_ALLOC *)v11);
        VIDMM_PROCESS_ADAPTER_INFO::CommitMemoryUsageChange(*(VIDMM_PROCESS_ADAPTER_INFO **)(v12 + 16), v43, v44);
      }
      *((_DWORD *)v11 + 38) = 0;
      *(_QWORD *)(v38 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v38, 0LL);
      KeLeaveCriticalRegion();
      v45 = *(_QWORD *)(v10 + 312);
      KeEnterCriticalRegion();
      if ( *(struct _KTHREAD **)(v45 + 16) == KeGetCurrentThread() )
      {
        v49 = *(_DWORD *)(v45 + 24);
        if ( v49 <= 0 )
        {
          v50 = WdLogNewEntry5_WdAssertion(v47, v46, v48);
          *(_QWORD *)(v50 + 24) = 661LL;
          WdLogEvent5_WdAssertion(v50);
          v49 = *(_DWORD *)(v45 + 24);
        }
        v51 = v49 + 1;
      }
      else
      {
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v45, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v52 = *(_DWORD *)(v45 + 28);
            if ( v52 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q_EtwWriteTransfer((__int64)v47, &EventBlockThread, (__int64)v48, v52);
          }
          _InterlockedIncrement64((volatile signed __int64 *)(v45 + 8));
          ExAcquirePushLockExclusiveEx(v45, 0LL);
        }
        if ( *(_QWORD *)(v45 + 16) )
        {
          v53 = WdLogNewEntry5_WdAssertion(v47, v46, v48);
          *(_QWORD *)(v53 + 24) = 685LL;
          WdLogEvent5_WdAssertion(v53);
        }
        if ( *(_DWORD *)(v45 + 24) )
        {
          v54 = WdLogNewEntry5_WdAssertion(v47, v46, v48);
          *(_QWORD *)(v54 + 24) = 686LL;
          WdLogEvent5_WdAssertion(v54);
        }
        *(_QWORD *)(v45 + 16) = KeGetCurrentThread();
        v51 = 1;
      }
      *(_DWORD *)(v45 + 24) = v51;
      if ( *((int *)v11[12] + 2) > 0 )
      {
        v55 = *(_QWORD *)(v12 + 32);
        v208 = 0LL;
        DWORD2(v208) = 3;
        v209 = (unsigned __int64)v11;
        memset(v207, 0, sizeof(v207));
        v214 = 0LL;
        v210 = 0LL;
        v211 = 0LL;
        v212 = 0LL;
        v213 = 0LL;
        VidSchCancelDeviceCommand(v55, (__int64)v207, 1, 0);
      }
      NewAllocOwner = 0LL;
      v57 = 0;
      if ( (**(_DWORD **)(v10 + 496) & 0x20000000) == 0 )
      {
        v61 = v184;
        v177 = 1;
LABEL_95:
        v57 = 1;
        if ( (*(_BYTE *)(v10 + 84) & 0xC0) == 0xC0 )
          VIDMM_GLOBAL::TransferAllocationDecommit(v47, (struct _VIDMM_GLOBAL_ALLOC *)v10, v61, NewAllocOwner);
        goto LABEL_97;
      }
      v46 = (VIDMM_DEVICE *)*v11;
      v47 = (*v11)[5];
      v58 = (__int64)(*v11 + 5);
      v48 = (VIDMM_DEVICE *)*v11;
      if ( v47 == (VIDMM_GLOBAL *)v58 )
      {
LABEL_86:
        v60 = 1;
      }
      else
      {
        while ( 1 )
        {
          v59 = (struct _VIDMM_GLOBAL_ALLOC ***)((char *)v47 - 40);
          v47 = *(VIDMM_GLOBAL **)v47;
          if ( v59 != v11 && (*((_DWORD *)v59 + 7) & 4) == 0 )
            break;
          v48 = (VIDMM_DEVICE *)*v11;
          if ( v47 == (VIDMM_GLOBAL *)v58 )
            goto LABEL_86;
        }
        v60 = 0;
      }
      if ( v60 )
      {
        v61 = v184;
        if ( v48 != v184 )
        {
          *((_BYTE *)v46 + 32) |= 2u;
          goto LABEL_97;
        }
        v62 = WdLogNewEntry5_WdEvent(v47, v46);
        *(_QWORD *)(v62 + 24) = v10;
        *(_QWORD *)(v62 + 32) = v11;
        WdLogEvent5_WdEvent(v62);
        *((_BYTE *)v184 + 32) |= 2u;
        NewAllocOwner = VIDMM_GLOBAL::FindNewAllocOwner(this, (struct _VIDMM_GLOBAL_ALLOC *)v10);
        VIDMM_GLOBAL::EvictTemporaryResourceForCleanup(this, (struct _VIDMM_GLOBAL_ALLOC *)v10, v184);
        v63 = VIDMM_GLOBAL::TransferAllocationOwnership(this, (struct VIDMM_ALLOC *)v11, v184, NewAllocOwner);
        v65 = *(unsigned int *)(v10 + 84);
        v177 = !v63;
        if ( (v65 & 4) != 0 )
          NewAllocOwner = *(struct _VIDMM_LOCAL_ALLOC **)(v10 + 96);
        v66 = WdLogNewEntry5_WdEvent(v65, v64);
        *(_QWORD *)(v66 + 24) = *(_QWORD *)(v10 + 96);
        WdLogEvent5_WdEvent(v66);
        goto LABEL_95;
      }
LABEL_97:
      v67 = *(_QWORD *)(v10 + 312);
      if ( *(struct _KTHREAD **)(v67 + 16) != KeGetCurrentThread() )
      {
        v68 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v47, v46);
        v68[4] = 4LL;
        v68[3] = 275LL;
        v68[5] = v67;
        v68[6] = 0LL;
        v68[7] = 0LL;
        WdLogEvent5_WdCriticalError(v68);
      }
      v69 = *(_DWORD *)(v67 + 24);
      if ( v69 <= 0 )
      {
        v70 = WdLogNewEntry5_WdAssertion(v47, v46, v48);
        *(_QWORD *)(v70 + 24) = 705LL;
        WdLogEvent5_WdAssertion(v70);
        v69 = *(_DWORD *)(v67 + 24);
      }
      v71 = v69 - 1;
      *(_DWORD *)(v67 + 24) = v71;
      if ( !v71 )
      {
        *(_QWORD *)(v67 + 16) = 0LL;
        ExReleasePushLockExclusiveEx(v67, 0LL);
      }
      KeLeaveCriticalRegion();
      if ( v57 )
      {
        if ( this != (VIDMM_GLOBAL *)-39968LL && *((struct _KTHREAD **)this + 4997) == KeGetCurrentThread() )
        {
          v74 = WdLogNewEntry5_WdAssertion(v73, v72, v21);
          *(_QWORD *)(v74 + 24) = 1571LL;
          WdLogEvent5_WdAssertion(v74);
        }
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 39968, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v77 = *((_DWORD *)this + 9998);
            if ( v77 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q_EtwWriteTransfer(v75, &EventBlockThread, v76, v77);
          }
          ExAcquirePushLockExclusiveEx((char *)this + 39968, 0LL);
        }
        v78 = (__int64 *)(v10 + 408);
        v79 = v184;
        *((_QWORD *)this + 4997) = KeGetCurrentThread();
        if ( *(_QWORD *)(v10 + 408) )
        {
          v80 = (VIDMM_GLOBAL *)*(unsigned int *)(*((_QWORD *)this + 3) + 232LL);
          VIDMM_GLOBAL::RemoveAllocationFromDecommitList(
            v80,
            (struct _VIDMM_GLOBAL_ALLOC *)v10,
            *(struct VIDMM_PROCESS_ADAPTER_INFO **)(*(_QWORD *)(*((_QWORD *)v184 + 1) + 16LL) + 8LL * (_QWORD)v80));
          if ( NewAllocOwner )
          {
            v81 = *(unsigned int *)(*((_QWORD *)this + 3) + 232LL);
            v82 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)NewAllocOwner + 1) + 16LL) + 8 * v81) + 424LL;
            v83 = *(__int64 ***)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)NewAllocOwner + 1) + 16LL) + 8 * v81) + 432LL);
            if ( *v83 != (__int64 *)v82 )
              goto LABEL_307;
            *v78 = v82;
            *(_QWORD *)(v10 + 416) = v83;
            *v83 = v78;
            *(_QWORD *)(v82 + 8) = v78;
          }
        }
        *((_QWORD *)this + 4997) = 0LL;
        ExReleasePushLockExclusiveEx((char *)this + 39968, 0LL);
        KeLeaveCriticalRegion();
      }
      else
      {
        v79 = v184;
      }
      if ( v177 && !v181 )
      {
        v84 = *(VIDMM_GLOBAL **)(v10 + 128);
        if ( v84 )
        {
          if ( g_IsInternalReleaseOrDbg )
          {
            WdLogNewEntry5_WdTrace(v84);
            v84 = *(VIDMM_GLOBAL **)(v10 + 128);
          }
          LOBYTE(v175) = 1;
          (*(void (__fastcall **)(VIDMM_GLOBAL *, __int64, _QWORD, _QWORD, int, struct _VIDMM_LOCAL_ALLOC *))(*(_QWORD *)v84 + 48LL))(
            v84,
            v10,
            0LL,
            0LL,
            v175,
            v79);
          VIDMM_GLOBAL::FlushPagingBufferInternal(this, *(_DWORD *)(v10 + 76) & 0x3F, 0, 0LL, 0LL, 0, 0);
        }
        if ( *(_QWORD *)(v10 + 256) )
          VIDMM_GLOBAL::EvictTemporaryAllocation(v84, (struct _VIDMM_GLOBAL_ALLOC *)v10);
        if ( (*(_DWORD *)(v10 + 84) & 2) != 0 )
        {
          VIDMM_SEGMENT::UnlockAllocationBackingStore(this, (struct _VIDMM_GLOBAL_ALLOC *)v10, v79);
          VIDMM_GLOBAL::ReturnPinnedBackingStore(this, *(_QWORD *)(v10 + 8));
          *(_DWORD *)(v10 + 84) &= ~2u;
        }
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 39968, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v87 = *((_DWORD *)this + 9998);
            if ( v87 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q_EtwWriteTransfer(v85, &EventBlockThread, v86, v87);
          }
          ExAcquirePushLockExclusiveEx((char *)this + 39968, 0LL);
        }
        v88 = (__int64 *)(v10 + 392);
        *((_QWORD *)this + 4997) = KeGetCurrentThread();
        v89 = *v88;
        if ( *v88 )
        {
          if ( *(__int64 **)(v89 + 8) != v88 )
            goto LABEL_307;
          v90 = (__int64 **)v88[1];
          if ( *v90 != v88 )
            goto LABEL_307;
          *v90 = (__int64 *)v89;
          *(_QWORD *)(v89 + 8) = v90;
          *v88 = 0LL;
        }
        *((_QWORD *)this + 4997) = 0LL;
        ExReleasePushLockExclusiveEx((char *)this + 39968, 0LL);
        KeLeaveCriticalRegion();
      }
      *((_DWORD *)v11 + 7) |= 4u;
      v20 = (__int64)v11[24];
      if ( v20 && _InterlockedExchangeAdd((volatile signed __int32 *)(v20 + 32), 0xFFFFFFFF) == 1 )
        ADAPTER_RENDER::NotifyDeferredDestructionComplete(
          *((ADAPTER_RENDER **)this + 2),
          (struct DXGTERMINATIONTRACKER *)v11[24]);
LABEL_277:
      v26 = a2;
LABEL_278:
      inited = v176;
LABEL_279:
      if ( *a3 )
      {
LABEL_186:
        VIDMM_GLOBAL::EndPreparation(this, 0xFFFFFFFF, 0LL, 0, 0LL, 0LL);
        v26 = a2;
        goto LABEL_187;
      }
      v156 = (int *)*((_QWORD *)v26 + 3);
      if ( v156 )
        *v156 = inited;
      v191 = v193;
      v157 = 0;
      v190 = a5;
      *((_QWORD *)this + 466) = (char *)this + 3720;
      *((_QWORD *)this + 465) = (char *)this + 3720;
      if ( *((_DWORD *)this + 1750) )
      {
        do
        {
          v158 = 0;
          v159 = 1584LL * v157;
          if ( *(_DWORD *)(*((_QWORD *)this + 5027) + v159 + 24) )
          {
            do
            {
              v160 = *(_QWORD *)(*((_QWORD *)this + 464)
                               + 8LL * (v158 + *(_DWORD *)(*((_QWORD *)this + 5027) + v159 + 20)));
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v160 + 160LL))(v160);
              ++v158;
            }
            while ( v158 < *(_DWORD *)(*((_QWORD *)this + 5027) + v159 + 24) );
          }
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0p_EtwWriteTransfer(v20, &EventPagingEndPreparation, v21, *((_QWORD *)this + v157 + 143));
          if ( *((_DWORD *)this + v157 + 414) != *((_DWORD *)this + v157 + 478)
            || *((_DWORD *)this + v157 + 542) != *((_DWORD *)this + v157 + 606) )
          {
            VIDMM_GLOBAL::FlushPagingBufferInternal(this, v157, 0, 0LL, 0LL, 0, 0);
          }
          v20 = *((_QWORD *)this + v157 + 143);
          if ( v20 )
            *(_DWORD *)(v20 + 172) = *(_DWORD *)(v20 + 168);
          ++v157;
        }
        while ( v157 < *((_DWORD *)this + 1750) );
        v26 = a2;
      }
      v161 = (_QWORD **)((char *)this + 44672);
      if ( *v161 != v161 )
      {
        VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, 0xFFFFFFFF);
        v163 = *v161;
        if ( *v161 != v161 )
        {
          while ( 1 )
          {
            v164 = (_QWORD *)*v163;
            v165 = v163 - 37;
            if ( *(_QWORD **)(*v163 + 8LL) != v163 )
              break;
            v166 = (_QWORD *)v163[1];
            if ( (_QWORD *)*v166 != v163 )
              break;
            *v166 = v164;
            v164[1] = v166;
            *v163 = 0LL;
            v163 = v164;
            if ( (*((_DWORD *)v165 + 13) & 7) != 0 )
            {
              v167 = v165[4];
              v168 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v166, v162);
              v168[6] = v167;
              v168[7] = 0LL;
              v168[3] = 270LL;
              v168[4] = 63LL;
              v168[5] = v165;
              WdLogEvent5_WdCriticalError(v168);
            }
            VIDMM_DEVICE::ResumeSchedulerDevice((VIDMM_DEVICE *)v165);
            if ( v163 == v161 )
              goto LABEL_301;
          }
LABEL_307:
          __fastfail(3u);
        }
      }
LABEL_301:
      if ( *((_BYTE *)this + 44688) )
      {
        VidSchiResumeFlipQueues(*(_QWORD *)(*((_QWORD *)this + 2) + 624LL), 0xFFFFFFFFLL);
        *((_BYTE *)this + 44688) = 0;
      }
      if ( a4 )
      {
        v169 = 0LL;
        v170 = 0LL;
        v171 = 0LL;
        v172 = *(_QWORD *)(*((_QWORD *)this + 2) + 624LL);
        v173 = 0;
        if ( *(_BYTE *)(v172 + 55) )
        {
          v171 = *(_QWORD **)(v172 + 272);
          if ( !*v171 )
          {
            VidSchSignalSyncObjectsFromCpu(1LL, &v191, 0LL, (char *)&v190);
            goto LABEL_311;
          }
          v173 = *(_DWORD *)(v172 + 68);
        }
        else
        {
          v169 = *(unsigned int *)(v172 + 68);
          v170 = *(_QWORD **)(v172 + 256);
        }
        VidSchSignalSyncObjectsFromGpu(v173, (__int64)v171, v169, v170, 1u, (__int64)&v191, 0, &v190);
LABEL_311:
        v20 = *((unsigned int *)this + 1750);
        if ( (unsigned int)v20 > 1 )
          VidSchWaitForPagingFence(
            *(_QWORD *)(*((_QWORD *)this + 2) + 624LL),
            v191,
            v190,
            (unsigned int)((1 << v20) - 1));
      }
      *((_QWORD *)this + 878) = 0LL;
      *((_QWORD *)this + 879) = 0LL;
      *((_DWORD *)this + 2) = 0;
LABEL_187:
      if ( *(_DWORD *)v26 == 200 )
      {
        v102 = (struct _KEVENT *)(*((_QWORD *)v26 + 2) + 72LL);
LABEL_320:
        KeSetEvent(v102, 0, 0);
        goto LABEL_321;
      }
      if ( !*a3 && v11 && _InterlockedExchangeAdd((volatile signed __int32 *)v11 + 40, 0xFFFFFFFF) == 1 )
      {
        if ( g_IsInternalReleaseOrDbg )
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v20) + 24) = v11;
        v102 = (struct _KEVENT *)(v11 + 21);
        goto LABEL_320;
      }
LABEL_321:
      result = v176;
      *((_DWORD *)v26 + 19) = v176;
      return result;
    case 203:
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v20) + 24) = v11;
      if ( *(_BYTE *)(v10 + 88) )
      {
        v26 = a2;
        inited = -1071775482;
        v176 = -1071775482;
      }
      else
      {
        v91 = *(unsigned int *)(*(_QWORD *)(v10 + 496) + 12LL);
        if ( !(_DWORD)v91 && (**(_DWORD **)(v10 + 496) & 0x20000) == 0 )
        {
          if ( g_IsInternalReleaseOrDbg )
            WdLogNewEntry5_WdTrace(v91);
          if ( *(_QWORD *)(v10 + 128) )
          {
            v92 = **(unsigned int **)(v10 + 496);
            if ( (v92 & 0x40000000) == 0 && ((v92 & 0x20000000) == 0 || (int)v92 >= 0) && (v92 & 0x80000) == 0 )
            {
              if ( g_IsInternalReleaseOrDbg )
                WdLogNewEntry5_WdTrace(v92);
              VIDMM_WORKER_THREAD::SuspendAccessToAllocation(
                *(VIDMM_WORKER_THREAD **)this,
                (struct _VIDMM_GLOBAL_ALLOC *)v10);
              VIDMM_GLOBAL::EvictAllocation(this, (struct VIDMM_ALLOC *)v11);
              VIDMM_GLOBAL::EvictAllReclaimedAllocation(this);
            }
          }
        }
        v93 = 4;
        v94 = **(_DWORD **)(v10 + 496);
        if ( (v94 & 0x20000) != 0 )
        {
          v26 = a2;
          v93 = *((_DWORD *)a2 + 8);
        }
        else
        {
          if ( (v94 & 0x40000000) != 0 || v94 < 0 )
            v93 = 3;
          v26 = a2;
        }
        v95 = *((_QWORD *)v26 + 5);
        if ( v95 != -1 )
        {
          *(_DWORD *)(v10 + 80) |= 0x800u;
          v95 = *((_QWORD *)v26 + 5);
        }
        v96 = VIDMM_GLOBAL::PageInOneAllocation(this, v11, v93, a7, a3, a8, *((_DWORD *)v26 + 9), v95);
        *(_DWORD *)(v10 + 80) &= ~0x800u;
        inited = v96;
        v176 = v96;
        if ( v96 >= 0 )
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v10 + 496) + 12LL));
        VIDMM_GLOBAL::RecommitTrimmedList(this);
      }
      goto LABEL_279;
    case 206:
      v97 = **v11;
      if ( !*((_DWORD *)v97 + 84) )
        goto LABEL_175;
      if ( VIDMM_GLOBAL::NeedsApertureForLock(this, **v11) && (*((_DWORD *)v97 + 19) & 0x40) == 0 )
      {
        v100 = WdLogNewEntry5_WdWarning(v99, v98);
        *(_QWORD *)(v100 + 24) = v97;
        WdLogEvent5_WdWarning(v100);
        v26 = a2;
        inited = -1073741823;
        v176 = -1073741823;
        goto LABEL_279;
      }
      v21 = -1LL;
LABEL_175:
      v20 = (unsigned __int8)(v22 & *((_BYTE *)v11 + 25));
      if ( !((unsigned int)v20 | *((_DWORD *)v11 + 38)) || *(_WORD *)(*((_QWORD *)v97 + 62) + 4LL) >= 2u )
        goto LABEL_277;
      v26 = a2;
      inited = VIDMM_GLOBAL::PageInOneAllocation(this, v11, 0LL, a7, a3, a8, 0, -1LL);
      v176 = inited;
      goto LABEL_279;
    case 207:
      if ( !*((_DWORD *)v11 + 38) && (*((_BYTE *)v11 + 25) & 1) == 0 )
        VIDMM_GLOBAL::EvictOneAllocation(
          (struct VIDMM_ALLOC **)this,
          (struct VIDMM_ALLOC *)v11,
          *((_BYTE *)v23 + 32) & 1);
      _InterlockedDecrement((volatile signed __int32 *)v11 + 41);
      goto LABEL_277;
    case 208:
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v20) + 24) = v10;
      KeEnterCriticalRegion();
      v107 = v10 + 472;
      ExAcquirePushLockExclusiveEx(v10 + 472, 0LL);
      if ( *(_QWORD *)(v10 + 256) )
      {
        VIDMM_GLOBAL::EvictTemporaryAllocation(v108, (struct _VIDMM_GLOBAL_ALLOC *)v10);
        VIDMM_GLOBAL::FlushPagingBufferInternal(this, *(_DWORD *)(v10 + 76) & 0x3F, 0, 0LL, 0LL, 0, 0);
      }
      if ( !*((_BYTE *)a2 + 52) )
      {
        *(_QWORD *)((char *)a2 + 44) = *(_QWORD *)VIDMM_GLOBAL::CalculateLockData(this, v206, v11);
        *((_BYTE *)a2 + 52) = 1;
      }
      v109 = *((_DWORD *)a2 + 11);
      if ( v109 == 4 )
      {
        v111 = a8;
        v26 = a2;
        v112 = a3;
      }
      else
      {
        v110 = (PRKPROCESS *)v9[1];
        memset(&ApcState, 0, sizeof(ApcState));
        KeStackAttachProcess(*v110, &ApcState);
        v111 = a8;
        v112 = a3;
        v26 = a2;
        v176 = VIDMM_GLOBAL::LockInternal(
                 this,
                 (struct _VIDMM_DEFERRED_COMMAND *)((char *)a2 + 44),
                 (__int64 **)v11,
                 *((void ***)a2 + 4),
                 *((_DWORD *)a2 + 10),
                 a3,
                 a8);
        KeUnstackDetachProcess(&ApcState);
        v109 = *((_DWORD *)a2 + 11);
      }
      if ( v109 == 4 )
      {
        inited = VIDMM_GLOBAL::LockInternal(
                   this,
                   (struct _VIDMM_DEFERRED_COMMAND *)((char *)a2 + 44),
                   (__int64 **)v11,
                   *((void ***)v26 + 4),
                   *((_DWORD *)v26 + 10),
                   v112,
                   v111);
        v176 = inited;
      }
      else
      {
        inited = v176;
      }
      ExReleasePushLockExclusiveEx(v107, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_279;
    case 209:
      v26 = a2;
      inited = VIDMM_GLOBAL::InitContextAllocation(this, (struct VIDMM_ALLOC *)v11, 1u, a3, a8);
      v176 = inited;
      goto LABEL_279;
    case 210:
      v20 = *((_BYTE *)v11 + 25) & 1;
      if ( !((unsigned int)v20 | *((_DWORD *)v11 + 38)) || *(_WORD *)(*(_QWORD *)(v10 + 496) + 4LL) >= 2u )
        goto LABEL_277;
      v103 = VIDMM_GLOBAL::PageInOneAllocation(this, v11, 0LL, a7, a3, a8, 0, -1LL);
      *(_DWORD *)(v10 + 80) &= ~0x40u;
      inited = v103;
      v26 = a2;
      v176 = v103;
      goto LABEL_279;
    case 211:
      v104 = (_QWORD **)(*((_QWORD *)v23 + 4) + 288LL);
      for ( i = *v104; i != v104; i = (_QWORD *)*i )
      {
        for ( j = (_QWORD *)*(i - 2); j != i - 2; j = (_QWORD *)*j )
          VIDMM_GLOBAL::EvictOneAllocation((struct VIDMM_ALLOC **)this, (struct VIDMM_ALLOC *)(j - 5), 0LL);
      }
      goto LABEL_277;
    case 212:
      VIDMM_GLOBAL::UpdateAllocationPriority(this, (struct VIDMM_ALLOC *)v11, *((_DWORD *)v23 + 8));
      goto LABEL_277;
    case 213:
      VIDMM_DEVICE::SuspendSchedulerDevice((VIDMM_DEVICE *)v12);
      VIDMM_DEVICE::SuspendPagingQueues((VIDMM_DEVICE *)v12);
      v29 = 0;
      if ( !*(_QWORD *)(v12 + 184) )
      {
        v29 = 1;
        DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v194, (struct _KTHREAD **)(*(_QWORD *)v12 + 44472LL), 0LL);
        DXGPUSHLOCK::AcquireExclusive(v195);
        v30 = *(VIDMM_DEVICE ***)v12;
        v196 = 2;
        VIDMM_GLOBAL::InsertToPenaltyBox((__int64)v30, v12, 4);
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v194);
      }
      if ( v11 )
        VIDMM_GLOBAL::FaultOneAllocation(*(VIDMM_GLOBAL **)v12, (VIDMM_DEVICE **)v11);
      else
        VIDMM_DEVICE::FaultAllAllocations((VIDMM_DEVICE *)v12);
      VIDMM_GLOBAL::EvictFromFaultedList(v31, (struct VIDMM_DEVICE *)v12);
      v176 = VIDMM_GLOBAL::PageInFromFaultedList(this, (struct VIDMM_DEVICE *)v12);
      VIDMM_DEVICE::ResumeSchedulerDevice((VIDMM_DEVICE *)v12);
      VIDMM_DEVICE::ResumePagingQueues((VIDMM_DEVICE *)v12);
      if ( v29 )
      {
        DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v197, (struct _KTHREAD **)(*(_QWORD *)v12 + 44472LL), 0LL);
        DXGPUSHLOCK::AcquireExclusive(v198);
        v199 = 2;
        VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v32, (struct _LIST_ENTRY *)(v12 + 184));
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v197);
      }
      goto LABEL_277;
    case 214:
      v113 = *(_DWORD *)(v10 + 76);
      v114 = *((_QWORD *)this + 5027);
      v115.0 = *(struct _D3DDDI_SEGMENTPREFERENCE::$F972DAF4C5B61B4C701096F96A6C826A::$59FADADC9B5649AD99C3978E94186D1F *)(v10 + 72);
      v116 = 1584LL * (v113 & 0x3F);
      v185 = v113 & 0x3F;
      v117 = *((_DWORD *)v23 + 12) >> 1;
      v118 = *((_DWORD *)v23 + 12) >> 2;
      LOBYTE(v117) = (*((_DWORD *)v23 + 12) & 2) != 0;
      LOBYTE(v118) = (*((_DWORD *)v23 + 12) & 4) != 0;
      v119 = (v113 & 0x80) != 0;
      v182 = *(_DWORD *)(v10 + 68);
      v188 = v117;
      v187 = v118;
      if ( (_BYTE)v117 )
      {
        v120 = *(_QWORD *)(v10 + 128);
        v121 = v113;
        v122 = *((_DWORD *)v23 + 9);
        v182 = v122;
        if ( v120
          && *(_DWORD *)(v10 + 120)
          && !_bittest((const int *)&v122, (unsigned __int8)(*(_BYTE *)(v120 + 20) - *(_BYTE *)(v114 + v116 + 20))) )
        {
          VIDMM_WORKER_THREAD::SuspendAccessToAllocation(
            *(VIDMM_WORKER_THREAD **)this,
            (struct _VIDMM_GLOBAL_ALLOC *)v10);
          VIDMM_GLOBAL::EvictAllocation(this, (struct VIDMM_ALLOC *)v11);
          VIDMM_GLOBAL::EvictAllReclaimedAllocation(this);
          v121 = *(_DWORD *)(v10 + 76);
          v122 = v182;
          v23 = a2;
        }
        *(_DWORD *)(v10 + 68) = v122;
        v123 = v121 ^ ((unsigned __int8)v121 ^ (unsigned __int8)(*((_BYTE *)v23 + 53) << 6)) & 0x40;
        *(_DWORD *)(v10 + 76) = v123;
        v119 = *((_BYTE *)v23 + 52);
        v113 = v123 ^ ((unsigned __int8)v123 ^ (unsigned __int8)(v119 << 7)) & 0x80;
        *(_DWORD *)(v10 + 76) = v113;
      }
      v21 = v113;
      v178 = 0;
      if ( (*((_DWORD *)v23 + 12) & 1) != 0 )
      {
        v124 = *(_DWORD *)v11[12];
        if ( (v124 & 0x8000) == 0 )
        {
          v125 = 1 << (*(_WORD *)(v114 + v116 + 28) - *(_BYTE *)(v114 + v116 + 20));
          if ( (*((_DWORD *)v23 + 11) & 1) != 0 )
          {
            LOBYTE(v126) = v113;
            if ( *(_DWORD *)(v10 + 120) )
            {
              if ( (*(_DWORD *)(*(_QWORD *)(v10 + 128) + 80LL) & 0x1000) != 0 )
              {
                VIDMM_WORKER_THREAD::SuspendAccessToAllocation(
                  *(VIDMM_WORKER_THREAD **)this,
                  (struct _VIDMM_GLOBAL_ALLOC *)v10);
                VIDMM_GLOBAL::EvictAllocation(this, (struct VIDMM_ALLOC *)v11);
                VIDMM_GLOBAL::EvictAllReclaimedAllocation(this);
                v126 = *(_DWORD *)(v10 + 76);
                v23 = a2;
              }
              else
              {
                LOBYTE(v126) = v113;
                v178 = (v124 & 0x10000) != 0;
              }
            }
            if ( (v126 & 0x40) != 0 )
              *(_DWORD *)(v10 + 68) &= ~v125;
            *(_DWORD *)v11[12] |= 0x8000u;
            v21 = *(unsigned int *)(v10 + 76);
          }
        }
      }
      v127 = v187;
      if ( (_BYTE)v187 )
      {
        v115.0 = (struct _D3DDDI_SEGMENTPREFERENCE::$F972DAF4C5B61B4C701096F96A6C826A::$59FADADC9B5649AD99C3978E94186D1F)*((_DWORD *)v23 + 10);
        v128 = 0LL;
        v129 = 0LL;
        if ( v115.0 )
        {
          if ( (*(_BYTE *)&v115.0 & 0x1F) != 0 )
          {
            v128 = *(_QWORD *)(*((_QWORD *)this + 464)
                             + 8LL
                             * ((*(_BYTE *)&v115.0 & 0x1Fu) + *(_DWORD *)(*((_QWORD *)this + 5027) + v116 + 20) - 1));
            v119 = *(_BYTE *)(v128 + 80) & 1;
          }
          if ( ((v115.Value >> 6) & 0x1F) != 0 )
            v129 = *(_QWORD *)(*((_QWORD *)this + 464)
                             + 8LL
                             * (((v115.Value >> 6) & 0x1F) + *(_DWORD *)(*((_QWORD *)this + 5027) + v116 + 20) - 1));
        }
        v130 = 0;
        if ( *(_DWORD *)(v10 + 120) )
        {
          v131 = *(_QWORD *)(v10 + 128);
          if ( v128 == v131 || v129 == v131 )
          {
            if ( *(_DWORD *)(v10 + 72) != v115.0 )
            {
              v132 = *(_QWORD *)(v10 + 96);
              if ( v132 )
              {
                if ( *(_QWORD *)(v132 + 8) )
                {
                  v130 = 1;
                  VidMmRecordAlloc(this, v10, v132, v131, *(_QWORD *)(v10 + 16), 1);
                }
              }
            }
          }
          else
          {
            VIDMM_WORKER_THREAD::SuspendAccessToAllocation(
              *(VIDMM_WORKER_THREAD **)this,
              (struct _VIDMM_GLOBAL_ALLOC *)v10);
            VIDMM_GLOBAL::EvictAllocation(this, (struct VIDMM_ALLOC *)v11);
            VIDMM_GLOBAL::EvictAllReclaimedAllocation(this);
          }
        }
        v133 = (*(_DWORD *)(v10 + 76) ^ (v119 << 10)) & 0x400;
        *(struct _D3DDDI_SEGMENTPREFERENCE *)(v10 + 72) = v115;
        *(_DWORD *)(v10 + 76) ^= v133;
        v21 = *(unsigned int *)(v10 + 76);
        if ( v130 )
        {
          VidMmRecordAlloc(this, v10, *(_QWORD *)(v10 + 96), *(_QWORD *)(v10 + 128), *(_QWORD *)(v10 + 16), 0);
          v21 = *(unsigned int *)(v10 + 76);
        }
        v127 = v187;
      }
      v26 = a2;
      if ( (*((_DWORD *)a2 + 12) & 8) != 0 )
        *(_DWORD *)(v10 + 80) ^= (*(_DWORD *)(v10 + 80) ^ (*((_DWORD *)a2 + 11) << 19)) & 0x100000;
      v134 = v188;
      v135 = (unsigned int)v21;
      v136 = (unsigned __int8)((unsigned int)v21 >> 12);
      if ( v127 && (_BYTE)v188 )
      {
        v137 = v21 ^ (v21 ^ (*((_DWORD *)a2 + 8) << 12)) & 0xF0000;
        *(_DWORD *)(v10 + 76) = v137;
        v135 = v137 ^ ((unsigned __int16)v137 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)a2 + 8) << 12)) & 0xF000u;
        *(_DWORD *)(v10 + 76) = v135;
      }
      if ( v127 != v134 )
      {
        if ( !VIDMM_GLOBAL::VerifyPreferredSegmentIsSubset(
                (VIDMM_GLOBAL *)v135,
                *(struct _D3DDDI_SEGMENTPREFERENCE *)(v10 + 72),
                v182) )
        {
          v141 = WdLogNewEntry5_WdAssertion(v139, v138, v140);
          *(_QWORD *)(v141 + 24) = 11419LL;
          WdLogEvent5_WdAssertion(v141);
          VidSchMarkDeviceAsError((__int64)v11[1][4]);
        }
        MostPreferredSegment = VIDMM_GLOBAL::GetMostPreferredSegment(this, v185, v115, &v186);
        v189 = 0;
        if ( !VIDMM_GLOBAL::VerifyBudgetGroups(
                this,
                v185,
                v182,
                MostPreferredSegment,
                (struct _VIDMM_VERIFY_BUDGET_GROUPS *)&v189) )
        {
          v145 = WdLogNewEntry5_WdAssertion(v144, v143, v21);
          *(_QWORD *)(v145 + 24) = 11431LL;
          WdLogEvent5_WdAssertion(v145);
          VidSchMarkDeviceAsError((__int64)v11[1][4]);
        }
        LODWORD(v135) = *(_DWORD *)(v10 + 76) ^ (*(_DWORD *)(v10 + 76) ^ (v189 << 12)) & 0xF0000 ^ (*(_WORD *)(v10 + 76) ^ (unsigned __int16)((_WORD)v189 << 12)) & 0xF000;
        *(_DWORD *)(v10 + 76) = v135;
      }
      if ( ((unsigned int)v136 >> 4 != (WORD1(v135) & 0xF)
         || (((unsigned __int8)v136 ^ (unsigned __int8)((unsigned int)v135 >> 12)) & 0xF) != 0)
        && *((_BYTE *)v11 + 25) & 1 | *((_DWORD *)v11 + 38) )
      {
        v146 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 96) + 8LL) + 16LL)
                         + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 232LL));
        v147 = *(_QWORD *)(v146 + 48) + 296LL * (*(_DWORD *)(v10 + 76) & 0x3F);
        DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v200, (struct _KTHREAD **)(v146 + 360), 0LL);
        DXGPUSHLOCK::AcquireExclusive(v201);
        v202 = 2;
        VIDMM_PROCESS_ADAPTER_INFO::BeginMemoryUsageChange((VIDMM_PROCESS_ADAPTER_INFO *)v146);
        v149 = *(_DWORD *)(v10 + 76);
        v150 = v136;
        if ( (((unsigned __int8)v136 ^ (unsigned __int8)(v149 >> 12)) & 0xF) != 0 )
        {
          *(_QWORD *)(v147 + 8 * (v136 & 0xF) + 136) -= *(_QWORD *)(v10 + 16);
          v151 = (unsigned __int8)HIBYTE(*(_WORD *)(v10 + 76)) >> 4;
          *(_QWORD *)(v147 + 8 * v151 + 136) += *(_QWORD *)(v10 + 16);
          v149 = *(_DWORD *)(v10 + 76);
        }
        if ( (unsigned int)v136 >> 4 != (HIWORD(v149) & 0xF) )
        {
          v150 = v136 >> 4;
          *(_QWORD *)(v147 + 8 * (v136 >> 4) + 72) -= *(_QWORD *)(v10 + 16);
          v152 = v147 + 8LL * (*(_WORD *)(v10 + 78) & 0xF);
          *(_QWORD *)(v152 + 72) += *(_QWORD *)(v10 + 16);
        }
        VIDMM_PROCESS_ADAPTER_INFO::CommitMemoryUsageChange((VIDMM_PROCESS_ADAPTER_INFO *)v146, v150, v148);
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v200);
        v26 = a2;
      }
      *((_DWORD *)v26 + 12) &= 0xFFFFFFF0;
      if ( v178 && *(_QWORD *)(v10 + 128) )
        VIDMM_GLOBAL::NotifyResidency(this, (struct _VIDMM_GLOBAL_ALLOC *)v10, 1u);
      v20 = *((_BYTE *)v11 + 25) & 1;
      if ( !((unsigned int)v20 | *((_DWORD *)v11 + 38)) || *(_WORD *)(*(_QWORD *)(v10 + 496) + 4LL) >= 2u )
        goto LABEL_278;
      inited = VIDMM_GLOBAL::PageInOneAllocation(this, v11, 0LL, a7, a3, a8, 0, -1LL);
      v176 = inited;
      goto LABEL_279;
    case 215:
      v153 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)v23 + 4);
      v154 = 0;
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v203, (struct _KTHREAD **)this + 4996, 0LL);
      DXGPUSHLOCK::AcquireExclusive(v204);
      v16 = *((_QWORD *)v153 + 51) == 0LL;
      v205 = 2;
      if ( !v16 )
      {
        VIDMM_GLOBAL::RemoveAllocationFromDecommitList(this, v153);
        v154 = 1;
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v203);
      if ( v154 )
        VIDMM_GLOBAL::DecommitGlobalAllocation(this, v153);
      v26 = a2;
      inited = 0;
      v176 = 0;
      goto LABEL_279;
    case 217:
      Interval.QuadPart = -10000LL * *((unsigned int *)v23 + 8);
      KeDelayExecutionThread(0, 0, &Interval);
      goto LABEL_277;
    default:
      v155 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, 0x1C0000000uLL);
      v155[3] = 270LL;
      v155[4] = 5LL;
      v155[5] = v27;
      v155[6] = -1073741811LL;
      v155[7] = 0LL;
      WdLogEvent5_WdCriticalError(v155);
      goto LABEL_277;
  }
}
