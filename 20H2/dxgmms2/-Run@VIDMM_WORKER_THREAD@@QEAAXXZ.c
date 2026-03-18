/*
 * XREFs of ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C008B830
 * Callers:
 *     ?VidMmWorkerThreadProc@@YAXPEAX@Z @ 0x1C0096830 (-VidMmWorkerThreadProc@@YAXPEAX@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00115BC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOEXPUSHLOCK@@QEAAXXZ @ 0x1C00119D0 (-Release@DXGAUTOEXPUSHLOCK@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0011A64 (--3@YAXPEAX@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0011A88 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0011B20 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0012350 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00123C8 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?GetNextPendingTermination@VIDMM_GLOBAL@@QEAAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C0012690 (-GetNextPendingTermination@VIDMM_GLOBAL@@QEAAPEAUVIDMM_ALLOC@@PEA_N@Z.c)
 *     VidSchMarkDeviceAsError @ 0x1C0015BD0 (VidSchMarkDeviceAsError.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00177C8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00177EC (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00182E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0023D70 (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024BB4 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0iq_EtwWriteTransfer @ 0x1C0024CEC (McTemplateK0iq_EtwWriteTransfer.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x1C0024D6C (McTemplateK0ppp_EtwWriteTransfer.c)
 *     McTemplateK0ppx_EtwWriteTransfer @ 0x1C0024DF4 (McTemplateK0ppx_EtwWriteTransfer.c)
 *     McTemplateK0ppxx_EtwWriteTransfer @ 0x1C0024E80 (McTemplateK0ppxx_EtwWriteTransfer.c)
 *     McTemplateK0qqtqttp_EtwWriteTransfer @ 0x1C0024F18 (McTemplateK0qqtqttp_EtwWriteTransfer.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1C0070774 (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0075620 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C007E17C (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z @ 0x1C007F564 (-StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C007F608 (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?CleanupMarkedForEvictionAllocationsWorker@VIDMM_GLOBAL@@QEAAEXZ @ 0x1C00815BC (-CleanupMarkedForEvictionAllocationsWorker@VIDMM_GLOBAL@@QEAAEXZ.c)
 *     ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00816C0 (-ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C0081BB0 (-HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z @ 0x1C00822F0 (-SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z.c)
 *     ?UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ @ 0x1C0082310 (-UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ.c)
 *     ?CheckBudgetRefreshConditionOnProcessMemoryChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C0082658 (-CheckBudgetRefreshConditionOnProcessMemoryChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C0082848 (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0082B34 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0082EA0 (-Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z @ 0x1C0084770 (-HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z.c)
 *     ?ResetCleanupCounters@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C0087B44 (-ResetCleanupCounters@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C008978C (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?Defragment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C00AFAD0 (-Defragment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     ?GetDefragSegment@VIDMM_GLOBAL@@QEAAPEAVVIDMM_SEGMENT@@GI@Z @ 0x1C00B0FDC (-GetDefragSegment@VIDMM_GLOBAL@@QEAAPEAVVIDMM_SEGMENT@@GI@Z.c)
 *     ?FullySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C00B8C60 (-FullySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?IsBetterYieldCandidate@VIDMM_DEVICE@@QEAA_NPEAV1@@Z @ 0x1C00B8E9C (-IsBetterYieldCandidate@VIDMM_DEVICE@@QEAA_NPEAV1@@Z.c)
 *     ?Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z @ 0x1C00B9650 (-Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z.c)
 *     ?HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEAW4VIDMM_PAGE_IN_PASS@@PEAPEAV2@@Z @ 0x1C00BA288 (-HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@PEA.c)
 *     ?ReclaimPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C00BCA18 (-ReclaimPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z.c)
 *     ?RewindPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C00BCB34 (-RewindPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z.c)
 *     ?Init@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@@Z @ 0x1C00C077C (-Init@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@@Z.c)
 *     ?LogFullDefragPass@VIDMM_COMMIT_TELEMETRY@@QEAAXK@Z @ 0x1C00C0D00 (-LogFullDefragPass@VIDMM_COMMIT_TELEMETRY@@QEAAXK@Z.c)
 *     ?LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C00C0E2C (-LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z.c)
 *     ?LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1C00C1274 (-LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 *     ?LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1C00C15E0 (-LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 *     ?CurateVPR@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00C7574 (-CurateVPR@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?OfferAllocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00C8A40 (-OfferAllocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z @ 0x1C00CA894 (-TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z.c)
 *     ?AssignBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z @ 0x1C00CB7F0 (-AssignBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z.c)
 *     ?SendBudgetChangeNotifications@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00CC0C8 (-SendBudgetChangeNotifications@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?SetupBudgetState@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@K@Z @ 0x1C00CC184 (-SetupBudgetState@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@K@Z.c)
 */

