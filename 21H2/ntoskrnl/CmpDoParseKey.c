/*
 * XREFs of CmpDoParseKey @ 0x1407362A0
 * Callers:
 *     CmpParseKey @ 0x1407349A0 (CmpParseKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14020A9C4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PsGetCurrentThreadProcess @ 0x14023A1C0 (PsGetCurrentThreadProcess.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14024AC60 (CmpAllocateTransientPoolWithTag.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExpAcquireFastMutexContended @ 0x14029EF4C (ExpAcquireFastMutexContended.c)
 *     _tlgWriteAgg @ 0x1402A1A20 (_tlgWriteAgg.c)
 *     _tlgKeywordOn @ 0x1402A2000 (_tlgKeywordOn.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     CmpInitializeDelayDerefContext @ 0x1402AD320 (CmpInitializeDelayDerefContext.c)
 *     CmpTransSilentIgnore @ 0x1402AD330 (CmpTransSilentIgnore.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetServerSiloServiceSessionId @ 0x1402DF7B0 (PsGetServerSiloServiceSessionId.c)
 *     SeAccessCheck @ 0x1402F9C80 (SeAccessCheck.c)
 *     CmpArmDelayedCloseTimer @ 0x140345F84 (CmpArmDelayedCloseTimer.c)
 *     CmpDrainDelayDerefContext @ 0x140346C60 (CmpDrainDelayDerefContext.c)
 *     CmpFreeTransientPoolWithTag @ 0x140346D64 (CmpFreeTransientPoolWithTag.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     PsGetProcessServerSilo @ 0x140347680 (PsGetProcessServerSilo.c)
 *     NLS_UPCASE @ 0x1403477B0 (NLS_UPCASE.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 *     ExpReleaseFastMutexContended @ 0x140359548 (ExpReleaseFastMutexContended.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404298C0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmpGetSecurityDescriptorForKcbStackEx @ 0x140657654 (CmpGetSecurityDescriptorForKcbStackEx.c)
 *     CmRmIsKcbStackVisible @ 0x140657A44 (CmRmIsKcbStackVisible.c)
 *     CmpCheckCreateAccessOnKcbStack @ 0x1406689D4 (CmpCheckCreateAccessOnKcbStack.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140669A90 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     CmpCheckKeyOwnerForPca @ 0x1406793E4 (CmpCheckKeyOwnerForPca.c)
 *     CmpGetKeyNodeForKcb @ 0x14067E828 (CmpGetKeyNodeForKcb.c)
 *     CmpTransSearchAddTransFromHive @ 0x14067F280 (CmpTransSearchAddTransFromHive.c)
 *     CmpDoWritethroughReparse @ 0x140680100 (CmpDoWritethroughReparse.c)
 *     CmpRecordParseFailure @ 0x14068038C (CmpRecordParseFailure.c)
 *     CmpGetSymbolicLinkTarget @ 0x1406803C0 (CmpGetSymbolicLinkTarget.c)
 *     CmpGetComponentNameAtIndex @ 0x140681174 (CmpGetComponentNameAtIndex.c)
 *     CmpComputeComponentHashes @ 0x1406811B0 (CmpComputeComponentHashes.c)
 *     CmpExpandPathInfo @ 0x140681500 (CmpExpandPathInfo.c)
 *     HvResetDirtyData @ 0x14068A024 (HvResetDirtyData.c)
 *     CmpFreeKeyControlBlock @ 0x14069FA30 (CmpFreeKeyControlBlock.c)
 *     CmRmIsKCBVisible @ 0x1406A7690 (CmRmIsKCBVisible.c)
 *     SeAppendPrivileges @ 0x1406A8AD0 (SeAppendPrivileges.c)
 *     CmpCheckExeOwnerForPca @ 0x1406B4F98 (CmpCheckExeOwnerForPca.c)
 *     CmpSetAccessStateForBackupRestore @ 0x1406B52CC (CmpSetAccessStateForBackupRestore.c)
 *     CmpVEPerformOpenAccessCheck @ 0x1406B6444 (CmpVEPerformOpenAccessCheck.c)
 *     CmpVEExecuteCreateLogic @ 0x1406B656C (CmpVEExecuteCreateLogic.c)
 *     CmpSetKcbAtLayerHeight @ 0x1406B98FC (CmpSetKcbAtLayerHeight.c)
 *     CmpDeleteHive @ 0x1406BBAD8 (CmpDeleteHive.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     CmpEnlistKeyBody @ 0x1406C1694 (CmpEnlistKeyBody.c)
 *     CmpDoesProcessBelongToServiceSession @ 0x1406C7270 (CmpDoesProcessBelongToServiceSession.c)
 *     CmpCreateHiveRootCell @ 0x1406C9FA0 (CmpCreateHiveRootCell.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1406CE3EC (CmpDoQueueLateUnloadWorker.c)
 *     CmpUpdateHiveRootCellFlags @ 0x1406D7440 (CmpUpdateHiveRootCellFlags.c)
 *     CmpTryToLockHashEntryExclusive @ 0x1406DA700 (CmpTryToLockHashEntryExclusive.c)
 *     CmpGetComponentHashAtIndex @ 0x1406E3664 (CmpGetComponentHashAtIndex.c)
 *     CmpCreateChild @ 0x140719278 (CmpCreateChild.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x14071A4E8 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpRebuildKcbCacheFromNode @ 0x14071B4A0 (CmpRebuildKcbCacheFromNode.c)
 *     CmpLockRegistryExclusive @ 0x14071B6EC (CmpLockRegistryExclusive.c)
 *     CmpUnlockHashEntry @ 0x14071B8C0 (CmpUnlockHashEntry.c)
 *     CmpLockHashEntrySharedByKcb @ 0x14071BADC (CmpLockHashEntrySharedByKcb.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x14071BC64 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpDereferenceKeyControlBlock @ 0x14071BF40 (CmpDereferenceKeyControlBlock.c)
 *     CmpUnlockHashEntryByKcb @ 0x14071C050 (CmpUnlockHashEntryByKcb.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x14071C0FC (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpCleanUpKcbCachedSymlink @ 0x14071EE7C (CmpCleanUpKcbCachedSymlink.c)
 *     HvpMarkCellDirty @ 0x14071F300 (HvpMarkCellDirty.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14071F6D0 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpIsKeyStackSymlink @ 0x140720DD4 (CmpIsKeyStackSymlink.c)
 *     CmpIsKeyStackDeleted @ 0x140720F74 (CmpIsKeyStackDeleted.c)
 *     CmpUnlockKcbStack @ 0x140721BAC (CmpUnlockKcbStack.c)
 *     CmpGetKcbAtLayerHeight @ 0x140721CE0 (CmpGetKcbAtLayerHeight.c)
 *     CmListGetPrevElement @ 0x140721F88 (CmListGetPrevElement.c)
 *     CmEqualTrans @ 0x140721FD0 (CmEqualTrans.c)
 *     SeCaptureSubjectContextEx @ 0x14072A390 (SeCaptureSubjectContextEx.c)
 *     CmpCreateKeyBody @ 0x14072E210 (CmpCreateKeyBody.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1407350A0 (CmpPerformCompleteKcbCacheLookup.c)
 *     SeQueryInformationToken @ 0x14079F290 (SeQueryInformationToken.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1407C05F4 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpConstructNameWithStatus @ 0x1407C0690 (CmpConstructNameWithStatus.c)
 *     CmpLockKcbExclusive @ 0x1407C0854 (CmpLockKcbExclusive.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1407C09E0 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpCreateKeyControlBlock @ 0x1407C3850 (CmpCreateKeyControlBlock.c)
 *     CmpVEExecuteOpenLogic @ 0x1407C64A0 (CmpVEExecuteOpenLogic.c)
 *     CmpWalkOneLevel @ 0x1407C8AE0 (CmpWalkOneLevel.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     CmpWaitForHiveMount @ 0x140853BB8 (CmpWaitForHiveMount.c)
 *     CmpPublishEventForPcaResolver @ 0x140910BCC (CmpPublishEventForPcaResolver.c)
 *     CmpCleanupPathInfo @ 0x140911848 (CmpCleanupPathInfo.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x140915544 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140917708 (CmpVEExecuteVirtualStoreParseLogic.c)
 *     CmpLogUnsupportedOperation @ 0x14091CEA0 (CmpLogUnsupportedOperation.c)
 *     CmpPromoteKey @ 0x1409226E0 (CmpPromoteKey.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140AB41E0 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140AB41FC (HvLockHiveFlusherExclusive.c)
 *     CmListGetNextElement @ 0x140AB4218 (CmListGetNextElement.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpLockKcbShared @ 0x140AB42D0 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140AB4300 (CmpUnlockKcb.c)
 *     CmpLockRegistry @ 0x140AB4370 (CmpLockRegistry.c)
 *     HvpGetBinContextInitialize @ 0x140AB4534 (HvpGetBinContextInitialize.c)
 *     CmpAttachToRegistryProcess @ 0x140AB4550 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AB4580 (CmpDetachFromRegistryProcess.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140AB45A0 (CmpIsKeyDeletedForKeyBody.c)
 */

