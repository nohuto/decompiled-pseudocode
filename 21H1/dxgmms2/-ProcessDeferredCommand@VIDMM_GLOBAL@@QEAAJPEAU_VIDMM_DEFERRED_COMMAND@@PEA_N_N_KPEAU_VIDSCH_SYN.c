/*
 * XREFs of ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0066220
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C008B710 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?ProcessPendingTerminations@VIDMM_WORKER_THREAD@@AEAAX_NPEA_N1@Z @ 0x1C00BACBC (-ProcessPendingTerminations@VIDMM_WORKER_THREAD@@AEAAX_NPEA_N1@Z.c)
 *     ?SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00BAD88 (-SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_.c)
 * Callees:
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C0001208 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     ?NotifyDeferredDestructionComplete@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C00015F0 (-NotifyDeferredDestructionComplete@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C48 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001CC0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002354 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0007440 (VidSchSignalSyncObjectsFromGpu.c)
 *     ?InsertToPenaltyBox@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@W4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C00122B8 (-InsertToPenaltyBox@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@W4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0012368 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     VidSchMarkDeviceAsError @ 0x1C00140D0 (VidSchMarkDeviceAsError.c)
 *     __security_check_cookie @ 0x1C0015C10 (__security_check_cookie.c)
 *     ?Feature_Servicing_2102c_29352024__private_IsEnabled@@YAHXZ @ 0x1C0015D08 (-Feature_Servicing_2102c_29352024__private_IsEnabled@@YAHXZ.c)
 *     ?Feature_Servicing_CpuHostAperture_30783247__private_IsEnabled@@YAHXZ @ 0x1C0015DD8 (-Feature_Servicing_CpuHostAperture_30783247__private_IsEnabled@@YAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016B50 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0024310 (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024E80 (McTemplateK0q_EtwWriteTransfer.c)
 *     VidSchCancelDeviceCommand @ 0x1C0033B04 (VidSchCancelDeviceCommand.c)
 *     VidSchSignalSyncObjectsFromCpu @ 0x1C0035850 (VidSchSignalSyncObjectsFromCpu.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C006179C (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00633D4 (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C006345C (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?NeedsApertureForLock@VIDMM_GLOBAL@@IEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006358C (-NeedsApertureForLock@VIDMM_GLOBAL@@IEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?FindNewAllocOwner@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00635C4 (-FindNewAllocOwner@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictTemporaryResourceForCleanup@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0063660 (-EvictTemporaryResourceForCleanup@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_A.c)
 *     ?TransferAllocationOwnership@VIDMM_GLOBAL@@IEAA_NPEAUVIDMM_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@1@Z @ 0x1C00636AC (-TransferAllocationOwnership@VIDMM_GLOBAL@@IEAA_NPEAUVIDMM_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@1@Z.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0063778 (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z @ 0x1C0064BBC (-NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z.c)
 *     ?BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C0064CA0 (-BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?NotifyAllocationEvicted@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0064D04 (-NotifyAllocationEvicted@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C0066138 (-CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0067E30 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z @ 0x1C0069F50 (-LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C006FFC0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00746A0 (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00760E8 (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C0082F34 (-SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1C0083104 (-SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C008328C (-ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?ResumePagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1C0083444 (-ResumePagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0083620 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C008537C (-SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C008539C (-SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C008698C (-EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C00874B0 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?CalculateLockData@VIDMM_GLOBAL@@IEAA?AUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@@Z @ 0x1C00882C4 (-CalculateLockData@VIDMM_GLOBAL@@IEAA-AUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@@Z.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C008A2B8 (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z @ 0x1C008A41C (-InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z.c)
 *     ?EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C008A6E8 (-EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00AFB88 (-DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00B0A18 (-EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?EvictFromFaultedList@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@@Z @ 0x1C00B0B1C (-EvictFromFaultedList@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@@Z.c)
 *     ?GetMostPreferredSegment@VIDMM_GLOBAL@@IEAAPEAVVIDMM_SEGMENT@@KU_D3DDDI_SEGMENTPREFERENCE@@PEA_N@Z @ 0x1C00B138C (-GetMostPreferredSegment@VIDMM_GLOBAL@@IEAAPEAVVIDMM_SEGMENT@@KU_D3DDDI_SEGMENTPREFERENCE@@PEA_N.c)
 *     ?PageInFromFaultedList@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@@Z @ 0x1C00B314C (-PageInFromFaultedList@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@@Z.c)
 *     ?RecommitTrimmedList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00B4020 (-RecommitTrimmedList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B42A8 (-RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z @ 0x1C00B42D8 (-RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_PROCESS_.c)
 *     ?TransferAllocationDecommit@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@1@Z @ 0x1C00B5308 (-TransferAllocationDecommit@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@.c)
 *     ?UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z @ 0x1C00B5AB0 (-UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z.c)
 *     ?UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z @ 0x1C00B5C40 (-UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00B61F0 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 *     ?VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z @ 0x1C00B7244 (-VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z.c)
 *     ?VerifyPreferredSegmentIsSubset@VIDMM_GLOBAL@@IEAAEU_D3DDDI_SEGMENTPREFERENCE@@K@Z @ 0x1C00B7364 (-VerifyPreferredSegmentIsSubset@VIDMM_GLOBAL@@IEAAEU_D3DDDI_SEGMENTPREFERENCE@@K@Z.c)
 *     ?SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00BAF2C (-SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     VidSchiResumeFlipQueues @ 0x1C00D18E0 (VidSchiResumeFlipQueues.c)
 *     VidSchWaitForPagingFence @ 0x1C00D4540 (VidSchWaitForPagingFence.c)
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
  int v9; // r9d
  __int64 *v10; // r13
  __int64 v11; // rcx
  __int64 v12; // r14
  struct _VIDMM_GLOBAL_ALLOC ***v13; // r15
  __int64 v14; // r12
  __int64 v15; // rbx
  __int64 v16; // rdi
  _QWORD *v17; // rax
  bool v18; // zf
  unsigned int v19; // edi
  __int64 v20; // rbx
  _QWORD *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  char v24; // r11
  struct _VIDMM_DEFERRED_COMMAND *v25; // rdi
  int v26; // edx
  unsigned int updated; // r13d
  __int64 v28; // rbx
  unsigned __int64 v29; // rdx
  char v30; // di
  VIDMM_DEVICE **v31; // rcx
  VIDMM_GLOBAL *v32; // rcx
  VIDMM_GLOBAL *v33; // rcx
  __int64 v34; // rbx
  _QWORD *v35; // rax
  int v36; // eax
  _QWORD *v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r8
  int v43; // r9d
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // rbx
  VIDMM_DEVICE *v47; // rdx
  VIDMM_GLOBAL *v48; // rcx
  VIDMM_DEVICE *v49; // r8
  int v50; // eax
  __int64 v51; // rax
  int v52; // eax
  int v53; // r9d
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rcx
  struct _VIDMM_LOCAL_ALLOC *NewAllocOwner; // r13
  char v58; // di
  __int64 v59; // r9
  struct _VIDMM_GLOBAL_ALLOC ***v60; // rax
  char v61; // al
  struct _VIDMM_LOCAL_ALLOC *v62; // rbx
  __int64 v63; // rax
  bool v64; // al
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rbx
  _QWORD *v69; // rax
  int v70; // eax
  __int64 v71; // rax
  int v72; // eax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rax
  __int64 v76; // rcx
  __int64 v77; // r8
  int v78; // r9d
  __int64 *v79; // rdi
  struct _VIDMM_LOCAL_ALLOC *v80; // r12
  VIDMM_GLOBAL *v81; // rcx
  __int64 v82; // rdx
  __int64 v83; // rax
  __int64 **v84; // rcx
  VIDMM_GLOBAL *v85; // rcx
  __int64 v86; // rcx
  __int64 v87; // r8
  int v88; // r9d
  __int64 *v89; // r14
  __int64 v90; // rax
  __int64 **v91; // rcx
  bool *v92; // rbx
  unsigned int *v93; // rax
  unsigned int v94; // r12d
  unsigned int v95; // ebx
  __int64 v96; // r14
  __int64 v97; // rcx
  _QWORD **v98; // r12
  __int64 v99; // rdx
  _QWORD *v100; // rdi
  _QWORD *v101; // rax
  _QWORD *v102; // r14
  _QWORD *v103; // rcx
  __int64 v104; // rbx
  _QWORD *v105; // rax
  __int64 v106; // r8
  _QWORD *v107; // r9
  _QWORD *v108; // rdx
  __int64 v109; // rcx
  unsigned int v110; // eax
  __int64 v111; // rcx
  __int64 v112; // rcx
  unsigned int v113; // ecx
  int v114; // edx
  __int64 v115; // rax
  int v116; // eax
  struct _VIDMM_GLOBAL_ALLOC *v117; // rbx
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // rax
  __int64 v121; // rax
  struct _KEVENT *v122; // rcx
  unsigned int v123; // eax
  _QWORD **v124; // r12
  _QWORD *v125; // r14
  _QWORD *i; // rbx
  VIDMM_GLOBAL *v127; // rcx
  int v128; // eax
  VIDMM_PROCESS *v129; // rcx
  struct VIDMM_ALLOC **v130; // r13
  bool *v131; // r12
  VIDMM_PROCESS *v132; // rcx
  VIDMM_PROCESS *v133; // rcx
  struct _VIDMM_DEFERRED_COMMAND *v134; // r12
  struct VIDMM_ALLOC **v135; // r13
  VIDMM_PROCESS *v136; // rcx
  int v137; // edx
  struct _VIDMM_DEFERRED_COMMAND *v138; // r10
  unsigned int v139; // r9d
  __int64 v140; // rbx
  struct _D3DDDI_SEGMENTPREFERENCE v141; // edi
  __int64 v142; // r13
  int v143; // ecx
  int v144; // eax
  unsigned __int8 v145; // r12
  __int64 v146; // rcx
  int v147; // r8d
  unsigned int v148; // r9d
  int v149; // eax
  int v150; // r8d
  int v151; // ebx
  int v152; // eax
  __int64 v153; // r8
  __int64 v154; // r10
  char v155; // bl
  __int64 v156; // r9
  __int64 v157; // r8
  int v158; // eax
  unsigned int v159; // edx
  char v160; // r8
  unsigned __int64 v161; // rcx
  char v162; // r9
  unsigned __int64 v163; // rbx
  int v164; // eax
  __int64 v165; // rdx
  __int64 v166; // rcx
  __int64 v167; // r8
  __int64 v168; // rax
  struct VIDMM_SEGMENT *MostPreferredSegment; // rax
  __int64 v170; // rdx
  __int64 v171; // rcx
  __int64 v172; // r8
  __int64 v173; // rax
  __int64 v174; // r13
  __int64 v175; // r12
  __int64 v176; // r8
  unsigned int v177; // r9d
  __int64 v178; // rdx
  __int64 v179; // rcx
  __int64 v180; // rcx
  char v181; // di
  struct _VIDMM_GLOBAL_ALLOC *v182; // rbx
  _QWORD *v183; // rax
  int v185; // [rsp+20h] [rbp-E0h]
  int v186; // [rsp+30h] [rbp-D0h]
  bool v187; // [rsp+40h] [rbp-C0h]
  bool v188; // [rsp+40h] [rbp-C0h]
  unsigned int v189; // [rsp+44h] [rbp-BCh]
  bool v193; // [rsp+5Ch] [rbp-A4h]
  unsigned int v194; // [rsp+5Ch] [rbp-A4h]
  struct _VIDMM_LOCAL_ALLOC *v195; // [rsp+68h] [rbp-98h]
  unsigned int v196; // [rsp+68h] [rbp-98h]
  bool v197; // [rsp+70h] [rbp-90h] BYREF
  int v198; // [rsp+74h] [rbp-8Ch]
  int v199; // [rsp+78h] [rbp-88h]
  int v200; // [rsp+7Ch] [rbp-84h] BYREF
  int v201; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v202; // [rsp+88h] [rbp-78h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v203; // [rsp+90h] [rbp-70h] BYREF
  __int64 v204; // [rsp+98h] [rbp-68h]
  union _LARGE_INTEGER Interval; // [rsp+A0h] [rbp-60h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v206; // [rsp+A8h] [rbp-58h]
  struct _VIDMM_GLOBAL_ALLOC ***v207; // [rsp+B0h] [rbp-50h]
  char v208[8]; // [rsp+B8h] [rbp-48h] BYREF
  DXGPUSHLOCK *v209; // [rsp+C0h] [rbp-40h]
  int v210; // [rsp+C8h] [rbp-38h]
  char v211[8]; // [rsp+D0h] [rbp-30h] BYREF
  DXGPUSHLOCK *v212; // [rsp+D8h] [rbp-28h]
  int v213; // [rsp+E0h] [rbp-20h]
  char v214[8]; // [rsp+E8h] [rbp-18h] BYREF
  DXGPUSHLOCK *v215; // [rsp+F0h] [rbp-10h]
  int v216; // [rsp+F8h] [rbp-8h]
  char v217[8]; // [rsp+100h] [rbp+0h] BYREF
  DXGPUSHLOCK *v218; // [rsp+108h] [rbp+8h]
  int v219; // [rsp+110h] [rbp+10h]
  char v220[8]; // [rsp+118h] [rbp+18h] BYREF
  _OWORD v221[2]; // [rsp+120h] [rbp+20h] BYREF
  __int128 v222; // [rsp+140h] [rbp+40h]
  __int128 v223; // [rsp+150h] [rbp+50h]
  __int128 v224; // [rsp+160h] [rbp+60h]
  __int128 v225; // [rsp+170h] [rbp+70h]
  __int128 v226; // [rsp+180h] [rbp+80h]
  __int128 v227; // [rsp+190h] [rbp+90h]
  __int64 v228; // [rsp+1A0h] [rbp+A0h]
  struct _KAPC_STATE v229; // [rsp+1B0h] [rbp+B0h] BYREF
  struct _KAPC_STATE v230; // [rsp+1E0h] [rbp+E0h] BYREF

  v9 = 0;
  v206 = a6;
  v10 = 0LL;
  v11 = (__int64)a8;
  v12 = 0LL;
  *a8 = 0LL;
  v13 = (struct _VIDMM_GLOBAL_ALLOC ***)*((_QWORD *)a2 + 2);
  v207 = v13;
  v195 = 0LL;
  v193 = 0;
  if ( v13 )
  {
    v10 = (__int64 *)*v13;
    v12 = (__int64)**v13;
    v195 = *(struct _VIDMM_LOCAL_ALLOC **)(v12 + 96);
    v11 = (*(_DWORD *)(v12 + 76) & 0x20000000) != 0;
    v193 = (*(_DWORD *)(v12 + 76) & 0x20000000) != 0;
  }
  v14 = *((_QWORD *)a2 + 1);
  v187 = 0;
  v189 = 0;
  if ( !v14 )
    v14 = (__int64)v13[1];
  *a3 = 0;
  v15 = *((int *)this + 2);
  v16 = *(int *)a2;
  if ( (_DWORD)v15 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v11, a2);
    v17[3] = 270LL;
    v17[4] = 64LL;
    v17[5] = this;
    v17[6] = v15;
    v17[7] = v16;
    WdLogEvent5_WdCriticalError(v17);
    v9 = 0;
  }
  ++*((_QWORD *)this + 576);
  v18 = *((_DWORD *)this + 1750) == 0;
  *((_DWORD *)this + 2) = v16;
  v19 = 0;
  *((_DWORD *)this + 12) = -1;
  *((_QWORD *)this + 878) = v14;
  *((_QWORD *)this + 879) = v13;
  if ( !v18 )
  {
    do
    {
      v20 = v19;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        McTemplateK0p_EtwWriteTransfer(v11, &EventPagingStartPreparation, (__int64)a3, *((_QWORD *)this + v19 + 143));
        v9 = 0;
      }
      if ( *((_DWORD *)this + v19 + 414) != *((_DWORD *)this + v19 + 478)
        || *((_DWORD *)this + v19 + 542) != *((_DWORD *)this + v19 + 606) )
      {
        v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v11, a2);
        v21[3] = 270LL;
        v21[4] = 33LL;
        v21[5] = this;
        v21[6] = 0LL;
        v21[7] = 0LL;
        WdLogEvent5_WdCriticalError(v21);
        v9 = 0;
      }
      ++v19;
      *((_DWORD *)this + v20 + 1024) = *((_DWORD *)this + v20 + 414);
      *((_DWORD *)this + v20 + 1088) = *((_DWORD *)this + v20 + 542);
      *((_DWORD *)this + v20 + 960) = 0;
    }
    while ( v19 < *((_DWORD *)this + 1750) );
  }
  v22 = *(_QWORD *)(v14 + 32);
  v23 = -1LL;
  v24 = 1;
  if ( *(_BYTE *)(v22 + 204)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v22 + 200), 0, 0)
    || *(_BYTE *)(*((_QWORD *)this + 3) + 2622LL)
    || *(_BYTE *)(*((_QWORD *)this + 2) + 889LL) )
  {
    v25 = a2;
    *((_DWORD *)a2 + 19) = -1071775232;
    *((_BYTE *)a2 + 72) = 1;
    goto LABEL_21;
  }
  v25 = a2;
  if ( *((_BYTE *)a2 + 72) )
  {
LABEL_21:
    v22 = *(unsigned int *)v25;
    if ( (unsigned int)(v22 - 203) <= 0xB )
    {
      v26 = 2281;
      if ( _bittest(&v26, v22 - 203) )
      {
        updated = *((_DWORD *)v25 + 19);
LABEL_145:
        v92 = a3;
        goto LABEL_146;
      }
    }
    if ( (_DWORD)v22 == 113 )
      *((_BYTE *)v25 + 64) = 0;
  }
  v28 = *(int *)v25;
  v29 = 0x1C0000000uLL;
  switch ( (int)v28 )
  {
    case 113:
      updated = VIDMM_GLOBAL::CommitVirtualAddressRangeSystemCommand(
                  (VIDMM_GLOBAL *)v22,
                  (struct _VIDMM_DEFERRED_COMMAND *)((char *)v25 + 32),
                  a8);
      if ( updated != -1073741267 )
        goto LABEL_145;
      v92 = a3;
LABEL_216:
      *v92 = 1;
      goto LABEL_217;
    case 119:
      v92 = a3;
      updated = VIDMM_GLOBAL::UpdateGpuVirtualAddressSystemCommand(this, *((PVOID *)v25 + 4), a8);
      if ( updated == -1073741267 )
        goto LABEL_216;
      goto LABEL_146;
    case 200:
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v22) + 24) = v13;
      if ( *((_DWORD *)v13 + 26) || *((_DWORD *)v13 + 39) )
      {
        v34 = *((int *)v13 + 26);
        v35 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v22, v29);
        v35[3] = 270LL;
        v35[4] = 42LL;
        v35[5] = this;
        v35[6] = v13;
        v35[7] = v34;
        WdLogEvent5_WdCriticalError(v35);
      }
      v36 = *((_DWORD *)v13 + 7) & 3;
      if ( v36 == 2 )
      {
        VIDMM_GLOBAL::NotifyAllocationEviction(this, (VIDMM_DEVICE **)v13, 0, 0LL, 0LL);
      }
      else if ( v36 == 1 )
      {
        v29 = (unsigned __int64)v13[7];
        v37 = v13 + 7;
        if ( *(struct _VIDMM_GLOBAL_ALLOC ****)(v29 + 8) != v13 + 7 )
          goto LABEL_319;
        v22 = (__int64)v13[8];
        if ( *(_QWORD **)v22 != v37 )
          goto LABEL_319;
        *(_QWORD *)v22 = v29;
        *(_QWORD *)(v29 + 8) = v22;
        *((_DWORD *)v13 + 7) &= 0xFFFFFFFC;
        v13[8] = 0LL;
        *v37 = 0LL;
      }
      if ( (*((_BYTE *)v13 + 25) & 1) != 0 )
        VIDMM_GLOBAL::UnpinOneAllocation(this, v13, 3LL);
      if ( (*((_DWORD *)v13 + 7) & 0x10) != 0 && g_IsInternalRelease )
      {
        v38 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v22, v29);
        v38[3] = 270LL;
        v38[4] = 9LL;
        v38[5] = 0LL;
        v38[6] = 0LL;
        v38[7] = 0LL;
        WdLogEvent5_WdCriticalError(v38);
      }
      if ( v13 == *(struct _VIDMM_GLOBAL_ALLOC ****)(v14 + 248) )
        *(_QWORD *)(v14 + 248) = 0LL;
      v39 = *(_QWORD *)(v14 + 16) + 360LL;
      if ( *(_QWORD *)(v14 + 16) != -360LL
        && *(struct _KTHREAD **)(*(_QWORD *)(v14 + 16) + 368LL) == KeGetCurrentThread() )
      {
        v40 = WdLogNewEntry5_WdAssertion(v22, v29, v23);
        *(_QWORD *)(v40 + 24) = 1569LL;
        WdLogEvent5_WdAssertion(v40);
      }
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v39, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v43 = *(_DWORD *)(v39 + 24);
          if ( v43 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q_EtwWriteTransfer(v41, &EventBlockThread, v42, v43);
        }
        ExAcquirePushLockExclusiveEx(v39, 0LL);
      }
      *(_QWORD *)(v39 + 8) = KeGetCurrentThread();
      if ( *((_BYTE *)v13 + 25) & 1 | *((_DWORD *)v13 + 38) )
      {
        VIDMM_PROCESS_ADAPTER_INFO::BeginMemoryUsageChange(*(VIDMM_PROCESS_ADAPTER_INFO **)(v14 + 16));
        VIDMM_DEVICE::NotifyAllocationEvicted((VIDMM_DEVICE ***)v14, (struct VIDMM_ALLOC *)v13);
        VIDMM_PROCESS_ADAPTER_INFO::CommitMemoryUsageChange(*(VIDMM_PROCESS_ADAPTER_INFO **)(v14 + 16), v44, v45);
      }
      *((_DWORD *)v13 + 38) = 0;
      *(_QWORD *)(v39 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v39, 0LL);
      KeLeaveCriticalRegion();
      v46 = *(_QWORD *)(v12 + 312);
      KeEnterCriticalRegion();
      if ( *(struct _KTHREAD **)(v46 + 16) == KeGetCurrentThread() )
      {
        v50 = *(_DWORD *)(v46 + 24);
        if ( v50 <= 0 )
        {
          v51 = WdLogNewEntry5_WdAssertion(v48, v47, v49);
          *(_QWORD *)(v51 + 24) = 659LL;
          WdLogEvent5_WdAssertion(v51);
          v50 = *(_DWORD *)(v46 + 24);
        }
        v52 = v50 + 1;
      }
      else
      {
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v46, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v53 = *(_DWORD *)(v46 + 28);
            if ( v53 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q_EtwWriteTransfer((__int64)v48, &EventBlockThread, (__int64)v49, v53);
          }
          _InterlockedIncrement64((volatile signed __int64 *)(v46 + 8));
          ExAcquirePushLockExclusiveEx(v46, 0LL);
        }
        if ( *(_QWORD *)(v46 + 16) )
        {
          v54 = WdLogNewEntry5_WdAssertion(v48, v47, v49);
          *(_QWORD *)(v54 + 24) = 683LL;
          WdLogEvent5_WdAssertion(v54);
        }
        if ( *(_DWORD *)(v46 + 24) )
        {
          v55 = WdLogNewEntry5_WdAssertion(v48, v47, v49);
          *(_QWORD *)(v55 + 24) = 684LL;
          WdLogEvent5_WdAssertion(v55);
        }
        *(_QWORD *)(v46 + 16) = KeGetCurrentThread();
        v52 = 1;
      }
      *(_DWORD *)(v46 + 24) = v52;
      if ( *((int *)v13[12] + 2) > 0 )
      {
        v56 = *(_QWORD *)(v14 + 32);
        v222 = 0LL;
        DWORD2(v222) = 3;
        v223 = (unsigned __int64)v13;
        memset(v221, 0, sizeof(v221));
        v228 = 0LL;
        v224 = 0LL;
        v225 = 0LL;
        v226 = 0LL;
        v227 = 0LL;
        VidSchCancelDeviceCommand(v56, (__int64)v221, 1, 0);
      }
      NewAllocOwner = 0LL;
      v58 = 0;
      if ( (**(_DWORD **)(v12 + 496) & 0x20000000) != 0 )
      {
        v47 = (VIDMM_DEVICE *)*v13;
        v48 = (*v13)[5];
        v59 = (__int64)(*v13 + 5);
        v49 = (VIDMM_DEVICE *)*v13;
        if ( v48 == (VIDMM_GLOBAL *)v59 )
        {
LABEL_86:
          v61 = 1;
        }
        else
        {
          while ( 1 )
          {
            v60 = (struct _VIDMM_GLOBAL_ALLOC ***)((char *)v48 - 40);
            v48 = *(VIDMM_GLOBAL **)v48;
            if ( v60 != v13 && (*((_DWORD *)v60 + 7) & 4) == 0 )
              break;
            v49 = (VIDMM_DEVICE *)*v13;
            if ( v48 == (VIDMM_GLOBAL *)v59 )
              goto LABEL_86;
          }
          v61 = 0;
        }
        if ( !v61 )
        {
LABEL_97:
          v68 = *(_QWORD *)(v12 + 312);
          if ( *(struct _KTHREAD **)(v68 + 16) != KeGetCurrentThread() )
          {
            v69 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v48, v47);
            v69[4] = 4LL;
            v69[3] = 275LL;
            v69[5] = v68;
            v69[6] = 0LL;
            v69[7] = 0LL;
            WdLogEvent5_WdCriticalError(v69);
          }
          v70 = *(_DWORD *)(v68 + 24);
          if ( v70 <= 0 )
          {
            v71 = WdLogNewEntry5_WdAssertion(v48, v47, v49);
            *(_QWORD *)(v71 + 24) = 703LL;
            WdLogEvent5_WdAssertion(v71);
            v70 = *(_DWORD *)(v68 + 24);
          }
          v72 = v70 - 1;
          *(_DWORD *)(v68 + 24) = v72;
          if ( !v72 )
          {
            *(_QWORD *)(v68 + 16) = 0LL;
            ExReleasePushLockExclusiveEx(v68, 0LL);
          }
          KeLeaveCriticalRegion();
          if ( v58 )
          {
            if ( this != (VIDMM_GLOBAL *)-39968LL && *((struct _KTHREAD **)this + 4997) == KeGetCurrentThread() )
            {
              v75 = WdLogNewEntry5_WdAssertion(v74, v73, v23);
              *(_QWORD *)(v75 + 24) = 1569LL;
              WdLogEvent5_WdAssertion(v75);
            }
            KeEnterCriticalRegion();
            if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 39968, 0LL) )
            {
              if ( bTracingEnabled )
              {
                v78 = *((_DWORD *)this + 9998);
                if ( v78 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                  McTemplateK0q_EtwWriteTransfer(v76, &EventBlockThread, v77, v78);
              }
              ExAcquirePushLockExclusiveEx((char *)this + 39968, 0LL);
            }
            v79 = (__int64 *)(v12 + 408);
            v80 = v195;
            *((_QWORD *)this + 4997) = KeGetCurrentThread();
            if ( *(_QWORD *)(v12 + 408) )
            {
              v81 = (VIDMM_GLOBAL *)*(unsigned int *)(*((_QWORD *)this + 3) + 232LL);
              VIDMM_GLOBAL::RemoveAllocationFromDecommitList(
                v81,
                (struct _VIDMM_GLOBAL_ALLOC *)v12,
                *(struct VIDMM_PROCESS_ADAPTER_INFO **)(*(_QWORD *)(*((_QWORD *)v195 + 1) + 16LL) + 8LL * (_QWORD)v81));
              if ( NewAllocOwner )
              {
                v82 = *(unsigned int *)(*((_QWORD *)this + 3) + 232LL);
                v83 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)NewAllocOwner + 1) + 16LL) + 8 * v82) + 424LL;
                v84 = *(__int64 ***)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)NewAllocOwner + 1) + 16LL) + 8 * v82) + 432LL);
                if ( *v84 != (__int64 *)v83 )
                  goto LABEL_319;
                *v79 = v83;
                *(_QWORD *)(v12 + 416) = v84;
                *v84 = v79;
                *(_QWORD *)(v83 + 8) = v79;
              }
            }
            *((_QWORD *)this + 4997) = 0LL;
            ExReleasePushLockExclusiveEx((char *)this + 39968, 0LL);
            KeLeaveCriticalRegion();
          }
          else
          {
            v80 = v195;
          }
          if ( v187 && !v193 )
          {
            v85 = *(VIDMM_GLOBAL **)(v12 + 128);
            if ( v85 )
            {
              if ( g_IsInternalReleaseOrDbg )
              {
                WdLogNewEntry5_WdTrace(v85);
                v85 = *(VIDMM_GLOBAL **)(v12 + 128);
              }
              LOBYTE(v185) = 1;
              (*(void (__fastcall **)(VIDMM_GLOBAL *, __int64, _QWORD, _QWORD, int, struct _VIDMM_LOCAL_ALLOC *))(*(_QWORD *)v85 + 48LL))(
                v85,
                v12,
                0LL,
                0LL,
                v185,
                v80);
              VIDMM_GLOBAL::FlushPagingBufferInternal(this, *(_DWORD *)(v12 + 76) & 0x3F, 0, 0LL, 0LL, 0, 0);
            }
            if ( *(_QWORD *)(v12 + 256) )
              VIDMM_GLOBAL::EvictTemporaryAllocation(v85, (struct _VIDMM_GLOBAL_ALLOC *)v12);
            if ( (*(_DWORD *)(v12 + 84) & 2) != 0 )
            {
              VIDMM_SEGMENT::UnlockAllocationBackingStore(this, (struct _VIDMM_GLOBAL_ALLOC *)v12, v80);
              VIDMM_GLOBAL::ReturnPinnedBackingStore(this, *(_QWORD *)(v12 + 8));
              *(_DWORD *)(v12 + 84) &= ~2u;
            }
            KeEnterCriticalRegion();
            if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 39968, 0LL) )
            {
              if ( bTracingEnabled )
              {
                v88 = *((_DWORD *)this + 9998);
                if ( v88 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                  McTemplateK0q_EtwWriteTransfer(v86, &EventBlockThread, v87, v88);
              }
              ExAcquirePushLockExclusiveEx((char *)this + 39968, 0LL);
            }
            v89 = (__int64 *)(v12 + 392);
            *((_QWORD *)this + 4997) = KeGetCurrentThread();
            v90 = *v89;
            if ( *v89 )
            {
              if ( *(__int64 **)(v90 + 8) != v89 )
                goto LABEL_319;
              v91 = (__int64 **)v89[1];
              if ( *v91 != v89 )
                goto LABEL_319;
              *v91 = (__int64 *)v90;
              *(_QWORD *)(v90 + 8) = v91;
              *v89 = 0LL;
            }
            *((_QWORD *)this + 4997) = 0LL;
            ExReleasePushLockExclusiveEx((char *)this + 39968, 0LL);
            KeLeaveCriticalRegion();
          }
          *((_DWORD *)v13 + 7) |= 4u;
          v22 = (__int64)v13[24];
          if ( v22 && _InterlockedExchangeAdd((volatile signed __int32 *)(v22 + 32), 0xFFFFFFFF) == 1 )
            ADAPTER_RENDER::NotifyDeferredDestructionComplete(
              *((ADAPTER_RENDER **)this + 2),
              (struct DXGTERMINATIONTRACKER *)v13[24]);
LABEL_143:
          v25 = a2;
LABEL_144:
          updated = 0;
          goto LABEL_145;
        }
        v62 = v195;
        if ( v49 != v195 )
        {
          *((_BYTE *)v47 + 32) |= 2u;
          goto LABEL_97;
        }
        v63 = WdLogNewEntry5_WdEvent(v48, v47);
        *(_QWORD *)(v63 + 24) = v12;
        *(_QWORD *)(v63 + 32) = v13;
        WdLogEvent5_WdEvent(v63);
        *((_BYTE *)v195 + 32) |= 2u;
        NewAllocOwner = VIDMM_GLOBAL::FindNewAllocOwner(this, (struct _VIDMM_GLOBAL_ALLOC *)v12);
        VIDMM_GLOBAL::EvictTemporaryResourceForCleanup(this, (struct _VIDMM_GLOBAL_ALLOC *)v12, v195);
        v64 = VIDMM_GLOBAL::TransferAllocationOwnership(this, v13, v195, NewAllocOwner);
        v66 = *(unsigned int *)(v12 + 84);
        v187 = !v64;
        if ( (v66 & 4) != 0 )
          NewAllocOwner = *(struct _VIDMM_LOCAL_ALLOC **)(v12 + 96);
        v67 = WdLogNewEntry5_WdEvent(v66, v65);
        *(_QWORD *)(v67 + 24) = *(_QWORD *)(v12 + 96);
        WdLogEvent5_WdEvent(v67);
      }
      else
      {
        v62 = v195;
        v187 = 1;
      }
      v58 = 1;
      if ( (*(_BYTE *)(v12 + 84) & 0xC0) == 0xC0 )
        VIDMM_GLOBAL::TransferAllocationDecommit(v48, (struct _VIDMM_GLOBAL_ALLOC *)v12, v62, NewAllocOwner);
      goto LABEL_97;
    case 203:
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v22) + 24) = v13;
      if ( *(_BYTE *)(v12 + 88) )
      {
        updated = -1071775482;
        goto LABEL_145;
      }
      v111 = *(unsigned int *)(*(_QWORD *)(v12 + 496) + 12LL);
      if ( !(_DWORD)v111 && (**(_DWORD **)(v12 + 496) & 0x20000) == 0 )
      {
        if ( g_IsInternalReleaseOrDbg )
          WdLogNewEntry5_WdTrace(v111);
        if ( *(_QWORD *)(v12 + 128) )
        {
          v112 = **(unsigned int **)(v12 + 496);
          if ( (v112 & 0x40000000) == 0 && ((v112 & 0x20000000) == 0 || (int)v112 >= 0) && (v112 & 0x80000) == 0 )
          {
            if ( g_IsInternalReleaseOrDbg )
              WdLogNewEntry5_WdTrace(v112);
            VIDMM_WORKER_THREAD::SuspendAccessToAllocation(
              *(VIDMM_WORKER_THREAD **)this,
              (struct _VIDMM_GLOBAL_ALLOC *)v12);
            VIDMM_GLOBAL::EvictAllocation(this, (struct VIDMM_ALLOC *)v13);
            VIDMM_GLOBAL::EvictAllReclaimedAllocation(this);
          }
        }
      }
      v113 = 4;
      v114 = **(_DWORD **)(v12 + 496);
      if ( (v114 & 0x20000) != 0 )
      {
        v113 = *((_DWORD *)v25 + 8);
      }
      else if ( (v114 & 0x40000000) != 0 || v114 < 0 )
      {
        v113 = 3;
      }
      v115 = *((_QWORD *)v25 + 5);
      if ( v115 != -1 )
      {
        *(_DWORD *)(v12 + 80) |= 0x800u;
        v115 = *((_QWORD *)v25 + 5);
      }
      v92 = a3;
      v116 = VIDMM_GLOBAL::PageInOneAllocation(this, v13, v113, a7, a3, a8, *((_DWORD *)v25 + 9), v115);
      *(_DWORD *)(v12 + 80) &= ~0x800u;
      updated = v116;
      if ( v116 >= 0 )
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v12 + 496) + 12LL));
      VIDMM_GLOBAL::RecommitTrimmedList(this);
      goto LABEL_146;
    case 206:
      v117 = **v13;
      if ( !*((_DWORD *)v117 + 84) )
        goto LABEL_205;
      if ( VIDMM_GLOBAL::NeedsApertureForLock(this, **v13) && (*((_DWORD *)v117 + 19) & 0x40) == 0 )
      {
        v120 = WdLogNewEntry5_WdWarning(v119, v118);
        *(_QWORD *)(v120 + 24) = v117;
        WdLogEvent5_WdWarning(v120);
        updated = -1073741823;
        goto LABEL_145;
      }
      v23 = -1LL;
LABEL_205:
      v22 = (unsigned __int8)(v24 & *((_BYTE *)v13 + 25));
      if ( !((unsigned int)v22 | *((_DWORD *)v13 + 38)) )
        goto LABEL_144;
      v121 = *((_QWORD *)v117 + 62);
      v92 = a3;
      if ( *(_WORD *)(v121 + 4) >= 2u )
      {
LABEL_318:
        updated = 0;
      }
      else
      {
        v186 = v9;
LABEL_208:
        updated = VIDMM_GLOBAL::PageInOneAllocation(this, v13, 0LL, a7, v92, a8, v186, -1LL);
      }
      goto LABEL_146;
    case 207:
      if ( !*((_DWORD *)v13 + 38) && (*((_BYTE *)v13 + 25) & 1) == 0 )
        VIDMM_GLOBAL::EvictOneAllocation(
          (struct VIDMM_ALLOC **)this,
          (struct VIDMM_ALLOC *)v13,
          *((_BYTE *)v25 + 32) & 1);
      _InterlockedDecrement((volatile signed __int32 *)v13 + 41);
      goto LABEL_144;
    case 208:
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v22) + 24) = v12;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v12 + 472, 0LL);
      if ( *(_QWORD *)(v12 + 256) )
      {
        VIDMM_GLOBAL::EvictTemporaryAllocation(v127, (struct _VIDMM_GLOBAL_ALLOC *)v12);
        VIDMM_GLOBAL::FlushPagingBufferInternal(this, *(_DWORD *)(v12 + 76) & 0x3F, 0, 0LL, 0LL, 0, 0);
      }
      if ( !(unsigned int)Feature_Servicing_CpuHostAperture_30783247__private_IsEnabled() )
      {
        VIDMM_GLOBAL::CalculateLockData(this, &v201, v13);
        if ( v201 == 4 )
        {
          v134 = a2;
          v135 = a8;
          v92 = a3;
        }
        else
        {
          v133 = (VIDMM_PROCESS *)v10[1];
          memset(&v230, 0, sizeof(v230));
          VIDMM_PROCESS::SafeAttach(v133, &v230);
          v134 = a2;
          v135 = a8;
          v92 = a3;
          v189 = VIDMM_GLOBAL::LockInternal(
                   this,
                   (struct VIDMM_LOCK2_DATA *)&v201,
                   (struct VIDMM_ALLOC *)v13,
                   *((void ***)a2 + 4),
                   *((_DWORD *)a2 + 10),
                   a3,
                   a8);
          VIDMM_PROCESS::SafeDetach(v136, &v230);
          if ( v201 != 4 )
            goto LABEL_248;
        }
        updated = VIDMM_GLOBAL::LockInternal(
                    this,
                    (struct VIDMM_LOCK2_DATA *)&v201,
                    (struct VIDMM_ALLOC *)v13,
                    *((void ***)v134 + 4),
                    *((_DWORD *)v134 + 10),
                    v92,
                    v135);
        goto LABEL_249;
      }
      if ( !*((_BYTE *)a2 + 52) )
      {
        *(_QWORD *)((char *)a2 + 44) = *(_QWORD *)VIDMM_GLOBAL::CalculateLockData(this, v220, v13);
        *((_BYTE *)a2 + 52) = 1;
      }
      v128 = *((_DWORD *)a2 + 11);
      if ( v128 == 4 )
      {
        v130 = a8;
        v131 = a3;
      }
      else
      {
        v129 = (VIDMM_PROCESS *)v10[1];
        memset(&v229, 0, sizeof(v229));
        VIDMM_PROCESS::SafeAttach(v129, &v229);
        v130 = a8;
        v131 = a3;
        v189 = VIDMM_GLOBAL::LockInternal(
                 this,
                 (struct _VIDMM_DEFERRED_COMMAND *)((char *)a2 + 44),
                 (struct VIDMM_ALLOC *)v13,
                 *((void ***)a2 + 4),
                 *((_DWORD *)a2 + 10),
                 a3,
                 a8);
        VIDMM_PROCESS::SafeDetach(v132, &v229);
        v128 = *((_DWORD *)a2 + 11);
      }
      if ( v128 == 4 )
      {
        v92 = a3;
        updated = VIDMM_GLOBAL::LockInternal(
                    this,
                    (struct _VIDMM_DEFERRED_COMMAND *)((char *)a2 + 44),
                    (struct VIDMM_ALLOC *)v13,
                    *((void ***)a2 + 4),
                    *((_DWORD *)a2 + 10),
                    v131,
                    v130);
        goto LABEL_249;
      }
      v92 = a3;
LABEL_248:
      updated = v189;
LABEL_249:
      ExReleasePushLockExclusiveEx(v12 + 472, 0LL);
      KeLeaveCriticalRegion();
      v25 = a2;
LABEL_146:
      if ( *v92 )
      {
LABEL_217:
        VIDMM_GLOBAL::EndPreparation(this, 0xFFFFFFFF, 0LL, 0, 0LL, 0LL);
        goto LABEL_218;
      }
      v93 = (unsigned int *)*((_QWORD *)v25 + 3);
      if ( v93 )
        *v93 = updated;
      v203 = v206;
      v94 = 0;
      v202 = a5;
      *((_QWORD *)this + 466) = (char *)this + 3720;
      *((_QWORD *)this + 465) = (char *)this + 3720;
      if ( *((_DWORD *)this + 1750) )
      {
        do
        {
          v95 = 0;
          v96 = 1584LL * v94;
          if ( *(_DWORD *)(v96 + *((_QWORD *)this + 5027) + 24) )
          {
            do
            {
              v97 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * (v95 + *(_DWORD *)(v96 + *((_QWORD *)this + 5027) + 20)));
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v97 + 160LL))(v97);
              ++v95;
            }
            while ( v95 < *(_DWORD *)(v96 + *((_QWORD *)this + 5027) + 24) );
          }
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0p_EtwWriteTransfer(v22, &EventPagingEndPreparation, v23, *((_QWORD *)this + v94 + 143));
          if ( *((_DWORD *)this + v94 + 414) != *((_DWORD *)this + v94 + 478)
            || *((_DWORD *)this + v94 + 542) != *((_DWORD *)this + v94 + 606) )
          {
            VIDMM_GLOBAL::FlushPagingBufferInternal(this, v94, 0, 0LL, 0LL, 0, 0);
          }
          v22 = *((_QWORD *)this + v94 + 143);
          if ( v22 )
            *(_DWORD *)(v22 + 172) = *(_DWORD *)(v22 + 168);
          ++v94;
        }
        while ( v94 < *((_DWORD *)this + 1750) );
        v13 = v207;
      }
      v98 = (_QWORD **)((char *)this + 44672);
      if ( *v98 != v98 )
      {
        VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, 0xFFFFFFFF);
        v100 = *v98;
        if ( *v98 != v98 )
        {
          while ( 1 )
          {
            v101 = (_QWORD *)*v100;
            v102 = v100 - 37;
            if ( *(_QWORD **)(*v100 + 8LL) != v100 )
              break;
            v103 = (_QWORD *)v100[1];
            if ( (_QWORD *)*v103 != v100 )
              break;
            *v103 = v101;
            v101[1] = v103;
            *v100 = 0LL;
            v100 = v101;
            if ( (*((_DWORD *)v102 + 13) & 7) != 0 )
            {
              v104 = v102[4];
              v105 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v103, v99);
              v105[6] = v104;
              v105[7] = 0LL;
              v105[3] = 270LL;
              v105[4] = 63LL;
              v105[5] = v102;
              WdLogEvent5_WdCriticalError(v105);
            }
            VIDMM_DEVICE::ResumeSchedulerDevice((VIDMM_DEVICE *)v102);
            if ( v100 == v98 )
              goto LABEL_168;
          }
LABEL_319:
          __fastfail(3u);
        }
      }
LABEL_168:
      if ( *((_BYTE *)this + 44688) )
      {
        VidSchiResumeFlipQueues(*(_QWORD *)(*((_QWORD *)this + 2) + 624LL), 0xFFFFFFFFLL);
        *((_BYTE *)this + 44688) = 0;
      }
      if ( a4 )
      {
        v106 = 0LL;
        v107 = 0LL;
        v108 = 0LL;
        v109 = *(_QWORD *)(*((_QWORD *)this + 2) + 624LL);
        v110 = 0;
        if ( *(_BYTE *)(v109 + 55) )
        {
          v108 = *(_QWORD **)(v109 + 272);
          if ( !*v108 )
          {
            VidSchSignalSyncObjectsFromCpu(1LL, &v203, 0LL, (char *)&v202);
            goto LABEL_323;
          }
          v110 = *(_DWORD *)(v109 + 68);
        }
        else
        {
          v106 = *(unsigned int *)(v109 + 68);
          v107 = *(_QWORD **)(v109 + 256);
        }
        VidSchSignalSyncObjectsFromGpu(v110, (__int64)v108, v106, v107, 1u, (__int64)&v203, 0, &v202);
LABEL_323:
        v22 = *((unsigned int *)this + 1750);
        if ( (unsigned int)v22 > 1 )
          VidSchWaitForPagingFence(
            *(_QWORD *)(*((_QWORD *)this + 2) + 624LL),
            v203,
            v202,
            (unsigned int)((1 << v22) - 1));
      }
      *((_QWORD *)this + 878) = 0LL;
      *((_QWORD *)this + 879) = 0LL;
      *((_DWORD *)this + 2) = 0;
LABEL_218:
      if ( *(_DWORD *)a2 == 200 )
      {
        v122 = (struct _KEVENT *)(*((_QWORD *)a2 + 2) + 72LL);
LABEL_332:
        KeSetEvent(v122, 0, 0);
        goto LABEL_333;
      }
      if ( !*a3 && v13 && _InterlockedExchangeAdd((volatile signed __int32 *)v13 + 40, 0xFFFFFFFF) == 1 )
      {
        if ( g_IsInternalReleaseOrDbg )
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v22) + 24) = v13;
        v122 = (struct _KEVENT *)(v13 + 21);
        goto LABEL_332;
      }
LABEL_333:
      *((_DWORD *)a2 + 19) = updated;
      return updated;
    case 209:
      v92 = a3;
      updated = VIDMM_GLOBAL::InitContextAllocation(this, (struct VIDMM_ALLOC *)v13, 1u, a3, a8);
      goto LABEL_146;
    case 210:
      v22 = *((_BYTE *)v13 + 25) & 1;
      if ( !((unsigned int)v22 | *((_DWORD *)v13 + 38)) )
        goto LABEL_144;
      v92 = a3;
      if ( *(_WORD *)(*(_QWORD *)(v12 + 496) + 4LL) >= 2u )
        goto LABEL_318;
      v123 = VIDMM_GLOBAL::PageInOneAllocation(this, v13, 0LL, a7, a3, a8, 0, -1LL);
      *(_DWORD *)(v12 + 80) &= ~0x40u;
      updated = v123;
      goto LABEL_146;
    case 211:
      v124 = (_QWORD **)(*((_QWORD *)v25 + 4) + 288LL);
      v125 = *v124;
      if ( *v124 == v124 )
        goto LABEL_144;
      do
      {
        for ( i = (_QWORD *)*(v125 - 2); i != v125 - 2; i = (_QWORD *)*i )
          VIDMM_GLOBAL::EvictOneAllocation((struct VIDMM_ALLOC **)this, (struct VIDMM_ALLOC *)(i - 5), 0LL);
        v125 = (_QWORD *)*v125;
      }
      while ( v125 != v124 );
      goto LABEL_143;
    case 212:
      VIDMM_GLOBAL::UpdateAllocationPriority(this, (struct VIDMM_ALLOC *)v13, *((_DWORD *)v25 + 8));
      goto LABEL_144;
    case 213:
      VIDMM_DEVICE::SuspendSchedulerDevice((VIDMM_DEVICE *)v14);
      VIDMM_DEVICE::SuspendPagingQueues((VIDMM_DEVICE *)v14);
      v30 = 0;
      if ( !*(_QWORD *)(v14 + 184) )
      {
        v30 = 1;
        DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v208, (struct _KTHREAD **)(*(_QWORD *)v14 + 44472LL), 0);
        DXGPUSHLOCK::AcquireExclusive(v209);
        v31 = *(VIDMM_DEVICE ***)v14;
        v210 = 2;
        VIDMM_GLOBAL::InsertToPenaltyBox((__int64)v31, v14, 4);
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v208);
      }
      if ( v13 )
        VIDMM_GLOBAL::FaultOneAllocation(*(VIDMM_GLOBAL **)v14, (VIDMM_DEVICE **)v13);
      else
        VIDMM_DEVICE::FaultAllAllocations((VIDMM_DEVICE *)v14);
      VIDMM_GLOBAL::EvictFromFaultedList(v32, (struct VIDMM_DEVICE *)v14);
      updated = VIDMM_GLOBAL::PageInFromFaultedList(this, (struct VIDMM_DEVICE *)v14);
      VIDMM_DEVICE::ResumeSchedulerDevice((VIDMM_DEVICE *)v14);
      VIDMM_DEVICE::ResumePagingQueues((VIDMM_DEVICE *)v14);
      if ( v30 )
      {
        DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v211, (struct _KTHREAD **)(*(_QWORD *)v14 + 44472LL), 0);
        DXGPUSHLOCK::AcquireExclusive(v212);
        v213 = 2;
        VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v33, (struct _LIST_ENTRY *)(v14 + 184));
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v211);
      }
      v25 = a2;
      goto LABEL_145;
    case 214:
      v137 = *(_DWORD *)(v12 + 76);
      v138 = a2;
      v139 = *(_DWORD *)(v12 + 68);
      v140 = *((_QWORD *)this + 5027);
      v141.0 = *(struct _D3DDDI_SEGMENTPREFERENCE::$F972DAF4C5B61B4C701096F96A6C826A::$59FADADC9B5649AD99C3978E94186D1F *)(v12 + 72);
      v142 = 1584LL * (v137 & 0x3F);
      v196 = v137 & 0x3F;
      v204 = v137 & 0x3F;
      v143 = *((_DWORD *)a2 + 12) >> 1;
      v144 = *((_DWORD *)a2 + 12) >> 2;
      LOBYTE(v143) = (*((_DWORD *)a2 + 12) & 2) != 0;
      LOBYTE(v144) = (*((_DWORD *)a2 + 12) & 4) != 0;
      v145 = (v137 & 0x80) != 0;
      v194 = v139;
      v199 = v143;
      v198 = v144;
      if ( (_BYTE)v143 )
      {
        v146 = *(_QWORD *)(v12 + 128);
        v147 = v137;
        v148 = *((_DWORD *)a2 + 9);
        v194 = v148;
        if ( v146
          && *(_DWORD *)(v12 + 120)
          && !_bittest((const int *)&v148, (unsigned __int8)(*(_BYTE *)(v146 + 20) - *(_BYTE *)(v140 + v142 + 20))) )
        {
          VIDMM_WORKER_THREAD::SuspendAccessToAllocation(
            *(VIDMM_WORKER_THREAD **)this,
            (struct _VIDMM_GLOBAL_ALLOC *)v12);
          VIDMM_GLOBAL::EvictAllocation(this, (struct VIDMM_ALLOC *)v13);
          VIDMM_GLOBAL::EvictAllReclaimedAllocation(this);
          v147 = *(_DWORD *)(v12 + 76);
          v148 = v194;
          v138 = a2;
        }
        *(_DWORD *)(v12 + 68) = v148;
        v149 = v147 ^ ((unsigned __int8)v147 ^ (unsigned __int8)(*((_BYTE *)v138 + 53) << 6)) & 0x40;
        *(_DWORD *)(v12 + 76) = v149;
        v145 = *((_BYTE *)v138 + 52);
        v137 = v149 ^ ((unsigned __int8)v149 ^ (unsigned __int8)(v145 << 7)) & 0x80;
        *(_DWORD *)(v12 + 76) = v137;
      }
      v188 = 0;
      if ( (*((_DWORD *)v138 + 12) & 1) != 0 )
      {
        v150 = *(_DWORD *)v13[12];
        if ( (v150 & 0x8000) == 0 )
        {
          v151 = 1 << (*(_WORD *)(v140 + v142 + 28) - *(_BYTE *)(v140 + v142 + 20));
          if ( (*((_DWORD *)v138 + 11) & 1) != 0 )
          {
            LOBYTE(v152) = v137;
            if ( *(_DWORD *)(v12 + 120) )
            {
              if ( (*(_DWORD *)(*(_QWORD *)(v12 + 128) + 80LL) & 0x1000) != 0 )
              {
                VIDMM_WORKER_THREAD::SuspendAccessToAllocation(
                  *(VIDMM_WORKER_THREAD **)this,
                  (struct _VIDMM_GLOBAL_ALLOC *)v12);
                VIDMM_GLOBAL::EvictAllocation(this, (struct VIDMM_ALLOC *)v13);
                VIDMM_GLOBAL::EvictAllReclaimedAllocation(this);
                v152 = *(_DWORD *)(v12 + 76);
                v138 = a2;
              }
              else
              {
                LOBYTE(v152) = v137;
                v188 = (v150 & 0x10000) != 0;
              }
            }
            if ( (v152 & 0x40) != 0 )
              *(_DWORD *)(v12 + 68) &= ~v151;
            *(_DWORD *)v13[12] |= 0x8000u;
          }
        }
      }
      if ( (_BYTE)v198 )
      {
        v141.0 = (struct _D3DDDI_SEGMENTPREFERENCE::$F972DAF4C5B61B4C701096F96A6C826A::$59FADADC9B5649AD99C3978E94186D1F)*((_DWORD *)v138 + 10);
        v153 = 0LL;
        v154 = 0LL;
        if ( v141.0 )
        {
          if ( (*(_BYTE *)&v141.0 & 0x1F) != 0 )
          {
            v153 = *(_QWORD *)(*((_QWORD *)this + 464)
                             + 8LL
                             * ((*(_BYTE *)&v141.0 & 0x1Fu) + *(_DWORD *)(*((_QWORD *)this + 5027) + v142 + 20) - 1));
            v145 = *(_BYTE *)(v153 + 80) & 1;
          }
          if ( ((v141.Value >> 6) & 0x1F) != 0 )
            v154 = *(_QWORD *)(*((_QWORD *)this + 464)
                             + 8LL
                             * (((v141.Value >> 6) & 0x1F) + *(_DWORD *)(*((_QWORD *)this + 5027) + v142 + 20) - 1));
        }
        v155 = 0;
        if ( *(_DWORD *)(v12 + 120) )
        {
          v156 = *(_QWORD *)(v12 + 128);
          if ( v153 == v156 || v154 == v156 )
          {
            if ( *(_DWORD *)(v12 + 72) != v141.0 )
            {
              v157 = *(_QWORD *)(v12 + 96);
              if ( v157 )
              {
                if ( *(_QWORD *)(v157 + 8) )
                {
                  v155 = 1;
                  VidMmRecordAlloc(this, v12, v157, v156, *(_QWORD *)(v12 + 16), 1);
                }
              }
            }
          }
          else
          {
            VIDMM_WORKER_THREAD::SuspendAccessToAllocation(
              *(VIDMM_WORKER_THREAD **)this,
              (struct _VIDMM_GLOBAL_ALLOC *)v12);
            VIDMM_GLOBAL::EvictAllocation(this, (struct VIDMM_ALLOC *)v13);
            VIDMM_GLOBAL::EvictAllReclaimedAllocation(this);
          }
        }
        v158 = (*(_DWORD *)(v12 + 76) ^ (v145 << 10)) & 0x400;
        *(struct _D3DDDI_SEGMENTPREFERENCE *)(v12 + 72) = v141;
        *(_DWORD *)(v12 + 76) ^= v158;
        if ( v155 )
          VidMmRecordAlloc(this, v12, *(_QWORD *)(v12 + 96), *(_QWORD *)(v12 + 128), *(_QWORD *)(v12 + 16), 0);
      }
      if ( (unsigned int)Feature_Servicing_2102c_29352024__private_IsEnabled() && (*((_DWORD *)a2 + 12) & 8) != 0 )
        *(_DWORD *)(v12 + 80) ^= (*(_DWORD *)(v12 + 80) ^ (*((_DWORD *)a2 + 11) << 19)) & 0x100000;
      v159 = *(_DWORD *)(v12 + 76);
      v160 = v198;
      v161 = v159;
      v162 = v199;
      v163 = (unsigned __int8)(v159 >> 12);
      if ( (_BYTE)v198 && (_BYTE)v199 )
      {
        v164 = v159 ^ (v159 ^ (*((_DWORD *)a2 + 8) << 12)) & 0xF0000;
        *(_DWORD *)(v12 + 76) = v164;
        v161 = v164 ^ ((unsigned __int16)v164 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)a2 + 8) << 12)) & 0xF000u;
        *(_DWORD *)(v12 + 76) = v161;
      }
      if ( v160 != v162 )
      {
        if ( !VIDMM_GLOBAL::VerifyPreferredSegmentIsSubset(
                (VIDMM_GLOBAL *)v161,
                *(struct _D3DDDI_SEGMENTPREFERENCE *)(v12 + 72),
                v194) )
        {
          v168 = WdLogNewEntry5_WdAssertion(v166, v165, v167);
          *(_QWORD *)(v168 + 24) = 11450LL;
          WdLogEvent5_WdAssertion(v168);
          VidSchMarkDeviceAsError((__int64)v13[1][4]);
        }
        MostPreferredSegment = VIDMM_GLOBAL::GetMostPreferredSegment(this, v196, v141, &v197);
        v200 = 0;
        if ( !VIDMM_GLOBAL::VerifyBudgetGroups(
                this,
                v196,
                v194,
                MostPreferredSegment,
                (struct _VIDMM_VERIFY_BUDGET_GROUPS *)&v200) )
        {
          v173 = WdLogNewEntry5_WdAssertion(v171, v170, v172);
          *(_QWORD *)(v173 + 24) = 11462LL;
          WdLogEvent5_WdAssertion(v173);
          VidSchMarkDeviceAsError((__int64)v13[1][4]);
        }
        LODWORD(v161) = *(_DWORD *)(v12 + 76) ^ (*(_DWORD *)(v12 + 76) ^ (v200 << 12)) & 0xF0000 ^ (*(_WORD *)(v12 + 76) ^ (unsigned __int16)((_WORD)v200 << 12)) & 0xF000;
        *(_DWORD *)(v12 + 76) = v161;
      }
      if ( ((unsigned int)v163 >> 4 != (WORD1(v161) & 0xF)
         || (((unsigned __int8)v163 ^ (unsigned __int8)((unsigned int)v161 >> 12)) & 0xF) != 0)
        && *((_BYTE *)v13 + 25) & 1 | *((_DWORD *)v13 + 38) )
      {
        v174 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 96) + 8LL) + 16LL) + 8 * v204);
        v175 = *(_QWORD *)(v174 + 48) + 296LL * (*(_DWORD *)(v12 + 76) & 0x3F);
        DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v214, (struct _KTHREAD **)(v174 + 360), 0);
        DXGPUSHLOCK::AcquireExclusive(v215);
        v216 = 2;
        VIDMM_PROCESS_ADAPTER_INFO::BeginMemoryUsageChange((VIDMM_PROCESS_ADAPTER_INFO *)v174);
        v177 = *(_DWORD *)(v12 + 76);
        v178 = v163;
        if ( (((unsigned __int8)v163 ^ (unsigned __int8)(v177 >> 12)) & 0xF) != 0 )
        {
          *(_QWORD *)(v175 + 8 * (v163 & 0xF) + 136) -= *(_QWORD *)(v12 + 16);
          v179 = (unsigned __int8)HIBYTE(*(_WORD *)(v12 + 76)) >> 4;
          *(_QWORD *)(v175 + 8 * v179 + 136) += *(_QWORD *)(v12 + 16);
          v177 = *(_DWORD *)(v12 + 76);
        }
        if ( (unsigned int)v163 >> 4 != (HIWORD(v177) & 0xF) )
        {
          v178 = v163 >> 4;
          *(_QWORD *)(v175 + 8 * (v163 >> 4) + 72) -= *(_QWORD *)(v12 + 16);
          v180 = v175 + 8LL * (*(_WORD *)(v12 + 78) & 0xF);
          *(_QWORD *)(v180 + 72) += *(_QWORD *)(v12 + 16);
        }
        VIDMM_PROCESS_ADAPTER_INFO::CommitMemoryUsageChange((VIDMM_PROCESS_ADAPTER_INFO *)v174, v178, v176);
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v214);
      }
      v25 = a2;
      *((_DWORD *)a2 + 12) &= 0xFFFFFFF8;
      if ( (unsigned int)Feature_Servicing_2102c_29352024__private_IsEnabled() )
        *((_DWORD *)a2 + 12) &= ~8u;
      if ( v188 && *(_QWORD *)(v12 + 128) )
        VIDMM_GLOBAL::NotifyResidency(this, (struct _VIDMM_GLOBAL_ALLOC *)v12, 1u);
      v22 = *((_BYTE *)v13 + 25) & 1;
      if ( !((unsigned int)v22 | *((_DWORD *)v13 + 38)) )
        goto LABEL_144;
      v92 = a3;
      if ( *(_WORD *)(*(_QWORD *)(v12 + 496) + 4LL) >= 2u )
        goto LABEL_318;
      v186 = 0;
      goto LABEL_208;
    case 215:
      v181 = 0;
      v182 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 4);
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v217, (struct _KTHREAD **)this + 4996, 0);
      DXGPUSHLOCK::AcquireExclusive(v218);
      v18 = *((_QWORD *)v182 + 51) == 0LL;
      v219 = 2;
      if ( !v18 )
      {
        VIDMM_GLOBAL::RemoveAllocationFromDecommitList(this, v182);
        v181 = 1;
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v217);
      if ( v181 )
        VIDMM_GLOBAL::DecommitGlobalAllocation(this, v182);
      updated = 0;
      v25 = a2;
      goto LABEL_145;
    case 217:
      Interval.QuadPart = -10000LL * *((unsigned int *)v25 + 8);
      KeDelayExecutionThread(0, 0, &Interval);
      goto LABEL_144;
    default:
      v183 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v22, 0x1C0000000uLL);
      v183[3] = 270LL;
      v183[4] = 5LL;
      v183[5] = v28;
      v183[6] = -1073741811LL;
      v183[7] = 0LL;
      WdLogEvent5_WdCriticalError(v183);
      goto LABEL_144;
  }
}