void __fastcall VIDMM_WORKER_THREAD::Run(VIDMM_WORKER_THREAD *this)
{
  VIDMM_WORKER_THREAD *v1; // r13
  struct _KTHREAD *CurrentThread; // rcx
  struct _KEVENT *v3; // rcx
  __int64 v4; // rcx
  char *v5; // rdi
  char v6; // r15
  unsigned __int8 v7; // r14
  unsigned __int8 v8; // si
  __int64 v9; // rcx
  union _LARGE_INTEGER v10; // rax
  union _LARGE_INTEGER *v11; // rbx
  NTSTATUS v12; // esi
  __int64 v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 v19; // rsi
  _QWORD **v20; // rbx
  _QWORD **v21; // rdi
  _QWORD *v22; // rax
  __int64 v23; // r8
  struct VIDMM_PAGING_QUEUE_PACKET *v24; // rdi
  struct VIDMM_DEVICE *v25; // r15
  char *v26; // r12
  __int64 v27; // rdx
  _DWORD *v28; // rcx
  bool *v29; // r8
  char *v30; // rsi
  VIDMM_WORKER_THREAD *v31; // r14
  bool *v32; // r13
  VIDMM_WORKER_THREAD *v33; // rsi
  __int64 v34; // rbx
  __int64 v35; // rdi
  __int64 v36; // rcx
  __int64 v37; // r8
  VIDMM_WORKER_THREAD *v38; // r14
  char *v39; // rsi
  __int64 v40; // rax
  VIDMM_WORKER_THREAD *v41; // r14
  char *v42; // rsi
  char *v43; // r14
  int v44; // edi
  unsigned __int8 v45; // si
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rbx
  char *v49; // r12
  __int64 v50; // rdi
  char v51; // r14
  unsigned int v52; // esi
  __int64 v53; // rdx
  struct _RTL_BALANCED_NODE *v54; // rax
  unsigned __int64 i; // r8
  __int64 v56; // r9
  unsigned __int64 v57; // rcx
  unsigned __int64 v58; // rax
  char v59; // al
  _QWORD **v60; // rax
  unsigned __int64 v61; // rcx
  unsigned __int64 v62; // rcx
  char v63; // al
  _QWORD *v64; // rcx
  __int64 v65; // rdx
  struct _RTL_BALANCED_NODE *v66; // rax
  _QWORD *j; // rcx
  __int64 v68; // r9
  unsigned __int64 v69; // rax
  char v70; // al
  _QWORD **v71; // rax
  _QWORD *v72; // rdx
  bool v73; // zf
  __int64 v74; // rdx
  __int64 v75; // r8
  VIDMM_GLOBAL *v76; // rbx
  __int64 v77; // rcx
  __int64 v78; // rdi
  __int64 v79; // rcx
  __int64 v80; // r8
  bool v81; // bl
  VIDMM_GLOBAL *v82; // rbx
  __int64 v83; // rdi
  char v84; // bl
  VIDMM_GLOBAL *v85; // rdi
  VIDMM_GLOBAL *v86; // rsi
  __int64 v87; // rcx
  __int64 v88; // r8
  VIDMM_GLOBAL *v89; // rbx
  VIDMM_GLOBAL *v90; // rdi
  VIDMM_GLOBAL *v91; // rbx
  __int64 v92; // rsi
  unsigned int v93; // r9d
  __int64 v94; // rdx
  __int64 v95; // rcx
  unsigned __int64 v96; // rcx
  char v97; // al
  VIDMM_GLOBAL *v98; // r8
  VIDMM_GLOBAL *v99; // rcx
  struct VIDMM_ALLOC *NextPendingTermination; // rax
  VIDMM_GLOBAL *v101; // rcx
  VIDMM_GLOBAL *v102; // rbx
  int v103; // eax
  VIDMM_GLOBAL *v104; // rdi
  unsigned int v105; // ebx
  __int64 v106; // rcx
  _QWORD *v107; // rdx
  __int64 v108; // rbx
  __int64 v109; // r9
  _QWORD *v110; // rdx
  __int64 v111; // rcx
  char *v112; // rax
  char v113; // bl
  struct VIDMM_PAGING_QUEUE_PACKET *v114; // r12
  int *v115; // rsi
  __int64 v116; // rdx
  __int64 v117; // rcx
  _QWORD *v118; // rax
  int v119; // eax
  __int64 v120; // rdx
  __int64 v121; // r8
  struct VIDMM_PAGING_QUEUE_PACKET *v122; // rbx
  int v123; // r12d
  __int64 v124; // rcx
  __int64 v125; // rdx
  char v126; // al
  struct VIDMM_PAGING_QUEUE_PACKET *v127; // rsi
  __int64 v128; // rbx
  __int64 v129; // rdx
  struct VIDMM_PAGING_QUEUE_PACKET **v130; // rcx
  __int64 v131; // rbx
  bool *v132; // rcx
  bool **v133; // rax
  struct _KEVENT *v134; // rcx
  __int64 v135; // rcx
  bool *v136; // rbx
  __int64 v137; // rbx
  __int64 v138; // rbx
  unsigned __int64 v139; // r9
  unsigned __int64 v140; // r9
  unsigned __int64 v141; // r9
  unsigned __int64 v142; // r9
  char **v143; // r12
  char v144; // r13
  __int64 v145; // rdi
  int v146; // ebx
  char v147; // dl
  char *v148; // rax
  _QWORD *v149; // rax
  __int64 v150; // rdx
  char **v151; // r12
  char v152; // r13
  __int64 v153; // rdi
  int v154; // ebx
  char v155; // dl
  char *v156; // rax
  __int64 v157; // rbx
  ULONG TimeIncrement; // eax
  __int64 v159; // rax
  bool *v160; // r12
  unsigned __int8 v161; // r13
  __int64 v162; // rdi
  int v163; // ebx
  _QWORD *v164; // rax
  int v165; // eax
  int v166; // r9d
  int v167; // r9d
  int v168; // r9d
  char v169; // bl
  char v170; // r12
  VIDMM_GLOBAL *v171; // r15
  __int64 v172; // r8
  VIDMM_GLOBAL **v173; // rax
  struct _VIDMM_GLOBAL_ALLOC *v174; // r13
  VIDMM_GLOBAL *v175; // rbx
  VIDMM_GLOBAL **v176; // rcx
  __int64 v177; // rax
  __int64 v178; // rcx
  VIDMM_SEGMENT *v179; // rcx
  VIDMM_GLOBAL **v180; // rcx
  int v181; // r8d
  __int64 v182; // rdi
  int v183; // r8d
  __int64 v184; // rdx
  int v185; // r8d
  __int64 v186; // rax
  __int64 v187; // rdx
  char **v188; // rcx
  char **v189; // rcx
  char **v190; // rcx
  char **v191; // rcx
  __int64 v192; // rbx
  DXGPUSHLOCK *v193; // rsi
  _QWORD **v194; // rdi
  _QWORD **v195; // rbx
  _QWORD *v196; // rax
  struct _KEVENT *v197; // rcx
  _QWORD *v198; // rax
  __int64 v199; // rax
  __int64 v200; // rax
  __int64 v201; // rax
  __int64 v202; // rax
  bool **v203; // rax
  char **v204; // rax
  __int64 v205; // rax
  _QWORD *v206; // rax
  __int64 v207; // rcx
  __int64 v208; // rcx
  char *v209; // rax
  char *v210; // rax
  VIDMM_COMMIT_TELEMETRY *v211; // rcx
  _QWORD *v212; // rax
  _QWORD *v213; // rax
  _QWORD *v214; // rax
  _QWORD *v215; // rax
  struct VIDMM_GLOBAL **v216; // r12
  VIDMM_COMMIT_TELEMETRY *v217; // rcx
  int v218; // r12d
  int v219; // eax
  __int64 v220; // rdx
  struct VIDMM_SEGMENT *DefragSegment; // rsi
  _QWORD *v222; // rbx
  char IsProcessCommitRelinquished; // al
  const CHAR *v224; // r8
  __int64 v225; // r9
  struct VIDMM_PAGING_QUEUE_PACKET *v226; // rdi
  struct VIDMM_DEVICE *v227; // rax
  __int64 v228; // rax
  int v229; // ebx
  ULONG v230; // edi
  int v231; // ebx
  unsigned int v232; // esi
  __int64 v233; // rdx
  __int64 v234; // rcx
  __int64 v235; // rax
  struct VIDMM_DEVICE *v236; // rbx
  VIDMM_DEVICE *v237; // rdi
  struct VIDMM_DEVICE *v238; // rsi
  __int64 v239; // rdx
  __int64 v240; // rax
  unsigned int v241; // esi
  __int64 v242; // rcx
  __int64 v243; // r8
  __int64 v244; // rdi
  unsigned int v245; // esi
  __int64 v246; // rdi
  unsigned int k; // r14d
  __int64 v248; // rax
  __int64 v249; // r15
  int v250; // eax
  _QWORD **v251; // rdi
  _QWORD *v252; // rbx
  VIDMM_DEVICE *v253; // rcx
  unsigned __int8 v254; // [rsp+50h] [rbp-B0h]
  char v255; // [rsp+51h] [rbp-AFh]
  bool v256; // [rsp+52h] [rbp-AEh] BYREF
  char v257; // [rsp+53h] [rbp-ADh]
  bool v258; // [rsp+54h] [rbp-ACh] BYREF
  struct VIDMM_PAGING_QUEUE_PACKET *v259; // [rsp+58h] [rbp-A8h]
  int v260; // [rsp+60h] [rbp-A0h]
  bool v261; // [rsp+64h] [rbp-9Ch] BYREF
  char *v262; // [rsp+68h] [rbp-98h]
  bool *v263; // [rsp+70h] [rbp-90h]
  struct VIDMM_ALLOC *v264; // [rsp+78h] [rbp-88h] BYREF
  int v265; // [rsp+80h] [rbp-80h] BYREF
  int ThreadInformation; // [rsp+84h] [rbp-7Ch] BYREF
  char v267[8]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v268; // [rsp+90h] [rbp-70h]
  int v269; // [rsp+98h] [rbp-68h]
  struct VIDMM_DEVICE *v270; // [rsp+A0h] [rbp-60h]
  int v271; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v272; // [rsp+B0h] [rbp-50h]
  void *v273; // [rsp+C0h] [rbp-40h]
  int v274; // [rsp+C8h] [rbp-38h]
  union _LARGE_INTEGER v275; // [rsp+D0h] [rbp-30h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+D8h] [rbp-28h] BYREF
  struct VIDMM_ALLOC *v277; // [rsp+E0h] [rbp-20h] BYREF
  PVOID Object; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v279; // [rsp+F0h] [rbp-10h]
  __int64 v280; // [rsp+100h] [rbp+0h]
  int v281; // [rsp+108h] [rbp+8h]
  char v282[8]; // [rsp+110h] [rbp+10h] BYREF
  void *v283; // [rsp+118h] [rbp+18h]
  int v284; // [rsp+120h] [rbp+20h]
  char v285[8]; // [rsp+128h] [rbp+28h] BYREF
  DXGPUSHLOCK *v286; // [rsp+130h] [rbp+30h]
  int v287; // [rsp+138h] [rbp+38h]
  int v288; // [rsp+140h] [rbp+40h] BYREF
  __int64 v289; // [rsp+144h] [rbp+44h]
  int v290; // [rsp+14Ch] [rbp+4Ch]
  struct VIDMM_ALLOC *v291; // [rsp+150h] [rbp+50h]
  __int64 v292; // [rsp+158h] [rbp+58h]
  __int128 v293; // [rsp+160h] [rbp+60h]
  __int128 v294; // [rsp+170h] [rbp+70h]
  __int128 v295; // [rsp+180h] [rbp+80h]
  char v297; // [rsp+1E8h] [rbp+E8h]
  bool v298; // [rsp+1F0h] [rbp+F0h] BYREF
  char v299; // [rsp+1F8h] [rbp+F8h]

  v1 = this;
  CurrentThread = KeGetCurrentThread();
  *((_QWORD *)v1 + 1) = CurrentThread;
  KeSetActualBasePriorityThread(CurrentThread, 15LL);
  ThreadInformation = 1;
  ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadBreakOnTermination|0x20, &ThreadInformation, 4u);
  KeWaitForSingleObject((PVOID)(*((_QWORD *)v1 + 22) + 24LL), Executive, 0, 0, 0LL);
  v3 = (struct _KEVENT *)(*((_QWORD *)v1 + 22) + 48LL);
  *((_DWORD *)v1 + 6) = 1;
  KeSetEvent(v3, 0, 0);
  v5 = (char *)v1 + 56;
  v279 = *((_QWORD *)v1 + 22);
  v4 = v279;
  v6 = 0;
  *((_QWORD *)v1 + 24) = 0x8000000000000000uLL;
  v7 = 0;
  v299 = 0;
  v297 = 0;
  Object = (PVOID)(v4 + 24);
  v8 = 0;
  v258 = 0;
  v256 = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)v1 + 56, 0LL);
  *((_QWORD *)v1 + 8) = KeGetCurrentThread();
  do
  {
LABEL_2:
    *((_QWORD *)v1 + 2) = 0LL;
    if ( v7 || v256 || v8 )
    {
      *((_QWORD *)v1 + 24) = 0LL;
      v10.QuadPart = 0LL;
    }
    else
    {
      v10 = *(union _LARGE_INTEGER *)((char *)v1 + 192);
    }
    v275 = v10;
    if ( v10.QuadPart == 0x8000000000000000uLL )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        v198 = (_QWORD *)WdLogNewEntry5_WdTrace(v9);
        v198[3] = v7;
        v198[4] = v256;
        v198[5] = v8;
      }
      v11 = 0LL;
    }
    else
    {
      v11 = &v275;
    }
    *((_QWORD *)v5 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v5, 0LL);
    KeLeaveCriticalRegion();
    ++*((_QWORD *)v1 + 32);
    v12 = KeWaitForMultipleObjects(2u, &Object, WaitAny, Executive, 0, 0, v11, 0LL);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v5, 0LL);
    *((_QWORD *)v5 + 1) = KeGetCurrentThread();
    v13 = *(_QWORD *)v1;
    v14 = MEMORY[0xFFFFF78000000320];
    *(_QWORD *)(v13 + 4616) = v14 * KeQueryTimeIncrement();
    v16 = *(_QWORD *)v1;
    v17 = *(_QWORD *)(*(_QWORD *)v1 + 4616LL);
    if ( v17 - *(_QWORD *)(*(_QWORD *)v1 + 7168LL) > qword_1C00513A0 )
    {
      *(_QWORD *)(v16 + 7152) = 0LL;
      *(_DWORD *)(v16 + 7160) = 0;
      *(_QWORD *)(v16 + 7168) = v17;
    }
    v256 = 0;
    v255 = 0;
    *((_BYTE *)v1 + 184) = 0;
    v260 = 0;
    v257 = 0;
    if ( v12 )
    {
      if ( v12 == 258 )
      {
        if ( g_IsInternalReleaseOrDbg )
        {
          v200 = WdLogNewEntry5_WdTrace(v16);
          v16 = *((_QWORD *)v1 + 24);
          *(_QWORD *)(v200 + 24) = v16;
        }
        goto LABEL_13;
      }
LABEL_154:
      if ( g_IsInternalReleaseOrDbg )
      {
        v201 = WdLogNewEntry5_WdTrace(v16);
        v16 = *((int *)v1 + 6);
        *(_QWORD *)(v201 + 24) = v16;
      }
      *((_DWORD *)v1 + 50) = 0;
LABEL_157:
      v7 = 1;
      v297 = 1;
      goto LABEL_13;
    }
    v16 = *((unsigned int *)v1 + 7);
    if ( (_DWORD)v16 == *((_DWORD *)v1 + 6) )
      goto LABEL_154;
    if ( g_IsInternalReleaseOrDbg )
    {
      v199 = WdLogNewEntry5_WdTrace(v16);
      *(_QWORD *)(v199 + 24) = *((int *)v1 + 6);
      *(_QWORD *)(v199 + 32) = *((int *)v1 + 7);
      v16 = *((unsigned int *)v1 + 7);
    }
    *((_DWORD *)v1 + 50) = 1;
    if ( (unsigned int)(v16 - 2) <= 3 )
    {
      KeWaitForSingleObject((PVOID)(*(_QWORD *)v1 + 41152LL), Executive, 0, 0, 0LL);
      v192 = *(_QWORD *)v1;
      v193 = (DXGPUSHLOCK *)(*(_QWORD *)v1 + 40048LL);
      DXGPUSHLOCK::AcquireExclusive(v193);
      v194 = (_QWORD **)(v192 + 40032);
      while ( 1 )
      {
        v195 = (_QWORD **)*v194;
        if ( (_QWORD **)(*v194)[1] != v194 )
          goto LABEL_16;
        v196 = *v195;
        if ( (_QWORD **)(*v195)[1] != v195 )
          goto LABEL_16;
        *v194 = v196;
        v196[1] = v194;
        if ( v195 == v194 )
          break;
        (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD *, _QWORD *))(*v195[2] + 24LL))(v195[2], 0LL, v195[3], v195[4]);
        operator delete(v195);
      }
      *((_QWORD *)v193 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v193, 0LL);
      KeLeaveCriticalRegion();
      v7 = 1;
      v297 = 1;
    }
    else
    {
      if ( (_DWORD)v16 != 1 )
        goto LABEL_157;
      *((_DWORD *)v1 + 6) = 1;
      KeSetEvent((PRKEVENT)(*((_QWORD *)v1 + 22) + 48LL), 0, 0);
      v7 = 1;
      v297 = 1;
    }