__int64 __fastcall CmpDoParseKey(
        __int64 a1,
        struct _ACCESS_STATE *a2,
        unsigned __int8 a3,
        __int16 a4,
        __int64 a5,
        struct _ACCESS_STATE *a6,
        __int64 a7,
        int a8,
        PVOID *a9)
{
  int v9; // r13d
  PPRIVILEGE_SET v10; // r15
  __int64 v11; // r12
  __int16 v13; // r14
  __m128i v15; // xmm6
  ULONG_PTR v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  char v27; // al
  _QWORD *CurrentServerSiloGlobals; // rax
  UNICODE_STRING *v29; // r9
  unsigned __int16 *v30; // rdx
  unsigned __int16 *v31; // r11
  __int64 v32; // rdx
  __int64 v33; // r12
  unsigned __int16 v34; // r13
  unsigned __int16 *v35; // rsi
  __int64 v36; // r14
  unsigned __int16 v37; // di
  unsigned __int16 v38; // dx
  unsigned __int16 v39; // ax
  __int16 v40; // r10
  wchar_t *Buffer; // rax
  __int16 v42; // r13
  __int16 v43; // r9
  unsigned __int64 v44; // rcx
  __int16 v45; // dx
  __int64 v46; // r8
  __int16 v47; // cx
  _WORD *v48; // rax
  ULONG_PTR v49; // r12
  int v50; // edi
  __int64 v51; // rax
  unsigned int v52; // ecx
  bool v53; // zf
  __int64 v54; // rax
  __int16 v55; // cx
  __int64 v56; // r8
  int v57; // eax
  int v58; // edx
  struct _PRIVILEGE_SET *v59; // rdi
  unsigned int v60; // edx
  int *v61; // rcx
  struct _LOOKASIDE_LIST_EX *v62; // r9
  int v63; // r14d
  SIZE_T v64; // rsi
  struct _PRIVILEGE_SET *v65; // rax
  unsigned __int16 v66; // dx
  char v67; // si
  __int64 v68; // rdx
  ULONG_PTR v69; // r14
  unsigned int v70; // r10d
  __int64 v71; // rcx
  __int64 v72; // r10
  __int64 v73; // r10
  __int16 v74; // dx
  PPRIVILEGE_SET v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  char v80; // cl
  _WORD *v81; // r14
  __int16 v82; // r12
  __int16 v83; // si
  __int16 v84; // di
  int v85; // eax
  __m128i v86; // xmm0
  unsigned int v87; // edx
  int v88; // r10d
  __int16 v89; // dx
  unsigned __int16 *v90; // r11
  __int16 v91; // r13
  __int64 v92; // rdi
  unsigned int v93; // eax
  unsigned int v94; // r8d
  __int64 v95; // r9
  unsigned int v96; // edi
  __int64 v97; // r13
  int v98; // r10d
  __int16 v99; // ax
  unsigned __int16 *v100; // r11
  __int16 v101; // si
  __int16 v102; // r14
  __int64 v103; // rdi
  unsigned int v104; // eax
  __int64 v105; // r9
  int *v106; // rcx
  char v107; // di
  unsigned int v108; // esi
  int v109; // eax
  int v110; // r8d
  ULONG_PTR v111; // r13
  unsigned int v112; // esi
  int v113; // eax
  char v114; // al
  __int16 v115; // di
  __int64 v116; // rdi
  __int64 v117; // rax
  int *v118; // rax
  SECURITY_SUBJECT_CONTEXT *p_SubjectSecurityContext; // rdi
  __int64 v120; // rdx
  __int16 i; // cx
  __int64 v122; // rax
  _DWORD *p_Attributes; // rsi
  char v124; // r14
  int v125; // eax
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  struct _KPROCESS *CurrentThreadProcess; // rax
  bool v129; // di
  int v130; // eax
  __int64 v131; // rdi
  __int64 v132; // rsi
  __int64 v133; // rax
  __int64 v134; // rax
  __int64 v135; // r8
  unsigned int v136; // r9d
  __int64 v137; // rdi
  struct _LOOKASIDE_LIST_EX *v138; // r9
  __int64 v139; // rdx
  __int64 v140; // rcx
  __int64 v141; // r8
  __int64 v142; // r9
  __int64 v143; // rdx
  __int64 v144; // rcx
  __int64 v145; // r8
  int v146; // r8d
  __int64 v147; // r14
  int v148; // esi
  struct _PRIVILEGE_SET *v149; // rbx
  SIZE_T v150; // rdi
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  int v152; // esi
  struct _PRIVILEGE_SET *v153; // rdi
  SIZE_T v154; // rbx
  struct _PRIVILEGE_SET *v155; // rax
  __int64 *v156; // rsi
  int *v157; // rdi
  __int16 v158; // dx
  __int64 v159; // r10
  __int64 v160; // r10
  __int16 v161; // dx
  __int16 v162; // r13
  __int16 v163; // dx
  __int16 v164; // bx
  __int64 v165; // rcx
  __int64 v166; // rcx
  __int64 v167; // rax
  __int64 v168; // rdx
  __int64 v169; // r8
  __int64 v170; // rax
  __int64 v171; // r9
  int v172; // ecx
  unsigned __int16 v173; // r8
  __int64 v174; // rdx
  __int16 v175; // bx
  __int64 v176; // rcx
  unsigned int v177; // r13d
  __int64 v178; // rbx
  int v179; // edx
  int *v180; // r8
  __int64 v181; // rax
  __int64 v182; // r8
  char v183; // al
  int v184; // ecx
  __int64 v185; // rax
  __int64 v186; // rdx
  __int64 v187; // r8
  __int64 v188; // rax
  __int64 v189; // rdx
  __int64 v190; // r8
  ULONG_PTR v191; // rax
  __int64 *v192; // rax
  int v193; // eax
  __int64 v194; // rcx
  __int64 v195; // rax
  __int64 v196; // rax
  __int64 v197; // r10
  __int64 *v198; // r14
  __int16 v199; // dx
  __int64 j; // r10
  __int64 v201; // r10
  __int16 v202; // dx
  __int64 v203; // r13
  __int64 v204; // rcx
  __int16 k; // bx
  __int64 v206; // rcx
  __int16 m; // bx
  __int64 v208; // rcx
  int v209; // r8d
  __int64 v210; // rdi
  __int16 v211; // bx
  __int64 v212; // r13
  __int64 v213; // r12
  UNICODE_STRING *ComponentNameAtIndex; // r12
  unsigned int v215; // edx
  int ComponentHashAtIndex; // ebx
  int v217; // r8d
  int v218; // edx
  __int16 n; // bx
  __int64 v220; // rcx
  ULONG_PTR PrivilegeCount; // rdx
  struct _PRIVILEGE_SET *v222; // r14
  ULONG_PTR Luid; // rcx
  int HiveRootCell; // eax
  int updated; // eax
  ULONG_PTR v226; // r8
  volatile signed __int64 *v227; // rcx
  ULONG_PTR v228; // rbx
  __int64 v229; // rdi
  int started; // eax
  unsigned __int8 v231; // dl
  int v232; // eax
  ULONG_PTR v233; // rcx
  int v234; // ebx
  int v235; // eax
  __int64 v236; // rbx
  ULONG v237; // eax
  ULONG_PTR v238; // r14
  __int64 v239; // rcx
  __int64 KeyNodeForKcb; // rax
  __int64 v241; // rcx
  __int64 v242; // rbx
  int v243; // r12d
  volatile signed __int64 *v244; // rbx
  PACCESS_STATE v245; // rbx
  __int64 v246; // rdi
  __int64 v247; // rbx
  unsigned __int8 v248; // dl
  UNICODE_STRING *v249; // r9
  unsigned __int16 v250; // dx
  __int64 v251; // rcx
  __int64 NextElement; // rax
  __int64 v253; // r9
  int v254; // ecx
  unsigned __int16 v255; // r8
  __int64 v256; // rdx
  int SymbolicLinkTarget; // eax
  __int64 v258; // rcx
  ACCESS_MASK v259; // ebx
  int v260; // eax
  int v261; // eax
  int v262; // eax
  __int64 v263; // rax
  __int64 v264; // rdx
  __int64 v265; // r8
  __int64 v266; // rax
  __int64 v267; // rdx
  __int64 v268; // r8
  const UNICODE_STRING *v269; // rbx
  int v270; // eax
  int v271; // eax
  __int64 v272; // rcx
  _KPROCESS *v273; // rbx
  int SessionId; // edi
  __int64 ProcessServerSilo; // rax
  __int64 v276; // rcx
  __int64 v277; // r8
  int v278; // eax
  __int64 v279; // rdi
  int Logic; // eax
  __int64 v281; // rcx
  _KPROCESS *v282; // rbx
  int v283; // edi
  __int64 v284; // rax
  __int64 v285; // rcx
  int v286; // eax
  UNICODE_STRING *v287; // r9
  int Child; // eax
  int v289; // edx
  int v290; // eax
  __int64 v291; // rcx
  ACCESS_MASK v292; // ebx
  int v293; // eax
  int v294; // r8d
  unsigned __int8 v295; // di
  int v296; // eax
  int v297; // eax
  int v298; // r13d
  __int64 SecurityDescriptorForKcbStack; // rax
  int v300; // r14d
  ACCESS_MASK OriginalDesiredAccess; // ecx
  _QWORD *v302; // rbx
  __int64 v303; // rdi
  __int64 v304; // rdx
  __int16 v305; // bx
  __int64 KcbAtLayerHeight; // rax
  __int64 v307; // r13
  ACCESS_MASK v308; // ecx
  BOOLEAN v309; // r12
  __int64 v310; // r8
  struct _LOOKASIDE_LIST_EX *v311; // r9
  BOOLEAN v312; // di
  __int64 v313; // rdi
  __int64 v314; // r11
  struct _PRIVILEGE_SET *v315; // r12
  int v316; // r13d
  SIZE_T v317; // rbx
  struct _PRIVILEGE_SET *v318; // rax
  __int16 v319; // bx
  __int64 v320; // r10
  __int64 v321; // r10
  __int64 v322; // r13
  __int64 v323; // r14
  PPRIVILEGE_SET v324; // rdi
  __int64 v325; // r12
  __int64 PrevElement; // rbx
  __int64 v327; // r9
  struct _KTHREAD *v328; // rax
  void *v329; // r12
  PSECURITY_SUBJECT_CONTEXT v330; // r13
  struct _KTHREAD *v331; // rax
  PACCESS_STATE v332; // rbx
  struct _ACCESS_STATE *v333; // r8
  ACCESS_MASK v334; // eax
  _WORD *v335; // rbx
  __int64 v336; // rcx
  PACCESS_STATE v337; // rbx
  _KPROCESS *v338; // rax
  ULONG v339; // eax
  __int64 v340; // rdi
  __int16 ii; // bx
  __int64 v342; // rcx
  ULONG_PTR v343; // rbx
  ULONG v344; // eax
  __int64 v345; // rdx
  __int64 v346; // rcx
  __int64 v347; // r8
  __int64 v348; // r9
  PACCESS_STATE v349; // rbx
  struct _SLIST_ENTRY *v350; // rdx
  struct _KPRCB *v351; // r8
  _GENERAL_LOOKASIDE *P; // rcx
  signed __int64 v353; // rcx
  __int64 v354; // r11
  unsigned __int64 v355; // r8
  signed __int64 v356; // r10
  bool v357; // r9
  unsigned __int64 v358; // rax
  unsigned int v359; // r12d
  ULONG_PTR v360; // rdi
  ULONG_PTR v361; // rbx
  signed __int32 v362; // eax
  signed __int32 v363; // ett
  ULONG_PTR v364; // r13
  ULONG_PTR v365; // rbx
  __int64 v366; // r14
  __int64 v367; // rax
  __int64 v368; // rax
  ULONG_PTR v369; // rdx
  __int64 v370; // rcx
  signed __int64 v371; // rax
  ULONG_PTR v372; // rsi
  __int64 v373; // rbx
  struct _KTHREAD *v374; // rax
  bool v375; // dl
  int v376; // ecx
  __int64 v377; // rax
  __int64 v378; // rbx
  unsigned __int8 CurrentIrql; // si
  ULONG_PTR v380; // r8
  _QWORD *v381; // rax
  __int64 v382; // rdx
  unsigned __int64 v383; // rbx
  bool v384; // si
  signed __int32 v385; // eax
  unsigned __int8 v386; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v389; // eax
  ULONG_PTR v390; // rcx
  int PreviouslyGrantedAccess; // [rsp+20h] [rbp-E0h]
  KPROCESSOR_MODE AccessMode[8]; // [rsp+38h] [rbp-C8h]
  int KeyControlBlock; // [rsp+60h] [rbp-A0h] BYREF
  char v395; // [rsp+64h] [rbp-9Ch]
  unsigned __int8 v396; // [rsp+65h] [rbp-9Bh]
  __int16 v397; // [rsp+66h] [rbp-9Ah] BYREF
  char v398; // [rsp+68h] [rbp-98h]
  __int16 v399; // [rsp+69h] [rbp-97h] BYREF
  char v400; // [rsp+6Bh] [rbp-95h]
  ULONG_PTR v401; // [rsp+70h] [rbp-90h]
  ULONG_PTR BugCheckParameter4; // [rsp+78h] [rbp-88h] BYREF
  int v403; // [rsp+80h] [rbp-80h]
  unsigned int v404; // [rsp+90h] [rbp-70h]
  char v405; // [rsp+94h] [rbp-6Ch] BYREF
  __int16 v406; // [rsp+95h] [rbp-6Bh]
  unsigned __int16 v407; // [rsp+98h] [rbp-68h] BYREF
  int v408[2]; // [rsp+A0h] [rbp-60h]
  PVOID Object; // [rsp+A8h] [rbp-58h] BYREF
  char v410; // [rsp+B0h] [rbp-50h]
  char v411; // [rsp+B1h] [rbp-4Fh]
  BOOLEAN v412[8]; // [rsp+B8h] [rbp-48h] BYREF
  PACCESS_STATE AccessState; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v414; // [rsp+C8h] [rbp-38h]
  ACCESS_MASK GrantedAccess[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v416; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v417; // [rsp+E0h] [rbp-20h] BYREF
  NTSTATUS AccessStatus[2]; // [rsp+E8h] [rbp-18h] BYREF
  __m128i v419; // [rsp+F0h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+100h] [rbp+0h]
  __int64 v421; // [rsp+108h] [rbp+8h] BYREF
  PPRIVILEGE_SET v422; // [rsp+110h] [rbp+10h] BYREF
  PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+118h] [rbp+18h]
  PVOID TokenInformation; // [rsp+120h] [rbp+20h] BYREF
  __int64 v425; // [rsp+128h] [rbp+28h] BYREF
  ULONG_PTR v426; // [rsp+130h] [rbp+30h] BYREF
  __m128i v427; // [rsp+140h] [rbp+40h]
  PACCESS_STATE v428; // [rsp+150h] [rbp+50h]
  PVOID *v429; // [rsp+158h] [rbp+58h] BYREF
  struct _ACCESS_STATE *v430; // [rsp+160h] [rbp+60h] BYREF
  ULONG_PTR v431; // [rsp+168h] [rbp+68h]
  ULONG_PTR v432[2]; // [rsp+170h] [rbp+70h] BYREF
  __m128i v433; // [rsp+180h] [rbp+80h]
  __int128 v434; // [rsp+190h] [rbp+90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _LOOKASIDE_LIST_EX *v436; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v437; // [rsp+1B8h] [rbp+B8h] BYREF
  __int64 v438; // [rsp+1C0h] [rbp+C0h] BYREF
  __int128 v439; // [rsp+1C8h] [rbp+C8h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+1D8h] [rbp+D8h]
  __int128 v441; // [rsp+1E8h] [rbp+E8h] BYREF
  PPRIVILEGE_SET v442[2]; // [rsp+1F8h] [rbp+F8h]
  __int128 v443; // [rsp+208h] [rbp+108h] BYREF
  __int64 v444[2]; // [rsp+220h] [rbp+120h] BYREF
  PPRIVILEGE_SET v445[2]; // [rsp+230h] [rbp+130h]
  int v446[4]; // [rsp+240h] [rbp+140h] BYREF
  PPRIVILEGE_SET v447[2]; // [rsp+250h] [rbp+150h]
  __m128i v448; // [rsp+260h] [rbp+160h]
  __m128i v449; // [rsp+270h] [rbp+170h]
  __int128 v450; // [rsp+280h] [rbp+180h] BYREF
  PPRIVILEGE_SET v451[2]; // [rsp+290h] [rbp+190h]
  __int64 v452[2]; // [rsp+2A0h] [rbp+1A0h] BYREF
  PPRIVILEGE_SET v453[2]; // [rsp+2B0h] [rbp+1B0h]
  __int64 v454; // [rsp+2C0h] [rbp+1C0h]
  _QWORD v455[3]; // [rsp+2C8h] [rbp+1C8h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+2E0h] [rbp+1E0h] BYREF
  int v457[44]; // [rsp+300h] [rbp+200h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v458; // [rsp+3B0h] [rbp+2B0h] BYREF
  __int64 *v459; // [rsp+3D0h] [rbp+2D0h]
  __int64 v460; // [rsp+3D8h] [rbp+2D8h]
  struct _EVENT_DATA_DESCRIPTOR v461; // [rsp+3E0h] [rbp+2E0h] BYREF

  v9 = 0;
  v10 = (PPRIVILEGE_SET)a7;
  v11 = 0LL;
  *(_QWORD *)GrantedAccess = a5;
  v416 = a1;
  v13 = 0;
  v429 = a9;
  v396 = a3;
  AccessState = a2;
  v422 = (PPRIVILEGE_SET)a7;
  v430 = a6;
  LOWORD(v417) = 0;
  *(_QWORD *)v412 = 0LL;
  DestinationString = 0LL;
  v421 = 0LL;
  v434 = 0LL;
  v399 = 0;
  Object = 0LL;
  v401 = 0LL;
  BugCheckParameter4 = 0LL;
  v426 = 0LL;
  v405 = 0;
  *(_QWORD *)v408 = 0LL;
  v395 = 0;
  v411 = 0;
  v406 = 0;
  v400 = 0;
  v404 = 0;
  v407 = 0;
  v432[0] = 0LL;
  v425 = 0xFFFFFFFFLL;
  HvpGetBinContextInitialize((char *)&v425 + 4);
  v15 = *(__m128i *)&a6->OperationID.LowPart;
  v397 = 0;
  v419 = v15;
  CmpInitializeDelayDerefContext(&v434);
  v398 = 0;
  v428 = 0LL;
  memset(v457, 0, 0xA8uLL);
  *(_OWORD *)(a7 + 160) = 0LL;
  *(_OWORD *)(a7 + 176) = 0LL;
  *(_OWORD *)(a7 + 192) = 0LL;
  *(_OWORD *)v444 = 0LL;
  WORD1(v444[0]) = -1;
  *(_OWORD *)v446 = 0LL;
  HIWORD(v446[0]) = -1;
  *(_OWORD *)v452 = 0LL;
  WORD1(v452[0]) = -1;
  *(_QWORD *)(a7 + 208) = 0LL;
  *(_OWORD *)v445 = 0LL;
  *(_OWORD *)v447 = 0LL;
  *(_OWORD *)v453 = 0LL;
  *(_QWORD *)(a7 + 224) = 0LL;
  *(_QWORD *)(a7 + 232) = 0LL;
  *(_QWORD *)(a7 + 240) = 0LL;
  *(_QWORD *)(a7 + 248) = 0LL;
  *(_QWORD *)(a7 + 256) = 0LL;
  *(_QWORD *)(a7 + 264) = 0LL;
  *(_QWORD *)(a7 + 272) = 0LL;
  *(_QWORD *)(a7 + 280) = 0LL;
  *(_QWORD *)(a7 + 288) = 0LL;
  v16 = *(_QWORD *)(a7 + 88);
  BugCheckParameter2 = v16;
  *(_QWORD *)(a7 + 216) = v16;
  if ( (a4 & 0x100) != 0 )
    *(_DWORD *)a7 |= 0x200u;
  v17 = *(_QWORD *)(a7 + 72);
  *(_QWORD *)(a7 + 88) = 0LL;
  if ( v17 )
  {
    v18 = *(_QWORD *)(a1 + 56);
    if ( v18 && v17 != v18 )
    {
      KeyControlBlock = -1072103422;
      CmpRecordParseFailure(a7, 256, -1072103422);
      goto LABEL_700;
    }
    *(_QWORD *)AccessStatus = 0LL;
  }
  else
  {
    v17 = *(_QWORD *)(a1 + 56);
    *(_QWORD *)AccessStatus = *(_QWORD *)(a1 + 64);
  }
  v19 = 65534LL;
  *(_DWORD *)(a7 + 20) = *(unsigned __int16 *)(a1 + 50);
  v20 = *(_QWORD *)(a1 + 8);
  v21 = *((_QWORD *)CmpRegistryRootObject + 1);
  if ( !v16 )
    goto LABEL_83;
  if ( v20 != v21 )
  {
    CmpLockRegistry(v20, v21, 65534LL);
    CmpDereferenceKeyControlBlock(v16);
    BugCheckParameter2 = 0LL;
    CmpUnlockRegistry(v23, v22, v24, v25);
    LOBYTE(v399) = 0;
LABEL_82:
    v19 = 65534LL;
LABEL_83:
    v80 = 0;
    LODWORD(v49) = _mm_cvtsi128_si32(v15);
    v433 = v15;
    v427 = v15;
    v69 = *(_QWORD *)(v416 + 8);
    v431 = v69;
    v410 = 0;
    v414 = v49;
    v419.m128i_i16[0] = v49;
    if ( (_WORD)v49 )
    {
      v81 = (_WORD *)v427.m128i_i64[1];
      v82 = v427.m128i_i16[1];
      v83 = v427.m128i_i16[0];
      do
      {
        if ( (__int16)v9 >= 32 )
          break;
        if ( *v81 == 92 )
        {
          LOWORD(v9) = v9 + 1;
          v84 = v433.m128i_i16[0] - v83;
          LOWORD(v404) = v9;
          v433.m128i_i16[0] = v84;
          v433.m128i_i16[1] = v84;
          if ( (__int16)v9 > 8 && !v80 )
          {
            v85 = CmpExpandPathInfo((__int64)v457);
            if ( v85 < 0 )
              goto LABEL_120;
            v410 = 1;
          }
          v86 = v433;
          v87 = (__int16)v9 - 1;
          LODWORD(SubjectSecurityContext) = v87;
          if ( v87 >= 8 )
            *(__m128i *)(16 * ((unsigned int)((__int16)v9 - 9) + 6LL) + *(_QWORD *)&v457[40]) = v433;
          else
            *(__m128i *)&v457[4 * v87 + 8] = v433;
          v448 = v86;
          v88 = 0;
          v19 = 65534LL;
          if ( v84 )
          {
            v89 = v448.m128i_i16[0];
            v90 = (unsigned __int16 *)v448.m128i_i64[1];
            v91 = v448.m128i_i16[1];
            LOWORD(v403) = v448.m128i_i16[0];
            v92 = (unsigned __int16)(((unsigned __int16)(v84 - 1) >> 1) + 1);
            do
            {
              v93 = *v90;
              if ( v93 >= 0x61 )
              {
                if ( v93 <= 0x7A )
                {
                  LOWORD(v93) = v93 - 32;
                }
                else
                {
                  v95 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 154);
                  if ( v95 && (unsigned __int16)v94 >= 0xC0u )
                  {
                    v89 = v403;
                    LOWORD(v93) = v94
                                + *(_WORD *)(v95
                                           + 2LL
                                           * ((v94 & 0xF)
                                            + *(unsigned __int16 *)(v95
                                                                  + 2LL
                                                                  * (((unsigned __int8)v94 >> 4)
                                                                   + (unsigned int)*(unsigned __int16 *)(v95 + 2 * ((unsigned __int64)v94 >> 8))))));
                    v19 = 65534LL;
                  }
                  else
                  {
                    LOWORD(v93) = v94;
                    v19 = 65534LL;
                  }
                }
              }
              v89 -= 2;
              ++v90;
              v91 -= 2;
              LOWORD(v403) = v89;
              v88 = (unsigned __int16)v93 + 37 * v88;
              --v92;
            }
            while ( v92 );
            v10 = v422;
            v87 = (unsigned int)SubjectSecurityContext;
            LOWORD(v9) = v404;
          }
          if ( v87 >= 8 )
            *(_DWORD *)(*(_QWORD *)&v457[40] + 4LL * (v87 - 8)) = v88;
          else
            v457[v87] = v88;
          if ( v83 )
          {
            do
            {
              if ( *v81 != 92 )
                break;
              ++v81;
              v82 -= 2;
              v83 -= 2;
            }
            while ( v83 );
            v427.m128i_i16[0] = v83;
            v427.m128i_i64[1] = (__int64)v81;
            v427.m128i_i16[1] = v82;
          }
          v15 = v427;
          v80 = v410;
          v433 = v427;
        }
        else
        {
          ++v81;
          v83 -= 2;
          v82 -= 2;
          v427.m128i_i64[1] = (__int64)v81;
          v427.m128i_i16[1] = v82;
          v427.m128i_i16[0] = v83;
        }
      }
      while ( v83 );
      LOWORD(v49) = v414;
      v96 = (__int16)v9;
      if ( v83 )
      {
        v85 = -1073741811;
LABEL_120:
        KeyControlBlock = v85;
        CmpRecordParseFailure((__int64)v10, 1280, v85);
        v11 = v401;
        goto LABEL_698;
      }
      LOWORD(v404) = v9 + 1;
      if ( (__int16)(v9 + 1) > 8 && !v80 )
      {
        v85 = CmpExpandPathInfo((__int64)v457);
        if ( v85 < 0 )
          goto LABEL_120;
      }
      v97 = (unsigned int)(__int16)v9;
      if ( v96 >= 8 )
        *(__m128i *)(16 * (v96 - 8 + 6LL) + *(_QWORD *)&v457[40]) = v15;
      else
        *(__m128i *)&v457[4 * (unsigned int)v97 + 8] = v15;
      v449 = v15;
      v98 = 0;
      v99 = _mm_cvtsi128_si32(v15);
      v433.m128i_i16[0] = v99;
      if ( v99 )
      {
        v100 = (unsigned __int16 *)v449.m128i_i64[1];
        v101 = v449.m128i_i16[1];
        v102 = v449.m128i_i16[0];
        v103 = (unsigned __int16)(((unsigned __int16)(v99 - 1) >> 1) + 1);
        do
        {
          v104 = *v100;
          if ( v104 >= 0x61 )
          {
            if ( v104 <= 0x7A )
            {
              LOWORD(v104) = v104 - 32;
            }
            else
            {
              v105 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 154);
              if ( v105 && (unsigned __int16)v19 >= 0xC0u )
                LOWORD(v104) = v19
                             + *(_WORD *)(v105
                                        + 2
                                        * ((v19 & 0xF)
                                         + *(unsigned __int16 *)(v105
                                                               + 2LL
                                                               * (((unsigned __int8)v19 >> 4)
                                                                + (unsigned int)*(unsigned __int16 *)(v105 + 2 * ((unsigned __int64)(unsigned int)v19 >> 8))))));
              else
                LOWORD(v104) = v19;
            }
          }
          ++v100;
          v102 -= 2;
          v101 -= 2;
          v98 = (unsigned __int16)v104 + 37 * v98;
          --v103;
        }
        while ( v103 );
        v10 = v422;
        LOWORD(v49) = v414;
      }
      if ( (unsigned int)v97 >= 8 )
        *(_DWORD *)(*(_QWORD *)&v457[40] + 4LL * (unsigned int)(v97 - 8)) = v98;
      else
        v457[v97] = v98;
      v9 = (unsigned __int16)v404;
      v69 = v431;
    }
    v70 = (__int16)v9;
    v403 = v9;
    v68 = 0LL;
    v407 = v9;
    v414 = (__int16)v9;
    if ( (_WORD)v9 )
    {
      v19 = *(_QWORD *)&v457[40];
      while ( 1 )
      {
        v106 = (unsigned int)v68 >= 8
             ? (int *)(*(_QWORD *)&v457[40] + 16 * ((unsigned int)(v68 - 8) + 6LL))
             : &v457[4 * (unsigned int)v68 + 8];
        if ( *(_WORD *)v106 > 0x200u )
          break;
        v68 = (unsigned int)(v68 + 1);
        if ( (unsigned int)v68 >= (__int16)v9 )
          goto LABEL_146;
      }
      KeyControlBlock = -1073741811;
      CmpRecordParseFailure((__int64)v10, 1536, -1073741811);
      v11 = v401;
      goto LABEL_698;
    }
