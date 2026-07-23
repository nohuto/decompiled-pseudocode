/*
 * XREFs of NtSetInformationProcess @ 0x14069A210
 * Callers:
 *     <none>
 * Callees:
 *     ExCpuSetResourceManagerAccessCheck @ 0x140202268 (ExCpuSetResourceManagerAccessCheck.c)
 *     MmGetSessionId @ 0x1402041B0 (MmGetSessionId.c)
 *     KeQueryGroupMaskProcess @ 0x14020433C (KeQueryGroupMaskProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     KeDelayExecutionThread @ 0x1402295B0 (KeDelayExecutionThread.c)
 *     PsSetIoPriorityThread @ 0x140234A9C (PsSetIoPriorityThread.c)
 *     PsSetPagePriorityThread @ 0x140234D94 (PsSetPagePriorityThread.c)
 *     RtlStringCbCopyA @ 0x140239BD8 (RtlStringCbCopyA.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1402421D0 (ExAllocatePoolWithQuotaTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     KeUnstackDetachProcess @ 0x14025E8B0 (KeUnstackDetachProcess.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1402799D0 (PsReturnProcessNonPagedPoolQuota.c)
 *     PsGetCurrentProcess @ 0x140293500 (PsGetCurrentProcess.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x1402A3090 (PsChargeProcessNonPagedPoolQuota.c)
 *     KeEnterCriticalRegionThread @ 0x1402A46D0 (KeEnterCriticalRegionThread.c)
 *     KeStackAttachProcess @ 0x1402A51A0 (KeStackAttachProcess.c)
 *     MiCreateSystemWsles @ 0x1402B3480 (MiCreateSystemWsles.c)
 *     MmGetDefaultPagePriority @ 0x1402C2300 (MmGetDefaultPagePriority.c)
 *     KeBoostPriorityThread @ 0x1402C94E4 (KeBoostPriorityThread.c)
 *     ExReleaseExtensionTable @ 0x1402D3FCC (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x1402D3FE8 (ExGetExtensionTable.c)
 *     RtlInterlockedSetClearBits @ 0x1402D4018 (RtlInterlockedSetClearBits.c)
 *     IoBoostThreadIoPriority @ 0x1402E33DC (IoBoostThreadIoPriority.c)
 *     RtlInsertDynamicFunctionTable @ 0x1402F6FD4 (RtlInsertDynamicFunctionTable.c)
 *     RtlRemoveDynamicFunctionTable @ 0x1402FDA9C (RtlRemoveDynamicFunctionTable.c)
 *     KeSynchronizeSecurityDomain @ 0x14030CD8C (KeSynchronizeSecurityDomain.c)
 *     PspLockUnlockProcessExclusive @ 0x140313354 (PspLockUnlockProcessExclusive.c)
 *     PtrToUlong @ 0x1403189F0 (PtrToUlong.c)
 *     PspUnlockProcessExclusive @ 0x14031BD28 (PspUnlockProcessExclusive.c)
 *     KeSetExecuteOptions @ 0x14031C49C (KeSetExecuteOptions.c)
 *     KeInitializeGate @ 0x140322400 (KeInitializeGate.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1403355DC (KeSetPriorityAndQuantumProcess.c)
 *     MmSetMemoryPriorityProcess @ 0x140336C68 (MmSetMemoryPriorityProcess.c)
 *     PspLockProcessExclusive @ 0x140337FB0 (PspLockProcessExclusive.c)
 *     KeIsUserCetAllowed @ 0x140337FD8 (KeIsUserCetAllowed.c)
 *     PspWriteProcessSecurityDomain @ 0x14033815C (PspWriteProcessSecurityDomain.c)
 *     KeVerifyGroupAffinity @ 0x140374F84 (KeVerifyGroupAffinity.c)
 *     MmRemoveExecuteGrants @ 0x14037BBF0 (MmRemoveExecuteGrants.c)
 *     KeSetCpuSetsProcess @ 0x1403C1F94 (KeSetCpuSetsProcess.c)
 *     xKdEnumerateDebuggingDevices @ 0x1403CC000 (xKdEnumerateDebuggingDevices.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     MmGetMaximumUserAddress @ 0x1403ECB58 (MmGetMaximumUserAddress.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     IoRevokeHandlesForProcess @ 0x140501730 (IoRevokeHandlesForProcess.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140516E38 (KeRecomputeCpuSetAffinityProcess.c)
 *     MmReleaseCommitForMemResetPages @ 0x1405271D4 (MmReleaseCommitForMemResetPages.c)
 *     MmSetCommitReleaseEligibility @ 0x14052740C (MmSetCommitReleaseEligibility.c)
 *     PspLockProcessSharedUnsafe @ 0x14057BE5C (PspLockProcessSharedUnsafe.c)
 *     PspUnlockProcessSharedUnsafe @ 0x14057C0D0 (PspUnlockProcessSharedUnsafe.c)
 *     PspProcessDynamicEnforcedAddressRanges @ 0x1405C7284 (PspProcessDynamicEnforcedAddressRanges.c)
 *     PspWritePebAffinityInfo @ 0x1405D938C (PspWritePebAffinityInfo.c)
 *     PsReferencePrimaryToken @ 0x1405E13A0 (PsReferencePrimaryToken.c)
 *     SeSinglePrivilegeCheck @ 0x1405E3050 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x1405E9480 (ProbeForWrite.c)
 *     SeReleaseSubjectContext @ 0x1405EBD30 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x140602DE0 (SeCaptureSubjectContextEx.c)
 *     ObReferenceProcessHandleTable @ 0x14061F2E4 (ObReferenceProcessHandleTable.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14062B1C0 (ObReferenceObjectByHandleWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     RtlIsSandboxedToken @ 0x140649A20 (RtlIsSandboxedToken.c)
 *     MmAllocateUserStack @ 0x14064D61C (MmAllocateUserStack.c)
 *     KeSetAutoAlignmentProcess @ 0x14069A028 (KeSetAutoAlignmentProcess.c)
 *     PsGetNextProcessThread @ 0x14069A050 (PsGetNextProcessThread.c)
 *     PspSetProcessDefaultHardErrorMode @ 0x14069A150 (PspSetProcessDefaultHardErrorMode.c)
 *     ObDereferenceProcessHandleTable @ 0x1406CC4E0 (ObDereferenceProcessHandleTable.c)
 *     MmProcessWorkingSetControl @ 0x1406D0FA0 (MmProcessWorkingSetControl.c)
 *     PspCombineSecurityDomains @ 0x1406D1398 (PspCombineSecurityDomains.c)
 *     PspSetQuotaLimits @ 0x1406D3274 (PspSetQuotaLimits.c)
 *     ExEnableRaiseUMExceptionOnInvalidHandleClose @ 0x1406D8584 (ExEnableRaiseUMExceptionOnInvalidHandleClose.c)
 *     PspSetProcessPriorityClass @ 0x1406DFD24 (PspSetProcessPriorityClass.c)
 *     PoSetProcessEnergyTrackingState @ 0x1406E3320 (PoSetProcessEnergyTrackingState.c)
 *     ExEnableHandleExceptions @ 0x1406E446C (ExEnableHandleExceptions.c)
 *     SeSetVirtualizationToken @ 0x1406E88BC (SeSetVirtualizationToken.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x1406E9E58 (PspSetNoChildProcessRestrictedPolicy.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x1406ECA38 (PspGetNoChildProcessRestrictedPolicy.c)
 *     PsIsSystemWideMitigationOptionSet @ 0x1406ECAAC (PsIsSystemWideMitigationOptionSet.c)
 *     PsQuitNextProcessThread @ 0x1406ED7F0 (PsQuitNextProcessThread.c)
 *     PspSetProcessForegroundBackgroundRequest @ 0x1406F3B80 (PspSetProcessForegroundBackgroundRequest.c)
 *     PsSetProcessPriorityByClass @ 0x1406F3C80 (PsSetProcessPriorityByClass.c)
 *     LpcRequestPort @ 0x140707560 (LpcRequestPort.c)
 *     KeSetDisableBoostProcess @ 0x1407201DC (KeSetDisableBoostProcess.c)
 *     EtwSetProcessTelemetryCoverage @ 0x14075CDD8 (EtwSetProcessTelemetryCoverage.c)
 *     KeSetDisableBoostThread @ 0x14075E07C (KeSetDisableBoostThread.c)
 *     PsSetProcessFaultInformation @ 0x14075E230 (PsSetProcessFaultInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 *     PspSetProcessAffinityUpdateMode @ 0x1407686B0 (PspSetProcessAffinityUpdateMode.c)
 *     SeCompareSigningLevels @ 0x140769DA0 (SeCompareSigningLevels.c)
 *     SeCheckPrivilegedObject @ 0x140779674 (SeCheckPrivilegedObject.c)
 *     PspAssignPrimaryToken @ 0x1407A34C4 (PspAssignPrimaryToken.c)
 *     ExSystemExceptionFilter @ 0x1407BEDE0 (ExSystemExceptionFilter.c)
 *     KeSetCheckStackExtentsProcess @ 0x1408B6960 (KeSetCheckStackExtentsProcess.c)
 *     MmValidateUserCallTarget @ 0x1408D3528 (MmValidateUserCallTarget.c)
 *     ObSetProcessDeviceMap @ 0x1408DAD1C (ObSetProcessDeviceMap.c)
 *     PsIsGuiThread @ 0x1409031F4 (PsIsGuiThread.c)
 *     PsSetProcessHandleTracingInformation @ 0x1409032C8 (PsSetProcessHandleTracingInformation.c)
 *     PspEnableAltSystemCallHandling @ 0x140903568 (PspEnableAltSystemCallHandling.c)
 *     PspProcessDynamicEHContinuationTargets @ 0x140903654 (PspProcessDynamicEHContinuationTargets.c)
 *     PspSetProcessAffinitySafe @ 0x140903F14 (PspSetProcessAffinitySafe.c)
 *     PspFreeUserFiberShadowStack @ 0x140905AC4 (PspFreeUserFiberShadowStack.c)
 *     PspSetupUserFiberShadowStack @ 0x140905E80 (PspSetupUserFiberShadowStack.c)
 *     PsIumEnableOnDemandDebugWithResponse @ 0x140908304 (PsIumEnableOnDemandDebugWithResponse.c)
 *     SeCodeIntegritySetInformationProcess @ 0x140917800 (SeCodeIntegritySetInformationProcess.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 *     ExAllocatePool2 @ 0x1409B1280 (ExAllocatePool2.c)
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
  __int64 v39; // r8
  __int64 v40; // r9
  unsigned __int8 v41; // di
  __int64 v42; // r13
  _DWORD *v43; // rbx
  __int64 v44; // rax
  __int16 v45; // dx
  __int64 v46; // rcx
  int v47; // ebx
  PVOID v48; // rdi
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // r13
  __int64 v52; // rdx
  __int64 v53; // r8
  _DWORD *v54; // r9
  NTSTATUS v55; // esi
  PVOID v56; // rdi
  _BOOL8 v57; // rdi
  NTSTATUS v58; // esi
  struct _EX_RUNDOWN_REF *v59; // rbx
  __int64 v60; // r13
  struct _EX_RUNDOWN_REF *Count; // r8
  void **v62; // r8
  struct _EX_RUNDOWN_REF *v63; // r9
  HANDLE v64; // rbx
  int v65; // eax
  int v66; // ebx
  PVOID v67; // rcx
  int v68; // ebx
  int v69; // ebx
  int v70; // ecx
  PVOID v71; // rbx
  __int64 *v72; // rdx
  NTSTATUS v73; // eax
  NTSTATUS v74; // edi
  unsigned int v75; // eax
  unsigned __int64 v76; // r12
  NTSTATUS v77; // esi
  volatile signed __int32 *v78; // r14
  __int64 v79; // r13
  signed __int32 v80; // eax
  signed int v81; // r8d
  signed __int32 v82; // edx
  char *v83; // r14
  KSPIN_LOCK *v84; // rbx
  signed int v85; // r15d
  int v86; // ebx
  _KPROCESS *CurrentProcess; // rax
  unsigned int v88; // ebx
  NTSTATUS v89; // esi
  struct _EX_RUNDOWN_REF *v90; // r12
  __int64 v91; // r13
  unsigned int v92; // ebx
  signed __int32 v93; // eax
  signed __int32 v94; // edx
  PVOID v95; // r14
  char *v96; // r15
  char *v97; // rdi
  int v98; // ebx
  unsigned __int64 v99; // rsi
  _OWORD *PoolWithQuotaTag; // r15
  int v101; // ebx
  __int64 v102; // r8
  unsigned int v103; // ecx
  _DWORD *v104; // rdx
  _KPROCESS *v105; // rax
  unsigned __int64 v106; // rax
  __int16 v107; // dx
  __int64 v108; // rcx
  _QWORD *j; // rdx
  _QWORD *v110; // rbx
  __int64 v111; // rdi
  char *v112; // rbx
  char *v113; // rax
  char *v114; // r13
  __int64 v115; // rdx
  __int64 v116; // r8
  volatile void **v117; // rdi
  __int64 v118; // rdx
  void *Ptr; // rdx
  __int64 v120; // rdx
  __int64 v121; // rdi
  __int64 Ptr_high; // rcx
  unsigned __int64 v123; // rax
  __int64 v124; // rax
  __int64 v125; // rbx
  unsigned int v126; // eax
  unsigned __int64 v127; // r8
  unsigned __int64 v128; // rax
  unsigned __int64 v129; // rdx
  __int64 v130; // rcx
  __int64 v131; // rax
  unsigned __int64 v132; // rdi
  _KPROCESS *v133; // rsi
  BOOLEAN v134; // al
  unsigned __int64 v135; // rax
  __int16 v136; // dx
  bool v137; // r8
  unsigned __int64 v138; // rdx
  __int16 v139; // r8
  __int64 v140; // r13
  volatile signed __int32 *v141; // rax
  __int16 v142; // r8
  __int64 v143; // rcx
  __int64 *v144; // rax
  char *v145; // rsi
  int v146; // r9d
  char v147; // bl
  unsigned int v148; // r12d
  struct _DMA_ADAPTER *v149; // rbx
  unsigned __int64 v150; // rbx
  char *v151; // rbx
  unsigned __int64 v152; // rdx
  int v153; // edx
  int v154; // ecx
  unsigned __int64 v155; // rax
  unsigned int v156; // edx
  int v157; // r8d
  int v158; // edx
  unsigned int v159; // edi
  int v160; // r12d
  _KPROCESS *v161; // rax
  volatile signed __int32 *v162; // rsi
  int v163; // eax
  bool IsSandboxedToken; // r13
  int v165; // r8d
  int v166; // r12d
  int v167; // edx
  int v168; // eax
  int v169; // edx
  bool v170; // zf
  int v171; // edi
  int v172; // edx
  int v173; // ecx
  int v174; // eax
  int v175; // eax
  int v176; // r9d
  unsigned int v177; // edi
  int v178; // r13d
  int v179; // r15d
  __int64 v180; // rcx
  int v181; // r8d
  int v182; // r9d
  int v183; // edi
  int v184; // edx
  unsigned int v185; // ecx
  int v186; // edi
  int v187; // r8d
  int v188; // edx
  int v189; // r11d
  int v190; // r10d
  int v191; // ecx
  int v192; // eax
  int v193; // edx
  unsigned int v194; // edi
  unsigned int NoChildProcessRestrictedPolicy; // eax
  __int64 v196; // r8
  int v197; // edx
  int v198; // eax
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
  __int64 v222; // r8
  _DWORD *v223; // r9
  unsigned int v224; // ebx
  char v225; // bl
  NTSTATUS v226; // ebx
  unsigned int v227; // edi
  unsigned __int64 v228; // rax
  char v229; // bl
  int v230; // ecx
  unsigned __int64 ExtensionTable; // rbx
  int v232; // edi
  ULONG v233; // eax
  PVOID v234; // rbx
  NTSTATUS v235; // edi
  __int128 v236; // xmm1
  int v237; // eax
  volatile signed __int32 *v238; // r8
  unsigned int v239; // ecx
  volatile signed __int32 *v240; // r8
  unsigned int v241; // ecx
  char v242; // bl
  __int64 v243; // r8
  unsigned int v244; // edi
  _KPROCESS *v245; // rax
  unsigned __int64 v246; // rax
  HANDLE v247; // rbx
  NTSTATUS v248; // edi
  _KPROCESS *v249; // rax
  unsigned __int64 v250; // rdx
  __int64 v251; // rcx
  __int64 *v252; // r8
  int v253; // ebx
  int v254; // eax
  unsigned int v255; // eax
  int v256; // eax
  unsigned int v257; // eax
  NTSTATUS v258; // ebx
  _DWORD *v259; // r12
  unsigned int v260; // eax
  const void *v261; // rbx
  _KPROCESS *v262; // rdi
  _DWORD *Pool2; // rax
  unsigned int v264; // ecx
  const void *v265; // rbx
  struct _KPROCESS *v266; // rdi
  _DWORD *v267; // rax
  signed __int32 v268[8]; // [rsp+0h] [rbp-548h] BYREF
  PVOID Object; // [rsp+40h] [rbp-508h] BYREF
  unsigned int v270; // [rsp+48h] [rbp-500h]
  NTSTATUS v271; // [rsp+4Ch] [rbp-4FCh]
  struct _KTHREAD *v272; // [rsp+50h] [rbp-4F8h]
  char v273; // [rsp+58h] [rbp-4F0h]
  HANDLE v274; // [rsp+60h] [rbp-4E8h]
  unsigned int v275; // [rsp+68h] [rbp-4E0h]
  ULONG v276; // [rsp+70h] [rbp-4D8h]
  HANDLE Handle; // [rsp+78h] [rbp-4D0h]
  __int16 v278; // [rsp+80h] [rbp-4C8h]
  unsigned int v279; // [rsp+84h] [rbp-4C4h]
  ULONG Alignment; // [rsp+88h] [rbp-4C0h]
  char v281; // [rsp+8Ch] [rbp-4BCh]
  char v282; // [rsp+8Dh] [rbp-4BBh]
  char v283; // [rsp+8Eh] [rbp-4BAh]
  char v284; // [rsp+8Fh] [rbp-4B9h]
  signed int v285; // [rsp+94h] [rbp-4B4h]
  PEX_RUNDOWN_REF RunRef; // [rsp+98h] [rbp-4B0h]
  char *v287; // [rsp+A0h] [rbp-4A8h]
  __int64 v288; // [rsp+A8h] [rbp-4A0h]
  _DWORD v289[2]; // [rsp+B0h] [rbp-498h] BYREF
  size_t Size; // [rsp+B8h] [rbp-490h]
  PVOID v291; // [rsp+C0h] [rbp-488h] BYREF
  PVOID v292; // [rsp+C8h] [rbp-480h] BYREF
  __int64 v293; // [rsp+D0h] [rbp-478h]
  __int64 v294; // [rsp+D8h] [rbp-470h] BYREF
  __int64 v295; // [rsp+E0h] [rbp-468h]
  __int64 v296; // [rsp+E8h] [rbp-460h] BYREF
  PVOID v297; // [rsp+F0h] [rbp-458h] BYREF
  __int128 v298; // [rsp+F8h] [rbp-450h]
  void *Src[2]; // [rsp+108h] [rbp-440h] BYREF
  __int128 v300; // [rsp+118h] [rbp-430h] BYREF
  unsigned int v301; // [rsp+128h] [rbp-420h]
  PVOID v302; // [rsp+130h] [rbp-418h] BYREF
  int v303; // [rsp+138h] [rbp-410h]
  unsigned int v304; // [rsp+13Ch] [rbp-40Ch]
  int v305; // [rsp+140h] [rbp-408h] BYREF
  volatile void *Address[2]; // [rsp+148h] [rbp-400h]
  volatile void *v307[2]; // [rsp+158h] [rbp-3F0h]
  __int64 v308; // [rsp+168h] [rbp-3E0h]
  PVOID v309; // [rsp+170h] [rbp-3D8h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+178h] [rbp-3D0h]
  PVOID v311; // [rsp+180h] [rbp-3C8h]
  __int64 v312; // [rsp+188h] [rbp-3C0h] BYREF
  PVOID v313; // [rsp+190h] [rbp-3B8h] BYREF
  int v314; // [rsp+198h] [rbp-3B0h]
  int v315; // [rsp+19Ch] [rbp-3ACh]
  int v316; // [rsp+1A0h] [rbp-3A8h]
  int v317; // [rsp+1A4h] [rbp-3A4h]
  int v318; // [rsp+1A8h] [rbp-3A0h]
  BOOL v319; // [rsp+1ACh] [rbp-39Ch]
  int v320; // [rsp+1B0h] [rbp-398h]
  HANDLE v321; // [rsp+1B8h] [rbp-390h]
  unsigned __int64 v322; // [rsp+1C0h] [rbp-388h]
  _OWORD *v323; // [rsp+1C8h] [rbp-380h]
  int v324; // [rsp+1D0h] [rbp-378h]
  __int64 v325; // [rsp+1D8h] [rbp-370h] BYREF
  int v326; // [rsp+1E0h] [rbp-368h]
  __int128 v327; // [rsp+1E8h] [rbp-360h] BYREF
  __int64 v328; // [rsp+1F8h] [rbp-350h]
  int v329; // [rsp+200h] [rbp-348h]
  int v330; // [rsp+204h] [rbp-344h]
  int v331; // [rsp+208h] [rbp-340h]
  int v332; // [rsp+20Ch] [rbp-33Ch]
  int v333; // [rsp+210h] [rbp-338h]
  __int128 v334; // [rsp+218h] [rbp-330h]
  __int128 v335; // [rsp+228h] [rbp-320h] BYREF
  __int128 v336; // [rsp+238h] [rbp-310h] BYREF
  __int64 v337; // [rsp+248h] [rbp-300h]
  __m256i v338; // [rsp+250h] [rbp-2F8h]
  _DWORD v339[2]; // [rsp+270h] [rbp-2D8h] BYREF
  __int128 v340; // [rsp+278h] [rbp-2D0h]
  __int128 v341; // [rsp+288h] [rbp-2C0h]
  __int64 v342; // [rsp+298h] [rbp-2B0h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+2C0h] [rbp-288h] BYREF
  HANDLE v344; // [rsp+2E0h] [rbp-268h]
  HANDLE v345; // [rsp+2E8h] [rbp-260h]
  HANDLE v346; // [rsp+2F8h] [rbp-250h]
  void **v347; // [rsp+300h] [rbp-248h]
  HANDLE v348; // [rsp+308h] [rbp-240h] BYREF
  int v349; // [rsp+310h] [rbp-238h]
  __int128 v350; // [rsp+318h] [rbp-230h]
  struct _KAPC_STATE ApcState; // [rsp+328h] [rbp-220h] BYREF
  _OWORD P[2]; // [rsp+358h] [rbp-1F0h] BYREF
  __int64 v353; // [rsp+378h] [rbp-1D0h]
  _OWORD v354[9]; // [rsp+380h] [rbp-1C8h] BYREF
  char v355[160]; // [rsp+410h] [rbp-138h] BYREF
  char pszDest[16]; // [rsp+4B0h] [rbp-98h] BYREF
  __int128 v357; // [rsp+4C0h] [rbp-88h]
  __int128 v358; // [rsp+4D0h] [rbp-78h]
  __int128 v359; // [rsp+4E0h] [rbp-68h]
  char v360; // [rsp+4F0h] [rbp-58h]

  v4 = ProcessInformationLength;
  v5 = (__int64)ProcessInformation;
  Alignment = ProcessInformationClass;
  v295 = (__int64)ProcessInformation;
  v276 = ProcessInformationLength;
  v7 = 0;
  Object = 0LL;
  v300 = 0LL;
  v275 = 0;
  v278 = 0;
  Size = 0LL;
  v313 = 0LL;
  v322 = 0LL;
  v289[0] = 0;
  v350 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v272 = CurrentThread;
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
      CurrentThread = v272;
    }
  }
  switch ( ProcessInformationClass )
  {
    case ProcessQuotaLimits:
      return PspSetQuotaLimits(ProcessHandle);
    case ProcessBasePriority:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v314 = *(_DWORD *)ProcessInformation;
      v17 = v314;
      if ( v314 < 0 )
        v17 = v314 & 0x7FFFFFFF;
      v18 = v314 < 0 ? 2 : 0;
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
      v333 = *(_DWORD *)ProcessInformation;
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
        v304 = 0;
        Handle = *(HANDLE *)ProcessInformation;
        v321 = Handle;
      }
      else
      {
        if ( ProcessInformationLength != 16 )
          return -1073741820;
        Handle = *(HANDLE *)ProcessInformation;
        v321 = Handle;
        v304 = *((_DWORD *)ProcessInformation + 2);
        v31 = v304;
        if ( (v304 & 0xFFFFFFF8) != 0 )
          return -1073741811;
      }
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
        return -1073741727;
      v297 = 0LL;
      result = ObReferenceObjectByHandle(Handle, 0, LpcPortObjectType, v9, &v297, 0LL);
      DmaAdapter = (PADAPTER_OBJECT)v297;
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
          HalPutDmaAdapter((PADAPTER_OBJECT)v297);
          return v32;
        }
        v33 = (struct _EX_RUNDOWN_REF *)((unsigned __int64)v297 | v31);
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
          v170 = v35 == v36;
          v35 = v36;
          if ( v170 )
          {
            if ( v36 )
            {
              v340 = 0LL;
              v341 = 0LL;
              v37 = (struct _DMA_ADAPTER *)(v36 & 0xFFFFFFFFFFFFFFF8uLL);
              v339[0] = 3145736;
              v339[1] = 13;
              v342 = *((_QWORD *)Object + 136);
              while ( 1 )
              {
                v38 = LpcRequestPort(v37, v339);
                if ( v38 != -1073741801 && v38 != -1073741670 )
                  break;
                KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&PspShortTime);
              }
              PspLockUnlockProcessExclusive((__int64)Object, (__int64)v272, v39, v40);
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
      v344 = *(HANDLE *)ProcessInformation;
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
      v332 = *(_DWORD *)ProcessInformation;
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
      PspSetProcessDefaultHardErrorMode((__int64)Object, (__int64)v272, v30);
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
      v13 = PsChargeProcessNonPagedPoolQuota((struct _KPROCESS *)Object, 0x6028uLL);
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
      v41 = *(_BYTE *)ProcessInformation;
      v282 = *(_BYTE *)ProcessInformation;
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
        v42 = (__int64)v272;
        v43 = Object;
        PspLockProcessExclusive((__int64)Object, (__int64)v272);
        if ( v41 )
          v43[382] |= 4u;
        else
          v43[382] &= ~4u;
        v44 = *((_QWORD *)v43 + 176);
        if ( v44 )
        {
          v45 = *(_WORD *)(v44 + 8);
          if ( v45 == 332 || v45 == 452 )
            v41 = 1;
        }
        KeSetAutoAlignmentProcess((__int64)v43, v41);
        PspUnlockProcessExclusive(v46, v42);
        ObfDereferenceObjectWithTag(v43, 0x79517350u);
        return 0;
      }
      return result;
    case ProcessPriorityClass:
      if ( ProcessInformationLength != 2 )
        return -1073741820;
      v20 = *(_WORD *)ProcessInformation;
      v278 = *(_WORD *)ProcessInformation;
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
        v22 = PspSetProcessPriorityClass(Object, HIBYTE(v278), ProcessHandle, v9);
        if ( v22 >= 0 )
        {
          LOBYTE(v7) = (_BYTE)v20 != 0;
          PsSetProcessPriorityByClass(v21, v7);
        }
        ObfDereferenceObjectWithTag(v21, 0x79517350u);
        return v22;
      }
      return result;
    case ProcessWx86Information:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v47 = *(_DWORD *)ProcessInformation;
      v331 = *(_DWORD *)ProcessInformation;
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
        if ( v47 )
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
        *(_QWORD *)&v300 = *(_QWORD *)ProcessInformation;
        if ( !(_QWORD)v300 )
          return -1073741811;
      }
      else
      {
        if ( ProcessInformationLength != 16 )
          return -1073741820;
        v300 = *(_OWORD *)ProcessInformation;
        if ( !KeVerifyGroupAffinity((__int64)&v300, 0) )
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
      v48 = Object;
      LODWORD(v49) = KeQueryGroupMaskProcess((__int64)Object);
      if ( (((_DWORD)v49 - 1) & (unsigned int)v49) != 0 )
        goto LABEL_180;
      if ( (_DWORD)v4 == 8 )
      {
        _BitScanForward((unsigned int *)&v49, v49);
        v275 = v49;
        v50 = v300 & qword_140CFC838[v49];
        v48 = Object;
        if ( v50 != (_QWORD)v300 )
        {
LABEL_180:
          ObfDereferenceObjectWithTag(v48, 0x79517350u);
          return -1073741811;
        }
        WORD4(v300) = v275;
        *(_QWORD *)&v300 = v50;
      }
      v51 = (__int64)v272;
      KeEnterCriticalRegionThread((__int64)v272);
      if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)v48 + 139) )
      {
        PspLockProcessSharedUnsafe((__int64)v48);
        v55 = PspSetProcessAffinitySafe((_DWORD)v48, 0, 0, (unsigned int)&v300, (__int64)v289);
        PspUnlockProcessSharedUnsafe((__int64)v48);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v48 + 139);
        if ( v55 >= 0 )
        {
          if ( v289[0] )
            PspWritePebAffinityInfo(v51, (__int64)v48, v53, v54);
          _InterlockedOr((volatile signed __int32 *)v48 + 280, 0x200000u);
          v56 = Object;
          KeLeaveCriticalRegionThread(v51, v52, v53, (__int64)v54);
          ObfDereferenceObjectWithTag(v56, 0x79517350u);
          return v55;
        }
      }
      else
      {
        v55 = -1073741558;
      }
      KeLeaveCriticalRegionThread(v51, v52, v53, (__int64)v54);
      ObfDereferenceObjectWithTag(v48, 0x79517350u);
      return v55;
    case ProcessPriorityBoost:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v330 = *(_DWORD *)ProcessInformation;
      v57 = v330 != 0;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      v58 = result;
      if ( result < 0 )
        return result;
      v59 = (struct _EX_RUNDOWN_REF *)Object;
      if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 139) )
        goto LABEL_194;
      v60 = (__int64)v272;
      PspLockProcessExclusive((__int64)v59, (__int64)v272);
      KeSetDisableBoostProcess(v59, v57);
      Count = (struct _EX_RUNDOWN_REF *)v59[188].Count;
      if ( Count != &v59[188] )
      {
        do
        {
          KeSetDisableBoostThread(&Count[-157], v57);
          Count = (struct _EX_RUNDOWN_REF *)*v62;
        }
        while ( Count != v63 );
      }
      PspUnlockProcessExclusive((__int64)v59, v60);
      ExReleaseRundownProtection_0(v59 + 139);
      ObfDereferenceObjectWithTag(v59, 0x79517350u);
      return v58;
    case ProcessDeviceMap:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      v64 = *(HANDLE *)ProcessInformation;
      v345 = *(HANDLE *)ProcessInformation;
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
      v65 = ObSetProcessDeviceMap(Object, v64, v9);
LABEL_208:
      v66 = v65;
      v67 = Object;
      goto LABEL_209;
    case ProcessSessionInformation:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v68 = *(_DWORD *)ProcessInformation;
      v329 = *(_DWORD *)ProcessInformation;
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
      if ( v68 != (unsigned int)MmGetSessionId((__int64)Object) )
        v7 = -1073741790;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      return v7;
    case ProcessForegroundInformation:
      if ( ProcessInformationLength != 1 )
        return -1073741820;
      v23 = *(_BYTE *)ProcessInformation;
      v281 = *(_BYTE *)ProcessInformation;
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
      PsSetProcessPriorityByClass(Object, v7);
      goto LABEL_89;
    case ProcessBreakOnTermination:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v69 = *(_DWORD *)ProcessInformation;
      v326 = *(_DWORD *)ProcessInformation;
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
      if ( v69 )
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
      v303 = *(_DWORD *)v5;
      if ( (v303 & 0xFFFFFFFE) != 0 )
        goto LABEL_133;
      if ( (v303 & 1) != 0 )
        _InterlockedAnd((volatile signed __int32 *)Object + 281, 0xFFFFFFFD);
      else
        _InterlockedOr((volatile signed __int32 *)Object + 281, 2u);
      goto LABEL_142;
    case ProcessHandleTracing:
      v296 = 0LL;
      if ( !ProcessInformationLength )
        goto LABEL_230;
      if ( ((ProcessInformationLength - 4) & 0xFFFFFFFB) != 0 )
        return -1073741820;
      v70 = *(_DWORD *)ProcessInformation;
      LODWORD(v296) = *(_DWORD *)ProcessInformation;
      if ( ProcessInformationLength == 8 )
        HIDWORD(v296) = *((_DWORD *)ProcessInformation + 1);
      else
        HIDWORD(v296) = 0;
      if ( v70 )
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
      v170 = (_DWORD)v4 == 0;
      v71 = Object;
      if ( v170 )
        v72 = 0LL;
      else
        v72 = &v296;
      v73 = PsSetProcessHandleTracingInformation(Object, v72);
      goto LABEL_235;
    case ProcessIoPriority:
      if ( ((ProcessInformationLength - 4) & 0xFFFFFFFB) != 0 )
        return -1073741820;
      if ( ProcessInformationLength == 4 )
      {
        v75 = *(_DWORD *)ProcessInformation;
        v285 = *(_DWORD *)ProcessInformation;
        LOBYTE(v76) = 0;
      }
      else
      {
        v322 = *(_QWORD *)ProcessInformation;
        v75 = v322;
        v76 = HIDWORD(v322);
        v285 = v322;
      }
      if ( v75 >= 4 )
        return -1073741811;
      if ( v75 >= 3
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
      v77 = result;
      if ( result < 0 )
        return result;
      v78 = (volatile signed __int32 *)Object;
      RunRef = (PEX_RUNDOWN_REF)((char *)Object + 1112);
      if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 139) )
      {
        v79 = (__int64)v272;
        PspLockProcessExclusive((__int64)v78, (__int64)v272);
        v80 = *((_DWORD *)v78 + 281);
        v81 = v285 << 27;
        do
        {
          v82 = v80;
          v80 = _InterlockedCompareExchange(v78 + 281, v81 | v80 & 0xC7FFFFFF, v80);
        }
        while ( v80 != v82 );
        v83 = (char *)Object;
        v84 = (KSPIN_LOCK *)*((_QWORD *)Object + 188);
        if ( v84 != (KSPIN_LOCK *)((char *)Object + 1504) )
        {
          v85 = v285;
          do
          {
            if ( (_BYTE)v76 == 1 && ((*((_DWORD *)v84 + 10) >> 9) & 7) < v85 )
              IoBoostThreadIoPriority(v84 - 157, v85, 0);
            PsSetIoPriorityThread((__int64)(v84 - 157), v85);
            v84 = (KSPIN_LOCK *)*v84;
          }
          while ( v84 != (KSPIN_LOCK *)(v83 + 1504) );
        }
        PspUnlockProcessExclusive((__int64)v83, v79);
        ExReleaseRundownProtection_0(RunRef);
        ObfDereferenceObjectWithTag(v83, 0x79517350u);
        return v77;
      }
      else
      {
LABEL_246:
        ObfDereferenceObjectWithTag((PVOID)v78, 0x79517350u);
        return -1073741558;
      }
    case ProcessExecuteFlags:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      v86 = *(_DWORD *)ProcessInformation;
      CurrentProcess = PsGetCurrentProcess();
      v74 = KeSetExecuteOptions((__int64)CurrentProcess, v86);
      if ( v74 < 0 || (v86 & 3) != 1 )
        return v74;
      MmRemoveExecuteGrants();
      return v74;
    case ProcessTlsInformation:
      memset(P, 0, sizeof(P));
      v353 = 0LL;
      v270 = 0;
      v287 = 0LL;
      v293 = 0LL;
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      if ( v9 != 1 )
        return -1073741823;
      if ( ProcessInformationLength < 0x28 )
        return -1073741820;
      v99 = (ProcessInformationLength - 16) / 0x18uLL;
      if ( (ProcessInformationLength - 16) % 0x18uLL )
        return -1073741820;
      if ( ProcessInformationLength == 40 )
      {
        PoolWithQuotaTag = P;
        v272 = (struct _KTHREAD *)P;
      }
      else
      {
        PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, ProcessInformationLength, 0x736C5450u);
        v272 = (struct _KTHREAD *)PoolWithQuotaTag;
        if ( !PoolWithQuotaTag )
          return -1073741670;
      }
      v323 = PoolWithQuotaTag;
      RunRef = (PEX_RUNDOWN_REF)PoolWithQuotaTag;
      memmove(PoolWithQuotaTag, (const void *)v5, v4);
      if ( *((_DWORD *)PoolWithQuotaTag + 1) < 2u
        && (v101 = *(_DWORD *)PoolWithQuotaTag, (*(_DWORD *)PoolWithQuotaTag & 0xFFFFFFFE) == 0)
        && (v102 = *((unsigned int *)PoolWithQuotaTag + 2), (_DWORD)v102)
        && v99 == v102 )
      {
        v103 = 0;
        v270 = 0;
        v104 = PoolWithQuotaTag + 1;
        do
        {
          if ( *v104 )
            goto LABEL_330;
          v270 = ++v103;
          v104 += 6;
        }
        while ( v103 < (unsigned int)v102 );
        v105 = PsGetCurrentProcess();
        Object = v105;
        v276 = 0;
        if ( (v101 & 1) != 0 )
        {
          v106 = v105[1].AffinityPadding[10];
          if ( !v106 || (v107 = *(_WORD *)(v106 + 8), v107 != 332) && v107 != 452 )
          {
LABEL_330:
            v13 = -1073741811;
            goto LABEL_332;
          }
          v276 = 1;
        }
        v108 = v276 ^ 1;
        Alignment = 4 * v108 + 4;
        v295 = 4 * v108 + 4;
        v288 = v5;
        v270 = 0;
        v13 = 0;
        v271 = 0;
        for ( j = 0LL; ; j = Handle )
        {
          Handle = PsGetNextProcessThread((__int64)Object, j);
          v110 = Handle;
          if ( !Handle || v270 >= *((_DWORD *)PoolWithQuotaTag + 2) )
            break;
          if ( (*((_DWORD *)Handle + 29) & 0x400) == 0 && ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Handle + 159) )
          {
            v111 = v110[30];
            v308 = v111;
            if ( v276 )
            {
              v112 = (char *)(v111 + 8236);
              v293 = v111 + 8236;
              LODWORD(v113) = PtrToUlong((const void *)*(unsigned int *)(v111 + 8236));
              v114 = v113;
              v287 = v113;
            }
            else
            {
              v112 = (char *)(v111 + 88);
              v293 = v111 + 88;
              v114 = *(char **)(v111 + 88);
              v287 = v114;
            }
            if ( v114 )
            {
              if ( *((_DWORD *)PoolWithQuotaTag + 1) == 1 )
              {
                if ( v114 == v112 )
                {
                  v287 = 0LL;
                }
                else
                {
                  v115 = *((unsigned int *)PoolWithQuotaTag + 3);
                  v116 = v295 * v115;
                  if ( v295 * v115 )
                  {
                    if ( ((Alignment - 1) & (unsigned int)v114) != 0 )
                      ExRaiseDatatypeMisalignment();
                    if ( (unsigned __int64)&v114[v116] > 0x7FFFFFFF0000LL || &v114[v116] < v114 )
                    {
                      MEMORY[0x7FFFFFFF0000] = 0;
                      v115 = *((unsigned int *)v323 + 3);
                    }
                  }
                  v117 = (volatile void **)PoolWithQuotaTag + 3 * v270 + 3;
                  ProbeForWrite(*v117, v295 * v115, Alignment);
                  memmove((void *)*v117, v114, v295 * *((unsigned int *)PoolWithQuotaTag + 3));
                  _InterlockedOr(v268, 0);
                  v111 = v308;
                }
                v118 = v270;
                *(_DWORD *)(v288 + 24LL * v270 + 16) |= 1u;
                Ptr = RunRef[3 * v118 + 3].Ptr;
                if ( v276 )
                  *(_DWORD *)(v111 + 8236) = PtrToUlong(Ptr);
                else
                  *(_QWORD *)(v111 + 88) = Ptr;
                v120 = v288 + 24LL * v270;
                *(_QWORD *)(v120 + 32) = *((_QWORD *)Handle + 144);
                *(_QWORD *)(v120 + 24) = v287;
                *(_DWORD *)(v120 + 16) ^= 3u;
                ++v270;
              }
              else
              {
                v121 = 24LL * v270;
                *(_DWORD *)(v121 + v288 + 16) |= 1u;
                Ptr_high = HIDWORD(RunRef[1].Ptr);
                if ( v276 )
                {
                  v123 = (unsigned __int64)&v114[4 * Ptr_high];
                  if ( v123 >= 0x7FFFFFFF0000LL )
                    v123 = 0x7FFFFFFF0000LL;
                  LODWORD(v124) = PtrToUlong((const void *)*(unsigned int *)v123);
                  v125 = v124;
                  v293 = v124;
                  v126 = PtrToUlong(*(const void **)((char *)PoolWithQuotaTag + v121 + 24));
                  v127 = (unsigned __int64)&v287[4 * *((unsigned int *)PoolWithQuotaTag + 3)];
                  if ( v127 >= 0x7FFFFFFF0000LL )
                    v127 = 0x7FFFFFFF0000LL;
                  *(_DWORD *)v127 = v126;
                }
                else
                {
                  v128 = (unsigned __int64)&v114[8 * Ptr_high];
                  if ( v128 >= 0x7FFFFFFF0000LL )
                    v128 = 0x7FFFFFFF0000LL;
                  v125 = *(_QWORD *)v128;
                  v293 = *(_QWORD *)v128;
                  v129 = (unsigned __int64)&v287[8 * *((unsigned int *)PoolWithQuotaTag + 3)];
                  if ( v129 >= 0x7FFFFFFF0000LL )
                    v129 = 0x7FFFFFFF0000LL;
                  *(_QWORD *)v129 = *(_QWORD *)((char *)PoolWithQuotaTag + v121 + 24);
                }
                v130 = 3LL * v270;
                v131 = v288;
                *(_QWORD *)(v288 + 8 * v130 + 24) = v125;
                *(_DWORD *)(v131 + 8 * v130 + 16) ^= 3u;
                ++v270;
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
      v301 = *(_DWORD *)ProcessInformation;
      v88 = v301;
      if ( v301 > (unsigned int)MmGetDefaultPagePriority() || v301 < (unsigned int)MiCreateSystemWsles() )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      v89 = result;
      if ( result < 0 )
        return result;
      v78 = (volatile signed __int32 *)Object;
      v90 = (struct _EX_RUNDOWN_REF *)((char *)Object + 1112);
      if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 139) )
        goto LABEL_246;
      v91 = (__int64)v272;
      PspLockProcessExclusive((__int64)v78, (__int64)v272);
      v92 = v88 << 12;
      v93 = *((_DWORD *)v78 + 280);
      do
      {
        v94 = v93;
        v93 = _InterlockedCompareExchange(v78 + 280, v92 | v93 & 0xFFFF8FFF, v93);
      }
      while ( v93 != v94 );
      v95 = Object;
      v96 = (char *)Object + 1504;
      v97 = (char *)*((_QWORD *)Object + 188);
      if ( v97 != (char *)Object + 1504 )
      {
        v98 = v301;
        do
        {
          PsSetPagePriorityThread((__int64)(v97 - 1256), v98);
          v97 = *(char **)v97;
        }
        while ( v97 != v96 );
      }
      PspUnlockProcessExclusive((__int64)v95, v91);
      ExReleaseRundownProtection_0(v90);
      ObfDereferenceObjectWithTag(v95, 0x79517350u);
      return v89;
    case ProcessInstrumentationCallback:
      memset(&ApcState, 0, sizeof(ApcState));
      if ( ((ProcessInformationLength - 8) & 0xFFFFFFF7) != 0 )
        return -1073741820;
      if ( ProcessInformationLength == 8 )
      {
        *(_QWORD *)&v298 = 0LL;
        v132 = *(_QWORD *)ProcessInformation;
        *((_QWORD *)&v298 + 1) = *(_QWORD *)ProcessInformation;
      }
      else
      {
        v298 = *(_OWORD *)ProcessInformation;
        v132 = *((_QWORD *)&v298 + 1);
      }
      if ( DWORD1(v298) )
        return -1073741811;
      if ( (_DWORD)v298 != DWORD1(v298) )
        return -1073741736;
      if ( v132 != (__int64)(v132 << 16) >> 16 )
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
      v133 = PsGetCurrentProcess();
      v134 = SeSinglePrivilegeCheck(SeDebugPrivilege, v9);
      v59 = (struct _EX_RUNDOWN_REF *)Object;
      if ( !v134 && Object != v133 )
      {
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return -1073741727;
      }
      if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 139) )
      {
LABEL_194:
        ObfDereferenceObjectWithTag(v59, 0x79517350u);
        return -1073741558;
      }
      v135 = v59[176].Count;
      v137 = 0;
      if ( v135 )
      {
        v136 = *(_WORD *)(v135 + 8);
        if ( v136 == 332 || v136 == 452 )
          v137 = 1;
      }
      v138 = v133[1].AffinityPadding[10];
      if ( v137 )
      {
        if ( v138 )
        {
          v142 = *(_WORD *)(v138 + 8);
          if ( v142 == 332 || v142 == 452 )
          {
            KeStackAttachProcess((PRKPROCESS)v59, &ApcState);
            if ( v132 < MmGetMaximumUserAddress() && (unsigned int)MmValidateUserCallTarget(v132, 1LL) )
            {
              v143 = 0LL;
              v144 = (__int64 *)v59[176].Count;
              if ( v144 )
                v143 = *v144;
              *(_DWORD *)(v143 + 1160) = DWORD2(v298);
              KeUnstackDetachProcess(&ApcState);
            }
            else
            {
              v7 = -1073741811;
              KeUnstackDetachProcess(&ApcState);
            }
LABEL_377:
            ExReleaseRundownProtection_0(v59 + 139);
LABEL_378:
            ObfDereferenceObjectWithTag(v59, 0x79517350u);
            return v7;
          }
        }
      }
      else if ( !v138 || (v139 = *(_WORD *)(v138 + 8), v139 != 332) && v139 != 452 )
      {
        KeStackAttachProcess((PRKPROCESS)v59, &ApcState);
        if ( !(unsigned int)MmValidateUserCallTarget(v132, 0LL) )
          v7 = -1073741811;
        KeUnstackDetachProcess(&ApcState);
        if ( (v7 & 0x80000000) == 0 )
        {
          v140 = (__int64)v272;
          PspLockProcessExclusive((__int64)v59, (__int64)v272);
          v59[123].Count = v132;
          v141 = (volatile signed __int32 *)v59[188].Count;
          if ( v141 != (volatile signed __int32 *)&v59[188] )
          {
            while ( 1 )
            {
              if ( v132 )
                _interlockedbittestandset(v141 - 314, 0x19u);
              else
                _interlockedbittestandreset(v141 - 314, 0x19u);
              v141 = *(volatile signed __int32 **)v141;
              if ( v141 == (volatile signed __int32 *)&v59[188] )
                break;
              v132 = *((_QWORD *)&v298 + 1);
            }
            v59 = (struct _EX_RUNDOWN_REF *)Object;
          }
          PspUnlockProcessExclusive((__int64)v59, v140);
        }
        goto LABEL_377;
      }
      v7 = -1073741637;
      goto LABEL_377;
    case ProcessThreadStackAllocation:
      v335 = 0LL;
      v336 = 0LL;
      v337 = 0LL;
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      v145 = 0LL;
      if ( ProcessInformationLength == 40 )
      {
        if ( v9 )
        {
          v335 = *(_OWORD *)ProcessInformation;
          v336 = *((_OWORD *)ProcessInformation + 1);
          v337 = *((_QWORD *)ProcessInformation + 4);
          v145 = (char *)ProcessInformation + 32;
          v5 = (__int64)&v335;
        }
        v146 = *(_DWORD *)v5;
        if ( *(_DWORD *)v5 > 0x40u || *(_DWORD *)(v5 + 4) | *(_DWORD *)(v5 + 8) | *(_DWORD *)(v5 + 12) )
          return -1073741811;
        v5 += 16LL;
      }
      else
      {
        if ( ProcessInformationLength != 24 )
          return -1073741820;
        v146 = 0;
        if ( v9 )
        {
          v336 = *(_OWORD *)ProcessInformation;
          v145 = (char *)ProcessInformation + 16;
          v5 = (__int64)&v336;
        }
      }
      if ( !*(_QWORD *)v5 )
        return -1073741811;
      v325 = *(_QWORD *)v5;
      *(_QWORD *)(v5 + 16) = 0LL;
      result = MmAllocateUserStack((int)v5 + 16, *(_QWORD *)(v5 + 8), (int)&v325, v146, 0);
      if ( result >= 0 && v9 )
        *(_QWORD *)v145 = *(_QWORD *)(v5 + 16);
      return result;
    case ProcessAffinityUpdateMode:
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v305 = *(_DWORD *)ProcessInformation;
      if ( (v305 & 0xFFFFFFFC) != 0 )
        return -1073741811;
      return PspSetProcessAffinityUpdateMode(CurrentThread, &v305);
    case ProcessMemoryAllocationMode:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v320 = *(_DWORD *)ProcessInformation;
      v147 = v320;
      if ( (v320 & 0xFFFFFFFE) != 0 )
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
      if ( (v147 & 1) != 0 )
        _InterlockedOr((volatile signed __int32 *)Object + 281, 0x200000u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 281, 0xFFDFFFFF);
      goto LABEL_89;
    case ProcessTokenVirtualizationEnabled:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v148 = *(_DWORD *)ProcessInformation;
      v315 = *(_DWORD *)ProcessInformation;
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
      v149 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken((PEPROCESS)Object);
      SeSetVirtualizationToken(v149, v148);
      HalPutDmaAdapter(v149);
      goto LABEL_89;
    case ProcessConsoleHostProcess:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      if ( ProcessHandle != (HANDLE)-1LL || (*(_QWORD *)ProcessInformation & 3) != 1 )
        return -1073741811;
      v150 = *(_QWORD *)ProcessInformation;
      PsGetCurrentProcess()[1].AffinityPadding[3] = v150;
      return 0;
    case ProcessMitigationPolicy:
      v273 = 0;
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      v274 = *(HANDLE *)ProcessInformation;
      if ( ProcessHandle != (HANDLE)-1LL && (_DWORD)v274 != 2 )
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
      v324 = *(_DWORD *)ProcessInformation;
      v210 = v324;
      if ( (v324 & 0xFFFFFFFE) != 0 )
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
      v311 = 0LL;
      if ( v9 != 1 )
        goto LABEL_774;
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
      v311 = v217;
      if ( !v217 )
        return -1073741670;
      memmove(v217, Src[1], LOWORD(Src[0]));
      Src[1] = v213;
      v5 = (__int64)Src;
      v347 = Src;
LABEL_774:
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
      v319 = *(_DWORD *)v5 != 0;
      v221 = PsGetCurrentProcess();
      v151 = (char *)Object;
      if ( v221 == Object )
        goto LABEL_169;
      if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, v9) )
      {
        ObfDereferenceObjectWithTag(v151, 0x79517350u);
        return -1073741727;
      }
      v13 = 0;
      KeSetCheckStackExtentsProcess(v151, v220);
      if ( !v220 && (*((_DWORD *)v151 + 280) & 0x20000) != 0 )
      {
        _InterlockedAnd((volatile signed __int32 *)v151 + 280, 0xFFFDFFFF);
        v151 = (char *)Object;
      }
      goto LABEL_749;
    case ProcessMemoryExhaustion:
      if ( ProcessInformationLength != 16 )
        return -1073741820;
      v350 = *(_OWORD *)ProcessInformation;
      if ( (_WORD)v350 != 1 || DWORD1(v350) )
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
      if ( *((_QWORD *)&v350 + 1) )
        _InterlockedOr((volatile signed __int32 *)Object + 281, 0x100u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 281, 0xFFFFFEFF);
      goto LABEL_89;
    case ProcessFaultInformation:
      v312 = 0LL;
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
      v312 = *(_QWORD *)v5;
      v65 = PsSetProcessFaultInformation(Object, &v312);
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
      v338 = *(__m256i *)v5;
      if ( v338.m256i_i32[0] != 3 )
      {
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return -1073741735;
      }
      if ( (v338.m256i_i32[1] & 0xFFFFFFF8) != 0
        || *(_OWORD *)&v338.m256i_u64[1] != 0LL
        || ((((unsigned __int32)v338.m256i_i32[1] >> 1) & 1) != 0 || (v338.m256i_i8[4] & 4) != 0)
        && (v338.m256i_i8[4] & 1) == 0 )
      {
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return -1073741811;
      }
      if ( (((unsigned __int32)v338.m256i_i32[1] >> 1) & 1) != 0 || (v338.m256i_i8[4] & 4) != 0 )
      {
        v71 = Object;
        v73 = MmReleaseCommitForMemResetPages(
                (volatile signed __int32 *)Object,
                ((unsigned __int32)v338.m256i_i32[1] >> 2) & 1);
      }
      else
      {
        v71 = Object;
        v73 = MmSetCommitReleaseEligibility((__int64)Object, v338.m256i_i8[4] & 1, v222, v223);
      }
LABEL_235:
      v74 = v73;
      ObfDereferenceObjectWithTag(v71, 0x79517350u);
      return v74;
    case ProcessDefaultCpuSetsInformation:
    case ProcessAllowedCpuSetsInformation:
      if ( (ProcessInformationLength & 7) != 0 || ProcessInformationLength > 0xA0 )
        return -1073741820;
      memmove(v355, ProcessInformation, ProcessInformationLength);
      v224 = (unsigned int)v4 >> 3;
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
      v65 = KeSetCpuSetsProcess((__int64)Object, v224, v355);
      goto LABEL_208;
    case ProcessSubsystemProcess:
      if ( (PsGetCurrentProcess()[1].IdealProcessorPadding[10] & 0x100) == 0 )
        return -1073741727;
      v302 = 0LL;
      result = ObReferenceObjectByHandle(ProcessHandle, 0x200u, (POBJECT_TYPE)PsProcessType, v9, &v302, 0LL);
      v226 = result;
      if ( result >= 0 )
      {
        _InterlockedOr((volatile signed __int32 *)v302 + 543, 0x40u);
        HalPutDmaAdapter((PADAPTER_OBJECT)v302);
        return v226;
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
      v227 = *(_DWORD *)ProcessInformation;
      v317 = *(_DWORD *)ProcessInformation;
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
      v59 = (struct _EX_RUNDOWN_REF *)Object;
      v228 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
      if ( v228 )
      {
        ExEnableRaiseUMExceptionOnInvalidHandleClose(v228, v227);
        ObDereferenceProcessHandleTable(v59);
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
      v229 = *(_BYTE *)ProcessInformation;
      v284 = *(_BYTE *)ProcessInformation;
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
      if ( v229 )
        _InterlockedOr((volatile signed __int32 *)Object + 543, 0x200u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 543, 0xFFFFFDFF);
      goto LABEL_89;
    case ProcessPowerThrottlingState:
      v348 = 0LL;
      v349 = 0;
      if ( ProcessInformationLength != 12 )
        return -1073741820;
      v348 = *(HANDLE *)ProcessInformation;
      v230 = *((_DWORD *)ProcessInformation + 2);
      v349 = v230;
      if ( (_DWORD)v348 != 1 || (HIDWORD(v348) & 0xFFFFFFFC) != 0 || (~HIDWORD(v348) & v230) != 0 )
        return -1073741811;
      ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
      if ( !ExtensionTable )
        return -1073741822;
      v232 = ObReferenceObjectByHandleWithTag(
               ProcessHandle,
               0x2000u,
               (POBJECT_TYPE)PsProcessType,
               v9,
               0x79517350u,
               &Object,
               0LL);
      if ( v232 >= 0 )
      {
        v232 = (*(__int64 (__fastcall **)(PVOID, HANDLE *))(ExtensionTable + 8))(Object, &v348);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
      }
      ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
      return v232;
    case ProcessDisableSystemAllowedCpuSets:
      result = ExCpuSetResourceManagerAccessCheck(v9);
      if ( result < 0 )
        return result;
      if ( (_DWORD)v4 != 1 )
        return -1073741820;
      v225 = *(_BYTE *)v5;
      v283 = *(_BYTE *)v5;
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
      if ( v225 )
        _InterlockedOr((volatile signed __int32 *)Object + 280, 0x8000000u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 280, 0xF7FFFFFF);
      KeRecomputeCpuSetAffinityProcess((__int64)Object);
      goto LABEL_89;
    case ProcessEnergyTrackingState:
      if ( ProcessInformationLength < 8 )
        return -1073741820;
      memset(v354, 0, sizeof(v354));
      v233 = 144;
      if ( ProcessInformationLength < 0x90 )
        v233 = ProcessInformationLength;
      memmove(v354, ProcessInformation, v233);
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
      v234 = Object;
      v235 = PoSetProcessEnergyTrackingState(Object, v354);
      v16 = v234;
      if ( v235 >= 0 )
        goto LABEL_90;
      ObfDereferenceObjectWithTag(v234, 0x79517350u);
      return v235;
    case ProcessManageWritesToExecutableMemory:
      return -1073741637;
    case ProcessTelemetryCoverage:
      if ( ProcessInformationLength != 24 )
        return -1073741820;
      *(_OWORD *)pszDest = 0LL;
      v357 = 0LL;
      v358 = 0LL;
      v359 = 0LL;
      v360 = 0;
      v236 = *(_OWORD *)ProcessInformation;
      v327 = v236;
      v328 = *((_QWORD *)ProcessInformation + 2);
      if ( (unsigned __int64)(v236 + 65) > 0x7FFFFFFF0000LL || (__int64)v236 + 65 < (unsigned __int64)v236 )
        MEMORY[0x7FFFFFFF0000] = 0;
      RtlStringCbCopyA(pszDest, 0x41uLL, (NTSTRSAFE_PCSTR)v236);
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
      *(_QWORD *)&v327 = pszDest;
      v360 = 0;
      v13 = EtwSetProcessTelemetryCoverage(Object, &v327);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_DWORD *)(v5 + 12) = HIDWORD(v327);
      *(_DWORD *)(v5 + 16) = v328;
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
      v279 = 0;
      if ( Alignment == 87 )
        v237 = (*(_BYTE *)v5 & 1 ^ *(_BYTE *)v5) & 2 ^ *(_BYTE *)v5 & 1;
      else
        v237 = *(_DWORD *)v5;
      v279 = v237;
      if ( (v237 & 0xFFFFFFF0) != 0 )
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
      v238 = (volatile signed __int32 *)Object;
      _InterlockedAnd((volatile signed __int32 *)Object + 543, 0xFFE7FFFF);
      v239 = (((v279 >> 2) & 1) << 19) | 0x100000;
      if ( (v279 & 8) == 0 )
        v239 = ((v279 >> 2) & 1) << 19;
      _InterlockedOr(v238 + 543, v239);
      v240 = (volatile signed __int32 *)Object;
      _InterlockedAnd((volatile signed __int32 *)Object + 280, 0xFCFFFFFF);
      v241 = ((v279 & 1) << 24) | 0x2000000;
      if ( (v279 & 2) == 0 )
        v241 = (v279 & 1) << 24;
      _InterlockedOr(v240 + 280, v241);
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
      v316 = *(_DWORD *)ProcessInformation;
      v242 = v316;
      if ( (v316 & 0xFFFFFFFE) != 0 )
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
      LOBYTE(v243) = 1;
      PspSetProcessForegroundBackgroundRequest(Object, v242 & 1, v243);
LABEL_89:
      v16 = Object;
LABEL_90:
      ObfDereferenceObjectWithTag(v16, 0x79517350u);
      return 0;
    case ProcessLoaderDetour:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v244 = *(_DWORD *)ProcessInformation;
      v318 = *(_DWORD *)ProcessInformation;
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
      v245 = PsGetCurrentProcess();
      v151 = (char *)Object;
      if ( Object != v245 || !v244 )
      {
        v13 = -1073741811;
        goto LABEL_749;
      }
      v246 = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
      if ( !v246 )
        goto LABEL_749;
      (*(void (__fastcall **)(char *, _QWORD))(v246 + 40))(v151, v244);
      ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
      ObfDereferenceObjectWithTag(v151, 0x79517350u);
      return v13;
    case ProcessCombineSecurityDomainsInformation:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      v247 = *(HANDLE *)ProcessInformation;
      v346 = *(HANDLE *)ProcessInformation;
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
      v66 = ObReferenceObjectByHandleWithTag(v247, 0x1000u, (POBJECT_TYPE)PsProcessType, v9, 0x79517350u, &v313, 0LL);
      v67 = Object;
      if ( v66 < 0 )
      {
LABEL_209:
        ObfDereferenceObjectWithTag(v67, 0x79517350u);
        return v66;
      }
      else
      {
        v248 = PspCombineSecurityDomains(Object, v313);
        ObfDereferenceObjectWithTag(v313, 0x79517350u);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return v248;
      }
    case ProcessLeapSecondInformation:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      Size = *(_QWORD *)ProcessInformation;
      if ( (Size & 0xFFFFFFFE) != 0 || ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      v249 = PsGetCurrentProcess();
      v250 = v249[1].AffinityPadding[4];
      if ( !v250 )
        return -1073741790;
      v251 = 0LL;
      v252 = (__int64 *)v249[1].AffinityPadding[10];
      if ( v252 )
        v251 = *v252;
      v253 = Size & 1;
      v254 = *(_DWORD *)(v250 + 1984);
      if ( (Size & 1) != 0 )
        v255 = v254 | 1;
      else
        v255 = v254 & 0xFFFFFFFE;
      *(_DWORD *)(v250 + 1984) = v255;
      if ( v251 )
      {
        v256 = *(_DWORD *)(v251 + 1140);
        if ( v253 )
          v257 = v256 | 1;
        else
          v257 = v256 & 0xFFFFFFFE;
        *(_DWORD *)(v251 + 1140) = v257;
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
        return PspFreeUserFiberShadowStack();
      return -1073741637;
    case ProcessAltSystemCallInformation:
      if ( ProcessInformationLength != 1 )
        return -1073741820;
      if ( !*(_BYTE *)ProcessInformation )
        return -1073741811;
      if ( v9 )
        return -1073741790;
      v309 = 0LL;
      result = ObReferenceObjectByHandle(ProcessHandle, 0xBEAu, (POBJECT_TYPE)PsProcessType, 0, &v309, 0LL);
      if ( result >= 0 )
      {
        v258 = PspEnableAltSystemCallHandling(v309);
        HalPutDmaAdapter((PADAPTER_OBJECT)v309);
        return v258;
      }
      return result;
    case ProcessDynamicEHContinuationTargets:
      v259 = 0LL;
      if ( ProcessInformationLength != 16 )
        return -1073741820;
      *(_OWORD *)Address = *(_OWORD *)ProcessInformation;
      v260 = 16 * LOWORD(Address[0]);
      if ( !v260 )
        return -1073741811;
      v261 = (const void *)Address[1];
      if ( !Address[1] )
        return -1073741811;
      Size = 16 * (unsigned int)LOWORD(Address[0]);
      ProbeForWrite(Address[1], v260, 8u);
      if ( WORD1(Address[0]) || HIDWORD(Address[0]) )
        return -1073741811;
      if ( v9 != 1 )
        return -1073741790;
      v292 = 0LL;
      result = ObReferenceObjectByHandle(ProcessHandle, 0x200u, (POBJECT_TYPE)PsProcessType, 1, &v292, 0LL);
      v262 = (_KPROCESS *)v292;
      Object = v292;
      if ( result < 0 )
        return result;
      if ( v262 == PsGetCurrentProcess() && (HIDWORD(v262[2].ReadyListHead.Blink) & 0x40000000) != 0 )
      {
        v13 = -1073741790;
      }
      else if ( (HIDWORD(v262[2].ReadyListHead.Blink) & 0x4000) != 0 )
      {
        Pool2 = (_DWORD *)ExAllocatePool2(257LL, Size, 1313359172LL);
        v259 = Pool2;
        v292 = Pool2;
        if ( Pool2 )
        {
          memmove(Pool2, v261, Size);
          v289[1] = 0;
          v13 = PspProcessDynamicEHContinuationTargets((ULONG_PTR)v262);
          v271 = v13;
          v275 = 0;
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
      goto LABEL_928;
    case ProcessDynamicEnforcedCetCompatibleRanges:
      v259 = 0LL;
      if ( ProcessInformationLength != 16 )
        return -1073741820;
      *(_OWORD *)v307 = *(_OWORD *)ProcessInformation;
      v264 = 24 * LOWORD(v307[0]);
      if ( !v264 )
        return -1073741811;
      v265 = (const void *)v307[1];
      if ( !v307[1] )
        return -1073741811;
      Size = v264;
      ProbeForWrite(v307[1], v264, 8u);
      if ( WORD1(v307[0]) || HIDWORD(v307[0]) )
        return -1073741811;
      if ( v9 != 1 )
        return -1073741790;
      v291 = 0LL;
      result = ObReferenceObjectByHandle(ProcessHandle, 0x200u, (POBJECT_TYPE)PsProcessType, 1, &v291, 0LL);
      v266 = (struct _KPROCESS *)v291;
      Object = v291;
      if ( result < 0 )
        return result;
      if ( v266 == PsGetCurrentProcess() && (HIDWORD(v266[2].ReadyListHead.Blink) & 0x40000000) != 0 )
      {
        v13 = -1073741790;
      }
      else if ( (HIDWORD(v266[2].ReadyListHead.Blink) & 0x4000) != 0 )
      {
        v267 = (_DWORD *)ExAllocatePool2(257LL, Size, 1380009284LL);
        v259 = v267;
        v291 = v267;
        if ( v267 )
        {
          memmove(v267, v265, Size);
          LODWORD(v294) = 0;
          v13 = PspProcessDynamicEnforcedAddressRanges(
                  v266,
                  (__int64)&v266[2].ActiveProcessors.Bitmap[5],
                  (__int64)v259,
                  (unsigned __int16)v307[0],
                  (unsigned int *)&v294);
          v271 = v13;
          while ( 1 )
          {
            v275 = v7;
            if ( v7 >= (unsigned int)v294 )
              break;
            *((_DWORD *)v265 + 6 * v7 + 4) = v259[6 * v7 + 4];
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
LABEL_928:
      if ( Object )
        HalPutDmaAdapter((PADAPTER_OBJECT)Object);
      if ( v259 )
      {
        ExFreePoolWithTag(v259, 0);
        return v13;
      }
      return v13;
    default:
      return -1073741821;
  }
  v151 = (char *)PsGetCurrentProcess();
  Object = v151;
  v152 = 0x140000000uLL;
  switch ( (int)v274 )
  {
    case 1:
      if ( (HIDWORD(v274) & 0xFFFFFFF0) != 0 )
      {
        v13 = -1073741811;
        goto LABEL_748;
      }
      v153 = (HIDWORD(v274) >> 1) & 1;
      if ( !v153 && (*((_DWORD *)v151 + 628) & 0x10) != 0 )
        goto LABEL_436;
      if ( (BYTE4(v274) & 1) == 0 && (*((_DWORD *)v151 + 628) & 0x40) == 0 )
        goto LABEL_436;
      v154 = (HIDWORD(v274) >> 3) & 1;
      if ( !v154 && (*((_DWORD *)v151 + 628) & 8) != 0 )
        goto LABEL_436;
      if ( v154 )
      {
        if ( !v153 )
        {
          v13 = -1073741776;
          goto LABEL_748;
        }
      }
      else if ( !v153 )
      {
LABEL_442:
        if ( (BYTE4(v274) & 1) != 0 )
        {
          _InterlockedAnd((volatile signed __int32 *)v151 + 628, 0xFFFFFFBF);
          v151 = (char *)Object;
        }
        if ( v154 )
        {
          _InterlockedOr((volatile signed __int32 *)v151 + 628, 8u);
          v151 = (char *)Object;
        }
        goto LABEL_446;
      }
      _InterlockedOr((volatile signed __int32 *)v151 + 628, 0x10u);
      v151 = (char *)Object;
      goto LABEL_442;
    case 2:
      v159 = HIDWORD(v274);
      if ( (HIDWORD(v274) & 0xFFFFFFF0) != 0 )
      {
        v13 = -1073741811;
        goto LABEL_748;
      }
      if ( (BYTE4(v274) & 1) != 0 && (BYTE4(v274) & 8) != 0 )
        v159 = HIDWORD(v274) & 0xFFFFFFF7;
      v160 = v159 & 1;
      if ( (v159 & 1) == 0 && ((v159 & 2) != 0 || (v159 & 4) != 0) )
      {
        v13 = -1073741811;
        goto LABEL_748;
      }
      if ( (unsigned int)PsIsSystemWideMitigationOptionSet() )
      {
LABEL_747:
        v13 = -1073741637;
        goto LABEL_748;
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
      v273 = 1;
      v161 = PsGetCurrentProcess();
      v151 = (char *)Object;
      if ( Object == v161 )
      {
LABEL_513:
        if ( (v159 & 1) == 0 && (*((_DWORD *)v151 + 628) & 0x100) != 0 )
        {
          v13 = -1073741790;
          goto LABEL_748;
        }
        v172 = (v159 >> 3) & 1;
        if ( !v172 && (v159 & 1) == 0 && (*((_DWORD *)v151 + 628) & 0x800) != 0 )
        {
          v13 = -1073741790;
          goto LABEL_748;
        }
        v173 = (v159 >> 1) & 1;
        if ( v173 )
        {
          v174 = *((_DWORD *)v151 + 628);
          if ( (v174 & 0x100) != 0 && (v174 & 0x200) == 0 )
          {
            v13 = -1073741790;
            goto LABEL_748;
          }
        }
        v171 = (v159 >> 2) & 1;
        if ( v171 )
        {
          v175 = *((_DWORD *)v151 + 628);
          if ( (v175 & 0x100) != 0 && (v175 & 0x400) == 0 )
          {
            v13 = -1073741790;
            goto LABEL_748;
          }
        }
        if ( v160 )
        {
          v176 = 2304;
        }
        else
        {
          v176 = 0;
          if ( v172 )
            v176 = 2048;
        }
        v165 = (v173 ^ 1) << 9;
        v168 = v176 | 0x200;
        if ( !v173 )
          v168 = v176;
        v162 = (volatile signed __int32 *)(v151 + 2512);
        v169 = v168 | 0x400;
        v170 = v171 == 0;
      }
      else
      {
        v162 = (volatile signed __int32 *)((char *)Object + 2512);
        v163 = *((_DWORD *)Object + 628);
        if ( (v163 & 0x100) != 0 )
        {
          memset(&SubjectContext, 0, sizeof(SubjectContext));
          SeCaptureSubjectContextEx(0LL, (PEPROCESS)Object, &SubjectContext);
          IsSandboxedToken = RtlIsSandboxedToken(&SubjectContext, 1);
          SeReleaseSubjectContext(&SubjectContext);
          if ( (RtlIsSandboxedToken(0LL, v9) || !IsSandboxedToken || (*v162 & 0x400) == 0)
            && !SeSinglePrivilegeCheck(SeDebugPrivilege, v9) )
          {
            goto LABEL_436;
          }
        }
        else if ( (v159 & 8) == 0 && (v159 & 1) == 0 && (v163 & 0x800) != 0 )
        {
          v13 = -1073741790;
          goto LABEL_748;
        }
        v165 = 0;
        if ( (v159 & 1) == 0 )
          v165 = 2304;
        v166 = -v160;
        v167 = (v166 != 0 ? 0x100 : 0) | 0x800;
        if ( (v159 & 8) == 0 )
          v167 = v166 != 0 ? 0x900 : 0;
        if ( ((v159 >> 1) & 1) == 0 )
          v165 |= 0x200u;
        v168 = v167 | 0x200;
        if ( ((v159 >> 1) & 1) == 0 )
          v168 = v167;
        v169 = v168 | 0x400;
        v171 = (v159 >> 2) & 1;
        v170 = v171 == 0;
      }
      if ( v170 )
        v169 = v168;
      if ( !v171 )
        v165 |= 0x400u;
      RtlInterlockedSetClearBits(v162, v169, v165);
      v13 = 0;
      goto LABEL_748;
    case 3:
      if ( (HIDWORD(v274) & 0xFFFFFFFC) != 0 )
      {
        v13 = -1073741811;
      }
      else if ( ((HIDWORD(v274) >> 1) & 1) != 0 || (BYTE4(v274) & 1) == 0 )
      {
        if ( ((HIDWORD(v274) >> 1) & 1) == 0 || (BYTE4(v274) & 1) != 0 )
        {
          v155 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)v151);
          if ( v155 )
          {
            v13 = -1073741790;
            if ( (unsigned __int8)ExEnableHandleExceptions(v155, BYTE4(v274) & 1) )
              v13 = 0;
            ObDereferenceProcessHandleTable(v151);
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
      goto LABEL_748;
    case 4:
      v156 = HIDWORD(v274);
      if ( (HIDWORD(v274) & 0xFFFFFFFC) != 0 )
      {
        v13 = -1073741811;
        goto LABEL_748;
      }
      if ( (BYTE4(v274) & 1) != 0 && (BYTE4(v274) & 2) != 0 )
      {
        v156 = HIDWORD(v274) & 0xFFFFFFFD;
        HIDWORD(v274) &= ~2u;
      }
      v157 = v156 & 1;
      if ( (v156 & 1) == 0 && (*((_DWORD *)v151 + 628) & 0x1000) != 0 )
      {
        v13 = -1073741790;
        goto LABEL_748;
      }
      v158 = (v156 >> 1) & 1;
      if ( v158 )
        goto LABEL_472;
      if ( v157 )
        goto LABEL_474;
      if ( (*((_DWORD *)v151 + 628) & 0x2000) != 0 )
      {
        v13 = -1073741790;
        goto LABEL_748;
      }
LABEL_472:
      if ( !v157 && !v158 )
        goto LABEL_476;
LABEL_474:
      if ( (unsigned __int8)PsIsGuiThread(v272) )
      {
        v13 = -1073741431;
      }
      else
      {
LABEL_476:
        v13 = 0;
        if ( v157 )
        {
          _InterlockedOr((volatile signed __int32 *)v151 + 628, 0x3000u);
          v151 = (char *)Object;
        }
        else if ( v158 )
        {
          _InterlockedOr((volatile signed __int32 *)v151 + 628, 0x2000u);
LABEL_480:
          v151 = (char *)Object;
        }
      }
      goto LABEL_748;
    case 6:
      if ( (HIDWORD(v274) & 0xFFFFFFFE) != 0 )
      {
        v13 = -1073741811;
      }
      else if ( (BYTE4(v274) & 1) != 0 || (*((_DWORD *)v151 + 628) & 0x80u) == 0 )
      {
        v13 = 0;
        if ( (BYTE4(v274) & 1) != 0 )
        {
          _InterlockedOr((volatile signed __int32 *)v151 + 628, 0x80u);
          v151 = (char *)Object;
        }
      }
      else
      {
        v13 = -1073741790;
      }
      goto LABEL_748;
    case 7:
      if ( (HIDWORD(v274) & 0xFFFFFFF8) != 0 )
      {
        v13 = -1073741811;
      }
      else if ( (*((_DWORD *)v151 + 628) & 1) != 0 )
      {
        if ( (BYTE4(v274) & 4) != 0 )
        {
          _InterlockedOr((volatile signed __int32 *)v151 + 628, 4u);
          v13 = 0;
          v151 = (char *)Object;
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
      goto LABEL_748;
    case 8:
      v177 = HIDWORD(v274);
      if ( (HIDWORD(v274) & 0xFFFFFFE0) != 0 )
      {
        v13 = -1073741811;
        goto LABEL_748;
      }
      if ( (BYTE4(v274) & 1) != 0 && ((BYTE4(v274) & 8) != 0 || (BYTE4(v274) & 0x10) != 0) )
        v177 = HIDWORD(v274) & 0xFFFFFFE7;
      if ( (v177 & 2) != 0 && (v177 & 0x10) != 0 )
        v177 &= ~0x10u;
      v178 = (v177 >> 3) & 1;
      if ( v178 && (v177 & 0x10) != 0 )
      {
        v13 = -1073741811;
        goto LABEL_748;
      }
      v179 = (v177 >> 1) & 1;
      if ( (v177 & 1) + v179 > 1 )
      {
        v13 = -1073741811;
        goto LABEL_748;
      }
      if ( (v177 & 1) != 0 )
        goto LABEL_575;
      if ( (unsigned __int8)v151[2168] >= 8u && (unsigned __int8)v151[2169] >= 8u )
      {
        v13 = -1073741790;
        goto LABEL_748;
      }
      if ( !v179 )
      {
        LOBYTE(v152) = 6;
        if ( (unsigned int)SeCompareSigningLevels((unsigned __int8)v151[2168], v152) )
        {
          LOBYTE(v152) = 6;
          if ( (unsigned int)SeCompareSigningLevels((unsigned __int8)v151[2169], v152) )
          {
            v13 = -1073741790;
            goto LABEL_748;
          }
        }
      }
LABEL_575:
      if ( (*((_DWORD *)v151 + 628) & 0x3000000) != 0 && (v177 & 0x10) == 0 && !v179 && !v178 && (v177 & 1) == 0 )
      {
        v13 = -1073741790;
        goto LABEL_748;
      }
      v13 = 0;
      if ( (v177 & 1) != 0 )
      {
        if ( (unsigned __int8)v151[2168] < 8u )
          v151[2168] = 8;
        if ( (unsigned __int8)v151[2169] < 8u )
          v151[2169] = 8;
      }
      else if ( v179 )
      {
        LOBYTE(v152) = 6;
        if ( !(unsigned int)SeCompareSigningLevels((unsigned __int8)v151[2168], v152) )
        {
          v13 = -1073741790;
          goto LABEL_748;
        }
        LOBYTE(v180) = 6;
        if ( (unsigned int)SeCompareSigningLevels(v180, (unsigned __int8)v151[2169]) )
          v151[2169] = 6;
      }
      if ( v177 )
        v7 = 0x800000;
      v181 = ((v177 & 8) == 0) << 24;
      v182 = v7 | 0x1000000;
      if ( !v178 )
        v182 = v7;
      v183 = (v177 >> 4) & 1;
      if ( !v183 )
        v181 |= 0x2000000u;
      v184 = v182 | 0x2000000;
      if ( !v183 )
        v184 = v182;
      RtlInterlockedSetClearBits((volatile signed __int32 *)v151 + 628, v184, v181);
      goto LABEL_748;
    case 9:
      if ( (HIDWORD(v274) & 0xFFFFFFFC) != 0 )
      {
        v13 = -1073741811;
      }
      else if ( (BYTE4(v274) & 1) != 0 || (*((_DWORD *)v151 + 628) & 0x10000) == 0 )
      {
        if ( (BYTE4(v274) & 1) != 0 || (BYTE4(v274) & 2) != 0 || (*((_DWORD *)v151 + 628) & 0x20000) == 0 )
        {
          v13 = 0;
          if ( (BYTE4(v274) & 1) != 0 )
          {
            RtlInterlockedSetClearBits((volatile signed __int32 *)v151 + 628, 0x10000, 0x20000);
          }
          else if ( (BYTE4(v274) & 2) != 0 )
          {
            RtlInterlockedSetClearBits((volatile signed __int32 *)v151 + 628, 0x20000, 0x10000);
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
      goto LABEL_748;
    case 10:
      v185 = HIDWORD(v274);
      if ( (HIDWORD(v274) & 0xFFFFFFE0) != 0 )
      {
        v13 = -1073741811;
        goto LABEL_748;
      }
      if ( (BYTE4(v274) & 1) != 0 && (BYTE4(v274) & 8) != 0 )
        v185 = HIDWORD(v274) & 0xFFFFFFF7;
      if ( (v185 & 2) != 0 && (v185 & 0x10) != 0 )
        v185 &= ~0x10u;
      v186 = v185 & 1;
      v187 = 0x80000;
      if ( (v185 & 1) == 0 && (*((_DWORD *)v151 + 628) & 0x80000) != 0 )
        goto LABEL_436;
      v188 = (v185 >> 1) & 1;
      if ( !v188 && (*((_DWORD *)v151 + 628) & 0x200000) != 0 )
        goto LABEL_436;
      v189 = (v185 >> 2) & 1;
      if ( !v189 && (*((_DWORD *)v151 + 628) & 0x40000) != 0 )
      {
        v13 = -1073741790;
        goto LABEL_748;
      }
      v190 = (v185 >> 3) & 1;
      if ( !v190 && (v185 & 1) == 0 && (*((_DWORD *)v151 + 628) & 0x100000) != 0 )
        goto LABEL_436;
      v191 = (v185 >> 4) & 1;
      if ( v191 || v188 || (*((_DWORD *)v151 + 628) & 0x400000) == 0 )
      {
        v192 = 0;
        if ( v186 )
        {
          v192 = 0x100000;
        }
        else
        {
          v187 = 0;
          if ( v190 )
            v187 = 0x100000;
        }
        if ( v188 )
        {
          v187 |= 0x200000u;
          v192 |= 0x400000u;
        }
        else if ( v191 )
        {
          v187 |= 0x400000u;
        }
        v193 = v187 | 0x40000;
        if ( !v189 )
          v193 = v187;
        RtlInterlockedSetClearBits((volatile signed __int32 *)v151 + 628, v193, v192);
        v13 = 0;
      }
      else
      {
        v13 = -1073741790;
      }
      goto LABEL_748;
    case 13:
      v194 = HIDWORD(v274);
      if ( (HIDWORD(v274) & 0xFFFFFFF8) != 0 )
      {
        v13 = -1073741811;
        goto LABEL_748;
      }
      if ( (BYTE4(v274) & 1) == 0 && (BYTE4(v274) & 4) != 0 )
      {
        v13 = -1073741811;
        goto LABEL_748;
      }
      if ( (BYTE4(v274) & 1) != 0 && (BYTE4(v274) & 2) != 0 )
        v194 = HIDWORD(v274) & 0xFFFFFFFD;
      NoChildProcessRestrictedPolicy = PspGetNoChildProcessRestrictedPolicy(v151);
      v196 = NoChildProcessRestrictedPolicy;
      v197 = v194 & 1;
      if ( (v194 & 1) == 0 && NoChildProcessRestrictedPolicy - 1 <= 1 )
      {
        v13 = -1073741790;
        goto LABEL_748;
      }
      v198 = (v194 >> 2) & 1;
      if ( v198 && (_DWORD)v196 == 1 )
      {
        v13 = -1073741790;
        goto LABEL_748;
      }
      v199 = (v194 >> 1) & 1;
      if ( v199 )
        goto LABEL_664;
      if ( v197 )
        goto LABEL_665;
      if ( (_DWORD)v196 == 3 )
      {
        v13 = -1073741790;
      }
      else
      {
LABEL_664:
        if ( v197 )
        {
LABEL_665:
          if ( v198 )
            PspSetNoChildProcessRestrictedPolicy(v151, 2LL, v196);
          else
            PspSetNoChildProcessRestrictedPolicy(v151, 1LL, v196);
          v13 = 0;
        }
        else if ( v199 )
        {
          PspSetNoChildProcessRestrictedPolicy(v151, 3LL, v196);
          v13 = 0;
        }
        else
        {
LABEL_446:
          v13 = 0;
        }
      }
      goto LABEL_748;
    case 14:
      if ( (HIDWORD(v274) & 0xFFFFFFF0) != 0 )
      {
        v13 = -1073741811;
        goto LABEL_748;
      }
      if ( (BYTE4(v274) & 1) == 0 && (*((_DWORD *)v151 + 628) & 0x40000000) != 0
        || ((HIDWORD(v274) >> 1) & 1) == 0 && *((int *)v151 + 628) < 0
        || ((HIDWORD(v274) >> 3) & 1) == 0 && (*((_DWORD *)v151 + 629) & 0x2000) != 0 )
      {
        goto LABEL_436;
      }
      v200 = (HIDWORD(v274) >> 2) & 1;
      if ( v200 || (*((_DWORD *)v151 + 629) & 0x1000) == 0 )
      {
        if ( (BYTE4(v274) & 1) != 0 )
        {
          _InterlockedOr((volatile signed __int32 *)v151 + 628, 0x40000000u);
          v151 = (char *)Object;
        }
        if ( ((HIDWORD(v274) >> 1) & 1) != 0 )
        {
          _InterlockedOr((volatile signed __int32 *)v151 + 628, 0x80000000);
          _InterlockedOr((volatile signed __int32 *)Object + 543, 0x200000u);
          v151 = (char *)Object;
          PspWriteProcessSecurityDomain((__int64)Object, _InterlockedIncrement64(&PsNextSecurityDomain), 1);
          KeSynchronizeSecurityDomain(v201);
        }
        if ( v200 )
        {
          _InterlockedOr((volatile signed __int32 *)v151 + 629, 0x1000u);
          v151 = (char *)Object;
        }
        if ( ((HIDWORD(v274) >> 3) & 1) != 0 )
        {
          _InterlockedOr((volatile signed __int32 *)v151 + 629, 0x2000u);
          v151 = (char *)Object;
        }
        v13 = 0;
      }
      else
      {
        v13 = -1073741790;
      }
      goto LABEL_748;
    case 15:
      v202 = HIDWORD(v274);
      if ( (HIDWORD(v274) & 0xFFFFFC00) != 0 )
      {
        v13 = -1073741811;
        goto LABEL_748;
      }
      if ( (BYTE4(v274) & 0x10) != 0 )
      {
        v202 = HIDWORD(v274) | 1;
        HIDWORD(v274) |= 1u;
      }
      if ( (v202 & 0x200) != 0 )
      {
        v202 |= 4u;
        HIDWORD(v274) = v202;
      }
      if ( (v202 & 0x40) != 0 )
      {
        v202 |= 0x20u;
        HIDWORD(v274) = v202;
      }
      v203 = (v202 >> 4) & 1;
      if ( !v203 && (*((_DWORD *)v151 + 629) & 0x100000) != 0
        || (v202 & 1) == 0 && (*((_DWORD *)v151 + 629) & 0x4000) != 0 )
      {
        goto LABEL_436;
      }
      if ( (v202 & 1) != 0 && (*((_DWORD *)v151 + 629) & 0x4000) == 0 )
      {
        v13 = -1073741790;
        goto LABEL_748;
      }
      v204 = (v202 >> 9) & 1;
      if ( v204 && *((int *)v151 + 629) >= 0 )
        goto LABEL_436;
      v205 = (v202 >> 2) & 1;
      if ( !v205 && (*((_DWORD *)v151 + 629) & 0x20000) != 0 )
        goto LABEL_436;
      if ( v205 && (*((_DWORD *)v151 + 629) & 0x20000) == 0 )
      {
        v13 = -1073741790;
        goto LABEL_748;
      }
      v206 = (v202 >> 6) & 1;
      if ( !v206 && (*((_DWORD *)v151 + 629) & 0x400000) != 0 )
        goto LABEL_436;
      v207 = (v202 >> 5) & 1;
      if ( !v207 && (*((_DWORD *)v151 + 629) & 0x200000) != 0 )
      {
        v13 = -1073741790;
        goto LABEL_748;
      }
      v208 = (v202 >> 8) & 1;
      if ( !v208 && (*((_DWORD *)v151 + 629) & 0x40000000) != 0 )
      {
        v13 = -1073741790;
        goto LABEL_748;
      }
      if ( ((v202 >> 1) & 1) == 0 && (*((_DWORD *)v151 + 629) & 0x8000) != 0
        || ((v202 >> 1) & 1) != 0 && (*((_DWORD *)v151 + 629) & 0x8000) == 0
        || ((v202 >> 3) & 1) == 0 && (*((_DWORD *)v151 + 629) & 0x40000) != 0
        || ((v202 >> 3) & 1) != 0 && (*((_DWORD *)v151 + 629) & 0x40000) == 0
        || (v209 = (v202 >> 7) & 1) == 0 && (*((_DWORD *)v151 + 629) & 0x800000) != 0 )
      {
LABEL_436:
        v13 = -1073741790;
        goto LABEL_748;
      }
      if ( v209 && (*((_DWORD *)v151 + 629) & 0x800000) == 0 )
      {
        v13 = -1073741790;
        goto LABEL_748;
      }
      if ( v203 )
      {
        _InterlockedOr((volatile signed __int32 *)v151 + 629, 0x100000u);
        v151 = (char *)Object;
      }
      if ( !v204 && v205 )
      {
        _InterlockedAnd((volatile signed __int32 *)v151 + 629, 0x7FFFFFFFu);
        v151 = (char *)Object;
      }
      if ( v206 )
      {
        _InterlockedOr((volatile signed __int32 *)v151 + 629, 0x200000u);
        _InterlockedOr((volatile signed __int32 *)v151 + 629, 0x400000u);
      }
      else
      {
        if ( !v207 )
          goto LABEL_744;
        _InterlockedOr((volatile signed __int32 *)v151 + 629, 0x200000u);
      }
      v151 = (char *)Object;
LABEL_744:
      if ( v208 )
      {
        _InterlockedOr((volatile signed __int32 *)v151 + 629, 0x40000000u);
        v151 = (char *)Object;
      }
      v13 = 0;
LABEL_748:
      if ( v273 != 1 )
        return v13;
LABEL_749:
      ObfDereferenceObjectWithTag(v151, 0x79517350u);
      return v13;
    default:
      goto LABEL_747;
  }
}