LABEL_13:
    if ( *((_QWORD *)v1 + 24) && (Microsoft_Windows_DxgKrnlEnableBits & 0x100000) != 0 )
      McTemplateK0iq_EtwWriteTransfer(v16, v17, v15);
    v18 = *(_QWORD *)v1;
    *((_QWORD *)v1 + 24) = 0x8000000000000000uLL;
    v19 = v18 + 40048;
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v18 + 40048));
    v20 = (_QWORD **)(v18 + 40032);
    while ( 1 )
    {
      v21 = (_QWORD **)*v20;
      if ( (_QWORD **)(*v20)[1] != v20 )
        goto LABEL_16;
      v22 = *v21;
      if ( (_QWORD **)(*v21)[1] != v21 )
        goto LABEL_16;
      *v20 = v22;
      v22[1] = v20;
      if ( v21 == v20 )
        break;
      (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD *, _QWORD *))(*v21[2] + 24LL))(v21[2], 0LL, v21[3], v21[4]);
      operator delete(v21);
    }
    *(_QWORD *)(v19 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v19, 0LL);
    KeLeaveCriticalRegion();
    if ( !v7 && !v6 && !v258 )
      goto LABEL_106;
    v24 = 0LL;
    v259 = 0LL;
    v25 = 0LL;
    v299 = 0;
    v26 = (char *)v1 + 144;
    v262 = (char *)v1 + 144;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)v1 + 144, 0LL);
    v30 = (char *)v1 + 112;
    *((_QWORD *)v1 + 19) = KeGetCurrentThread();
    v31 = (VIDMM_WORKER_THREAD *)*((_QWORD *)v1 + 14);
    if ( v31 == (VIDMM_WORKER_THREAD *)((char *)v1 + 112) )
      goto LABEL_21;
    v160 = (bool *)*((_QWORD *)v1 + 14);
    v161 = 1;
    v162 = *(_QWORD *)this;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v162 + 41104, 0LL);
    *(_QWORD *)(v162 + 41112) = KeGetCurrentThread();
    v163 = *(_DWORD *)(v162 + 41144);
    *(_QWORD *)(v162 + 41112) = 0LL;
    ExReleasePushLockExclusiveEx(v162 + 41104, 0LL);
    KeLeaveCriticalRegion();
    LOBYTE(v27) = 0;
    do
    {
      v263 = v160;
      if ( !v163
        || (v202 = *((_QWORD *)v160 + 4), !*(_BYTE *)(v202 + 24))
        || *(_DWORD *)(v202 + 48) != 203
        || (v28 = *(_DWORD **)(*(_QWORD *)(v202 + 64) + 96LL), (*v28 & 0x20000) == 0) )
      {
        LOBYTE(v27) = 1;
        v161 = 0;
      }
      v29 = *(bool **)v160;
      if ( *(char **)v160 == v30 )
        break;
      if ( *((bool **)v29 + 1) != v160 )
        goto LABEL_16;
      v203 = (bool **)*((_QWORD *)v160 + 1);
      if ( *v203 != v160 )
        goto LABEL_16;
      *v203 = v29;
      *((_QWORD *)v29 + 1) = v203;
      v204 = (char **)*((_QWORD *)v30 + 1);
      if ( *v204 != v30 )
        goto LABEL_16;
      *((_QWORD *)v160 + 1) = v204;
      *(_QWORD *)v160 = v30;
      v28 = 0LL;
      *v204 = (char *)v160;
      if ( v29 != (bool *)v31 )
        v28 = (_DWORD *)v161;
      *((_QWORD *)v30 + 1) = v160;
      if ( v29 != (bool *)v31 )
        v160 = v29;
      v161 = (unsigned __int8)v28;
    }
    while ( (_BYTE)v28 );
    v26 = v262;
    if ( !(_BYTE)v27 )
    {
      v24 = 0LL;
LABEL_21:
      v32 = 0LL;
      goto LABEL_22;
    }
    v32 = v263;
    if ( v263 )
    {
LABEL_238:
      v33 = this;
      goto LABEL_239;
    }
    v24 = 0LL;
LABEL_22:
    v33 = this;
    if ( ((*((_DWORD *)this + 7) - 1) & 0xFFFFFFFD) != 0 )
    {
      v32 = (bool *)*((_QWORD *)this + 10);
      if ( v32 == (bool *)((char *)this + 80) )
      {
LABEL_344:
        v32 = 0LL;
        if ( g_IsInternalReleaseOrDbg )
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v28) + 24) = *((int *)this + 7);
        goto LABEL_42;
      }
      while ( *((_DWORD *)v32 + 29) != 3 )
      {
        v32 = *(bool **)v32;
        if ( v32 == (bool *)((char *)this + 80) )
          goto LABEL_344;
      }
