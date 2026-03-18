/*
 * XREFs of NtSetInformationProcess @ 0x1407E7850
 * Callers:
 *     <none>
 * Callees:
 *     KeStackAttachProcess @ 0x140203630 (KeStackAttachProcess.c)
 *     KeUnstackDetachProcess @ 0x1402037B0 (KeUnstackDetachProcess.c)
 *     RtlInterlockedSetClearBits @ 0x140209344 (RtlInterlockedSetClearBits.c)
 *     RtlRemoveDynamicFunctionTable @ 0x14023E59C (RtlRemoveDynamicFunctionTable.c)
 *     PspLockUnlockProcessExclusive @ 0x14024BA3C (PspLockUnlockProcessExclusive.c)
 *     MmGetMinWsPagePriority @ 0x14024DA70 (MmGetMinWsPagePriority.c)
 *     PtrToUlong @ 0x140251BD0 (PtrToUlong.c)
 *     PspUnlockProcessExclusive @ 0x14025302C (PspUnlockProcessExclusive.c)
 *     KeSetExecuteOptions @ 0x140253A44 (KeSetExecuteOptions.c)
 *     KeBoostPriorityThread @ 0x140255110 (KeBoostPriorityThread.c)
 *     KeSynchronizeSecurityDomain @ 0x140255E2C (KeSynchronizeSecurityDomain.c)
 *     KeQueryPrimaryGroupProcess @ 0x140257BB4 (KeQueryPrimaryGroupProcess.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x140258040 (ExCpuSetResourceManagerAccessCheck.c)
 *     KeVerifyGroupAffinity @ 0x1402585E8 (KeVerifyGroupAffinity.c)
 *     MmRemoveExecuteGrants @ 0x140258CE0 (MmRemoveExecuteGrants.c)
 *     KeInitializeGate @ 0x14025E6B4 (KeInitializeGate.c)
 *     IoBoostThreadIoPriority @ 0x140280754 (IoBoostThreadIoPriority.c)
 *     PsIsSystemProcess @ 0x1402820E0 (PsIsSystemProcess.c)
 *     PsSetPagePriorityThread @ 0x14028F63C (PsSetPagePriorityThread.c)
 *     PsSetIoPriorityThread @ 0x14028F698 (PsSetIoPriorityThread.c)
 *     PspLockProcessExclusive @ 0x1402A0880 (PspLockProcessExclusive.c)
 *     KeIsUserCetAllowed @ 0x1402A08A8 (KeIsUserCetAllowed.c)
 *     PspWriteProcessSecurityDomain @ 0x1402A0D88 (PspWriteProcessSecurityDomain.c)
 *     RtlStringCbCopyA @ 0x1402A1054 (RtlStringCbCopyA.c)
 *     PsGetCurrentProcess @ 0x1402A3820 (PsGetCurrentProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1402EBB58 (KeSetPriorityAndQuantumProcess.c)
 *     MmSetMemoryPriorityProcess @ 0x1402EC5B0 (MmSetMemoryPriorityProcess.c)
 *     MmGetSessionId @ 0x140300B40 (MmGetSessionId.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x14030B700 (PsChargeProcessNonPagedPoolQuota.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403107C0 (PsReturnProcessNonPagedPoolQuota.c)
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 *     MmGetDefaultPagePriority @ 0x140360698 (MmGetDefaultPagePriority.c)
 *     ExReleaseExtensionTable @ 0x1403614E0 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x1403614FC (ExGetExtensionTable.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140367B10 (ExAllocatePoolWithQuotaTag.c)
 *     RtlInsertDynamicFunctionTable @ 0x14036858C (RtlInsertDynamicFunctionTable.c)
 *     KeEnterCriticalRegionThread @ 0x14039ECF0 (KeEnterCriticalRegionThread.c)
 *     KeSetCpuSetsProcess @ 0x1403D2D98 (KeSetCpuSetsProcess.c)
 *     xKdEnumerateDebuggingDevices @ 0x1403DF740 (xKdEnumerateDebuggingDevices.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     Feature_Servicing_FsctlProcessMitigation__private_IsEnabled @ 0x140417880 (Feature_Servicing_FsctlProcessMitigation__private_IsEnabled.c)
 *     MmGetMaximumUserAddress @ 0x140419118 (MmGetMaximumUserAddress.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     IoRevokeHandlesForProcess @ 0x140558960 (IoRevokeHandlesForProcess.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140572774 (KeRecomputeCpuSetAffinityProcess.c)
 *     MmReleaseCommitForMemResetPages @ 0x140581748 (MmReleaseCommitForMemResetPages.c)
 *     MmSetCommitReleaseEligibility @ 0x14058196C (MmSetCommitReleaseEligibility.c)
 *     PspLockProcessSharedUnsafe @ 0x1405E07FC (PspLockProcessSharedUnsafe.c)
 *     PspUnlockProcessSharedUnsafe @ 0x1405E097C (PspUnlockProcessSharedUnsafe.c)
 *     EtwTraceProcessSetInPrivateMode @ 0x14062E19C (EtwTraceProcessSetInPrivateMode.c)
 *     PspSyscallProviderOptIn @ 0x140659AD4 (PspSyscallProviderOptIn.c)
 *     ObReferenceProcessHandleTable @ 0x14066B3D8 (ObReferenceProcessHandleTable.c)
 *     PspWritePebAffinityInfo @ 0x140672BD8 (PspWritePebAffinityInfo.c)
 *     ObDereferenceProcessHandleTable @ 0x1406BBE50 (ObDereferenceProcessHandleTable.c)
 *     ExEnableRaiseUMExceptionOnInvalidHandleClose @ 0x1406CB004 (ExEnableRaiseUMExceptionOnInvalidHandleClose.c)
 *     PspSetProcessPriorityClass @ 0x1406D2718 (PspSetProcessPriorityClass.c)
 *     PsSetProcessFaultInformation @ 0x1406D40C0 (PsSetProcessFaultInformation.c)
 *     EtwSetProcessTelemetryCoverage @ 0x1406D435C (EtwSetProcessTelemetryCoverage.c)
 *     PoSetProcessEnergyTrackingState @ 0x1406D5E88 (PoSetProcessEnergyTrackingState.c)
 *     ExEnableHandleExceptions @ 0x1406DAA90 (ExEnableHandleExceptions.c)
 *     PspSetRedirectionTrustPolicy @ 0x1406DD598 (PspSetRedirectionTrustPolicy.c)
 *     PspGetRedirectionTrustPolicy @ 0x1406DEAEC (PspGetRedirectionTrustPolicy.c)
 *     EtwCheckSecurityLoggerAccess @ 0x1406E0450 (EtwCheckSecurityLoggerAccess.c)
 *     SeSetVirtualizationToken @ 0x1406E6FE8 (SeSetVirtualizationToken.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x1406E71BC (PspSetNoChildProcessRestrictedPolicy.c)
 *     PsIsSystemWideMitigationOptionSet @ 0x1406E837C (PsIsSystemWideMitigationOptionSet.c)
 *     SeCheckPrivilegedObject @ 0x1406E856C (SeCheckPrivilegedObject.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x1406E9BE0 (PspGetNoChildProcessRestrictedPolicy.c)
 *     KeSetDisableBoostThread @ 0x1406EBB50 (KeSetDisableBoostThread.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     SeCaptureSubjectContextEx @ 0x14072A390 (SeCaptureSubjectContextEx.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140732CC0 (ObReferenceObjectByHandleWithTag.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     PspCombineSecurityDomains @ 0x1407527F4 (PspCombineSecurityDomains.c)
 *     PsSetProcessPriorityByClass @ 0x14079D240 (PsSetProcessPriorityByClass.c)
 *     PspSetProcessForegroundBackgroundRequest @ 0x14079D270 (PspSetProcessForegroundBackgroundRequest.c)
 *     RtlIsSandboxedToken @ 0x14079F1E0 (RtlIsSandboxedToken.c)
 *     LpcRequestPort @ 0x1407A7CB0 (LpcRequestPort.c)
 *     PsReferencePrimaryToken @ 0x1407AFED0 (PsReferencePrimaryToken.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     MmAllocateUserStack @ 0x1407E75A4 (MmAllocateUserStack.c)
 *     KeSetAutoAlignmentProcess @ 0x1407E766C (KeSetAutoAlignmentProcess.c)
 *     PspSetProcessDefaultHardErrorMode @ 0x1407E7694 (PspSetProcessDefaultHardErrorMode.c)
 *     PsGetNextProcessThread @ 0x1407E7750 (PsGetNextProcessThread.c)
 *     PspSetQuotaLimits @ 0x1407F2DBC (PspSetQuotaLimits.c)
 *     MmProcessWorkingSetControl @ 0x1407F5540 (MmProcessWorkingSetControl.c)
 *     PsQuitNextProcessThread @ 0x1407FCBC0 (PsQuitNextProcessThread.c)
 *     SeCompareSigningLevels @ 0x140811D10 (SeCompareSigningLevels.c)
 *     PspAssignPrimaryToken @ 0x140847028 (PspAssignPrimaryToken.c)
 *     KeSetCheckStackExtentsProcess @ 0x1409614A8 (KeSetCheckStackExtentsProcess.c)
 *     KeSetDisableBoostProcess @ 0x1409614D0 (KeSetDisableBoostProcess.c)
 *     MmValidateUserCallTarget @ 0x14096ECCC (MmValidateUserCallTarget.c)
 *     ObSetProcessDeviceMap @ 0x140986CD4 (ObSetProcessDeviceMap.c)
 *     PsIsGuiThread @ 0x1409AD6F4 (PsIsGuiThread.c)
 *     PsSetProcessHandleTracingInformation @ 0x1409AD704 (PsSetProcessHandleTracingInformation.c)
 *     PspEnableProcessOptionalXStateFeatures @ 0x1409AD99C (PspEnableProcessOptionalXStateFeatures.c)
 *     PspProcessDynamicEHContinuationTargets @ 0x1409ADDA4 (PspProcessDynamicEHContinuationTargets.c)
 *     PspProcessDynamicEnforcedAddressRanges @ 0x1409AE050 (PspProcessDynamicEnforcedAddressRanges.c)
 *     PspSetProcessAffinitySafe @ 0x1409AE810 (PspSetProcessAffinitySafe.c)
 *     PspSetProcessAffinityUpdateMode @ 0x1409AE968 (PspSetProcessAffinityUpdateMode.c)
 *     PspFreeUserFiberShadowStack @ 0x1409AF728 (PspFreeUserFiberShadowStack.c)
 *     PspSetupUserFiberShadowStack @ 0x1409AFAA0 (PspSetupUserFiberShadowStack.c)
 *     PsIumEnableOnDemandDebugWithResponse @ 0x1409B30B4 (PsIumEnableOnDemandDebugWithResponse.c)
 *     SeCodeIntegritySetInformationProcess @ 0x1409C5884 (SeCodeIntegritySetInformationProcess.c)
 *     ExSystemExceptionFilter @ 0x1409F8660 (ExSystemExceptionFilter.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

int __fastcall NtSetInformationProcess(HANDLE Handle, ULONG a2, unsigned __int64 a3, unsigned int a4)
{
  size_t v4; // rdi
  _BYTE *v5; // rbx
  unsigned int v7; // r14d
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int8 PreviousMode; // r15
  int v10; // eax
  int result; // eax
  int v12; // esi
  _DWORD *PoolWithTag; // rax
  void *v14; // rbx
  PVOID v15; // rcx
  int v16; // ebx
  unsigned int v17; // eax
  char v18; // di
  PVOID v19; // rcx
  BOOLEAN v20; // al
  __int16 v21; // bx
  int v22; // edi
  char v23; // bl
  int v24; // edi
  _QWORD *i; // rbx
  unsigned int v26; // ebx
  void *v27; // r12
  unsigned __int64 v28; // r12
  NTSTATUS v29; // esi
  signed __int64 v30; // rdx
  signed __int64 *v31; // roff
  signed __int64 v32; // r15
  signed __int64 v33; // rax
  void *v34; // r15
  int v35; // eax
  int v36; // eax
  int v37; // ebx
  PVOID v38; // rcx
  unsigned __int8 v39; // bl
  __int64 v40; // r13
  __int16 v41; // r8
  int v42; // ebx
  __int64 v43; // rcx
  __int64 v44; // r13
  __int64 v45; // r8
  _DWORD *v46; // r9
  BOOL v47; // edi
  __int64 v48; // r13
  PVOID v49; // rcx
  _QWORD *j; // rbx
  __int64 v51; // rbx
  int v52; // ebx
  int v53; // ebx
  int v54; // ecx
  unsigned int v55; // eax
  unsigned __int64 v56; // r12
  volatile signed __int32 *v57; // r8
  signed __int32 v58; // eax
  signed int v59; // r9d
  signed __int32 v60; // edx
  KSPIN_LOCK *v61; // rbx
  signed int v62; // r14d
  int v63; // ebx
  _KPROCESS *CurrentProcess; // rax
  unsigned int v65; // ebx
  unsigned int v66; // ebx
  volatile signed __int32 *v67; // r8
  signed __int32 v68; // eax
  signed __int32 v69; // edx
  _QWORD *v70; // rdi
  int v71; // ebx
  _DWORD *PoolWithQuotaTag; // r15
  __int64 v73; // r8
  unsigned int v74; // ecx
  _DWORD *v75; // rdx
  _KPROCESS *v76; // rax
  __int16 v77; // cx
  __int64 v78; // rcx
  struct _EX_RUNDOWN_REF *v79; // rdx
  PVOID k; // rcx
  struct _EX_RUNDOWN_REF *v81; // rbx
  unsigned __int64 Count; // rdi
  char *v83; // rbx
  char *v84; // rax
  char *v85; // r13
  __int64 v86; // rdx
  __int64 v87; // r8
  volatile void **v88; // rdi
  __int64 v89; // rdx
  const void *v90; // rdx
  struct _EX_RUNDOWN_REF *v91; // rdx
  __int64 v92; // rdi
  __int64 v93; // rcx
  unsigned __int64 v94; // rax
  unsigned __int64 v95; // rax
  unsigned __int64 v96; // rbx
  unsigned int v97; // eax
  unsigned __int64 v98; // r8
  unsigned __int64 v99; // rax
  unsigned __int64 v100; // rdx
  __int64 v101; // rcx
  _BYTE *v102; // rax
  unsigned __int64 v103; // rbx
  _KPROCESS *v104; // rdi
  BOOLEAN v105; // al
  BOOLEAN v106; // al
  struct _EX_RUNDOWN_REF *v107; // rcx
  __int16 v108; // r8
  bool v109; // r9
  unsigned __int64 v110; // r8
  __int16 v111; // r8
  __int64 v112; // r13
  PVOID v113; // r8
  volatile signed __int32 *v114; // rcx
  __int16 v115; // r8
  __int64 v116; // rcx
  __int64 *v117; // rdx
  _QWORD *v118; // rsi
  int v119; // r9d
  int v120; // ebx
  int v121; // edi
  PACCESS_TOKEN v122; // rbx
  unsigned __int64 v123; // rbx
  _KPROCESS *v124; // rax
  __int64 v125; // rdx
  volatile signed __int32 *p_Lock; // r9
  int v127; // edx
  int v128; // ecx
  unsigned __int64 v129; // rax
  unsigned int v130; // ebx
  int v131; // edi
  char IsGuiThread; // al
  unsigned int v133; // ebx
  int v134; // edi
  char v135; // r12
  _KPROCESS *v136; // rax
  int v137; // eax
  bool IsSandboxedToken; // si
  BOOLEAN v139; // al
  int v140; // r8d
  int v141; // r10d
  int v142; // edx
  int v143; // ebx
  int v144; // eax
  bool v145; // zf
  int v146; // r8d
  int v147; // ecx
  int v148; // eax
  int v149; // ebx
  int v150; // eax
  int v151; // eax
  unsigned int v152; // ebx
  int v153; // r12d
  int v154; // edi
  __int64 v155; // rcx
  int v156; // r8d
  int v157; // edx
  unsigned int v158; // ecx
  int v159; // edi
  int v160; // r8d
  int v161; // edx
  int v162; // ebx
  int v163; // r11d
  int v164; // ecx
  int v165; // eax
  int v166; // edx
  unsigned int v167; // ebx
  int NoChildProcessRestrictedPolicy; // eax
  int v169; // r8d
  int v170; // edx
  int v171; // eax
  int v172; // ebx
  unsigned int v173; // ebx
  int RedirectionTrustPolicy; // eax
  int v175; // ecx
  int v176; // ebx
  int v177; // edx
  int v178; // ebx
  unsigned int v179; // ecx
  int v180; // r11d
  int v181; // ebx
  int v182; // edx
  int v183; // edi
  int v184; // esi
  int v185; // r15d
  int v186; // ecx
  int v187; // ebx
  unsigned __int64 v188; // rax
  void *v189; // rdi
  __int64 v190; // rax
  int v191; // edx
  void *v192; // rcx
  unsigned __int64 v193; // rdx
  PVOID v194; // rax
  BOOL v195; // edi
  __int64 v196; // r8
  _DWORD *v197; // r9
  unsigned int v198; // edi
  char v199; // bl
  int v200; // ebx
  unsigned __int64 v201; // rax
  char v202; // bl
  int v203; // ecx
  unsigned __int64 ExtensionTable; // rbx
  NTSTATUS v205; // edi
  int v206; // ebx
  int v207; // ebx
  __int128 v208; // xmm1
  const char *v209; // r8
  _KPROCESS *v210; // rax
  int v211; // eax
  int v212; // r8d
  int v213; // edx
  unsigned int v214; // ecx
  unsigned int v215; // ecx
  int v216; // ebx
  void *v217; // rbx
  __int64 v218; // rbx
  _KPROCESS *v219; // rax
  unsigned __int64 v220; // rdx
  __int64 v221; // rcx
  __int64 *v222; // r8
  int v223; // ebx
  int v224; // eax
  unsigned int v225; // eax
  int v226; // eax
  unsigned int v227; // eax
  _DWORD *v228; // r12
  unsigned int v229; // eax
  const void *v230; // rbx
  size_t v231; // rdi
  _KPROCESS *v232; // rax
  PVOID v233; // rcx
  _DWORD *Pool2; // rax
  unsigned int v235; // ecx
  const void *v236; // rbx
  size_t v237; // rdi
  _KPROCESS *v238; // rax
  _DWORD *v239; // rax
  __int64 v240; // rbx
  _KPROCESS *v241; // rax
  signed __int32 v242[8]; // [rsp+0h] [rbp-4A8h] BYREF
  ULONG Tag[2]; // [rsp+20h] [rbp-488h]
  PVOID Object; // [rsp+40h] [rbp-468h] BYREF
  unsigned int v245; // [rsp+48h] [rbp-460h]
  int v246; // [rsp+4Ch] [rbp-45Ch]
  struct _KTHREAD *v247; // [rsp+50h] [rbp-458h]
  __int64 v248; // [rsp+58h] [rbp-450h]
  int v249; // [rsp+60h] [rbp-448h]
  unsigned __int16 v250; // [rsp+68h] [rbp-440h] BYREF
  __int64 v251; // [rsp+70h] [rbp-438h] BYREF
  __int16 v252; // [rsp+78h] [rbp-430h]
  unsigned int v253; // [rsp+7Ch] [rbp-42Ch]
  ULONG Alignment; // [rsp+80h] [rbp-428h]
  struct _EX_RUNDOWN_REF *NextProcessThread; // [rsp+88h] [rbp-420h]
  _BYTE *v256; // [rsp+90h] [rbp-418h]
  char v257; // [rsp+98h] [rbp-410h]
  char v258; // [rsp+99h] [rbp-40Fh]
  char v259; // [rsp+9Ah] [rbp-40Eh]
  char v260; // [rsp+9Bh] [rbp-40Dh]
  signed int v261; // [rsp+9Ch] [rbp-40Ch]
  unsigned int *v262; // [rsp+A0h] [rbp-408h]
  char *v263; // [rsp+A8h] [rbp-400h]
  unsigned int v264; // [rsp+B0h] [rbp-3F8h]
  int v265; // [rsp+B4h] [rbp-3F4h] BYREF
  unsigned __int64 v266; // [rsp+B8h] [rbp-3F0h]
  __int64 v267; // [rsp+C0h] [rbp-3E8h]
  __int128 v268; // [rsp+C8h] [rbp-3E0h]
  int v269; // [rsp+D8h] [rbp-3D0h]
  unsigned int v270; // [rsp+DCh] [rbp-3CCh]
  void *Src[2]; // [rsp+E0h] [rbp-3C8h] BYREF
  PVOID v272; // [rsp+F0h] [rbp-3B8h] BYREF
  unsigned __int64 v273; // [rsp+F8h] [rbp-3B0h]
  PVOID v274; // [rsp+100h] [rbp-3A8h]
  PVOID v275; // [rsp+108h] [rbp-3A0h] BYREF
  PVOID v276; // [rsp+110h] [rbp-398h] BYREF
  NTSTRSAFE_PCSTR pszSrc[2]; // [rsp+118h] [rbp-390h] BYREF
  __int64 v278; // [rsp+128h] [rbp-380h]
  int v279; // [rsp+130h] [rbp-378h]
  int v280; // [rsp+134h] [rbp-374h]
  int v281; // [rsp+138h] [rbp-370h]
  int v282; // [rsp+13Ch] [rbp-36Ch]
  int v283; // [rsp+140h] [rbp-368h]
  int v284; // [rsp+144h] [rbp-364h]
  int v285; // [rsp+148h] [rbp-360h]
  int v286; // [rsp+14Ch] [rbp-35Ch]
  int v287; // [rsp+150h] [rbp-358h]
  int v288; // [rsp+154h] [rbp-354h]
  int v289; // [rsp+158h] [rbp-350h]
  int v290; // [rsp+15Ch] [rbp-34Ch]
  unsigned int *v291; // [rsp+160h] [rbp-348h]
  unsigned __int64 v292; // [rsp+168h] [rbp-340h]
  _DWORD *v293; // [rsp+170h] [rbp-338h]
  BOOL v294; // [rsp+178h] [rbp-330h]
  __int64 v295; // [rsp+180h] [rbp-328h]
  int v296; // [rsp+188h] [rbp-320h]
  unsigned __int64 v297; // [rsp+190h] [rbp-318h]
  void **v298; // [rsp+198h] [rbp-310h]
  __int64 v299; // [rsp+1A0h] [rbp-308h]
  __int64 v300; // [rsp+1A8h] [rbp-300h]
  __int64 v301; // [rsp+1B0h] [rbp-2F8h]
  __int64 v302; // [rsp+1B8h] [rbp-2F0h]
  PVOID v303; // [rsp+1C8h] [rbp-2E0h] BYREF
  int v304; // [rsp+1D0h] [rbp-2D8h]
  _BYTE SubjectContext[40]; // [rsp+1D8h] [rbp-2D0h] BYREF
  __int64 v306; // [rsp+200h] [rbp-2A8h]
  __int128 v307; // [rsp+208h] [rbp-2A0h] BYREF
  __int128 v308; // [rsp+218h] [rbp-290h]
  struct _KAPC_STATE ApcState; // [rsp+228h] [rbp-280h] BYREF
  _OWORD P[2]; // [rsp+258h] [rbp-250h] BYREF
  __int64 v311; // [rsp+278h] [rbp-230h]
  _OWORD v312[9]; // [rsp+280h] [rbp-228h] BYREF
  char v313[256]; // [rsp+310h] [rbp-198h] BYREF
  char pszDest[16]; // [rsp+410h] [rbp-98h] BYREF
  __int128 v315; // [rsp+420h] [rbp-88h]
  __int128 v316; // [rsp+430h] [rbp-78h]
  __int128 v317; // [rsp+440h] [rbp-68h]
  char v318; // [rsp+450h] [rbp-58h]

  v4 = a4;
  v5 = (_BYTE *)a3;
  Alignment = a2;
  v256 = (_BYTE *)a3;
  v249 = a4;
  v7 = 0;
  Object = 0LL;
  v307 = 0LL;
  v245 = 0;
  v252 = 0;
  v295 = 0LL;
  v272 = 0LL;
  v292 = 0LL;
  v265 = 0;
  v308 = 0LL;
  v250 = 0;
  CurrentThread = KeGetCurrentThread();
  v247 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    switch ( a2 )
    {
      case 5u:
        v10 = 4;
        break;
      case 0x11u:
        v10 = 1;
        break;
      case 0x19u:
        v10 = 1;
        break;
      case 0x12u:
        v10 = 1;
        break;
      case 0x15u:
        v10 = 8;
        break;
      case 0x21u:
        v10 = 4;
        break;
      case 0x27u:
        v10 = 4;
        break;
      case 0x23u:
        v10 = 8;
        break;
      case 8u:
        v10 = 8;
        break;
      case 0x28u:
        v10 = 8;
        break;
      case 0x29u:
        v10 = 8;
        break;
      case 0x62u:
        v10 = 8;
        break;
      case 0x63u:
        v10 = 8;
        break;
      case 0x2Du:
        v10 = 4;
        break;
      case 0x2Eu:
        v10 = 4;
        break;
      case 0x31u:
        v10 = 8;
        break;
      case 0x35u:
        v10 = 8;
        break;
      case 0x38u:
        v10 = 8;
        break;
      case 0x3Eu:
        v10 = 8;
        break;
      case 0x41u:
        v10 = 8;
        break;
      case 0x46u:
        v10 = 1;
        break;
      case 0x4Au:
        v10 = 1;
        break;
      case 0x53u:
        v10 = 8;
        break;
      case 0x5Au:
        v10 = 1;
        break;
      case 0x5Bu:
        v10 = 4;
        break;
      case 0x5Fu:
        v10 = 8;
        break;
      case 0x57u:
        v10 = 1;
        break;
      case 0x64u:
        v10 = 4;
        break;
      case 0x65u:
        v10 = 8;
        break;
      case 0x66u:
        v10 = 8;
        break;
      default:
        v10 = 4;
        if ( a2 == 105 )
          v10 = 8;
        break;
    }
    if ( a4 )
    {
      if ( ((v10 - 1) & (unsigned int)a3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a3 + a4 > 0x7FFFFFFF0000LL || a3 + a4 < a3 )
        MEMORY[0x7FFFFFFF0000] = 0;
      CurrentThread = v247;
    }
  }
  switch ( a2 )
  {
    case 1u:
      return PspSetQuotaLimits((ULONG_PTR)Handle);
    case 5u:
      if ( a4 != 4 )
        return -1073741820;
      v16 = *(_DWORD *)a3;
      v279 = v16;
      v17 = v16 & 0x80000000;
      if ( v16 < 0 )
        v16 &= ~0x80000000;
      v18 = v17 != 0 ? 2 : 0;
      if ( (unsigned int)(v16 - 1) > 0x1E )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v19 = Object;
      if ( v16 > *((char *)Object + 640) )
      {
        v20 = SeCheckPrivilegedObject(SeIncreaseBasePriorityPrivilege, (int)Handle, 512, PreviousMode);
        v19 = Object;
        if ( !v20 )
          goto LABEL_97;
      }
      KeSetPriorityAndQuantumProcess((__int64)v19, v16, 0, 0, 0);
      MmSetMemoryPriorityProcess((__int64)Object, v18);
      goto LABEL_88;
    case 6u:
      if ( a4 != 4 )
        return -1073741820;
      v24 = *(_DWORD *)a3;
      v280 = *(_DWORD *)a3;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL);
      v12 = result;
      if ( result < 0 )
        return result;
      if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 139) )
        goto LABEL_115;
      for ( i = PsGetNextProcessThread((__int64)Object, 0LL); i; i = PsGetNextProcessThread((__int64)Object, i) )
        KeBoostPriorityThread((__int64)i, v24);
      goto LABEL_114;
    case 8u:
      if ( a4 == 8 )
      {
        v264 = 0;
        v27 = *(void **)a3;
        v291 = *(unsigned int **)a3;
      }
      else
      {
        if ( a4 != 16 )
          return -1073741820;
        v262 = *(unsigned int **)a3;
        v291 = v262;
        v264 = *(_DWORD *)(a3 + 8);
        if ( (v264 & 0xFFFFFFF8) != 0 )
          return -1073741811;
        v27 = v262;
      }
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
        return -1073741727;
      v275 = 0LL;
      result = ObReferenceObjectByHandle(v27, 0, LpcPortObjectType, PreviousMode, &v275, 0LL);
      v28 = (unsigned __int64)v275;
      v262 = (unsigned int *)v275;
      if ( result < 0 )
        return result;
      v29 = ObReferenceObjectByHandleWithTag(
              Handle,
              0x800u,
              (POBJECT_TYPE)PsProcessType,
              PreviousMode,
              0x79517350u,
              &Object,
              0LL);
      if ( v29 < 0 )
      {
        ObfDereferenceObject((PVOID)v28);
        return v29;
      }
      v30 = v28 | v264;
      v267 = v30;
      v31 = (signed __int64 *)((char *)Object + 1200);
      _m_prefetchw((char *)Object + 1200);
      v32 = *v31;
      do
      {
        NextProcessThread = (struct _EX_RUNDOWN_REF *)v32;
        if ( (_DWORD)v4 == 16 )
        {
          *((_DWORD *)v5 + 2) = v32 & 7;
        }
        else if ( (v32 & 7) != 0 )
        {
          ObfDereferenceObject((PVOID)v28);
          goto LABEL_134;
        }
        v33 = _InterlockedCompareExchange64((volatile signed __int64 *)Object + 150, v30, v32);
        v145 = v32 == v33;
        v32 = v33;
      }
      while ( !v145 );
      if ( v33 )
      {
        v34 = (void *)(v33 & 0xFFFFFFFFFFFFFFF8uLL);
        *(_DWORD *)&SubjectContext[2] = 852016;
        strcpy(SubjectContext, "\b");
        memset(&SubjectContext[6], 0, 34);
        v306 = *((_QWORD *)Object + 136);
        while ( 1 )
        {
          v35 = LpcRequestPort((__int64)v34, (__int64)SubjectContext);
          if ( v35 != -1073741801 && v35 != -1073741670 )
            break;
          KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&PspShortTime);
        }
        PspLockUnlockProcessExclusive((__int64)Object, (__int64)v247);
        ObfDereferenceObject(v34);
      }
      goto LABEL_142;
    case 9u:
      if ( a4 != 16 )
        return -1073741820;
      v301 = *(_QWORD *)a3;
      return PspAssignPrimaryToken(CurrentThread, PreviousMode, Handle);
    case 0xAu:
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x220u,
                 (POBJECT_TYPE)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
        goto LABEL_146;
      return result;
    case 0xBu:
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x220u,
                 (POBJECT_TYPE)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
        goto LABEL_146;
      return result;
    case 0xCu:
      if ( a4 != 4 )
        return -1073741820;
      v26 = *(_DWORD *)a3;
      v281 = *(_DWORD *)a3;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      PspSetProcessDefaultHardErrorMode((__int64)Object, (__int64)v247, v26);
      goto LABEL_88;
    case 0xDu:
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
LABEL_146:
      v36 = xKdEnumerateDebuggingDevices();
      goto LABEL_147;
    case 0xFu:
    case 0x2Au:
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v12 = PsChargeProcessNonPagedPoolQuota((struct _KPROCESS *)Object, 0x6028uLL);
      if ( v12 < 0 )
        goto LABEL_79;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x6028uLL, 0x73577350u);
      v14 = PoolWithTag;
      if ( !PoolWithTag )
      {
        v12 = -1073741801;
LABEL_78:
        PsReturnProcessNonPagedPoolQuota((struct _KPROCESS *)Object, 24616LL);
        goto LABEL_79;
      }
      PsWatchEnabled = 1;
      *PoolWithTag = 0;
      *((_QWORD *)PoolWithTag + 1) = 0LL;
      KeInitializeGate((__int64)(PoolWithTag + 4));
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)Object + 166, (signed __int64)v14, 0LL) )
      {
        ExFreePoolWithTag(v14, 0);
        v12 = -1073741752;
        goto LABEL_78;
      }
LABEL_142:
      v12 = 0;
      goto LABEL_79;
    case 0x10u:
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
        return -1073741727;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      return -1073741822;
    case 0x11u:
      if ( a4 != 1 )
        return -1073741820;
      v39 = *(_BYTE *)a3;
      v257 = *(_BYTE *)a3;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v40 = (__int64)v247;
      PspLockProcessExclusive((__int64)Object, (__int64)v247);
      if ( v39 )
        *((_DWORD *)Object + 382) |= 4u;
      else
        *((_DWORD *)Object + 382) &= ~4u;
      if ( *((_QWORD *)Object + 176) )
      {
        v41 = *((_WORD *)Object + 1206);
        if ( v41 == 332 || v41 == 452 )
          v39 = 1;
      }
      KeSetAutoAlignmentProcess((__int64)Object, v39);
      PspUnlockProcessExclusive((__int64)Object, v40);
      goto LABEL_88;
    case 0x12u:
      if ( a4 != 2 )
        return -1073741820;
      v21 = *(_WORD *)a3;
      v252 = *(_WORD *)a3;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v22 = PspSetProcessPriorityClass((__int64)Object, HIBYTE(v252), (__int64)Handle, PreviousMode);
      if ( v22 >= 0 )
      {
        LOBYTE(v7) = (_BYTE)v21 != 0;
        PsSetProcessPriorityByClass((__int64)Object, v7);
      }
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      return v22;
    case 0x13u:
      if ( a4 != 4 )
        return -1073741820;
      v42 = *(_DWORD *)a3;
      v282 = *(_DWORD *)a3;
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
        return -1073741727;
      v12 = ObReferenceObjectByHandleWithTag(
              Handle,
              0x200u,
              (POBJECT_TYPE)PsProcessType,
              PreviousMode,
              0x79517350u,
              &Object,
              0LL);
      if ( v12 < 0 )
        return v12;
      if ( *((_QWORD *)Object + 280) )
      {
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return -1073741790;
      }
      if ( v42 )
        _InterlockedOr((volatile signed __int32 *)Object + 281, 0x1000000u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 281, 0xFEFFFFFF);
      goto LABEL_79;
    case 0x15u:
      if ( a4 == 8 )
      {
        *(_QWORD *)&v307 = *(_QWORD *)a3;
        if ( !(_QWORD)v307 )
          return -1073741811;
        goto LABEL_182;
      }
      if ( a4 != 16 )
        return -1073741820;
      v307 = *(_OWORD *)a3;
      if ( KeVerifyGroupAffinity((__int64)&v307, 0) )
      {
LABEL_182:
        result = ObReferenceObjectByHandleWithTag(
                   Handle,
                   0x200u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        if ( (*((_DWORD *)Object + 158) & 0x1000) != 0 )
        {
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          return -1073741811;
        }
        KeQueryPrimaryGroupProcess((__int64)Object, &v250);
        if ( (_DWORD)v4 == 8 )
        {
          v43 = v307 & qword_140D06E48[v250];
          if ( v43 != (_QWORD)v307 )
          {
LABEL_134:
            v12 = -1073741811;
            goto LABEL_79;
          }
          WORD4(v307) = v250;
          *(_QWORD *)&v307 = v43;
        }
        v44 = (__int64)v247;
        KeEnterCriticalRegionThread((__int64)v247);
        if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 139) )
        {
          PspLockProcessSharedUnsafe((__int64)Object);
          *(_QWORD *)Tag = &v265;
          v12 = PspSetProcessAffinitySafe(Object, 0LL, 0LL);
          PspUnlockProcessSharedUnsafe((__int64)Object);
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)Object + 139);
          if ( v12 >= 0 )
          {
            if ( v265 )
              PspWritePebAffinityInfo(v44, (__int64)Object, v45, v46);
            _InterlockedOr((volatile signed __int32 *)Object + 280, 0x200000u);
            KeLeaveCriticalRegionThread(v44);
LABEL_79:
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            return v12;
          }
        }
        else
        {
          v12 = -1073741558;
        }
        KeLeaveCriticalRegionThread(v44);
        goto LABEL_79;
      }
      return -1073741811;
    case 0x16u:
      if ( a4 != 4 )
        return -1073741820;
      v283 = *(_DWORD *)a3;
      v47 = v283 != 0;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL);
      v12 = result;
      if ( result < 0 )
        return result;
      if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 139) )
        goto LABEL_115;
      v48 = (__int64)v247;
      PspLockProcessExclusive((__int64)Object, (__int64)v247);
      KeSetDisableBoostProcess(Object, v47);
      v49 = Object;
      for ( j = (_QWORD *)*((_QWORD *)Object + 188); j != (_QWORD *)((char *)Object + 1504); v49 = Object )
      {
        KeSetDisableBoostThread((__int64)(j - 167), v47);
        j = (_QWORD *)*j;
      }
      goto LABEL_268;
    case 0x17u:
      if ( a4 != 8 )
        return -1073741820;
      v51 = *(_QWORD *)a3;
      v302 = *(_QWORD *)a3;
      if ( RtlIsSandboxedToken(0LL, PreviousMode) )
        return -1073741790;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v36 = ObSetProcessDeviceMap(Object, v51, PreviousMode);
      goto LABEL_147;
    case 0x18u:
      if ( a4 != 4 )
        return -1073741820;
      v52 = *(_DWORD *)a3;
      v296 = *(_DWORD *)a3;
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
        return -1073741727;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x204u,
                 (POBJECT_TYPE)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      if ( v52 != (unsigned int)MmGetSessionId((__int64)Object) )
        v7 = -1073741790;
      goto LABEL_216;
    case 0x19u:
      if ( a4 != 1 )
        return -1073741820;
      v23 = *(_BYTE *)a3;
      v260 = *(_BYTE *)a3;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x2000u,
                 (POBJECT_TYPE)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      LOBYTE(v7) = v23 != 0;
      PsSetProcessPriorityByClass((__int64)Object, v7);
      goto LABEL_88;
    case 0x1Du:
      if ( a4 != 4 )
        return -1073741820;
      v53 = *(_DWORD *)a3;
      v290 = *(_DWORD *)a3;
      if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
        return -1073741727;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      if ( v53 )
        _InterlockedOr((volatile signed __int32 *)Object + 281, 0x2000u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 281, 0xFFFFDFFF);
      goto LABEL_88;
    case 0x1Fu:
      if ( a4 != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL);
      v12 = result;
      if ( result < 0 )
        return result;
      v269 = *(_DWORD *)v5;
      if ( (v269 & 0xFFFFFFFE) != 0 )
        goto LABEL_134;
      if ( (v269 & 1) != 0 )
        _InterlockedAnd((volatile signed __int32 *)Object + 281, 0xFFFFFFFD);
      else
        _InterlockedOr((volatile signed __int32 *)Object + 281, 2u);
      goto LABEL_79;
    case 0x20u:
      v251 = 0LL;
      if ( !a4 )
        goto LABEL_231;
      if ( ((a4 - 4) & 0xFFFFFFFB) != 0 )
        return -1073741820;
      v54 = *(_DWORD *)a3;
      LODWORD(v251) = *(_DWORD *)a3;
      if ( a4 == 8 )
        HIDWORD(v251) = *(_DWORD *)(a3 + 4);
      else
        HIDWORD(v251) = 0;
      if ( v54 )
        return -1073741811;
LABEL_231:
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      if ( (_DWORD)v4 )
        v36 = PsSetProcessHandleTracingInformation(Object, &v251);
      else
        v36 = PsSetProcessHandleTracingInformation(Object, 0LL);
      goto LABEL_147;
    case 0x21u:
      if ( ((a4 - 4) & 0xFFFFFFFB) != 0 )
        return -1073741820;
      if ( a4 == 4 )
      {
        v55 = *(_DWORD *)a3;
        v261 = *(_DWORD *)a3;
        LOBYTE(v56) = 0;
      }
      else
      {
        v292 = *(_QWORD *)a3;
        v55 = v292;
        v56 = HIDWORD(v292);
        v261 = v292;
      }
      if ( v55 >= 4 )
        return -1073741811;
      if ( v55 >= 3 && !SeCheckPrivilegedObject(SeIncreaseBasePriorityPrivilege, (int)Handle, 512, PreviousMode) )
        return -1073741727;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL);
      v12 = result;
      if ( result < 0 )
        return result;
      if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 139) )
      {
        v48 = (__int64)v247;
        PspLockProcessExclusive((__int64)Object, (__int64)v247);
        v57 = (volatile signed __int32 *)Object;
        v58 = *((_DWORD *)Object + 281);
        v59 = v261 << 27;
        do
        {
          v60 = v58;
          v58 = _InterlockedCompareExchange(v57 + 281, v59 | v58 & 0xC7FFFFFF, v58);
        }
        while ( v58 != v60 );
        v49 = Object;
        v61 = (KSPIN_LOCK *)*((_QWORD *)Object + 188);
        if ( v61 != (KSPIN_LOCK *)((char *)Object + 1504) )
        {
          v62 = v261;
          do
          {
            if ( (_BYTE)v56 == 1 && ((*((_DWORD *)v61 + 10) >> 9) & 7) < v62 )
              IoBoostThreadIoPriority(v61 - 167, v62, 0);
            PsSetIoPriorityThread((__int64)(v61 - 167), v62);
            v61 = (KSPIN_LOCK *)*v61;
            v49 = Object;
          }
          while ( v61 != (KSPIN_LOCK *)((char *)Object + 1504) );
        }
LABEL_268:
        PspUnlockProcessExclusive((__int64)v49, v48);
LABEL_114:
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)Object + 139);
      }
      else
      {
LABEL_115:
        v12 = -1073741558;
      }
      goto LABEL_79;
    case 0x22u:
      if ( a4 != 4 )
        return -1073741820;
      if ( Handle != (HANDLE)-1LL )
        return -1073741811;
      v63 = *(_DWORD *)a3;
      v287 = v63;
      CurrentProcess = PsGetCurrentProcess();
      v22 = KeSetExecuteOptions((__int64)CurrentProcess, v63);
      if ( v22 < 0 || (v63 & 3) != 1 )
        return v22;
      MmRemoveExecuteGrants();
      return v22;
    case 0x23u:
      memset(P, 0, sizeof(P));
      v311 = 0LL;
      v263 = 0LL;
      v266 = 0LL;
      if ( Handle != (HANDLE)-1LL )
        return -1073741811;
      if ( PreviousMode != 1 )
        return -1073741823;
      if ( a4 < 0x28 || (a4 - 16) % 0x18uLL )
        return -1073741820;
      if ( a4 == 40 )
      {
        PoolWithQuotaTag = P;
        v247 = (struct _KTHREAD *)P;
      }
      else
      {
        PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, a4, 0x736C5450u);
        v247 = (struct _KTHREAD *)PoolWithQuotaTag;
        if ( !PoolWithQuotaTag )
          return -1073741670;
      }
      v293 = PoolWithQuotaTag;
      v262 = PoolWithQuotaTag;
      memmove(PoolWithQuotaTag, v5, v4);
      if ( PoolWithQuotaTag[1] < 2u
        && (*PoolWithQuotaTag & 0xFFFFFFFE) == 0
        && (v73 = (unsigned int)PoolWithQuotaTag[2], (_DWORD)v73)
        && (unsigned int)(v4 - 16) / 0x18uLL == v73 )
      {
        v74 = 0;
        v245 = 0;
        v75 = PoolWithQuotaTag + 4;
        do
        {
          if ( *v75 )
            goto LABEL_327;
          v245 = ++v74;
          v75 += 6;
        }
        while ( v74 < (unsigned int)v73 );
        v76 = PsGetCurrentProcess();
        Object = v76;
        v249 = 0;
        if ( (*PoolWithQuotaTag & 1) != 0 )
        {
          if ( !v76[1].Affinity.StaticBitmap[30]
            || (v77 = WORD2(v76[2].Affinity.StaticBitmap[20]), v77 != 332) && v77 != 452 )
          {
LABEL_327:
            v12 = -1073741811;
            goto LABEL_329;
          }
          v249 = 1;
        }
        v78 = v249 ^ 1u;
        Alignment = 4 * v78 + 4;
        v267 = 4 * v78 + 4;
        v256 = v5;
        v245 = 0;
        v12 = 0;
        v246 = 0;
        v79 = 0LL;
        for ( k = v76; ; k = Object )
        {
          NextProcessThread = (struct _EX_RUNDOWN_REF *)PsGetNextProcessThread((__int64)k, v79);
          v81 = NextProcessThread;
          if ( !NextProcessThread || v245 >= PoolWithQuotaTag[2] )
            break;
          if ( (HIDWORD(NextProcessThread[14].Ptr) & 0x400) == 0 && ExAcquireRundownProtection(NextProcessThread + 169) )
          {
            Count = v81[30].Count;
            v273 = Count;
            if ( v249 )
            {
              v83 = (char *)(Count + 8236);
              v266 = Count + 8236;
              LODWORD(v84) = PtrToUlong((const void *)*(unsigned int *)(Count + 8236));
              v85 = v84;
              v263 = v84;
            }
            else
            {
              v83 = (char *)(Count + 88);
              v266 = Count + 88;
              v85 = *(char **)(Count + 88);
              v263 = v85;
            }
            if ( v85 )
            {
              if ( PoolWithQuotaTag[1] == 1 )
              {
                if ( v85 == v83 )
                {
                  v263 = 0LL;
                }
                else
                {
                  v86 = (unsigned int)PoolWithQuotaTag[3];
                  v87 = v267 * v86;
                  if ( v267 * v86 )
                  {
                    if ( ((Alignment - 1) & (unsigned int)v85) != 0 )
                      ExRaiseDatatypeMisalignment();
                    if ( (unsigned __int64)&v85[v87] > 0x7FFFFFFF0000LL || &v85[v87] < v85 )
                    {
                      MEMORY[0x7FFFFFFF0000] = 0;
                      v86 = (unsigned int)v293[3];
                    }
                  }
                  v88 = (volatile void **)&PoolWithQuotaTag[6 * v245 + 6];
                  ProbeForWrite(*v88, v267 * v86, Alignment);
                  memmove((void *)*v88, v85, v267 * (unsigned int)PoolWithQuotaTag[3]);
                  _InterlockedOr(v242, 0);
                  Count = v273;
                }
                v89 = v245;
                *(_DWORD *)&v256[24 * v245 + 16] |= 1u;
                v90 = *(const void **)&v262[6 * v89 + 6];
                if ( v249 )
                  *(_DWORD *)(Count + 8236) = PtrToUlong(v90);
                else
                  *(_QWORD *)(Count + 88) = v90;
                v91 = (struct _EX_RUNDOWN_REF *)&v256[24 * v245];
                v91[4].Count = NextProcessThread[154].Count;
                v91[3].Count = (unsigned __int64)v263;
                LODWORD(v91[2].Count) ^= 3u;
                ++v245;
              }
              else
              {
                v92 = 6LL * v245;
                *(_DWORD *)&v256[v92 * 4 + 16] |= 1u;
                v93 = v262[3];
                if ( v249 )
                {
                  v94 = (unsigned __int64)&v85[4 * v93];
                  if ( v94 >= 0x7FFFFFFF0000LL )
                    v94 = 0x7FFFFFFF0000LL;
                  LODWORD(v95) = PtrToUlong((const void *)*(unsigned int *)v94);
                  v96 = v95;
                  v266 = v95;
                  v97 = PtrToUlong(*(const void **)&PoolWithQuotaTag[v92 + 6]);
                  v98 = (unsigned __int64)&v263[4 * PoolWithQuotaTag[3]];
                  if ( v98 >= 0x7FFFFFFF0000LL )
                    v98 = 0x7FFFFFFF0000LL;
                  *(_DWORD *)v98 = v97;
                }
                else
                {
                  v99 = (unsigned __int64)&v85[8 * v93];
                  if ( v99 >= 0x7FFFFFFF0000LL )
                    v99 = 0x7FFFFFFF0000LL;
                  v96 = *(_QWORD *)v99;
                  v266 = *(_QWORD *)v99;
                  v100 = (unsigned __int64)&v263[8 * PoolWithQuotaTag[3]];
                  if ( v100 >= 0x7FFFFFFF0000LL )
                    v100 = 0x7FFFFFFF0000LL;
                  *(_QWORD *)v100 = *(_QWORD *)&PoolWithQuotaTag[v92 + 6];
                }
                v101 = 3LL * v245;
                v102 = v256;
                *(_QWORD *)&v256[8 * v101 + 24] = v96;
                *(_DWORD *)&v102[8 * v101 + 16] ^= 3u;
                ++v245;
              }
            }
            ExReleaseRundownProtection(NextProcessThread + 169);
          }
          v79 = NextProcessThread;
        }
        if ( NextProcessThread )
          PsQuitNextProcessThread(NextProcessThread);
      }
      else
      {
        v12 = -1073741820;
      }
LABEL_329:
      if ( PoolWithQuotaTag == (_DWORD *)P )
        return v12;
      ExFreePoolWithTag(PoolWithQuotaTag, 0);
      return v12;
    case 0x27u:
      if ( a4 != 4 )
        return -1073741820;
      v65 = *(_DWORD *)a3;
      v270 = v65;
      if ( v65 > (unsigned int)MmGetDefaultPagePriority() || v65 < (unsigned int)MmGetMinWsPagePriority() )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL);
      v12 = result;
      if ( result < 0 )
        return result;
      if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 139) )
        goto LABEL_115;
      v48 = (__int64)v247;
      PspLockProcessExclusive((__int64)Object, (__int64)v247);
      v66 = v65 << 12;
      v67 = (volatile signed __int32 *)Object;
      v68 = *((_DWORD *)Object + 280);
      do
      {
        v69 = v68;
        v68 = _InterlockedCompareExchange(v67 + 280, v66 | v68 & 0xFFFF8FFF, v68);
      }
      while ( v68 != v69 );
      v49 = Object;
      v70 = (_QWORD *)*((_QWORD *)Object + 188);
      if ( v70 != (_QWORD *)((char *)Object + 1504) )
      {
        v71 = v270;
        do
        {
          PsSetPagePriorityThread((__int64)(v70 - 167), v71);
          v70 = (_QWORD *)*v70;
          v49 = Object;
        }
        while ( v70 != (_QWORD *)((char *)Object + 1504) );
      }
      goto LABEL_268;
    case 0x28u:
      memset(&ApcState, 0, sizeof(ApcState));
      if ( ((a4 - 8) & 0xFFFFFFF7) != 0 )
        return -1073741820;
      if ( a4 == 8 )
      {
        *(_QWORD *)&v268 = 0LL;
        v103 = *(_QWORD *)a3;
        *((_QWORD *)&v268 + 1) = *(_QWORD *)a3;
      }
      else
      {
        v268 = *(_OWORD *)a3;
        v103 = *((_QWORD *)&v268 + 1);
      }
      if ( DWORD1(v268) )
        return -1073741811;
      if ( (_DWORD)v268 != DWORD1(v268) )
        return -1073741736;
      if ( v103 != (__int64)(v103 << 16) >> 16 )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v104 = PsGetCurrentProcess();
      v105 = SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode);
      v19 = Object;
      if ( v105 || Object == v104 )
      {
        v106 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 139);
        v107 = (struct _EX_RUNDOWN_REF *)Object;
        if ( !v106 )
        {
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          return -1073741558;
        }
        v109 = 0;
        if ( *((_QWORD *)Object + 176) )
        {
          v108 = *((_WORD *)Object + 1206);
          if ( v108 == 332 || v108 == 452 )
            v109 = 1;
        }
        v110 = v104[1].Affinity.StaticBitmap[30];
        if ( v109 )
        {
          if ( v110 )
          {
            v115 = WORD2(v104[2].Affinity.StaticBitmap[20]);
            if ( v115 == 332 || v115 == 452 )
            {
              KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
              if ( v103 < MmGetMaximumUserAddress() && (unsigned int)MmValidateUserCallTarget(v103, 1LL) )
              {
                v116 = 0LL;
                v117 = (__int64 *)*((_QWORD *)Object + 176);
                if ( v117 )
                  v116 = *v117;
                *(_DWORD *)(v116 + 1168) = DWORD2(v268);
                KeUnstackDetachProcess(&ApcState);
                ExReleaseRundownProtection((PEX_RUNDOWN_REF)Object + 139);
              }
              else
              {
                v7 = -1073741811;
                KeUnstackDetachProcess(&ApcState);
                ExReleaseRundownProtection((PEX_RUNDOWN_REF)Object + 139);
              }
LABEL_216:
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              return v7;
            }
          }
        }
        else if ( !v110 || (v111 = WORD2(v104[2].Affinity.StaticBitmap[20]), v111 != 332) && v111 != 452 )
        {
          KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
          if ( !(unsigned int)MmValidateUserCallTarget(v103, 0LL) )
            v7 = -1073741811;
          KeUnstackDetachProcess(&ApcState);
          v107 = (struct _EX_RUNDOWN_REF *)Object;
          if ( (v7 & 0x80000000) == 0 )
          {
            v112 = (__int64)v247;
            PspLockProcessExclusive((__int64)Object, (__int64)v247);
            *((_QWORD *)Object + 123) = v103;
            v113 = Object;
            v114 = (volatile signed __int32 *)*((_QWORD *)Object + 188);
            if ( v114 != (volatile signed __int32 *)((char *)Object + 1504) )
            {
              while ( 1 )
              {
                if ( v103 )
                  _interlockedbittestandset(v114 - 334, 0x19u);
                else
                  _interlockedbittestandreset(v114 - 334, 0x19u);
                v114 = *(volatile signed __int32 **)v114;
                v113 = Object;
                if ( v114 == (volatile signed __int32 *)((char *)Object + 1504) )
                  break;
                v103 = *((_QWORD *)&v268 + 1);
              }
            }
            PspUnlockProcessExclusive((__int64)v113, v112);
            ExReleaseRundownProtection((PEX_RUNDOWN_REF)Object + 139);
            goto LABEL_216;
          }
LABEL_373:
          ExReleaseRundownProtection(v107 + 139);
          goto LABEL_216;
        }
        v7 = -1073741637;
        goto LABEL_373;
      }
LABEL_97:
      ObfDereferenceObjectWithTag(v19, 0x79517350u);
      return -1073741727;
    case 0x29u:
      memset(SubjectContext, 0, sizeof(SubjectContext));
      if ( Handle != (HANDLE)-1LL )
        return -1073741811;
      v118 = 0LL;
      if ( a4 == 40 )
      {
        if ( PreviousMode )
        {
          *(_OWORD *)SubjectContext = *(_OWORD *)a3;
          *(_OWORD *)&SubjectContext[16] = *(_OWORD *)(a3 + 16);
          *(_QWORD *)&SubjectContext[32] = *(_QWORD *)(a3 + 32);
          v118 = (_QWORD *)(a3 + 32);
          v5 = SubjectContext;
        }
        v119 = *(_DWORD *)v5;
        if ( *(_DWORD *)v5 > 0x40u || *((_DWORD *)v5 + 1) | *((_DWORD *)v5 + 2) | *((_DWORD *)v5 + 3) )
          return -1073741811;
        v5 += 16;
      }
      else
      {
        if ( a4 != 24 )
          return -1073741820;
        v119 = 0;
        if ( PreviousMode )
        {
          *(_QWORD *)&SubjectContext[16] = *(_QWORD *)a3;
          *(_QWORD *)&SubjectContext[24] = *(_QWORD *)(a3 + 8);
          v118 = (_QWORD *)(a3 + 16);
          v5 = &SubjectContext[16];
        }
      }
      if ( !*(_QWORD *)v5 )
        return -1073741811;
      v303 = *(PVOID *)v5;
      *((_QWORD *)v5 + 2) = 0LL;
      result = MmAllocateUserStack((__int64 *)v5 + 2, *((_QWORD *)v5 + 1), (__int64 *)&v303, v119, 0);
      if ( result >= 0 && PreviousMode )
        *v118 = *((_QWORD *)v5 + 2);
      return result;
    case 0x2Du:
      if ( Handle != (HANDLE)-1LL )
        return -1073741811;
      if ( a4 != 4 )
        return -1073741820;
      LODWORD(v251) = *(_DWORD *)a3;
      if ( (v251 & 0xFFFFFFFC) != 0 )
        return -1073741811;
      return PspSetProcessAffinityUpdateMode(CurrentThread, &v251);
    case 0x2Eu:
      if ( a4 != 4 )
        return -1073741820;
      v120 = *(_DWORD *)a3;
      v286 = v120;
      if ( (v120 & 0xFFFFFFFE) != 0 )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      if ( (v120 & 1) != 0 )
        _InterlockedOr((volatile signed __int32 *)Object + 281, 0x200000u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 281, 0xFFDFFFFF);
      goto LABEL_88;
    case 0x30u:
      if ( a4 != 4 )
        return -1073741820;
      v121 = *(_DWORD *)a3;
      v288 = *(_DWORD *)a3;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v122 = PsReferencePrimaryToken((PEPROCESS)Object);
      SeSetVirtualizationToken((__int64)v122, v121);
      ObfDereferenceObject(v122);
      goto LABEL_88;
    case 0x31u:
      if ( a4 != 8 )
        return -1073741820;
      if ( Handle != (HANDLE)-1LL )
        return -1073741811;
      v123 = *(_QWORD *)a3;
      v297 = v123;
      if ( (v123 & 3) != 1 )
        return -1073741811;
      PsGetCurrentProcess()[1].Affinity.StaticBitmap[23] = v123;
      return 0;
    case 0x34u:
      if ( a4 != 8 )
        return -1073741820;
      v248 = *(_QWORD *)a3;
      if ( Handle != (HANDLE)-1LL && (_DWORD)v248 != 2 )
        return -1073741811;
      break;
    case 0x35u:
      if ( Handle != (HANDLE)-1LL )
        return -1073741811;
      if ( a4 != 16 )
        return -1073741820;
      *(_OWORD *)SubjectContext = *(_OWORD *)a3;
      if ( SubjectContext[8] )
        return RtlRemoveDynamicFunctionTable(*(__int64 *)SubjectContext);
      else
        return RtlInsertDynamicFunctionTable(*(__int64 *)SubjectContext);
    case 0x36u:
      if ( a4 != 4 )
        return -1073741820;
      v187 = *(_DWORD *)a3;
      v284 = v187;
      if ( (v187 & 0xFFFFFFFE) != 0 )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v188 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
      if ( v188 )
      {
        ExEnableHandleExceptions(v188, v187 & 1);
        ObDereferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
      }
      else
      {
LABEL_809:
        v7 = -1073741558;
      }
      goto LABEL_216;
    case 0x38u:
      *(_OWORD *)Src = 0LL;
      v189 = 0LL;
      v274 = 0LL;
      if ( PreviousMode != 1 )
        goto LABEL_822;
      v190 = 0x7FFFFFFF0000LL;
      if ( a3 < 0x7FFFFFFF0000LL )
        v190 = a3;
      v191 = *(_DWORD *)v190;
      LODWORD(Src[0]) = v191;
      v192 = *(void **)(v190 + 8);
      Src[1] = v192;
      if ( !(_WORD)v191 )
        return -1073741811;
      if ( ((unsigned __int8)v192 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v193 = (unsigned __int64)v192 + (unsigned __int16)v191;
      if ( v193 > 0x7FFFFFFF0000LL || v193 < (unsigned __int64)v192 )
        MEMORY[0x7FFFFFFF0000] = 0;
      v194 = ExAllocatePoolWithTag(NonPagedPoolNx, LOWORD(Src[0]), 0x6E497350u);
      v189 = v194;
      v274 = v194;
      if ( !v194 )
        return -1073741670;
      memmove(v194, Src[1], LOWORD(Src[0]));
      Src[1] = v189;
      v5 = Src;
      v298 = Src;
LABEL_822:
      v12 = ObReferenceObjectByHandleWithTag(
              Handle,
              0x2000u,
              (POBJECT_TYPE)PsProcessType,
              PreviousMode,
              0x79517350u,
              &Object,
              0LL);
      if ( v12 >= 0 )
      {
        v37 = IoRevokeHandlesForProcess((__int64)v5, Object);
        if ( v189 )
          ExFreePoolWithTag(v189, 0);
        goto LABEL_148;
      }
      if ( !v189 )
        return v12;
      ExFreePoolWithTag(v189, 0);
      return v12;
    case 0x39u:
      return MmProcessWorkingSetControl((ULONG_PTR)Handle);
    case 0x3Bu:
      if ( a4 != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v195 = *(_DWORD *)v5 != 0;
      v294 = v195;
      if ( PsGetCurrentProcess() == Object )
      {
        v12 = -1073741790;
      }
      else if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
      {
        v12 = 0;
        KeSetCheckStackExtentsProcess(Object, v195);
        if ( !v195 && (*((_DWORD *)Object + 280) & 0x20000) != 0 )
          _InterlockedAnd((volatile signed __int32 *)Object + 280, 0xFFFDFFFF);
      }
      else
      {
        v12 = -1073741727;
      }
      goto LABEL_79;
    case 0x3Eu:
      if ( a4 != 16 )
        return -1073741820;
      v308 = *(_OWORD *)a3;
      if ( (_WORD)v308 != 1 || DWORD1(v308) )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      if ( *((_QWORD *)&v308 + 1) )
        _InterlockedOr((volatile signed __int32 *)Object + 281, 0x100u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 281, 0xFFFFFEFF);
      goto LABEL_88;
    case 0x3Fu:
      v251 = 0LL;
      if ( a4 != 8 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v251 = *(_QWORD *)v5;
      v36 = PsSetProcessFaultInformation((ULONG_PTR)Object, (int *)&v251);
      goto LABEL_147;
    case 0x41u:
      if ( a4 != 32 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x2001u,
                 (POBJECT_TYPE)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      *(_OWORD *)SubjectContext = *(_OWORD *)v5;
      *(_OWORD *)&SubjectContext[16] = *((_OWORD *)v5 + 1);
      if ( *(_DWORD *)SubjectContext != 3 )
      {
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return -1073741735;
      }
      if ( (*(_DWORD *)&SubjectContext[4] & 0xFFFFFFF8) != 0
        || *(_QWORD *)&SubjectContext[8]
        || *(_QWORD *)&SubjectContext[16]
        || (((*(_DWORD *)&SubjectContext[4] >> 1) & 1) != 0 || (SubjectContext[4] & 4) != 0)
        && (SubjectContext[4] & 1) == 0 )
      {
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return -1073741811;
      }
      if ( ((*(_DWORD *)&SubjectContext[4] >> 1) & 1) != 0 || (SubjectContext[4] & 4) != 0 )
        v36 = MmReleaseCommitForMemResetPages(
                (volatile signed __int32 *)Object,
                (*(_DWORD *)&SubjectContext[4] >> 2) & 1);
      else
        v36 = MmSetCommitReleaseEligibility((__int64)Object, SubjectContext[4] & 1, v196, v197);
LABEL_147:
      v37 = v36;
LABEL_148:
      v38 = Object;
LABEL_149:
      ObfDereferenceObjectWithTag(v38, 0x79517350u);
      return v37;
    case 0x42u:
    case 0x43u:
      if ( (a4 & 7) != 0 || a4 > 0x100 )
        return -1073741820;
      memmove(v313, (const void *)a3, a4);
      v198 = (unsigned int)v4 >> 3;
      if ( Alignment == 67 )
      {
        result = ExCpuSetResourceManagerAccessCheck(PreviousMode);
        if ( result < 0 )
          return result;
      }
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x2000u,
                 (POBJECT_TYPE)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v36 = KeSetCpuSetsProcess((__int64)Object, v198, v313);
      goto LABEL_147;
    case 0x44u:
      if ( (PsGetCurrentProcess()[1].IdealProcessor[30] & 0x100) == 0 )
        return -1073741727;
      v276 = 0LL;
      v37 = ObReferenceObjectByHandle(Handle, 0x200u, (POBJECT_TYPE)PsProcessType, PreviousMode, &v276, 0LL);
      Object = v276;
      if ( v37 < 0 )
        return v37;
      _InterlockedOr((volatile signed __int32 *)v276 + 543, 0x40u);
      ObfDereferenceObject(Object);
      return v37;
    case 0x46u:
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      EtwTraceProcessSetInPrivateMode((__int64)Object);
      _InterlockedOr((volatile signed __int32 *)Object + 280, 0x80000000);
      goto LABEL_88;
    case 0x47u:
      if ( a4 != 4 )
        return -1073741820;
      v200 = *(_DWORD *)a3;
      v289 = *(_DWORD *)a3;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v201 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
      if ( !v201 )
        goto LABEL_809;
      ExEnableRaiseUMExceptionOnInvalidHandleClose(v201, v200);
      ObDereferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
      goto LABEL_216;
    case 0x48u:
      return PsIumEnableOnDemandDebugWithResponse(Handle, a3, a4);
    case 0x4Au:
      if ( a4 != 1 )
        return -1073741820;
      v202 = *(_BYTE *)a3;
      v259 = *(_BYTE *)a3;
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
        return -1073741727;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x2000u,
                 (POBJECT_TYPE)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      if ( v202 )
        _InterlockedOr((volatile signed __int32 *)Object + 543, 0x200u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 543, 0xFFFFFDFF);
      goto LABEL_88;
    case 0x4Du:
      v303 = 0LL;
      v304 = 0;
      if ( a4 != 12 )
        return -1073741820;
      v303 = *(PVOID *)a3;
      v203 = *(_DWORD *)(a3 + 8);
      v304 = v203;
      if ( (_DWORD)v303 != 1 || (HIDWORD(v303) & 0xFFFFFFF8) != 0 || (~HIDWORD(v303) & v203) != 0 )
        return -1073741811;
      ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
      if ( !ExtensionTable )
        return -1073741822;
      v205 = ObReferenceObjectByHandleWithTag(
               Handle,
               0x2000u,
               (POBJECT_TYPE)PsProcessType,
               PreviousMode,
               0x79517350u,
               &Object,
               0LL);
      if ( v205 >= 0 )
      {
        v206 = (*(__int64 (__fastcall **)(PVOID, PVOID *))(ExtensionTable + 8))(Object, &v303);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
        return v206;
      }
      else
      {
        ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
        return v205;
      }
    case 0x50u:
      result = ExCpuSetResourceManagerAccessCheck(PreviousMode);
      if ( result < 0 )
        return result;
      if ( (_DWORD)v4 != 1 )
        return -1073741820;
      v199 = *v5;
      v258 = v199;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x2000u,
                 (POBJECT_TYPE)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      if ( v199 )
        _InterlockedOr((volatile signed __int32 *)Object + 280, 0x8000000u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 280, 0xF7FFFFFF);
      KeRecomputeCpuSetAffinityProcess((__int64)Object);
      goto LABEL_88;
    case 0x52u:
      if ( a4 < 8 )
        return -1073741820;
      memset(v312, 0, sizeof(v312));
      if ( a4 >= 0x90 )
        LODWORD(v4) = 144;
      memmove(v312, (const void *)a3, (unsigned int)v4);
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v207 = PoSetProcessEnergyTrackingState((__int64)Object, v312);
      v15 = Object;
      if ( v207 >= 0 )
        goto LABEL_89;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      return v207;
    case 0x53u:
      return -1073741637;
    case 0x55u:
      if ( a4 != 24 )
        return -1073741820;
      *(_OWORD *)pszDest = 0LL;
      v315 = 0LL;
      v316 = 0LL;
      v317 = 0LL;
      v318 = 0;
      v208 = *(_OWORD *)a3;
      *(_OWORD *)pszSrc = v208;
      v278 = *(_QWORD *)(a3 + 16);
      v209 = (const char *)v208;
      if ( (unsigned __int64)(v208 + 65) > 0x7FFFFFFF0000LL || (__int64)v208 + 65 < (unsigned __int64)v208 )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
        v209 = pszSrc[0];
      }
      RtlStringCbCopyA(pszDest, 0x41uLL, v209);
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x220u,
                 (POBJECT_TYPE)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      pszSrc[0] = pszDest;
      v318 = 0;
      v22 = EtwSetProcessTelemetryCoverage((_KPROCESS *)Object, (__int64)pszSrc);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *((_DWORD *)v5 + 3) = HIDWORD(pszSrc[1]);
      *((_DWORD *)v5 + 4) = v278;
      return v22;
    case 0x57u:
    case 0x60u:
      if ( a2 == 87 && !a4 || a2 == 96 && a4 < 4 )
        return -1073741820;
      v210 = PsGetCurrentProcess();
      result = EtwCheckSecurityLoggerAccess((__int64)v210, PreviousMode);
      if ( result < 0 )
        return result;
      if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode)
        && !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
      {
        return -1073741727;
      }
      v253 = 0;
      if ( Alignment == 87 )
        v211 = (*v5 & 1 ^ *v5) & 2 ^ *v5 & 1;
      else
        v211 = *(_DWORD *)v5;
      v253 = v211;
      if ( (v211 & 0xFFFFFFC0) != 0 )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x2000u,
                 (POBJECT_TYPE)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      _InterlockedAnd((volatile signed __int32 *)Object + 543, 0xFFE7FFFF);
      v212 = (((v253 >> 2) & 1) << 19) | 0x100000;
      if ( (v253 & 8) == 0 )
        v212 = ((v253 >> 2) & 1) << 19;
      v213 = v212 | 0x20000000;
      if ( (v253 & 0x10) == 0 )
        v213 = v212;
      v214 = v213 | 0x10000000;
      if ( (v253 & 0x20) == 0 )
        v214 = v213;
      _InterlockedOr((volatile signed __int32 *)Object + 543, v214);
      _InterlockedAnd((volatile signed __int32 *)Object + 280, 0xFCFFFFFF);
      v215 = ((v253 & 1) << 24) | 0x2000000;
      if ( (v253 & 2) == 0 )
        v215 = (v253 & 1) << 24;
      _InterlockedOr((volatile signed __int32 *)Object + 280, v215);
LABEL_88:
      v15 = Object;
LABEL_89:
      ObfDereferenceObjectWithTag(v15, 0x79517350u);
      return 0;
    case 0x5Au:
      return SeCodeIntegritySetInformationProcess(Handle, a2, a3, a4);
    case 0x5Bu:
      if ( a4 != 4 )
        return -1073741820;
      v216 = *(_DWORD *)a3;
      v285 = v216;
      if ( (v216 & 0xFFFFFFFE) != 0 )
        return -1073741811;
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
        return -1073741727;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x2000u,
                 (POBJECT_TYPE)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      PspSetProcessForegroundBackgroundRequest((__int64)Object, v216 & 1, 1);
      goto LABEL_88;
    case 0x5Fu:
      if ( a4 != 8 )
        return -1073741820;
      v217 = *(void **)a3;
      v299 = *(_QWORD *)a3;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x2000u,
                 (POBJECT_TYPE)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v37 = ObReferenceObjectByHandleWithTag(
              v217,
              0x1000u,
              (POBJECT_TYPE)PsProcessType,
              PreviousMode,
              0x79517350u,
              &v272,
              0LL);
      v38 = Object;
      if ( v37 < 0 )
        goto LABEL_149;
      v37 = PspCombineSecurityDomains(Object, v272);
      ObfDereferenceObjectWithTag(v272, 0x79517350u);
      goto LABEL_148;
    case 0x61u:
      if ( a4 != 8 )
        return -1073741820;
      v218 = *(_QWORD *)a3;
      v295 = v218;
      if ( (v218 & 0xFFFFFFFE) != 0 || Handle != (HANDLE)-1LL )
        return -1073741811;
      v219 = PsGetCurrentProcess();
      Object = v219;
      v220 = v219[1].Affinity.StaticBitmap[24];
      if ( !v220 )
        return -1073741790;
      v221 = 0LL;
      v222 = (__int64 *)v219[1].Affinity.StaticBitmap[30];
      if ( v222 )
        v221 = *v222;
      v223 = v218 & 1;
      v224 = *(_DWORD *)(v220 + 1984);
      if ( v223 )
        v225 = v224 | 1;
      else
        v225 = v224 & 0xFFFFFFFE;
      *(_DWORD *)(v220 + 1984) = v225;
      if ( v221 )
      {
        v226 = *(_DWORD *)(v221 + 1140);
        if ( v223 )
          v227 = v226 | 1;
        else
          v227 = v226 & 0xFFFFFFFE;
        *(_DWORD *)(v221 + 1140) = v227;
      }
      return v7;
    case 0x62u:
      if ( Handle != (HANDLE)-1LL )
        return -1073741811;
      if ( PreviousMode != 1 )
        return -1073741823;
      if ( a4 != 32 )
        return -1073741820;
      if ( !KeIsUserCetAllowed() || !_bittest((const signed __int32 *)&KeGetCurrentThread()->116, 0x14u) )
        return -1073741637;
      return PspSetupUserFiberShadowStack(
               *(_QWORD *)v5,
               *((_QWORD *)v5 + 1),
               (unsigned int)*((_OWORD *)v5 + 1),
               v5 + 24);
    case 0x63u:
      if ( Handle != (HANDLE)-1LL )
        return -1073741811;
      if ( PreviousMode != 1 )
        return -1073741823;
      if ( a4 != 8 )
        return -1073741820;
      if ( KeIsUserCetAllowed() && _bittest((const signed __int32 *)&KeGetCurrentThread()->116, 0x14u) )
        return PspFreeUserFiberShadowStack(*(PVOID *)v5);
      return -1073741637;
    case 0x64u:
      memset(SubjectContext, 0, 20);
      if ( a4 != 20 )
        return -1073741820;
      *(_OWORD *)SubjectContext = *(_OWORD *)a3;
      *(_DWORD *)&SubjectContext[16] = *(_DWORD *)(a3 + 16);
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x20u,
                 (POBJECT_TYPE)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v36 = PspSyscallProviderOptIn((__int64)Object, (__int64)SubjectContext);
      goto LABEL_147;
    case 0x65u:
      LODWORD(v251) = 0;
      v228 = 0LL;
      if ( a4 != 16 )
        return -1073741820;
      *(_OWORD *)SubjectContext = *(_OWORD *)a3;
      v229 = 16 * *(unsigned __int16 *)SubjectContext;
      if ( !v229 )
        return -1073741811;
      v230 = *(const void **)&SubjectContext[8];
      if ( !*(_QWORD *)&SubjectContext[8] )
        return -1073741811;
      v231 = v229;
      ProbeForWrite(*(volatile void **)&SubjectContext[8], v229, 8u);
      if ( *(_WORD *)&SubjectContext[2] || *(_DWORD *)&SubjectContext[4] )
        return -1073741811;
      if ( PreviousMode != 1 )
        return -1073741790;
      v303 = 0LL;
      result = ObReferenceObjectByHandle(Handle, 0x200u, (POBJECT_TYPE)PsProcessType, 1, &v303, 0LL);
      Object = v303;
      if ( result < 0 )
        return result;
      v232 = PsGetCurrentProcess();
      v233 = Object;
      if ( Object == v232 && (*((_DWORD *)Object + 629) & 0x40000000) != 0 )
      {
        v12 = -1073741790;
        goto LABEL_970;
      }
      if ( (*((_DWORD *)Object + 629) & 0x4000) == 0 )
        goto LABEL_969;
      Pool2 = (_DWORD *)ExAllocatePool2(257LL, v231, 1313359172LL);
      v228 = Pool2;
      v303 = Pool2;
      if ( Pool2 )
      {
        memmove(Pool2, v230, v231);
        v12 = PspProcessDynamicEHContinuationTargets((ULONG_PTR)Object);
        v246 = v12;
        v245 = 0;
      }
      else
      {
        v12 = -1073741801;
      }
      goto LABEL_967;
    case 0x66u:
      LODWORD(v251) = 0;
      v228 = 0LL;
      if ( a4 != 16 )
        return -1073741820;
      *(_OWORD *)SubjectContext = *(_OWORD *)a3;
      v235 = 24 * *(unsigned __int16 *)SubjectContext;
      if ( !v235 )
        return -1073741811;
      v236 = *(const void **)&SubjectContext[8];
      if ( !*(_QWORD *)&SubjectContext[8] )
        return -1073741811;
      v237 = v235;
      ProbeForWrite(*(volatile void **)&SubjectContext[8], v235, 8u);
      if ( *(_WORD *)&SubjectContext[2] || *(_DWORD *)&SubjectContext[4] )
        return -1073741811;
      if ( PreviousMode != 1 )
        return -1073741790;
      v303 = 0LL;
      result = ObReferenceObjectByHandle(Handle, 0x200u, (POBJECT_TYPE)PsProcessType, 1, &v303, 0LL);
      Object = v303;
      if ( result < 0 )
        return result;
      v238 = PsGetCurrentProcess();
      v233 = Object;
      if ( Object == v238 && (*((_DWORD *)Object + 629) & 0x40000000) != 0 )
      {
        v12 = -1073741790;
      }
      else if ( (*((_DWORD *)Object + 629) & 0x4000) != 0 )
      {
        v239 = (_DWORD *)ExAllocatePool2(257LL, v237, 1380009284LL);
        v228 = v239;
        v303 = v239;
        if ( v239 )
        {
          memmove(v239, v236, v237);
          v12 = PspProcessDynamicEnforcedAddressRanges((ULONG_PTR)Object, (__int64)&v251);
          v246 = v12;
          while ( 1 )
          {
            v245 = v7;
            if ( v7 >= (unsigned int)v251 )
              break;
            *((_DWORD *)v236 + 6 * v7 + 4) = v228[6 * v7 + 4];
            ++v7;
          }
LABEL_967:
          v233 = Object;
        }
        else
        {
          v12 = -1073741801;
          v233 = Object;
        }
      }
      else
      {
LABEL_969:
        v12 = -1073741637;
      }
LABEL_970:
      if ( v233 )
        ObfDereferenceObject(v233);
      if ( !v228 )
        return v12;
      ExFreePoolWithTag(v228, 0);
      return v12;
    case 0x69u:
      if ( a4 != 8 )
        return -1073741820;
      v240 = *(_QWORD *)a3;
      v300 = v240;
      if ( (~MEMORY[0xFFFFF780000003D8] & v240) != 0 )
        return -1073741811;
      if ( PreviousMode != 1 )
        return -1073741790;
      if ( Handle == (HANDLE)-1LL )
        goto LABEL_998;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 1,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      if ( Object != PsGetCurrentProcess() )
        return -1073741811;
LABEL_998:
      v241 = PsGetCurrentProcess();
      Object = v241;
      if ( v241[1].Affinity.StaticBitmap[30] )
        return -1073741811;
      if ( PsIsSystemProcess((__int64)v241) )
        return -1073741637;
      else
        return PspEnableProcessOptionalXStateFeatures(Object, v240);
    default:
      return -1073741821;
  }
  v124 = PsGetCurrentProcess();
  p_Lock = &v124->Header.Lock;
  Object = v124;
  switch ( (int)v248 )
  {
    case 1:
      if ( (v248 & 0xFFFFFFF000000000uLL) != 0 )
      {
        v12 = -1073741811;
        goto LABEL_509;
      }
      v127 = (HIDWORD(v248) >> 1) & 1;
      if ( !v127 && ((__int64)v124[2].ReadyListHead.Blink & 0x10) != 0 )
        goto LABEL_431;
      if ( (v248 & 0x100000000LL) == 0 && ((__int64)v124[2].ReadyListHead.Blink & 0x40) == 0 )
        goto LABEL_431;
      v128 = (HIDWORD(v248) >> 3) & 1;
      if ( !v128 && ((__int64)v124[2].ReadyListHead.Blink & 8) != 0 )
        goto LABEL_431;
      if ( v128 )
      {
        if ( !v127 )
        {
          v12 = -1073741776;
          goto LABEL_509;
        }
      }
      else if ( !v127 )
      {
LABEL_437:
        if ( (v248 & 0x100000000LL) != 0 )
        {
          _InterlockedAnd(p_Lock + 628, 0xFFFFFFBF);
          p_Lock = (volatile signed __int32 *)Object;
        }
        if ( v128 )
        {
          _InterlockedOr(p_Lock + 628, 8u);
          p_Lock = (volatile signed __int32 *)Object;
        }
        v12 = 0;
        goto LABEL_509;
      }
      _InterlockedOr((volatile signed __int32 *)&v124[2].ReadyListHead.Blink, 0x10u);
      p_Lock = (volatile signed __int32 *)Object;
      goto LABEL_437;
    case 2:
      v133 = HIDWORD(v248);
      if ( (v248 & 0xFFFFFFF000000000uLL) != 0 )
      {
        v12 = -1073741811;
        goto LABEL_509;
      }
      if ( (v248 & 0x100000000LL) != 0 && (v248 & 0x800000000LL) != 0 )
        v133 = HIDWORD(v248) & 0xFFFFFFF7;
      v134 = v133 & 1;
      if ( (v133 & 1) == 0 && ((v133 & 2) != 0 || (v133 & 4) != 0) )
      {
        v12 = -1073741811;
        goto LABEL_509;
      }
      if ( PsIsSystemWideMitigationOptionSet() )
      {
        p_Lock = (volatile signed __int32 *)Object;
LABEL_508:
        v12 = -1073741637;
        goto LABEL_509;
      }
      if ( Handle == (HANDLE)-1LL )
      {
        p_Lock = (volatile signed __int32 *)Object;
        v135 = 0;
      }
      else
      {
        v12 = ObReferenceObjectByHandleWithTag(
                Handle,
                0x200u,
                (POBJECT_TYPE)PsProcessType,
                PreviousMode,
                0x79517350u,
                &Object,
                0LL);
        if ( v12 < 0 )
          goto LABEL_452;
        v135 = 1;
        v136 = PsGetCurrentProcess();
        p_Lock = (volatile signed __int32 *)Object;
        if ( Object != v136 )
        {
          v137 = *((_DWORD *)Object + 628);
          if ( (v137 & 0x100) != 0 )
          {
            memset(SubjectContext, 0, 32);
            SeCaptureSubjectContextEx(0LL, (PEPROCESS)Object, (PSECURITY_SUBJECT_CONTEXT)SubjectContext);
            IsSandboxedToken = RtlIsSandboxedToken((PSECURITY_SUBJECT_CONTEXT)SubjectContext, 1);
            SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)SubjectContext);
            if ( !RtlIsSandboxedToken(0LL, PreviousMode) && IsSandboxedToken )
            {
              p_Lock = (volatile signed __int32 *)Object;
              if ( (*((_DWORD *)Object + 628) & 0x400) != 0 )
                goto LABEL_520;
            }
            v139 = SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode);
            p_Lock = (volatile signed __int32 *)Object;
            if ( v139 )
              goto LABEL_520;
          }
          else if ( (v133 & 8) != 0 || (v133 & 1) != 0 || (v137 & 0x800) == 0 )
          {
LABEL_520:
            v140 = 0;
            if ( (v133 & 1) == 0 )
              v140 = 2304;
            v141 = (v134 != 0 ? 0x100 : 0) | 0x800;
            if ( (v133 & 8) == 0 )
              v141 = v134 != 0 ? 0x900 : 0;
            if ( (v133 & 2) != 0 )
              v141 |= 0x200u;
            else
              v140 |= 0x200u;
            v142 = v141 | 0x400;
            v143 = (v133 >> 2) & 1;
            if ( !v143 )
              v142 = v141;
            v144 = v140 | 0x400;
            v145 = (v143 & 1) == 0;
            goto LABEL_559;
          }
          v12 = -1073741790;
          goto LABEL_510;
        }
      }
      if ( (v133 & 1) == 0 && (p_Lock[628] & 0x100) != 0 )
      {
        v12 = -1073741790;
        goto LABEL_510;
      }
      v146 = (v133 >> 3) & 1;
      if ( !v146 && (v133 & 1) == 0 && (p_Lock[628] & 0x800) != 0 )
      {
        v12 = -1073741790;
        goto LABEL_510;
      }
      v147 = (v133 >> 1) & 1;
      if ( v147 )
      {
        v148 = *((_DWORD *)p_Lock + 628);
        if ( (v148 & 0x100) != 0 && (v148 & 0x200) == 0 )
        {
          v12 = -1073741790;
          goto LABEL_510;
        }
      }
      v149 = (v133 >> 2) & 1;
      if ( v149 )
      {
        v150 = *((_DWORD *)p_Lock + 628);
        if ( (v150 & 0x100) != 0 && (v150 & 0x400) == 0 )
        {
          v12 = -1073741790;
          goto LABEL_510;
        }
      }
      if ( v134 )
      {
        v151 = 2304;
      }
      else
      {
        v151 = 0;
        if ( v146 )
          v151 = 2048;
      }
      v140 = (v147 ^ 1) << 9;
      v142 = v151 | 0x200;
      if ( !v147 )
        v142 = v151;
      if ( v149 )
        v142 |= 0x400u;
      v144 = v140 | 0x400;
      v145 = v149 == 0;
LABEL_559:
      if ( v145 )
        v140 = v144;
      RtlInterlockedSetClearBits(p_Lock + 628, v142, v140);
      v12 = 0;
      p_Lock = (volatile signed __int32 *)Object;
      goto LABEL_510;
    case 3:
      if ( (v248 & 0xFFFFFFFC00000000uLL) != 0 )
      {
        v12 = -1073741811;
        goto LABEL_509;
      }
      if ( ((HIDWORD(v248) >> 1) & 1) == 0 && (v248 & 0x100000000LL) != 0 )
      {
        v12 = -1073741811;
        goto LABEL_509;
      }
      if ( ((HIDWORD(v248) >> 1) & 1) != 0 && (v248 & 0x100000000LL) == 0 )
      {
        v12 = -1073741811;
        goto LABEL_509;
      }
      v129 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)v124);
      if ( !v129 )
      {
        v12 = -1073741558;
        goto LABEL_452;
      }
      v12 = -1073741790;
      if ( ExEnableHandleExceptions(v129, BYTE4(v248) & 1) )
        v12 = 0;
      ObDereferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
      p_Lock = (volatile signed __int32 *)Object;
      goto LABEL_509;
    case 4:
      v130 = HIDWORD(v248);
      if ( (v248 & 0xFFFFFFF000000000uLL) == 0 )
      {
        if ( (v248 & 0x100000000LL) != 0 && (v248 & 0x200000000LL) != 0 )
        {
          v130 = HIDWORD(v248) & 0xFFFFFFFD;
          HIDWORD(v248) &= ~2u;
        }
        MmGetMinWsPagePriority();
        if ( (unsigned int)Feature_Servicing_FsctlProcessMitigation__private_IsEnabled()
          && (v130 & 4) != 0
          && (v130 & 8) != 0 )
        {
          v130 &= ~8u;
          HIDWORD(v248) = v130;
        }
        if ( (v130 & 1) == 0 )
        {
          p_Lock = (volatile signed __int32 *)Object;
          if ( (*((_DWORD *)Object + 628) & 0x1000) != 0 )
          {
            v12 = -1073741790;
            goto LABEL_509;
          }
        }
        MmGetMinWsPagePriority();
        if ( !(unsigned int)Feature_Servicing_FsctlProcessMitigation__private_IsEnabled() || (v130 & 4) != 0 )
        {
          p_Lock = (volatile signed __int32 *)Object;
        }
        else
        {
          p_Lock = (volatile signed __int32 *)Object;
          if ( (*((_DWORD *)Object + 732) & 2) != 0 )
          {
            v12 = -1073741790;
            goto LABEL_509;
          }
        }
        v131 = (v130 >> 1) & 1;
        if ( !v131 && (v130 & 1) == 0 && (p_Lock[628] & 0x2000) != 0 )
        {
          v12 = -1073741790;
          goto LABEL_509;
        }
        MmGetMinWsPagePriority();
        if ( !(unsigned int)Feature_Servicing_FsctlProcessMitigation__private_IsEnabled()
          || (v130 & 8) != 0
          || (v130 & 4) != 0 )
        {
          p_Lock = (volatile signed __int32 *)Object;
        }
        else
        {
          p_Lock = (volatile signed __int32 *)Object;
          if ( (*((_DWORD *)Object + 732) & 4) != 0 )
          {
            v12 = -1073741790;
            goto LABEL_509;
          }
        }
        if ( (v130 & 1) != 0 || v131 )
        {
          IsGuiThread = PsIsGuiThread(v247);
          p_Lock = (volatile signed __int32 *)Object;
          if ( IsGuiThread )
          {
            v12 = -1073741431;
            goto LABEL_509;
          }
        }
        v12 = 0;
        if ( (v130 & 1) != 0 )
        {
          _InterlockedOr(p_Lock + 628, 0x3000u);
        }
        else
        {
          if ( !v131 )
            goto LABEL_492;
          _InterlockedOr(p_Lock + 628, 0x2000u);
        }
        LOBYTE(v130) = BYTE4(v248);
LABEL_492:
        MmGetMinWsPagePriority();
        if ( (unsigned int)Feature_Servicing_FsctlProcessMitigation__private_IsEnabled() )
        {
          if ( (v130 & 4) != 0 )
          {
            _InterlockedOr((volatile signed __int32 *)Object + 732, 6u);
            p_Lock = (volatile signed __int32 *)Object;
            goto LABEL_509;
          }
          if ( (v130 & 8) != 0 )
          {
            _InterlockedOr((volatile signed __int32 *)Object + 732, 4u);
            p_Lock = (volatile signed __int32 *)Object;
            goto LABEL_509;
          }
        }
LABEL_452:
        p_Lock = (volatile signed __int32 *)Object;
        goto LABEL_509;
      }
      v12 = -1073741811;
LABEL_509:
      v135 = 0;
LABEL_510:
      if ( v135 != 1 )
        return v12;
      ObfDereferenceObjectWithTag((PVOID)p_Lock, 0x79517350u);
      return v12;
    case 6:
      if ( (v248 & 0xFFFFFFFE00000000uLL) != 0 )
      {
        v12 = -1073741811;
      }
      else if ( (v248 & 0x100000000LL) != 0 || (LODWORD(v124[2].ReadyListHead.Blink) & 0x80u) == 0 )
      {
        v12 = 0;
        if ( (v248 & 0x100000000LL) != 0 )
        {
          _InterlockedOr((volatile signed __int32 *)&v124[2].ReadyListHead.Blink, 0x80u);
          p_Lock = (volatile signed __int32 *)Object;
        }
      }
      else
      {
        v12 = -1073741790;
      }
      goto LABEL_509;
    case 7:
      if ( (v248 & 0xFFFFFFE000000000uLL) != 0 )
      {
        v12 = -1073741811;
        goto LABEL_509;
      }
      if ( ((HIDWORD(v248) >> 3) & 1) != 0 && (HIDWORD(v124[2].ReadyListHead.Blink) & 0x2000000) == 0 )
        goto LABEL_431;
      if ( ((HIDWORD(v248) >> 3) & 1) == 0 && (HIDWORD(v124[2].ReadyListHead.Blink) & 0x2000000) != 0 )
      {
        v12 = -1073741790;
        goto LABEL_509;
      }
      if ( ((HIDWORD(v248) >> 4) & 1) != 0 && (HIDWORD(v124[2].ReadyListHead.Blink) & 0x4000000) == 0 )
        goto LABEL_431;
      if ( ((HIDWORD(v248) >> 4) & 1) != 0 || (HIDWORD(v124[2].ReadyListHead.Blink) & 0x4000000) == 0 )
      {
        if ( ((__int64)v124[2].ReadyListHead.Blink & 1) != 0 )
        {
          if ( (v248 & 0x400000000LL) != 0 )
          {
            _InterlockedOr((volatile signed __int32 *)&v124[2].ReadyListHead.Blink, 4u);
            v12 = 0;
            p_Lock = (volatile signed __int32 *)Object;
          }
          else
          {
            v12 = -1073741790;
          }
        }
        else
        {
          v12 = -1073741790;
        }
      }
      else
      {
        v12 = -1073741790;
      }
      goto LABEL_509;
    case 8:
      v152 = HIDWORD(v248);
      if ( (v248 & 0xFFFFFFE000000000uLL) != 0 )
      {
        v12 = -1073741811;
        goto LABEL_509;
      }
      if ( (v248 & 0x100000000LL) != 0 && ((v248 & 0x800000000LL) != 0 || (v248 & 0x1000000000LL) != 0) )
        v152 = HIDWORD(v248) & 0xFFFFFFE7;
      if ( (v152 & 2) != 0 && (v152 & 0x10) != 0 )
        v152 &= ~0x10u;
      v153 = (v152 >> 3) & 1;
      if ( v153 && (v152 & 0x10) != 0 )
      {
        v12 = -1073741811;
        goto LABEL_509;
      }
      v154 = (v152 >> 1) & 1;
      if ( (v152 & 1) + v154 > 1 )
      {
        v12 = -1073741811;
        goto LABEL_509;
      }
      if ( (v152 & 1) != 0 )
        goto LABEL_609;
      if ( LOBYTE(v124[2].Header.WaitListHead.Flink) >= 8u && BYTE1(v124[2].Header.WaitListHead.Flink) >= 8u )
      {
        v12 = -1073741790;
        goto LABEL_509;
      }
      if ( v154 )
        goto LABEL_609;
      LOBYTE(v125) = 6;
      if ( (unsigned int)SeCompareSigningLevels(LOBYTE(v124[2].Header.WaitListHead.Flink), v125) )
      {
        LOBYTE(v125) = 6;
        if ( (unsigned int)SeCompareSigningLevels(*((unsigned __int8 *)Object + 2169), v125) )
        {
          v12 = -1073741790;
          p_Lock = (volatile signed __int32 *)Object;
          goto LABEL_509;
        }
      }
      p_Lock = (volatile signed __int32 *)Object;
LABEL_609:
      if ( (p_Lock[628] & 0x3000000) != 0 && (v152 & 0x10) == 0 && !v154 && !v153 && (v152 & 1) == 0 )
      {
        v12 = -1073741790;
        goto LABEL_509;
      }
      v12 = 0;
      if ( (v152 & 1) != 0 )
      {
        if ( *((_BYTE *)p_Lock + 2168) < 8u )
        {
          *((_BYTE *)p_Lock + 2168) = 8;
          p_Lock = (volatile signed __int32 *)Object;
        }
        if ( *((_BYTE *)p_Lock + 2169) >= 8u )
        {
LABEL_626:
          if ( v152 )
            v7 = 0x800000;
          v156 = ((v152 & 8) == 0) << 24;
          v157 = v7 | 0x1000000;
          if ( !v153 )
            v157 = v7;
          if ( ((v152 >> 4) & 1) != 0 )
            v157 |= 0x2000000u;
          else
            v156 |= 0x2000000u;
          RtlInterlockedSetClearBits(p_Lock + 628, v157, v156);
          p_Lock = (volatile signed __int32 *)Object;
          goto LABEL_509;
        }
        *((_BYTE *)p_Lock + 2169) = 8;
      }
      else
      {
        if ( !v154 )
          goto LABEL_626;
        LOBYTE(v125) = 6;
        if ( !(unsigned int)SeCompareSigningLevels(*((unsigned __int8 *)p_Lock + 2168), v125) )
        {
          v12 = -1073741790;
          p_Lock = (volatile signed __int32 *)Object;
          goto LABEL_509;
        }
        LOBYTE(v155) = 6;
        if ( (unsigned int)SeCompareSigningLevels(v155, *((unsigned __int8 *)Object + 2169)) )
          *((_BYTE *)Object + 2169) = 6;
      }
      p_Lock = (volatile signed __int32 *)Object;
      goto LABEL_626;
    case 9:
      if ( (v248 & 0xFFFFFFFC00000000uLL) != 0 )
      {
        v12 = -1073741811;
      }
      else if ( (v248 & 0x100000000LL) != 0 || ((__int64)v124[2].ReadyListHead.Blink & 0x10000) == 0 )
      {
        if ( (v248 & 0x100000000LL) != 0
          || (v248 & 0x200000000LL) != 0
          || ((__int64)v124[2].ReadyListHead.Blink & 0x20000) == 0 )
        {
          v12 = 0;
          if ( (v248 & 0x100000000LL) != 0 )
          {
            RtlInterlockedSetClearBits((volatile signed __int32 *)&v124[2].ReadyListHead.Blink, 0x10000, 0x20000);
            p_Lock = (volatile signed __int32 *)Object;
          }
          else if ( (v248 & 0x200000000LL) != 0 )
          {
            RtlInterlockedSetClearBits((volatile signed __int32 *)&v124[2].ReadyListHead.Blink, 0x20000, 0x10000);
            p_Lock = (volatile signed __int32 *)Object;
          }
        }
        else
        {
          v12 = -1073741790;
        }
      }
      else
      {
        v12 = -1073741790;
      }
      goto LABEL_509;
    case 10:
      v158 = HIDWORD(v248);
      if ( (v248 & 0xFFFFFFE000000000uLL) != 0 )
      {
        v12 = -1073741811;
        goto LABEL_509;
      }
      if ( (v248 & 0x100000000LL) != 0 && (v248 & 0x800000000LL) != 0 )
        v158 = HIDWORD(v248) & 0xFFFFFFF7;
      if ( (v158 & 2) != 0 && (v158 & 0x10) != 0 )
        v158 &= ~0x10u;
      v159 = v158 & 1;
      v160 = 0x80000;
      if ( (v158 & 1) == 0 && ((__int64)v124[2].ReadyListHead.Blink & 0x80000) != 0 )
        goto LABEL_431;
      v161 = (v158 >> 1) & 1;
      if ( !v161 && ((__int64)v124[2].ReadyListHead.Blink & 0x200000) != 0 )
        goto LABEL_431;
      v162 = (v158 >> 2) & 1;
      if ( !v162 && ((__int64)v124[2].ReadyListHead.Blink & 0x40000) != 0 )
      {
        v12 = -1073741790;
        goto LABEL_509;
      }
      v163 = (v158 >> 3) & 1;
      if ( !v163 && (v158 & 1) == 0 && ((__int64)v124[2].ReadyListHead.Blink & 0x100000) != 0 )
        goto LABEL_431;
      v164 = (v158 >> 4) & 1;
      if ( v164 || v161 || ((__int64)v124[2].ReadyListHead.Blink & 0x400000) == 0 )
      {
        v165 = 0;
        if ( v159 )
        {
          v165 = 0x100000;
        }
        else
        {
          v160 = 0;
          if ( v163 )
            v160 = 0x100000;
        }
        if ( v161 )
        {
          v160 |= 0x200000u;
          v165 |= 0x400000u;
        }
        else if ( v164 )
        {
          v160 |= 0x400000u;
        }
        v166 = v160 | 0x40000;
        if ( !v162 )
          v166 = v160;
        RtlInterlockedSetClearBits(p_Lock + 628, v166, v165);
        v12 = 0;
        p_Lock = (volatile signed __int32 *)Object;
      }
      else
      {
        v12 = -1073741790;
      }
      goto LABEL_509;
    case 13:
      v167 = HIDWORD(v248);
      if ( (v248 & 0xFFFFFFF800000000uLL) != 0 )
      {
        v12 = -1073741811;
        goto LABEL_509;
      }
      if ( (v248 & 0x100000000LL) == 0 && (v248 & 0x400000000LL) != 0 )
      {
        v12 = -1073741811;
        goto LABEL_509;
      }
      if ( (v248 & 0x100000000LL) != 0 && (v248 & 0x200000000LL) != 0 )
        v167 = HIDWORD(v248) & 0xFFFFFFFD;
      NoChildProcessRestrictedPolicy = PspGetNoChildProcessRestrictedPolicy((__int64)v124);
      v169 = NoChildProcessRestrictedPolicy;
      v170 = v167 & 1;
      if ( (v167 & 1) == 0 && (unsigned int)(NoChildProcessRestrictedPolicy - 1) <= 1 )
      {
        v12 = -1073741790;
        p_Lock = (volatile signed __int32 *)Object;
        goto LABEL_509;
      }
      v171 = (v167 >> 2) & 1;
      if ( v171 && v169 == 1 )
      {
        v12 = -1073741790;
        p_Lock = (volatile signed __int32 *)Object;
        goto LABEL_509;
      }
      v172 = (v167 >> 1) & 1;
      if ( v172 )
        goto LABEL_698;
      if ( v170 )
        goto LABEL_699;
      if ( v169 == 3 )
      {
        v12 = -1073741790;
        p_Lock = (volatile signed __int32 *)Object;
        goto LABEL_509;
      }
LABEL_698:
      if ( v170 )
      {
LABEL_699:
        if ( v171 )
          PspSetNoChildProcessRestrictedPolicy((__int64)Object, 2);
        else
          PspSetNoChildProcessRestrictedPolicy((__int64)Object, 1);
        v12 = 0;
        p_Lock = (volatile signed __int32 *)Object;
        goto LABEL_509;
      }
      if ( v172 )
        PspSetNoChildProcessRestrictedPolicy((__int64)Object, 3);
      goto LABEL_705;
    case 14:
      if ( (v248 & 0xFFFFFFF000000000uLL) != 0 )
      {
        v12 = -1073741811;
        goto LABEL_509;
      }
      if ( (v248 & 0x100000000LL) == 0 && ((__int64)v124[2].ReadyListHead.Blink & 0x40000000) != 0
        || ((HIDWORD(v248) >> 1) & 1) == 0 && SLODWORD(v124[2].ReadyListHead.Blink) < 0
        || ((HIDWORD(v248) >> 3) & 1) == 0 && (HIDWORD(v124[2].ReadyListHead.Blink) & 0x2000) != 0 )
      {
        goto LABEL_431;
      }
      v178 = (HIDWORD(v248) >> 2) & 1;
      if ( v178 || (HIDWORD(v124[2].ReadyListHead.Blink) & 0x1000) == 0 )
      {
        if ( (v248 & 0x100000000LL) != 0 )
        {
          _InterlockedOr((volatile signed __int32 *)&v124[2].ReadyListHead.Blink, 0x40000000u);
          p_Lock = (volatile signed __int32 *)Object;
        }
        if ( ((HIDWORD(v248) >> 1) & 1) != 0 )
        {
          _InterlockedOr(p_Lock + 628, 0x80000000);
          _InterlockedOr((volatile signed __int32 *)Object + 543, 0x200000u);
          PspWriteProcessSecurityDomain((__int64)Object, _InterlockedIncrement64(&PsNextSecurityDomain), 1);
          KeSynchronizeSecurityDomain((_KPROCESS *)Object);
          p_Lock = (volatile signed __int32 *)Object;
        }
        if ( v178 )
        {
          _InterlockedOr(p_Lock + 629, 0x1000u);
          p_Lock = (volatile signed __int32 *)Object;
        }
        if ( ((HIDWORD(v248) >> 3) & 1) != 0 )
        {
          _InterlockedOr(p_Lock + 629, 0x2000u);
          p_Lock = (volatile signed __int32 *)Object;
        }
        v12 = 0;
      }
      else
      {
        v12 = -1073741790;
      }
      goto LABEL_509;
    case 15:
      v179 = HIDWORD(v248);
      if ( (v248 & 0xFFFFFC0000000000uLL) != 0 )
      {
        v12 = -1073741811;
        goto LABEL_509;
      }
      if ( (v248 & 0x1000000000LL) != 0 )
      {
        v179 = HIDWORD(v248) | 1;
        HIDWORD(v248) |= 1u;
      }
      if ( (v179 & 0x200) != 0 )
      {
        v179 |= 4u;
        HIDWORD(v248) = v179;
      }
      if ( (v179 & 0x40) != 0 )
      {
        v179 |= 0x20u;
        HIDWORD(v248) = v179;
      }
      v180 = (v179 >> 4) & 1;
      if ( !v180 && (HIDWORD(v124[2].ReadyListHead.Blink) & 0x100000) != 0
        || (v179 & 1) == 0 && (HIDWORD(v124[2].ReadyListHead.Blink) & 0x4000) != 0 )
      {
        goto LABEL_431;
      }
      if ( (v179 & 1) != 0 && (HIDWORD(v124[2].ReadyListHead.Blink) & 0x4000) == 0 )
      {
        v12 = -1073741790;
        goto LABEL_509;
      }
      v181 = (v179 >> 9) & 1;
      if ( v181 )
      {
        if ( SHIDWORD(v124[2].ReadyListHead.Blink) >= 0 )
          goto LABEL_431;
      }
      v182 = (v179 >> 2) & 1;
      if ( !v182 && (HIDWORD(v124[2].ReadyListHead.Blink) & 0x20000) != 0 )
        goto LABEL_431;
      if ( v182 && (HIDWORD(v124[2].ReadyListHead.Blink) & 0x20000) == 0 )
      {
        v12 = -1073741790;
        goto LABEL_509;
      }
      v183 = (v179 >> 6) & 1;
      if ( !v183 && (HIDWORD(v124[2].ReadyListHead.Blink) & 0x400000) != 0 )
        goto LABEL_431;
      v184 = (v179 >> 5) & 1;
      if ( !v184 && (HIDWORD(v124[2].ReadyListHead.Blink) & 0x200000) != 0 )
      {
        v12 = -1073741790;
        goto LABEL_509;
      }
      v185 = (v179 >> 8) & 1;
      if ( !v185 && (HIDWORD(v124[2].ReadyListHead.Blink) & 0x40000000) != 0 )
      {
        v12 = -1073741790;
        goto LABEL_509;
      }
      if ( ((v179 >> 1) & 1) == 0 && (HIDWORD(v124[2].ReadyListHead.Blink) & 0x8000) != 0
        || ((v179 >> 1) & 1) != 0 && (HIDWORD(v124[2].ReadyListHead.Blink) & 0x8000) == 0
        || ((v179 >> 3) & 1) == 0 && (HIDWORD(v124[2].ReadyListHead.Blink) & 0x40000) != 0
        || ((v179 >> 3) & 1) != 0 && (HIDWORD(v124[2].ReadyListHead.Blink) & 0x40000) == 0
        || (v186 = (v179 >> 7) & 1) == 0 && (HIDWORD(v124[2].ReadyListHead.Blink) & 0x800000) != 0 )
      {
LABEL_431:
        v12 = -1073741790;
        goto LABEL_509;
      }
      if ( v186 && (HIDWORD(v124[2].ReadyListHead.Blink) & 0x800000) == 0 )
      {
        v12 = -1073741790;
        goto LABEL_509;
      }
      if ( v180 )
      {
        _InterlockedOr((volatile signed __int32 *)&v124[2].ReadyListHead.Blink + 1, 0x100000u);
        p_Lock = (volatile signed __int32 *)Object;
      }
      if ( !v181 && v182 )
      {
        _InterlockedAnd(p_Lock + 629, 0x7FFFFFFFu);
        p_Lock = (volatile signed __int32 *)Object;
      }
      if ( v183 )
      {
        _InterlockedOr(p_Lock + 629, 0x200000u);
        _InterlockedOr((volatile signed __int32 *)Object + 629, 0x400000u);
      }
      else
      {
        if ( !v184 )
        {
LABEL_796:
          if ( v185 )
          {
            _InterlockedOr(p_Lock + 629, 0x40000000u);
            p_Lock = (volatile signed __int32 *)Object;
          }
          v12 = 0;
          goto LABEL_509;
        }
        _InterlockedOr(p_Lock + 629, 0x200000u);
      }
      p_Lock = (volatile signed __int32 *)Object;
      goto LABEL_796;
    case 16:
      v173 = HIDWORD(v248);
      if ( (v248 & 0xFFFFFFFC00000000uLL) != 0 )
      {
        v12 = -1073741811;
        goto LABEL_509;
      }
      if ( (v248 & 0x100000000LL) != 0 && (v248 & 0x200000000LL) != 0 )
        v173 = HIDWORD(v248) & 0xFFFFFFFD;
      RedirectionTrustPolicy = PspGetRedirectionTrustPolicy((__int64)v124);
      v175 = v173 & 1;
      if ( (v173 & 1) == 0 && RedirectionTrustPolicy == 1 )
      {
        v12 = -1073741790;
        p_Lock = (volatile signed __int32 *)Object;
        goto LABEL_509;
      }
      v176 = (v173 >> 1) & 1;
      if ( v176 )
        goto LABEL_718;
      if ( v175 )
        goto LABEL_719;
      if ( RedirectionTrustPolicy == 2 )
      {
        v12 = -1073741790;
        p_Lock = (volatile signed __int32 *)Object;
      }
      else
      {
LABEL_718:
        if ( v175 )
        {
LABEL_719:
          v177 = 1;
        }
        else
        {
          if ( !v176 )
          {
LABEL_705:
            v12 = 0;
            p_Lock = (volatile signed __int32 *)Object;
            goto LABEL_509;
          }
          v177 = 2;
        }
        PspSetRedirectionTrustPolicy((__int64)Object, v177);
        v12 = 0;
        p_Lock = (volatile signed __int32 *)Object;
      }
      goto LABEL_509;
    default:
      goto LABEL_508;
  }
}
