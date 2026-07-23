/*
 * XREFs of NtSetInformationProcess @ 0x14069AAC0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x14020A530 (ExAllocatePoolWithQuotaTag.c)
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402111E0 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     KeEnterCriticalRegionThread @ 0x14022C1A0 (KeEnterCriticalRegionThread.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x14022E5E0 (PsChargeProcessNonPagedPoolQuota.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x140230440 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiCreateSystemWsles @ 0x140231820 (MiCreateSystemWsles.c)
 *     MmGetSessionId @ 0x140233F30 (MmGetSessionId.c)
 *     RtlInterlockedSetClearBits @ 0x14023D09C (RtlInterlockedSetClearBits.c)
 *     KeStackAttachProcess @ 0x14023EE20 (KeStackAttachProcess.c)
 *     KeQueryGroupMaskProcess @ 0x14023EF60 (KeQueryGroupMaskProcess.c)
 *     MmGetDefaultPagePriority @ 0x14024422C (MmGetDefaultPagePriority.c)
 *     PsSetPagePriorityThread @ 0x140249634 (PsSetPagePriorityThread.c)
 *     PsSetIoPriorityThread @ 0x14024B340 (PsSetIoPriorityThread.c)
 *     RtlStringCbCopyA @ 0x140253AB0 (RtlStringCbCopyA.c)
 *     ExReleaseExtensionTable @ 0x140262BAC (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x140262BC8 (ExGetExtensionTable.c)
 *     KeUnstackDetachProcess @ 0x1402688E0 (KeUnstackDetachProcess.c)
 *     PsGetCurrentProcess @ 0x1402BFB80 (PsGetCurrentProcess.c)
 *     KeDelayExecutionThread @ 0x1402DA450 (KeDelayExecutionThread.c)
 *     PspWriteProcessSecurityDomain @ 0x1402E222C (PspWriteProcessSecurityDomain.c)
 *     PspLockProcessExclusive @ 0x1402E8F50 (PspLockProcessExclusive.c)
 *     KeIsUserCetAllowed @ 0x1402E8F78 (KeIsUserCetAllowed.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1402E8FE4 (KeSetPriorityAndQuantumProcess.c)
 *     MmSetMemoryPriorityProcess @ 0x1402E9458 (MmSetMemoryPriorityProcess.c)
 *     IoBoostThreadIoPriority @ 0x1402EB1D4 (IoBoostThreadIoPriority.c)
 *     PtrToUlong @ 0x1402EB730 (PtrToUlong.c)
 *     RtlRemoveDynamicFunctionTable @ 0x1402EB73C (RtlRemoveDynamicFunctionTable.c)
 *     RtlInsertDynamicFunctionTable @ 0x1402ECA08 (RtlInsertDynamicFunctionTable.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x14031B374 (ExCpuSetResourceManagerAccessCheck.c)
 *     PspLockUnlockProcessExclusive @ 0x140321794 (PspLockUnlockProcessExclusive.c)
 *     PspUnlockProcessExclusive @ 0x14032A1F8 (PspUnlockProcessExclusive.c)
 *     KeSetExecuteOptions @ 0x14032A96C (KeSetExecuteOptions.c)
 *     KeSynchronizeSecurityDomain @ 0x14032E1A4 (KeSynchronizeSecurityDomain.c)
 *     KeInitializeGate @ 0x140330AA0 (KeInitializeGate.c)
 *     KeBoostPriorityThread @ 0x140336FA0 (KeBoostPriorityThread.c)
 *     KeVerifyGroupAffinity @ 0x140377D24 (KeVerifyGroupAffinity.c)
 *     MmRemoveExecuteGrants @ 0x14037E6A0 (MmRemoveExecuteGrants.c)
 *     KeSetCpuSetsProcess @ 0x1403C55C4 (KeSetCpuSetsProcess.c)
 *     xKdEnumerateDebuggingDevices @ 0x1403CFAD0 (xKdEnumerateDebuggingDevices.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     MmGetMaximumUserAddress @ 0x1403F2018 (MmGetMaximumUserAddress.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     IoRevokeHandlesForProcess @ 0x140505650 (IoRevokeHandlesForProcess.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x14051AE58 (KeRecomputeCpuSetAffinityProcess.c)
 *     MmReleaseCommitForMemResetPages @ 0x14052B1F4 (MmReleaseCommitForMemResetPages.c)
 *     MmSetCommitReleaseEligibility @ 0x14052B42C (MmSetCommitReleaseEligibility.c)
 *     PspLockProcessSharedUnsafe @ 0x14057FECC (PspLockProcessSharedUnsafe.c)
 *     PspUnlockProcessSharedUnsafe @ 0x140580140 (PspUnlockProcessSharedUnsafe.c)
 *     PspGetRedirectionTrustPolicy @ 0x1405CD5C8 (PspGetRedirectionTrustPolicy.c)
 *     PspSetRedirectionTrustPolicy @ 0x1405CD634 (PspSetRedirectionTrustPolicy.c)
 *     PspProcessDynamicEnforcedAddressRanges @ 0x1405CD684 (PspProcessDynamicEnforcedAddressRanges.c)
 *     RtlIsSandboxedToken @ 0x1405E80A0 (RtlIsSandboxedToken.c)
 *     LpcRequestPort @ 0x1405EB2B0 (LpcRequestPort.c)
 *     SeCaptureSubjectContextEx @ 0x140602A50 (SeCaptureSubjectContextEx.c)
 *     ProbeForWrite @ 0x14060B790 (ProbeForWrite.c)
 *     SeReleaseSubjectContext @ 0x14060D710 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140611880 (ObReferenceObjectByHandleWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x14063B9A0 (SeSinglePrivilegeCheck.c)
 *     ObReferenceProcessHandleTable @ 0x140678474 (ObReferenceProcessHandleTable.c)
 *     PsReferencePrimaryToken @ 0x14067EEB0 (PsReferencePrimaryToken.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x14068D3B0 (PspGetNoChildProcessRestrictedPolicy.c)
 *     PsSetProcessPriorityByClass @ 0x140698F70 (PsSetProcessPriorityByClass.c)
 *     PspSetProcessForegroundBackgroundRequest @ 0x140698FA0 (PspSetProcessForegroundBackgroundRequest.c)
 *     ExEnableRaiseUMExceptionOnInvalidHandleClose @ 0x140699790 (ExEnableRaiseUMExceptionOnInvalidHandleClose.c)
 *     PspCombineSecurityDomains @ 0x140699828 (PspCombineSecurityDomains.c)
 *     MmAllocateUserStack @ 0x14069A5C4 (MmAllocateUserStack.c)
 *     KeSetAutoAlignmentProcess @ 0x14069A8D8 (KeSetAutoAlignmentProcess.c)
 *     PsGetNextProcessThread @ 0x14069A900 (PsGetNextProcessThread.c)
 *     PspSetProcessDefaultHardErrorMode @ 0x14069AA00 (PspSetProcessDefaultHardErrorMode.c)
 *     PspWritePebAffinityInfo @ 0x1406ADCA4 (PspWritePebAffinityInfo.c)
 *     ObDereferenceProcessHandleTable @ 0x1406C1760 (ObDereferenceProcessHandleTable.c)
 *     MmProcessWorkingSetControl @ 0x1406C54D4 (MmProcessWorkingSetControl.c)
 *     PspSetQuotaLimits @ 0x1406C8ED4 (PspSetQuotaLimits.c)
 *     PspSetProcessPriorityClass @ 0x1406D5AB4 (PspSetProcessPriorityClass.c)
 *     PoSetProcessEnergyTrackingState @ 0x1406D9860 (PoSetProcessEnergyTrackingState.c)
 *     ExEnableHandleExceptions @ 0x1406DA8FC (ExEnableHandleExceptions.c)
 *     SeSetVirtualizationToken @ 0x1406DED9C (SeSetVirtualizationToken.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x1406E0058 (PspSetNoChildProcessRestrictedPolicy.c)
 *     PsIsSystemWideMitigationOptionSet @ 0x1406E27C8 (PsIsSystemWideMitigationOptionSet.c)
 *     PsQuitNextProcessThread @ 0x1406E3CC0 (PsQuitNextProcessThread.c)
 *     KeSetDisableBoostProcess @ 0x1407301AC (KeSetDisableBoostProcess.c)
 *     EtwSetProcessTelemetryCoverage @ 0x14076D9E4 (EtwSetProcessTelemetryCoverage.c)
 *     KeSetDisableBoostThread @ 0x14076E9FC (KeSetDisableBoostThread.c)
 *     PsSetProcessFaultInformation @ 0x14076EBB0 (PsSetProcessFaultInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 *     PspSetProcessAffinityUpdateMode @ 0x1407790A0 (PspSetProcessAffinityUpdateMode.c)
 *     SeCompareSigningLevels @ 0x14077B460 (SeCompareSigningLevels.c)
 *     SeCheckPrivilegedObject @ 0x14078A084 (SeCheckPrivilegedObject.c)
 *     PspAssignPrimaryToken @ 0x1407B6DE0 (PspAssignPrimaryToken.c)
 *     ExSystemExceptionFilter @ 0x1407D0AE0 (ExSystemExceptionFilter.c)
 *     KeSetCheckStackExtentsProcess @ 0x1408BD89C (KeSetCheckStackExtentsProcess.c)
 *     MmValidateUserCallTarget @ 0x1408DA6B8 (MmValidateUserCallTarget.c)
 *     ObSetProcessDeviceMap @ 0x1408E1ECC (ObSetProcessDeviceMap.c)
 *     PsIsGuiThread @ 0x14090A0F4 (PsIsGuiThread.c)
 *     PsSetProcessHandleTracingInformation @ 0x14090A1C8 (PsSetProcessHandleTracingInformation.c)
 *     PspEnableAltSystemCallHandling @ 0x14090A468 (PspEnableAltSystemCallHandling.c)
 *     PspProcessDynamicEHContinuationTargets @ 0x14090A554 (PspProcessDynamicEHContinuationTargets.c)
 *     PspSetProcessAffinitySafe @ 0x14090AE14 (PspSetProcessAffinitySafe.c)
 *     PspFreeUserFiberShadowStack @ 0x14090C9C4 (PspFreeUserFiberShadowStack.c)
 *     PspSetupUserFiberShadowStack @ 0x14090CD50 (PspSetupUserFiberShadowStack.c)
 *     PsIumEnableOnDemandDebugWithResponse @ 0x14090F1D4 (PsIumEnableOnDemandDebugWithResponse.c)
 *     SeCodeIntegritySetInformationProcess @ 0x14091E6A0 (SeCodeIntegritySetInformationProcess.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x1409B7280 (ExAllocatePool2.c)
 */