LABEL_239:
      v24 = (struct VIDMM_PAGING_QUEUE_PACKET *)*((_QWORD *)v32 + 4);
      v149 = v32 + 32;
      v25 = (struct VIDMM_DEVICE *)*((_QWORD *)v32 + 17);
      v259 = v24;
      if ( *((bool **)v24 + 1) != v32 + 32
        || (v150 = *(_QWORD *)v24, *(struct VIDMM_PAGING_QUEUE_PACKET **)(*(_QWORD *)v24 + 8LL) != v24) )
      {
LABEL_16:
        __fastfail(3u);
      }
      *v149 = v150;
      *(_QWORD *)(v150 + 8) = v149;
      *(_QWORD *)v24 = 0LL;
      *((_QWORD *)v24 + 1) = 0LL;
      goto LABEL_42;
    }
    v34 = *(_QWORD *)this;
    v269 = 0;
    v268 = v34 + 44472;
    if ( v34 != -44472 && *(struct _KTHREAD **)(v34 + 44480) == KeGetCurrentThread() )
    {
      v205 = WdLogNewEntry5_WdAssertion(v34 + 44472, v27, v29);
      *(_QWORD *)(v205 + 24) = 1571LL;
      WdLogEvent5_WdAssertion(v205);
    }
    v35 = v268;
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v35, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v166 = *(_DWORD *)(v35 + 24);
        if ( v166 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v36, &EventBlockThread, v37, v166);
      }
      ExAcquirePushLockSharedEx(v35, 0LL);
    }
    v269 = 1;
    if ( *(_QWORD *)(v34 + 44504) == v34 + 44504 )
    {
      if ( *(_QWORD *)(v34 + 44520) == v34 + 44520 )
      {
        if ( *(_QWORD *)(v34 + 44536) == v34 + 44536 )
        {
          if ( !*(_BYTE *)(*(_QWORD *)(v34 + 24) + 2646LL) && !*(_BYTE *)(*(_QWORD *)(v34 + 16) + 889LL)
            || *(_QWORD *)(v34 + 44552) == v34 + 44552 )
          {
            v299 = 0;
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v267);
            v25 = 0LL;
LABEL_33:
            v38 = (VIDMM_WORKER_THREAD *)*((_QWORD *)this + 12);
            v39 = (char *)this + 96;
            if ( v38 == (VIDMM_WORKER_THREAD *)((char *)this + 96) )
              goto LABEL_34;
            v143 = (char **)*((_QWORD *)this + 12);
            v144 = 1;
            v145 = *(_QWORD *)this;
            KeEnterCriticalRegion();
            ExAcquirePushLockExclusiveEx(v145 + 41104, 0LL);
            *(_QWORD *)(v145 + 41112) = KeGetCurrentThread();
            v146 = *(_DWORD *)(v145 + 41144);
            *(_QWORD *)(v145 + 41112) = 0LL;
            ExReleasePushLockExclusiveEx(v145 + 41104, 0LL);
            KeLeaveCriticalRegion();
            v147 = 0;
            while ( 1 )
            {
              v263 = (bool *)v143;
              if ( !v146
                || (v209 = v143[4], !v209[24])
                || *((_DWORD *)v209 + 12) != 203
                || (**(_DWORD **)(*((_QWORD *)v209 + 8) + 96LL) & 0x20000) == 0 )
              {
                v147 = 1;
                v144 = 0;
              }
              v148 = *v143;
              if ( *v143 == v39 )
                break;
              if ( *((char ***)v148 + 1) != v143 )
                goto LABEL_16;
              v190 = (char **)v143[1];
              if ( *v190 != (char *)v143 )
                goto LABEL_16;
              *v190 = v148;
              *((_QWORD *)v148 + 1) = v190;
              v191 = (char **)*((_QWORD *)this + 13);
              if ( *v191 != v39 )
                goto LABEL_16;
              *v143 = v39;
              v143[1] = (char *)v191;
              *v191 = (char *)v143;
              *((_QWORD *)this + 13) = v143;
              if ( v148 != (char *)v38 )
              {
                v143 = (char **)v148;
                if ( v144 )
                  continue;
              }
              break;
            }
            v26 = v262;
            if ( !v147 )
            {
LABEL_34:
              v32 = 0LL;
            }
            else
            {
              v32 = v263;
              if ( v263 )
                goto LABEL_238;
            }
            v33 = this;
            if ( *((_BYTE *)this + 240) )
            {
              v40 = *(_QWORD *)this;
              *((_BYTE *)this + 240) = 0;
              *((_QWORD *)this + 31) = *(_QWORD *)(v40 + 4616);
            }
            if ( !v25 || *(_QWORD *)(*(_QWORD *)this + 4616LL) - *((_QWORD *)this + 31) < qword_1C0051460 )
            {
              v41 = (VIDMM_WORKER_THREAD *)*((_QWORD *)this + 10);
              v42 = (char *)this + 80;
              if ( v41 == (VIDMM_WORKER_THREAD *)((char *)this + 80) )
                goto LABEL_39;
              v151 = (char **)*((_QWORD *)this + 10);
              v152 = 1;
              v153 = *(_QWORD *)this;
              KeEnterCriticalRegion();
              ExAcquirePushLockExclusiveEx(v153 + 41104, 0LL);
              *(_QWORD *)(v153 + 41112) = KeGetCurrentThread();
              v154 = *(_DWORD *)(v153 + 41144);
              *(_QWORD *)(v153 + 41112) = 0LL;
              ExReleasePushLockExclusiveEx(v153 + 41104, 0LL);
              KeLeaveCriticalRegion();
              v155 = 0;
              while ( 1 )
              {
                v263 = (bool *)v151;
                if ( !v154
                  || (v210 = v151[4], !v210[24])
                  || *((_DWORD *)v210 + 12) != 203
                  || (**(_DWORD **)(*((_QWORD *)v210 + 8) + 96LL) & 0x20000) == 0 )
                {
                  v155 = 1;
                  v152 = 0;
                }
                v156 = *v151;
                if ( *v151 == v42 )
                  break;
                if ( *((char ***)v156 + 1) != v151 )
                  goto LABEL_16;
                v188 = (char **)v151[1];
                if ( *v188 != (char *)v151 )
                  goto LABEL_16;
                *v188 = v156;
                *((_QWORD *)v156 + 1) = v188;
                v189 = (char **)*((_QWORD *)this + 11);
                if ( *v189 != v42 )
                  goto LABEL_16;
                *v151 = v42;
                v151[1] = (char *)v189;
                *v189 = (char *)v151;
                *((_QWORD *)this + 11) = v151;
                if ( v156 != (char *)v41 )
                {
                  v151 = (char **)v156;
                  if ( v152 )
                    continue;
                }
                break;
              }
              v26 = v262;
              if ( !v155 )
              {
LABEL_39:
                v33 = this;
                v32 = 0LL;
              }
              else
              {
                v32 = v263;
                v33 = this;
                if ( v263 )
                  goto LABEL_239;
              }
            }
            *((_BYTE *)v33 + 240) = 1;
            if ( v32 )
              goto LABEL_239;
            goto LABEL_41;
          }
          v181 = 4;
        }
        else
        {
          v181 = 3;
        }
      }
      else
      {
        v181 = 2;
      }
    }
    else
    {
      v181 = 1;
    }
    v299 = 1;
    v182 = *(_QWORD *)(v34 + 16LL * (unsigned int)(v181 - 1) + 44504) - 184LL;
    if ( VIDMM_GLOBAL::IsTdrPending((VIDMM_GLOBAL *)v34) )
    {
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v267);
      goto LABEL_304;
    }
    if ( v183 == 2 )
    {
      v206 = *(_QWORD **)(v182 + 240);
      if ( !v206 || (v207 = v206[28], v207 <= *(_QWORD *)(*v206 + 4616LL)) )
      {
LABEL_303:
        v269 = 0;
        ExReleasePushLockSharedEx(v268, 0LL);
        KeLeaveCriticalRegion();
        goto LABEL_304;
      }
      v182 = 0LL;
      v187 = *(_QWORD *)(v34 + 4616) - v207;
      v185 = 8;
    }
    else
    {
      if ( v183 != 3 )
        goto LABEL_303;
      v184 = *(_QWORD *)(v34 + 4616);
      v185 = 6;
      v186 = *(_QWORD *)(v182 + 216);
      if ( v184 < v186 )
      {
        v182 = 0LL;
        v187 = v184 - v186;
      }
      else
      {
        v187 = 0LL;
      }
    }
    VIDMM_WORKER_THREAD::SetTimeout(*(_QWORD *)v34, v187, v185);
    if ( v269 == 1 )
      goto LABEL_303;
    if ( v269 == 2 )
    {
      v208 = v268;
      v269 = 0;
      *(_QWORD *)(v268 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v208, 0LL);
      KeLeaveCriticalRegion();
    }
LABEL_304:
    v25 = (struct VIDMM_DEVICE *)v182;
    if ( !v182 || (*(_DWORD *)(v182 + 52) & 7) != 1 )
      goto LABEL_33;
LABEL_41:
    v24 = v259;
LABEL_42:
    *((_QWORD *)v33 + 2) = v25;
    *((_QWORD *)v26 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v26, 0LL);
    KeLeaveCriticalRegion();
    if ( v25 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100000) != 0 )
        McTemplateK0ppp_EtwWriteTransfer(v9, &EventVidMmSelectOperation, v23, *((_QWORD *)v25 + 3), v32, v24);
      if ( v32 )
      {
        if ( g_IsInternalReleaseOrDbg )
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v9) + 24) = v32;
        if ( *((_BYTE *)v24 + 24) && *((_DWORD *)v24 + 12) == 206 )
        {
          v108 = MEMORY[0xFFFFF78000000320];
          *((_QWORD *)v24 + 18) = v108 * KeQueryTimeIncrement();
        }
      }
      else if ( g_IsInternalReleaseOrDbg )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v9) + 24) = v25;
      }
    }
    v43 = (char *)v33 + 208;
