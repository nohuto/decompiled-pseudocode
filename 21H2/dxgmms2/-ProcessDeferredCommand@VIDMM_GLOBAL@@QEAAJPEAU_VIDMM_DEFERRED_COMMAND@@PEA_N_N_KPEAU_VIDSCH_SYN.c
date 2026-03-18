/*
 * XREFs of ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0093DF0
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C00ABE70 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?ProcessPendingTerminations@VIDMM_WORKER_THREAD@@AEAA_N_NPEA_N@Z @ 0x1C00DF104 (-ProcessPendingTerminations@VIDMM_WORKER_THREAD@@AEAA_N_NPEA_N@Z.c)
 *     ?SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00DF1D8 (-SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000209C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C0002298 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000242C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00024A4 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00039B0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003A80 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0005C90 (VidSchSignalSyncObjectsFromGpu.c)
 *     ?InsertToPenaltyBox@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@W4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C0014E74 (-InsertToPenaltyBox@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@W4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0014F18 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?NotifyDeferredDestructionComplete@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C0017D64 (-NotifyDeferredDestructionComplete@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 *     VidSchCancelDeviceCommand @ 0x1C001804C (VidSchCancelDeviceCommand.c)
 *     VidSchMarkDeviceAsError @ 0x1C0018900 (VidSchMarkDeviceAsError.c)
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001E570 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C002E3C0 (McTemplateK0p_EtwWriteTransfer.c)
 *     VidSchSignalSyncObjectsFromCpu @ 0x1C003DF40 (VidSchSignalSyncObjectsFromCpu.c)
 *     ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C007BB3C (-RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z @ 0x1C007BB6C (-RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_PROCESS_.c)
 *     ?TransferAllocationDecommit@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@1@Z @ 0x1C007BC1C (-TransferAllocationDecommit@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@.c)
 *     ?FindNewAllocOwner@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C008385C (-FindNewAllocOwner@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0085EBC (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     VidMmiShouldChargeAllocationAgainstBudget @ 0x1C00871BC (VidMmiShouldChargeAllocationAgainstBudget.c)
 *     ?CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C00872F4 (-CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C0087388 (-BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C00873F0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0089730 (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 *     ?VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z @ 0x1C008EA7C (-VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z.c)
 *     ?LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z @ 0x1C0093640 (-LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0095CE0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C009F9F0 (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C00A0810 (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00A08E8 (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00A0970 (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z @ 0x1C00A0A9C (-NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z.c)
 *     ?ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A1F50 (-ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C00A2358 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?ResumePagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00A2A68 (-ResumePagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00A2BA8 (-SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00A2E24 (-SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00A2EA0 (-ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?DecrementCurrentUsage@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00A4894 (-DecrementCurrentUsage@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?TransferAllocationOwnership@VIDMM_GLOBAL@@IEAA_NPEAUVIDMM_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@1@Z @ 0x1C00A5000 (-TransferAllocationOwnership@VIDMM_GLOBAL@@IEAA_NPEAUVIDMM_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@1@Z.c)
 *     ?EvictTemporaryResourceForCleanup@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00A5A28 (-EvictTemporaryResourceForCleanup@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_A.c)
 *     ?NeedsApertureForLock@VIDMM_GLOBAL@@IEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A5A94 (-NeedsApertureForLock@VIDMM_GLOBAL@@IEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z @ 0x1C00A5ACC (-InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00A5F18 (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C00A67B0 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A8ADC (-EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z @ 0x1C00A9F98 (-UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z.c)
 *     VidSchiResumeFlipQueues @ 0x1C00ABA3C (VidSchiResumeFlipQueues.c)
 *     ?CalculateLockData@VIDMM_GLOBAL@@IEAA?AUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@@Z @ 0x1C00D5520 (-CalculateLockData@VIDMM_GLOBAL@@IEAA-AUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@@Z.c)
 *     ?CleanupVadReference@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@@Z @ 0x1C00D589C (-CleanupVadReference@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@@Z.c)
 *     ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00D5C58 (-DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00D6A68 (-EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00D6C0C (-EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?EvictFromFaultedList@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@@Z @ 0x1C00D6D14 (-EvictFromFaultedList@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@@Z.c)
 *     ?GetMostPreferredSegment@VIDMM_GLOBAL@@IEAAPEAVVIDMM_SEGMENT@@KU_D3DDDI_SEGMENTPREFERENCE@@PEA_N@Z @ 0x1C00D755C (-GetMostPreferredSegment@VIDMM_GLOBAL@@IEAAPEAVVIDMM_SEGMENT@@KU_D3DDDI_SEGMENTPREFERENCE@@PEA_N.c)
 *     ?PageInFromFaultedList@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@@Z @ 0x1C00D8A9C (-PageInFromFaultedList@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@@Z.c)
 *     ?UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z @ 0x1C00DA65C (-UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00DACE0 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 *     ?VerifyPreferredSegmentIsSubset@VIDMM_GLOBAL@@IEAAEU_D3DDDI_SEGMENTPREFERENCE@@K@Z @ 0x1C00DBCA0 (-VerifyPreferredSegmentIsSubset@VIDMM_GLOBAL@@IEAAEU_D3DDDI_SEGMENTPREFERENCE@@K@Z.c)
 *     ?AddCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00DD5B4 (-AddCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00DF33C (-SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     VidSchWaitForPagingFence @ 0x1C00F5BEC (VidSchWaitForPagingFence.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ProcessDeferredCommand(
        VIDMM_GLOBAL *this,
        unsigned __int64 a2,
        __int64 a3,
        char a4,
        struct VIDMM_ALLOC **a5,
        struct _VIDSCH_SYNC_OBJECT *a6,
        bool a7,
        struct VIDMM_ALLOC **a8)
{
  unsigned int v8; // r10d
  __int64 *v10; // r13
  __int64 v11; // r14
  struct _VIDSCH_SYNC_OBJECT *v12; // r15
  __int64 v13; // rdi
  __int64 v14; // rcx
  int v15; // ebx
  unsigned int v16; // r12d
  bool v17; // zf
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // r9
  int *v21; // r12
  int v22; // eax
  VIDMM_GLOBAL *v23; // rcx
  VIDMM_GLOBAL *v24; // rcx
  char v25; // r12
  __int64 v26; // rcx
  unsigned int inited; // r13d
  VIDMM_GLOBAL *v28; // rcx
  int v29; // eax
  struct _VIDMM_LOCAL_ALLOC *NewAllocOwner; // r13
  __int64 v31; // rdx
  _QWORD *v32; // rax
  _QWORD *v33; // rcx
  __int64 v34; // rbx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // r8
  int v38; // r9d
  __int64 v39; // r8
  __int64 v40; // rdx
  _QWORD *v41; // rax
  _QWORD *v42; // rcx
  _QWORD *v43; // rdx
  struct _KTHREAD **v44; // rbx
  VIDMM_GLOBAL *v45; // rcx
  __int64 v46; // rcx
  _QWORD *v47; // rcx
  __int64 v48; // rdx
  struct _VIDMM_LOCAL_ALLOC *v49; // rax
  struct _VIDSCH_SYNC_OBJECT *v50; // rax
  struct _VIDMM_LOCAL_ALLOC *v51; // rdi
  bool v52; // r12
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // r8
  int v56; // r9d
  __int64 *v57; // rdi
  VIDMM_GLOBAL *v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rax
  __int64 **v61; // rcx
  VIDMM_GLOBAL *v62; // rcx
  struct _VIDMM_LOCAL_ALLOC *v63; // rdi
  __int64 v64; // rcx
  __int64 v65; // r8
  int v66; // r9d
  __int64 *v67; // r14
  __int64 v68; // rax
  __int64 **v69; // rcx
  unsigned int *v70; // rax
  __int64 v71; // r12
  unsigned int v72; // ebx
  __int64 v73; // r14
  __int64 v74; // rcx
  _QWORD **v75; // r14
  _QWORD *v76; // rbx
  _QWORD *v77; // rax
  _QWORD *v78; // rdi
  _QWORD *v79; // rcx
  __int64 v80; // rcx
  __int64 v81; // rcx
  unsigned int v82; // ebx
  int v83; // ecx
  __int64 v84; // rax
  int v85; // eax
  VIDMM_GLOBAL *v86; // r14
  VIDMM_GLOBAL *v87; // rbx
  __int64 *v88; // rax
  VIDMM_DEVICE **v89; // rdi
  int v90; // eax
  unsigned int v91; // eax
  int updated; // eax
  struct _KEVENT *v93; // rcx
  unsigned int v94; // eax
  _QWORD **v95; // r12
  _QWORD *i; // r14
  _QWORD *j; // rbx
  __int64 v98; // rdi
  VIDMM_GLOBAL *v99; // rcx
  int v100; // eax
  PRKPROCESS *v101; // rcx
  struct VIDMM_ALLOC **v102; // r13
  bool *v103; // r14
  unsigned int v104; // r8d
  unsigned __int64 v105; // r10
  unsigned int v106; // r9d
  __int64 v107; // rbx
  struct _D3DDDI_SEGMENTPREFERENCE v108; // edi
  __int64 v109; // r13
  int v110; // ecx
  unsigned int v111; // eax
  unsigned __int8 v112; // r12
  __int64 v113; // rcx
  unsigned int v114; // edx
  unsigned int v115; // r9d
  int v116; // eax
  int v117; // r9d
  int v118; // ebx
  int v119; // eax
  __int64 v120; // r8
  __int64 v121; // r10
  __int64 v122; // r9
  __int64 v123; // r8
  __int64 v124; // r9
  __int64 v125; // r8
  unsigned __int64 v126; // rcx
  unsigned __int64 v127; // rbx
  unsigned int v128; // eax
  __int64 v129; // rcx
  struct VIDMM_SEGMENT *MostPreferredSegment; // rax
  __int64 v131; // rcx
  int v132; // eax
  unsigned int v133; // r12d
  __int64 v134; // r13
  __int64 v135; // rax
  __int64 v136; // rdi
  __int64 v137; // rdx
  __int64 v138; // r8
  unsigned __int64 v139; // r13
  unsigned __int64 v140; // rbx
  __int64 v141; // rax
  struct _VIDMM_LOCAL_ALLOC *v142; // rcx
  __int64 v143; // rcx
  unsigned __int64 v144; // rbx
  unsigned __int64 v145; // r13
  unsigned __int64 v146; // rax
  __int64 v147; // rcx
  struct _VIDMM_GLOBAL_ALLOC *v148; // rbx
  int v149; // r8d
  _QWORD *v150; // r9
  _QWORD *v151; // rdx
  __int64 v152; // rcx
  unsigned int v153; // eax
  __int64 v155; // [rsp+20h] [rbp-E0h]
  struct VIDMM_ALLOC **v156; // [rsp+20h] [rbp-E0h]
  struct VIDMM_ALLOC **v157; // [rsp+30h] [rbp-D0h]
  __int64 v158; // [rsp+38h] [rbp-C8h]
  unsigned int v159; // [rsp+50h] [rbp-B0h]
  bool v160; // [rsp+54h] [rbp-ACh]
  unsigned __int64 v162; // [rsp+58h] [rbp-A8h]
  bool v163; // [rsp+60h] [rbp-A0h]
  unsigned int v164; // [rsp+60h] [rbp-A0h]
  struct VIDMM_ALLOC **v165; // [rsp+68h] [rbp-98h] BYREF
  struct _VIDMM_LOCAL_ALLOC *v166; // [rsp+70h] [rbp-90h]
  bool *v167; // [rsp+78h] [rbp-88h]
  unsigned int v168; // [rsp+80h] [rbp-80h]
  bool v169; // [rsp+84h] [rbp-7Ch] BYREF
  int v170; // [rsp+88h] [rbp-78h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v171; // [rsp+90h] [rbp-70h] BYREF
  VIDMM_PROCESS_ADAPTER_INFO *v172; // [rsp+98h] [rbp-68h]
  union _LARGE_INTEGER Interval; // [rsp+A0h] [rbp-60h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v174; // [rsp+A8h] [rbp-58h]
  char v175[8]; // [rsp+B0h] [rbp-50h] BYREF
  DXGPUSHLOCK *v176; // [rsp+B8h] [rbp-48h]
  int v177; // [rsp+C0h] [rbp-40h]
  char v178[8]; // [rsp+C8h] [rbp-38h] BYREF
  DXGPUSHLOCK *v179; // [rsp+D0h] [rbp-30h]
  int v180; // [rsp+D8h] [rbp-28h]
  char v181[8]; // [rsp+E0h] [rbp-20h] BYREF
  DXGPUSHLOCK *v182; // [rsp+E8h] [rbp-18h]
  int v183; // [rsp+F0h] [rbp-10h]
  char v184[8]; // [rsp+F8h] [rbp-8h] BYREF
  DXGPUSHLOCK *v185; // [rsp+100h] [rbp+0h]
  int v186; // [rsp+108h] [rbp+8h]
  char v187[8]; // [rsp+110h] [rbp+10h] BYREF
  DXGPUSHLOCK *v188; // [rsp+118h] [rbp+18h]
  int v189; // [rsp+120h] [rbp+20h]
  char v190[8]; // [rsp+128h] [rbp+28h] BYREF
  _QWORD v191[2]; // [rsp+130h] [rbp+30h] BYREF
  __int128 v192; // [rsp+140h] [rbp+40h]
  __int64 v193; // [rsp+150h] [rbp+50h]
  __int64 v194; // [rsp+158h] [rbp+58h]
  struct _VIDSCH_SYNC_OBJECT *v195; // [rsp+160h] [rbp+60h]
  __int64 v196; // [rsp+168h] [rbp+68h]
  __int128 v197; // [rsp+170h] [rbp+70h]
  struct _KAPC_STATE ApcState; // [rsp+180h] [rbp+80h] BYREF

  v8 = 0;
  v174 = a6;
  v10 = 0LL;
  v11 = 0LL;
  v167 = (bool *)a3;
  v162 = a2;
  *a8 = 0LL;
  v12 = *(struct _VIDSCH_SYNC_OBJECT **)(a2 + 16);
  v165 = a8;
  v171 = v12;
  v166 = 0LL;
  v163 = 0;
  if ( v12 )
  {
    v10 = *(__int64 **)v12;
    v11 = **(_QWORD **)v12;
    v166 = *(struct _VIDMM_LOCAL_ALLOC **)(v11 + 88);
    v163 = (*(_DWORD *)(v11 + 68) & 0x40000000) != 0;
  }
  v13 = *(_QWORD *)(a2 + 8);
  v159 = 0;
  if ( !v13 )
    v13 = *((_QWORD *)v12 + 1);
  *(_BYTE *)a3 = 0;
  v14 = *((int *)this + 2);
  v15 = *(_DWORD *)a2;
  if ( (_DWORD)v14 )
  {
    WdLogSingleEntry5(0LL, 270LL, 64LL, this, v14, *(int *)a2);
    v8 = 0;
  }
  ++*((_QWORD *)this + 578);
  v16 = 0;
  v17 = *((_DWORD *)this + 1754) == 0;
  *((_DWORD *)this + 2) = v15;
  *((_DWORD *)this + 12) = -1;
  *((_QWORD *)this + 879) = v13;
  *((_QWORD *)this + 880) = v12;
  if ( !v17 )
  {
    do
    {
      v18 = v16;
      if ( (byte_1C006E941 & 1) != 0 )
        McTemplateK0p_EtwWriteTransfer(v14, &EventPagingStartPreparation, a3, *((_QWORD *)this + v16 + 143));
      if ( *((_DWORD *)this + v16 + 414) != *((_DWORD *)this + v16 + 478)
        || *((_DWORD *)this + v16 + 542) != *((_DWORD *)this + v16 + 606) )
      {
        WdLogSingleEntry5(0LL, 270LL, 33LL, this, 0LL, 0LL);
      }
      ++v16;
      *((_DWORD *)this + v18 + 1028) = *((_DWORD *)this + v18 + 414);
      *((_DWORD *)this + v18 + 1092) = *((_DWORD *)this + v18 + 542);
      *((_DWORD *)this + v18 + 964) = 0;
    }
    while ( v16 < *((_DWORD *)this + 1754) );
    v12 = v171;
    v8 = 0;
  }
  v19 = *(_QWORD *)(v13 + 32);
  v20 = -1LL;
  if ( *(_BYTE *)(v19 + 204)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v19 + 200), 0, 0)
    || *(_BYTE *)(*((_QWORD *)this + 3) + 2742LL)
    || *(_BYTE *)(*((_QWORD *)this + 2) + 913LL) )
  {
    v21 = (int *)v162;
    *(_DWORD *)(v162 + 76) = -1071775232;
    *(_BYTE *)(v162 + 72) = 1;
  }
  else
  {
    v21 = (int *)v162;
    if ( !*(_BYTE *)(v162 + 72) )
      goto LABEL_28;
  }
  v22 = *v21;
  if ( *v21 == 113 )
  {
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v178, (struct _KTHREAD **)(*((_QWORD *)v21 + 4) + 56LL), 0);
    DXGPUSHLOCK::AcquireExclusive(v179);
    v180 = 2;
    VIDMM_GLOBAL::CleanupVadReference(v23, (struct VIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE *)(v21 + 8));
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v178);
    v22 = *v21;
    v20 = -1LL;
  }
  v19 = (unsigned int)(v22 - 203);
  if ( (unsigned int)v19 <= 0xB && (a2 = 2281LL, _bittest((const int *)&a2, v19)) || v22 == 113 )
  {
    inited = v21[19];
    goto LABEL_130;
  }
  v8 = 0;
LABEL_28:
  a2 = *v21;
  a3 = 0x1C0000000uLL;
  switch ( (int)a2 )
  {
    case 113:
      updated = VIDMM_GLOBAL::CommitVirtualAddressRangeSystemCommand(
                  (VIDMM_GLOBAL *)v19,
                  (struct VIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE *)(v21 + 8),
                  v165);
      goto LABEL_198;
    case 119:
      updated = VIDMM_GLOBAL::UpdateGpuVirtualAddressSystemCommand(
                  this,
                  *((struct VIDSCH_DEVICE_COMMAND_UPDATEGPUVA **)v21 + 4),
                  v165);
LABEL_198:
      inited = updated;
      if ( updated != -1073741267 )
        break;
      *v167 = 1;
      goto LABEL_200;
    case 200:
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v19, a2, 0x1C0000000uLL, -1LL) + 24) = v12;
      if ( *((_DWORD *)v12 + 26) || *((_DWORD *)v12 + 39) )
        WdLogSingleEntry5(0LL, 270LL, 42LL, this, v12, *((int *)v12 + 26));
      v29 = *((_DWORD *)v12 + 7) & 3;
      if ( v29 == 2 )
      {
        NewAllocOwner = 0LL;
        VIDMM_GLOBAL::NotifyAllocationEviction(this, v12, 0, 0LL, 0LL);
      }
      else if ( v29 == 1 )
      {
        v31 = *((_QWORD *)v12 + 7);
        v32 = (_QWORD *)((char *)v12 + 56);
        if ( *(struct _VIDSCH_SYNC_OBJECT **)(v31 + 8) != (struct _VIDSCH_SYNC_OBJECT *)((char *)v12 + 56) )
          goto LABEL_295;
        v33 = (_QWORD *)*((_QWORD *)v12 + 8);
        if ( (_QWORD *)*v33 != v32 )
          goto LABEL_295;
        *v33 = v31;
        *(_QWORD *)(v31 + 8) = v33;
        *((_DWORD *)v12 + 7) &= 0xFFFFFFFC;
        NewAllocOwner = 0LL;
        *((_QWORD *)v12 + 8) = 0LL;
        *v32 = 0LL;
      }
      else
      {
        NewAllocOwner = 0LL;
      }
      if ( (*((_BYTE *)v12 + 25) & 1) != 0 )
        VIDMM_GLOBAL::UnpinOneAllocation(this, v12, 3LL);
      if ( (*((_DWORD *)v12 + 7) & 0x10) != 0 && g_IsInternalRelease )
        WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
      if ( v12 == *(struct _VIDSCH_SYNC_OBJECT **)(v13 + 256) )
        *(_QWORD *)(v13 + 256) = 0LL;
      v34 = *(_QWORD *)(v13 + 16) + 360LL;
      if ( *(_QWORD *)(v13 + 16) != -360LL
        && *(struct _KTHREAD **)(*(_QWORD *)(v13 + 16) + 368LL) == KeGetCurrentThread() )
      {
        WdLogSingleEntry1(1LL, 1425LL);
        v158 = 0LL;
        v157 = 0LL;
        v155 = 1425LL;
        DxgkLogInternalTriageEvent(v35, 262146LL);
      }
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v34, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v38 = *(_DWORD *)(v34 + 24);
          if ( v38 != -1 && (byte_1C006E941 & 1) != 0 )
            McTemplateK0q_EtwWriteTransfer(v36, (__int64)&EventBlockThread, v37, v38);
        }
        ExAcquirePushLockExclusiveEx(v34, 0LL);
      }
      *(_QWORD *)(v34 + 8) = KeGetCurrentThread();
      if ( !(*((_BYTE *)v12 + 25) & 1 | *((_DWORD *)v12 + 38)) )
        goto LABEL_73;
      VIDMM_PROCESS_ADAPTER_INFO::BeginMemoryUsageChange(*(VIDMM_PROCESS_ADAPTER_INFO **)(v13 + 16));
      if ( VidMmiShouldChargeAllocationAgainstBudget((__int64 **)v12) )
        VIDMM_DEVICE::DecrementCurrentUsage((VIDMM_DEVICE *)v13, v12);
      v40 = *((_QWORD *)v12 + 14);
      v41 = (_QWORD *)((char *)v12 + 112);
      if ( *(struct _VIDSCH_SYNC_OBJECT **)(v40 + 8) != (struct _VIDSCH_SYNC_OBJECT *)((char *)v12 + 112) )
        goto LABEL_295;
      v42 = (_QWORD *)*((_QWORD *)v12 + 15);
      if ( (_QWORD *)*v42 != v41 )
        goto LABEL_295;
      *v42 = v40;
      *(_QWORD *)(v40 + 8) = v42;
      v43 = *(_QWORD **)(v13 + 184);
      if ( *v43 != v13 + 176 )
        goto LABEL_295;
      *v41 = v13 + 176;
      *((_QWORD *)v12 + 15) = v43;
      *v43 = v41;
      *(_QWORD *)(v13 + 184) = v41;
      VIDMM_PROCESS_ADAPTER_INFO::CommitMemoryUsageChange(*(VIDMM_PROCESS_ADAPTER_INFO **)(v13 + 16), (__int64)v43, v39);
LABEL_73:
      *((_DWORD *)v12 + 38) = 0;
      *(_QWORD *)(v34 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v34, 0LL);
      KeLeaveCriticalRegion();
      v44 = (struct _KTHREAD **)(v11 + 296);
      DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v11 + 296));
      if ( *(int *)(*((_QWORD *)v12 + 12) + 8LL) > 0 )
      {
        v46 = *(_QWORD *)(v13 + 32);
        v191[0] = 0LL;
        v192 = 0LL;
        v197 = 0LL;
        v191[1] = 0LL;
        v193 = 0LL;
        v194 = 3LL;
        v196 = 0LL;
        v195 = v12;
        VidSchCancelDeviceCommand(v46, (__int64)v191, 1, 0);
      }
      if ( (**(_DWORD **)(v11 + 528) & 0x20000000) != 0 )
      {
        v47 = *(_QWORD **)(*(_QWORD *)v12 + 40LL);
        v48 = *(_QWORD *)v12 + 40LL;
        v49 = *(struct _VIDMM_LOCAL_ALLOC **)v12;
        if ( v47 != (_QWORD *)v48 )
        {
          do
          {
            v50 = (struct _VIDSCH_SYNC_OBJECT *)(v47 - 5);
            v47 = (_QWORD *)*v47;
            if ( v50 != v12 && (*((_DWORD *)v50 + 7) & 4) == 0 )
              goto LABEL_86;
          }
          while ( v47 != (_QWORD *)v48 );
          v49 = *(struct _VIDMM_LOCAL_ALLOC **)v12;
        }
        v51 = v166;
        if ( v49 != v166 )
        {
          *(_BYTE *)(*(_QWORD *)v12 + 32LL) |= 2u;
LABEL_86:
          DXGFASTMUTEX::Release((struct _KTHREAD **)(v11 + 296));
          goto LABEL_126;
        }
        WdLogSingleEntry2(4LL, v11, v12);
        *((_BYTE *)v166 + 32) |= 2u;
        NewAllocOwner = VIDMM_GLOBAL::FindNewAllocOwner(this, (struct _VIDMM_GLOBAL_ALLOC *)v11);
        VIDMM_GLOBAL::EvictTemporaryResourceForCleanup(this, (struct _VIDMM_GLOBAL_ALLOC *)v11, v51);
        v52 = !VIDMM_GLOBAL::TransferAllocationOwnership(this, v12, v51, NewAllocOwner);
        if ( (*(_DWORD *)(v11 + 76) & 4) != 0 )
          NewAllocOwner = *(struct _VIDMM_LOCAL_ALLOC **)(v11 + 88);
        WdLogSingleEntry1(4LL, *(_QWORD *)(v11 + 88));
        v44 = (struct _KTHREAD **)(v11 + 296);
      }
      else
      {
        v51 = v166;
        v52 = 1;
      }
      if ( (*(_BYTE *)(v11 + 76) & 0x60) == 0x60 )
        VIDMM_GLOBAL::TransferAllocationDecommit(v45, (struct _VIDMM_GLOBAL_ALLOC *)v11, v51, NewAllocOwner);
      DXGFASTMUTEX::Release(v44);
      if ( this != (VIDMM_GLOBAL *)-39976LL && *((struct _KTHREAD **)this + 4998) == KeGetCurrentThread() )
      {
        WdLogSingleEntry1(1LL, 1425LL);
        v158 = 0LL;
        v157 = 0LL;
        v155 = 1425LL;
        DxgkLogInternalTriageEvent(v53, 262146LL);
      }
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 39976, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v56 = *((_DWORD *)this + 10000);
          if ( v56 != -1 && (byte_1C006E941 & 1) != 0 )
            McTemplateK0q_EtwWriteTransfer(v54, (__int64)&EventBlockThread, v55, v56);
        }
        ExAcquirePushLockExclusiveEx((char *)this + 39976, 0LL);
      }
      v57 = (__int64 *)(v11 + 432);
      *((_QWORD *)this + 4998) = KeGetCurrentThread();
      if ( *(_QWORD *)(v11 + 432) )
      {
        v58 = (VIDMM_GLOBAL *)*(unsigned int *)(*((_QWORD *)this + 3) + 240LL);
        VIDMM_GLOBAL::RemoveAllocationFromDecommitList(
          v58,
          (struct _VIDMM_GLOBAL_ALLOC *)v11,
          *(struct VIDMM_PROCESS_ADAPTER_INFO **)(*(_QWORD *)(*((_QWORD *)v166 + 1) + 16LL) + 8LL * (_QWORD)v58));
        if ( NewAllocOwner )
        {
          v59 = *(unsigned int *)(*((_QWORD *)this + 3) + 240LL);
          v60 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)NewAllocOwner + 1) + 16LL) + 8 * v59) + 424LL;
          v61 = *(__int64 ***)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)NewAllocOwner + 1) + 16LL) + 8 * v59) + 432LL);
          if ( *v61 != (__int64 *)v60 )
            goto LABEL_295;
          *v57 = v60;
          *(_QWORD *)(v11 + 440) = v61;
          *v61 = v57;
          *(_QWORD *)(v60 + 8) = v57;
        }
      }
      *((_QWORD *)this + 4998) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 39976, 0LL);
      KeLeaveCriticalRegion();
      if ( v52 && !v163 )
      {
        v62 = *(VIDMM_GLOBAL **)(v11 + 120);
        if ( v62 )
        {
          if ( g_IsInternalReleaseOrDbg )
          {
            WdLogNewEntry5_WdTrace(v62, a2, a3, v20);
            v62 = *(VIDMM_GLOBAL **)(v11 + 120);
          }
          v63 = v166;
          LOBYTE(v155) = 1;
          (*(void (__fastcall **)(VIDMM_GLOBAL *, __int64, _QWORD, _QWORD, __int64, struct _VIDMM_LOCAL_ALLOC *, struct VIDMM_ALLOC **, __int64))(*(_QWORD *)v62 + 48LL))(
            v62,
            v11,
            0LL,
            0LL,
            v155,
            v166,
            v157,
            v158);
          VIDMM_GLOBAL::FlushPagingBufferInternal(this, *(_DWORD *)(v11 + 68) & 0x3F, 0, 0LL, 0LL, 0, 0);
        }
        else
        {
          v63 = v166;
        }
        if ( *(_QWORD *)(v11 + 240) )
          VIDMM_GLOBAL::EvictTemporaryAllocation(v62, (struct _VIDMM_GLOBAL_ALLOC *)v11);
        DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v11 + 296));
        if ( (*(_DWORD *)(v11 + 76) & 2) != 0 )
        {
          VIDMM_SEGMENT::UnlockAllocationBackingStore(this, (struct _VIDMM_GLOBAL_ALLOC *)v11, v63);
          VIDMM_GLOBAL::ReturnPinnedBackingStore(this, *(_QWORD *)(v11 + 8));
          *(_DWORD *)(v11 + 76) &= ~2u;
        }
        DXGFASTMUTEX::Release((struct _KTHREAD **)(v11 + 296));
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 39976, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v66 = *((_DWORD *)this + 10000);
            if ( v66 != -1 && (byte_1C006E941 & 1) != 0 )
              McTemplateK0q_EtwWriteTransfer(v64, (__int64)&EventBlockThread, v65, v66);
          }
          ExAcquirePushLockExclusiveEx((char *)this + 39976, 0LL);
        }
        v67 = (__int64 *)(v11 + 416);
        *((_QWORD *)this + 4998) = KeGetCurrentThread();
        v68 = *v67;
        if ( *v67 )
        {
          if ( *(__int64 **)(v68 + 8) != v67 )
            goto LABEL_295;
          v69 = (__int64 **)v67[1];
          if ( *v69 != v67 )
            goto LABEL_295;
          *v69 = (__int64 *)v68;
          *(_QWORD *)(v68 + 8) = v69;
          *v67 = 0LL;
        }
        *((_QWORD *)this + 4998) = 0LL;
        ExReleasePushLockExclusiveEx((char *)this + 39976, 0LL);
        KeLeaveCriticalRegion();
      }
      v21 = (int *)v162;
LABEL_126:
      *((_DWORD *)v12 + 7) |= 4u;
      v19 = *((_QWORD *)v12 + 24);
      if ( v19 && _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 32), 0xFFFFFFFF) == 1 )
        ADAPTER_RENDER::NotifyDeferredDestructionComplete(
          *((ADAPTER_RENDER **)this + 2),
          *((struct DXGTERMINATIONTRACKER **)v12 + 24));
LABEL_129:
      inited = 0;
      break;
    case 203:
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v19, a2, 0x1C0000000uLL, -1LL) + 24) = v12;
      if ( *(_BYTE *)(v11 + 81) )
      {
        inited = -1071775482;
      }
      else
      {
        v80 = *(unsigned int *)(*(_QWORD *)(v11 + 528) + 12LL);
        if ( !(_DWORD)v80 && (**(_DWORD **)(v11 + 528) & 0x20000) == 0 )
        {
          if ( g_IsInternalReleaseOrDbg )
            WdLogNewEntry5_WdTrace(v80, a2, a3, v20);
          if ( *(_QWORD *)(v11 + 120) )
          {
            v81 = **(unsigned int **)(v11 + 528);
            if ( (v81 & 0x40000000) == 0 && ((v81 & 0x20000000) == 0 || (int)v81 >= 0) && (v81 & 0x80000) == 0 )
            {
              if ( g_IsInternalReleaseOrDbg )
                WdLogNewEntry5_WdTrace(v81, a2, a3, v20);
              VIDMM_WORKER_THREAD::SuspendAccessToAllocation(
                *(VIDMM_WORKER_THREAD **)this,
                (struct _VIDMM_GLOBAL_ALLOC *)v11);
              VIDMM_GLOBAL::EvictAllocation(this, v12);
              VIDMM_GLOBAL::EvictAllReclaimedAllocation(this, v12);
            }
          }
        }
        v82 = 4;
        v83 = **(_DWORD **)(v11 + 528);
        if ( (v83 & 0x20000) != 0 )
        {
          v82 = v21[8];
        }
        else if ( (v83 & 0x40000000) != 0 || v83 < 0 )
        {
          v82 = 3;
        }
        v84 = *((_QWORD *)v21 + 5);
        if ( v84 != -1 )
        {
          *(_DWORD *)(v11 + 72) |= 0x800u;
          v84 = *((_QWORD *)v21 + 5);
        }
        v85 = VIDMM_GLOBAL::PageInOneAllocation(
                (__int64)this,
                (__int64 **)v12,
                v82,
                a7,
                v167,
                (__int64 ***)v165,
                v21[9],
                v84);
        *(_DWORD *)(v11 + 72) &= ~0x800u;
        inited = v85;
        if ( v85 >= 0 )
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v11 + 528) + 12LL));
        v86 = (VIDMM_GLOBAL *)((char *)this + 3720);
        v87 = (VIDMM_GLOBAL *)*((_QWORD *)this + 465);
        if ( v87 != (VIDMM_GLOBAL *)((char *)this + 3720) )
        {
          do
          {
            v88 = (__int64 *)*((_QWORD *)v87 - 7);
            v89 = (VIDMM_DEVICE **)((char *)v87 - 56);
            v87 = *(VIDMM_GLOBAL **)v87;
            v19 = *v88;
            v90 = *(_DWORD *)(*v88 + 112);
            if ( v90 )
            {
              if ( v90 == 1 )
                VIDMM_SEGMENT::ReclaimResource(*(VIDMM_SEGMENT **)(v19 + 120), (struct _VIDMM_GLOBAL_ALLOC *)v19);
              VIDMM_DEVICE::AddCommitment(v89[1], (struct VIDMM_ALLOC *)v89);
            }
          }
          while ( v87 != v86 );
        }
        *((_QWORD *)this + 466) = (char *)this + 3720;
        *(_QWORD *)v86 = v86;
      }
      break;
    case 206:
      a2 = **(_QWORD **)v12;
      if ( *(_DWORD *)(a2 + 360)
        && VIDMM_GLOBAL::NeedsApertureForLock(this, (struct _VIDMM_GLOBAL_ALLOC *)a2)
        && (*(_DWORD *)(a2 + 68) & 0x40) == 0 )
      {
        WdLogSingleEntry1(3LL, a2);
        inited = -1073741823;
        break;
      }
      v19 = *((_BYTE *)v12 + 25) & 1;
      if ( !((unsigned int)v19 | *((_DWORD *)v12 + 38)) || *(_WORD *)(*(_QWORD *)(a2 + 528) + 4LL) >= 2u )
        goto LABEL_129;
      v91 = VIDMM_GLOBAL::PageInOneAllocation((__int64)this, (__int64 **)v12, 0LL, a7, v167, (__int64 ***)v165, v8, v20);
      goto LABEL_191;
    case 207:
      if ( !*((_DWORD *)v12 + 38) && (*((_BYTE *)v12 + 25) & 1) == 0 )
        VIDMM_GLOBAL::EvictOneAllocation(this, v12, v21[8] & 1);
      _InterlockedDecrement((volatile signed __int32 *)v12 + 41);
      goto LABEL_129;
    case 208:
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v19, a2, 0x1C0000000uLL, -1LL) + 24) = v11;
      KeEnterCriticalRegion();
      v98 = v11 + 496;
      ExAcquirePushLockExclusiveEx(v11 + 496, 0LL);
      if ( *(_QWORD *)(v11 + 240) )
      {
        VIDMM_GLOBAL::EvictTemporaryAllocation(v99, (struct _VIDMM_GLOBAL_ALLOC *)v11);
        VIDMM_GLOBAL::FlushPagingBufferInternal(this, *(_DWORD *)(v11 + 68) & 0x3F, 0, 0LL, 0LL, 0, 0);
      }
      if ( !*((_BYTE *)v21 + 52) )
      {
        *(_QWORD *)(v21 + 11) = *(_QWORD *)VIDMM_GLOBAL::CalculateLockData(this, v190, v12);
        *((_BYTE *)v21 + 52) = 1;
      }
      v100 = v21[11];
      if ( v100 == 4 )
      {
        v102 = v165;
        v103 = v167;
      }
      else
      {
        v101 = (PRKPROCESS *)v10[1];
        memset(&ApcState, 0, sizeof(ApcState));
        KeStackAttachProcess(*v101, &ApcState);
        v102 = v165;
        v103 = v167;
        v159 = VIDMM_GLOBAL::LockInternal(
                 this,
                 (struct VIDMM_LOCK2_DATA *)(v21 + 11),
                 v12,
                 *((void ***)v21 + 4),
                 v21[10],
                 v167,
                 v165);
        KeUnstackDetachProcess(&ApcState);
        v100 = v21[11];
      }
      if ( v100 == 4 )
        inited = VIDMM_GLOBAL::LockInternal(
                   this,
                   (struct VIDMM_LOCK2_DATA *)(v21 + 11),
                   v12,
                   *((void ***)v21 + 4),
                   v21[10],
                   v103,
                   v102);
      else
        inited = v159;
      ExReleasePushLockExclusiveEx(v98, 0LL);
      KeLeaveCriticalRegion();
      break;
    case 209:
      inited = VIDMM_GLOBAL::InitContextAllocation(this, v12, 1u, v167, v165);
      break;
    case 210:
      v19 = *((_BYTE *)v12 + 25) & 1;
      a2 = *(unsigned __int16 *)(*(_QWORD *)(v11 + 528) + 4LL);
      if ( !((unsigned int)v19 | *((_DWORD *)v12 + 38)) || (unsigned __int16)a2 >= 2u )
        goto LABEL_129;
      v94 = VIDMM_GLOBAL::PageInOneAllocation((__int64)this, (__int64 **)v12, 0LL, a7, v167, (__int64 ***)v165, 0, -1LL);
      *(_DWORD *)(v11 + 72) &= ~0x40u;
      inited = v94;
      break;
    case 211:
      v95 = (_QWORD **)(*((_QWORD *)v21 + 4) + 272LL);
      for ( i = *v95; i != v95; i = (_QWORD *)*i )
      {
        for ( j = (_QWORD *)*(i - 2); j != i - 2; j = (_QWORD *)*j )
          VIDMM_GLOBAL::EvictOneAllocation(this, (struct VIDMM_ALLOC *)(j - 5), 0);
      }
      v21 = (int *)v162;
      goto LABEL_129;
    case 212:
      VIDMM_GLOBAL::UpdateAllocationPriority(this, v12, v21[8]);
      goto LABEL_129;
    case 213:
      VIDMM_DEVICE::SuspendSchedulerDevice((VIDMM_DEVICE *)v13);
      VIDMM_DEVICE::SuspendPagingQueues((VIDMM_DEVICE *)v13);
      v25 = 0;
      if ( !*(_QWORD *)(v13 + 192) )
      {
        v25 = 1;
        DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v181, (struct _KTHREAD **)(*(_QWORD *)v13 + 44480LL), 0);
        DXGPUSHLOCK::AcquireExclusive(v182);
        v26 = *(_QWORD *)v13;
        v183 = 2;
        VIDMM_GLOBAL::InsertToPenaltyBox(v26, v13, 4);
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v181);
      }
      if ( v12 )
      {
        if ( (*((_DWORD *)v12 + 7) & 3) == 2 )
          VIDMM_GLOBAL::FaultOneAllocation(*(VIDMM_GLOBAL **)v13, v12);
      }
      else
      {
        VIDMM_DEVICE::FaultAllAllocations((VIDMM_DEVICE *)v13);
      }
      VIDMM_GLOBAL::EvictFromFaultedList(v24, (struct VIDMM_DEVICE *)v13);
      inited = VIDMM_GLOBAL::PageInFromFaultedList(this, (struct VIDMM_DEVICE *)v13);
      VIDMM_DEVICE::ResumeSchedulerDevice((VIDMM_DEVICE *)v13);
      VIDMM_DEVICE::ResumePagingQueues((VIDMM_DEVICE *)v13);
      if ( v25 )
      {
        DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v184, (struct _KTHREAD **)(*(_QWORD *)v13 + 44480LL), 0);
        DXGPUSHLOCK::AcquireExclusive(v185);
        v186 = 2;
        VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v28, (struct _LIST_ENTRY *)(v13 + 192));
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v184);
      }
      v21 = (int *)v162;
      break;
    case 214:
      v104 = *(_DWORD *)(v11 + 68);
      v105 = v162;
      v106 = *(_DWORD *)(v11 + 60);
      v107 = *((_QWORD *)this + 5028);
      v108.0 = *(struct _D3DDDI_SEGMENTPREFERENCE::$F972DAF4C5B61B4C701096F96A6C826A::$59FADADC9B5649AD99C3978E94186D1F *)(v11 + 64);
      v109 = 1584LL * (v104 & 0x3F);
      LODWORD(v166) = v104 & 0x3F;
      v110 = *(_DWORD *)(v162 + 48) >> 1;
      v111 = *(_DWORD *)(v162 + 48) >> 2;
      LOBYTE(v110) = (*(_DWORD *)(v162 + 48) & 2) != 0;
      LOBYTE(v111) = (*(_DWORD *)(v162 + 48) & 4) != 0;
      v112 = (v104 & 0x80) != 0;
      v164 = v106;
      LODWORD(v172) = v110;
      v168 = v111;
      if ( (_BYTE)v110 )
      {
        v113 = *(_QWORD *)(v11 + 120);
        v114 = v104;
        v115 = *(_DWORD *)(v162 + 36);
        v164 = v115;
        if ( v113
          && *(_DWORD *)(v11 + 112)
          && !_bittest((const int *)&v115, (unsigned __int8)(*(_BYTE *)(v113 + 20) - *(_BYTE *)(v107 + v109 + 20))) )
        {
          VIDMM_WORKER_THREAD::SuspendAccessToAllocation(
            *(VIDMM_WORKER_THREAD **)this,
            (struct _VIDMM_GLOBAL_ALLOC *)v11);
          VIDMM_GLOBAL::EvictAllocation(this, v12);
          VIDMM_GLOBAL::EvictAllReclaimedAllocation(this, v12);
          v114 = *(_DWORD *)(v11 + 68);
          v115 = v164;
          v105 = v162;
        }
        *(_DWORD *)(v11 + 60) = v115;
        v116 = v114 ^ ((unsigned __int8)v114 ^ (unsigned __int8)(*(_BYTE *)(v105 + 53) << 6)) & 0x40;
        *(_DWORD *)(v11 + 68) = v116;
        v112 = *(_BYTE *)(v105 + 52);
        v104 = v116 ^ ((unsigned __int8)v116 ^ (unsigned __int8)(v112 << 7)) & 0x80;
        *(_DWORD *)(v11 + 68) = v104;
      }
      a2 = v104;
      v160 = 0;
      if ( (*(_DWORD *)(v105 + 48) & 1) != 0 )
      {
        v117 = **((_DWORD **)v12 + 12);
        if ( (v117 & 0x8000) == 0 )
        {
          v118 = 1 << (*(_WORD *)(v107 + v109 + 28) - *(_BYTE *)(v107 + v109 + 20));
          if ( (*(_DWORD *)(v105 + 44) & 1) != 0 )
          {
            LOBYTE(v119) = v104;
            if ( *(_DWORD *)(v11 + 112) )
            {
              if ( (*(_DWORD *)(*(_QWORD *)(v11 + 120) + 80LL) & 0x1000) != 0 )
              {
                VIDMM_WORKER_THREAD::SuspendAccessToAllocation(
                  *(VIDMM_WORKER_THREAD **)this,
                  (struct _VIDMM_GLOBAL_ALLOC *)v11);
                VIDMM_GLOBAL::EvictAllocation(this, v12);
                VIDMM_GLOBAL::EvictAllReclaimedAllocation(this, v12);
                v119 = *(_DWORD *)(v11 + 68);
                v105 = v162;
              }
              else
              {
                LOBYTE(v119) = v104;
                v160 = (v117 & 0x10000) != 0;
              }
            }
            if ( (v119 & 0x40) != 0 )
              *(_DWORD *)(v11 + 60) &= ~v118;
            **((_DWORD **)v12 + 12) |= 0x8000u;
            a2 = *(unsigned int *)(v11 + 68);
          }
        }
      }
      a3 = v168;
      if ( !(_BYTE)v168 )
        goto LABEL_258;
      v108.0 = *(struct _D3DDDI_SEGMENTPREFERENCE::$F972DAF4C5B61B4C701096F96A6C826A::$59FADADC9B5649AD99C3978E94186D1F *)(v105 + 40);
      v120 = 0LL;
      v121 = 0LL;
      if ( v108.0 )
      {
        if ( (*(_BYTE *)&v108.0 & 0x1F) != 0 )
        {
          v120 = *(_QWORD *)(*((_QWORD *)this + 464)
                           + 8LL * ((*(_BYTE *)&v108.0 & 0x1Fu) + *(_DWORD *)(*((_QWORD *)this + 5028) + v109 + 20) - 1));
          v112 = *(_BYTE *)(v120 + 80) & 1;
        }
        if ( ((v108.Value >> 6) & 0x1F) != 0 )
          v121 = *(_QWORD *)(*((_QWORD *)this + 464)
                           + 8LL * (((v108.Value >> 6) & 0x1F) + *(_DWORD *)(*((_QWORD *)this + 5028) + v109 + 20) - 1));
      }
      if ( !*(_DWORD *)(v11 + 112) )
        goto LABEL_256;
      v122 = *(_QWORD *)(v11 + 120);
      if ( v120 == v122 || v121 == v122 )
      {
        if ( *(_DWORD *)(v11 + 64) != v108.0 )
        {
          v123 = *(_QWORD *)(v11 + 88);
          if ( v123 )
          {
            if ( *(_QWORD *)(v123 + 8) )
            {
              VidMmRecordAlloc(this, v11, v123, v122, *(_QWORD *)(v11 + 16), 1);
              v124 = *(_QWORD *)(v11 + 120);
              v125 = *(_QWORD *)(v11 + 88);
              *(_DWORD *)(v11 + 68) ^= (*(_DWORD *)(v11 + 68) ^ (v112 << 10)) & 0x400;
              v156 = *(struct VIDMM_ALLOC ***)(v11 + 16);
              *(struct _D3DDDI_SEGMENTPREFERENCE *)(v11 + 64) = v108;
              VidMmRecordAlloc(this, v11, v125, v124, (__int64)v156, 0);
              a2 = *(unsigned int *)(v11 + 68);
              a3 = v168;
              goto LABEL_258;
            }
          }
        }
LABEL_256:
        *(_DWORD *)(v11 + 68) ^= (*(_DWORD *)(v11 + 68) ^ (v112 << 10)) & 0x400;
        a2 = *(unsigned int *)(v11 + 68);
      }
      else
      {
        VIDMM_WORKER_THREAD::SuspendAccessToAllocation(*(VIDMM_WORKER_THREAD **)this, (struct _VIDMM_GLOBAL_ALLOC *)v11);
        VIDMM_GLOBAL::EvictAllocation(this, v12);
        VIDMM_GLOBAL::EvictAllReclaimedAllocation(this, v12);
        a2 = *(_DWORD *)(v11 + 68) ^ (*(_DWORD *)(v11 + 68) ^ (v112 << 10)) & 0x400u;
        *(_DWORD *)(v11 + 68) = a2;
      }
      a3 = v168;
      *(struct _D3DDDI_SEGMENTPREFERENCE *)(v11 + 64) = v108;
LABEL_258:
      if ( (*(_DWORD *)(v162 + 48) & 8) != 0 )
        *(_DWORD *)(v11 + 72) ^= (*(_DWORD *)(v11 + 72) ^ (*(_DWORD *)(v162 + 44) << 20)) & 0x200000;
      v20 = (unsigned int)v172;
      v126 = (unsigned int)a2;
      v127 = (unsigned __int8)((unsigned int)a2 >> 13);
      if ( (_BYTE)a3 && (_BYTE)v172 )
      {
        v128 = a2 ^ (a2 ^ (*(_DWORD *)(v162 + 32) << 13)) & 0x1E0000;
        *(_DWORD *)(v11 + 68) = v128;
        v126 = v128 ^ (v128 ^ (*(_DWORD *)(v162 + 32) << 13)) & 0x1E000;
        *(_DWORD *)(v11 + 68) = v126;
      }
      if ( (_BYTE)a3 != (_BYTE)v20 )
      {
        if ( !VIDMM_GLOBAL::VerifyPreferredSegmentIsSubset(
                (VIDMM_GLOBAL *)v126,
                *(struct _D3DDDI_SEGMENTPREFERENCE *)(v11 + 64),
                v164) )
        {
          WdLogSingleEntry1(1LL, 11799LL);
          DxgkLogInternalTriageEvent(v129, 0x40000LL);
          VidSchMarkDeviceAsError(*(_QWORD *)(*((_QWORD *)v12 + 1) + 32LL));
        }
        MostPreferredSegment = VIDMM_GLOBAL::GetMostPreferredSegment(this, (unsigned int)v166, v108, &v169);
        v170 = 0;
        if ( !VIDMM_GLOBAL::VerifyBudgetGroups(
                this,
                (unsigned int)v166,
                v164,
                MostPreferredSegment,
                (struct _VIDMM_VERIFY_BUDGET_GROUPS *)&v170) )
        {
          WdLogSingleEntry1(1LL, 11811LL);
          v155 = 11811LL;
          DxgkLogInternalTriageEvent(v131, 0x40000LL);
          VidSchMarkDeviceAsError(*(_QWORD *)(*((_QWORD *)v12 + 1) + 32LL));
        }
        v132 = *(_DWORD *)(v11 + 68) ^ (*(_DWORD *)(v11 + 68) ^ (v170 << 13)) & 0x1E0000;
        LODWORD(v126) = v132 ^ (v132 ^ (v170 << 13)) & 0x1E000;
        *(_DWORD *)(v11 + 68) = v126;
      }
      v133 = (unsigned int)v127 >> 4;
      if ( ((unsigned int)v127 >> 4 != (((unsigned int)v126 >> 17) & 0xF)
         || (((unsigned __int8)v127 ^ (unsigned __int8)((unsigned int)v126 >> 13)) & 0xF) != 0)
        && *((_BYTE *)v12 + 25) & 1 | *((_DWORD *)v12 + 38) )
      {
        v134 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 88) + 8LL) + 16LL)
                         + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL));
        v135 = *(_DWORD *)(v11 + 68) & 0x3F;
        v172 = (VIDMM_PROCESS_ADAPTER_INFO *)v134;
        v136 = *(_QWORD *)(v134 + 48) + 296 * v135;
        DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v187, (struct _KTHREAD **)(v134 + 360), 0);
        DXGPUSHLOCK::AcquireExclusive(v188);
        v189 = 2;
        VIDMM_PROCESS_ADAPTER_INFO::BeginMemoryUsageChange((VIDMM_PROCESS_ADAPTER_INFO *)v134);
        v139 = v127;
        if ( (((unsigned __int8)v127 ^ (unsigned __int8)(*(_DWORD *)(v11 + 68) >> 13)) & 0xF) != 0 )
        {
          v140 = *(_QWORD *)(v11 + 16);
          v166 = (struct _VIDMM_LOCAL_ALLOC *)(v136 + 8 * ((v139 & 0xF) + 17));
          v141 = *(_QWORD *)v166;
          if ( v140 <= *(_QWORD *)v166 )
          {
            v142 = v166;
          }
          else
          {
            WdLogSingleEntry5(0LL, 270LL, 68LL, v136, v141, v140);
            v142 = v166;
            v141 = *(_QWORD *)v166;
          }
          *(_QWORD *)v142 = v141 - v140;
          v143 = (*(_DWORD *)(v11 + 68) >> 13) & 0xF;
          *(_QWORD *)(v136 + 8 * v143 + 136) += *(_QWORD *)(v11 + 16);
        }
        if ( v133 != ((*(_DWORD *)(v11 + 68) >> 17) & 0xF) )
        {
          v144 = *(_QWORD *)(v11 + 16);
          v145 = v139 >> 4;
          v146 = *(_QWORD *)(v136 + 8 * v145 + 72);
          if ( v144 > v146 )
          {
            WdLogSingleEntry5(0LL, 270LL, 68LL, v136, v146, *(_QWORD *)(v11 + 16));
            v146 = *(_QWORD *)(v136 + 8 * v145 + 72);
          }
          *(_QWORD *)(v136 + 8 * v145 + 72) = v146 - v144;
          v147 = (*(_DWORD *)(v11 + 68) >> 17) & 0xF;
          *(_QWORD *)(v136 + 8 * v147 + 72) += *(_QWORD *)(v11 + 16);
        }
        VIDMM_PROCESS_ADAPTER_INFO::CommitMemoryUsageChange(v172, v137, v138);
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v187);
      }
      v21 = (int *)v162;
      *(_DWORD *)(v162 + 48) &= 0xFFFFFFF0;
      if ( v160 && *(_QWORD *)(v11 + 120) )
        VIDMM_GLOBAL::NotifyResidency(this, (struct _VIDMM_GLOBAL_ALLOC *)v11, 1u);
      v19 = *((_BYTE *)v12 + 25) & 1;
      if ( !((unsigned int)v19 | *((_DWORD *)v12 + 38)) || *(_WORD *)(*(_QWORD *)(v11 + 528) + 4LL) >= 2u )
        goto LABEL_129;
      v91 = VIDMM_GLOBAL::PageInOneAllocation((__int64)this, (__int64 **)v12, 0LL, a7, v167, (__int64 ***)v165, 0, -1LL);
LABEL_191:
      inited = v91;
      break;
    case 215:
      v148 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)v21 + 4);
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v175, (struct _KTHREAD **)this + 4997, 0);
      DXGPUSHLOCK::AcquireExclusive(v176);
      v17 = *((_QWORD *)v148 + 54) == 0LL;
      v177 = 2;
      if ( v17 )
      {
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v175);
      }
      else
      {
        VIDMM_GLOBAL::RemoveAllocationFromDecommitList(this, v148);
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v175);
        VIDMM_GLOBAL::DecommitGlobalAllocation(this, v148);
      }
      inited = 0;
      break;
    case 217:
      Interval.QuadPart = -10000LL * (unsigned int)v21[8];
      KeDelayExecutionThread(0, 0, &Interval);
      goto LABEL_129;
    default:
      WdLogSingleEntry5(0LL, 270LL, 5LL, a2, -1073741811LL, 0LL);
      goto LABEL_129;
  }
LABEL_130:
  if ( *v167 )
  {
LABEL_200:
    VIDMM_GLOBAL::EndPreparation(this, 0xFFFFFFFF, 0LL, 0, 0LL, 0LL);
    goto LABEL_201;
  }
  v70 = (unsigned int *)*((_QWORD *)v21 + 3);
  if ( v70 )
    *v70 = inited;
  v71 = 0LL;
  v171 = v174;
  v165 = a5;
  *((_QWORD *)this + 466) = (char *)this + 3720;
  for ( *((_QWORD *)this + 465) = (char *)this + 3720;
        (unsigned int)v71 < *((_DWORD *)this + 1754);
        v71 = (unsigned int)(v71 + 1) )
  {
    v72 = 0;
    v73 = 1584LL * (unsigned int)v71;
    if ( *(_DWORD *)(v73 + *((_QWORD *)this + 5028) + 24) )
    {
      do
      {
        v74 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * (v72 + *(_DWORD *)(v73 + *((_QWORD *)this + 5028) + 20)));
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v74 + 152LL))(v74);
        ++v72;
      }
      while ( v72 < *(_DWORD *)(v73 + *((_QWORD *)this + 5028) + 24) );
    }
    if ( (byte_1C006E941 & 1) != 0 )
      McTemplateK0p_EtwWriteTransfer(v19, &EventPagingEndPreparation, a3, *((_QWORD *)this + v71 + 143));
    if ( *((_DWORD *)this + v71 + 414) != *((_DWORD *)this + v71 + 478)
      || *((_DWORD *)this + v71 + 542) != *((_DWORD *)this + v71 + 606) )
    {
      VIDMM_GLOBAL::FlushPagingBufferInternal(this, v71, 0, 0LL, 0LL, 0, 0);
    }
    v19 = *((_QWORD *)this + v71 + 143);
    if ( v19 )
      *(_DWORD *)(v19 + 172) = *(_DWORD *)(v19 + 168);
  }
  v75 = (_QWORD **)((char *)this + 44680);
  if ( *v75 != v75 )
  {
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, 0xFFFFFFFF);
    v76 = *v75;
    if ( *v75 != v75 )
    {
      while ( 1 )
      {
        v77 = (_QWORD *)*v76;
        v78 = v76 - 38;
        if ( *(_QWORD **)(*v76 + 8LL) != v76 )
          break;
        v79 = (_QWORD *)v76[1];
        if ( (_QWORD *)*v79 != v76 )
          break;
        *v79 = v77;
        v77[1] = v79;
        *v76 = 0LL;
        v76 = v77;
        if ( (*((_DWORD *)v78 + 15) & 7) != 0 )
          WdLogSingleEntry5(0LL, 270LL, 63LL, v78, v78[4], 0LL);
        VIDMM_DEVICE::ResumeSchedulerDevice((VIDMM_DEVICE *)v78);
        if ( v76 == v75 )
          goto LABEL_296;
      }
LABEL_295:
      __fastfail(3u);
    }
  }
LABEL_296:
  if ( *((_BYTE *)this + 44696) )
  {
    VidSchiResumeFlipQueues(*(_QWORD *)(*((_QWORD *)this + 2) + 632LL), 0xFFFFFFFFLL);
    *((_BYTE *)this + 44696) = 0;
  }
  if ( a4 )
  {
    v149 = 0;
    v150 = 0LL;
    v151 = 0LL;
    v152 = *(_QWORD *)(*((_QWORD *)this + 2) + 632LL);
    v153 = 0;
    if ( *(_BYTE *)(v152 + 55) )
    {
      v151 = *(_QWORD **)(v152 + 280);
      if ( !*v151 )
      {
        VidSchSignalSyncObjectsFromCpu(1u, &v171, 0, (char *)&v165);
        goto LABEL_305;
      }
      v153 = *(_DWORD *)(v152 + 76);
    }
    else
    {
      v149 = *(_DWORD *)(v152 + 76);
      v150 = *(_QWORD **)(v152 + 264);
    }
    VidSchSignalSyncObjectsFromGpu(v153, (__int64)v151, v149, v150, 1u, (__int64)&v171, 0, (unsigned __int64 *)&v165);
LABEL_305:
    v19 = *((unsigned int *)this + 1754);
    if ( (unsigned int)v19 > 1 )
      VidSchWaitForPagingFence(
        *(_QWORD *)(*((_QWORD *)this + 2) + 632LL),
        v171,
        v165,
        (unsigned int)((1 << v19) - 1),
        v155);
  }
  *((_QWORD *)this + 879) = 0LL;
  *((_QWORD *)this + 880) = 0LL;
  *((_DWORD *)this + 2) = 0;
LABEL_201:
  if ( *(_DWORD *)v162 == 200 )
  {
    v93 = (struct _KEVENT *)(*(_QWORD *)(v162 + 16) + 72LL);
LABEL_314:
    KeSetEvent(v93, 0, 0);
    goto LABEL_315;
  }
  if ( !*v167 && v12 && _InterlockedExchangeAdd((volatile signed __int32 *)v12 + 40, 0xFFFFFFFF) == 1 )
  {
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v19, a2, a3, v20) + 24) = v12;
    v93 = (struct _KEVENT *)((char *)v12 + 168);
    goto LABEL_314;
  }
LABEL_315:
  *(_DWORD *)(v162 + 76) = inited;
  return inited;
}