NTSTATUS __cdecl NtSetInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength)
{
  size_t v4; // rbx
  __int64 v5; // rdi
  unsigned int v7; // r14d
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int8 v9; // r15
  int v10; // eax
  NTSTATUS result; // eax
  volatile signed __int64 *v12; // rbx
  NTSTATUS v13; // esi
  _QWORD *PoolWithTag; // rax
  void *v15; // r8
  PVOID v16; // rcx
  int v17; // ebx
  char v18; // r12
  PVOID v19; // rdi
  __int16 v20; // bx
  PVOID v21; // rdi
  NTSTATUS v22; // esi
  char v23; // bl
  unsigned int v24; // r12d
  NTSTATUS v25; // esi
  struct _EX_RUNDOWN_REF *v26; // rdi
  _QWORD *i; // rbx
  __int64 v28; // r8
  _DWORD *v29; // r9
  unsigned int v30; // ebx
  unsigned int v31; // r12d
  int v32; // esi
  struct _EX_RUNDOWN_REF *v33; // rdx
  signed __int64 *v34; // roff
  signed __int64 v35; // r15
  signed __int64 v36; // rax
  struct _DMA_ADAPTER *v37; // r15
  int v38; // eax
  unsigned __int8 v39; // di
  __int64 v40; // r13
  _DWORD *v41; // rbx
  __int64 v42; // rax
  __int16 v43; // dx
  __int64 v44; // rcx
  int v45; // ebx
  PVOID v46; // rdi
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // r13
  NTSTATUS v50; // esi
  PVOID v51; // rdi
  _BOOL8 v52; // rdi
  NTSTATUS v53; // esi
  struct _EX_RUNDOWN_REF *v54; // rbx
  __int64 v55; // r13
  struct _EX_RUNDOWN_REF *Count; // r8
  void **v57; // r8
  struct _EX_RUNDOWN_REF *v58; // r9
  HANDLE v59; // rbx
  int v60; // eax
  int v61; // ebx
  PVOID v62; // rcx
  int v63; // ebx
  int v64; // ebx
  int v65; // ecx
  PVOID v66; // rbx
  __int64 *v67; // rdx
  NTSTATUS v68; // eax
  NTSTATUS v69; // edi
  unsigned int v70; // eax
  unsigned __int64 v71; // r12
  NTSTATUS v72; // esi
  volatile signed __int32 *v73; // r14
  __int64 v74; // r13
  signed __int32 v75; // eax
  int v76; // r8d
  signed __int32 v77; // edx
  char *v78; // r14
  KSPIN_LOCK *v79; // rbx
  int v80; // r15d
  int v81; // ebx
  _KPROCESS *CurrentProcess; // rax
  unsigned int v83; // ebx
  NTSTATUS v84; // esi
  struct _EX_RUNDOWN_REF *v85; // r12
  __int64 v86; // r13
  unsigned int v87; // ebx
  signed __int32 v88; // eax
  signed __int32 v89; // edx
  PVOID v90; // r14
  char *v91; // r15
  char *v92; // rdi
  int v93; // ebx
  unsigned __int64 v94; // rsi
  _OWORD *PoolWithQuotaTag; // r15
  int v96; // ebx
  __int64 v97; // r8
  unsigned int v98; // ecx
  _DWORD *v99; // rdx
  _KPROCESS *v100; // rax
  unsigned __int64 v101; // rax
  __int16 v102; // dx
  __int64 v103; // rcx
  _QWORD *j; // rdx
  _QWORD *v105; // rbx
  __int64 v106; // rdi
  char *v107; // rbx
  char *v108; // rax
  char *v109; // r13
  __int64 v110; // rdx
  __int64 v111; // r8
  volatile void **v112; // rdi
  __int64 v113; // rdx
  void *Ptr; // rdx
  __int64 v115; // rdx
  __int64 v116; // rdi
  __int64 Ptr_high; // rcx
  unsigned __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // rbx
  unsigned int v121; // eax
  unsigned __int64 v122; // r8
  unsigned __int64 v123; // rax
  unsigned __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // rax
  unsigned __int64 v127; // rdi
  _KPROCESS *v128; // rsi
  BOOLEAN v129; // al
  unsigned __int64 v130; // rax
  __int16 v131; // dx
  bool v132; // r8
  unsigned __int64 v133; // rdx
  __int16 v134; // r8
  __int64 v135; // r13
  volatile signed __int32 *v136; // rax
  __int16 v137; // r8
  __int64 v138; // rcx
  __int64 *v139; // rax
  char *v140; // rsi
  int v141; // r9d
  char v142; // bl
  unsigned int v143; // r12d
  struct _DMA_ADAPTER *v144; // rbx
  unsigned __int64 v145; // rbx
  char *v146; // rbx
  unsigned __int64 v147; // rdx
  int v148; // edx
  int v149; // ecx
  unsigned __int64 v150; // rax
  unsigned int v151; // edx
  int v152; // r8d
  int v153; // edx
  unsigned int v154; // edi
  int v155; // r12d
  _KPROCESS *v156; // rax
  volatile signed __int32 *v157; // rsi
  int v158; // eax
  bool IsSandboxedToken; // r13
  int v160; // r8d
  int v161; // r12d
  int v162; // edx
  int v163; // eax
  int v164; // edx
  bool v165; // zf
  int v166; // edi
  int v167; // edx
  int v168; // ecx
  int v169; // eax
  int v170; // eax
  int v171; // r9d
  unsigned int v172; // edi
  int v173; // r13d
  int v174; // r15d
  __int64 v175; // rcx
  int v176; // r8d
  int v177; // r9d
  int v178; // edi
  int v179; // edx
  unsigned int v180; // ecx
  int v181; // edi
  int v182; // r8d
  int v183; // edx
  int v184; // r11d
  int v185; // r10d
  int v186; // ecx
  int v187; // eax
  int v188; // edx
  unsigned int v189; // edi
  unsigned int NoChildProcessRestrictedPolicy; // eax
  __int64 v191; // r9
  __int64 v192; // r8
  int v193; // edx
  int v194; // eax
  int v195; // edi
  unsigned int v196; // edi
  int RedirectionTrustPolicy; // eax
  int v198; // ecx
  int v199; // edi
  int v200; // edi
  _KPROCESS *v201; // rcx
  unsigned int v202; // ecx
  int v203; // r10d
  int v204; // r11d
  int v205; // edx
  int v206; // edi
  int v207; // esi
  int v208; // r15d
  int v209; // ecx
  char v210; // bl
  PVOID v211; // rdi
  unsigned __int64 v212; // rax
  void *v213; // rbx
  int v214; // eax
  void *v215; // rcx
  unsigned __int64 v216; // rdx
  PVOID v217; // rax
  PVOID v218; // rsi
  NTSTATUS v219; // edi
  _BOOL8 v220; // r12
  _KPROCESS *v221; // rax
  unsigned int v222; // ebx
  char v223; // bl
  NTSTATUS v224; // ebx
  int v225; // edi
  unsigned __int64 v226; // rax
  char v227; // bl
  int v228; // ecx
  unsigned __int64 ExtensionTable; // rbx
  int v230; // edi
  ULONG v231; // eax
  PVOID v232; // rbx
  NTSTATUS v233; // edi
  __int128 v234; // xmm1
  int v235; // eax
  volatile signed __int32 *v236; // r8
  unsigned int v237; // ecx
  volatile signed __int32 *v238; // r8
  unsigned int v239; // ecx
  char v240; // bl
  unsigned int v241; // edi
  _KPROCESS *v242; // rax
  unsigned __int64 v243; // rax
  HANDLE v244; // rbx
  NTSTATUS v245; // edi
  _KPROCESS *v246; // rax
  unsigned __int64 v247; // rdx
  __int64 v248; // rcx
  __int64 *v249; // r8
  int v250; // ebx
  int v251; // eax
  unsigned int v252; // eax
  int v253; // eax
  unsigned int v254; // eax
  NTSTATUS v255; // ebx
  _DWORD *v256; // r12
  unsigned int v257; // eax
  const void *v258; // rbx
  _KPROCESS *v259; // rdi
  _DWORD *Pool2; // rax
  unsigned int v261; // ecx
  const void *v262; // rbx
  struct _KPROCESS *v263; // rdi
  _DWORD *v264; // rax
  signed __int32 v265[8]; // [rsp+0h] [rbp-548h] BYREF
  PVOID Object; // [rsp+40h] [rbp-508h] BYREF
  unsigned int v267; // [rsp+48h] [rbp-500h]
  NTSTATUS v268; // [rsp+4Ch] [rbp-4FCh]
  struct _KTHREAD *v269; // [rsp+50h] [rbp-4F8h]
  char v270; // [rsp+58h] [rbp-4F0h]
  HANDLE v271; // [rsp+60h] [rbp-4E8h]
  unsigned int v272; // [rsp+68h] [rbp-4E0h]
  ULONG v273; // [rsp+70h] [rbp-4D8h]
  HANDLE Handle; // [rsp+78h] [rbp-4D0h]
  __int16 v275; // [rsp+80h] [rbp-4C8h]
  unsigned int v276; // [rsp+84h] [rbp-4C4h]
  ULONG Alignment; // [rsp+88h] [rbp-4C0h]
  char v278; // [rsp+8Ch] [rbp-4BCh]
  char v279; // [rsp+8Dh] [rbp-4BBh]
  char v280; // [rsp+8Eh] [rbp-4BAh]
  char v281; // [rsp+8Fh] [rbp-4B9h]
  int v282; // [rsp+94h] [rbp-4B4h]
  char *v283; // [rsp+98h] [rbp-4B0h]
  __int64 v284; // [rsp+A0h] [rbp-4A8h]
  PEX_RUNDOWN_REF RunRef; // [rsp+A8h] [rbp-4A0h]
  _DWORD v286[2]; // [rsp+B0h] [rbp-498h] BYREF
  __int64 v287; // [rsp+B8h] [rbp-490h] BYREF
  __int64 v288; // [rsp+C0h] [rbp-488h]
  size_t Size; // [rsp+C8h] [rbp-480h]
  PVOID v290; // [rsp+D0h] [rbp-478h] BYREF
  PVOID v291; // [rsp+D8h] [rbp-470h] BYREF
  PVOID v292; // [rsp+E0h] [rbp-468h] BYREF
  __int64 v293; // [rsp+E8h] [rbp-460h] BYREF
  __int64 v294; // [rsp+F0h] [rbp-458h]
  __int128 v295; // [rsp+F8h] [rbp-450h]
  unsigned int v296; // [rsp+108h] [rbp-440h]
  int v297; // [rsp+10Ch] [rbp-43Ch]
  unsigned int v298; // [rsp+110h] [rbp-438h]
  int v299; // [rsp+114h] [rbp-434h] BYREF
  PVOID v300; // [rsp+118h] [rbp-430h] BYREF
  __int128 v301; // [rsp+120h] [rbp-428h] BYREF
  void *Src[2]; // [rsp+130h] [rbp-418h] BYREF
  volatile void *Address[2]; // [rsp+140h] [rbp-408h]
  volatile void *v304[2]; // [rsp+150h] [rbp-3F8h]
  PVOID v305; // [rsp+160h] [rbp-3E8h] BYREF
  PVOID v306; // [rsp+168h] [rbp-3E0h]
  __int64 v307; // [rsp+170h] [rbp-3D8h]
  __int64 v308; // [rsp+178h] [rbp-3D0h] BYREF
  PVOID v309; // [rsp+180h] [rbp-3C8h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+188h] [rbp-3C0h]
  int v311; // [rsp+190h] [rbp-3B8h]
  int v312; // [rsp+198h] [rbp-3B0h]
  int v313; // [rsp+19Ch] [rbp-3ACh]
  int v314; // [rsp+1A0h] [rbp-3A8h]
  int v315; // [rsp+1A4h] [rbp-3A4h]
  int v316; // [rsp+1A8h] [rbp-3A0h]
  int v317; // [rsp+1ACh] [rbp-39Ch]
  HANDLE v318; // [rsp+1B0h] [rbp-398h]
  unsigned __int64 v319; // [rsp+1B8h] [rbp-390h]
  _OWORD *v320; // [rsp+1C0h] [rbp-388h]
  int v321; // [rsp+1C8h] [rbp-380h]
  __int64 v322; // [rsp+1D0h] [rbp-378h] BYREF
  BOOL v323; // [rsp+1D8h] [rbp-370h]
  __int128 v324; // [rsp+1E0h] [rbp-368h] BYREF
  __int64 v325; // [rsp+1F0h] [rbp-358h]
  int v326; // [rsp+1F8h] [rbp-350h]
  int v327; // [rsp+1FCh] [rbp-34Ch]
  int v328; // [rsp+200h] [rbp-348h]
  int v329; // [rsp+204h] [rbp-344h]
  int v330; // [rsp+208h] [rbp-340h]
  __int128 v331; // [rsp+210h] [rbp-338h] BYREF
  __int128 v332; // [rsp+220h] [rbp-328h] BYREF
  __int64 v333; // [rsp+230h] [rbp-318h]
  __int128 v334; // [rsp+238h] [rbp-310h]
  __m256i v335; // [rsp+248h] [rbp-300h]
  _DWORD v336[2]; // [rsp+268h] [rbp-2E0h] BYREF
  __int128 v337; // [rsp+270h] [rbp-2D8h]
  __int128 v338; // [rsp+280h] [rbp-2C8h]
  __int64 v339; // [rsp+290h] [rbp-2B8h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+2B8h] [rbp-290h] BYREF
  HANDLE v341; // [rsp+2E8h] [rbp-260h]
  HANDLE v342; // [rsp+2F0h] [rbp-258h]
  HANDLE v343; // [rsp+2F8h] [rbp-250h]
  void **v344; // [rsp+300h] [rbp-248h]
  HANDLE v345; // [rsp+308h] [rbp-240h] BYREF
  int v346; // [rsp+310h] [rbp-238h]
  __int128 v347; // [rsp+318h] [rbp-230h]
  struct _KAPC_STATE ApcState; // [rsp+328h] [rbp-220h] BYREF
  _OWORD P[2]; // [rsp+358h] [rbp-1F0h] BYREF
  __int64 v350; // [rsp+378h] [rbp-1D0h]
  _OWORD v351[9]; // [rsp+380h] [rbp-1C8h] BYREF
  char v352[160]; // [rsp+410h] [rbp-138h] BYREF
  char pszDest[16]; // [rsp+4B0h] [rbp-98h] BYREF
  __int128 v354; // [rsp+4C0h] [rbp-88h]
  __int128 v355; // [rsp+4D0h] [rbp-78h]
  __int128 v356; // [rsp+4E0h] [rbp-68h]
  char v357; // [rsp+4F0h] [rbp-58h]

  v4 = ProcessInformationLength;
  v5 = (__int64)ProcessInformation;
  Alignment = ProcessInformationClass;
  v294 = (__int64)ProcessInformation;
  v273 = ProcessInformationLength;
  v7 = 0;
  Object = 0LL;
  v301 = 0LL;
  v272 = 0;
  v275 = 0;
  Size = 0LL;
  v309 = 0LL;
  v319 = 0LL;
  v286[0] = 0;
  v347 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v269 = CurrentThread;
  v9 = CurrentThread->$6A88714AB977AAA8032D9F5E2A96BA31::gap0[10];
  if ( v9 )
  {
    switch ( ProcessInformationClass )
    {
      case ProcessBasePriority:
        v10 = 4;
        break;
      case ProcessEnableAlignmentFaultFixup:
        v10 = 1;
        break;
      case ProcessForegroundInformation:
        v10 = 1;
        break;
      case ProcessPriorityClass:
        v10 = 1;
        break;
      case ProcessAffinityMask:
        v10 = 8;
        break;
      case ProcessIoPriority:
        v10 = 4;
        break;
      case ProcessPagePriority:
        v10 = 4;
        break;
      case ProcessTlsInformation:
        v10 = 8;
        break;
      case ProcessExceptionPort:
        v10 = 8;
        break;
      case ProcessInstrumentationCallback:
        v10 = 8;
        break;
      case ProcessThreadStackAllocation:
        v10 = 8;
        break;
      case ProcessFiberShadowStackAllocation:
        v10 = 8;
        break;
      case ProcessFreeFiberShadowStackAllocation:
        v10 = 8;
        break;
      case ProcessAffinityUpdateMode:
        v10 = 4;
        break;
      case ProcessMemoryAllocationMode:
        v10 = 4;
        break;
      case ProcessConsoleHostProcess:
        v10 = 8;
        break;
      case ProcessDynamicFunctionTableInformation:
        v10 = 8;
        break;
      case ProcessRevokeFileHandles:
        v10 = 8;
        break;
      case ProcessMemoryExhaustion:
        v10 = 8;
        break;
      case ProcessCommitReleaseInformation:
        v10 = 8;
        break;
      case ProcessInPrivate:
        v10 = 1;
        break;
      case ProcessHighGraphicsPriorityInformation:
        v10 = 1;
        break;
      case ProcessManageWritesToExecutableMemory:
        v10 = 8;
        break;
      case ProcessDebugAuthInformation:
        v10 = 1;
        break;
      case ProcessSystemResourceManagement:
        v10 = 4;
        break;
      case ProcessLoaderDetour:
        v10 = 4;
        break;
      case ProcessCombineSecurityDomainsInformation:
        v10 = 8;
        break;
      case ProcessEnableReadWriteVmLogging:
        v10 = 1;
        break;
      case ProcessAltSystemCallInformation:
        v10 = 1;
        break;
      case ProcessDynamicEHContinuationTargets:
        v10 = 8;
        break;
      default:
        v10 = 4;
        if ( ProcessInformationClass == ProcessDynamicEnforcedCetCompatibleRanges )
          v10 = 8;
        break;
    }
    if ( ProcessInformationLength )
    {
      if ( ((v10 - 1) & (unsigned int)ProcessInformation) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)ProcessInformation + ProcessInformationLength > 0x7FFFFFFF0000LL
        || (char *)ProcessInformation + ProcessInformationLength < ProcessInformation )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
      CurrentThread = v269;
    }
  }
  switch ( ProcessInformationClass )
  {
    case ProcessQuotaLimits:
      return PspSetQuotaLimits(ProcessHandle);
    case ProcessBasePriority:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v326 = *(_DWORD *)ProcessInformation;
      v17 = v326;
      if ( v326 < 0 )
        v17 = v326 & 0x7FFFFFFF;
      v18 = v326 < 0 ? 2 : 0;
      if ( (unsigned int)(v17 - 1) > 0x1E )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v19 = Object;
      if ( v17 > *((char *)Object + 640)
        && !(unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                               SeIncreaseBasePriorityPrivilege,
                               ProcessHandle,
                               512LL,
                               v9) )
      {
        ObfDereferenceObjectWithTag(v19, 0x79517350u);
        return -1073741727;
      }
      KeSetPriorityAndQuantumProcess((__int64)v19, v17, 0, 0, 0);
      MmSetMemoryPriorityProcess((__int64)v19, v18);
      ObfDereferenceObjectWithTag(v19, 0x79517350u);
      return 0;
    case ProcessRaisePriority:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v24 = *(_DWORD *)ProcessInformation;
      v327 = *(_DWORD *)ProcessInformation;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      v25 = result;
      if ( result >= 0 )
      {
        v26 = (struct _EX_RUNDOWN_REF *)Object;
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 139) )
        {
          for ( i = PsGetNextProcessThread((__int64)v26, 0LL); i; i = PsGetNextProcessThread((__int64)v26, i) )
            KeBoostPriorityThread((__int64)i, v24, v28, v29);
          ExReleaseRundownProtection_0(v26 + 139);
          ObfDereferenceObjectWithTag(v26, 0x79517350u);
          return v25;
        }
        else
        {
          ObfDereferenceObjectWithTag(v26, 0x79517350u);
          return -1073741558;
        }
      }
      return result;
    case ProcessExceptionPort:
      if ( ProcessInformationLength == 8 )
      {
        v31 = 0;
        v296 = 0;
        Handle = *(HANDLE *)ProcessInformation;
        v318 = Handle;
      }
      else
      {
        if ( ProcessInformationLength != 16 )
          return -1073741820;
        Handle = *(HANDLE *)ProcessInformation;
        v318 = Handle;
        v296 = *((_DWORD *)ProcessInformation + 2);
        v31 = v296;
        if ( (v296 & 0xFFFFFFF8) != 0 )
          return -1073741811;
      }
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
        return -1073741727;
      v292 = 0LL;
      result = ObReferenceObjectByHandle(Handle, 0, LpcPortObjectType, v9, &v292, 0LL);
      DmaAdapter = (PADAPTER_OBJECT)v292;
      if ( result >= 0 )
      {
        v32 = ObReferenceObjectByHandleWithTag(
                ProcessHandle,
                0x800u,
                (POBJECT_TYPE)PsProcessType,
                v9,
                0x79517350u,
                &Object,
                0LL);
        if ( v32 < 0 )
        {
          HalPutDmaAdapter((PADAPTER_OBJECT)v292);
          return v32;
        }
        v33 = (struct _EX_RUNDOWN_REF *)((unsigned __int64)v292 | v31);
        RunRef = v33;
        v34 = (signed __int64 *)((char *)Object + 1200);
        _m_prefetchw((char *)Object + 1200);
        v35 = *v34;
        while ( 1 )
        {
          Handle = (HANDLE)v35;
          if ( (_DWORD)v4 == 16 )
          {
            *(_DWORD *)(v5 + 8) = v35 & 7;
          }
          else if ( (v35 & 7) != 0 )
          {
            HalPutDmaAdapter(DmaAdapter);
LABEL_133:
            v13 = -1073741811;
            goto LABEL_142;
          }
          v36 = _InterlockedCompareExchange64((volatile signed __int64 *)Object + 150, (signed __int64)v33, v35);
          v165 = v35 == v36;
          v35 = v36;
          if ( v165 )
          {
            if ( v36 )
            {
              v337 = 0LL;
              v338 = 0LL;
              v37 = (struct _DMA_ADAPTER *)(v36 & 0xFFFFFFFFFFFFFFF8uLL);
              v336[0] = 3145736;
              v336[1] = 13;
              v339 = *((_QWORD *)Object + 136);
              while ( 1 )
              {
                v38 = LpcRequestPort((__int64)v37, (__int64)v336);
                if ( v38 != -1073741801 && v38 != -1073741670 )
                  break;
                KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&PspShortTime);
              }
              PspLockUnlockProcessExclusive((__int64)Object, (__int64)v269);
              HalPutDmaAdapter(v37);
            }
            v13 = 0;
            goto LABEL_142;
          }
        }
      }
      return result;
    case ProcessAccessToken:
      if ( ProcessInformationLength != 16 )
        return -1073741820;
      v341 = *(HANDLE *)ProcessInformation;
      return PspAssignPrimaryToken(CurrentThread, v9, ProcessHandle);
    case ProcessLdtInformation:
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x220u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
        goto LABEL_150;
      return result;
    case ProcessLdtSize:
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x220u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
        goto LABEL_150;
      return result;
    case ProcessDefaultHardErrorMode:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v30 = *(_DWORD *)ProcessInformation;
      v321 = *(_DWORD *)ProcessInformation;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      PspSetProcessDefaultHardErrorMode((__int64)Object, (__int64)v269, v30);
      goto LABEL_89;
    case ProcessIoPortHandlers:
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
LABEL_150:
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return xKdEnumerateDebuggingDevices();
      }
      return result;
    case ProcessWorkingSetWatch:
    case ProcessWorkingSetWatchEx:
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v12 = (volatile signed __int64 *)Object;
      v13 = PsChargeProcessNonPagedPoolQuota((struct _KPROCESS *)Object, 24616LL);
      if ( v13 < 0 )
        goto LABEL_80;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x6028uLL, 0x73577350u);
      if ( PoolWithTag )
      {
        PsWatchEnabled = 1;
        *(_DWORD *)PoolWithTag = 0;
        PoolWithTag[1] = 0LL;
        KeInitializeGate((__int64)(PoolWithTag + 2));
        if ( !_InterlockedCompareExchange64(v12 + 166, (signed __int64)v15, 0LL) )
        {
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          return 0;
        }
        ExFreePoolWithTag(v15, 0);
        v13 = -1073741752;
        v12 = (volatile signed __int64 *)Object;
      }
      else
      {
        v13 = -1073741801;
      }
      PsReturnProcessNonPagedPoolQuota((ULONG_PTR)v12, 0x6028uLL);