LABEL_44:
    while ( 2 )
    {
      while ( 2 )
      {
        v264 = 0LL;
        v298 = 0;
        *((_QWORD *)v43 + 1) = 0LL;
        *((_QWORD *)v43 + 2) = 0LL;
        *(_QWORD *)v43 = 0LL;
        v43[24] = 0;
        if ( g_IsInternalReleaseOrDbg )
          WdLogNewEntry5_WdTrace(v9);
        v254 = 0;
        v44 = 2;
        if ( v25 )
        {
          v109 = *((_QWORD *)v25 + 2);
          v254 = 0;
          if ( v109 )
          {
            v23 = 0LL;
            if ( *(_DWORD *)(*(_QWORD *)v25 + 7000LL) )
            {
              while ( 1 )
              {
                v110 = (_QWORD *)(*(_QWORD *)(v109 + 48) + 296LL * (unsigned int)v23);
                if ( v110[25] > v110[3] || v110[26] > v110[4] )
                  break;
                v23 = (unsigned int)(v23 + 1);
                if ( (unsigned int)v23 >= *(_DWORD *)(*(_QWORD *)v25 + 7000LL) )
                  goto LABEL_177;
              }
              v254 = 1;
            }
LABEL_177:
            v111 = *(_QWORD *)(*(_QWORD *)(v109 + 40) + 32LL);
            if ( *(_BYTE *)(v111 + 346) )
              v44 = 0;
            else
              v44 = 2 - ((*(_DWORD *)(v111 + 352) & 1) != 0);
          }
        }
        v45 = v254;
        v46 = 0LL;
        v47 = 3 * (v254 + 2LL * v260);
        v9 = 12LL;
        if ( v44 != 2 )
          v46 = 12LL;
        v48 = v46 + 24 * (v254 + 2LL * v260);
        v49 = (char *)&unk_1C00443C0 + v48;
        v262 = (char *)&unk_1C00443C0 + v48;
        if ( !v32 )
        {
          if ( !v25 )
          {
            if ( g_IsInternalReleaseOrDbg )
              WdLogNewEntry5_WdTrace(12LL);
            v7 = 0;
            v297 = 0;
            goto LABEL_54;
          }
          if ( g_IsInternalReleaseOrDbg )
            WdLogNewEntry5_WdTrace(12LL);
          v136 = (bool *)&unk_1C00443C0 + v48 + 8;
          v263 = v136;
          v123 = VIDMM_DEVICE::Resume(v25, *v136, &v298, &v264);
          if ( v299 || *((_DWORD *)this + 42) )
          {
            v297 = 1;
            v263 = v136;
          }
          else
          {
            v297 = 0;
          }
          goto LABEL_209;
        }
        if ( g_IsInternalReleaseOrDbg )
          WdLogNewEntry5_WdTrace(12LL);
        v112 = v49 + 8;
        v113 = v49[8];
        v114 = v259;
        v263 = (bool *)v112;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0ppx_EtwWriteTransfer(v9, v47, v23, v32, v259, *((_QWORD *)v259 + 5));
        v115 = (int *)((char *)v114 + 48);
        if ( *((_BYTE *)v114 + 24) )
        {
          PerformanceFrequency.QuadPart = 0LL;
          KeQueryPerformanceCounter(&PerformanceFrequency);
          v118 = (_QWORD *)WdLogNewEntry5_WdEvent(v117, v116);
          v118[3] = *v115;
          v118[4] = v114;
          v118[5] = *((_QWORD *)v114 + 8);
          v118[6] = *((_QWORD *)v114 + 7);
          v118[7] = *((_QWORD *)v114 + 4);
          WdLogEvent5_WdEvent(v118);
          v119 = VIDMM_GLOBAL::ProcessDeferredCommand(
                   *(VIDMM_GLOBAL **)this,
                   (struct VIDMM_PAGING_QUEUE_PACKET *)((char *)v114 + 48),
                   &v298,
                   *((_BYTE *)v114 + 25),
                   *((_QWORD *)v114 + 4),
                   *((struct _VIDSCH_SYNC_OBJECT **)v32 + 11),
                   v113,
                   &v264);
          v122 = v259;
          v123 = v119;
          if ( *((_BYTE *)v259 + 24) )
          {
            v124 = *((_QWORD *)v259 + 7);
          }
          else
          {
            v124 = *((_QWORD *)v259 + 9);
            if ( !v124 )
            {
              v124 = *((_QWORD *)v259 + 8);
              if ( v124 )
                v124 = *(_QWORD *)(v124 + 8);
            }
          }
          VIDMM_PROCESS_ADAPTER_INFO::CheckBudgetRefreshConditionOnProcessMemoryChange(
            *(VIDMM_PROCESS_ADAPTER_INFO **)(v124 + 16),
            v120,
            v121);
        }
        else
        {
          v164 = (_QWORD *)WdLogNewEntry5_WdEvent(v9, v47);
          v164[3] = *v115;
          v164[4] = v114;
          v164[5] = *((unsigned __int8 *)v114 + 25);
          v164[6] = *((_QWORD *)v114 + 4);
          WdLogEvent5_WdEvent(v164);
          v298 = 0;
          v264 = 0LL;
          v165 = VIDMM_GLOBAL::ProcessSystemCommand(
                   *(_QWORD *)this,
                   (struct VIDMM_PAGING_QUEUE_PACKET *)((char *)v114 + 48),
                   *((unsigned __int8 *)v114 + 25),
                   *((_QWORD *)v114 + 4),
                   *((struct _VIDSCH_SYNC_OBJECT **)v32 + 11));
          v122 = v259;
          v123 = v165;
        }
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0ppxx_EtwWriteTransfer(v9, &EventPagingQueueComplete, v23, v32, v122, *((_QWORD *)v122 + 5), 0LL);
        v126 = *((_BYTE *)v122 + 24);
        if ( v123 == -1071775232 )
        {
          v123 = 0;
LABEL_194:
          if ( v126 && *v115 == 206 )
          {
            v157 = MEMORY[0xFFFFF78000000320];
            TimeIncrement = KeQueryTimeIncrement();
            v127 = v259;
            v159 = v157 * TimeIncrement;
            *((_QWORD *)v259 + 19) = v159;
            if ( v159 - *((_QWORD *)v127 + 17) > 1000000 )
            {
              VIDMM_COMMIT_TELEMETRY::Init((VIDMM_COMMIT_TELEMETRY *)v43, *(struct VIDMM_GLOBAL **)this, v25, 0LL);
              VIDMM_COMMIT_TELEMETRY::LogLongPagingPacket(v211, v127);
              *((_QWORD *)v43 + 1) = 0LL;
              *((_QWORD *)v43 + 2) = 0LL;
              *(_QWORD *)v43 = 0LL;
              v43[24] = 0;
            }
          }
          else
          {
            v127 = v259;
          }
          v128 = *((_QWORD *)v32 + 10);
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx(v128 + 144, 0LL);
          *(_QWORD *)(v128 + 152) = KeGetCurrentThread();
          v130 = (struct VIDMM_PAGING_QUEUE_PACKET **)*((_QWORD *)v32 + 3);
          if ( *v130 != (struct VIDMM_PAGING_QUEUE_PACKET *)(v32 + 16) )
            goto LABEL_16;
          *(_QWORD *)v127 = v32 + 16;
          *((_QWORD *)v127 + 1) = v130;
          *v130 = v127;
          *((_QWORD *)v32 + 3) = v127;
          if ( *((bool **)v32 + 4) == v32 + 32 )
          {
            v131 = *((int *)v32 + 28);
            if ( (_DWORD)v131 )
            {
              if ( (_DWORD)v131 != 1 )
              {
                v212 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v130, v129);
                v212[6] = v131;
                v212[7] = 0LL;
                v212[3] = 270LL;
                v212[4] = 58LL;
                v212[5] = v32;
                WdLogEvent5_WdCriticalError(v212);
              }
              if ( g_IsInternalReleaseOrDbg )
              {
                v213 = (_QWORD *)WdLogNewEntry5_WdTrace(v130);
                v213[3] = v32;
                v213[4] = *((int *)v32 + 28);
                v213[5] = 0LL;
              }
              v132 = *(bool **)v32;
              if ( *(bool **)(*(_QWORD *)v32 + 8LL) != v32 )
                goto LABEL_16;
              v133 = (bool **)*((_QWORD *)v32 + 1);
              if ( *v133 != v32 )
                goto LABEL_16;
              *v133 = v132;
              *((_QWORD *)v132 + 1) = v133;
              v134 = (struct _KEVENT *)*((_QWORD *)v32 + 15);
              *(_QWORD *)v32 = 0LL;
              *((_QWORD *)v32 + 1) = 0LL;
              *((_DWORD *)v32 + 28) = 0;
              KeSetEvent(v134, 0, 0);
            }
          }
          --*(_DWORD *)(*((_QWORD *)v32 + 17) + 64LL);
          --*(_DWORD *)(*((_QWORD *)v32 + 10) + 168LL);
          v135 = *((_QWORD *)v32 + 10) + 144LL;
          *(_QWORD *)(v135 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v135, 0LL);
          KeLeaveCriticalRegion();
          if ( (*((_DWORD *)v25 + 13) & 7) == 1 )
          {
            v32 = 0LL;
            v259 = 0LL;
            v257 = 0;
            continue;
          }
          goto LABEL_208;
        }
        break;
      }
      if ( v126 && (!v298 || *((_BYTE *)v122 + 120)) && *((_QWORD *)v122 + 9) )
      {
        v123 = 0;
        goto LABEL_194;
      }
      if ( v123 >= 0 )
        goto LABEL_194;
LABEL_208:
      v136 = v263;
      v45 = v254;