LABEL_146:
    v71 = 0LL;
    v404 = 0;
LABEL_147:
    v107 = v400;
    *(_QWORD *)&v10[11].Control = v69;
    v10[12].Privilege[0].Luid = (LUID)v69;
    v108 = (unsigned __int16)v71;
    if ( v70 + ((*(_DWORD *)(v69 + 8) >> 21) & 0x3FF) - (unsigned __int16)v71 > 0x200 )
    {
      KeyControlBlock = -1073741811;
      CmpRecordParseFailure((__int64)v10, 1792, -1073741811);
      v11 = v401;
LABEL_698:
      if ( v400 )
        CmpUnlockHashEntryByKcb(BugCheckParameter2);
      goto LABEL_700;
    }
    if ( !(_BYTE)v399 )
    {
      if ( (v10->PrivilegeCount & 0x400) != 0 )
        CmpLockRegistryExclusive();
      else
        CmpLockRegistry(v71, v68, v19);
      v70 = v414;
      LOWORD(v71) = v404;
      LOBYTE(v399) = 1;
    }
    v109 = *(_DWORD *)(v416 + 48);
    if ( (v109 & 9) != 0 )
    {
      v110 = -1073741444;
      if ( (v109 & 1) != 0 )
        v110 = -1073740763;
      KeyControlBlock = v110;
      CmpRecordParseFailure((__int64)v10, 2048, v110);
      v11 = v401;
      goto LABEL_698;
    }
    if ( (_WORD)v71 == (_WORD)v9 )
    {
      CmpReferenceKeyControlBlockUnsafe((volatile signed __int64 *)v69);
      v111 = v69;
      v401 = v69;
      BugCheckParameter4 = v69;
      if ( v69 == BugCheckParameter2 )
      {
        LOWORD(v112) = v404;
        v400 = 0;
        LOBYTE(v397) = v107;
      }
      else
      {
        CmpLockHashEntrySharedByKcb(v69);
        LOWORD(v112) = v404;
        LOBYTE(v397) = 1;
      }
    }
    else
    {
      v113 = CmpPerformCompleteKcbCacheLookup(
               (volatile signed __int64 *)v69,
               v108,
               v70,
               (__int64)v457,
               v10,
               &BugCheckParameter4,
               (char *)&v397,
               &v417);
      KeyControlBlock = v113;
      if ( v113 < 0 || v113 == 259 )
      {
        CmpRecordParseFailure((__int64)v10, 2432, v113);
        v11 = BugCheckParameter4;
        v401 = BugCheckParameter4;
LABEL_696:
        if ( (_BYTE)v397 )
          CmpUnlockHashEntryByKcb(v11);
        goto LABEL_698;
      }
      v111 = BugCheckParameter4;
      v114 = v417;
      HIWORD(v112) = HIWORD(v404);
      LOWORD(v112) = v417 + v404;
      v401 = BugCheckParameter4;
      v404 = v112;
      *(_QWORD *)&v10[11].Privilege[0].Luid.HighPart = BugCheckParameter4;
      LOBYTE(v10[12].Privilege[0].Attributes) = v114;
      v10[12].Privilege[0].Luid = (LUID)v111;
    }
    v115 = v403;
    if ( (_WORD)v112 == (_WORD)v403 && (v10->PrivilegeCount & 1) == 0 )
    {
      v116 = *(_QWORD *)(v111 + 32);
      *(_QWORD *)(*(_QWORD *)(v116 + 1648)
                + 24
                * ((unsigned int)(*(_DWORD *)(v116 + 1656) - 1) & ((unsigned int)(101027
                                                                                * (*(_DWORD *)(v111 + 16) ^ (*(_DWORD *)(v111 + 16) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(v111 + 16) ^ (*(_DWORD *)(v111 + 16) >> 9))) >> 9)))
                + 8) = 0LL;
      ExReleasePushLockEx(
        *(_QWORD *)(*(_QWORD *)(v111 + 32) + 1648LL)
      + 24
      * ((unsigned int)(*(_DWORD *)(*(_QWORD *)(v111 + 32) + 1656LL) - 1) & ((unsigned int)(101027
                                                                                          * (*(_DWORD *)(v111 + 16) ^ (*(_DWORD *)(v111 + 16) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(v111 + 16) ^ (*(_DWORD *)(v111 + 16) >> 9))) >> 9))),
        0LL);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v116 + 4232), 0xFFFFFFFF) == 1 )
        CmpDeleteHive((_QWORD *)v116);
      v115 = v407;
      v111 = BugCheckParameter4;
      LOWORD(v49) = v419.m128i_i16[0];
      v403 = v407;
      v401 = BugCheckParameter4;
      LOBYTE(v397) = 0;
    }
    CmpLockKcbShared(v111);
    if ( (__int16)v112 >= v115 )
    {
      RtlInitUnicodeString(&DestinationString, 0LL);
    }
    else
    {
      v117 = (unsigned int)(__int16)v112;
      if ( (unsigned int)v117 >= 8 )
        v118 = (int *)(*(_QWORD *)&v457[40] + 16 * ((unsigned int)(v117 - 8) + 6LL));
      else
        v118 = &v457[4 * v117 + 8];
      DestinationString.Buffer = (wchar_t *)*((_QWORD *)v118 + 1);
      DestinationString.Length = v49 - 2 * (((__int64)DestinationString.Buffer - v419.m128i_i64[1]) >> 1);
      DestinationString.MaximumLength = DestinationString.Length;
    }
    p_SubjectSecurityContext = &AccessState->SubjectSecurityContext;
    SubjectSecurityContext = &AccessState->SubjectSecurityContext;
    if ( CmpVEEnabled )
    {
      if ( (v10[1].Control & 0x10) == 0 && !*(_WORD *)(v111 + 66) )
      {
        v120 = *(_QWORD *)(v111 + 32);
        if ( v120 != CmpMasterHive )
        {
          v454 = 0LL;
          v455[1] = 0LL;
          v455[2] = 0LL;
          v455[0] = v111;
          for ( i = 0; i >= 0; --i )
          {
            v122 = i < 2 ? v455[i] : *(_QWORD *)(8LL * i - 16);
            if ( *(_WORD *)(v122 + 66) && *(_BYTE *)(v122 + 65) == 1 )
              break;
            if ( *(_DWORD *)(v122 + 40) != -1 )
            {
              if ( (*(_DWORD *)(v120 + 4112) & 0x10) == 0 && (*(_DWORD *)(v111 + 184) & 0x2000000) == 0 )
                goto LABEL_195;
              break;
            }
          }
          p_Attributes = &v10->Privilege[0].Attributes;
          v124 = 0;
          memset(&SubjectContext, 0, sizeof(SubjectContext));
          if ( v10 != (PPRIVILEGE_SET)-16LL && (*p_Attributes & 1) != 0 )
          {
            if ( (*p_Attributes & 2) != 0 )
              goto LABEL_195;
            goto LABEL_215;
          }
          if ( v396 )
          {
            if ( AccessState == (PACCESS_STATE)-32LL )
            {
              CurrentThread = KeGetCurrentThread();
              CurrentThreadProcess = PsGetCurrentThreadProcess();
              SeCaptureSubjectContextEx(CurrentThread, CurrentThreadProcess, &SubjectContext);
              p_SubjectContext = &SubjectContext;
              v111 = BugCheckParameter4;
              v124 = 1;
              v403 = v407;
              v401 = BugCheckParameter4;
            }
            else
            {
              p_SubjectContext = &AccessState->SubjectSecurityContext;
            }
            LODWORD(TokenInformation) = 0;
            v129 = 0;
            if ( !p_SubjectContext->ClientToken )
            {
              SeQueryInformationToken(p_SubjectContext->PrimaryToken, TokenVirtualizationEnabled, &TokenInformation);
              if ( (_DWORD)TokenInformation )
                v129 = 1;
            }
            if ( v10 != (PPRIVILEGE_SET)-16LL )
            {
              if ( v129 )
                v130 = *p_Attributes | 5;
              else
                v130 = *p_Attributes | 3;
              *p_Attributes = v130;
            }
            if ( v124 )
              SeReleaseSubjectContext(&SubjectContext);
            if ( v129 )
            {
              p_SubjectSecurityContext = SubjectSecurityContext;
LABEL_215:
              if ( (v10->PrivilegeCount & 8) != 0 )
                goto LABEL_195;
              if ( (v10[8].PrivilegeCount & 1) == 0 )
              {
                CmpAttachToRegistryProcess(v10[8].Privilege);
                v10[8].PrivilegeCount |= 1u;
              }
              if ( (*(_DWORD *)(v111 + 184) & 0x2000000) != 0 )
                v125 = CmpVEExecuteVirtualStoreParseLogic(v111, &DestinationString, v10, *(_QWORD *)GrantedAccess);
              else
                v125 = CmpVEExecuteRealStoreParseLogic(
                         v111,
                         (__int64)&DestinationString,
                         v10,
                         *(UNICODE_STRING **)GrantedAccess,
                         (__int64)p_SubjectSecurityContext);
LABEL_196:
              v11 = v401;
              KeyControlBlock = v125;
              CmpUnlockKcb(v401);
              if ( KeyControlBlock != -1073741199 )
              {
                CmpRecordParseFailure((__int64)v10, 2496, KeyControlBlock);
                goto LABEL_696;
              }
              v131 = *(_QWORD *)&v10[3].Control;
              v132 = *(_QWORD *)(v11 + 32);
              if ( v131 && v131 != v132 )
              {
                if ( (*(_DWORD *)(v132 + 4112) & 1) != 0 )
                {
                  ExAcquirePushLockSharedEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
                  v133 = *(_QWORD *)(v132 + 4120);
                  if ( v133 != v132 + 4120 )
                  {
                    while ( 1 )
                    {
                      v134 = v133 - 4120;
                      if ( v134 == v131 )
                        break;
                      v133 = *(_QWORD *)(v134 + 4120);
                      if ( v133 == v132 + 4120 )
                        goto LABEL_227;
                    }
                    ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
                    goto LABEL_236;
                  }
LABEL_227:
                  ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
                }
                if ( PsIsCurrentThreadInServerSilo() && (unsigned int)dword_140C03868 > 5 )
                {
                  if ( tlgKeywordOn((__int64)&dword_140C03868, 0x200000010000LL) )
                  {
                    v416 = 0x1000000LL;
                    v459 = &v416;
                    v460 = 8LL;
                    tlgWriteAgg((__int64)&dword_140C03868, (unsigned __int8 *)&byte_140028F01, v135, 3u, &v458);
                    v136 = dword_140C03868;
                  }
                  if ( v136 > 5 )
                    tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&dword_140C03868,
                      (unsigned __int8 *)word_140028ECA,
                      0LL,
                      0LL,
                      2u,
                      &v461);
                }
                KeyControlBlock = -1073741790;
                CmpRecordParseFailure((__int64)v10, 2560, -1073741790);
                goto LABEL_696;
              }
LABEL_236:
              if ( v17 || *(_QWORD *)AccessStatus )
              {
                if ( *(_QWORD *)(v11 + 32) == CmpMasterHive )
                {
                  LOBYTE(v406) = 1;
                  v17 = 0LL;
                  v137 = 0LL;
                }
                else if ( (v17 || *(_QWORD *)AccessStatus) && *(_WORD *)(v11 + 66) )
                {
                  CmpLogUnsupportedOperation(8LL);
                  if ( !PsIsCurrentThreadInServerSilo() )
                  {
                    KeyControlBlock = -1072103419;
                    CmpRecordParseFailure((__int64)v10, 2816, -1072103419);
                    goto LABEL_696;
                  }
                  v17 = 0LL;
                  v137 = 0LL;
                }
                else
                {
                  v137 = *(_QWORD *)AccessStatus;
                }
              }
              else
              {
                v137 = 0LL;
              }
              if ( !CmpTransSilentIgnore() && (v17 || v137) )
              {
                KeyControlBlock = CmpTransSearchAddTransFromHive(*(_QWORD *)(v11 + 32), v17, v137, 0, (__int64)v412);
                if ( KeyControlBlock < 0 )
                {
                  if ( (_BYTE)v397 )
                  {
                    CmpUnlockHashEntryByKcb(v11);
                    LOBYTE(v397) = 0;
                  }
                  CmpUnlockRegistry(v140, v139, v141, v142);
                  KeyControlBlock = CmpTransSearchAddTransFromHive(*(_QWORD *)(v11 + 32), v17, v137, 1u, (__int64)v412);
                  CmpLockRegistry(v144, v143, v145);
                  v146 = KeyControlBlock;
                  LOBYTE(v399) = 1;
                  if ( KeyControlBlock >= 0 )
                    v146 = -1073741267;
                  KeyControlBlock = v146;
                  CmpRecordParseFailure((__int64)v10, 3072, v146);
                  goto LABEL_696;
                }
                v147 = *(_QWORD *)v412;
                v138 = 0LL;
              }
              else
              {
                v147 = (__int64)v138;
                *(_QWORD *)v412 = v138;
              }
              v148 = *(__int16 *)(v11 + 66);
              v149 = (struct _PRIVILEGE_SET *)v138;
              if ( v148 >= 2 )
              {
                v150 = 8LL * (unsigned int)(v148 - 1);
                TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(
                                                                  PagedPool,
                                                                  v150,
                                                                  0x35364D43u,
                                                                  v138);
                v149 = TransientPoolWithTag;
                if ( !TransientPoolWithTag )
                {
                  KeyControlBlock = -1073741670;
                  CmpRecordParseFailure((__int64)v10, 3328, -1073741670);
                  goto LABEL_696;
                }
                memset(TransientPoolWithTag, 0, v150);
                v138 = 0LL;
              }
              LOWORD(v444[0]) = v148;
              WORD1(v444[0]) = -1;
              v445[1] = v149;
              v152 = *(__int16 *)(v11 + 66);
              v153 = (struct _PRIVILEGE_SET *)v138;
              if ( v152 >= 2 )
              {
                v154 = 8LL * (unsigned int)(v152 - 1);
                v155 = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(PagedPool, v154, 0x35364D43u, v138);
                v153 = v155;
                if ( !v155 )
                {
                  KeyControlBlock = -1073741670;
                  CmpRecordParseFailure((__int64)v10, 3584, -1073741670);
                  goto LABEL_696;
                }
                memset(v155, 0, v154);
                v138 = 0LL;
              }
              HIWORD(v446[0]) = -1;
              LOWORD(v446[0]) = v152;
              v447[1] = v153;
              KeyControlBlock = (int)v138;
              v156 = v444;
              v157 = v446;
              WORD1(v444[0]) = *(_WORD *)(v11 + 66);
              v158 = *(_WORD *)(v11 + 66);
              if ( v158 )
              {
                v159 = *(_QWORD *)(v11 + 192);
                if ( v159 )
                {
                  do
                  {
                    CmpSetKcbAtLayerHeight((__int64)v444, v158, *(_QWORD *)(v159 + 16));
                    v159 = *(_QWORD *)(v160 + 24);
                    v158 = v161 - 1;
                  }
                  while ( v159 );
                  v138 = 0LL;
                }
              }
              else
              {
                v444[1] = v11;
              }
              v162 = v403;
              if ( (__int16)v404 >= (__int16)v403 )
              {
LABEL_349:
                v197 = *(_QWORD *)(v11 + 72);
                v198 = (__int64 *)(v11 + 72);
                *(_QWORD *)v408 = v157;
                if ( v197 )
                {
                  *((_WORD *)v157 + 1) = *(_WORD *)(v197 + 66);
                  v199 = *(_WORD *)(v197 + 66);
                  if ( v199 )
                  {
                    for ( j = *(_QWORD *)(v197 + 192); j; v199 = v202 - 1 )
                    {
                      CmpSetKcbAtLayerHeight((__int64)v157, v199, *(_QWORD *)(j + 16));
                      j = *(_QWORD *)(v201 + 24);
                    }
                  }
                  else
                  {
                    *((_QWORD *)v157 + 1) = v197;
                  }
                }
                else
                {
                  v157 = (int *)v138;
                  *(_QWORD *)v408 = v138;
                }
                v203 = v416;
                v204 = *(_QWORD *)(v416 + 8);
                if ( *v198 != v204 && v11 != v204 )
                {
                  CmpLockKcbShared(v204);
                  HIBYTE(v397) = 1;
                }
                if ( v157 )
                {
                  for ( k = 0; k <= *((__int16 *)v157 + 1); ++k )
                  {
                    if ( k < 2 )
                      v206 = *(_QWORD *)&v157[2 * k + 2];
                    else
                      v206 = *(_QWORD *)(*((_QWORD *)v157 + 3) + 8LL * k - 16);
                    CmpLockKcbShared(v206);
                  }
                  v395 = 1;
                }
                for ( m = 0; m <= *((__int16 *)v156 + 1); ++m )
                {
                  if ( m < 2 )
                    v208 = v156[m + 1];
                  else
                    v208 = *(_QWORD *)(v156[3] + 8LL * m - 16);
                  CmpLockKcbShared(v208);
                }
                if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v203, 0LL) )
                {
                  v209 = -1073741444;
                  if ( (*(_BYTE *)(v203 + 48) & 1) != 0 )
                    v209 = -1073740763;
                  KeyControlBlock = v209;
                  CmpRecordParseFailure((__int64)v10, 5888, v209);
                  goto LABEL_390;
                }
                v210 = v11 + 184;
                v211 = v404 - 1;
                if ( (*(_DWORD *)(v11 + 184) & 0x20000) != 0 )
                {
                  KeyControlBlock = -1073741772;
                  CmpRecordParseFailure((__int64)v10, 6144, -1073741772);
                  goto LABEL_390;
                }
                v212 = *(_QWORD *)v412;
                if ( !CmRmIsKcbStackVisible((__int64)v156) )
                {
                  KeyControlBlock = -1073741772;
                  CmpRecordParseFailure((__int64)v10, 6400, -1073741772);
                  goto LABEL_390;
                }
                if ( (v10->PrivilegeCount & 2) != 0 )
                {
                  CmpUnlockKcbStack((__int64)v156);
                  v213 = *(_QWORD *)v408;
                  CmpUnlockKcbStack(*(__int64 *)v408);
                  if ( HIBYTE(v397) )
                    CmpUnlockKcb(*(_QWORD *)(v416 + 8));
                  HIBYTE(v406) = CmpTryToLockHashEntryExclusive(*(_QWORD *)&v10[2].Privilege[0].Luid, 0LL);
                  if ( HIBYTE(v397) )
                    CmpLockKcbShared(*(_QWORD *)(v416 + 8));
                  CmpLockKcbStackTopExclusiveRestShared(v213);
                  CmpLockKcbStackTopExclusiveRestShared((__int64)v156);
                  ComponentNameAtIndex = (UNICODE_STRING *)CmpGetComponentNameAtIndex((__int64)v457, v211);
                  ComponentHashAtIndex = CmpGetComponentHashAtIndex((__int64)v457, v215);
                  if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v416, 0LL) )
                  {
                    v217 = -1073741444;
                    v218 = 6656;
                    if ( (*(_BYTE *)(v416 + 48) & 1) != 0 )
                      v217 = -1073740763;
                    KeyControlBlock = v217;
                    goto LABEL_388;
                  }
                  if ( CmpIsKeyStackDeleted(*(__int64 *)v408) )
                  {
                    v218 = 6912;
                    KeyControlBlock = -1073741772;
                    v217 = -1073741772;
LABEL_388:
                    CmpRecordParseFailure((__int64)v10, v218, v217);
LABEL_389:
                    v11 = v401;
                    goto LABEL_390;
                  }
                  if ( !CmpIsKeyStackDeleted((__int64)v156) )
                  {
                    v218 = 7168;
                    KeyControlBlock = -1073741790;
                    v217 = -1073741790;
                    goto LABEL_388;
                  }
                  if ( *(_QWORD *)(*v198 + 32) != CmpMasterHive )
                  {
                    v218 = 7424;
                    KeyControlBlock = -1073741790;
                    v217 = -1073741790;
                    goto LABEL_388;
                  }
                  if ( (*(_DWORD *)(*v198 + 184) & 0x20000) != 0 )
                  {
                    v218 = 7680;
                    KeyControlBlock = -1073741772;
                    v217 = -1073741772;
                    goto LABEL_388;
                  }
                  if ( (v10[8].PrivilegeCount & 1) == 0 )
                  {
                    CmpAttachToRegistryProcess(v10[8].Privilege);
                    v10[8].PrivilegeCount |= 1u;
                  }
                  PrivilegeCount = v10[2].PrivilegeCount;
                  v222 = v10 + 2;
                  Luid = (ULONG_PTR)v10[2].Privilege[0].Luid;
                  if ( (_DWORD)PrivilegeCount == -1 )
                  {
                    HiveRootCell = CmpCreateHiveRootCell(
                                     Luid,
                                     (__int64)AccessState,
                                     &ComponentNameAtIndex->Length,
                                     (__int64)v10,
                                     &v10[2].PrivilegeCount);
                    KeyControlBlock = HiveRootCell;
                    if ( HiveRootCell < 0 )
                    {
                      v217 = HiveRootCell;
                      v218 = 7808;
                      goto LABEL_388;
                    }
                  }
                  else
                  {
                    updated = CmpUpdateHiveRootCellFlags(Luid, PrivilegeCount);
                    KeyControlBlock = updated;
                    if ( updated < 0 )
                    {
                      v217 = updated;
                      v218 = 7936;
                      goto LABEL_388;
                    }
                  }
                  v226 = v401;
                  *(_WORD *)(v401 + 186) |= 2u;
                  KeyControlBlock = CmpCreateKeyControlBlock(
                                      *(_QWORD *)&v10[2].Privilege[0].Luid,
                                      0xFFFFFFFFLL,
                                      v226,
                                      *(_QWORD *)&v10[4].PrivilegeCount,
                                      1,
                                      ComponentNameAtIndex,
                                      ComponentHashAtIndex,
                                      0,
                                      v432);
                  v227 = (volatile signed __int64 *)v401;
                  *(_WORD *)(v401 + 186) = *(_WORD *)(v210 + 2) & 0xFFFD;
                  v217 = KeyControlBlock;
                  if ( KeyControlBlock < 0 )
                  {
                    v218 = 0x2000;
                    goto LABEL_388;
                  }
                  v228 = v432[0];
                  v229 = (__int64)v227;
                  v401 = v432[0];
                  BugCheckParameter4 = v432[0];
                  CmpDereferenceKeyControlBlockUnsafe(v227);
                  CmpUnlockHashEntryByKcb(v229);
                  LOBYTE(v397) = 0;
                  started = CmpStartKcbStackForTopLayerKcb(v452, v228);
                  KeyControlBlock = started;
                  if ( started < 0 )
                  {
                    v217 = started;
                    v218 = 8448;
                    goto LABEL_388;
                  }
                  *(_WORD *)(v229 + 186) |= 2u;
                  CmpLockKcbStackTopExclusiveRestShared((__int64)v452);
                  v231 = v396;
                  *(_WORD *)(v229 + 186) &= ~2u;
                  v411 = 1;
                  v232 = CmpCreateKeyBody(v228, v231, (__int64)v10, v212, 3, (__int64)v452, &Object, (bool *)&v399 + 1);
                  KeyControlBlock = v232;
                  if ( v232 < 0 )
                  {
                    CmpRecordParseFailure((__int64)v10, 8576, v232);
                    CmpUnlockKcbStack((__int64)v452);
                    goto LABEL_389;
                  }
                  ExAcquirePushLockSharedEx(*(_QWORD *)(v229 + 32) + 72LL, 0LL);
                  HvLockHiveFlusherExclusive(*(_QWORD *)(v228 + 32));
                  v233 = *(_QWORD *)(v228 + 32);
                  v234 = *(_DWORD *)(v233 + 104);
                  v235 = HvpMarkCellDirty(v233, v222->PrivilegeCount, 0);
                  KeyControlBlock = v235;
                  if ( v235 < 0 )
                  {
                    CmpRecordParseFailure((__int64)v10, 8704, v235);
LABEL_416:
                    HvUnlockHiveFlusherExclusive(*(_QWORD *)(v401 + 32));
                    v236 = *(_QWORD *)(v229 + 32);
                    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v236 + 72), 0LL, 17LL) != 17 )
                      ExfReleasePushLockShared((signed __int64 *)(v236 + 72));
                    KeAbPostRelease(v236 + 72);
                    v401 = BugCheckParameter4;
                    CmpUnlockKcbStack((__int64)v452);
                    goto LABEL_389;
                  }
                  KeyControlBlock = CmpCreateChild(
                                      *(__int64 *)v408,
                                      (__int64)v156,
                                      (__int64)AccessState,
                                      ComponentNameAtIndex,
                                      (__int64)v10,
                                      10,
                                      0,
                                      1,
                                      v212);
                  if ( KeyControlBlock < 0 )
                    goto LABEL_416;
                  v237 = v222->PrivilegeCount;
                  v238 = v401;
                  v239 = v401;
                  *(_DWORD *)(v401 + 40) = v237;
                  KeyNodeForKcb = CmpGetKeyNodeForKcb(v239, (__int64)&v425, 1);
                  *(_DWORD *)(KeyNodeForKcb + 16) = *(_DWORD *)(v229 + 40);
                  ++*(_QWORD *)(v238 + 304);
                  CmpRebuildKcbCacheFromNode(v238, KeyNodeForKcb, 0LL, 0);
                  v241 = *(_QWORD *)(v238 + 32);
                  if ( (*(_BYTE *)(v241 + 140) & 1) != 0 )
                    HvpReleaseCellFlat(v241, &v425);
                  else
                    HvpReleaseCellPaged(v241, &v425);
                  if ( !v234 )
                    HvResetDirtyData(*(_QWORD *)(v238 + 32));
                  HvUnlockHiveFlusherExclusive(*(_QWORD *)(v238 + 32));
                  v242 = *(_QWORD *)(v229 + 32);
                  v243 = 0;
                  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v242 + 72), 0LL, 17LL) != 17 )
                    ExfReleasePushLockShared((signed __int64 *)(v242 + 72));
                  KeAbPostRelease(v242 + 72);
                  v244 = (volatile signed __int64 *)v432[0];
                  *(_WORD *)(v229 + 8) |= 8u;
                  CmpReferenceKeyControlBlockUnsafe(v244);
                  *(_QWORD *)(v229 + 104) = v244;
                  CmpUnlockHashEntry(*(_QWORD **)&v10[2].Privilege[0].Luid, 0);
                  v245 = AccessState;
                  v401 = BugCheckParameter4;
                  v10[1].Privilege[0].Luid.HighPart = 1;