LABEL_80:
      ObfDereferenceObjectWithTag((PVOID)v12, 0x79517350u);
      return v13;
    case ProcessUserModeIOPL:
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
        return -1073741727;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      return -1073741822;
    case ProcessEnableAlignmentFaultFixup:
      if ( ProcessInformationLength != 1 )
        return -1073741820;
      v39 = *(_BYTE *)ProcessInformation;
      v279 = *(_BYTE *)ProcessInformation;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        v40 = (__int64)v269;
        v41 = Object;
        PspLockProcessExclusive((__int64)Object, (__int64)v269);
        if ( v39 )
          v41[382] |= 4u;
        else
          v41[382] &= ~4u;
        v42 = *((_QWORD *)v41 + 176);
        if ( v42 )
        {
          v43 = *(_WORD *)(v42 + 8);
          if ( v43 == 332 || v43 == 452 )
            v39 = 1;
        }
        KeSetAutoAlignmentProcess((__int64)v41, v39);
        PspUnlockProcessExclusive(v44, v40);
        ObfDereferenceObjectWithTag(v41, 0x79517350u);
        return 0;
      }
      return result;
    case ProcessPriorityClass:
      if ( ProcessInformationLength != 2 )
        return -1073741820;
      v20 = *(_WORD *)ProcessInformation;
      v275 = *(_WORD *)ProcessInformation;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        v21 = Object;
        v22 = PspSetProcessPriorityClass(Object, HIBYTE(v275), ProcessHandle, v9);
        if ( v22 >= 0 )
        {
          LOBYTE(v7) = (_BYTE)v20 != 0;
          PsSetProcessPriorityByClass((__int64)v21, v7);
        }
        ObfDereferenceObjectWithTag(v21, 0x79517350u);
        return v22;
      }
      return result;
    case ProcessWx86Information:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v45 = *(_DWORD *)ProcessInformation;
      v328 = *(_DWORD *)ProcessInformation;
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
        return -1073741727;
      v13 = ObReferenceObjectByHandleWithTag(
              ProcessHandle,
              0x200u,
              (POBJECT_TYPE)PsProcessType,
              v9,
              0x79517350u,
              &Object,
              0LL);
      if ( v13 < 0 )
        return v13;
      if ( *((_QWORD *)Object + 280) )
      {
LABEL_169:
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return -1073741790;
      }
      else
      {
        if ( v45 )
          _InterlockedOr((volatile signed __int32 *)Object + 281, 0x1000000u);
        else
          _InterlockedAnd((volatile signed __int32 *)Object + 281, 0xFEFFFFFF);
LABEL_142:
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return v13;
      }
    case ProcessAffinityMask:
      if ( ProcessInformationLength == 8 )
      {
        *(_QWORD *)&v301 = *(_QWORD *)ProcessInformation;
        if ( !(_QWORD)v301 )
          return -1073741811;
      }
      else
      {
        if ( ProcessInformationLength != 16 )
          return -1073741820;
        v301 = *(_OWORD *)ProcessInformation;
        if ( !KeVerifyGroupAffinity((__int64)&v301, 0) )
          return -1073741811;
      }
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v46 = Object;
      LODWORD(v47) = KeQueryGroupMaskProcess((__int64)Object);
      if ( (((_DWORD)v47 - 1) & (unsigned int)v47) != 0 )
        goto LABEL_180;
      if ( (_DWORD)v4 == 8 )
      {
        _BitScanForward((unsigned int *)&v47, v47);
        v272 = v47;
        v48 = v301 & qword_140CFC848[v47];
        v46 = Object;
        if ( v48 != (_QWORD)v301 )
        {
LABEL_180:
          ObfDereferenceObjectWithTag(v46, 0x79517350u);
          return -1073741811;
        }
        WORD4(v301) = v272;
        *(_QWORD *)&v301 = v48;
      }
      v49 = (__int64)v269;
      KeEnterCriticalRegionThread((__int64)v269);
      if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)v46 + 139) )
      {
        PspLockProcessSharedUnsafe((__int64)v46);
        v50 = PspSetProcessAffinitySafe((_DWORD)v46, 0, 0, (unsigned int)&v301, (__int64)v286);
        PspUnlockProcessSharedUnsafe((__int64)v46);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v46 + 139);
        if ( v50 >= 0 )
        {
          if ( v286[0] )
            PspWritePebAffinityInfo(v49, v46);
          _InterlockedOr((volatile signed __int32 *)v46 + 280, 0x200000u);
          v51 = Object;
          KeLeaveCriticalRegionThread(v49);
          ObfDereferenceObjectWithTag(v51, 0x79517350u);
          return v50;
        }
      }
      else
      {
        v50 = -1073741558;
      }
      KeLeaveCriticalRegionThread(v49);
      ObfDereferenceObjectWithTag(v46, 0x79517350u);
      return v50;
    case ProcessPriorityBoost:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v329 = *(_DWORD *)ProcessInformation;
      v52 = v329 != 0;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      v53 = result;
      if ( result < 0 )
        return result;
      v54 = (struct _EX_RUNDOWN_REF *)Object;
      if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 139) )
        goto LABEL_194;
      v55 = (__int64)v269;
      PspLockProcessExclusive((__int64)v54, (__int64)v269);
      KeSetDisableBoostProcess(v54, v52);
      Count = (struct _EX_RUNDOWN_REF *)v54[188].Count;
      if ( Count != &v54[188] )
      {
        do
        {
          KeSetDisableBoostThread(&Count[-157], v52);
          Count = (struct _EX_RUNDOWN_REF *)*v57;
        }
        while ( Count != v58 );
      }
      PspUnlockProcessExclusive((__int64)v54, v55);
      ExReleaseRundownProtection_0(v54 + 139);
      ObfDereferenceObjectWithTag(v54, 0x79517350u);
      return v53;
    case ProcessDeviceMap:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      v59 = *(HANDLE *)ProcessInformation;
      v343 = *(HANDLE *)ProcessInformation;
      if ( RtlIsSandboxedToken(0LL, v9) )
        return -1073741790;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v60 = ObSetProcessDeviceMap(Object, v59, v9);