LABEL_209:
      if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100000) != 0 )
        McTemplateK0qqtqttp_EtwWriteTransfer(v298, *v136, v45, v123, v260, v45, v44, *v136, v298, (char)v264);
      if ( v123 >= 0 )
        goto LABEL_213;
      if ( v257 )
      {
        v214 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v9, v125);
        v214[7] = v259;
        v214[3] = 270LL;
        v214[4] = 54LL;
        v214[5] = v25;
        v214[6] = v32;
        WdLogEvent5_WdCriticalError(v214);
      }
      v215 = (_QWORD *)WdLogNewEntry5_WdWarning(v9, v125);
      v215[3] = v259;
      v215[5] = v123;
      v215[4] = v25;
      v215[6] = v298;
      WdLogEvent5_WdWarning(v215);
      v73 = !v298;
      v216 = (struct VIDMM_GLOBAL **)this;
      *((_BYTE *)this + 184) = 1;
      if ( v73 )
        goto LABEL_441;
      while ( 1 )
      {
        if ( g_IsInternalReleaseOrDbg )
          WdLogNewEntry5_WdTrace(v9);
        VIDMM_COMMIT_TELEMETRY::Init((VIDMM_COMMIT_TELEMETRY *)v43, *v216, v25, v264);
        if ( !v45 )
          VIDMM_COMMIT_TELEMETRY::LogUnderBudgetButCantCommitEvent(v217, *v136);
        v218 = v260;
        v270 = 0LL;
        v219 = VIDMM_WORKER_THREAD::HandleRecoverablePageInFailure(this, v25, v264);
        if ( !v219 )
        {
          if ( g_IsInternalReleaseOrDbg )
            WdLogNewEntry5_WdTrace(v9);
          goto LABEL_44;
        }
        if ( v219 == -1071775484 )
        {
          if ( g_IsInternalReleaseOrDbg )
            WdLogNewEntry5_WdTrace(v9);
          v236 = v270;
          v237 = v25;
          v238 = v270;
          if ( (*((_DWORD *)v25 + 13) & 7) == 0 && VIDMM_DEVICE::IsBetterYieldCandidate(v25, v270) )
          {
            v236 = v25;
            v237 = v238;
          }
          VIDMM_DEVICE::Yield(v237, v236);
          if ( v236 != v25 )
          {
            if ( v32 )
              VIDMM_PAGING_QUEUE::RewindPacket((VIDMM_PAGING_QUEUE *)v32, v259);
            v1 = this;
            v7 = v297;
            v6 = v299;
            v8 = 0;
            v5 = (char *)this + 56;
            v239 = *(_QWORD *)(*(_QWORD *)this + 4616LL) - *((_QWORD *)v236 + 28);
            if ( v239 > *((_QWORD *)this + 24) )
            {
              *((_QWORD *)this + 24) = v239;
              v5 = (char *)this + 56;
              *((_DWORD *)this + 50) = 8;
            }
            goto LABEL_2;
          }
          goto LABEL_44;
        }
        if ( (**((_DWORD **)v264 + 12) & 0x20000) != 0 )
        {
          v23 = (__int64)v259;
          if ( *((_BYTE *)v259 + 24) )
          {
            if ( *((_DWORD *)v259 + 12) == 203 && *((_DWORD *)v259 + 20) == 5 )
            {
              v9 = *(_QWORD *)(*(_QWORD *)this + 40216LL);
              if ( (*(_BYTE *)(1584LL * (*(_DWORD *)(**(_QWORD **)v264 + 76LL) & 0x3F) + v9 + 437) & 4) == 0 )
              {
                if ( g_IsInternalReleaseOrDbg )
                {
                  WdLogNewEntry5_WdTrace(v9);
                  v23 = (__int64)v259;
                }
                *(_DWORD *)(v23 + 80) = 6;
                v260 = v218;
                goto LABEL_44;
              }
            }
          }
        }
        VIDMM_COMMIT_TELEMETRY::LogNoCandidatesToSuspendFound((VIDMM_COMMIT_TELEMETRY *)v43, *v136);
        if ( v44 > 0 )
        {
          if ( g_IsInternalReleaseOrDbg )
            WdLogNewEntry5_WdTrace(v9);
          --v44;
          goto LABEL_435;
        }
        DefragSegment = VIDMM_GLOBAL::GetDefragSegment(
                          *(VIDMM_GLOBAL **)this,
                          *(_WORD *)(**(_QWORD **)v264 + 76LL) & 0x3F,
                          *(_DWORD *)(**(_QWORD **)v264 + 68LL));
        if ( DefragSegment )
        {
          v228 = WdLogNewEntry5_WdEvent(v9, v220);
          *(_QWORD *)(v228 + 24) = DefragSegment;
          WdLogEvent5_WdEvent(v228);
          v229 = MEMORY[0xFFFFF78000000320];
          v230 = v229 * KeQueryTimeIncrement();
          VIDMM_GLOBAL::Defragment(*(VIDMM_GLOBAL **)this, DefragSegment);
          v231 = MEMORY[0xFFFFF78000000320];
          v232 = v231 * KeQueryTimeIncrement() - v230;
          VIDMM_COMMIT_TELEMETRY::LogFullDefragPass((VIDMM_COMMIT_TELEMETRY *)v43, v232);
          v235 = WdLogNewEntry5_WdEvent(v234, v233);
          *(_QWORD *)(v235 + 24) = v232 / 0xA / 0x3E8;
          WdLogEvent5_WdEvent(v235);
LABEL_452:
          v260 = v218;
          goto LABEL_44;
        }
        if ( g_IsInternalReleaseOrDbg )
          WdLogNewEntry5_WdTrace(v9);
        if ( !dword_1C0051510 || KdRefreshDebuggerNotPresent() )
          goto LABEL_441;
        v222 = *(_QWORD **)(*(_QWORD *)v264 + 8LL);
        IsProcessCommitRelinquished = PsIsProcessCommitRelinquished(*v222);
        v9 = (unsigned int)g_UnrecoverablePagingFailureDebugMode;
        if ( g_UnrecoverablePagingFailureDebugMode )
          break;
        if ( IsProcessCommitRelinquished )
          goto LABEL_438;
        v224 = "\n"
               "Video memory manager cannot ensure forward progress on this paging operation, and the device\n"
               "\"?? ((dxgmms2!VIDMM_DEVICE*)0x%p)\" will be placed in error.\n"
               "Paging operation type: Failure to process paging packet \"?? ((dxgmms2!VIDMM_PAGING_QUEUE_PACKET*)0x%p)\""
               "\n"
               "from paging queue \"?? ((dxgmms2!VIDMM_PAGING_QUEUE*)0x%p)\".\n";
        if ( !v259 )
          v224 = "\n"
                 "Video memory manager cannot ensure forward progress on this paging operation, and the device\n"
                 "\"?? ((dxgmms2!VIDMM_DEVICE*)0x%p)\" will be placed in error.\n"
                 "Paging operation type: Failure to resume device\n";
        DbgPrintEx(0x65u, 0, v224, v25, v259, v32);
        DbgPrintEx(
          0x65u,
          0,
          "\n"
          "We broke into the debugger to allow a chance for debugging this issue.\n"
          "\n"
          "To disable debug breaks on unrecoverable paging packet failures, run \"?? dxgmms2!g_UnrecoverablePagingFailure"
          "DebugMode=1\"\n"
          "or \"ed 0x%p 1\"\n"
          "To re-attempt the failed paging packet execution for debugging purposes, run \"?? dxgmms2!g_UnrecoverablePagin"
          "gFailureDebugMode=2\"\n"
          "or \"ed 0x%p 2\"\n"
          "To re-attempt the suspend attempt for debugging purposes, run \"?? dxgmms2!g_UnrecoverablePagingFailureDebugMo"
          "de=3\"\n"
          "or \"ed 0x%p 3\"\n"
          "!!! Note that option 2 will result in an unrecoverable machine state that should be rebooted after stepping th"
          "rough the code is done.!!!\n"
          "\n",
          (const void *)&g_UnrecoverablePagingFailureDebugMode,
          (const void *)&g_UnrecoverablePagingFailureDebugMode,
          (const void *)&g_UnrecoverablePagingFailureDebugMode);
        __debugbreak();
        if ( g_UnrecoverablePagingFailureDebugMode == 2 )
          goto LABEL_452;
        if ( g_UnrecoverablePagingFailureDebugMode != 3 )
          goto LABEL_441;
        v45 = v254;
        v136 = v263;
LABEL_435:
        v260 = v218;
        if ( !v298 )
          goto LABEL_441;
        v216 = (struct VIDMM_GLOBAL **)this;
      }
      if ( IsProcessCommitRelinquished )
      {
LABEL_438:
        v225 = v222[4];
        if ( v225 && !*(_BYTE *)(v225 + 476) )
        {
          DbgPrintEx(
            0x65u,
            0,
            "\n"
            "We broke in to the debugger as a unrecoverable paging failure occurred after a process had its\n"
            "virtual address space torn down, yet we do not detect ourselves in the frozen state for that process.\n"
            "DXGPROCESS 0x%I64p and Mm should be inspected for how we reached this state.\n");
          __debugbreak();
        }
      }
LABEL_441:
      v226 = v259;
      v227 = v25;
      if ( v32 && *((_BYTE *)v259 + 24) )
      {
        v73 = *((_QWORD *)v259 + 9) == 0LL;
        *((_BYTE *)v259 + 120) = 1;
        if ( v73 )
        {
          v227 = (struct VIDMM_DEVICE *)*((_QWORD *)v226 + 7);
          if ( !v227 )
          {
            v227 = *(struct VIDMM_DEVICE **)(*((_QWORD *)v226 + 8) + 8LL);
            goto LABEL_446;
          }
LABEL_447:
          v9 = *((_QWORD *)v227 + 4);
          if ( v9 )
            VidSchMarkDeviceAsError(v9);
        }
      }
      else
      {
LABEL_446:
        if ( v227 )
          goto LABEL_447;
      }
      if ( v298 )
      {
        v257 = 1;
        v260 = 0;
        continue;
      }
      break;
    }
    if ( v32 )
      VIDMM_PAGING_QUEUE::ReclaimPacket((VIDMM_PAGING_QUEUE *)v32, v226);
LABEL_213:
    v7 = v297;