LABEL_583:
                  if ( v10[1].Privilege[0].Luid.HighPart == 1 )
                  {
                    *((_WORD *)Object + 2) = *(_WORD *)(*((_QWORD *)Object + 1) + 66LL);
                    goto LABEL_676;
                  }
                  v53 = (v10[1].Control & 4) == 0;
                  v298 = v10[1].Control & 4;
                  v403 = v298;
                  if ( v53 )
                  {
                    CmpGetSecurityDescriptorForKcbStackEx();
                  }
                  else
                  {
                    SecurityDescriptorForKcbStack = CmpGetSecurityDescriptorForKcbStackEx();
                    if ( (int)CmpSetAccessStateForBackupRestore(v245, v396, SecurityDescriptorForKcbStack, 1) < 0 )
                    {
                      v300 = -1073741790;
                      goto LABEL_673;
                    }
                  }
                  OriginalDesiredAccess = v245->OriginalDesiredAccess;
                  v302 = Object;
                  v450 = 0LL;
                  WORD1(v450) = -1;
                  v300 = -1073741790;
                  *(_OWORD *)v451 = 0LL;
                  v303 = *((_QWORD *)Object + 1);
                  v304 = *(_QWORD *)(v303 + 32);
                  if ( (*(_DWORD *)(v304 + 160) & 0x100000) != 0 && (OriginalDesiredAccess & 0xD0026) != 0 )
                  {
                    if ( (OriginalDesiredAccess & 0xD0002) != 0 || (*(_DWORD *)(v304 + 4112) & 0x2000) == 0 )
                    {
                      v243 = -1073741790;
                    }
                    else if ( *(_BYTE *)(v303 + 65) )
                    {
                      v243 = -1073741790;
                    }
                    else
                    {
                      v243 = CmpStartKcbStackForTopLayerKcb(&v450, *((_QWORD *)Object + 1));
                      if ( v243 >= 0 )
                      {
                        v305 = *(_WORD *)(v303 + 66) - 1;
                        if ( v305 < 0 )
                        {
LABEL_605:
                          v302 = Object;
                        }
                        else
                        {
                          while ( 1 )
                          {
                            KcbAtLayerHeight = CmpGetKcbAtLayerHeight((__int64)&v450, v305);
                            WORD1(v450) = v305;
                            v307 = KcbAtLayerHeight;
                            if ( CmpIsKeyStackDeleted((__int64)&v450) )
                            {
LABEL_603:
                              v243 = -1073741790;
LABEL_604:
                              v298 = v403;
                              goto LABEL_605;
                            }
                            if ( (*(_DWORD *)(*(_QWORD *)(v307 + 32) + 160LL) & 0x100000) == 0 )
                              break;
                            if ( (*(_DWORD *)(*(_QWORD *)(v303 + 32) + 4112LL) & 0x2000) == 0 || *(_BYTE *)(v303 + 65) )
                              goto LABEL_603;
                            if ( --v305 < 0 )
                              goto LABEL_604;
                          }
                          v302 = Object;
                          v298 = v403;
                          v243 = 0;
                        }
                      }
                    }
                  }
                  if ( v451[1] )
                    CmSiFreeMemory(v451[1]);
                  if ( v243 < 0 )
                    goto LABEL_673;
                  v308 = AccessState->OriginalDesiredAccess;
                  if ( (v308 & v10[4].Privilege[0].Attributes) != v308 )
                    goto LABEL_673;
                  if ( v298 && !AccessState->RemainingDesiredAccess || !v308 && (v10->PrivilegeCount & 0x1000) != 0 )
                  {
LABEL_676:
                    *v429 = Object;
                    Object = 0LL;
                    if ( !v10[1].Privilege[0].Luid.HighPart )
                      v10[1].Privilege[0].Luid.HighPart = 2;
                    v398 = 0;
                    KeyControlBlock = 1073741846;
                    if ( !HIBYTE(v399) )
                      KeyControlBlock = 0;
                    goto LABEL_680;
                  }
                  v309 = v412[0];
                  v441 = 0LL;
                  WORD1(v441) = -1;
                  GrantedAccess[0] = 0;
                  v422 = 0LL;
                  *(_OWORD *)v442 = 0LL;
                  if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(Object, *(_QWORD *)v412) )
                  {
                    v312 = 0;
                    AccessStatus[0] = -1073741444;
LABEL_660:
                    if ( v442[1] )
                      CmSiFreeMemory(v442[1]);
                    if ( !v312 )
                    {
                      if ( v298 )
                        goto LABEL_673;
                      v337 = AccessState;
                      if ( (int)CmpVEPerformOpenAccessCheck(
                                  Object,
                                  v309,
                                  AccessState,
                                  v396,
                                  (__int64)v10,
                                  AccessStatus[0]) < 0 )
                      {
                        if ( KeGetCurrentThread()->PreviousMode == 1 )
                        {
                          v338 = PsGetCurrentThreadProcess();
                          if ( !CmpDoesProcessBelongToServiceSession((__int64)v338)
                            && (v337->RemainingDesiredAccess & 0xD0026) != 0
                            && CmpCheckKeyOwnerForPca((__int64)v156, *(__int64 *)v412) )
                          {
                            v339 = v10[8].PrivilegeCount;
                            KeyControlBlock = -1073741790;
                            v398 = 1;
                            if ( (v339 & 1) == 0 )
                            {
                              CmpAttachToRegistryProcess(v10[8].Privilege);
                              v10[8].PrivilegeCount |= 1u;
                            }
                            v430 = 0LL;
                            v401 = BugCheckParameter4;
                            CmpConstructNameWithStatus(BugCheckParameter4, &v430);
                            v300 = KeyControlBlock;
                            v428 = v430;
                            goto LABEL_674;
                          }
                        }
                        v401 = BugCheckParameter4;
LABEL_673:
                        v398 = 0;
                        KeyControlBlock = -1073741790;
LABEL_674:
                        CmpRecordParseFailure((__int64)v10, 15584, v300);
LABEL_680:
                        HIBYTE(v406) = 0;
                        if ( v411 )
                          CmpUnlockKcbStack((__int64)v452);
                        goto LABEL_389;
                      }
                    }
                    goto LABEL_676;
                  }
                  v313 = v302[1];
                  v314 = 0LL;
                  v315 = 0LL;
                  v316 = *(__int16 *)(v313 + 66);
                  if ( v316 >= 2 )
                  {
                    v317 = 8LL * (unsigned int)(v316 - 1);
                    v318 = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(PagedPool, v317, 0x35364D43u, v311);
                    v315 = v318;
                    if ( !v318 )
                    {
                      AccessStatus[0] = -1073741670;
                      v312 = 0;
LABEL_659:
                      v298 = v403;
                      v309 = v412[0];
                      goto LABEL_660;
                    }
                    memset(v318, 0, v317);
                    v314 = 0LL;
                  }
                  v319 = *(_WORD *)(v313 + 66);
                  LOWORD(v441) = v316;
                  v442[1] = v315;
                  WORD1(v441) = v319;
                  if ( v319 )
                  {
                    v320 = *(_QWORD *)(v313 + 192);
                    if ( v320 )
                    {
                      do
                      {
                        CmpSetKcbAtLayerHeight((__int64)&v441, v319, *(_QWORD *)(v320 + 16));
                        v320 = *(_QWORD *)(v321 + 24);
                        --v319;
                      }
                      while ( v320 );
                      v315 = v442[1];
                      v319 = WORD1(v441);
                    }
                  }
                  else
                  {
                    *((_QWORD *)&v441 + 1) = v313;
                  }
                  AccessStatus[0] = v314;
                  v322 = v314;
                  if ( v319 >= 0 )
                  {
                    v323 = *(_QWORD *)v412;
                    do
                    {
                      if ( v319 < 2 )
                        v324 = v442[v319 - 1];
                      else
                        v324 = (PPRIVILEGE_SET)*((_QWORD *)v315 + v319 - 2);
                      if ( HIWORD(v324[3].Control) && BYTE1(v324[3].Control) == 1 )
                        break;
                      if ( v324[2].PrivilegeCount != -1 )
                      {
                        if ( CmRmIsKCBVisible((__int64)v324, v323, v310) )
                        {
                          v322 = (__int64)v324;
                          if ( HIWORD(v324[3].Control) )
                          {
                            if ( BYTE1(v324[3].Control) )
                              break;
                          }
                        }
                      }
                      --v319;
                    }
                    while ( v319 >= 0 );
                    v300 = -1073741790;
                    v314 = 0LL;
                  }
                  v325 = *(_QWORD *)(v322 + 88);
                  if ( *(_QWORD *)v412 )
                  {
                    v438 = v314;
                    PrevElement = CmListGetPrevElement(v322 + 208, &v438);
                    if ( PrevElement )
                    {
                      while ( !CmEqualTrans(*(_QWORD *)(PrevElement + 56), v327) || *(_DWORD *)(PrevElement + 68) != 9 )
                      {
                        PrevElement = CmListGetPrevElement(v322 + 208, &v438);
                        if ( !PrevElement )
                          goto LABEL_646;
                        v327 = *(_QWORD *)v412;
                      }
                      v325 = *(_QWORD *)(PrevElement + 88);
                    }
                  }