LABEL_208:
      v61 = v60;
      v62 = Object;
      goto LABEL_209;
    case ProcessSessionInformation:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v63 = *(_DWORD *)ProcessInformation;
      v330 = *(_DWORD *)ProcessInformation;
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
        return -1073741727;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x204u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      if ( v63 != (unsigned int)MmGetSessionId((__int64)Object) )
        v7 = -1073741790;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      return v7;
    case ProcessForegroundInformation:
      if ( ProcessInformationLength != 1 )
        return -1073741820;
      v23 = *(_BYTE *)ProcessInformation;
      v278 = *(_BYTE *)ProcessInformation;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x2000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      LOBYTE(v7) = v23 != 0;
      PsSetProcessPriorityByClass((__int64)Object, v7);
      goto LABEL_89;
    case ProcessBreakOnTermination:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v64 = *(_DWORD *)ProcessInformation;
      v311 = *(_DWORD *)ProcessInformation;
      if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, v9) )
        return -1073741727;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      if ( v64 )
        _InterlockedOr((volatile signed __int32 *)Object + 281, 0x2000u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 281, 0xFFFFDFFF);
      goto LABEL_89;
    case ProcessDebugFlags:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      v13 = result;
      if ( result < 0 )
        return result;
      v297 = *(_DWORD *)v5;
      if ( (v297 & 0xFFFFFFFE) != 0 )
        goto LABEL_133;
      if ( (v297 & 1) != 0 )
        _InterlockedAnd((volatile signed __int32 *)Object + 281, 0xFFFFFFFD);
      else
        _InterlockedOr((volatile signed __int32 *)Object + 281, 2u);
      goto LABEL_142;
    case ProcessHandleTracing:
      v293 = 0LL;
      if ( !ProcessInformationLength )
        goto LABEL_230;
      if ( ((ProcessInformationLength - 4) & 0xFFFFFFFB) != 0 )
        return -1073741820;
      v65 = *(_DWORD *)ProcessInformation;
      LODWORD(v293) = *(_DWORD *)ProcessInformation;
      if ( ProcessInformationLength == 8 )
        HIDWORD(v293) = *((_DWORD *)ProcessInformation + 1);
      else
        HIDWORD(v293) = 0;
      if ( v65 )
        return -1073741811;
LABEL_230:
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v165 = (_DWORD)v4 == 0;
      v66 = Object;
      if ( v165 )
        v67 = 0LL;
      else
        v67 = &v293;
      v68 = PsSetProcessHandleTracingInformation(Object, v67);
      goto LABEL_235;
    case ProcessIoPriority:
      if ( ((ProcessInformationLength - 4) & 0xFFFFFFFB) != 0 )
        return -1073741820;
      if ( ProcessInformationLength == 4 )
      {
        v70 = *(_DWORD *)ProcessInformation;
        v282 = *(_DWORD *)ProcessInformation;
        LOBYTE(v71) = 0;
      }
      else
      {
        v319 = *(_QWORD *)ProcessInformation;
        v70 = v319;
        v71 = HIDWORD(v319);
        v282 = v319;
      }
      if ( v70 >= 4 )
        return -1073741811;
      if ( v70 >= 3
        && !(unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                               SeIncreaseBasePriorityPrivilege,
                               ProcessHandle,
                               512LL,
                               v9) )
      {
        return -1073741727;
      }
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      v72 = result;
      if ( result < 0 )
        return result;
      v73 = (volatile signed __int32 *)Object;
      RunRef = (PEX_RUNDOWN_REF)((char *)Object + 1112);
      if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 139) )
      {
        v74 = (__int64)v269;
        PspLockProcessExclusive((__int64)v73, (__int64)v269);
        v75 = *((_DWORD *)v73 + 281);
        v76 = v282 << 27;
        do
        {
          v77 = v75;
          v75 = _InterlockedCompareExchange(v73 + 281, v76 | v75 & 0xC7FFFFFF, v75);
        }
        while ( v75 != v77 );
        v78 = (char *)Object;
        v79 = (KSPIN_LOCK *)*((_QWORD *)Object + 188);
        if ( v79 != (KSPIN_LOCK *)((char *)Object + 1504) )
        {
          v80 = v282;
          do
          {
            if ( (_BYTE)v71 == 1 && ((*((_DWORD *)v79 + 10) >> 9) & 7) < v80 )
              IoBoostThreadIoPriority(v79 - 157, v80, 0);
            PsSetIoPriorityThread((__int64)(v79 - 157), v80);
            v79 = (KSPIN_LOCK *)*v79;
          }
          while ( v79 != (KSPIN_LOCK *)(v78 + 1504) );
        }
        PspUnlockProcessExclusive((__int64)v78, v74);
        ExReleaseRundownProtection_0(RunRef);
        ObfDereferenceObjectWithTag(v78, 0x79517350u);
        return v72;
      }
      else
      {
LABEL_246:
        ObfDereferenceObjectWithTag((PVOID)v73, 0x79517350u);
        return -1073741558;
      }
    case ProcessExecuteFlags:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      v81 = *(_DWORD *)ProcessInformation;
      CurrentProcess = PsGetCurrentProcess();
      v69 = KeSetExecuteOptions((__int64)CurrentProcess, v81);
      if ( v69 < 0 || (v81 & 3) != 1 )
        return v69;
      MmRemoveExecuteGrants();
      return v69;
    case ProcessTlsInformation:
      memset(P, 0, sizeof(P));
      v350 = 0LL;
      v267 = 0;
      v283 = 0LL;
      v288 = 0LL;
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      if ( v9 != 1 )
        return -1073741823;
      if ( ProcessInformationLength < 0x28 )
        return -1073741820;
      v94 = (ProcessInformationLength - 16) / 0x18uLL;
      if ( (ProcessInformationLength - 16) % 0x18uLL )
        return -1073741820;
      if ( ProcessInformationLength == 40 )
      {
        PoolWithQuotaTag = P;
        v269 = (struct _KTHREAD *)P;
      }
      else
      {
        PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, ProcessInformationLength, 0x736C5450u);
        v269 = (struct _KTHREAD *)PoolWithQuotaTag;
        if ( !PoolWithQuotaTag )
          return -1073741670;
      }
      v320 = PoolWithQuotaTag;
      RunRef = (PEX_RUNDOWN_REF)PoolWithQuotaTag;
      memmove(PoolWithQuotaTag, (const void *)v5, v4);
      if ( *((_DWORD *)PoolWithQuotaTag + 1) < 2u
        && (v96 = *(_DWORD *)PoolWithQuotaTag, (*(_DWORD *)PoolWithQuotaTag & 0xFFFFFFFE) == 0)
        && (v97 = *((unsigned int *)PoolWithQuotaTag + 2), (_DWORD)v97)
        && v94 == v97 )
      {
        v98 = 0;
        v267 = 0;
        v99 = PoolWithQuotaTag + 1;
        do
        {
          if ( *v99 )
            goto LABEL_330;
          v267 = ++v98;
          v99 += 6;
        }
        while ( v98 < (unsigned int)v97 );
        v100 = PsGetCurrentProcess();
        Object = v100;
        v273 = 0;
        if ( (v96 & 1) != 0 )
        {
          v101 = v100[1].AffinityPadding[10];
          if ( !v101 || (v102 = *(_WORD *)(v101 + 8), v102 != 332) && v102 != 452 )
          {
LABEL_330:
            v13 = -1073741811;
            goto LABEL_332;
          }
          v273 = 1;
        }
        v103 = v273 ^ 1;
        Alignment = 4 * v103 + 4;
        v294 = 4 * v103 + 4;
        v284 = v5;
        v267 = 0;
        v13 = 0;
        v268 = 0;
        for ( j = 0LL; ; j = Handle )
        {
          Handle = PsGetNextProcessThread((__int64)Object, j);
          v105 = Handle;
          if ( !Handle || v267 >= *((_DWORD *)PoolWithQuotaTag + 2) )
            break;
          if ( (*((_DWORD *)Handle + 29) & 0x400) == 0 && ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Handle + 159) )
          {
            v106 = v105[30];
            v307 = v106;
            if ( v273 )
            {
              v107 = (char *)(v106 + 8236);
              v288 = v106 + 8236;
              LODWORD(v108) = PtrToUlong((const void *)*(unsigned int *)(v106 + 8236));
              v109 = v108;
              v283 = v108;
            }
            else
            {
              v107 = (char *)(v106 + 88);
              v288 = v106 + 88;
              v109 = *(char **)(v106 + 88);
              v283 = v109;
            }
            if ( v109 )
            {
              if ( *((_DWORD *)PoolWithQuotaTag + 1) == 1 )
              {
                if ( v109 == v107 )
                {
                  v283 = 0LL;
                }
                else
                {
                  v110 = *((unsigned int *)PoolWithQuotaTag + 3);
                  v111 = v294 * v110;
                  if ( v294 * v110 )
                  {
                    if ( ((Alignment - 1) & (unsigned int)v109) != 0 )
                      ExRaiseDatatypeMisalignment();
                    if ( (unsigned __int64)&v109[v111] > 0x7FFFFFFF0000LL || &v109[v111] < v109 )
                    {
                      MEMORY[0x7FFFFFFF0000] = 0;
                      v110 = *((unsigned int *)v320 + 3);
                    }
                  }
                  v112 = (volatile void **)PoolWithQuotaTag + 3 * v267 + 3;
                  ProbeForWrite(*v112, v294 * v110, Alignment);
                  memmove((void *)*v112, v109, v294 * *((unsigned int *)PoolWithQuotaTag + 3));
                  _InterlockedOr(v265, 0);
                  v106 = v307;
                }
                v113 = v267;
                *(_DWORD *)(v284 + 24LL * v267 + 16) |= 1u;
                Ptr = RunRef[3 * v113 + 3].Ptr;
                if ( v273 )
                  *(_DWORD *)(v106 + 8236) = PtrToUlong(Ptr);
                else
                  *(_QWORD *)(v106 + 88) = Ptr;
                v115 = v284 + 24LL * v267;
                *(_QWORD *)(v115 + 32) = *((_QWORD *)Handle + 144);
                *(_QWORD *)(v115 + 24) = v283;
                *(_DWORD *)(v115 + 16) ^= 3u;
                ++v267;
              }
              else
              {
                v116 = 24LL * v267;
                *(_DWORD *)(v116 + v284 + 16) |= 1u;
                Ptr_high = HIDWORD(RunRef[1].Ptr);
                if ( v273 )
                {
                  v118 = (unsigned __int64)&v109[4 * Ptr_high];
                  if ( v118 >= 0x7FFFFFFF0000LL )
                    v118 = 0x7FFFFFFF0000LL;
                  LODWORD(v119) = PtrToUlong((const void *)*(unsigned int *)v118);
                  v120 = v119;
                  v288 = v119;
                  v121 = PtrToUlong(*(const void **)((char *)PoolWithQuotaTag + v116 + 24));
                  v122 = (unsigned __int64)&v283[4 * *((unsigned int *)PoolWithQuotaTag + 3)];
                  if ( v122 >= 0x7FFFFFFF0000LL )
                    v122 = 0x7FFFFFFF0000LL;
                  *(_DWORD *)v122 = v121;
                }
                else
                {
                  v123 = (unsigned __int64)&v109[8 * Ptr_high];
                  if ( v123 >= 0x7FFFFFFF0000LL )
                    v123 = 0x7FFFFFFF0000LL;
                  v120 = *(_QWORD *)v123;
                  v288 = *(_QWORD *)v123;
                  v124 = (unsigned __int64)&v283[8 * *((unsigned int *)PoolWithQuotaTag + 3)];
                  if ( v124 >= 0x7FFFFFFF0000LL )
                    v124 = 0x7FFFFFFF0000LL;
                  *(_QWORD *)v124 = *(_QWORD *)((char *)PoolWithQuotaTag + v116 + 24);
                }
                v125 = 3LL * v267;
                v126 = v284;
                *(_QWORD *)(v284 + 8 * v125 + 24) = v120;
                *(_DWORD *)(v126 + 8 * v125 + 16) ^= 3u;
                ++v267;
              }
            }
            ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Handle + 159);
          }
        }
        if ( Handle )
          PsQuitNextProcessThread(Handle);
      }
      else
      {
        v13 = -1073741820;
      }