LABEL_54:
    v1 = this;
    if ( *((_DWORD *)this + 7) == 1 )
    {
      v50 = *(_QWORD *)this;
      v273 = &VIDMM_PARTITION::_PartitionLock;
      v51 = 0;
      ExAcquirePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
      v274 = 1;
      v52 = 0;
      if ( !*(_DWORD *)(v50 + 7000) )
        goto LABEL_97;
      do
      {
        v53 = *(_QWORD *)(v50 + 40216);
        if ( (*(_BYTE *)(v53 + 1584LL * v52 + 512) & 1) != 0 )
        {
          v54 = VIDMM_PARTITION::_PartitionTree;
          for ( i = 0LL; v54; v54 = v54->Children[0] )
            i = (unsigned __int64)v54;
          while ( i )
          {
            v56 = 336LL * v52
                + *(_QWORD *)(376LL * *(unsigned int *)(*(_QWORD *)(v50 + 24) + 232LL) + *(_QWORD *)(i + 40) + 24);
            v57 = *(_QWORD *)(v56 + 16);
            v59 = 0;
            if ( v57 )
            {
              v58 = v57 == 0x1E3AC1ECDLL
                  ? 100LL * *(_QWORD *)(v56 + 120) / 0x1E3AC1ECDuLL
                  : 100LL * *(_QWORD *)(v56 + 120) / v57;
              if ( (__int64)(100 - v58) < (unsigned int)dword_1C0051438 )
                v59 = 1;
            }
            if ( v59 != *(_BYTE *)(v56 + 128) )
            {
              v51 = 1;
              *(_BYTE *)(v56 + 128) = v59;
            }
            v60 = *(_QWORD ***)(i + 8);
            v61 = i;
            if ( v60 )
            {
              v64 = *v60;
              for ( i = *(_QWORD *)(i + 8); v64; v64 = (_QWORD *)*v64 )
                i = (unsigned __int64)v64;
            }
            else
            {
              for ( i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL; i; i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
              {
                if ( *(_QWORD *)i == v61 )
                  break;
                v61 = i;
              }
            }
          }
        }
        else
        {
          i = v53 + 1584LL * v52;
          v62 = *(_QWORD *)(i + 560);
          v63 = 0;
          if ( v62 )
          {
            v139 = 100LL * *(_QWORD *)(i + 664);
            v140 = v62 == 917943092 ? v139 / 0x36B6B334 : v139 / v62;
            if ( (__int64)(100 - v140) < (unsigned int)dword_1C0051438 )
              v63 = 1;
          }
          if ( v63 != *(_BYTE *)(i + 672) )
          {
            v51 = 1;
            *(_BYTE *)(i + 672) = v63;
          }
        }
        v65 = *(_QWORD *)(v50 + 40216);
        if ( (*(_BYTE *)(v65 + 1584LL * v52 + 536) & 1) != 0 )
        {
          v66 = VIDMM_PARTITION::_PartitionTree;
          for ( j = 0LL; v66; v66 = v66->Children[0] )
            j = v66->Children;
          while ( j )
          {
            v68 = 336LL * v52 + *(_QWORD *)(376LL * *(unsigned int *)(*(_QWORD *)(v50 + 24) + 232LL) + j[5] + 24);
            i = *(_QWORD *)(v68 + 16);
            v70 = 0;
            if ( i )
            {
              v69 = i == 0x1E3AC1ECDLL
                  ? 100LL * *(_QWORD *)(v68 + 120) / 0x1E3AC1ECDuLL
                  : 100LL * *(_QWORD *)(v68 + 120) / i;
              if ( (__int64)(100 - v69) < (unsigned int)dword_1C0051438 )
                v70 = 1;
            }
            if ( v70 != *(_BYTE *)(v68 + 128) )
            {
              v51 = 1;
              *(_BYTE *)(v68 + 128) = v70;
            }
            v71 = (_QWORD **)j[1];
            v72 = j;
            if ( v71 )
            {
              v107 = *v71;
              for ( j = (_QWORD *)j[1]; v107; v107 = (_QWORD *)*v107 )
                j = v107;
            }
            else
            {
              for ( j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL); j; j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL) )
              {
                if ( (_QWORD *)*j == v72 )
                  break;
                v72 = j;
              }
            }
          }
        }
        else
        {
          i = v65 + 1584LL * v52;
          v96 = *(_QWORD *)(i + 896);
          v97 = 0;
          if ( v96 )
          {
            v141 = 100LL * *(_QWORD *)(i + 1000);
            v142 = v96 == 917943092 ? v141 / 0x36B6B334 : v141 / v96;
            if ( (__int64)(100 - v142) < (unsigned int)dword_1C0051438 )
              v97 = 1;
          }
          if ( v97 != *(_BYTE *)(i + 1008) )
          {
            v51 = 1;
            *(_BYTE *)(i + 1008) = v97;
          }
        }
        ++v52;
      }
      while ( v52 < *(_DWORD *)(v50 + 7000) );
      v1 = this;
      if ( v274 != 1 )
      {
        if ( v274 == 2 )
        {
          v274 = 0;
          ExReleasePushLockExclusiveEx(v273, 0LL);
        }
      }
      else
      {
LABEL_97:
        v274 = 0;
        ExReleasePushLockSharedEx(v273, 0LL);
      }
      v73 = ((unsigned __int8)v51 | *((_BYTE *)v1 + 184)) == 0;
      *((_BYTE *)v1 + 184) |= v51;
      if ( !v73 )
        VIDMM_GLOBAL::RequestNewBudget(*(VIDMM_GLOBAL **)v1, 0);
      VIDMM_GLOBAL::HandlePromotionCandidates(*(VIDMM_GLOBAL **)v1, &v258, i);
      v76 = *(VIDMM_GLOBAL **)v1;
      v77 = *(_QWORD *)v1 + 44472LL;
      v280 = v77;
      if ( v77 && *(struct _KTHREAD **)(v77 + 8) == KeGetCurrentThread() )
      {
        v240 = WdLogNewEntry5_WdAssertion(v77, v74, v75);
        *(_QWORD *)(v240 + 24) = 1571LL;
        WdLogEvent5_WdAssertion(v240);
      }
      v78 = v280;
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v78, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v167 = *(_DWORD *)(v78 + 24);
          if ( v167 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q_EtwWriteTransfer(v79, &EventBlockThread, v80, v167);
        }
        ExAcquirePushLockSharedEx(v78, 0LL);
      }
      v81 = *((_QWORD *)v76 + 5563) == (_QWORD)v76 + 44504;
      v281 = 0;
      ExReleasePushLockSharedEx(v280, 0LL);
      KeLeaveCriticalRegion();
      if ( v81 )
      {
        v7 = v297;
      }
      else
      {
        if ( g_IsInternalReleaseOrDbg )
          WdLogNewEntry5_WdTrace(v9);
        v7 = 1;
        v297 = 1;
      }
    }