LABEL_646:
                  v328 = KeGetCurrentThread();
                  v329 = (void *)(v325 + 32);
                  --v328->KernelApcDisable;
                  v330 = SubjectSecurityContext;
                  ExAcquireResourceSharedLite(*((PERESOURCE *)SubjectSecurityContext->PrimaryToken + 6), 1u);
                  if ( v330->ClientToken )
                  {
                    v331 = KeGetCurrentThread();
                    --v331->KernelApcDisable;
                    ExAcquireResourceSharedLite(*((PERESOURCE *)v330->ClientToken + 6), 1u);
                  }
                  v332 = AccessState;
                  v312 = SeAccessCheck(
                           v329,
                           v330,
                           1u,
                           AccessState->RemainingDesiredAccess,
                           AccessState->PreviouslyGrantedAccess,
                           &v422,
                           (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
                           v396,
                           GrantedAccess,
                           AccessStatus);
                  if ( v422 )
                  {
                    SeAppendPrivileges(v332, v422);
                    CmSiFreeMemory(v422);
                  }
                  v333 = v332;
                  if ( v312 )
                  {
                    v334 = GrantedAccess[0];
                    v332->PreviouslyGrantedAccess |= GrantedAccess[0];
                    v332->RemainingDesiredAccess &= ~(v334 | 0x2000000);
                  }
                  v335 = Object;
                  v336 = *(_QWORD *)v412;
                  *((_WORD *)Object + 24) |= 2u;
                  if ( v336 )
                  {
                    SeOpenObjectAuditAlarmWithTransaction(
                      (PUNICODE_STRING)CmKeyObjectType + 1,
                      v335,
                      0LL,
                      v329,
                      v333,
                      0,
                      v312,
                      v396,
                      (GUID *)(v336 + 88),
                      &v333->GenerateOnClose);
                  }
                  else if ( v396 )
                  {
                    SeOpenObjectAuditAlarmWithTransaction(
                      (PUNICODE_STRING)CmKeyObjectType + 1,
                      Object,
                      0LL,
                      v329,
                      v333,
                      0,
                      v312,
                      v396,
                      0LL,
                      &v333->GenerateOnClose);
                  }
                  v335[24] &= ~2u;
                  ExReleaseResourceLite(*((PERESOURCE *)v330->PrimaryToken + 6));
                  KeLeaveCriticalRegion();
                  if ( v330->ClientToken )
                  {
                    ExReleaseResourceLite(*((PERESOURCE *)v330->ClientToken + 6));
                    KeLeaveCriticalRegion();
                  }
                  v401 = BugCheckParameter4;
                  goto LABEL_659;
                }
                if ( (v10->PrivilegeCount & 0x20) != 0 )
                {
                  CmpUnlockKcbStack((__int64)v156);
                  v246 = *(_QWORD *)v408;
                  CmpUnlockKcbStack(*(__int64 *)v408);
                  CmpLockKcbStackTopExclusiveRestShared(v246);
                  CmpLockKcbStackTopExclusiveRestShared((__int64)v156);
                  if ( CmpIsKeyStackDeleted(v246) )
                  {
                    KeyControlBlock = -1073741772;
                    CmpRecordParseFailure((__int64)v10, 8960, -1073741772);
                    goto LABEL_390;
                  }
                  if ( (*(_DWORD *)(*v198 + 184) & 0x20000) != 0 )
                  {
                    KeyControlBlock = -1073741772;
                    CmpRecordParseFailure((__int64)v10, 9216, -1073741772);
                    goto LABEL_390;
                  }
                  v247 = CmpGetComponentNameAtIndex((__int64)v457, v211);
                  CmpCleanUpKcbCachedSymlink(v11);
                  *(_WORD *)(v11 + 186) |= 0x40u;
                  v248 = v396;
                  *(_DWORD *)(v11 + 100) = -1;
                  *(_DWORD *)(v11 + 96) = v10[2].Privilege[0].Attributes;
                  KeyControlBlock = CmpCreateKeyBody(
                                      v11,
                                      v248,
                                      (__int64)v10,
                                      v212,
                                      3,
                                      (__int64)v156,
                                      &Object,
                                      (bool *)&v399 + 1);
                  if ( KeyControlBlock >= 0 )
                  {
                    if ( !CmpIsKeyStackDeleted((__int64)v156) )
                    {
LABEL_490:
                      v245 = AccessState;
                      goto LABEL_582;
                    }
                    v249 = (UNICODE_STRING *)v247;
                    v245 = AccessState;
                    KeyControlBlock = CmpCreateChild(
                                        v246,
                                        (__int64)v156,
                                        (__int64)AccessState,
                                        v249,
                                        (__int64)v10,
                                        64,
                                        0,
                                        0,
                                        v212);
                    if ( KeyControlBlock >= 0 )
                    {
                      v10[1].Privilege[0].Luid.HighPart = 1;
LABEL_582:
                      v243 = 0;
                      goto LABEL_583;
                    }
                  }
LABEL_390:
                  for ( n = 0; n <= *((__int16 *)v156 + 1); ++n )
                  {
                    if ( n < 2 )
                      v220 = v156[n + 1];
                    else
                      v220 = *(_QWORD *)(v156[3] + 8LL * n - 16);
                    CmpUnlockKcb(v220);
                  }
LABEL_685:
                  if ( v395 )
                  {
                    v340 = *(_QWORD *)v408;
                    for ( ii = 0; ii <= *(__int16 *)(v340 + 2); ++ii )
                    {
                      if ( ii < 2 )
                        v342 = *(_QWORD *)(v340 + 8LL * ii + 8);
                      else
                        v342 = *(_QWORD *)(*(_QWORD *)(v340 + 24) + 8LL * ii - 16);
                      CmpUnlockKcb(v342);
                    }
                  }
LABEL_691:
                  if ( HIBYTE(v397) )
                    CmpUnlockKcb(*(_QWORD *)(v416 + 8));
                  if ( HIBYTE(v406) )
                    CmpUnlockHashEntry(*(_QWORD **)&v10[2].Privilege[0].Luid, 0);
                  goto LABEL_696;
                }
                v250 = *((_WORD *)v156 + 1);
                v437 = 0LL;
                while ( (v250 & 0x8000u) == 0 )
                {
                  v251 = v250 < 2u ? v156[v250 + 1] : *(_QWORD *)(v156[3] + 8LL * v250 - 16);
                  if ( *(_WORD *)(v251 + 66) && *(_BYTE *)(v251 + 65) == 1 )
                    break;
                  if ( *(_DWORD *)(v251 + 40) != -1 )
                  {
                    if ( v212 )
                    {
                      NextElement = CmListGetNextElement(v156[1] + 208, &v437, 32LL);
                      if ( NextElement )
                      {
                        while ( 1 )
                        {
                          v254 = *(_DWORD *)(NextElement + 68);
                          if ( v254 == 2 || v254 == 11 )
                            break;
                          NextElement = CmListGetNextElement(v253 + 208, &v437, 32LL);
                          if ( !NextElement )
                            goto LABEL_454;
                        }
                        if ( CmEqualTrans(*(_QWORD *)(NextElement + 56), v212) )
                          break;
                      }
                    }
LABEL_454:
                    v255 = *((_WORD *)v156 + 1);
                    if ( (v255 & 0x8000u) == 0 )
                    {
                      while ( 1 )
                      {
                        v256 = v255 < 2u ? v156[v255 + 1] : *(_QWORD *)(v156[3] + 8LL * v255 - 16);
                        if ( *(_DWORD *)(v256 + 40) != -1 )
                          break;
                        if ( (--v255 & 0x8000u) != 0 )
                          goto LABEL_460;
                      }
                      if ( (*(_DWORD *)(v256 + 184) & 0x100000) != 0 && (v10->PrivilegeCount & 0x200) == 0 )
                      {
                        if ( (v10[1].Control & 2) != 0 )
                        {
                          KeyControlBlock = -1073741771;
                          CmpRecordParseFailure((__int64)v10, 14080, -1073741771);
                          goto LABEL_390;
                        }
                        if ( v395 )
                        {
                          CmpUnlockKcbStack(*(__int64 *)v408);
                          v395 = 0;
                        }
                        if ( HIBYTE(v397) )
                        {
                          CmpUnlockKcb(*(_QWORD *)(v416 + 8));
                          HIBYTE(v397) = 0;
                        }
                        if ( (_BYTE)v397 )
                        {
                          CmpUnlockHashEntryByKcb(v11);
                          LOBYTE(v397) = 0;
                        }
                        SymbolicLinkTarget = CmpGetSymbolicLinkTarget(
                                               (__int64)v156,
                                               (__int64)v457,
                                               0,
                                               0,
                                               v212,
                                               (__int64)v10,
                                               (__int64)&v434,
                                               *(__int64 *)GrantedAccess,
                                               (ULONG_PTR *)&v10[4].Privilege[0].Luid,
                                               &v421);
                        KeyControlBlock = SymbolicLinkTarget;
                        if ( SymbolicLinkTarget >= 0 )
                        {
                          v10->PrivilegeCount &= ~8u;
                          if ( !*(_QWORD *)&v10[3].Control )
                          {
                            v258 = *(_QWORD *)(v421 + 32);
                            if ( (*(_DWORD *)(v258 + 4112) & 1) != 0 )
                              *(_QWORD *)&v10[3].Control = v258;
                          }
                          KeyControlBlock = 260;
                          CmpRecordParseFailure((__int64)v10, 14592, 260);
                        }
                        else
                        {
                          CmpRecordParseFailure((__int64)v10, 14336, SymbolicLinkTarget);
                        }
                        goto LABEL_685;
                      }
                    }
LABEL_460:
                    if ( (_BYTE)v406 )
                    {
                      KeyControlBlock = -1073741811;
                      CmpRecordParseFailure((__int64)v10, 14848, -1073741811);
                      goto LABEL_390;
                    }
                    if ( (*(_DWORD *)v210 & 0x20000) != 0 )
                    {
                      KeyControlBlock = -1073741772;
                      CmpRecordParseFailure((__int64)v10, 15104, -1073741772);
                      goto LABEL_390;
                    }
                    if ( (v10[1].Control & 2) != 0 )
                    {
                      KeyControlBlock = -1073741771;
                      CmpRecordParseFailure((__int64)v10, 15360, -1073741771);
                      goto LABEL_390;
                    }
                    v259 = GrantedAccess[0];
                    v260 = CmpDoWritethroughReparse(
                             v11,
                             (__int64)v156,
                             *(__int64 *)v408,
                             0,
                             0LL,
                             (__int64)v10,
                             *(UNICODE_STRING **)GrantedAccess);
                    KeyControlBlock = v260;
                    if ( v260 != -1073741199 )
                    {
                      CmpRecordParseFailure((__int64)v10, 15424, v260);
                      goto LABEL_390;
                    }
                    v261 = CmpVEExecuteOpenLogic(v11, (_DWORD)v10, 0, v259, v396, (__int64)SubjectSecurityContext);
                    KeyControlBlock = v261;
                    if ( v261 != -1073741199 )
                    {
                      CmpRecordParseFailure((__int64)v10, 15488, v261);
                      goto LABEL_390;
                    }
                    v262 = CmpCreateKeyBody(v11, v396, (__int64)v10, v212, 2, (__int64)v156, &Object, (bool *)&v399 + 1);
                    KeyControlBlock = v262;
                    if ( v262 < 0 )
                    {
                      if ( v262 == -1073741444 )
                        v262 = -1073741772;
                      KeyControlBlock = v262;
                      CmpRecordParseFailure((__int64)v10, 15552, v262);
                      goto LABEL_390;
                    }
                    goto LABEL_490;
                  }
                  --v250;
                }
                if ( (_BYTE)v406 )
                {
                  KeyControlBlock = -1073741811;
                  CmpRecordParseFailure((__int64)v10, 9728, -1073741811);
                  goto LABEL_390;
                }
                if ( CmpIsKeyStackDeleted(*(__int64 *)v408) || !CmRmIsKcbStackVisible(*(__int64 *)v408) )
                {
                  KeyControlBlock = -1073741772;
                  CmpRecordParseFailure((__int64)v10, 9984, -1073741772);
                  goto LABEL_390;
                }
                if ( (*(_DWORD *)(*v198 + 184) & 0x20000) != 0 )
                {
                  KeyControlBlock = -1073741772;
                  CmpRecordParseFailure((__int64)v10, 10240, -1073741772);
                  goto LABEL_390;
                }
                if ( (v10->PrivilegeCount & 1) == 0 )
                {
                  if ( CmpLoadingSystemHivesActive
                    && (v11 = BugCheckParameter4,
                        v401 = BugCheckParameter4,
                        (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread())
                    && *(_QWORD *)(BugCheckParameter4 + 32) == CmpMasterHive
                    && (*(_DWORD *)(BugCheckParameter4 + 8) & 0x7FE00000) == 0x600000
                    && (v263 = CmpGetComponentNameAtIndex((__int64)v457, v211),
                        (unsigned __int8)CmpWaitForHiveMount(v263, v264, v265, &v10[6].Privilege[0].Attributes)) )
                  {
                    v10->PrivilegeCount |= 0x100u;
                    KeyControlBlock = 259;
                    CmpRecordParseFailure((__int64)v10, 10496, 259);
                  }
                  else
                  {
                    KeyControlBlock = -1073741772;
                    CmpRecordParseFailure((__int64)v10, 10752, -1073741772);
                  }
                  goto LABEL_390;
                }
                if ( *(_QWORD *)(v11 + 32) == CmpMasterHive && CmpNoMasterCreates )
                {
                  v11 = BugCheckParameter4;
                  v401 = BugCheckParameter4;
                  if ( (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread() )
                  {
                    if ( CmpLoadingSystemHivesActive
                      && (*(_DWORD *)(BugCheckParameter4 + 8) & 0x7FE00000) == 0x600000
                      && (v266 = CmpGetComponentNameAtIndex((__int64)v457, v211),
                          (unsigned __int8)CmpWaitForHiveMount(v266, v267, v268, &v10[6].Privilege[0].Attributes)) )
                    {
                      v10->PrivilegeCount |= 0x100u;
                      KeyControlBlock = 259;
                      CmpRecordParseFailure((__int64)v10, 11008, 259);
                    }
                    else
                    {
                      KeyControlBlock = -1073741811;
                      CmpRecordParseFailure((__int64)v10, 11264, -1073741811);
                    }
                    goto LABEL_390;
                  }
                  v212 = *(_QWORD *)v412;
                }
                v269 = (const UNICODE_STRING *)CmpGetComponentNameAtIndex((__int64)v457, v211);
                v270 = CmpDoWritethroughReparse(
                         v11,
                         (__int64)v156,
                         *(__int64 *)v408,
                         1,
                         v269,
                         (__int64)v10,
                         *(UNICODE_STRING **)GrantedAccess);
                KeyControlBlock = v270;
                if ( v270 != -1073741199 )
                {
                  CmpRecordParseFailure((__int64)v10, 11392, v270);
                  goto LABEL_390;
                }
                v271 = CmpCreateKeyBody(v11, v396, (__int64)v10, v212, 0, (__int64)v156, &Object, (bool *)&v399 + 1);
                KeyControlBlock = v271;
                if ( v271 < 0 )
                {
                  CmpRecordParseFailure((__int64)v10, 11456, v271);
                  goto LABEL_390;
                }
                if ( (v10[8].PrivilegeCount & 1) == 0 )
                {
                  CmpAttachToRegistryProcess(v10[8].Privilege);
                  v10[8].PrivilegeCount |= 1u;
                }
                if ( *(_DWORD *)(*v198 + 40) == -1 )
                {
                  v272 = v10[1].Control >> 2;
                  LOBYTE(v272) = (v10[1].Control & 4) != 0;
                  if ( !CmpCheckCreateAccessOnKcbStack(
                          v272,
                          *(__int64 *)v408,
                          (__int64)v10,
                          (__int64)AccessState,
                          v396,
                          16 * (v10[1].Control & 2),
                          v272,
                          v212,
                          (__int64)Object,
                          1,
                          &KeyControlBlock) )
                  {
                    if ( KeGetCurrentThread()->PreviousMode == 1 )
                    {
                      v273 = PsGetCurrentThreadProcess();
                      SessionId = MmGetSessionIdEx((__int64)v273);
                      ProcessServerSilo = PsGetProcessServerSilo((__int64)v273);
                      if ( SessionId != (unsigned int)PsGetServerSiloServiceSessionId(ProcessServerSilo) )
                      {
                        if ( CmpCheckKeyOwnerForPca(*(__int64 *)v408, *(__int64 *)v412) )
                        {
                          v276 = *v198;
                          v398 = 1;
                          AccessState = 0LL;
                          CmpConstructNameWithStatus(v276, &AccessState);
                          v428 = AccessState;
                        }
                      }
                    }
                    CmpRecordParseFailure((__int64)v10, 11520, KeyControlBlock);
                    v11 = BugCheckParameter4;
                    v401 = BugCheckParameter4;
                    goto LABEL_390;
                  }
                  CmpUnlockKcbStack((__int64)v156);
                  CmpUnlockKcbStack(*(__int64 *)v408);
                  if ( HIBYTE(v397) )
                  {
                    CmpUnlockKcb(*(_QWORD *)(v416 + 8));
                    HIBYTE(v397) = 0;
                  }
                  LOBYTE(v277) = 1;
                  v278 = CmpPromoteKey(*(_QWORD *)v408, 0LL, v277);
                  KeyControlBlock = v278;
                  if ( v278 < 0 )
                  {
                    if ( v278 == -1073741444 )
                      v278 = -1073741772;
                    KeyControlBlock = v278;
                    CmpRecordParseFailure((__int64)v10, 11776, v278);
                    goto LABEL_685;
                  }
                }
                else
                {
                  CmpUnlockKcbStack((__int64)v156);
                  CmpUnlockKcbStack(*(__int64 *)v408);
                  CmpLockKcbStackTopExclusiveRestShared(*(__int64 *)v408);
                }
                CmpLockKcbStackTopExclusiveRestShared((__int64)v156);
                if ( !CmRmIsKcbStackVisible((__int64)v156) )
                {
                  KeyControlBlock = -1073741772;
                  CmpRecordParseFailure((__int64)v10, 12032, -1073741772);
                  v395 = 1;
                  goto LABEL_390;
                }
                if ( CmpIsKeyStackDeleted((__int64)v156) )
                {
                  v279 = *(_QWORD *)v408;
                  if ( CmpIsKeyStackDeleted(*(__int64 *)v408) || !CmRmIsKcbStackVisible(v279) )
                  {
                    KeyControlBlock = -1073741772;
                    CmpRecordParseFailure((__int64)v10, 12288, -1073741772);
                    v395 = 1;
                    goto LABEL_390;
                  }
                  if ( (*(_DWORD *)(*v198 + 184) & 0x20000) != 0 )
                  {
                    KeyControlBlock = -1073741772;
                    CmpRecordParseFailure((__int64)v10, 12544, -1073741772);
                    v395 = 1;
                    goto LABEL_390;
                  }
                  Logic = CmpVEExecuteCreateLogic(
                            *v198,
                            v11,
                            (__int64)v269,
                            (__int64)AccessState,
                            v396,
                            16 * (v10[1].Control & 2),
                            v212,
                            v10,
                            *(UNICODE_STRING **)GrantedAccess);
                  KeyControlBlock = Logic;
                  if ( Logic == -1073741739 )
                  {
                    v10->PrivilegeCount |= 0x400u;
                    KeyControlBlock = -1073741267;
                    CmpRecordParseFailure((__int64)v10, 12672, -1073741267);
                    v395 = 1;
                    goto LABEL_390;
                  }
                  if ( Logic != -1073741199 )
                  {
                    CmpRecordParseFailure((__int64)v10, 12736, Logic);
                    v395 = 1;
                    goto LABEL_390;
                  }
                  v281 = v10[1].Control >> 2;
                  LOBYTE(v281) = (v10[1].Control & 4) != 0;
                  if ( !CmpCheckCreateAccessOnKcbStack(
                          v281,
                          v279,
                          (__int64)v10,
                          (__int64)AccessState,
                          v396,
                          16 * (v10[1].Control & 2),
                          v281,
                          v212,
                          (__int64)Object,
                          0,
                          &KeyControlBlock) )
                  {
                    if ( KeGetCurrentThread()->PreviousMode == 1 )
                    {
                      v282 = PsGetCurrentThreadProcess();
                      v283 = MmGetSessionIdEx((__int64)v282);
                      v284 = PsGetProcessServerSilo((__int64)v282);
                      if ( v283 != (unsigned int)PsGetServerSiloServiceSessionId(v284) )
                      {
                        if ( CmpCheckKeyOwnerForPca(*(__int64 *)v408, *(__int64 *)v412) )
                        {
                          v285 = *v198;
                          v398 = 1;
                          v429 = 0LL;
                          CmpConstructNameWithStatus(v285, &v429);
                          v428 = (PACCESS_STATE)v429;
                        }
                      }
                    }
                    CmpRecordParseFailure((__int64)v10, 12800, KeyControlBlock);
                    v11 = BugCheckParameter4;
                    v401 = BugCheckParameter4;
                    v395 = 1;
                    goto LABEL_390;
                  }
                  v286 = CmpEnlistKeyBody((__int64)Object, v11, v212, 1, (__int64)v156);
                  KeyControlBlock = v286;
                  if ( v286 < 0 )
                  {
                    CmpRecordParseFailure((__int64)v10, 12928, v286);
                    v395 = 1;
                    goto LABEL_390;
                  }
                  v287 = (UNICODE_STRING *)v269;
                  v245 = AccessState;
                  Child = CmpCreateChild(
                            v279,
                            (__int64)v156,
                            (__int64)AccessState,
                            v287,
                            (__int64)v10,
                            8 * (v10[1].Control & 2),
                            0,
                            0,
                            v212);
                  KeyControlBlock = Child;
                  if ( Child < 0 )
                  {
                    CmpRecordParseFailure((__int64)v10, 12992, Child);
                    v395 = 1;
                    goto LABEL_390;
                  }
                  v10[1].Privilege[0].Luid.HighPart = 1;
                  goto LABEL_581;
                }
                if ( !CmpIsKeyStackSymlink((__int64)v156) || (v10->PrivilegeCount & 0x200) != 0 )
                {
                  if ( (*(_DWORD *)v210 & 0x20000) != 0 )
                  {
                    KeyControlBlock = -1073741772;
                    CmpRecordParseFailure((__int64)v10, 13568, -1073741772);
                    v395 = 1;
                    goto LABEL_390;
                  }
                  if ( (v10[1].Control & 2) == 0 )
                  {
                    v292 = GrantedAccess[0];
                    v293 = CmpDoWritethroughReparse(
                             v11,
                             (__int64)v156,
                             *(__int64 *)v408,
                             0,
                             0LL,
                             (__int64)v10,
                             *(UNICODE_STRING **)GrantedAccess);
                    KeyControlBlock = v293;
                    if ( v293 != -1073741199 )
                    {
                      CmpRecordParseFailure((__int64)v10, 13888, v293);
                      v395 = 1;
                      goto LABEL_390;
                    }
                    v295 = v396;
                    LOBYTE(v294) = 1;
                    v296 = CmpVEExecuteOpenLogic(v11, (_DWORD)v10, v294, v292, v396, (__int64)SubjectSecurityContext);
                    KeyControlBlock = v296;
                    if ( v296 != -1073741199 )
                    {
                      CmpRecordParseFailure((__int64)v10, 13952, v296);
                      v395 = 1;
                      goto LABEL_390;
                    }
                    v297 = CmpCreateKeyBody(v11, v295, (__int64)v10, v212, 3, (__int64)v156, &Object, (bool *)&v399 + 1);
                    KeyControlBlock = v297;
                    if ( v297 < 0 )
                    {
                      CmpRecordParseFailure((__int64)v10, 14016, v297);
                      v395 = 1;
                      goto LABEL_390;
                    }
                    v245 = AccessState;
LABEL_581:
                    v395 = 1;
                    goto LABEL_582;
                  }
                  v289 = 13824;
                }
                else
                {
                  if ( (v10[1].Control & 2) == 0 )
                  {
                    CmpUnlockKcbStack(*(__int64 *)v408);
                    if ( HIBYTE(v397) )
                    {
                      CmpUnlockKcb(*(_QWORD *)(v416 + 8));
                      HIBYTE(v397) = 0;
                    }
                    if ( (_BYTE)v397 )
                    {
                      CmpUnlockHashEntryByKcb(v11);
                      LOBYTE(v397) = 0;
                    }
                    v290 = CmpGetSymbolicLinkTarget(
                             (__int64)v156,
                             (__int64)v457,
                             0,
                             0,
                             v212,
                             (__int64)v10,
                             (__int64)&v434,
                             *(__int64 *)GrantedAccess,
                             (ULONG_PTR *)&v10[4].Privilege[0].Luid,
                             &v421);
                    KeyControlBlock = v290;
                    if ( v290 >= 0 )
                    {
                      v10->PrivilegeCount &= ~8u;
                      if ( !*(_QWORD *)&v10[3].Control )
                      {
                        v291 = *(_QWORD *)(v421 + 32);
                        if ( (*(_DWORD *)(v291 + 4112) & 1) != 0 )
                          *(_QWORD *)&v10[3].Control = v291;
                      }
                      KeyControlBlock = 260;
                      CmpRecordParseFailure((__int64)v10, 13440, 260);
                    }
                    else
                    {
                      CmpRecordParseFailure((__int64)v10, 13312, v290);
                    }
                    goto LABEL_691;
                  }
                  v289 = 13056;
                }
                KeyControlBlock = -1073741771;
                CmpRecordParseFailure((__int64)v10, v289, -1073741771);
                v395 = 1;
                goto LABEL_390;
              }
              while ( 2 )
              {
                v163 = *((_WORD *)v156 + 1);
                v164 = (__int16)v138;
                if ( (__int16)v138 <= v163 )
                {
                  do
                  {
                    if ( v164 < 2 )
                      v165 = v156[v164 + 1];
                    else
                      v165 = *(_QWORD *)(v156[3] + 8LL * v164 - 16);
                    CmpLockKcbShared(v165);
                    v163 = *((_WORD *)v156 + 1);
                    ++v164;
                  }
                  while ( v164 <= v163 );
                  v138 = 0LL;
                }
                v436 = v138;
                if ( v163 >= 0 )
                {
                  while ( 1 )
                  {
                    if ( v163 < 2 )
                      v166 = v156[v163 + 1];
                    else
                      v166 = *(_QWORD *)(v156[3] + 8LL * v163 - 16);
                    if ( *(_WORD *)(v166 + 66) && *(_BYTE *)(v166 + 65) == 1 )
                      goto LABEL_287;
                    if ( *(_DWORD *)(v166 + 40) != -1 )
                      break;
                    if ( --v163 < 0 )
                      goto LABEL_287;
                  }
                  if ( !v147 )
                  {
LABEL_302:
                    v173 = *((_WORD *)v156 + 1);
                    if ( (v173 & 0x8000u) == 0 )
                    {
                      while ( 1 )
                      {
                        v174 = v173 < 2u ? v156[v173 + 1] : *(_QWORD *)(v156[3] + 8LL * v173 - 16);
                        if ( *(_DWORD *)(v174 + 40) != -1 )
                          break;
                        if ( (--v173 & 0x8000u) != 0 )
                          goto LABEL_310;
                      }
                      if ( (*(_DWORD *)(v174 + 184) & 0x100000) == 0 )
                      {
LABEL_310:
                        v175 = (__int16)v138;
                        do
                        {
                          if ( v175 < 2 )
                            v176 = v156[v175 + 1];
                          else
                            v176 = *(_QWORD *)(v156[3] + 8LL * v175 - 16);
                          CmpUnlockKcb(v176);
                          ++v175;
                        }
                        while ( v175 <= *((__int16 *)v156 + 1) );
                        goto LABEL_315;
                      }
                      v193 = CmpGetSymbolicLinkTarget(
                               (__int64)v156,
                               (__int64)v457,
                               v404,
                               v162,
                               v147,
                               (__int64)v10,
                               (__int64)&v434,
                               *(__int64 *)GrantedAccess,
                               (ULONG_PTR *)&v10[4].Privilege[0].Luid,
                               &v421);
                      KeyControlBlock = v193;
                      if ( v193 >= 0 )
                      {
                        v10->PrivilegeCount &= ~8u;
                        if ( !*(_QWORD *)&v10[3].Control )
                        {
                          v194 = *(_QWORD *)(v421 + 32);
                          if ( (*(_DWORD *)(v194 + 4112) & 1) != 0 )
                            *(_QWORD *)&v10[3].Control = v194;
                        }
                        v195 = BYTE2(v10[12].Privilege[0].Attributes);
                        KeyControlBlock = 260;
                        if ( (unsigned __int8)v195 < 4u )
                        {
                          *(&v10[13].PrivilegeCount + 2 * v195) = 260;
                          *(&v10[13].Control + 2 * (unsigned __int8)BYTE2(v10[12].Privilege[0].Attributes)++) = 4864;
                        }
                      }
                      else
                      {
                        CmpRecordParseFailure((__int64)v10, 4608, v193);
                      }
                      goto LABEL_696;
                    }
LABEL_315:
                    v177 = v404;
                    v178 = (unsigned int)(__int16)v404;
                    if ( (unsigned int)v178 >= 8 )
                    {
                      v181 = *(_QWORD *)&v457[40];
                      v180 = (int *)(16 * ((unsigned int)(v178 - 8) + 6LL));
                      v179 = *(_DWORD *)(*(_QWORD *)&v457[40] + 4LL * (unsigned int)(v178 - 8));
                    }
                    else
                    {
                      v179 = v457[v178];
                      v180 = &v457[8];
                      v181 = 16LL * (unsigned int)v178;
                    }
                    v182 = (__int64)v180 + v181;
                    v183 = (v10->PrivilegeCount & 1) != 0 && (_DWORD)v178 == v414 - 1;
                    *(_DWORD *)AccessMode = v179 + 37 * *(_DWORD *)(v11 + 16);
                    v184 = CmpWalkOneLevel(
                             v11,
                             (int)v156,
                             (int)&v426,
                             (int)v157,
                             (__int64)&v405,
                             v182,
                             v179,
                             *(ULONG_PTR *)AccessMode,
                             v147,
                             v183,
                             (__int64)v10);
                    KeyControlBlock = v184;
                    if ( v184 == -1073741772 )
                    {
                      if ( !CmpLoadingSystemHivesActive )
                        goto LABEL_346;
                      v11 = BugCheckParameter4;
                      v401 = BugCheckParameter4;
                      if ( (struct _KTHREAD *)CmpMountThread == KeGetCurrentThread()
                        || *(_QWORD *)(BugCheckParameter4 + 32) != CmpMasterHive )
                      {
                        v184 = KeyControlBlock;
                        goto LABEL_346;
                      }
                      if ( (*(_DWORD *)(BugCheckParameter4 + 8) & 0x7FE00000) == 0x600000 && (__int16)v177 > 0 )
                      {
                        v185 = CmpGetComponentNameAtIndex((__int64)v457, (int)v178 - 1);
                        if ( (unsigned __int8)CmpWaitForHiveMount(v185, v186, v187, &v10[6].Privilege[0].Attributes) )
                        {
                          v10->PrivilegeCount |= 0x100u;
                          KeyControlBlock = 259;
                          CmpRecordParseFailure((__int64)v10, 5120, 259);
                          goto LABEL_696;
                        }
                      }
                      if ( (*(_DWORD *)(v11 + 8) & 0x7FE00000) == 0x400000 )
                      {
                        v188 = CmpGetComponentNameAtIndex((__int64)v457, v178);
                        if ( (unsigned __int8)CmpWaitForHiveMount(v188, v189, v190, &v10[6].Privilege[0].Attributes) )
                        {
                          v10->PrivilegeCount |= 0x100u;
                          KeyControlBlock = 259;
                          CmpRecordParseFailure((__int64)v10, 5376, 259);
                          goto LABEL_696;
                        }
                      }
                      v184 = KeyControlBlock;
                    }
                    if ( v184 >= 0 )
                    {
                      v191 = v426;
                      ++BYTE1(v10[12].Privilege[0].Attributes);
                      *(_QWORD *)&v10[12].PrivilegeCount = v191;
                      v10[12].Privilege[0].Luid = (LUID)v191;
                      v138 = 0LL;
                      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                        KeBugCheckEx(0x51u, 0x1FuLL, 0LL, 0LL, 0LL);
                      LOWORD(v177) = v177 + 1;
                      v11 = v426;
                      v404 = v177;
                      v162 = v407;
                      LOBYTE(v397) = v405;
                      v192 = v156;
                      v156 = (__int64 *)v157;
                      v401 = v426;
                      v157 = (int *)v192;
                      BugCheckParameter4 = v426;
                      v426 = 0LL;
                      v405 = 0;
                      if ( (__int16)v404 < (__int16)v407 )
                      {
                        v147 = *(_QWORD *)v412;
                        continue;
                      }
                      goto LABEL_349;
                    }
LABEL_346:
                    v196 = BYTE2(v10[12].Privilege[0].Attributes);
                    if ( (unsigned __int8)v196 < 4u )
                    {
                      *(&v10[13].PrivilegeCount + 2 * v196) = v184;
                      *(&v10[13].Control + 2 * (unsigned __int8)BYTE2(v10[12].Privilege[0].Attributes)++) = 5504;
                    }
                    goto LABEL_696;
                  }
                  v170 = CmListGetNextElement(v156[1] + 208, &v436, 32LL);
                  if ( !v170 )
                    goto LABEL_301;
                  while ( 1 )
                  {
                    v172 = *(_DWORD *)(v170 + 68);
                    if ( v172 == 2 || v172 == 11 )
                      break;
                    v170 = CmListGetNextElement(v171 + 208, &v436, 32LL);
                    if ( !v170 )
                      goto LABEL_301;
                  }
                  if ( !CmEqualTrans(*(_QWORD *)(v170 + 56), v147) )
                  {
LABEL_301:
                    LOWORD(v138) = 0;
                    goto LABEL_302;
                  }
                }
                break;
              }
LABEL_287:
              if ( CmpLoadingSystemHivesActive
                && (v11 = BugCheckParameter4,
                    v401 = BugCheckParameter4,
                    (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread())
                && *(_QWORD *)(BugCheckParameter4 + 32) == CmpMasterHive
                && (*(_DWORD *)(BugCheckParameter4 + 8) & 0x7FE00000) == 0x600000
                && (__int16)v404 > 0
                && (v167 = CmpGetComponentNameAtIndex((__int64)v457, (__int16)v404 - 1),
                    (unsigned __int8)CmpWaitForHiveMount(v167, v168, v169, &v10[6].Privilege[0].Attributes)) )
              {
                v10->PrivilegeCount |= 0x100u;
                KeyControlBlock = 259;
                CmpRecordParseFailure((__int64)v10, 3840, 259);
              }
              else
              {
                KeyControlBlock = -1073741772;
                CmpRecordParseFailure((__int64)v10, 4096, -1073741772);
              }
              goto LABEL_390;
            }
          }
        }
      }
    }