LABEL_332:
      if ( PoolWithQuotaTag == P )
        return v13;
      ExFreePoolWithTag(PoolWithQuotaTag, 0);
      return v13;
    case ProcessPagePriority:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v298 = *(_DWORD *)ProcessInformation;
      v83 = v298;
      if ( v298 > (unsigned int)MmGetDefaultPagePriority() || v298 < (unsigned int)MiCreateSystemWsles() )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      v84 = result;
      if ( result < 0 )
        return result;
      v73 = (volatile signed __int32 *)Object;
      v85 = (struct _EX_RUNDOWN_REF *)((char *)Object + 1112);
      if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 139) )
        goto LABEL_246;
      v86 = (__int64)v269;
      PspLockProcessExclusive((__int64)v73, (__int64)v269);
      v87 = v83 << 12;
      v88 = *((_DWORD *)v73 + 280);
      do
      {
        v89 = v88;
        v88 = _InterlockedCompareExchange(v73 + 280, v87 | v88 & 0xFFFF8FFF, v88);
      }
      while ( v88 != v89 );
      v90 = Object;
      v91 = (char *)Object + 1504;
      v92 = (char *)*((_QWORD *)Object + 188);
      if ( v92 != (char *)Object + 1504 )
      {
        v93 = v298;
        do
        {
          PsSetPagePriorityThread((__int64)(v92 - 1256), v93);
          v92 = *(char **)v92;
        }
        while ( v92 != v91 );
      }
      PspUnlockProcessExclusive((__int64)v90, v86);
      ExReleaseRundownProtection_0(v85);
      ObfDereferenceObjectWithTag(v90, 0x79517350u);
      return v84;
    case ProcessInstrumentationCallback:
      memset(&ApcState, 0, sizeof(ApcState));
      if ( ((ProcessInformationLength - 8) & 0xFFFFFFF7) != 0 )
        return -1073741820;
      if ( ProcessInformationLength == 8 )
      {
        *(_QWORD *)&v295 = 0LL;
        v127 = *(_QWORD *)ProcessInformation;
        *((_QWORD *)&v295 + 1) = *(_QWORD *)ProcessInformation;
      }
      else
      {
        v295 = *(_OWORD *)ProcessInformation;
        v127 = *((_QWORD *)&v295 + 1);
      }
      if ( DWORD1(v295) )
        return -1073741811;
      if ( (_DWORD)v295 != DWORD1(v295) )
        return -1073741736;
      if ( v127 != (__int64)(v127 << 16) >> 16 )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v128 = PsGetCurrentProcess();
      v129 = SeSinglePrivilegeCheck(SeDebugPrivilege, v9);
      v54 = (struct _EX_RUNDOWN_REF *)Object;
      if ( !v129 && Object != v128 )
      {
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return -1073741727;
      }
      if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 139) )
      {
LABEL_194:
        ObfDereferenceObjectWithTag(v54, 0x79517350u);
        return -1073741558;
      }
      v130 = v54[176].Count;
      v132 = 0;
      if ( v130 )
      {
        v131 = *(_WORD *)(v130 + 8);
        if ( v131 == 332 || v131 == 452 )
          v132 = 1;
      }
      v133 = v128[1].AffinityPadding[10];
      if ( v132 )
      {
        if ( v133 )
        {
          v137 = *(_WORD *)(v133 + 8);
          if ( v137 == 332 || v137 == 452 )
          {
            KeStackAttachProcess((PRKPROCESS)v54, &ApcState);
            if ( v127 < MmGetMaximumUserAddress() && (unsigned int)MmValidateUserCallTarget(v127, 1LL) )
            {
              v138 = 0LL;
              v139 = (__int64 *)v54[176].Count;
              if ( v139 )
                v138 = *v139;
              *(_DWORD *)(v138 + 1160) = DWORD2(v295);
              KeUnstackDetachProcess(&ApcState);
            }
            else
            {
              v7 = -1073741811;
              KeUnstackDetachProcess(&ApcState);
            }
LABEL_377:
            ExReleaseRundownProtection_0(v54 + 139);
LABEL_378:
            ObfDereferenceObjectWithTag(v54, 0x79517350u);
            return v7;
          }
        }
      }
      else if ( !v133 || (v134 = *(_WORD *)(v133 + 8), v134 != 332) && v134 != 452 )
      {
        KeStackAttachProcess((PRKPROCESS)v54, &ApcState);
        if ( !(unsigned int)MmValidateUserCallTarget(v127, 0LL) )
          v7 = -1073741811;
        KeUnstackDetachProcess(&ApcState);
        if ( (v7 & 0x80000000) == 0 )
        {
          v135 = (__int64)v269;
          PspLockProcessExclusive((__int64)v54, (__int64)v269);
          v54[123].Count = v127;
          v136 = (volatile signed __int32 *)v54[188].Count;
          if ( v136 != (volatile signed __int32 *)&v54[188] )
          {
            while ( 1 )
            {
              if ( v127 )
                _interlockedbittestandset(v136 - 314, 0x19u);
              else
                _interlockedbittestandreset(v136 - 314, 0x19u);
              v136 = *(volatile signed __int32 **)v136;
              if ( v136 == (volatile signed __int32 *)&v54[188] )
                break;
              v127 = *((_QWORD *)&v295 + 1);
            }
            v54 = (struct _EX_RUNDOWN_REF *)Object;
          }
          PspUnlockProcessExclusive((__int64)v54, v135);
        }
        goto LABEL_377;
      }
      v7 = -1073741637;
      goto LABEL_377;
    case ProcessThreadStackAllocation:
      v331 = 0LL;
      v332 = 0LL;
      v333 = 0LL;
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      v140 = 0LL;
      if ( ProcessInformationLength == 40 )
      {
        if ( v9 )
        {
          v331 = *(_OWORD *)ProcessInformation;
          v332 = *((_OWORD *)ProcessInformation + 1);
          v333 = *((_QWORD *)ProcessInformation + 4);
          v140 = (char *)ProcessInformation + 32;
          v5 = (__int64)&v331;
        }
        v141 = *(_DWORD *)v5;
        if ( *(_DWORD *)v5 > 0x40u || *(_DWORD *)(v5 + 4) | *(_DWORD *)(v5 + 8) | *(_DWORD *)(v5 + 12) )
          return -1073741811;
        v5 += 16LL;
      }
      else
      {
        if ( ProcessInformationLength != 24 )
          return -1073741820;
        v141 = 0;
        if ( v9 )
        {
          v332 = *(_OWORD *)ProcessInformation;
          v140 = (char *)ProcessInformation + 16;
          v5 = (__int64)&v332;
        }
      }
      if ( !*(_QWORD *)v5 )
        return -1073741811;
      v322 = *(_QWORD *)v5;
      *(_QWORD *)(v5 + 16) = 0LL;
      result = MmAllocateUserStack((int)v5 + 16, *(_QWORD *)(v5 + 8), (int)&v322, v141, 0);
      if ( result >= 0 && v9 )
        *(_QWORD *)v140 = *(_QWORD *)(v5 + 16);
      return result;
    case ProcessAffinityUpdateMode:
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v299 = *(_DWORD *)ProcessInformation;
      if ( (v299 & 0xFFFFFFFC) != 0 )
        return -1073741811;
      return PspSetProcessAffinityUpdateMode(CurrentThread, &v299);
    case ProcessMemoryAllocationMode:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v312 = *(_DWORD *)ProcessInformation;
      v142 = v312;
      if ( (v312 & 0xFFFFFFFE) != 0 )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      if ( (v142 & 1) != 0 )
        _InterlockedOr((volatile signed __int32 *)Object + 281, 0x200000u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 281, 0xFFDFFFFF);
      goto LABEL_89;
    case ProcessTokenVirtualizationEnabled:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v143 = *(_DWORD *)ProcessInformation;
      v313 = *(_DWORD *)ProcessInformation;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v144 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken((PEPROCESS)Object);
      SeSetVirtualizationToken(v144, v143);
      HalPutDmaAdapter(v144);
      goto LABEL_89;
    case ProcessConsoleHostProcess:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      if ( ProcessHandle != (HANDLE)-1LL || (*(_QWORD *)ProcessInformation & 3) != 1 )
        return -1073741811;
      v145 = *(_QWORD *)ProcessInformation;
      PsGetCurrentProcess()[1].AffinityPadding[3] = v145;
      return 0;
    case ProcessMitigationPolicy:
      v270 = 0;
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      v271 = *(HANDLE *)ProcessInformation;
      if ( ProcessHandle != (HANDLE)-1LL && (_DWORD)v271 != 2 )
        return -1073741811;
      break;
    case ProcessDynamicFunctionTableInformation:
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      if ( ProcessInformationLength != 16 )
        return -1073741820;
      v334 = *(_OWORD *)ProcessInformation;
      if ( BYTE8(v334) )
        return RtlRemoveDynamicFunctionTable(v334);
      else
        return RtlInsertDynamicFunctionTable(v334);
    case ProcessHandleCheckingMode:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v314 = *(_DWORD *)ProcessInformation;
      v210 = v314;
      if ( (v314 & 0xFFFFFFFE) != 0 )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        v211 = Object;
        v212 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
        if ( v212 )
        {
          ExEnableHandleExceptions(v212, v210 & 1);
          ObDereferenceProcessHandleTable(v211);
        }
        else
        {
          v7 = -1073741558;
        }
        ObfDereferenceObjectWithTag(v211, 0x79517350u);
        return v7;
      }
      return result;
    case ProcessRevokeFileHandles:
      *(_OWORD *)Src = 0LL;
      v213 = 0LL;
      v306 = 0LL;
      if ( v9 != 1 )
        goto LABEL_790;
      if ( (unsigned __int64)ProcessInformation >= 0x7FFFFFFF0000LL )
        v5 = 0x7FFFFFFF0000LL;
      v214 = *(_DWORD *)v5;
      LODWORD(Src[0]) = v214;
      v215 = *(void **)(v5 + 8);
      Src[1] = v215;
      if ( !(_WORD)v214 )
        return -1073741811;
      if ( ((unsigned __int8)v215 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v216 = (unsigned __int64)v215 + (unsigned __int16)v214;
      if ( v216 > 0x7FFFFFFF0000LL || v216 < (unsigned __int64)v215 )
        MEMORY[0x7FFFFFFF0000] = 0;
      v217 = ExAllocatePoolWithTag(NonPagedPoolNx, LOWORD(Src[0]), 0x6E497350u);
      v213 = v217;
      v306 = v217;
      if ( !v217 )
        return -1073741670;
      memmove(v217, Src[1], LOWORD(Src[0]));
      Src[1] = v213;
      v5 = (__int64)Src;
      v344 = Src;
LABEL_790:
      v13 = ObReferenceObjectByHandleWithTag(
              ProcessHandle,
              0x2000u,
              (POBJECT_TYPE)PsProcessType,
              v9,
              0x79517350u,
              &Object,
              0LL);
      if ( v13 >= 0 )
      {
        v218 = Object;
        v219 = IoRevokeHandlesForProcess(v5, Object);
        if ( v213 )
          ExFreePoolWithTag(v213, 0);
        ObfDereferenceObjectWithTag(v218, 0x79517350u);
        return v219;
      }
      else
      {
        if ( !v213 )
          return v13;
        ExFreePoolWithTag(v213, 0);
        return v13;
      }
    case ProcessWorkingSetControl:
      return MmProcessWorkingSetControl((ULONG_PTR)ProcessHandle);
    case ProcessCheckStackExtentsMode:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v220 = *(_DWORD *)v5 != 0;
      v323 = *(_DWORD *)v5 != 0;
      v221 = PsGetCurrentProcess();
      v146 = (char *)Object;
      if ( v221 == Object )
        goto LABEL_169;
      if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, v9) )
      {
        ObfDereferenceObjectWithTag(v146, 0x79517350u);
        return -1073741727;
      }
      v13 = 0;
      KeSetCheckStackExtentsProcess(v146, v220);
      if ( !v220 && (*((_DWORD *)v146 + 280) & 0x20000) != 0 )
      {
        _InterlockedAnd((volatile signed __int32 *)v146 + 280, 0xFFFDFFFF);
        v146 = (char *)Object;
      }
      goto LABEL_765;
    case ProcessMemoryExhaustion:
      if ( ProcessInformationLength != 16 )
        return -1073741820;
      v347 = *(_OWORD *)ProcessInformation;
      if ( (_WORD)v347 != 1 || DWORD1(v347) )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      if ( *((_QWORD *)&v347 + 1) )
        _InterlockedOr((volatile signed __int32 *)Object + 281, 0x100u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 281, 0xFFFFFEFF);
      goto LABEL_89;
    case ProcessFaultInformation:
      v308 = 0LL;
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v308 = *(_QWORD *)v5;
      v60 = PsSetProcessFaultInformation(Object, &v308);
      goto LABEL_208;
    case ProcessCommitReleaseInformation:
      if ( ProcessInformationLength != 32 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x2001u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v335 = *(__m256i *)v5;
      if ( v335.m256i_i32[0] != 3 )
      {
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return -1073741735;
      }
      if ( (v335.m256i_i32[1] & 0xFFFFFFF8) != 0
        || *(_OWORD *)&v335.m256i_u64[1] != 0LL
        || ((((unsigned __int32)v335.m256i_i32[1] >> 1) & 1) != 0 || (v335.m256i_i8[4] & 4) != 0)
        && (v335.m256i_i8[4] & 1) == 0 )
      {
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return -1073741811;
      }
      if ( (((unsigned __int32)v335.m256i_i32[1] >> 1) & 1) != 0 || (v335.m256i_i8[4] & 4) != 0 )
      {
        v66 = Object;
        v68 = MmReleaseCommitForMemResetPages(
                (volatile signed __int32 *)Object,
                ((unsigned __int32)v335.m256i_i32[1] >> 2) & 1);
      }
      else
      {
        v66 = Object;
        v68 = MmSetCommitReleaseEligibility((__int64)Object, v335.m256i_i8[4] & 1);
      }
LABEL_235:
      v69 = v68;
      ObfDereferenceObjectWithTag(v66, 0x79517350u);
      return v69;
    case ProcessDefaultCpuSetsInformation:
    case ProcessAllowedCpuSetsInformation:
      if ( (ProcessInformationLength & 7) != 0 || ProcessInformationLength > 0xA0 )
        return -1073741820;
      memmove(v352, ProcessInformation, ProcessInformationLength);
      v222 = (unsigned int)v4 >> 3;
      if ( Alignment == 67 )
      {
        result = ExCpuSetResourceManagerAccessCheck(v9);
        if ( result < 0 )
          return result;
      }
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x2000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v60 = KeSetCpuSetsProcess((__int64)Object, v222, v352);
      goto LABEL_208;
    case ProcessSubsystemProcess:
      if ( (PsGetCurrentProcess()[1].IdealProcessorPadding[10] & 0x100) == 0 )
        return -1073741727;
      v300 = 0LL;
      result = ObReferenceObjectByHandle(ProcessHandle, 0x200u, (POBJECT_TYPE)PsProcessType, v9, &v300, 0LL);
      v224 = result;
      if ( result >= 0 )
      {
        _InterlockedOr((volatile signed __int32 *)v300 + 543, 0x40u);
        HalPutDmaAdapter((PADAPTER_OBJECT)v300);
        return v224;
      }
      return result;
    case ProcessInPrivate:
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      _InterlockedOr((volatile signed __int32 *)Object + 280, 0x80000000);
      goto LABEL_89;
    case ProcessRaiseUMExceptionOnInvalidHandleClose:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v225 = *(_DWORD *)ProcessInformation;
      v316 = *(_DWORD *)ProcessInformation;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v54 = (struct _EX_RUNDOWN_REF *)Object;
      v226 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
      if ( v226 )
      {
        ExEnableRaiseUMExceptionOnInvalidHandleClose(v226, v225);
        ObDereferenceProcessHandleTable(v54);
      }
      else
      {
        v7 = -1073741558;
      }
      goto LABEL_378;
    case ProcessIumChallengeResponse:
      return PsIumEnableOnDemandDebugWithResponse(ProcessHandle, ProcessInformation, ProcessInformationLength);
    case ProcessHighGraphicsPriorityInformation:
      if ( ProcessInformationLength != 1 )
        return -1073741820;
      v227 = *(_BYTE *)ProcessInformation;
      v281 = *(_BYTE *)ProcessInformation;
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
        return -1073741727;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x2000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      if ( v227 )
        _InterlockedOr((volatile signed __int32 *)Object + 543, 0x200u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 543, 0xFFFFFDFF);
      goto LABEL_89;
    case ProcessPowerThrottlingState:
      v345 = 0LL;
      v346 = 0;
      if ( ProcessInformationLength != 12 )
        return -1073741820;
      v345 = *(HANDLE *)ProcessInformation;
      v228 = *((_DWORD *)ProcessInformation + 2);
      v346 = v228;
      if ( (_DWORD)v345 != 1 || (HIDWORD(v345) & 0xFFFFFFFC) != 0 || (~HIDWORD(v345) & v228) != 0 )
        return -1073741811;
      ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
      if ( !ExtensionTable )
        return -1073741822;
      v230 = ObReferenceObjectByHandleWithTag(
               ProcessHandle,
               0x2000u,
               (POBJECT_TYPE)PsProcessType,
               v9,
               0x79517350u,
               &Object,
               0LL);
      if ( v230 >= 0 )
      {
        v230 = (*(__int64 (__fastcall **)(PVOID, HANDLE *))(ExtensionTable + 8))(Object, &v345);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
      }
      ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
      return v230;
    case ProcessDisableSystemAllowedCpuSets:
      result = ExCpuSetResourceManagerAccessCheck(v9);
      if ( result < 0 )
        return result;
      if ( (_DWORD)v4 != 1 )
        return -1073741820;
      v223 = *(_BYTE *)v5;
      v280 = *(_BYTE *)v5;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x2000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      if ( v223 )
        _InterlockedOr((volatile signed __int32 *)Object + 280, 0x8000000u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 280, 0xF7FFFFFF);
      KeRecomputeCpuSetAffinityProcess((__int64)Object);
      goto LABEL_89;
    case ProcessEnergyTrackingState:
      if ( ProcessInformationLength < 8 )
        return -1073741820;
      memset(v351, 0, sizeof(v351));
      v231 = 144;
      if ( ProcessInformationLength < 0x90 )
        v231 = ProcessInformationLength;
      memmove(v351, ProcessInformation, v231);
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v232 = Object;
      v233 = PoSetProcessEnergyTrackingState(Object, v351);
      v16 = v232;
      if ( v233 >= 0 )
        goto LABEL_90;
      ObfDereferenceObjectWithTag(v232, 0x79517350u);
      return v233;
    case ProcessManageWritesToExecutableMemory:
      return -1073741637;
    case ProcessTelemetryCoverage:
      if ( ProcessInformationLength != 24 )
        return -1073741820;
      *(_OWORD *)pszDest = 0LL;
      v354 = 0LL;
      v355 = 0LL;
      v356 = 0LL;
      v357 = 0;
      v234 = *(_OWORD *)ProcessInformation;
      v324 = v234;
      v325 = *((_QWORD *)ProcessInformation + 2);
      if ( (unsigned __int64)(v234 + 65) > 0x7FFFFFFF0000LL || (__int64)v234 + 65 < (unsigned __int64)v234 )
        MEMORY[0x7FFFFFFF0000] = 0;
      RtlStringCbCopyA(pszDest, 0x41uLL, (NTSTRSAFE_PCSTR)v234);
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x220u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      *(_QWORD *)&v324 = pszDest;
      v357 = 0;
      v13 = EtwSetProcessTelemetryCoverage(Object, &v324);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_DWORD *)(v5 + 12) = HIDWORD(v324);
      *(_DWORD *)(v5 + 16) = v325;
      return v13;
    case ProcessEnableReadWriteVmLogging:
    case ProcessEnableLogging:
      if ( ProcessInformationClass == ProcessEnableReadWriteVmLogging && !ProcessInformationLength
        || ProcessInformationClass == ProcessEnableLogging && ProcessInformationLength < 4 )
      {
        return -1073741820;
      }
      if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, v9) && !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
        return -1073741727;
      v276 = 0;
      if ( Alignment == 87 )
        v235 = (*(_BYTE *)v5 & 1 ^ *(_BYTE *)v5) & 2 ^ *(_BYTE *)v5 & 1;
      else
        v235 = *(_DWORD *)v5;
      v276 = v235;
      if ( (v235 & 0xFFFFFFF0) != 0 )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x2000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v236 = (volatile signed __int32 *)Object;
      _InterlockedAnd((volatile signed __int32 *)Object + 543, 0xFFE7FFFF);
      v237 = (((v276 >> 2) & 1) << 19) | 0x100000;
      if ( (v276 & 8) == 0 )
        v237 = ((v276 >> 2) & 1) << 19;
      _InterlockedOr(v236 + 543, v237);
      v238 = (volatile signed __int32 *)Object;
      _InterlockedAnd((volatile signed __int32 *)Object + 280, 0xFCFFFFFF);
      v239 = ((v276 & 1) << 24) | 0x2000000;
      if ( (v276 & 2) == 0 )
        v239 = (v276 & 1) << 24;
      _InterlockedOr(v238 + 280, v239);
      goto LABEL_89;
    case ProcessDebugAuthInformation:
      return SeCodeIntegritySetInformationProcess(
               ProcessHandle,
               (unsigned int)ProcessInformationClass,
               ProcessInformation,
               ProcessInformationLength);
    case ProcessSystemResourceManagement:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v317 = *(_DWORD *)ProcessInformation;
      v240 = v317;
      if ( (v317 & 0xFFFFFFFE) != 0 )
        return -1073741811;
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
        return -1073741727;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x2000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      PspSetProcessForegroundBackgroundRequest((__int64)Object, v240 & 1, 1);