LABEL_106:
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v9);
    if ( (unsigned int)(*((_DWORD *)v1 + 6) - 3) > 2 )
    {
      if ( dword_1C0051400 )
      {
        if ( g_IsInternalReleaseOrDbg )
          WdLogNewEntry5_WdTrace(v9);
        v82 = *(VIDMM_GLOBAL **)v1;
        v83 = *(_QWORD *)(*(_QWORD *)v1 + 44584LL);
        if ( v83 == *(_QWORD *)(*(_QWORD *)v1 + 44592LL) )
        {
          v84 = 0;
        }
        else
        {
          v272 = 0LL;
          v271 = 14001;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v9, &EventVidMmProfilerEnter, v23, 14001);
          DXGETWPROFILER_BASE::PushProfilerEntry();
          v241 = 0;
          if ( *((_DWORD *)v82 + 1750) )
          {
            do
            {
              v265 = 0;
              DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v285, (struct _KTHREAD **)v82 + 5130, 0LL);
              DXGPUSHLOCK::AcquireShared(v286);
              v287 = 1;
              v283 = &VIDMM_PARTITION::_PartitionLock;
              v284 = 0;
              ExAcquirePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
              v284 = 1;
              VIDMM_GLOBAL::SetupBudgetState(v82, (struct VIDMM_BUDGET_STATE *)&v265, v241);
              VIDMM_GLOBAL::AssignBudgets(v82, (struct VIDMM_BUDGET_STATE *)&v265, D3DKMT_MEMORY_SEGMENT_GROUP_LOCAL);
              if ( (*(_BYTE *)(1584LL * v241 + *((_QWORD *)v82 + 5027) + 536) & 2) != 0 )
                VIDMM_GLOBAL::AssignBudgets(
                  v82,
                  (struct VIDMM_BUDGET_STATE *)&v265,
                  D3DKMT_MEMORY_SEGMENT_GROUP_NON_LOCAL);
              DXGAUTOEXPUSHLOCK::Release((DXGAUTOEXPUSHLOCK *)v282);
              DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v285);
              ++v241;
            }
            while ( v241 < *((_DWORD *)v82 + 1750) );
            v1 = this;
          }
          *((_QWORD *)v82 + 5574) = v83;
          VIDMM_GLOBAL::SendBudgetChangeNotifications(v82);
          v84 = 1;
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v271);
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v242, &EventVidMmProfilerExit, v243, v271);
        }
        VIDMM_GLOBAL::HandleTrimWnf(*(VIDMM_GLOBAL **)v1, v84);
      }
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v9);
      v85 = *(VIDMM_GLOBAL **)v1;
      if ( qword_1C0051350 )
      {
        v86 = (VIDMM_GLOBAL *)((char *)v85 + 39952);
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v85 + 39968, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v168 = *((_DWORD *)v85 + 9998);
            if ( v168 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q_EtwWriteTransfer(v87, &EventBlockThread, v88, v168);
          }
          ExAcquirePushLockSharedEx((char *)v85 + 39968, 0LL);
        }
        v89 = *(VIDMM_GLOBAL **)v86;
        ExReleasePushLockSharedEx((char *)v85 + 39968, 0LL);
        KeLeaveCriticalRegion();
        if ( v89 != v86 )
        {
          if ( (*((_DWORD *)v85 + 1762) & 0x8000) != 0
            || (v137 = *((_QWORD *)v85 + 577) - *((_QWORD *)v85 + 889), v137 >= qword_1C0051350) )
          {
            v170 = 0;
            DXGPUSHLOCK::AcquireExclusive((VIDMM_GLOBAL *)((char *)v85 + 39968));
            v171 = *(VIDMM_GLOBAL **)v86;
            if ( *(VIDMM_GLOBAL **)v86 != v86 )
            {
              v170 = 1;
              VIDMM_GLOBAL::StartPreparation((__int64)v85, 0xFFFFFFFFLL, 0LL, 0LL, 1001);
              do
              {
                v173 = *(VIDMM_GLOBAL ***)v171;
                v174 = (VIDMM_GLOBAL *)((char *)v171 - 392);
                v175 = v171;
                v171 = (VIDMM_GLOBAL *)v173;
                if ( v173[1] != v175 )
                  goto LABEL_16;
                v176 = (VIDMM_GLOBAL **)*((_QWORD *)v175 + 1);
                if ( *v176 != v175 )
                  goto LABEL_16;
                *v176 = (VIDMM_GLOBAL *)v173;
                v173[1] = (VIDMM_GLOBAL *)v176;
                v177 = *((_QWORD *)v174 + 62);
                *(_QWORD *)v175 = 0LL;
                v178 = *(unsigned __int16 *)(v177 + 4);
                if ( (_WORD)v178 && (_WORD)v178 != 3 )
                {
                  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                    McTemplateK0p_EtwWriteTransfer(v178, &EventProcessOfferAllocation, v172, v174);
                  v179 = (VIDMM_SEGMENT *)*((_QWORD *)v174 + 16);
                  if ( v179 && (*((_DWORD *)v179 + 20) & 0x1001) == 0 )
                  {
                    if ( *((_DWORD *)v174 + 30) == 2 )
                      VIDMM_SEGMENT::OfferAllocation(v179, v174);
                  }
                  else
                  {
                    v180 = (VIDMM_GLOBAL **)*((_QWORD *)v85 + 5003);
                    if ( *v180 != (VIDMM_GLOBAL *)((char *)v85 + 40016) )
                      goto LABEL_16;
                    *(_QWORD *)v175 = (char *)v85 + 40016;
                    *((_QWORD *)v175 + 1) = v180;
                    *v180 = v175;
                    *((_QWORD *)v85 + 5003) = v175;
                  }
                }
              }
              while ( v171 != v86 );
              v1 = this;
            }
            *((_QWORD *)v85 + 4997) = 0LL;
            ExReleasePushLockExclusiveEx((char *)v85 + 39968, 0LL);
            KeLeaveCriticalRegion();
            *((_QWORD *)v85 + 889) = *((_QWORD *)v85 + 577);
            v138 = -qword_1C0051350;
            if ( v170 )
              VIDMM_GLOBAL::EndPreparation(v85, 0xFFFFFFFF, 0LL, 0LL, 0LL, 0LL);
          }
          else
          {
            v138 = v137 - qword_1C0051350;
          }
          VIDMM_WORKER_THREAD::SetTimeout(*(_QWORD *)v85, v138, 3);
        }
      }
      v90 = *(VIDMM_GLOBAL **)v1;
      if ( *(_DWORD *)(*(_QWORD *)v1 + 7048LL)
        || *((_QWORD *)v90 + 894) < (unsigned __int64)qword_1C0051390
        && *((_DWORD *)v90 + 1790) < (unsigned int)dword_1C0051398 )
      {
        if ( g_IsInternalReleaseOrDbg )
        {
          WdLogNewEntry5_WdTrace(v9);
          v90 = *(VIDMM_GLOBAL **)v1;
        }
        VIDMM_GLOBAL::ProcessSystemMemoryOfferList(v90);
        v91 = *(VIDMM_GLOBAL **)v1;
        if ( (*(_DWORD *)(*(_QWORD *)v1 + 7048LL) & 0x8000) != 0 )
        {
          VIDMM_GLOBAL::StartPreparation((__int64)v91, 0xFFFFFFFFLL, 0LL, 0LL, 1003);
          v244 = 0LL;
          if ( *((_DWORD *)v91 + 926) )
          {
            do
            {
              VIDMM_SEGMENT::TrimOfferLists(*(_QWORD *)(*((_QWORD *)v91 + 464) + 8 * v244), 12LL, 0LL, 0LL);
              v244 = (unsigned int)(v244 + 1);
            }
            while ( (unsigned int)v244 < *((_DWORD *)v91 + 926) );
            v1 = this;
          }
          VIDMM_GLOBAL::EndPreparation(v91, 0xFFFFFFFF, 0LL, 0LL, 0LL, 0LL);
          v91 = *(VIDMM_GLOBAL **)v1;
        }
        *((_QWORD *)v91 + 466) = (char *)v91 + 3720;
        *((_QWORD *)v91 + 465) = (char *)v91 + 3720;
        v90 = *(VIDMM_GLOBAL **)v1;
        if ( qword_1C0051348 )
        {
          v92 = 0x8000000000000000uLL;
          if ( *((_BYTE *)v90 + 40170) )
          {
            v93 = *((_DWORD *)v90 + 926);
            v94 = 0LL;
            if ( v93 )
            {
              while ( 1 )
              {
                v95 = *(_QWORD *)(*((_QWORD *)v90 + 464) + 8 * v94);
                if ( (*(_DWORD *)(v95 + 80) & 0x1001) != 0 && *(_QWORD *)(v95 + 176) != v95 + 176 )
                  break;
                v94 = (unsigned int)(v94 + 1);
                if ( (unsigned int)v94 >= v93 )
                  goto LABEL_138;
              }
              *((_QWORD *)v90 + 888) = *((_QWORD *)v90 + 577);
              *((_BYTE *)v90 + 40170) = 0;
              v92 = -qword_1C0051348;
            }
          }
          else
          {
            v106 = *((_QWORD *)v90 + 577) - *((_QWORD *)v90 + 888);
            if ( v106 >= qword_1C0051348 )
            {
              VIDMM_GLOBAL::StartPreparation((__int64)v90, 0xFFFFFFFFLL, 0LL, 0LL, 207);
              v169 = VIDMM_GLOBAL::CleanupMarkedForEvictionAllocationsWorker(v90);
              VIDMM_GLOBAL::EndPreparation(v90, 0xFFFFFFFF, 0LL, 0LL, 0LL, 0LL);
              if ( !v169 )
                *((_BYTE *)v90 + 40170) = 1;
            }
            else
            {
              v92 = v106 - qword_1C0051348;
            }
          }
LABEL_138:
          VIDMM_WORKER_THREAD::SetTimeout(*(_QWORD *)v90, v92, 2);
          v90 = *(VIDMM_GLOBAL **)v1;
        }
      }
      v7 = v297;
      v98 = v90;
      if ( !v297 && !VIDMM_GLOBAL::UnderCleanupLimit(v90) )
      {
        VIDMM_GLOBAL::ResetCleanupCounters(v99, 1);
        v98 = *(VIDMM_GLOBAL **)v1;
        v255 = 1;
      }
      NextPendingTermination = VIDMM_GLOBAL::GetNextPendingTermination((KSPIN_LOCK *)v98, &v256);
      if ( NextPendingTermination )
      {
        v101 = *(VIDMM_GLOBAL **)v1;
        v291 = NextPendingTermination;
        v289 = 0LL;
        v290 = 0;
        v292 = 0LL;
        v293 = 0LL;
        v294 = 0LL;
        v295 = 0LL;
        v288 = 200;
        v261 = 0;
        v277 = 0LL;
        VIDMM_GLOBAL::ProcessDeferredCommand(
          v101,
          (struct _VIDMM_DEFERRED_COMMAND *)&v288,
          &v261,
          0,
          0LL,
          0LL,
          0,
          &v277);
      }
      v102 = *(VIDMM_GLOBAL **)v1;
      if ( *(_BYTE *)(*(_QWORD *)v1 + 40938LL) )
      {
        v245 = 0;
        if ( *((_DWORD *)v102 + 1750) )
        {
          do
          {
            v246 = *((_QWORD *)v102 + 5027) + 1584LL * v245;
            if ( !*(_DWORD *)(v246 + 432) && (*(_BYTE *)(v246 + 436) & 0x40) == 0 )
            {
              for ( k = 0; k < *(_DWORD *)(v246 + 24); ++k )
              {
                v248 = *((_QWORD *)v102 + 464);
                v9 = k + *(_DWORD *)(v246 + 20);
                v249 = *(_QWORD *)(v248 + 8 * v9);
                if ( *(_DWORD *)(v249 + 368) != -1 )
                {
                  if ( (*(_BYTE *)(v246 + 436) & 0x40) == 0 )
                  {
                    v250 = VIDMM_SEGMENT::DriverId(*(VIDMM_SEGMENT **)(v248 + 8 * v9));
                    if ( v250 == *(_DWORD *)(v246 + 60) || v250 == *(_DWORD *)(v246 + 44) )
                    {
                      if ( *(_QWORD *)(v246 + 464) != v246 + 464 )
                      {
                        VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(v102, v245);
                        VIDMM_GLOBAL::StartPreparation((__int64)v102, v245, 0LL, 0LL, 121);
                        VIDMM_GLOBAL::FlushScratchGpuVaRanges(v102, v245);
                        VIDMM_GLOBAL::EndPreparation(v102, v245, 0LL, 0LL, 0LL, 0LL);
                      }
                      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(v102, v245);
                      *(_BYTE *)(v246 + 436) |= 0x40u;
                    }
                  }
                  (*((void (__fastcall **)(_QWORD, _QWORD, _QWORD))v102 + 5017))(
                    *((_QWORD *)v102 + 5018),
                    *(unsigned int *)(v249 + 368),
                    0LL);
                }
              }
            }
            ++v245;
          }
          while ( v245 < *((_DWORD *)v102 + 1750) );
          v7 = v297;
        }
        *((_BYTE *)v102 + 40938) = 0;
      }
    }
    v6 = v299;
    v5 = (char *)v1 + 56;
    v8 = v255;
  }
  while ( v7 );
  v103 = *((_DWORD *)v1 + 7);
  if ( v103 == *((_DWORD *)v1 + 6) )
    goto LABEL_147;
  if ( v103 == 5 )
  {
    v103 = 5;
    v251 = (_QWORD **)(*(_QWORD *)v1 + 44568LL);
    v252 = *v251;
    if ( *v251 != v251 )
    {
      do
      {
        v253 = (VIDMM_DEVICE *)(v252 - 25);
        if ( !*(v252 - 2) && *((_QWORD *)v253 + 3) )
          VIDMM_DEVICE::FullySuspend(v253);
        v252 = (_QWORD *)*v252;
      }
      while ( v252 != v251 );
      v103 = *((_DWORD *)v1 + 7);
    }
  }
  v197 = (struct _KEVENT *)(*((_QWORD *)v1 + 22) + 48LL);
  *((_DWORD *)v1 + 6) = v103;
  KeSetEvent(v197, 0, 0);
  if ( *((_DWORD *)v1 + 7) != 2 )
  {
LABEL_147:
    v104 = *(VIDMM_GLOBAL **)v1;
    v105 = 0;
    if ( *(_DWORD *)(*(_QWORD *)v1 + 3704LL) )
    {
      do
      {
        v9 = *(_QWORD *)(*((_QWORD *)v104 + 464) + 8LL * v105);
        if ( (*(_BYTE *)(v9 + 82) & 1) != 0 )
          VIDMM_SEGMENT::CurateVPR((VIDMM_SEGMENT *)v9);
        ++v105;
      }
      while ( v105 < *((_DWORD *)v104 + 926) );
      v5 = (char *)v1 + 56;
    }
    else
    {
      v5 = (char *)v1 + 56;
    }
    goto LABEL_2;
  }
  *((_QWORD *)v1 + 8) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v1 + 56, 0LL);
  KeLeaveCriticalRegion();
  ObfDereferenceObject(*((PVOID *)v1 + 1));
  PsTerminateSystemThread(0);
}