LABEL_195:
    v125 = -1073741199;
    goto LABEL_196;
  }
  if ( (*(_DWORD *)a7 & 0x400) != 0 )
    CmpLockRegistryExclusive();
  else
    CmpLockRegistry(v20, v21, 65534LL);
  v26 = *(_QWORD *)(v16 + 296);
  LOBYTE(v399) = 1;
  v27 = v26 & 1;
  if ( (v26 & 1) != 0 )
    v26 &= ~1uLL;
  if ( !v26 || v27 )
    goto LABEL_80;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v29 = *(UNICODE_STRING **)GrantedAccess;
  v31 = (unsigned __int16 *)*((_QWORD *)v30 + 1);
  v32 = *v30;
  v33 = CurrentServerSiloGlobals[154];
  v34 = **(_WORD **)GrantedAccess;
  LOWORD(v403) = v32;
  if ( v34 < (unsigned __int16)v32 )
  {
LABEL_79:
    v9 = 0;
LABEL_80:
    CmpDereferenceKeyControlBlock(v16);
    BugCheckParameter2 = 0LL;
    CmpUnlockRegistry(v77, v76, v78, v79);
    v15 = v419;
    LOBYTE(v399) = 0;
LABEL_81:
    v401 = BugCheckParameter4;
    goto LABEL_82;
  }
  v35 = (unsigned __int16 *)((char *)v31 + v32);
  if ( v31 >= (unsigned __int16 *)((char *)v31 + v32) )
    goto LABEL_26;
  v36 = *(_QWORD *)(*(_QWORD *)GrantedAccess + 8LL) - (_QWORD)v31;
  do
  {
    v37 = *v31;
    v38 = *(unsigned __int16 *)((char *)v31 + v36);
    if ( *v31 != v38 )
    {
      NLS_UPCASE(v33, v38);
      v39 = NLS_UPCASE(v33, v37);
      if ( v39 != v40 )
      {
        v16 = BugCheckParameter2;
        goto LABEL_79;
      }
    }
    ++v31;
  }
  while ( v31 < v35 );
  LOWORD(v32) = v403;
  v13 = v404;
  v29 = *(UNICODE_STRING **)GrantedAccess;