LABEL_89:
      v16 = Object;
LABEL_90:
      ObfDereferenceObjectWithTag(v16, 0x79517350u);
      return 0;
    case ProcessLoaderDetour:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v241 = *(_DWORD *)ProcessInformation;
      v315 = *(_DWORD *)ProcessInformation;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x2000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      v13 = result;
      if ( result < 0 )
        return result;
      v242 = PsGetCurrentProcess();
      v146 = (char *)Object;
      if ( Object != v242 || !v241 )
      {
        v13 = -1073741811;
        goto LABEL_765;
      }
      v243 = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
      if ( !v243 )
        goto LABEL_765;
      (*(void (__fastcall **)(char *, _QWORD))(v243 + 40))(v146, v241);
      ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
      ObfDereferenceObjectWithTag(v146, 0x79517350u);
      return v13;
    case ProcessCombineSecurityDomainsInformation:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      v244 = *(HANDLE *)ProcessInformation;
      v342 = *(HANDLE *)ProcessInformation;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x2000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v61 = ObReferenceObjectByHandleWithTag(v244, 0x1000u, (POBJECT_TYPE)PsProcessType, v9, 0x79517350u, &v309, 0LL);
      v62 = Object;
      if ( v61 < 0 )
      {
LABEL_209:
        ObfDereferenceObjectWithTag(v62, 0x79517350u);
        return v61;
      }
      else
      {
        v245 = PspCombineSecurityDomains(Object, (struct _KPROCESS *)v309);
        ObfDereferenceObjectWithTag(v309, 0x79517350u);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return v245;
      }
    case ProcessLeapSecondInformation:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      Size = *(_QWORD *)ProcessInformation;
      if ( (Size & 0xFFFFFFFE) != 0 || ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      v246 = PsGetCurrentProcess();
      v247 = v246[1].AffinityPadding[4];
      if ( !v247 )
        return -1073741790;
      v248 = 0LL;
      v249 = (__int64 *)v246[1].AffinityPadding[10];
      if ( v249 )
        v248 = *v249;
      v250 = Size & 1;
      v251 = *(_DWORD *)(v247 + 1984);
      if ( (Size & 1) != 0 )
        v252 = v251 | 1;
      else
        v252 = v251 & 0xFFFFFFFE;
      *(_DWORD *)(v247 + 1984) = v252;
      if ( v248 )
      {
        v253 = *(_DWORD *)(v248 + 1140);
        if ( v250 )
          v254 = v253 | 1;
        else
          v254 = v253 & 0xFFFFFFFE;
        *(_DWORD *)(v248 + 1140) = v254;
      }
      return v7;
    case ProcessFiberShadowStackAllocation:
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      if ( v9 != 1 )
        return -1073741823;
      if ( ProcessInformationLength != 32 )
        return -1073741820;
      if ( !KeIsUserCetAllowed() || (KeGetCurrentThread()->MiscFlags & 0x100000) == 0 )
        return -1073741637;
      return PspSetupUserFiberShadowStack(
               *(_QWORD *)v5,
               *(_QWORD *)(v5 + 8),
               (unsigned int)*(_OWORD *)(v5 + 16),
               v5 + 24);
    case ProcessFreeFiberShadowStackAllocation:
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      if ( v9 != 1 )
        return -1073741823;
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      if ( KeIsUserCetAllowed() && (KeGetCurrentThread()->MiscFlags & 0x100000) != 0 )
        return PspFreeUserFiberShadowStack(*(PVOID *)v5);
      return -1073741637;
    case ProcessAltSystemCallInformation:
      if ( ProcessInformationLength != 1 )
        return -1073741820;
      if ( !*(_BYTE *)ProcessInformation )
        return -1073741811;
      if ( v9 )
        return -1073741790;
      v305 = 0LL;
      result = ObReferenceObjectByHandle(ProcessHandle, 0xBEAu, (POBJECT_TYPE)PsProcessType, 0, &v305, 0LL);
      if ( result >= 0 )
      {
        v255 = PspEnableAltSystemCallHandling(v305);
        HalPutDmaAdapter((PADAPTER_OBJECT)v305);
        return v255;
      }
      return result;
    case ProcessDynamicEHContinuationTargets:
      v256 = 0LL;
      if ( ProcessInformationLength != 16 )
        return -1073741820;
      *(_OWORD *)Address = *(_OWORD *)ProcessInformation;
      v257 = 16 * LOWORD(Address[0]);
      if ( !v257 )
        return -1073741811;
      v258 = (const void *)Address[1];
      if ( !Address[1] )
        return -1073741811;
      Size = 16 * (unsigned int)LOWORD(Address[0]);
      ProbeForWrite(Address[1], v257, 8u);
      if ( WORD1(Address[0]) || HIDWORD(Address[0]) )
        return -1073741811;
      if ( v9 != 1 )
        return -1073741790;
      v290 = 0LL;
      result = ObReferenceObjectByHandle(ProcessHandle, 0x200u, (POBJECT_TYPE)PsProcessType, 1, &v290, 0LL);
      v259 = (_KPROCESS *)v290;
      Object = v290;
      if ( result < 0 )
        return result;
      if ( v259 == PsGetCurrentProcess() && (HIDWORD(v259[2].ReadyListHead.Blink) & 0x40000000) != 0 )
      {
        v13 = -1073741790;
      }
      else if ( (HIDWORD(v259[2].ReadyListHead.Blink) & 0x4000) != 0 )
      {
        Pool2 = (_DWORD *)ExAllocatePool2(257LL, Size, 1313359172LL);
        v256 = Pool2;
        v290 = Pool2;
        if ( Pool2 )
        {
          memmove(Pool2, v258, Size);
          v286[1] = 0;
          v13 = PspProcessDynamicEHContinuationTargets((ULONG_PTR)v259);
          v268 = v13;
          v272 = 0;
        }
        else
        {
          v13 = -1073741801;
        }
      }
      else
      {
        v13 = -1073741637;
      }
      goto LABEL_944;
    case ProcessDynamicEnforcedCetCompatibleRanges:
      v256 = 0LL;
      if ( ProcessInformationLength != 16 )
        return -1073741820;
      *(_OWORD *)v304 = *(_OWORD *)ProcessInformation;
      v261 = 24 * LOWORD(v304[0]);
      if ( !v261 )
        return -1073741811;
      v262 = (const void *)v304[1];
      if ( !v304[1] )
        return -1073741811;
      Size = v261;
      ProbeForWrite(v304[1], v261, 8u);
      if ( WORD1(v304[0]) || HIDWORD(v304[0]) )
        return -1073741811;
      if ( v9 != 1 )
        return -1073741790;
      v291 = 0LL;
      result = ObReferenceObjectByHandle(ProcessHandle, 0x200u, (POBJECT_TYPE)PsProcessType, 1, &v291, 0LL);
      v263 = (struct _KPROCESS *)v291;
      Object = v291;
      if ( result < 0 )
        return result;
      if ( v263 == PsGetCurrentProcess() && (HIDWORD(v263[2].ReadyListHead.Blink) & 0x40000000) != 0 )
      {
        v13 = -1073741790;
      }
      else if ( (HIDWORD(v263[2].ReadyListHead.Blink) & 0x4000) != 0 )
      {
        v264 = (_DWORD *)ExAllocatePool2(257LL, Size, 1380009284LL);
        v256 = v264;
        v291 = v264;
        if ( v264 )
        {
          memmove(v264, v262, Size);
          LODWORD(v287) = 0;
          v13 = PspProcessDynamicEnforcedAddressRanges(
                  v263,
                  (__int64)&v263[2].ActiveProcessors.Bitmap[5],
                  (__int64)v256,
                  (unsigned __int16)v304[0],
                  (unsigned int *)&v287);
          v268 = v13;
          while ( 1 )
          {
            v272 = v7;
            if ( v7 >= (unsigned int)v287 )
              break;
            *((_DWORD *)v262 + 6 * v7 + 4) = v256[6 * v7 + 4];
            ++v7;
          }
        }
        else
        {
          v13 = -1073741801;
        }
      }
      else
      {
        v13 = -1073741637;
      }
LABEL_944:
      if ( Object )
        HalPutDmaAdapter((PADAPTER_OBJECT)Object);
      if ( v256 )
      {
        ExFreePoolWithTag(v256, 0);
        return v13;
      }
      return v13;
    default:
      return -1073741821;
  }
  v146 = (char *)PsGetCurrentProcess();
  Object = v146;
  v147 = 0x140000000uLL;
  switch ( (int)v271 )
  {
    case 1:
      if ( (HIDWORD(v271) & 0xFFFFFFF0) != 0 )
      {
        v13 = -1073741811;
        goto LABEL_764;
      }
      v148 = (HIDWORD(v271) >> 1) & 1;
      if ( !v148 && (*((_DWORD *)v146 + 628) & 0x10) != 0 )
        goto LABEL_436;
      if ( (BYTE4(v271) & 1) == 0 && (*((_DWORD *)v146 + 628) & 0x40) == 0 )
        goto LABEL_436;
      v149 = (HIDWORD(v271) >> 3) & 1;
      if ( !v149 && (*((_DWORD *)v146 + 628) & 8) != 0 )
        goto LABEL_436;
      if ( v149 )
      {
        if ( !v148 )
        {
          v13 = -1073741776;
          goto LABEL_764;
        }
      }
      else if ( !v148 )
      {
LABEL_442:
        if ( (BYTE4(v271) & 1) != 0 )
        {
          _InterlockedAnd((volatile signed __int32 *)v146 + 628, 0xFFFFFFBF);
          v146 = (char *)Object;
        }
        if ( v149 )
        {
          _InterlockedOr((volatile signed __int32 *)v146 + 628, 8u);
          v146 = (char *)Object;
        }
        goto LABEL_446;
      }
      _InterlockedOr((volatile signed __int32 *)v146 + 628, 0x10u);
      v146 = (char *)Object;
      goto LABEL_442;
    case 2:
      v154 = HIDWORD(v271);
      if ( (HIDWORD(v271) & 0xFFFFFFF0) != 0 )
      {
        v13 = -1073741811;
        goto LABEL_764;
      }
      if ( (BYTE4(v271) & 1) != 0 && (BYTE4(v271) & 8) != 0 )
        v154 = HIDWORD(v271) & 0xFFFFFFF7;
      v155 = v154 & 1;
      if ( (v154 & 1) == 0 && ((v154 & 2) != 0 || (v154 & 4) != 0) )
      {
        v13 = -1073741811;
        goto LABEL_764;
      }
      if ( (unsigned int)PsIsSystemWideMitigationOptionSet() )
      {
LABEL_763:
        v13 = -1073741637;
        goto LABEL_764;
      }
      if ( ProcessHandle == (HANDLE)-1LL )
        goto LABEL_513;
      v13 = ObReferenceObjectByHandleWithTag(
              ProcessHandle,
              0x200u,
              (POBJECT_TYPE)PsProcessType,
              v9,
              0x79517350u,
              &Object,
              0LL);
      if ( v13 < 0 )
        goto LABEL_480;
      v270 = 1;
      v156 = PsGetCurrentProcess();
      v146 = (char *)Object;
      if ( Object == v156 )
      {
LABEL_513:
        if ( (v154 & 1) == 0 && (*((_DWORD *)v146 + 628) & 0x100) != 0 )
        {
          v13 = -1073741790;
          goto LABEL_764;
        }
        v167 = (v154 >> 3) & 1;
        if ( !v167 && (v154 & 1) == 0 && (*((_DWORD *)v146 + 628) & 0x800) != 0 )
        {
          v13 = -1073741790;
          goto LABEL_764;
        }
        v168 = (v154 >> 1) & 1;
        if ( v168 )
        {
          v169 = *((_DWORD *)v146 + 628);
          if ( (v169 & 0x100) != 0 && (v169 & 0x200) == 0 )
          {
            v13 = -1073741790;
            goto LABEL_764;
          }
        }
        v166 = (v154 >> 2) & 1;
        if ( v166 )
        {
          v170 = *((_DWORD *)v146 + 628);
          if ( (v170 & 0x100) != 0 && (v170 & 0x400) == 0 )
          {
            v13 = -1073741790;
            goto LABEL_764;
          }
        }
        if ( v155 )
        {
          v171 = 2304;
        }
        else
        {
          v171 = 0;
          if ( v167 )
            v171 = 2048;
        }
        v160 = (v168 ^ 1) << 9;
        v163 = v171 | 0x200;
        if ( !v168 )
          v163 = v171;
        v157 = (volatile signed __int32 *)(v146 + 2512);
        v164 = v163 | 0x400;
        v165 = v166 == 0;
      }
      else
      {
        v157 = (volatile signed __int32 *)((char *)Object + 2512);
        v158 = *((_DWORD *)Object + 628);
        if ( (v158 & 0x100) != 0 )
        {
          memset(&SubjectContext, 0, sizeof(SubjectContext));
          SeCaptureSubjectContextEx(0LL, (PEPROCESS)Object, &SubjectContext);
          IsSandboxedToken = RtlIsSandboxedToken(&SubjectContext, 1);
          SeReleaseSubjectContext(&SubjectContext);
          if ( (RtlIsSandboxedToken(0LL, v9) || !IsSandboxedToken || (*v157 & 0x400) == 0)
            && !SeSinglePrivilegeCheck(SeDebugPrivilege, v9) )
          {
            goto LABEL_436;
          }
        }
        else if ( (v154 & 8) == 0 && (v154 & 1) == 0 && (v158 & 0x800) != 0 )
        {
          v13 = -1073741790;
          goto LABEL_764;
        }
        v160 = 0;
        if ( (v154 & 1) == 0 )
          v160 = 2304;
        v161 = -v155;
        v162 = (v161 != 0 ? 0x100 : 0) | 0x800;
        if ( (v154 & 8) == 0 )
          v162 = v161 != 0 ? 0x900 : 0;
        if ( ((v154 >> 1) & 1) == 0 )
          v160 |= 0x200u;
        v163 = v162 | 0x200;
        if ( ((v154 >> 1) & 1) == 0 )
          v163 = v162;
        v164 = v163 | 0x400;
        v166 = (v154 >> 2) & 1;
        v165 = v166 == 0;
      }
      if ( v165 )
        v164 = v163;
      if ( !v166 )
        v160 |= 0x400u;
      RtlInterlockedSetClearBits(v157, v164, v160);
      v13 = 0;
      goto LABEL_764;
    case 3:
      if ( (HIDWORD(v271) & 0xFFFFFFFC) != 0 )
      {
        v13 = -1073741811;
      }
      else if ( ((HIDWORD(v271) >> 1) & 1) != 0 || (BYTE4(v271) & 1) == 0 )
      {
        if ( ((HIDWORD(v271) >> 1) & 1) == 0 || (BYTE4(v271) & 1) != 0 )
        {
          v150 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)v146);
          if ( v150 )
          {
            v13 = -1073741790;
            if ( (unsigned __int8)ExEnableHandleExceptions(v150, BYTE4(v271) & 1) )
              v13 = 0;
            ObDereferenceProcessHandleTable(v146);
          }
          else
          {
            v13 = -1073741558;
          }
        }
        else
        {
          v13 = -1073741811;
        }
      }
      else
      {
        v13 = -1073741811;
      }
      goto LABEL_764;
    case 4:
      v151 = HIDWORD(v271);
      if ( (HIDWORD(v271) & 0xFFFFFFFC) != 0 )
      {
        v13 = -1073741811;
        goto LABEL_764;
      }
      if ( (BYTE4(v271) & 1) != 0 && (BYTE4(v271) & 2) != 0 )
      {
        v151 = HIDWORD(v271) & 0xFFFFFFFD;
        HIDWORD(v271) &= ~2u;
      }
      v152 = v151 & 1;
      if ( (v151 & 1) == 0 && (*((_DWORD *)v146 + 628) & 0x1000) != 0 )
      {
        v13 = -1073741790;
        goto LABEL_764;
      }
      v153 = (v151 >> 1) & 1;
      if ( v153 )
        goto LABEL_472;
      if ( v152 )
        goto LABEL_474;
      if ( (*((_DWORD *)v146 + 628) & 0x2000) != 0 )
      {
        v13 = -1073741790;
        goto LABEL_764;
      }
LABEL_472:
      if ( !v152 && !v153 )
        goto LABEL_476;
LABEL_474:
      if ( (unsigned __int8)PsIsGuiThread(v269) )
      {
        v13 = -1073741431;
      }
      else
      {
LABEL_476:
        v13 = 0;
        if ( v152 )
        {
          _InterlockedOr((volatile signed __int32 *)v146 + 628, 0x3000u);
          v146 = (char *)Object;
        }
        else if ( v153 )
        {
          _InterlockedOr((volatile signed __int32 *)v146 + 628, 0x2000u);
LABEL_480:
          v146 = (char *)Object;
        }
      }
      goto LABEL_764;
    case 6:
      if ( (HIDWORD(v271) & 0xFFFFFFFE) != 0 )
      {
        v13 = -1073741811;
      }
      else if ( (BYTE4(v271) & 1) != 0 || (*((_DWORD *)v146 + 628) & 0x80u) == 0 )
      {
        v13 = 0;
        if ( (BYTE4(v271) & 1) != 0 )
        {
          _InterlockedOr((volatile signed __int32 *)v146 + 628, 0x80u);
          v146 = (char *)Object;
        }
      }
      else
      {
        v13 = -1073741790;
      }
      goto LABEL_764;
    case 7:
      if ( (HIDWORD(v271) & 0xFFFFFFF8) != 0 )
      {
        v13 = -1073741811;
      }
      else if ( (*((_DWORD *)v146 + 628) & 1) != 0 )
      {
        if ( (BYTE4(v271) & 4) != 0 )
        {
          _InterlockedOr((volatile signed __int32 *)v146 + 628, 4u);
          v13 = 0;
          v146 = (char *)Object;
        }
        else
        {
          v13 = -1073741790;
        }
      }
      else
      {
        v13 = -1073741790;
      }
      goto LABEL_764;
    case 8:
      v172 = HIDWORD(v271);
      if ( (HIDWORD(v271) & 0xFFFFFFE0) != 0 )
      {
        v13 = -1073741811;
        goto LABEL_764;
      }
      if ( (BYTE4(v271) & 1) != 0 && ((BYTE4(v271) & 8) != 0 || (BYTE4(v271) & 0x10) != 0) )
        v172 = HIDWORD(v271) & 0xFFFFFFE7;
      if ( (v172 & 2) != 0 && (v172 & 0x10) != 0 )
        v172 &= ~0x10u;
      v173 = (v172 >> 3) & 1;
      if ( v173 && (v172 & 0x10) != 0 )
      {
        v13 = -1073741811;
        goto LABEL_764;
      }
      v174 = (v172 >> 1) & 1;
      if ( (v172 & 1) + v174 > 1 )
      {
        v13 = -1073741811;
        goto LABEL_764;
      }
      if ( (v172 & 1) != 0 )
        goto LABEL_575;
      if ( (unsigned __int8)v146[2168] >= 8u && (unsigned __int8)v146[2169] >= 8u )
      {
        v13 = -1073741790;
        goto LABEL_764;
      }
      if ( !v174 )
      {
        LOBYTE(v147) = 6;
        if ( (unsigned int)SeCompareSigningLevels((unsigned __int8)v146[2168], v147) )
        {
          LOBYTE(v147) = 6;
          if ( (unsigned int)SeCompareSigningLevels((unsigned __int8)v146[2169], v147) )
          {
            v13 = -1073741790;
            goto LABEL_764;
          }
        }
      }