LABEL_26:
  Buffer = v29->Buffer;
  v42 = v34 - v32;
  v43 = v29->MaximumLength - v32;
  v44 = (unsigned __int64)(unsigned __int16)v32 >> 1;
  v45 = v43;
  v419.m128i_i16[1] = v43;
  v46 = (__int64)&Buffer[v44];
  v47 = v42;
  v419.m128i_i16[0] = v42;
  v48 = (_WORD *)v46;
  v419.m128i_i64[1] = v46;
  if ( v42 )
  {
    do
    {
      if ( *v48 != 92 )
        break;
      ++v48;
      v45 -= 2;
      v47 -= 2;
    }
    while ( v47 );
    v419.m128i_i64[1] = (__int64)v48;
    v419.m128i_i16[0] = v47;
    v419.m128i_i16[1] = v45;
  }
  v49 = BugCheckParameter2;
  v50 = ((*(_DWORD *)(BugCheckParameter2 + 8) >> 21) & 0x3FF) - 1;
  if ( (*(_DWORD *)a7 & 1) != 0 && !v47 )
  {
    v51 = *(_QWORD *)(BugCheckParameter2 + 80);
    v52 = *(unsigned __int16 *)(v51 + 24);
    v53 = (*(_DWORD *)v51 & 1) == 0;
    v54 = *(unsigned __int16 *)(v51 + 24);
    if ( v53 )
    {
      v419.m128i_i16[0] = v52 + v42;
      v56 = v46 - 2 * ((unsigned __int64)v52 >> 1);
      v419.m128i_i16[1] = v52 + v43;
    }
    else
    {
      v55 = 2 * v52;
      v56 = v46 - 2 * v54;
      v419.m128i_i16[1] = v43 + v55;
      v419.m128i_i16[0] = v55 + v42;
    }
    v13 = 1;
    v419.m128i_i64[1] = v56;
    v404 = 1;
    --v50;
  }
  v57 = CmpComputeComponentHashes(&v419, (__int16 *)&v407, (__int64)v457);
  KeyControlBlock = v57;
  if ( v57 < 0 )
  {
    v58 = 512;
    goto LABEL_38;
  }
  LOWORD(v9) = v407;
  v403 = v407;
  v414 = (__int16)v407;
  if ( (unsigned int)((__int16)v407 + v50) > 0x20 )
  {
    v57 = -1073741811;
    v58 = 768;
    KeyControlBlock = -1073741811;
    goto LABEL_38;
  }
  v59 = 0LL;
  v60 = 0;
  if ( !v407 )
  {
LABEL_47:
    if ( v13 == v407 )
    {
      CmpLockHashEntrySharedByKcb(v49);
      v400 = 1;
    }
    CmpLockKcbShared(v49);
    v63 = *(__int16 *)(v49 + 66);
    v439 = 0LL;
    WORD1(v439) = -1;
    *(_OWORD *)Privileges = 0LL;
    if ( v63 >= 2 )
    {
      v64 = 8LL * (unsigned int)(v63 - 1);
      v65 = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(PagedPool, v64, 0x35364D43u, v62);
      v59 = v65;
      if ( !v65 )
      {
        v59 = Privileges[1];
LABEL_56:
        v67 = 1;
LABEL_57:
        if ( v59 )
          CmSiFreeMemory(v59);
        if ( !v67 && (*(_DWORD *)(v49 + 8) & 0x40000) == 0 )
        {
          CmpUnlockKcb(v49);
          v69 = v49;
          LOWORD(v49) = v419.m128i_i16[0];
          v70 = v414;
          v71 = v404;
          v401 = BugCheckParameter4;
          goto LABEL_147;
        }
        CmpUnlockKcb(v49);
        if ( v400 )
        {
          CmpUnlockHashEntryByKcb(v49);
          v400 = 0;
        }
        CmpDereferenceKeyControlBlock(v49);
        v9 = 0;
        BugCheckParameter2 = 0LL;
        v15 = *(__m128i *)&v430->OperationID.LowPart;
        v419 = *(__m128i *)&v430->OperationID.LowPart;
        CmpCleanupPathInfo(v457);
        memset(v457, 0, 0xA8uLL);
        goto LABEL_81;
      }
      memset(v65, 0, v64);
    }
    v66 = *(_WORD *)(v49 + 66);
    LOWORD(v439) = v63;
    Privileges[1] = v59;
    WORD1(v439) = v66;
    if ( v66 )
    {
      v72 = *(_QWORD *)(v49 + 192);
      if ( v72 )
      {
        do
        {
          CmpSetKcbAtLayerHeight((__int64)&v439, v66, *(_QWORD *)(v72 + 16));
          v72 = *(_QWORD *)(v73 + 24);
          v66 = v74 - 1;
        }
        while ( v72 );
        v59 = Privileges[1];
        v66 = WORD1(v439);
      }
    }
    else
    {
      *((_QWORD *)&v439 + 1) = v49;
    }
    if ( (v66 & 0x8000u) == 0 )
    {
      while ( 1 )
      {
        v75 = v66 < 2u ? Privileges[v66 - 1] : (PPRIVILEGE_SET)*((_QWORD *)v59 + v66 - 2);
        if ( HIWORD(v75[3].Control) && BYTE1(v75[3].Control) == 1 )
          break;
        if ( v75[2].PrivilegeCount != -1 )
        {
          v67 = 0;
          goto LABEL_57;
        }
        if ( (--v66 & 0x8000u) != 0 )
          goto LABEL_56;
      }
    }
    goto LABEL_56;
  }
  while ( 1 )
  {
    v61 = v60 >= 8 ? (int *)(*(_QWORD *)&v457[40] + 16 * (v60 - 8 + 6LL)) : &v457[4 * v60 + 8];
    if ( *(_WORD *)v61 > 0x200u )
      break;
    if ( ++v60 >= (__int16)v407 )
      goto LABEL_47;
  }
  v57 = -1073741811;
  v58 = 1024;
  KeyControlBlock = -1073741811;
LABEL_38:
  CmpRecordParseFailure(a7, v58, v57);
  v11 = BugCheckParameter4;
  v401 = BugCheckParameter4;
LABEL_700:
  if ( v445[1] )
    CmSiFreeMemory(v445[1]);
  if ( v447[1] )
    CmSiFreeMemory(v447[1]);
  if ( v453[1] )
    CmSiFreeMemory(v453[1]);
  v343 = v426;
  if ( v426 )
  {
    CmpDereferenceKeyControlBlockUnsafe((volatile signed __int64 *)v11);
    CmpDereferenceKeyControlBlock(v343);
  }
  else if ( v11 )
  {
    v443 = 0LL;
    CmpInitializeDelayDerefContext(&v443);
    v353 = *(_QWORD *)v11;
    v354 = *(_QWORD *)(v11 + 32);
    if ( *(_QWORD *)v11 <= 1uLL )
    {
LABEL_737:
      v359 = *(_DWORD *)(BugCheckParameter4 + 16);
      v360 = *(_QWORD *)(v401 + 32);
      v361 = *(_QWORD *)(v360 + 1648)
           + 24
           * ((unsigned int)(*(_DWORD *)(v360 + 1656) - 1) & ((101027 * (v359 ^ (v359 >> 9))) ^ ((unsigned __int64)(101027 * (v359 ^ (v359 >> 9))) >> 9)));
      ExAcquirePushLockExclusiveEx(v361, 0LL);
      *(_QWORD *)(v361 + 8) = KeGetCurrentThread();
      _m_prefetchw((const void *)(v360 + 4232));
      v362 = *(_DWORD *)(v360 + 4232);
      if ( !v362 )
LABEL_792:
        KeBugCheckEx(0x51u, 0x17uLL, v360, 8uLL, BugCheckParameter4);
      while ( 1 )
      {
        v363 = v362;
        v362 = _InterlockedCompareExchange((volatile signed __int32 *)(v360 + 4232), v362 + 1, v362);
        if ( v363 == v362 )
          break;
        if ( !v362 )
          goto LABEL_792;
      }
      v364 = BugCheckParameter4;
      ExAcquirePushLockExclusiveEx(BugCheckParameter4 + 48, 0LL);
      v365 = BugCheckParameter4;
      v366 = 0LL;
      *(_QWORD *)(v364 + 56) = KeGetCurrentThread();
      v367 = *(_QWORD *)(v365 + 192);
      if ( v367 )
      {
        v368 = *(_QWORD *)(v367 + 24);
        if ( v368 )
        {
          v366 = *(_QWORD *)(v368 + 16);
          CmpUnlockKcb(v365);
          CmpLockKcbExclusive(v366);
          CmpLockKcbExclusive(v365);
        }
      }
      v369 = v401;
      v370 = *(_QWORD *)(v401 + 32);
      v371 = _InterlockedDecrement64((volatile signed __int64 *)v365);
      if ( v371 == 2 )
      {
        if ( (*(_DWORD *)(BugCheckParameter4 + 184) & 0x40000) != 0 && *(_BYTE *)(v370 + 2944) == 1 )
          CmpDoQueueLateUnloadWorker(v370);
      }
      else if ( !v371 )
      {
        v372 = BugCheckParameter4;
        if ( (*(_DWORD *)(BugCheckParameter4 + 184) & 0x40000) != 0 )
        {
          v373 = *(_QWORD *)(v369 + 32);
          CmpCleanUpKcbCacheWithLock(BugCheckParameter4);
          v374 = KeGetCurrentThread();
          *(_DWORD *)(v373 + 160) |= 0x80u;
          *(_QWORD *)(v373 + 4176) = v374;
          *(_DWORD *)(v373 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v373 + 4236), 1u) & 0x7F) + 4240) = 31;
          if ( (*(_DWORD *)(v373 + 160) & 0x20) == 0
            && _InterlockedExchangeAdd((volatile signed __int32 *)(v373 + 4232), 0xFFFFFFFF) == 1 )
          {
            CmpDeleteHive((_QWORD *)v373);
          }
        }
        else
        {
          v375 = 0;
          v376 = *(_DWORD *)(BugCheckParameter4 + 8);
          if ( (v376 & 0x20) == 0 )
            v375 = (v376 & 0x20000) == 0;
          if ( (!CmpHoldLazyFlush
             || (*(_DWORD *)(BugCheckParameter4 + 184) & 0x100000) != 0
             || (*(_DWORD *)(BugCheckParameter4 + 8) & 8) != 0)
            && v375 )
          {
            v377 = KeAbPreAcquire((__int64)&CmpDelayedCloseTableLock, 0LL);
            v378 = v377;
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(1uLL);
            if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpDelayedCloseTableLock, 0) )
              ExpAcquireFastMutexContended((__int64)&CmpDelayedCloseTableLock, v377);
            if ( v378 )
              *(_BYTE *)(v378 + 18) = 1;
            v380 = BugCheckParameter4;
            *(&CmpDelayedCloseTableLock + 1) = (ULONG_PTR)KeGetCurrentThread();
            *((_DWORD *)&CmpDelayedCloseTableLock + 12) = CurrentIrql;
            v381 = (_QWORD *)(BugCheckParameter4 + 224);
            if ( (_QWORD *)*v381 != v381 )
              KeBugCheckEx(0x51u, 0x34uLL, BugCheckParameter4, 0LL, 0LL);
            v382 = CmpDelayedLRUListHead;
            if ( *(__int64 **)(CmpDelayedLRUListHead + 8) != &CmpDelayedLRUListHead )
              __fastfail(3u);
            *v381 = CmpDelayedLRUListHead;
            v381[1] = &CmpDelayedLRUListHead;
            *(_QWORD *)(v382 + 8) = v381;
            CmpDelayedLRUListHead = (__int64)v381;
            *(_BYTE *)(v380 + 64) |= 2u;
            ++qword_140D3D2C8;
            v383 = *((unsigned __int8 *)&CmpDelayedCloseTableLock + 48);
            v384 = ++CmpDelayedCloseElements > (unsigned int)CmpDelayedCloseSize;
            *(&CmpDelayedCloseTableLock + 1) = 0LL;
            v385 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpDelayedCloseTableLock, 1, 0);
            if ( v385 )
              ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpDelayedCloseTableLock, v385);
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v386 = KeGetCurrentIrql();
                if ( v386 <= 0xFu && (unsigned __int8)v383 <= 0xFu && v386 >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  SchedulerAssist = CurrentPrcb->SchedulerAssist;
                  v389 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v383 + 1));
                  v53 = (v389 & SchedulerAssist[5]) == 0;
                  SchedulerAssist[5] &= v389;
                  if ( v53 )
                    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                }
              }
            }
            __writecr8(v383);
            KeAbPostRelease((ULONG_PTR)&CmpDelayedCloseTableLock);
            if ( v384 )
              CmpArmDelayedCloseTimer();
          }
          else
          {
            CmpCleanUpKcbCacheWithLock(BugCheckParameter4);
            if ( *(struct _KTHREAD **)(v364 + 56) != KeGetCurrentThread() && (*(_DWORD *)(v372 + 8) & 0x80000) != 0 )
              CmpFreeKeyControlBlock(BugCheckParameter4);
          }
        }
      }
      CmpUnlockKcb(BugCheckParameter4);
      if ( v366 )
        CmpUnlockKcb(v366);
      v390 = *(_QWORD *)(v360 + 1648)
           + 24
           * ((unsigned int)(*(_DWORD *)(v360 + 1656) - 1) & ((101027 * (v359 ^ (v359 >> 9))) ^ ((unsigned __int64)(101027 * (v359 ^ (v359 >> 9))) >> 9)));
      *(_QWORD *)(v390 + 8) = 0LL;
      ExReleasePushLockEx(v390, 0LL);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v360 + 4232), 0xFFFFFFFF) == 1 )
        CmpDeleteHive((_QWORD *)v360);
      CmpDrainDelayDerefContext((_QWORD **)&v443);
    }
    else
    {
      while ( 1 )
      {
        v355 = v353 - 1;
        v356 = v353;
        v357 = v353 == 3 && (*(_DWORD *)(BugCheckParameter4 + 184) & 0x40000) != 0 && *(_BYTE *)(v354 + 2944) == 1;
        v358 = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter4, v355, v353);
        v353 = v358;
        if ( v358 == v356 )
          break;
        if ( v358 <= 1 )
          goto LABEL_737;
      }
      if ( v358 < v355 )
        KeBugCheckEx(0x51u, 0x25uLL, BugCheckParameter4, 0LL, 0LL);
      if ( v357 )
        CmpDoQueueLateUnloadWorker(v354);
    }
  }
  if ( BugCheckParameter2 )
    CmpDereferenceKeyControlBlock(BugCheckParameter2);
  v344 = v10[5].PrivilegeCount;
  if ( v344 && (v344 & 2) != 0 )
  {
    LOBYTE(PreviouslyGrantedAccess) = 1;
    CmpSearchKeyControlBlockTreeEx(
      CmpSyncKcbCacheForHive,
      *(_QWORD *)&v10[5].Privilege[0].Luid.HighPart,
      &v434,
      0LL,
      PreviouslyGrantedAccess);
    v10[5].PrivilegeCount &= ~2u;
  }
  CmpDrainDelayDerefContext((_QWORD **)&v434);
  if ( (_BYTE)v399 )
    CmpUnlockRegistry(v346, v345, v347, v348);
  v349 = v428;
  if ( v428 )
  {
    if ( v398 && CmpCheckExeOwnerForPca() )
      CmpPublishEventForPcaResolver(v10, v349);
    CmpFreeTransientPoolWithTag(v349, 0x624E4D43u);
  }
  if ( (v10[8].PrivilegeCount & 1) != 0 )
    CmpDetachFromRegistryProcess(v10[8].Privilege);
  if ( Object )
    ObfDereferenceObject(Object);
  v350 = *(struct _SLIST_ENTRY **)&v457[40];
  if ( *(_QWORD *)&v457[40] )
  {
    v351 = KeGetCurrentPrcb();
    P = v351->PPLookasideList[8].P;
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) < P->Depth
      || (++P->FreeMisses, P = v351->PPLookasideList[8].L, ++P->TotalFrees, LOWORD(P->ListHead.Alignment) < P->Depth) )
    {
      RtlpInterlockedPushEntrySList(&P->ListHead, v350);
    }
    else
    {
      ++P->FreeMisses;
      ((void (__fastcall *)(struct _SLIST_ENTRY *))P->FreeEx)(v350);
    }
  }
  return (unsigned int)KeyControlBlock;
}