LABEL_575:
      if ( (*((_DWORD *)v146 + 628) & 0x3000000) != 0 && (v172 & 0x10) == 0 && !v174 && !v173 && (v172 & 1) == 0 )
      {
        v13 = -1073741790;
        goto LABEL_764;
      }
      v13 = 0;
      if ( (v172 & 1) != 0 )
      {
        if ( (unsigned __int8)v146[2168] < 8u )
          v146[2168] = 8;
        if ( (unsigned __int8)v146[2169] < 8u )
          v146[2169] = 8;
      }
      else if ( v174 )
      {
        LOBYTE(v147) = 6;
        if ( !(unsigned int)SeCompareSigningLevels((unsigned __int8)v146[2168], v147) )
        {
          v13 = -1073741790;
          goto LABEL_764;
        }
        LOBYTE(v175) = 6;
        if ( (unsigned int)SeCompareSigningLevels(v175, (unsigned __int8)v146[2169]) )
          v146[2169] = 6;
      }
      if ( v172 )
        v7 = 0x800000;
      v176 = ((v172 & 8) == 0) << 24;
      v177 = v7 | 0x1000000;
      if ( !v173 )
        v177 = v7;
      v178 = (v172 >> 4) & 1;
      if ( !v178 )
        v176 |= 0x2000000u;
      v179 = v177 | 0x2000000;
      if ( !v178 )
        v179 = v177;
      RtlInterlockedSetClearBits((volatile signed __int32 *)v146 + 628, v179, v176);
      goto LABEL_764;
    case 9:
      if ( (HIDWORD(v271) & 0xFFFFFFFC) != 0 )
      {
        v13 = -1073741811;
      }
      else if ( (BYTE4(v271) & 1) != 0 || (*((_DWORD *)v146 + 628) & 0x10000) == 0 )
      {
        if ( (BYTE4(v271) & 1) != 0 || (BYTE4(v271) & 2) != 0 || (*((_DWORD *)v146 + 628) & 0x20000) == 0 )
        {
          v13 = 0;
          if ( (BYTE4(v271) & 1) != 0 )
          {
            RtlInterlockedSetClearBits((volatile signed __int32 *)v146 + 628, 0x10000, 0x20000);
          }
          else if ( (BYTE4(v271) & 2) != 0 )
          {
            RtlInterlockedSetClearBits((volatile signed __int32 *)v146 + 628, 0x20000, 0x10000);
          }
        }
        else
        {
          v13 = -1073741790;
        }
      }
      else
      {
        v13 = -1073741790;
      }
      goto LABEL_764;
    case 10:
      v180 = HIDWORD(v271);
      if ( (HIDWORD(v271) & 0xFFFFFFE0) != 0 )
      {
        v13 = -1073741811;
        goto LABEL_764;
      }
      if ( (BYTE4(v271) & 1) != 0 && (BYTE4(v271) & 8) != 0 )
        v180 = HIDWORD(v271) & 0xFFFFFFF7;
      if ( (v180 & 2) != 0 && (v180 & 0x10) != 0 )
        v180 &= ~0x10u;
      v181 = v180 & 1;
      v182 = 0x80000;
      if ( (v180 & 1) == 0 && (*((_DWORD *)v146 + 628) & 0x80000) != 0 )
        goto LABEL_436;
      v183 = (v180 >> 1) & 1;
      if ( !v183 && (*((_DWORD *)v146 + 628) & 0x200000) != 0 )
        goto LABEL_436;
      v184 = (v180 >> 2) & 1;
      if ( !v184 && (*((_DWORD *)v146 + 628) & 0x40000) != 0 )
      {
        v13 = -1073741790;
        goto LABEL_764;
      }
      v185 = (v180 >> 3) & 1;
      if ( !v185 && (v180 & 1) == 0 && (*((_DWORD *)v146 + 628) & 0x100000) != 0 )
        goto LABEL_436;
      v186 = (v180 >> 4) & 1;
      if ( v186 || v183 || (*((_DWORD *)v146 + 628) & 0x400000) == 0 )
      {
        v187 = 0;
        if ( v181 )
        {
          v187 = 0x100000;
        }
        else
        {
          v182 = 0;
          if ( v185 )
            v182 = 0x100000;
        }
        if ( v183 )
        {
          v182 |= 0x200000u;
          v187 |= 0x400000u;
        }
        else if ( v186 )
        {
          v182 |= 0x400000u;
        }
        v188 = v182 | 0x40000;
        if ( !v184 )
          v188 = v182;
        RtlInterlockedSetClearBits((volatile signed __int32 *)v146 + 628, v188, v187);
        v13 = 0;
      }
      else
      {
        v13 = -1073741790;
      }
      goto LABEL_764;
    case 13:
      v189 = HIDWORD(v271);
      if ( (HIDWORD(v271) & 0xFFFFFFF8) != 0 )
      {
        v13 = -1073741811;
        goto LABEL_764;
      }
      if ( (BYTE4(v271) & 1) == 0 && (BYTE4(v271) & 4) != 0 )
      {
        v13 = -1073741811;
        goto LABEL_764;
      }
      if ( (BYTE4(v271) & 1) != 0 && (BYTE4(v271) & 2) != 0 )
        v189 = HIDWORD(v271) & 0xFFFFFFFD;
      NoChildProcessRestrictedPolicy = PspGetNoChildProcessRestrictedPolicy((struct _KPROCESS *)v146);
      v192 = NoChildProcessRestrictedPolicy;
      v193 = v189 & 1;
      if ( (v189 & 1) == 0 && NoChildProcessRestrictedPolicy - 1 <= 1 )
      {
        v13 = -1073741790;
        goto LABEL_764;
      }
      v194 = (v189 >> 2) & 1;
      if ( v194 && (_DWORD)v192 == 1 )
      {
        v13 = -1073741790;
        goto LABEL_764;
      }
      v195 = (v189 >> 1) & 1;
      if ( v195 )
        goto LABEL_664;
      if ( v193 )
        goto LABEL_665;
      if ( (_DWORD)v192 == 3 )
      {
        v13 = -1073741790;
        goto LABEL_764;
      }
LABEL_664:
      if ( v193 )
      {
LABEL_665:
        if ( v194 )
          PspSetNoChildProcessRestrictedPolicy(v146, 2LL, v192, v191);
        else
          PspSetNoChildProcessRestrictedPolicy(v146, 1LL, v192, v191);
        v13 = 0;
      }
      else
      {
        if ( !v195 )
          goto LABEL_446;
        PspSetNoChildProcessRestrictedPolicy(v146, 3LL, v192, v191);
        v13 = 0;
      }
      goto LABEL_764;
    case 14:
      if ( (HIDWORD(v271) & 0xFFFFFFF0) != 0 )
      {
        v13 = -1073741811;
        goto LABEL_764;
      }
      if ( (BYTE4(v271) & 1) == 0 && (*((_DWORD *)v146 + 628) & 0x40000000) != 0
        || ((HIDWORD(v271) >> 1) & 1) == 0 && *((int *)v146 + 628) < 0
        || ((HIDWORD(v271) >> 3) & 1) == 0 && (*((_DWORD *)v146 + 629) & 0x2000) != 0 )
      {
        goto LABEL_436;
      }
      v200 = (HIDWORD(v271) >> 2) & 1;
      if ( v200 || (*((_DWORD *)v146 + 629) & 0x1000) == 0 )
      {
        if ( (BYTE4(v271) & 1) != 0 )
        {
          _InterlockedOr((volatile signed __int32 *)v146 + 628, 0x40000000u);
          v146 = (char *)Object;
        }
        if ( ((HIDWORD(v271) >> 1) & 1) != 0 )
        {
          _InterlockedOr((volatile signed __int32 *)v146 + 628, 0x80000000);
          _InterlockedOr((volatile signed __int32 *)Object + 543, 0x200000u);
          v146 = (char *)Object;
          PspWriteProcessSecurityDomain((__int64)Object, _InterlockedIncrement64(&PsNextSecurityDomain), 1);
          KeSynchronizeSecurityDomain(v201);
        }
        if ( v200 )
        {
          _InterlockedOr((volatile signed __int32 *)v146 + 629, 0x1000u);
          v146 = (char *)Object;
        }
        if ( ((HIDWORD(v271) >> 3) & 1) != 0 )
        {
          _InterlockedOr((volatile signed __int32 *)v146 + 629, 0x2000u);
          v146 = (char *)Object;
        }
        v13 = 0;
      }
      else
      {
        v13 = -1073741790;
      }
      goto LABEL_764;
    case 15:
      v202 = HIDWORD(v271);
      if ( (HIDWORD(v271) & 0xFFFFFC00) != 0 )
      {
        v13 = -1073741811;
        goto LABEL_764;
      }
      if ( (BYTE4(v271) & 0x10) != 0 )
      {
        v202 = HIDWORD(v271) | 1;
        HIDWORD(v271) |= 1u;
      }
      if ( (v202 & 0x200) != 0 )
      {
        v202 |= 4u;
        HIDWORD(v271) = v202;
      }
      if ( (v202 & 0x40) != 0 )
      {
        v202 |= 0x20u;
        HIDWORD(v271) = v202;
      }
      v203 = (v202 >> 4) & 1;
      if ( !v203 && (*((_DWORD *)v146 + 629) & 0x100000) != 0
        || (v202 & 1) == 0 && (*((_DWORD *)v146 + 629) & 0x4000) != 0 )
      {
        goto LABEL_436;
      }
      if ( (v202 & 1) != 0 && (*((_DWORD *)v146 + 629) & 0x4000) == 0 )
      {
        v13 = -1073741790;
        goto LABEL_764;
      }
      v204 = (v202 >> 9) & 1;
      if ( v204 && *((int *)v146 + 629) >= 0 )
        goto LABEL_436;
      v205 = (v202 >> 2) & 1;
      if ( !v205 && (*((_DWORD *)v146 + 629) & 0x20000) != 0 )
        goto LABEL_436;
      if ( v205 && (*((_DWORD *)v146 + 629) & 0x20000) == 0 )
      {
        v13 = -1073741790;
        goto LABEL_764;
      }
      v206 = (v202 >> 6) & 1;
      if ( !v206 && (*((_DWORD *)v146 + 629) & 0x400000) != 0 )
        goto LABEL_436;
      v207 = (v202 >> 5) & 1;
      if ( !v207 && (*((_DWORD *)v146 + 629) & 0x200000) != 0 )
      {
        v13 = -1073741790;
        goto LABEL_764;
      }
      v208 = (v202 >> 8) & 1;
      if ( !v208 && (*((_DWORD *)v146 + 629) & 0x40000000) != 0 )
      {
        v13 = -1073741790;
        goto LABEL_764;
      }
      if ( ((v202 >> 1) & 1) == 0 && (*((_DWORD *)v146 + 629) & 0x8000) != 0
        || ((v202 >> 1) & 1) != 0 && (*((_DWORD *)v146 + 629) & 0x8000) == 0
        || ((v202 >> 3) & 1) == 0 && (*((_DWORD *)v146 + 629) & 0x40000) != 0
        || ((v202 >> 3) & 1) != 0 && (*((_DWORD *)v146 + 629) & 0x40000) == 0
        || (v209 = (v202 >> 7) & 1) == 0 && (*((_DWORD *)v146 + 629) & 0x800000) != 0 )
      {
LABEL_436:
        v13 = -1073741790;
        goto LABEL_764;
      }
      if ( v209 && (*((_DWORD *)v146 + 629) & 0x800000) == 0 )
      {
        v13 = -1073741790;
        goto LABEL_764;
      }
      if ( v203 )
      {
        _InterlockedOr((volatile signed __int32 *)v146 + 629, 0x100000u);
        v146 = (char *)Object;
      }
      if ( !v204 && v205 )
      {
        _InterlockedAnd((volatile signed __int32 *)v146 + 629, 0x7FFFFFFFu);
        v146 = (char *)Object;
      }
      if ( v206 )
      {
        _InterlockedOr((volatile signed __int32 *)v146 + 629, 0x200000u);
        _InterlockedOr((volatile signed __int32 *)v146 + 629, 0x400000u);
      }
      else
      {
        if ( !v207 )
          goto LABEL_760;
        _InterlockedOr((volatile signed __int32 *)v146 + 629, 0x200000u);
      }
      v146 = (char *)Object;
LABEL_760:
      if ( v208 )
      {
        _InterlockedOr((volatile signed __int32 *)v146 + 629, 0x40000000u);
        v146 = (char *)Object;
      }
      v13 = 0;
LABEL_764:
      if ( v270 != 1 )
        return v13;
LABEL_765:
      ObfDereferenceObjectWithTag(v146, 0x79517350u);
      return v13;
    case 16:
      v196 = HIDWORD(v271);
      if ( (HIDWORD(v271) & 0xFFFFFFFC) != 0 )
      {
        v13 = -1073741811;
        goto LABEL_764;
      }
      if ( (BYTE4(v271) & 1) != 0 && (BYTE4(v271) & 2) != 0 )
        v196 = HIDWORD(v271) & 0xFFFFFFFD;
      RedirectionTrustPolicy = PspGetRedirectionTrustPolicy((struct _KPROCESS *)v146);
      v198 = v196 & 1;
      if ( (v196 & 1) == 0 && RedirectionTrustPolicy == 1 )
      {
        v13 = -1073741790;
        goto LABEL_764;
      }
      v199 = (v196 >> 1) & 1;
      if ( v199 )
        goto LABEL_683;
      if ( v198 )
        goto LABEL_684;
      if ( RedirectionTrustPolicy == 2 )
      {
        v13 = -1073741790;
      }
      else
      {
LABEL_683:
        if ( v198 )
        {
LABEL_684:
          PspSetRedirectionTrustPolicy((struct _KPROCESS *)v146, 1);
          v13 = 0;
        }
        else if ( v199 )
        {
          PspSetRedirectionTrustPolicy((struct _KPROCESS *)v146, 2);
          v13 = 0;
        }
        else
        {
LABEL_446:
          v13 = 0;
        }
      }
      goto LABEL_764;
    default:
      goto LABEL_763;
  }
}
