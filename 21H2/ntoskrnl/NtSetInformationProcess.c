/*
 * XREFs of NtSetInformationProcess @ 0x140721890
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseExtensionTable @ 0x14021C83C (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x14021C858 (ExGetExtensionTable.c)
 *     RtlInsertDynamicFunctionTable @ 0x140225708 (RtlInsertDynamicFunctionTable.c)
 *     RtlRemoveDynamicFunctionTable @ 0x14022AB88 (RtlRemoveDynamicFunctionTable.c)
 *     KeSynchronizeSecurityDomain @ 0x14023A8C4 (KeSynchronizeSecurityDomain.c)
 *     PspWriteProcessSecurityDomain @ 0x14023AA3C (PspWriteProcessSecurityDomain.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x14023B914 (ExCpuSetResourceManagerAccessCheck.c)
 *     MiCreateSystemWsles @ 0x14023F040 (MiCreateSystemWsles.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     PspLockUnlockProcessExclusive @ 0x140241524 (PspLockUnlockProcessExclusive.c)
 *     PtrToUlong @ 0x140246520 (PtrToUlong.c)
 *     PspUnlockProcessExclusive @ 0x14024A0C8 (PspUnlockProcessExclusive.c)
 *     KeSetExecuteOptions @ 0x14024A49C (KeSetExecuteOptions.c)
 *     KeInitializeGate @ 0x140251190 (KeInitializeGate.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     MmGetDefaultPagePriority @ 0x14027348C (MmGetDefaultPagePriority.c)
 *     KeDelayExecutionThread @ 0x140278A00 (KeDelayExecutionThread.c)
 *     KeEnterCriticalRegionThread @ 0x14027C8F0 (KeEnterCriticalRegionThread.c)
 *     KeStackAttachProcess @ 0x14027D680 (KeStackAttachProcess.c)
 *     KeQueryGroupMaskProcess @ 0x14027DD98 (KeQueryGroupMaskProcess.c)
 *     MmGetSessionId @ 0x1402863C0 (MmGetSessionId.c)
 *     RtlStringCbCopyA @ 0x1402875B0 (RtlStringCbCopyA.c)
 *     KeBoostPriorityThread @ 0x140293860 (KeBoostPriorityThread.c)
 *     PspLockProcessExclusive @ 0x14029AC00 (PspLockProcessExclusive.c)
 *     KeIsUserCetAllowed @ 0x14029AC28 (KeIsUserCetAllowed.c)
 *     KeSetPriorityAndQuantumProcess @ 0x14029AC94 (KeSetPriorityAndQuantumProcess.c)
 *     MmSetMemoryPriorityProcess @ 0x14029B108 (MmSetMemoryPriorityProcess.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     KeUnstackDetachProcess @ 0x1402ABEC0 (KeUnstackDetachProcess.c)
 *     RtlInterlockedSetClearBits @ 0x1402F6760 (RtlInterlockedSetClearBits.c)
 *     PsSetIoPriorityThread @ 0x140302040 (PsSetIoPriorityThread.c)
 *     PsSetPagePriorityThread @ 0x140302334 (PsSetPagePriorityThread.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x140321710 (PsChargeProcessNonPagedPoolQuota.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x140323130 (PsReturnProcessNonPagedPoolQuota.c)
 *     PsGetCurrentProcess @ 0x140346350 (PsGetCurrentProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14035DD70 (ExAllocatePoolWithQuotaTag.c)
 *     IoBoostThreadIoPriority @ 0x140363380 (IoBoostThreadIoPriority.c)
 *     KeVerifyGroupAffinity @ 0x140377D04 (KeVerifyGroupAffinity.c)
 *     MmRemoveExecuteGrants @ 0x14037E870 (MmRemoveExecuteGrants.c)
 *     KeSetCpuSetsProcess @ 0x1403C6154 (KeSetCpuSetsProcess.c)
 *     xKdEnumerateDebuggingDevices @ 0x1403D05B0 (xKdEnumerateDebuggingDevices.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     MmGetMaximumUserAddress @ 0x1403F38C8 (MmGetMaximumUserAddress.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     IoRevokeHandlesForProcess @ 0x140507150 (IoRevokeHandlesForProcess.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x14051CB78 (KeRecomputeCpuSetAffinityProcess.c)
 *     MmReleaseCommitForMemResetPages @ 0x14052CF34 (MmReleaseCommitForMemResetPages.c)
 *     MmSetCommitReleaseEligibility @ 0x14052D16C (MmSetCommitReleaseEligibility.c)
 *     PspLockProcessSharedUnsafe @ 0x140581B8C (PspLockProcessSharedUnsafe.c)
 *     PspUnlockProcessSharedUnsafe @ 0x140581DD8 (PspUnlockProcessSharedUnsafe.c)
 *     PspGetRedirectionTrustPolicy @ 0x1405CF638 (PspGetRedirectionTrustPolicy.c)
 *     PspSetRedirectionTrustPolicy @ 0x1405CF6A4 (PspSetRedirectionTrustPolicy.c)
 *     PspProcessDynamicEnforcedAddressRanges @ 0x1405CF6F4 (PspProcessDynamicEnforcedAddressRanges.c)
 *     MmAllocateUserStack @ 0x1405F3970 (MmAllocateUserStack.c)
 *     ObDereferenceProcessHandleTable @ 0x1405FB710 (ObDereferenceProcessHandleTable.c)
 *     PspCombineSecurityDomains @ 0x140600714 (PspCombineSecurityDomains.c)
 *     PspSetQuotaLimits @ 0x140603BC4 (PspSetQuotaLimits.c)
 *     ExEnableRaiseUMExceptionOnInvalidHandleClose @ 0x14060B094 (ExEnableRaiseUMExceptionOnInvalidHandleClose.c)
 *     PspSetProcessPriorityClass @ 0x140613150 (PspSetProcessPriorityClass.c)
 *     PoSetProcessEnergyTrackingState @ 0x1406174C0 (PoSetProcessEnergyTrackingState.c)
 *     ExEnableHandleExceptions @ 0x140618C5C (ExEnableHandleExceptions.c)
 *     SeSetVirtualizationToken @ 0x14061DD08 (SeSetVirtualizationToken.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x14061EFA8 (PspSetNoChildProcessRestrictedPolicy.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x1406215E8 (PspGetNoChildProcessRestrictedPolicy.c)
 *     PsIsSystemWideMitigationOptionSet @ 0x14062165C (PsIsSystemWideMitigationOptionSet.c)
 *     PsQuitNextProcessThread @ 0x140622590 (PsQuitNextProcessThread.c)
 *     ProbeForWrite @ 0x1406495C0 (ProbeForWrite.c)
 *     SeReleaseSubjectContext @ 0x14064B710 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x14064CA80 (SeCaptureSubjectContextEx.c)
 *     SeSinglePrivilegeCheck @ 0x140693750 (SeSinglePrivilegeCheck.c)
 *     PspWritePebAffinityInfo @ 0x1406A2104 (PspWritePebAffinityInfo.c)
 *     PsSetProcessPriorityByClass @ 0x1406B0C10 (PsSetProcessPriorityByClass.c)
 *     PspSetProcessForegroundBackgroundRequest @ 0x1406B0C40 (PspSetProcessForegroundBackgroundRequest.c)
 *     MmProcessWorkingSetControl @ 0x1406BD464 (MmProcessWorkingSetControl.c)
 *     LpcRequestPort @ 0x1406D3470 (LpcRequestPort.c)
 *     ObReferenceProcessHandleTable @ 0x1406E4F14 (ObReferenceProcessHandleTable.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140707F60 (ObReferenceObjectByHandleWithTag.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     RtlIsSandboxedToken @ 0x14071C8A0 (RtlIsSandboxedToken.c)
 *     PsReferencePrimaryToken @ 0x14071E0E0 (PsReferencePrimaryToken.c)
 *     KeSetAutoAlignmentProcess @ 0x1407216A4 (KeSetAutoAlignmentProcess.c)
 *     PsGetNextProcessThread @ 0x1407216D0 (PsGetNextProcessThread.c)
 *     PspSetProcessDefaultHardErrorMode @ 0x1407217D0 (PspSetProcessDefaultHardErrorMode.c)
 *     KeSetDisableBoostProcess @ 0x14073439C (KeSetDisableBoostProcess.c)
 *     EtwSetProcessTelemetryCoverage @ 0x140771D78 (EtwSetProcessTelemetryCoverage.c)
 *     KeSetDisableBoostThread @ 0x140772D3C (KeSetDisableBoostThread.c)
 *     PsSetProcessFaultInformation @ 0x140772EF0 (PsSetProcessFaultInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     PspSetProcessAffinityUpdateMode @ 0x14077D040 (PspSetProcessAffinityUpdateMode.c)
 *     SeCompareSigningLevels @ 0x14077F400 (SeCompareSigningLevels.c)
 *     SeCheckPrivilegedObject @ 0x14078E020 (SeCheckPrivilegedObject.c)
 *     PspAssignPrimaryToken @ 0x1407BC1D0 (PspAssignPrimaryToken.c)
 *     ExSystemExceptionFilter @ 0x1407D5080 (ExSystemExceptionFilter.c)
 *     KeSetCheckStackExtentsProcess @ 0x1408BAEDC (KeSetCheckStackExtentsProcess.c)
 *     MmValidateUserCallTarget @ 0x1408D7FD8 (MmValidateUserCallTarget.c)
 *     ObSetProcessDeviceMap @ 0x1408DF7EC (ObSetProcessDeviceMap.c)
 *     PsIsGuiThread @ 0x140907A04 (PsIsGuiThread.c)
 *     PsSetProcessHandleTracingInformation @ 0x140907AD8 (PsSetProcessHandleTracingInformation.c)
 *     PspEnableAltSystemCallHandling @ 0x140907D78 (PspEnableAltSystemCallHandling.c)
 *     PspProcessDynamicEHContinuationTargets @ 0x140907E64 (PspProcessDynamicEHContinuationTargets.c)
 *     PspSetProcessAffinitySafe @ 0x140908724 (PspSetProcessAffinitySafe.c)
 *     PspFreeUserFiberShadowStack @ 0x14090A2D4 (PspFreeUserFiberShadowStack.c)
 *     PspSetupUserFiberShadowStack @ 0x14090A660 (PspSetupUserFiberShadowStack.c)
 *     PsIumEnableOnDemandDebugWithResponse @ 0x14090CAE4 (PsIumEnableOnDemandDebugWithResponse.c)
 *     SeCodeIntegritySetInformationProcess @ 0x14091BFE0 (SeCodeIntegritySetInformationProcess.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 *     ExAllocatePool2 @ 0x1409B51B0 (ExAllocatePool2.c)
 */

NTSTATUS __cdecl NtSetInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength)
{
  size_t v4; // rdi
  __int64 v5; // rbx
  unsigned int v7; // r14d
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int8 v9; // r15
  int v10; // eax
  NTSTATUS result; // eax
  NTSTATUS v12; // esi
  _DWORD *PoolWithTag; // rax
  void *v14; // rbx
  PVOID v15; // rcx
  int v16; // ebx
  unsigned int v17; // eax
  char v18; // di
  PVOID v19; // rcx
  char v20; // al
  __int16 v21; // bx
  NTSTATUS v22; // edi
  char v23; // bl
  int v24; // edi
  _QWORD *i; // rbx
  unsigned int v26; // ebx
  unsigned int v27; // r12d
  int v28; // esi
  unsigned __int64 v29; // rdx
  signed __int64 *v30; // roff
  signed __int64 v31; // r15
  signed __int64 v32; // rax
  struct _DMA_ADAPTER *v33; // r15
  int v34; // eax
  NTSTATUS v35; // eax
  NTSTATUS v36; // ebx
  PVOID v37; // rcx
  unsigned __int8 v38; // bl
  __int64 v39; // r13
  __int64 v40; // rax
  __int16 v41; // r8
  int v42; // ebx
  unsigned int GroupMaskProcess; // eax
  __int64 v44; // rdx
  __int64 v45; // r13
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  _BOOL8 v49; // rdi
  __int64 v50; // r13
  PVOID v51; // rcx
  _QWORD *j; // rbx
  HANDLE v53; // rbx
  int v54; // ebx
  int v55; // ebx
  int v56; // ecx
  unsigned int v57; // eax
  unsigned __int64 v58; // r12
  volatile signed __int32 *v59; // r8
  signed __int32 v60; // eax
  int v61; // r9d
  signed __int32 v62; // edx
  KSPIN_LOCK *v63; // rbx
  int v64; // r14d
  int v65; // ebx
  _KPROCESS *CurrentProcess; // rax
  unsigned int v67; // ebx
  unsigned int v68; // ebx
  volatile signed __int32 *v69; // r8
  signed __int32 v70; // eax
  signed __int32 v71; // edx
  _QWORD *v72; // rdi
  int v73; // ebx
  _DWORD *PoolWithQuotaTag; // r15
  __int64 v75; // r8
  unsigned int v76; // ecx
  _DWORD *v77; // rdx
  _KPROCESS *v78; // rax
  _KPROCESS *v79; // r8
  unsigned __int64 v80; // rax
  __int16 v81; // cx
  __int64 v82; // rcx
  _QWORD *v83; // rdx
  PVOID k; // rcx
  _QWORD *v85; // rbx
  __int64 v86; // rdi
  char *v87; // rbx
  char *v88; // rax
  char *v89; // r13
  __int64 v90; // rdx
  __int64 v91; // r8
  volatile void **v92; // rdi
  __int64 v93; // rdx
  const void *v94; // rdx
  __int64 v95; // rdx
  __int64 v96; // rdi
  __int64 v97; // rcx
  unsigned __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rbx
  unsigned int v101; // eax
  unsigned __int64 v102; // r8
  unsigned __int64 v103; // rax
  unsigned __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // rax
  unsigned __int64 v107; // rbx
  _KPROCESS *v108; // rdi
  BOOLEAN v109; // al
  BOOLEAN v110; // al
  struct _EX_RUNDOWN_REF *v111; // rcx
  __int64 v112; // rax
  __int16 v113; // r8
  bool v114; // r9
  unsigned __int64 v115; // r8
  __int16 v116; // r9
  __int64 v117; // r13
  PVOID v118; // r8
  volatile signed __int32 *v119; // rcx
  __int16 v120; // r9
  __int64 v121; // rcx
  __int64 *v122; // rdx
  char *v123; // rsi
  int v124; // r9d
  int v125; // ebx
  int v126; // edi
  struct _DMA_ADAPTER *v127; // rbx
  unsigned __int64 v128; // rbx
  __int64 v129; // rdx
  __int64 v130; // r8
  unsigned __int8 *v131; // r9
  int v132; // edx
  int v133; // ecx
  unsigned __int64 v134; // rax
  unsigned int v135; // ebx
  int v136; // r12d
  int v137; // edi
  int v138; // r15d
  int v139; // ebx
  char IsGuiThread; // al
  unsigned int v141; // ebx
  int v142; // edi
  char v143; // r12
  _KPROCESS *v144; // rax
  int v145; // eax
  bool IsSandboxedToken; // si
  BOOLEAN v147; // al
  int v148; // r8d
  int v149; // edi
  int v150; // edx
  int v151; // eax
  int v152; // edx
  bool v153; // zf
  int v154; // ebx
  int v155; // edx
  int v156; // ecx
  int v157; // eax
  int v158; // eax
  int v159; // r11d
  unsigned int v160; // ebx
  int v161; // r12d
  int v162; // edi
  __int64 v163; // rcx
  int v164; // r8d
  int v165; // ecx
  int v166; // ebx
  int v167; // edx
  unsigned int v168; // ecx
  int v169; // edi
  int v170; // r10d
  int v171; // edx
  int v172; // ebx
  int v173; // r11d
  int v174; // ecx
  int v175; // eax
  int v176; // edx
  unsigned int v177; // ebx
  int NoChildProcessRestrictedPolicy; // eax
  int v179; // r8d
  int v180; // edx
  int v181; // eax
  int v182; // ebx
  unsigned int v183; // ebx
  int RedirectionTrustPolicy; // eax
  int v185; // ecx
  int v186; // ebx
  int v187; // edx
  int v188; // ebx
  unsigned int v189; // ecx
  int v190; // r11d
  int v191; // ebx
  int v192; // edx
  int v193; // edi
  int v194; // esi
  int v195; // r15d
  int v196; // ecx
  int v197; // ebx
  unsigned __int64 v198; // rax
  void *v199; // rdi
  int v200; // eax
  void *v201; // rcx
  unsigned __int64 v202; // rdx
  PVOID v203; // rax
  _BOOL8 v204; // rdi
  unsigned int v205; // edi
  char v206; // bl
  int v207; // ebx
  unsigned __int64 v208; // rax
  char v209; // bl
  int v210; // ecx
  unsigned __int64 ExtensionTable; // rbx
  int v212; // edi
  NTSTATUS v213; // ebx
  ULONG v214; // eax
  NTSTATUS v215; // ebx
  __int128 v216; // xmm1
  const char *v217; // r8
  int v218; // eax
  unsigned int v219; // ecx
  unsigned int v220; // ecx
  int v221; // ebx
  unsigned int v222; // ebx
  unsigned __int64 v223; // rax
  HANDLE v224; // rbx
  HANDLE v225; // rbx
  _KPROCESS *v226; // rax
  unsigned __int64 v227; // rdx
  __int64 v228; // rcx
  __int64 *v229; // r8
  int v230; // ebx
  int v231; // eax
  unsigned int v232; // eax
  int v233; // eax
  unsigned int v234; // eax
  NTSTATUS v235; // ebx
  _DWORD *v236; // r12
  unsigned int v237; // eax
  const void *v238; // rbx
  size_t v239; // rdi
  _KPROCESS *v240; // rax
  struct _DMA_ADAPTER *v241; // rcx
  _DWORD *Pool2; // rax
  unsigned int v243; // ecx
  const void *v244; // rbx
  size_t v245; // rdi
  _KPROCESS *v246; // rax
  _DWORD *v247; // rax
  signed __int32 v248[8]; // [rsp+0h] [rbp-548h] BYREF
  PVOID Object; // [rsp+40h] [rbp-508h] BYREF
  unsigned int v250; // [rsp+48h] [rbp-500h]
  NTSTATUS v251; // [rsp+4Ch] [rbp-4FCh]
  struct _KTHREAD *v252; // [rsp+50h] [rbp-4F8h]
  HANDLE v253; // [rsp+58h] [rbp-4F0h]
  unsigned int v254; // [rsp+60h] [rbp-4E8h]
  ULONG v255; // [rsp+68h] [rbp-4E0h]
  HANDLE Handle; // [rsp+70h] [rbp-4D8h]
  unsigned int v257; // [rsp+78h] [rbp-4D0h]
  __int16 v258; // [rsp+7Ch] [rbp-4CCh]
  ULONG Alignment; // [rsp+80h] [rbp-4C8h]
  char v260; // [rsp+84h] [rbp-4C4h]
  char v261; // [rsp+85h] [rbp-4C3h]
  char v262; // [rsp+86h] [rbp-4C2h]
  char v263; // [rsp+88h] [rbp-4C0h]
  int v264; // [rsp+8Ch] [rbp-4BCh]
  char *v265; // [rsp+90h] [rbp-4B8h]
  __int64 v266; // [rsp+98h] [rbp-4B0h]
  _DWORD v267[2]; // [rsp+A0h] [rbp-4A8h] BYREF
  __int64 v268; // [rsp+A8h] [rbp-4A0h] BYREF
  PVOID v269; // [rsp+B0h] [rbp-498h] BYREF
  PVOID v270; // [rsp+B8h] [rbp-490h] BYREF
  __int64 v271; // [rsp+C0h] [rbp-488h]
  _DWORD *v272; // [rsp+C8h] [rbp-480h]
  PVOID v273; // [rsp+D0h] [rbp-478h] BYREF
  __int64 v274; // [rsp+D8h] [rbp-470h] BYREF
  __int64 v275; // [rsp+E0h] [rbp-468h]
  __int128 v276; // [rsp+E8h] [rbp-460h]
  unsigned int v277; // [rsp+F8h] [rbp-450h]
  int v278; // [rsp+FCh] [rbp-44Ch]
  unsigned int v279; // [rsp+100h] [rbp-448h]
  int v280; // [rsp+104h] [rbp-444h] BYREF
  PVOID v281; // [rsp+108h] [rbp-440h] BYREF
  void *Src[2]; // [rsp+110h] [rbp-438h] BYREF
  volatile void *Address[2]; // [rsp+120h] [rbp-428h]
  volatile void *v284[2]; // [rsp+130h] [rbp-418h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+140h] [rbp-408h]
  PVOID v286; // [rsp+148h] [rbp-400h]
  __int64 v287; // [rsp+150h] [rbp-3F8h]
  __int64 v288; // [rsp+158h] [rbp-3F0h]
  PVOID v289; // [rsp+160h] [rbp-3E8h] BYREF
  PVOID v290; // [rsp+168h] [rbp-3E0h] BYREF
  NTSTRSAFE_PCSTR pszSrc[2]; // [rsp+170h] [rbp-3D8h] BYREF
  __int64 v292; // [rsp+180h] [rbp-3C8h]
  int v293; // [rsp+188h] [rbp-3C0h]
  int v294; // [rsp+18Ch] [rbp-3BCh]
  int v295; // [rsp+190h] [rbp-3B8h]
  int v296; // [rsp+194h] [rbp-3B4h]
  int v297; // [rsp+198h] [rbp-3B0h]
  BOOL v298; // [rsp+19Ch] [rbp-3ACh]
  int v299; // [rsp+1A0h] [rbp-3A8h]
  int v300; // [rsp+1A4h] [rbp-3A4h]
  int v301; // [rsp+1A8h] [rbp-3A0h]
  HANDLE v302; // [rsp+1B0h] [rbp-398h]
  unsigned __int64 v303; // [rsp+1B8h] [rbp-390h]
  _DWORD *v304; // [rsp+1C0h] [rbp-388h]
  int v305; // [rsp+1C8h] [rbp-380h]
  __int64 v306; // [rsp+1D0h] [rbp-378h] BYREF
  HANDLE v307; // [rsp+1D8h] [rbp-370h]
  int v308; // [rsp+1E0h] [rbp-368h]
  int v309; // [rsp+1E4h] [rbp-364h]
  int v310; // [rsp+1E8h] [rbp-360h]
  int v311; // [rsp+1ECh] [rbp-35Ch]
  int v312; // [rsp+1F0h] [rbp-358h]
  __int128 v313; // [rsp+1F8h] [rbp-350h]
  __int128 v314; // [rsp+208h] [rbp-340h] BYREF
  __int128 v315; // [rsp+218h] [rbp-330h] BYREF
  __int64 v316; // [rsp+228h] [rbp-320h]
  __m256i v317; // [rsp+230h] [rbp-318h]
  _DWORD v318[2]; // [rsp+250h] [rbp-2F8h] BYREF
  __int128 v319; // [rsp+258h] [rbp-2F0h]
  __int128 v320; // [rsp+268h] [rbp-2E0h]
  __int64 v321; // [rsp+278h] [rbp-2D0h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+2A0h] [rbp-2A8h] BYREF
  HANDLE v323; // [rsp+2C0h] [rbp-288h]
  unsigned __int64 v324; // [rsp+2D0h] [rbp-278h]
  HANDLE v325; // [rsp+2D8h] [rbp-270h]
  HANDLE v326; // [rsp+2E0h] [rbp-268h]
  void **v327; // [rsp+2E8h] [rbp-260h]
  HANDLE v328; // [rsp+2F0h] [rbp-258h] BYREF
  int v329; // [rsp+2F8h] [rbp-250h]
  __int128 v330; // [rsp+300h] [rbp-248h] BYREF
  __int128 v331; // [rsp+310h] [rbp-238h]
  struct _KAPC_STATE ApcState; // [rsp+320h] [rbp-228h] BYREF
  _OWORD P[2]; // [rsp+350h] [rbp-1F8h] BYREF
  __int64 v334; // [rsp+370h] [rbp-1D8h]
  _OWORD v335[9]; // [rsp+380h] [rbp-1C8h] BYREF
  char v336[160]; // [rsp+410h] [rbp-138h] BYREF
  char pszDest[16]; // [rsp+4B0h] [rbp-98h] BYREF
  __int128 v338; // [rsp+4C0h] [rbp-88h]
  __int128 v339; // [rsp+4D0h] [rbp-78h]
  __int128 v340; // [rsp+4E0h] [rbp-68h]
  char v341; // [rsp+4F0h] [rbp-58h]

  v4 = ProcessInformationLength;
  v5 = (__int64)ProcessInformation;
  Alignment = ProcessInformationClass;
  v275 = (__int64)ProcessInformation;
  v255 = ProcessInformationLength;
  v7 = 0;
  Object = 0LL;
  v330 = 0LL;
  v254 = 0;
  v258 = 0;
  v307 = 0LL;
  v281 = 0LL;
  v303 = 0LL;
  v267[0] = 0;
  v331 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v252 = CurrentThread;
  v9 = CurrentThread->$6BEBF485330D18E60173AA6D991B35AC::gap0[10];
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
      CurrentThread = v252;
    }
  }
  switch ( ProcessInformationClass )
  {
    case ProcessQuotaLimits:
      return PspSetQuotaLimits(ProcessHandle, (__int64)ProcessInformation, ProcessInformationLength, v9);
    case ProcessBasePriority:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v16 = *(_DWORD *)ProcessInformation;
      v308 = v16;
      v17 = v16 & 0x80000000;
      if ( v16 < 0 )
        v16 &= ~0x80000000;
      v18 = v17 != 0 ? 2 : 0;
      if ( (unsigned int)(v16 - 1) > 0x1E )
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
      if ( v16 > *((char *)Object + 640) )
      {
        v20 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                SeIncreaseBasePriorityPrivilege,
                ProcessHandle,
                512LL);
        v19 = Object;
        if ( !v20 )
          goto LABEL_97;
      }
      KeSetPriorityAndQuantumProcess((__int64)v19, v16, 0, 0, 0);
      MmSetMemoryPriorityProcess((__int64)Object, v18);
      goto LABEL_88;
    case ProcessRaisePriority:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v24 = *(_DWORD *)ProcessInformation;
      v309 = *(_DWORD *)ProcessInformation;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
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
    case ProcessExceptionPort:
      if ( ProcessInformationLength == 8 )
      {
        v27 = 0;
        v277 = 0;
        Handle = *(HANDLE *)ProcessInformation;
        v302 = Handle;
      }
      else
      {
        if ( ProcessInformationLength != 16 )
          return -1073741820;
        Handle = *(HANDLE *)ProcessInformation;
        v302 = Handle;
        v277 = *((_DWORD *)ProcessInformation + 2);
        v27 = v277;
        if ( (v277 & 0xFFFFFFF8) != 0 )
          return -1073741811;
      }
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
        return -1073741727;
      v273 = 0LL;
      result = ObReferenceObjectByHandle(Handle, 0, LpcPortObjectType, v9, &v273, 0LL);
      DmaAdapter = (PADAPTER_OBJECT)v273;
      if ( result < 0 )
        return result;
      v28 = ObReferenceObjectByHandleWithTag(
              ProcessHandle,
              0x800u,
              (POBJECT_TYPE)PsProcessType,
              v9,
              0x79517350u,
              &Object,
              0LL);
      if ( v28 < 0 )
      {
        HalPutDmaAdapter((PADAPTER_OBJECT)v273);
        return v28;
      }
      v29 = (unsigned __int64)v273 | v27;
      v272 = (_DWORD *)v29;
      v30 = (signed __int64 *)((char *)Object + 1200);
      _m_prefetchw((char *)Object + 1200);
      v31 = *v30;
      do
      {
        Handle = (HANDLE)v31;
        if ( (_DWORD)v4 == 16 )
        {
          *(_DWORD *)(v5 + 8) = v31 & 7;
        }
        else if ( (v31 & 7) != 0 )
        {
          HalPutDmaAdapter(DmaAdapter);
          goto LABEL_133;
        }
        v32 = _InterlockedCompareExchange64((volatile signed __int64 *)Object + 150, v29, v31);
        v153 = v31 == v32;
        v31 = v32;
      }
      while ( !v153 );
      if ( v32 )
      {
        v319 = 0LL;
        v320 = 0LL;
        v33 = (struct _DMA_ADAPTER *)(v32 & 0xFFFFFFFFFFFFFFF8uLL);
        v318[0] = 3145736;
        v318[1] = 13;
        v321 = *((_QWORD *)Object + 136);
        while ( 1 )
        {
          v34 = LpcRequestPort((__int64)v33, (__int64)v318);
          if ( v34 != -1073741801 && v34 != -1073741670 )
            break;
          KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&PspShortTime);
        }
        PspLockUnlockProcessExclusive((__int64)Object, (__int64)v252);
        HalPutDmaAdapter(v33);
      }
      goto LABEL_141;
    case ProcessAccessToken:
      if ( ProcessInformationLength != 16 )
        return -1073741820;
      v325 = *(HANDLE *)ProcessInformation;
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
        goto LABEL_145;
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
        goto LABEL_145;
      return result;
    case ProcessDefaultHardErrorMode:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v26 = *(_DWORD *)ProcessInformation;
      v310 = *(_DWORD *)ProcessInformation;
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
      PspSetProcessDefaultHardErrorMode((__int64)Object, (__int64)v252, v26);
      goto LABEL_88;
    case ProcessIoPortHandlers:
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
LABEL_145:
      v35 = xKdEnumerateDebuggingDevices();
      goto LABEL_146;
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
LABEL_141:
      v12 = 0;
      goto LABEL_79;
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
      v38 = *(_BYTE *)ProcessInformation;
      v260 = *(_BYTE *)ProcessInformation;
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
      v39 = (__int64)v252;
      PspLockProcessExclusive((__int64)Object, (__int64)v252);
      if ( v38 )
        *((_DWORD *)Object + 382) |= 4u;
      else
        *((_DWORD *)Object + 382) &= ~4u;
      v40 = *((_QWORD *)Object + 176);
      if ( v40 )
      {
        v41 = *(_WORD *)(v40 + 8);
        if ( v41 == 332 || v41 == 452 )
          v38 = 1;
      }
      KeSetAutoAlignmentProcess((__int64)Object, v38);
      PspUnlockProcessExclusive((__int64)Object, v39);
      goto LABEL_88;
    case ProcessPriorityClass:
      if ( ProcessInformationLength != 2 )
        return -1073741820;
      v21 = *(_WORD *)ProcessInformation;
      v258 = *(_WORD *)ProcessInformation;
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
      v22 = PspSetProcessPriorityClass((__int64)Object, HIBYTE(v258), (__int64)ProcessHandle, v9);
      if ( v22 >= 0 )
      {
        LOBYTE(v7) = (_BYTE)v21 != 0;
        PsSetProcessPriorityByClass((__int64)Object, v7);
      }
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      return v22;
    case ProcessWx86Information:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v42 = *(_DWORD *)ProcessInformation;
      v305 = *(_DWORD *)ProcessInformation;
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
        return -1073741727;
      v12 = ObReferenceObjectByHandleWithTag(
              ProcessHandle,
              0x200u,
              (POBJECT_TYPE)PsProcessType,
              v9,
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
    case ProcessAffinityMask:
      if ( ProcessInformationLength == 8 )
      {
        *(_QWORD *)&v330 = *(_QWORD *)ProcessInformation;
        if ( !(_QWORD)v330 )
          return -1073741811;
      }
      else
      {
        if ( ProcessInformationLength != 16 )
          return -1073741820;
        v330 = *(_OWORD *)ProcessInformation;
        if ( !KeVerifyGroupAffinity((__int64)&v330, 0) )
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
      if ( result >= 0 )
      {
        GroupMaskProcess = KeQueryGroupMaskProcess((__int64)Object);
        if ( ((GroupMaskProcess - 1) & GroupMaskProcess) == 0 )
        {
          if ( (_DWORD)v4 != 8 )
            goto LABEL_186;
          _BitScanForward(&GroupMaskProcess, GroupMaskProcess);
          v254 = GroupMaskProcess;
          v44 = v330 & qword_140CFC848[GroupMaskProcess];
          if ( v44 == (_QWORD)v330 )
          {
            WORD4(v330) = v254;
            *(_QWORD *)&v330 = v44;
LABEL_186:
            v45 = (__int64)v252;
            KeEnterCriticalRegionThread((__int64)v252);
            if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 139) )
            {
              PspLockProcessSharedUnsafe((__int64)Object);
              v12 = PspSetProcessAffinitySafe((_DWORD)Object, 0, 0, (unsigned int)&v330, (__int64)v267);
              PspUnlockProcessSharedUnsafe((__int64)Object);
              ExReleaseRundownProtection((PEX_RUNDOWN_REF)Object + 139);
              if ( v12 >= 0 )
              {
                if ( v267[0] )
                  PspWritePebAffinityInfo(v45, (__int64)Object);
                _InterlockedOr((volatile signed __int32 *)Object + 280, 0x200000u);
                KeLeaveCriticalRegionThread(v45, v46, v47, v48);
                goto LABEL_79;
              }
            }
            else
            {
              v12 = -1073741558;
            }
            KeLeaveCriticalRegionThread(v45, v46, v47, v48);
LABEL_79:
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            return v12;
          }
        }
LABEL_133:
        v12 = -1073741811;
        goto LABEL_79;
      }
      return result;
    case ProcessPriorityBoost:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v311 = *(_DWORD *)ProcessInformation;
      v49 = v311 != 0;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      v12 = result;
      if ( result < 0 )
        return result;
      if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 139) )
        goto LABEL_115;
      v50 = (__int64)v252;
      PspLockProcessExclusive((__int64)Object, (__int64)v252);
      KeSetDisableBoostProcess(Object, v49);
      v51 = Object;
      for ( j = (_QWORD *)*((_QWORD *)Object + 188); j != (_QWORD *)((char *)Object + 1504); v51 = Object )
      {
        KeSetDisableBoostThread(j - 157, v49);
        j = (_QWORD *)*j;
      }
      goto LABEL_266;
    case ProcessDeviceMap:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      v53 = *(HANDLE *)ProcessInformation;
      v323 = *(HANDLE *)ProcessInformation;
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
      v35 = ObSetProcessDeviceMap(Object, v53, v9);
      goto LABEL_146;
    case ProcessSessionInformation:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v54 = *(_DWORD *)ProcessInformation;
      v312 = *(_DWORD *)ProcessInformation;
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
      if ( v54 != (unsigned int)MmGetSessionId((__int64)Object) )
        v7 = -1073741790;
      goto LABEL_214;
    case ProcessForegroundInformation:
      if ( ProcessInformationLength != 1 )
        return -1073741820;
      v23 = *(_BYTE *)ProcessInformation;
      v263 = *(_BYTE *)ProcessInformation;
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
      goto LABEL_88;
    case ProcessBreakOnTermination:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v55 = *(_DWORD *)ProcessInformation;
      v293 = *(_DWORD *)ProcessInformation;
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
      if ( v55 )
        _InterlockedOr((volatile signed __int32 *)Object + 281, 0x2000u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 281, 0xFFFFDFFF);
      goto LABEL_88;
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
      v12 = result;
      if ( result < 0 )
        return result;
      v278 = *(_DWORD *)v5;
      if ( (v278 & 0xFFFFFFFE) != 0 )
        goto LABEL_133;
      if ( (v278 & 1) != 0 )
        _InterlockedAnd((volatile signed __int32 *)Object + 281, 0xFFFFFFFD);
      else
        _InterlockedOr((volatile signed __int32 *)Object + 281, 2u);
      goto LABEL_79;
    case ProcessHandleTracing:
      v274 = 0LL;
      if ( !ProcessInformationLength )
        goto LABEL_229;
      if ( ((ProcessInformationLength - 4) & 0xFFFFFFFB) != 0 )
        return -1073741820;
      v56 = *(_DWORD *)ProcessInformation;
      LODWORD(v274) = *(_DWORD *)ProcessInformation;
      if ( ProcessInformationLength == 8 )
        HIDWORD(v274) = *((_DWORD *)ProcessInformation + 1);
      else
        HIDWORD(v274) = 0;
      if ( v56 )
        return -1073741811;
LABEL_229:
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
      if ( (_DWORD)v4 )
        v35 = PsSetProcessHandleTracingInformation(Object, &v274);
      else
        v35 = PsSetProcessHandleTracingInformation(Object, 0LL);
      goto LABEL_146;
    case ProcessIoPriority:
      if ( ((ProcessInformationLength - 4) & 0xFFFFFFFB) != 0 )
        return -1073741820;
      if ( ProcessInformationLength == 4 )
      {
        v57 = *(_DWORD *)ProcessInformation;
        v264 = *(_DWORD *)ProcessInformation;
        LOBYTE(v58) = 0;
      }
      else
      {
        v303 = *(_QWORD *)ProcessInformation;
        v57 = v303;
        v58 = HIDWORD(v303);
        v264 = v303;
      }
      if ( v57 >= 4 )
        return -1073741811;
      if ( v57 >= 3
        && !(unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                               SeIncreaseBasePriorityPrivilege,
                               ProcessHandle,
                               512LL) )
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
      v12 = result;
      if ( result < 0 )
        return result;
      if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 139) )
      {
        v50 = (__int64)v252;
        PspLockProcessExclusive((__int64)Object, (__int64)v252);
        v59 = (volatile signed __int32 *)Object;
        v60 = *((_DWORD *)Object + 281);
        v61 = v264 << 27;
        do
        {
          v62 = v60;
          v60 = _InterlockedCompareExchange(v59 + 281, v61 | v60 & 0xC7FFFFFF, v60);
        }
        while ( v60 != v62 );
        v51 = Object;
        v63 = (KSPIN_LOCK *)*((_QWORD *)Object + 188);
        if ( v63 != (KSPIN_LOCK *)((char *)Object + 1504) )
        {
          v64 = v264;
          do
          {
            if ( (_BYTE)v58 == 1 && ((*((_DWORD *)v63 + 10) >> 9) & 7) < v64 )
              IoBoostThreadIoPriority(v63 - 157, v64, 0);
            PsSetIoPriorityThread((__int64)(v63 - 157), v64);
            v63 = (KSPIN_LOCK *)*v63;
            v51 = Object;
          }
          while ( v63 != (KSPIN_LOCK *)((char *)Object + 1504) );
        }
LABEL_266:
        PspUnlockProcessExclusive((__int64)v51, v50);
LABEL_114:
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)Object + 139);
      }
      else
      {
LABEL_115:
        v12 = -1073741558;
      }
      goto LABEL_79;
    case ProcessExecuteFlags:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      v65 = *(_DWORD *)ProcessInformation;
      v294 = v65;
      CurrentProcess = PsGetCurrentProcess();
      v22 = KeSetExecuteOptions((__int64)CurrentProcess, v65);
      if ( v22 < 0 || (v65 & 3) != 1 )
        return v22;
      MmRemoveExecuteGrants();
      return v22;
    case ProcessTlsInformation:
      memset(P, 0, sizeof(P));
      v334 = 0LL;
      v250 = 0;
      v265 = 0LL;
      v271 = 0LL;
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      if ( v9 != 1 )
        return -1073741823;
      if ( ProcessInformationLength < 0x28 || (ProcessInformationLength - 16) % 0x18uLL )
        return -1073741820;
      if ( ProcessInformationLength == 40 )
      {
        PoolWithQuotaTag = P;
        v252 = (struct _KTHREAD *)P;
      }
      else
      {
        PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, ProcessInformationLength, 0x736C5450u);
        v252 = (struct _KTHREAD *)PoolWithQuotaTag;
        if ( !PoolWithQuotaTag )
          return -1073741670;
      }
      v304 = PoolWithQuotaTag;
      v272 = PoolWithQuotaTag;
      memmove(PoolWithQuotaTag, (const void *)v5, v4);
      if ( PoolWithQuotaTag[1] < 2u
        && (*PoolWithQuotaTag & 0xFFFFFFFE) == 0
        && (v75 = (unsigned int)PoolWithQuotaTag[2], (_DWORD)v75)
        && (unsigned int)(v4 - 16) / 0x18uLL == v75 )
      {
        v76 = 0;
        v250 = 0;
        v77 = PoolWithQuotaTag + 4;
        do
        {
          if ( *v77 )
            goto LABEL_325;
          v250 = ++v76;
          v77 += 6;
        }
        while ( v76 < (unsigned int)v75 );
        v78 = PsGetCurrentProcess();
        v79 = v78;
        Object = v78;
        v255 = 0;
        if ( (*PoolWithQuotaTag & 1) != 0 )
        {
          v80 = v78[1].AffinityPadding[10];
          if ( !v80 || (v81 = *(_WORD *)(v80 + 8), v81 != 332) && v81 != 452 )
          {
LABEL_325:
            v12 = -1073741811;
            goto LABEL_327;
          }
          v255 = 1;
        }
        v82 = v255 ^ 1;
        Alignment = 4 * v82 + 4;
        v275 = 4 * v82 + 4;
        v266 = v5;
        v250 = 0;
        v12 = 0;
        v251 = 0;
        v83 = 0LL;
        for ( k = v79; ; k = Object )
        {
          Handle = PsGetNextProcessThread((__int64)k, v83);
          v85 = Handle;
          if ( !Handle || v250 >= PoolWithQuotaTag[2] )
            break;
          if ( (*((_DWORD *)Handle + 29) & 0x400) == 0 && ExAcquireRundownProtection((PEX_RUNDOWN_REF)Handle + 159) )
          {
            v86 = v85[30];
            v287 = v86;
            if ( v255 )
            {
              v87 = (char *)(v86 + 8236);
              v271 = v86 + 8236;
              LODWORD(v88) = PtrToUlong((const void *)*(unsigned int *)(v86 + 8236));
              v89 = v88;
              v265 = v88;
            }
            else
            {
              v87 = (char *)(v86 + 88);
              v271 = v86 + 88;
              v89 = *(char **)(v86 + 88);
              v265 = v89;
            }
            if ( v89 )
            {
              if ( PoolWithQuotaTag[1] == 1 )
              {
                if ( v89 == v87 )
                {
                  v265 = 0LL;
                }
                else
                {
                  v90 = (unsigned int)PoolWithQuotaTag[3];
                  v91 = v275 * v90;
                  if ( v275 * v90 )
                  {
                    if ( ((Alignment - 1) & (unsigned int)v89) != 0 )
                      ExRaiseDatatypeMisalignment();
                    if ( (unsigned __int64)&v89[v91] > 0x7FFFFFFF0000LL || &v89[v91] < v89 )
                    {
                      MEMORY[0x7FFFFFFF0000] = 0;
                      v90 = (unsigned int)v304[3];
                    }
                  }
                  v92 = (volatile void **)&PoolWithQuotaTag[6 * v250 + 6];
                  ProbeForWrite(*v92, v275 * v90, Alignment);
                  memmove((void *)*v92, v89, v275 * (unsigned int)PoolWithQuotaTag[3]);
                  _InterlockedOr(v248, 0);
                  v86 = v287;
                }
                v93 = v250;
                *(_DWORD *)(v266 + 24LL * v250 + 16) |= 1u;
                v94 = *(const void **)&v272[6 * v93 + 6];
                if ( v255 )
                  *(_DWORD *)(v86 + 8236) = PtrToUlong(v94);
                else
                  *(_QWORD *)(v86 + 88) = v94;
                v95 = v266 + 24LL * v250;
                *(_QWORD *)(v95 + 32) = *((_QWORD *)Handle + 144);
                *(_QWORD *)(v95 + 24) = v265;
                *(_DWORD *)(v95 + 16) ^= 3u;
                ++v250;
              }
              else
              {
                v96 = 6LL * v250;
                *(_DWORD *)(v96 * 4 + v266 + 16) |= 1u;
                v97 = (unsigned int)v272[3];
                if ( v255 )
                {
                  v98 = (unsigned __int64)&v89[4 * v97];
                  if ( v98 >= 0x7FFFFFFF0000LL )
                    v98 = 0x7FFFFFFF0000LL;
                  LODWORD(v99) = PtrToUlong((const void *)*(unsigned int *)v98);
                  v100 = v99;
                  v271 = v99;
                  v101 = PtrToUlong(*(const void **)&PoolWithQuotaTag[v96 + 6]);
                  v102 = (unsigned __int64)&v265[4 * PoolWithQuotaTag[3]];
                  if ( v102 >= 0x7FFFFFFF0000LL )
                    v102 = 0x7FFFFFFF0000LL;
                  *(_DWORD *)v102 = v101;
                }
                else
                {
                  v103 = (unsigned __int64)&v89[8 * v97];
                  if ( v103 >= 0x7FFFFFFF0000LL )
                    v103 = 0x7FFFFFFF0000LL;
                  v100 = *(_QWORD *)v103;
                  v271 = *(_QWORD *)v103;
                  v104 = (unsigned __int64)&v265[8 * PoolWithQuotaTag[3]];
                  if ( v104 >= 0x7FFFFFFF0000LL )
                    v104 = 0x7FFFFFFF0000LL;
                  *(_QWORD *)v104 = *(_QWORD *)&PoolWithQuotaTag[v96 + 6];
                }
                v105 = 3LL * v250;
                v106 = v266;
                *(_QWORD *)(v266 + 8 * v105 + 24) = v100;
                *(_DWORD *)(v106 + 8 * v105 + 16) ^= 3u;
                ++v250;
              }
            }
            ExReleaseRundownProtection((PEX_RUNDOWN_REF)Handle + 159);
          }
          v83 = Handle;
        }
        if ( Handle )
          PsQuitNextProcessThread(Handle);
      }
      else
      {
        v12 = -1073741820;
      }
LABEL_327:
      if ( PoolWithQuotaTag == (_DWORD *)P )
        return v12;
      ExFreePoolWithTag(PoolWithQuotaTag, 0);
      return v12;
    case ProcessPagePriority:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v67 = *(_DWORD *)ProcessInformation;
      v279 = v67;
      if ( v67 > (unsigned int)MmGetDefaultPagePriority() || v67 < (unsigned int)MiCreateSystemWsles() )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      v12 = result;
      if ( result < 0 )
        return result;
      if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 139) )
        goto LABEL_115;
      v50 = (__int64)v252;
      PspLockProcessExclusive((__int64)Object, (__int64)v252);
      v68 = v67 << 12;
      v69 = (volatile signed __int32 *)Object;
      v70 = *((_DWORD *)Object + 280);
      do
      {
        v71 = v70;
        v70 = _InterlockedCompareExchange(v69 + 280, v68 | v70 & 0xFFFF8FFF, v70);
      }
      while ( v70 != v71 );
      v51 = Object;
      v72 = (_QWORD *)*((_QWORD *)Object + 188);
      if ( v72 != (_QWORD *)((char *)Object + 1504) )
      {
        v73 = v279;
        do
        {
          PsSetPagePriorityThread((__int64)(v72 - 157), v73);
          v72 = (_QWORD *)*v72;
          v51 = Object;
        }
        while ( v72 != (_QWORD *)((char *)Object + 1504) );
      }
      goto LABEL_266;
    case ProcessInstrumentationCallback:
      memset(&ApcState, 0, sizeof(ApcState));
      if ( ((ProcessInformationLength - 8) & 0xFFFFFFF7) != 0 )
        return -1073741820;
      if ( ProcessInformationLength == 8 )
      {
        *(_QWORD *)&v276 = 0LL;
        v107 = *(_QWORD *)ProcessInformation;
        *((_QWORD *)&v276 + 1) = *(_QWORD *)ProcessInformation;
      }
      else
      {
        v276 = *(_OWORD *)ProcessInformation;
        v107 = *((_QWORD *)&v276 + 1);
      }
      if ( DWORD1(v276) )
        return -1073741811;
      if ( (_DWORD)v276 != DWORD1(v276) )
        return -1073741736;
      if ( v107 != (__int64)(v107 << 16) >> 16 )
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
      v108 = PsGetCurrentProcess();
      v109 = SeSinglePrivilegeCheck(SeDebugPrivilege, v9);
      v19 = Object;
      if ( v109 || Object == v108 )
      {
        v110 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 139);
        v111 = (struct _EX_RUNDOWN_REF *)Object;
        if ( !v110 )
        {
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          return -1073741558;
        }
        v112 = *((_QWORD *)Object + 176);
        v114 = 0;
        if ( v112 )
        {
          v113 = *(_WORD *)(v112 + 8);
          if ( v113 == 332 || v113 == 452 )
            v114 = 1;
        }
        v115 = v108[1].AffinityPadding[10];
        if ( v114 )
        {
          if ( v115 )
          {
            v120 = *(_WORD *)(v115 + 8);
            if ( v120 == 332 || v120 == 452 )
            {
              KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
              if ( v107 < MmGetMaximumUserAddress() && (unsigned int)MmValidateUserCallTarget(v107, 1LL) )
              {
                v121 = 0LL;
                v122 = (__int64 *)*((_QWORD *)Object + 176);
                if ( v122 )
                  v121 = *v122;
                *(_DWORD *)(v121 + 1160) = DWORD2(v276);
                KeUnstackDetachProcess(&ApcState);
                ExReleaseRundownProtection((PEX_RUNDOWN_REF)Object + 139);
              }
              else
              {
                v7 = -1073741811;
                KeUnstackDetachProcess(&ApcState);
                ExReleaseRundownProtection((PEX_RUNDOWN_REF)Object + 139);
              }
LABEL_214:
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              return v7;
            }
          }
        }
        else if ( !v115 || (v116 = *(_WORD *)(v115 + 8), v116 != 332) && v116 != 452 )
        {
          KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
          if ( !(unsigned int)MmValidateUserCallTarget(v107, 0LL) )
            v7 = -1073741811;
          KeUnstackDetachProcess(&ApcState);
          v111 = (struct _EX_RUNDOWN_REF *)Object;
          if ( (v7 & 0x80000000) == 0 )
          {
            v117 = (__int64)v252;
            PspLockProcessExclusive((__int64)Object, (__int64)v252);
            *((_QWORD *)Object + 123) = v107;
            v118 = Object;
            v119 = (volatile signed __int32 *)*((_QWORD *)Object + 188);
            if ( v119 != (volatile signed __int32 *)((char *)Object + 1504) )
            {
              while ( 1 )
              {
                if ( v107 )
                  _interlockedbittestandset(v119 - 314, 0x19u);
                else
                  _interlockedbittestandreset(v119 - 314, 0x19u);
                v119 = *(volatile signed __int32 **)v119;
                v118 = Object;
                if ( v119 == (volatile signed __int32 *)((char *)Object + 1504) )
                  break;
                v107 = *((_QWORD *)&v276 + 1);
              }
            }
            PspUnlockProcessExclusive((__int64)v118, v117);
            ExReleaseRundownProtection((PEX_RUNDOWN_REF)Object + 139);
            goto LABEL_214;
          }
LABEL_371:
          ExReleaseRundownProtection(v111 + 139);
          goto LABEL_214;
        }
        v7 = -1073741637;
        goto LABEL_371;
      }
LABEL_97:
      ObfDereferenceObjectWithTag(v19, 0x79517350u);
      return -1073741727;
    case ProcessThreadStackAllocation:
      v314 = 0LL;
      v315 = 0LL;
      v316 = 0LL;
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      v123 = 0LL;
      if ( ProcessInformationLength == 40 )
      {
        if ( v9 )
        {
          v314 = *(_OWORD *)ProcessInformation;
          v315 = *((_OWORD *)ProcessInformation + 1);
          v316 = *((_QWORD *)ProcessInformation + 4);
          v123 = (char *)ProcessInformation + 32;
          v5 = (__int64)&v314;
        }
        v124 = *(_DWORD *)v5;
        if ( *(_DWORD *)v5 > 0x40u || *(_DWORD *)(v5 + 4) | *(_DWORD *)(v5 + 8) | *(_DWORD *)(v5 + 12) )
          return -1073741811;
        v5 += 16LL;
      }
      else
      {
        if ( ProcessInformationLength != 24 )
          return -1073741820;
        v124 = 0;
        if ( v9 )
        {
          v315 = *(_OWORD *)ProcessInformation;
          v123 = (char *)ProcessInformation + 16;
          v5 = (__int64)&v315;
        }
      }
      if ( !*(_QWORD *)v5 )
        return -1073741811;
      v306 = *(_QWORD *)v5;
      *(_QWORD *)(v5 + 16) = 0LL;
      result = MmAllocateUserStack((int)v5 + 16, *(_QWORD *)(v5 + 8), (int)&v306, v124, 0);
      if ( result >= 0 && v9 )
        *(_QWORD *)v123 = *(_QWORD *)(v5 + 16);
      return result;
    case ProcessAffinityUpdateMode:
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v280 = *(_DWORD *)ProcessInformation;
      if ( (v280 & 0xFFFFFFFC) != 0 )
        return -1073741811;
      return PspSetProcessAffinityUpdateMode(CurrentThread, &v280);
    case ProcessMemoryAllocationMode:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v125 = *(_DWORD *)ProcessInformation;
      v295 = v125;
      if ( (v125 & 0xFFFFFFFE) != 0 )
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
      if ( (v125 & 1) != 0 )
        _InterlockedOr((volatile signed __int32 *)Object + 281, 0x200000u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 281, 0xFFDFFFFF);
      goto LABEL_88;
    case ProcessTokenVirtualizationEnabled:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v126 = *(_DWORD *)ProcessInformation;
      v296 = *(_DWORD *)ProcessInformation;
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
      v127 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken((PEPROCESS)Object);
      SeSetVirtualizationToken((__int64)v127, v126);
      HalPutDmaAdapter(v127);
      goto LABEL_88;
    case ProcessConsoleHostProcess:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      v128 = *(_QWORD *)ProcessInformation;
      v324 = v128;
      if ( (v128 & 3) != 1 )
        return -1073741811;
      PsGetCurrentProcess()[1].AffinityPadding[3] = v128;
      return 0;
    case ProcessMitigationPolicy:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      v253 = *(HANDLE *)ProcessInformation;
      if ( ProcessHandle != (HANDLE)-1LL && (_DWORD)v253 != 2 )
        return -1073741811;
      break;
    case ProcessDynamicFunctionTableInformation:
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      if ( ProcessInformationLength != 16 )
        return -1073741820;
      v313 = *(_OWORD *)ProcessInformation;
      if ( BYTE8(v313) )
        return RtlRemoveDynamicFunctionTable(v313);
      else
        return RtlInsertDynamicFunctionTable(v313);
    case ProcessHandleCheckingMode:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v197 = *(_DWORD *)ProcessInformation;
      v297 = v197;
      if ( (v197 & 0xFFFFFFFE) != 0 )
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
      v198 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
      if ( v198 )
      {
        ExEnableHandleExceptions(v198, v197 & 1);
        ObDereferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
      }
      else
      {
LABEL_791:
        v7 = -1073741558;
      }
      goto LABEL_214;
    case ProcessRevokeFileHandles:
      *(_OWORD *)Src = 0LL;
      v199 = 0LL;
      v286 = 0LL;
      if ( v9 != 1 )
        goto LABEL_804;
      if ( (unsigned __int64)ProcessInformation >= 0x7FFFFFFF0000LL )
        v5 = 0x7FFFFFFF0000LL;
      v200 = *(_DWORD *)v5;
      LODWORD(Src[0]) = v200;
      v201 = *(void **)(v5 + 8);
      Src[1] = v201;
      if ( !(_WORD)v200 )
        return -1073741811;
      if ( ((unsigned __int8)v201 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v202 = (unsigned __int64)v201 + (unsigned __int16)v200;
      if ( v202 > 0x7FFFFFFF0000LL || v202 < (unsigned __int64)v201 )
        MEMORY[0x7FFFFFFF0000] = 0;
      v203 = ExAllocatePoolWithTag(NonPagedPoolNx, LOWORD(Src[0]), 0x6E497350u);
      v199 = v203;
      v286 = v203;
      if ( !v203 )
        return -1073741670;
      memmove(v203, Src[1], LOWORD(Src[0]));
      Src[1] = v199;
      v5 = (__int64)Src;
      v327 = Src;
LABEL_804:
      v12 = ObReferenceObjectByHandleWithTag(
              ProcessHandle,
              0x2000u,
              (POBJECT_TYPE)PsProcessType,
              v9,
              0x79517350u,
              &Object,
              0LL);
      if ( v12 >= 0 )
      {
        v36 = IoRevokeHandlesForProcess(v5, Object);
        if ( v199 )
          ExFreePoolWithTag(v199, 0);
        goto LABEL_147;
      }
      if ( !v199 )
        return v12;
      ExFreePoolWithTag(v199, 0);
      return v12;
    case ProcessWorkingSetControl:
      return MmProcessWorkingSetControl(
               (ULONG_PTR)ProcessHandle,
               (__int64 *)ProcessInformation,
               ProcessInformationLength,
               v9);
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
      v204 = *(_DWORD *)v5 != 0;
      v298 = *(_DWORD *)v5 != 0;
      if ( PsGetCurrentProcess() == Object )
      {
        v12 = -1073741790;
      }
      else if ( SeSinglePrivilegeCheck(SeDebugPrivilege, v9) )
      {
        v12 = 0;
        KeSetCheckStackExtentsProcess(Object, v204);
        if ( !v204 && (*((_DWORD *)Object + 280) & 0x20000) != 0 )
          _InterlockedAnd((volatile signed __int32 *)Object + 280, 0xFFFDFFFF);
      }
      else
      {
        v12 = -1073741727;
      }
      goto LABEL_79;
    case ProcessMemoryExhaustion:
      if ( ProcessInformationLength != 16 )
        return -1073741820;
      v331 = *(_OWORD *)ProcessInformation;
      if ( (_WORD)v331 != 1 || DWORD1(v331) )
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
      if ( *((_QWORD *)&v331 + 1) )
        _InterlockedOr((volatile signed __int32 *)Object + 281, 0x100u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 281, 0xFFFFFEFF);
      goto LABEL_88;
    case ProcessFaultInformation:
      v288 = 0LL;
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
      v288 = *(_QWORD *)v5;
      v35 = PsSetProcessFaultInformation((ULONG_PTR)Object);
      goto LABEL_146;
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
      v317 = *(__m256i *)v5;
      if ( v317.m256i_i32[0] != 3 )
      {
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return -1073741735;
      }
      if ( (v317.m256i_i32[1] & 0xFFFFFFF8) != 0
        || *(_OWORD *)&v317.m256i_u64[1] != 0LL
        || ((((unsigned __int32)v317.m256i_i32[1] >> 1) & 1) != 0 || (v317.m256i_i8[4] & 4) != 0)
        && (v317.m256i_i8[4] & 1) == 0 )
      {
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return -1073741811;
      }
      if ( (((unsigned __int32)v317.m256i_i32[1] >> 1) & 1) != 0 || (v317.m256i_i8[4] & 4) != 0 )
        v35 = MmReleaseCommitForMemResetPages(
                (volatile signed __int32 *)Object,
                ((unsigned __int32)v317.m256i_i32[1] >> 2) & 1);
      else
        v35 = MmSetCommitReleaseEligibility((__int64)Object, v317.m256i_i8[4] & 1);
LABEL_146:
      v36 = v35;
LABEL_147:
      v37 = Object;
LABEL_148:
      ObfDereferenceObjectWithTag(v37, 0x79517350u);
      return v36;
    case ProcessDefaultCpuSetsInformation:
    case ProcessAllowedCpuSetsInformation:
      if ( (ProcessInformationLength & 7) != 0 || ProcessInformationLength > 0xA0 )
        return -1073741820;
      memmove(v336, ProcessInformation, ProcessInformationLength);
      v205 = (unsigned int)v4 >> 3;
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
      v35 = KeSetCpuSetsProcess((__int64)Object, v205, v336);
      goto LABEL_146;
    case ProcessSubsystemProcess:
      if ( (PsGetCurrentProcess()[1].IdealProcessorPadding[10] & 0x100) == 0 )
        return -1073741727;
      v289 = 0LL;
      v36 = ObReferenceObjectByHandle(ProcessHandle, 0x200u, (POBJECT_TYPE)PsProcessType, v9, &v289, 0LL);
      Object = v289;
      if ( v36 < 0 )
        return v36;
      _InterlockedOr((volatile signed __int32 *)v289 + 543, 0x40u);
      HalPutDmaAdapter((PADAPTER_OBJECT)Object);
      return v36;
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
      goto LABEL_88;
    case ProcessRaiseUMExceptionOnInvalidHandleClose:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v207 = *(_DWORD *)ProcessInformation;
      v300 = *(_DWORD *)ProcessInformation;
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
      v208 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
      if ( !v208 )
        goto LABEL_791;
      ExEnableRaiseUMExceptionOnInvalidHandleClose(v208, v207);
      ObDereferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
      goto LABEL_214;
    case ProcessIumChallengeResponse:
      return PsIumEnableOnDemandDebugWithResponse(ProcessHandle, ProcessInformation, ProcessInformationLength);
    case ProcessHighGraphicsPriorityInformation:
      if ( ProcessInformationLength != 1 )
        return -1073741820;
      v209 = *(_BYTE *)ProcessInformation;
      v262 = *(_BYTE *)ProcessInformation;
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
      if ( v209 )
        _InterlockedOr((volatile signed __int32 *)Object + 543, 0x200u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 543, 0xFFFFFDFF);
      goto LABEL_88;
    case ProcessPowerThrottlingState:
      v328 = 0LL;
      v329 = 0;
      if ( ProcessInformationLength != 12 )
        return -1073741820;
      v328 = *(HANDLE *)ProcessInformation;
      v210 = *((_DWORD *)ProcessInformation + 2);
      v329 = v210;
      if ( (_DWORD)v328 != 1 || (HIDWORD(v328) & 0xFFFFFFFC) != 0 || (~HIDWORD(v328) & v210) != 0 )
        return -1073741811;
      ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
      if ( !ExtensionTable )
        return -1073741822;
      v212 = ObReferenceObjectByHandleWithTag(
               ProcessHandle,
               0x2000u,
               (POBJECT_TYPE)PsProcessType,
               v9,
               0x79517350u,
               &Object,
               0LL);
      if ( v212 >= 0 )
      {
        v213 = (*(__int64 (__fastcall **)(PVOID, HANDLE *))(ExtensionTable + 8))(Object, &v328);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
        return v213;
      }
      else
      {
        ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
        return v212;
      }
    case ProcessDisableSystemAllowedCpuSets:
      result = ExCpuSetResourceManagerAccessCheck(v9);
      if ( result < 0 )
        return result;
      if ( (_DWORD)v4 != 1 )
        return -1073741820;
      v206 = *(_BYTE *)v5;
      v261 = v206;
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
      if ( v206 )
        _InterlockedOr((volatile signed __int32 *)Object + 280, 0x8000000u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 280, 0xF7FFFFFF);
      KeRecomputeCpuSetAffinityProcess((__int64)Object);
      goto LABEL_88;
    case ProcessEnergyTrackingState:
      if ( ProcessInformationLength < 8 )
        return -1073741820;
      memset(v335, 0, sizeof(v335));
      v214 = 144;
      if ( ProcessInformationLength < 0x90 )
        v214 = ProcessInformationLength;
      memmove(v335, ProcessInformation, v214);
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
      v215 = PoSetProcessEnergyTrackingState((__int64)Object, v335);
      v15 = Object;
      if ( v215 >= 0 )
        goto LABEL_89;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      return v215;
    case ProcessManageWritesToExecutableMemory:
      return -1073741637;
    case ProcessTelemetryCoverage:
      if ( ProcessInformationLength != 24 )
        return -1073741820;
      *(_OWORD *)pszDest = 0LL;
      v338 = 0LL;
      v339 = 0LL;
      v340 = 0LL;
      v341 = 0;
      v216 = *(_OWORD *)ProcessInformation;
      *(_OWORD *)pszSrc = v216;
      v292 = *((_QWORD *)ProcessInformation + 2);
      v217 = (const char *)v216;
      if ( (unsigned __int64)(v216 + 65) > 0x7FFFFFFF0000LL || (__int64)v216 + 65 < (unsigned __int64)v216 )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
        v217 = pszSrc[0];
      }
      RtlStringCbCopyA(pszDest, 0x41uLL, v217);
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
      pszSrc[0] = pszDest;
      v341 = 0;
      v22 = EtwSetProcessTelemetryCoverage(Object, pszSrc);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_DWORD *)(v5 + 12) = HIDWORD(pszSrc[1]);
      *(_DWORD *)(v5 + 16) = v292;
      return v22;
    case ProcessEnableReadWriteVmLogging:
    case ProcessEnableLogging:
      if ( ProcessInformationClass == ProcessEnableReadWriteVmLogging && !ProcessInformationLength
        || ProcessInformationClass == ProcessEnableLogging && ProcessInformationLength < 4 )
      {
        return -1073741820;
      }
      if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, v9) && !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
        return -1073741727;
      v257 = 0;
      if ( Alignment == 87 )
        v218 = (*(_BYTE *)v5 & 1 ^ *(_BYTE *)v5) & 2 ^ *(_BYTE *)v5 & 1;
      else
        v218 = *(_DWORD *)v5;
      v257 = v218;
      if ( (v218 & 0xFFFFFFF0) != 0 )
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
      _InterlockedAnd((volatile signed __int32 *)Object + 543, 0xFFE7FFFF);
      v219 = (((v257 >> 2) & 1) << 19) | 0x100000;
      if ( (v257 & 8) == 0 )
        v219 = ((v257 >> 2) & 1) << 19;
      _InterlockedOr((volatile signed __int32 *)Object + 543, v219);
      _InterlockedAnd((volatile signed __int32 *)Object + 280, 0xFCFFFFFF);
      v220 = ((v257 & 1) << 24) | 0x2000000;
      if ( (v257 & 2) == 0 )
        v220 = (v257 & 1) << 24;
      _InterlockedOr((volatile signed __int32 *)Object + 280, v220);
      goto LABEL_88;
    case ProcessDebugAuthInformation:
      return SeCodeIntegritySetInformationProcess(
               ProcessHandle,
               (unsigned int)ProcessInformationClass,
               ProcessInformation,
               ProcessInformationLength);
    case ProcessSystemResourceManagement:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v221 = *(_DWORD *)ProcessInformation;
      v299 = v221;
      if ( (v221 & 0xFFFFFFFE) != 0 )
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
      PspSetProcessForegroundBackgroundRequest((__int64)Object, v221 & 1, 1);
LABEL_88:
      v15 = Object;
LABEL_89:
      ObfDereferenceObjectWithTag(v15, 0x79517350u);
      return 0;
    case ProcessLoaderDetour:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v222 = *(_DWORD *)ProcessInformation;
      v301 = *(_DWORD *)ProcessInformation;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x2000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      v12 = result;
      if ( result < 0 )
        return result;
      if ( Object != PsGetCurrentProcess() || !v222 )
        goto LABEL_133;
      v223 = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
      if ( v223 )
      {
        (*(void (__fastcall **)(PVOID, _QWORD))(v223 + 40))(Object, v222);
        ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
      }
      goto LABEL_79;
    case ProcessCombineSecurityDomainsInformation:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      v224 = *(HANDLE *)ProcessInformation;
      v326 = *(HANDLE *)ProcessInformation;
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
      v36 = ObReferenceObjectByHandleWithTag(v224, 0x1000u, (POBJECT_TYPE)PsProcessType, v9, 0x79517350u, &v281, 0LL);
      v37 = Object;
      if ( v36 < 0 )
        goto LABEL_148;
      v36 = PspCombineSecurityDomains(Object, v281);
      ObfDereferenceObjectWithTag(v281, 0x79517350u);
      goto LABEL_147;
    case ProcessLeapSecondInformation:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      v225 = *(HANDLE *)ProcessInformation;
      v307 = v225;
      if ( ((unsigned int)v225 & 0xFFFFFFFE) != 0 || ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      v226 = PsGetCurrentProcess();
      Object = v226;
      v227 = v226[1].AffinityPadding[4];
      if ( !v227 )
        return -1073741790;
      v228 = 0LL;
      v229 = (__int64 *)v226[1].AffinityPadding[10];
      if ( v229 )
        v228 = *v229;
      v230 = (unsigned __int8)v225 & 1;
      v231 = *(_DWORD *)(v227 + 1984);
      if ( v230 )
        v232 = v231 | 1;
      else
        v232 = v231 & 0xFFFFFFFE;
      *(_DWORD *)(v227 + 1984) = v232;
      if ( v228 )
      {
        v233 = *(_DWORD *)(v228 + 1140);
        if ( v230 )
          v234 = v233 | 1;
        else
          v234 = v233 & 0xFFFFFFFE;
        *(_DWORD *)(v228 + 1140) = v234;
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
      else
        return -1073741637;
    case ProcessAltSystemCallInformation:
      if ( ProcessInformationLength != 1 )
        return -1073741820;
      if ( !*(_BYTE *)ProcessInformation )
        return -1073741811;
      if ( v9 )
        return -1073741790;
      v290 = 0LL;
      result = ObReferenceObjectByHandle(ProcessHandle, 0xBEAu, (POBJECT_TYPE)PsProcessType, 0, &v290, 0LL);
      Object = v290;
      if ( result >= 0 )
      {
        v235 = PspEnableAltSystemCallHandling();
        HalPutDmaAdapter((PADAPTER_OBJECT)Object);
        return v235;
      }
      return result;
    case ProcessDynamicEHContinuationTargets:
      v267[1] = 0;
      v236 = 0LL;
      if ( ProcessInformationLength != 16 )
        return -1073741820;
      *(_OWORD *)Address = *(_OWORD *)ProcessInformation;
      v237 = 16 * LOWORD(Address[0]);
      if ( !v237 )
        return -1073741811;
      v238 = (const void *)Address[1];
      if ( !Address[1] )
        return -1073741811;
      v239 = v237;
      ProbeForWrite(Address[1], v237, 8u);
      if ( WORD1(Address[0]) || HIDWORD(Address[0]) )
        return -1073741811;
      if ( v9 != 1 )
        return -1073741790;
      v270 = 0LL;
      result = ObReferenceObjectByHandle(ProcessHandle, 0x200u, (POBJECT_TYPE)PsProcessType, 1, &v270, 0LL);
      Object = v270;
      if ( result < 0 )
        return result;
      v240 = PsGetCurrentProcess();
      v241 = (struct _DMA_ADAPTER *)Object;
      if ( Object == v240 && (*((_DWORD *)Object + 629) & 0x40000000) != 0 )
      {
        v12 = -1073741790;
      }
      else if ( (*((_DWORD *)Object + 629) & 0x4000) != 0 )
      {
        Pool2 = (_DWORD *)ExAllocatePool2(257LL, v239, 1313359172LL);
        v236 = Pool2;
        v270 = Pool2;
        if ( Pool2 )
        {
          memmove(Pool2, v238, v239);
          v12 = PspProcessDynamicEHContinuationTargets((ULONG_PTR)Object);
          v251 = v12;
          v254 = 0;
        }
        else
        {
          v12 = -1073741801;
        }
        v241 = (struct _DMA_ADAPTER *)Object;
      }
      else
      {
        v12 = -1073741637;
      }
      goto LABEL_955;
    case ProcessDynamicEnforcedCetCompatibleRanges:
      LODWORD(v268) = 0;
      v236 = 0LL;
      if ( ProcessInformationLength != 16 )
        return -1073741820;
      *(_OWORD *)v284 = *(_OWORD *)ProcessInformation;
      v243 = 24 * LOWORD(v284[0]);
      if ( !v243 )
        return -1073741811;
      v244 = (const void *)v284[1];
      if ( !v284[1] )
        return -1073741811;
      v245 = v243;
      ProbeForWrite(v284[1], v243, 8u);
      if ( WORD1(v284[0]) || HIDWORD(v284[0]) )
        return -1073741811;
      if ( v9 != 1 )
        return -1073741790;
      v269 = 0LL;
      result = ObReferenceObjectByHandle(ProcessHandle, 0x200u, (POBJECT_TYPE)PsProcessType, 1, &v269, 0LL);
      Object = v269;
      if ( result < 0 )
        return result;
      v246 = PsGetCurrentProcess();
      v241 = (struct _DMA_ADAPTER *)Object;
      if ( Object == v246 && (*((_DWORD *)Object + 629) & 0x40000000) != 0 )
      {
        v12 = -1073741790;
      }
      else if ( (*((_DWORD *)Object + 629) & 0x4000) != 0 )
      {
        v247 = (_DWORD *)ExAllocatePool2(257LL, v245, 1380009284LL);
        v236 = v247;
        v269 = v247;
        if ( v247 )
        {
          memmove(v247, v244, v245);
          v12 = PspProcessDynamicEnforcedAddressRanges(
                  (PRKPROCESS)Object,
                  (__int64)Object + 2576,
                  (__int64)v236,
                  (unsigned __int16)v284[0],
                  (unsigned int *)&v268);
          v251 = v12;
          while ( 1 )
          {
            v254 = v7;
            if ( v7 >= (unsigned int)v268 )
              break;
            *((_DWORD *)v244 + 6 * v7 + 4) = v236[6 * v7 + 4];
            ++v7;
          }
        }
        else
        {
          v12 = -1073741801;
        }
        v241 = (struct _DMA_ADAPTER *)Object;
      }
      else
      {
        v12 = -1073741637;
      }
LABEL_955:
      if ( v241 )
        HalPutDmaAdapter(v241);
      if ( v236 )
      {
        ExFreePoolWithTag(v236, 0);
        return v12;
      }
      return v12;
    default:
      return -1073741821;
  }
  v131 = (unsigned __int8 *)PsGetCurrentProcess();
  Object = v131;
  switch ( (int)v253 )
  {
    case 1:
      if ( (HIDWORD(v253) & 0xFFFFFFF0) != 0 )
      {
        v12 = -1073741811;
        goto LABEL_501;
      }
      v132 = (HIDWORD(v253) >> 1) & 1;
      if ( !v132 && (*((_DWORD *)v131 + 628) & 0x10) != 0 )
        goto LABEL_429;
      if ( (BYTE4(v253) & 1) == 0 && (*((_DWORD *)v131 + 628) & 0x40) == 0 )
        goto LABEL_429;
      v133 = (HIDWORD(v253) >> 3) & 1;
      if ( !v133 && (*((_DWORD *)v131 + 628) & 8) != 0 )
        goto LABEL_429;
      if ( v133 )
      {
        if ( !v132 )
        {
          v12 = -1073741776;
          goto LABEL_501;
        }
      }
      else if ( !v132 )
      {
LABEL_435:
        if ( (BYTE4(v253) & 1) != 0 )
        {
          _InterlockedAnd((volatile signed __int32 *)v131 + 628, 0xFFFFFFBF);
          v131 = (unsigned __int8 *)Object;
        }
        if ( v133 )
        {
          _InterlockedOr((volatile signed __int32 *)v131 + 628, 8u);
          v131 = (unsigned __int8 *)Object;
        }
        v12 = 0;
        goto LABEL_501;
      }
      _InterlockedOr((volatile signed __int32 *)v131 + 628, 0x10u);
      v131 = (unsigned __int8 *)Object;
      goto LABEL_435;
    case 2:
      v141 = HIDWORD(v253);
      if ( (HIDWORD(v253) & 0xFFFFFFF0) != 0 )
      {
        v12 = -1073741811;
        goto LABEL_501;
      }
      if ( (BYTE4(v253) & 1) != 0 && (BYTE4(v253) & 8) != 0 )
        v141 = HIDWORD(v253) & 0xFFFFFFF7;
      v142 = v141 & 1;
      if ( (v141 & 1) == 0 && ((v141 & 2) != 0 || (v141 & 4) != 0) )
      {
        v12 = -1073741811;
        goto LABEL_501;
      }
      if ( PsIsSystemWideMitigationOptionSet() )
      {
        v131 = (unsigned __int8 *)Object;
LABEL_500:
        v12 = -1073741637;
        goto LABEL_501;
      }
      if ( ProcessHandle == (HANDLE)-1LL )
      {
        v131 = (unsigned __int8 *)Object;
        v143 = 0;
      }
      else
      {
        v12 = ObReferenceObjectByHandleWithTag(
                ProcessHandle,
                0x200u,
                (POBJECT_TYPE)PsProcessType,
                v9,
                0x79517350u,
                &Object,
                0LL);
        if ( v12 < 0 )
          goto LABEL_450;
        v143 = 1;
        v144 = PsGetCurrentProcess();
        v131 = (unsigned __int8 *)Object;
        if ( Object != v144 )
        {
          v145 = *((_DWORD *)Object + 628);
          if ( (v145 & 0x100) != 0 )
          {
            memset(&SubjectContext, 0, sizeof(SubjectContext));
            SeCaptureSubjectContextEx(0LL, (PEPROCESS)Object, &SubjectContext);
            IsSandboxedToken = RtlIsSandboxedToken(&SubjectContext, 1);
            SeReleaseSubjectContext(&SubjectContext);
            if ( !RtlIsSandboxedToken(0LL, v9) && IsSandboxedToken )
            {
              v131 = (unsigned __int8 *)Object;
              if ( (*((_DWORD *)Object + 628) & 0x400) != 0 )
                goto LABEL_512;
            }
            v147 = SeSinglePrivilegeCheck(SeDebugPrivilege, v9);
            v131 = (unsigned __int8 *)Object;
            if ( v147 )
              goto LABEL_512;
          }
          else if ( (v141 & 8) != 0 || (v141 & 1) != 0 || (v145 & 0x800) == 0 )
          {
LABEL_512:
            v148 = 0;
            if ( (v141 & 1) == 0 )
              v148 = 2304;
            v149 = -v142;
            v150 = (v149 != 0 ? 0x100 : 0) | 0x800;
            if ( (v141 & 8) == 0 )
              v150 = v149 != 0 ? 0x900 : 0;
            if ( ((v141 >> 1) & 1) == 0 )
              v148 |= 0x200u;
            v151 = v150 | 0x200;
            if ( ((v141 >> 1) & 1) == 0 )
              v151 = v150;
            v152 = v151 | 0x400;
            v154 = (v141 >> 2) & 1;
            v153 = v154 == 0;
            goto LABEL_548;
          }
          v12 = -1073741790;
          goto LABEL_502;
        }
      }
      if ( (v141 & 1) == 0 && (*((_DWORD *)v131 + 628) & 0x100) != 0 )
      {
        v12 = -1073741790;
        goto LABEL_502;
      }
      v155 = (v141 >> 3) & 1;
      if ( !v155 && (v141 & 1) == 0 && (*((_DWORD *)v131 + 628) & 0x800) != 0 )
      {
        v12 = -1073741790;
        goto LABEL_502;
      }
      v156 = (v141 >> 1) & 1;
      if ( v156 )
      {
        v157 = *((_DWORD *)v131 + 628);
        if ( (v157 & 0x100) != 0 && (v157 & 0x200) == 0 )
        {
          v12 = -1073741790;
          goto LABEL_502;
        }
      }
      v154 = (v141 >> 2) & 1;
      if ( v154 )
      {
        v158 = *((_DWORD *)v131 + 628);
        if ( (v158 & 0x100) != 0 && (v158 & 0x400) == 0 )
        {
          v12 = -1073741790;
          goto LABEL_502;
        }
      }
      if ( v142 )
      {
        v159 = 2304;
      }
      else
      {
        v159 = 0;
        if ( v155 )
          v159 = 2048;
      }
      v148 = (v156 ^ 1) << 9;
      v151 = v159 | 0x200;
      if ( !v156 )
        v151 = v159;
      v152 = v151 | 0x400;
      v153 = v154 == 0;
LABEL_548:
      if ( v153 )
        v152 = v151;
      if ( !v154 )
        v148 |= 0x400u;
      RtlInterlockedSetClearBits((volatile signed __int32 *)v131 + 628, v152, v148);
      v12 = 0;
      v131 = (unsigned __int8 *)Object;
      goto LABEL_502;
    case 3:
      if ( (HIDWORD(v253) & 0xFFFFFFFC) != 0 )
      {
        v12 = -1073741811;
      }
      else if ( ((HIDWORD(v253) >> 1) & 1) != 0 || (BYTE4(v253) & 1) == 0 )
      {
        if ( ((HIDWORD(v253) >> 1) & 1) == 0 || (BYTE4(v253) & 1) != 0 )
        {
          v134 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)v131);
          if ( v134 )
          {
            v12 = -1073741790;
            if ( ExEnableHandleExceptions(v134, BYTE4(v253) & 1) )
              v12 = 0;
            ObDereferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
            v131 = (unsigned __int8 *)Object;
          }
          else
          {
            v12 = -1073741558;
LABEL_450:
            v131 = (unsigned __int8 *)Object;
          }
        }
        else
        {
          v12 = -1073741811;
        }
      }
      else
      {
        v12 = -1073741811;
      }
      goto LABEL_501;
    case 4:
      v135 = HIDWORD(v253);
      if ( (HIDWORD(v253) & 0xFFFFFFF0) != 0 )
      {
        v12 = -1073741811;
        goto LABEL_501;
      }
      if ( (BYTE4(v253) & 1) != 0 && (BYTE4(v253) & 2) != 0 )
      {
        v135 = HIDWORD(v253) & 0xFFFFFFFD;
        HIDWORD(v253) &= ~2u;
      }
      if ( (v135 & 4) != 0 && (v135 & 8) != 0 )
      {
        v135 &= ~8u;
        HIDWORD(v253) = v135;
      }
      v136 = v135 & 1;
      if ( (v135 & 1) == 0 && (*((_DWORD *)v131 + 628) & 0x1000) != 0 )
      {
        v12 = -1073741790;
        goto LABEL_501;
      }
      v137 = (v135 >> 2) & 1;
      if ( !v137 && (*((_DWORD *)v131 + 652) & 2) != 0 )
      {
        v12 = -1073741790;
        goto LABEL_501;
      }
      v138 = (v135 >> 1) & 1;
      if ( !v138 && (v135 & 1) == 0 && (*((_DWORD *)v131 + 628) & 0x2000) != 0 )
      {
        v12 = -1073741790;
        goto LABEL_501;
      }
      v139 = (v135 >> 3) & 1;
      if ( !v139 && !v137 && (*((_DWORD *)v131 + 652) & 4) != 0 )
      {
        v12 = -1073741790;
        goto LABEL_501;
      }
      if ( v136 || v138 )
      {
        IsGuiThread = PsIsGuiThread(v252, v129, v130, v131);
        v131 = (unsigned __int8 *)Object;
        if ( IsGuiThread )
        {
          v12 = -1073741431;
          goto LABEL_501;
        }
      }
      v12 = 0;
      if ( v136 )
      {
        _InterlockedOr((volatile signed __int32 *)v131 + 628, 0x3000u);
      }
      else
      {
        if ( !v138 )
          goto LABEL_485;
        _InterlockedOr((volatile signed __int32 *)v131 + 628, 0x2000u);
      }
      v131 = (unsigned __int8 *)Object;
LABEL_485:
      if ( v137 )
      {
        _InterlockedOr((volatile signed __int32 *)v131 + 652, 6u);
        v131 = (unsigned __int8 *)Object;
      }
      else if ( v139 )
      {
        _InterlockedOr((volatile signed __int32 *)v131 + 652, 4u);
        v131 = (unsigned __int8 *)Object;
      }
      goto LABEL_501;
    case 6:
      if ( (HIDWORD(v253) & 0xFFFFFFFE) != 0 )
      {
        v12 = -1073741811;
      }
      else if ( (BYTE4(v253) & 1) != 0 || (*((_DWORD *)v131 + 628) & 0x80u) == 0 )
      {
        v12 = 0;
        if ( (BYTE4(v253) & 1) != 0 )
        {
          _InterlockedOr((volatile signed __int32 *)v131 + 628, 0x80u);
          v131 = (unsigned __int8 *)Object;
        }
      }
      else
      {
        v12 = -1073741790;
      }
      goto LABEL_501;
    case 7:
      if ( (HIDWORD(v253) & 0xFFFFFFF8) != 0 )
      {
        v12 = -1073741811;
      }
      else if ( (*((_DWORD *)v131 + 628) & 1) != 0 )
      {
        if ( (BYTE4(v253) & 4) != 0 )
        {
          _InterlockedOr((volatile signed __int32 *)v131 + 628, 4u);
          v12 = 0;
          v131 = (unsigned __int8 *)Object;
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
      goto LABEL_501;
    case 8:
      v160 = HIDWORD(v253);
      if ( (HIDWORD(v253) & 0xFFFFFFE0) != 0 )
      {
        v12 = -1073741811;
        goto LABEL_501;
      }
      if ( (BYTE4(v253) & 1) != 0 && ((BYTE4(v253) & 8) != 0 || (BYTE4(v253) & 0x10) != 0) )
        v160 = HIDWORD(v253) & 0xFFFFFFE7;
      if ( (v160 & 2) != 0 && (v160 & 0x10) != 0 )
        v160 &= ~0x10u;
      v161 = (v160 >> 3) & 1;
      if ( v161 && (v160 & 0x10) != 0 )
      {
        v12 = -1073741811;
        goto LABEL_501;
      }
      v162 = (v160 >> 1) & 1;
      if ( (v160 & 1) + v162 > 1 )
      {
        v12 = -1073741811;
        goto LABEL_501;
      }
      if ( (v160 & 1) != 0 )
        goto LABEL_590;
      if ( v131[2168] >= 8u && v131[2169] >= 8u )
      {
        v12 = -1073741790;
        goto LABEL_501;
      }
      if ( v162 )
        goto LABEL_590;
      LOBYTE(v129) = 6;
      if ( (unsigned int)SeCompareSigningLevels(v131[2168], v129) )
      {
        LOBYTE(v129) = 6;
        if ( (unsigned int)SeCompareSigningLevels(*((unsigned __int8 *)Object + 2169), v129) )
        {
          v12 = -1073741790;
          v131 = (unsigned __int8 *)Object;
          goto LABEL_501;
        }
      }
      v131 = (unsigned __int8 *)Object;
LABEL_590:
      if ( (*((_DWORD *)v131 + 628) & 0x3000000) != 0 && (v160 & 0x10) == 0 && !v162 && !v161 && (v160 & 1) == 0 )
      {
        v12 = -1073741790;
        goto LABEL_501;
      }
      v12 = 0;
      if ( (v160 & 1) == 0 )
      {
        if ( !v162 )
          goto LABEL_607;
        LOBYTE(v129) = 6;
        if ( !(unsigned int)SeCompareSigningLevels(v131[2168], v129) )
        {
          v12 = -1073741790;
          v131 = (unsigned __int8 *)Object;
          goto LABEL_501;
        }
        LOBYTE(v163) = 6;
        if ( (unsigned int)SeCompareSigningLevels(v163, *((unsigned __int8 *)Object + 2169)) )
          *((_BYTE *)Object + 2169) = 6;
        goto LABEL_606;
      }
      if ( v131[2168] < 8u )
      {
        v131[2168] = 8;
        v131 = (unsigned __int8 *)Object;
      }
      if ( v131[2169] < 8u )
      {
        v131[2169] = 8;
LABEL_606:
        v131 = (unsigned __int8 *)Object;
      }
LABEL_607:
      if ( v160 )
        v7 = 0x800000;
      v164 = ((v160 & 8) == 0) << 24;
      v165 = v7 | 0x1000000;
      if ( !v161 )
        v165 = v7;
      v166 = (v160 >> 4) & 1;
      if ( !v166 )
        v164 |= 0x2000000u;
      v167 = v165 | 0x2000000;
      if ( !v166 )
        v167 = v165;
      RtlInterlockedSetClearBits((volatile signed __int32 *)v131 + 628, v167, v164);
      v131 = (unsigned __int8 *)Object;
      goto LABEL_501;
    case 9:
      if ( (HIDWORD(v253) & 0xFFFFFFFC) != 0 )
      {
        v12 = -1073741811;
      }
      else if ( (BYTE4(v253) & 1) != 0 || (*((_DWORD *)v131 + 628) & 0x10000) == 0 )
      {
        if ( (BYTE4(v253) & 1) != 0 || (BYTE4(v253) & 2) != 0 || (*((_DWORD *)v131 + 628) & 0x20000) == 0 )
        {
          v12 = 0;
          if ( (BYTE4(v253) & 1) != 0 )
          {
            RtlInterlockedSetClearBits((volatile signed __int32 *)v131 + 628, 0x10000, 0x20000);
            v131 = (unsigned __int8 *)Object;
          }
          else if ( (BYTE4(v253) & 2) != 0 )
          {
            RtlInterlockedSetClearBits((volatile signed __int32 *)v131 + 628, 0x20000, 0x10000);
            v131 = (unsigned __int8 *)Object;
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
      goto LABEL_501;
    case 10:
      v168 = HIDWORD(v253);
      if ( (HIDWORD(v253) & 0xFFFFFFE0) != 0 )
      {
        v12 = -1073741811;
        goto LABEL_501;
      }
      if ( (BYTE4(v253) & 1) != 0 && (BYTE4(v253) & 8) != 0 )
        v168 = HIDWORD(v253) & 0xFFFFFFF7;
      if ( (v168 & 2) != 0 && (v168 & 0x10) != 0 )
        v168 &= ~0x10u;
      v169 = v168 & 1;
      v170 = 0x80000;
      if ( (v168 & 1) == 0 && (*((_DWORD *)v131 + 628) & 0x80000) != 0 )
        goto LABEL_429;
      v171 = (v168 >> 1) & 1;
      if ( !v171 && (*((_DWORD *)v131 + 628) & 0x200000) != 0 )
        goto LABEL_429;
      v172 = (v168 >> 2) & 1;
      if ( !v172 && (*((_DWORD *)v131 + 628) & 0x40000) != 0 )
      {
        v12 = -1073741790;
        goto LABEL_501;
      }
      v173 = (v168 >> 3) & 1;
      if ( !v173 && (v168 & 1) == 0 && (*((_DWORD *)v131 + 628) & 0x100000) != 0 )
        goto LABEL_429;
      v174 = (v168 >> 4) & 1;
      if ( v174 || v171 || (*((_DWORD *)v131 + 628) & 0x400000) == 0 )
      {
        v175 = 0;
        if ( v169 )
        {
          v175 = 0x100000;
        }
        else
        {
          v170 = 0;
          if ( v173 )
            v170 = 0x100000;
        }
        if ( v171 )
        {
          v170 |= 0x200000u;
          v175 |= 0x400000u;
        }
        else if ( v174 )
        {
          v170 |= 0x400000u;
        }
        v176 = v170 | 0x40000;
        if ( !v172 )
          v176 = v170;
        RtlInterlockedSetClearBits((volatile signed __int32 *)v131 + 628, v176, v175);
        v12 = 0;
        v131 = (unsigned __int8 *)Object;
      }
      else
      {
        v12 = -1073741790;
      }
      goto LABEL_501;
    case 13:
      v177 = HIDWORD(v253);
      if ( (HIDWORD(v253) & 0xFFFFFFF8) != 0 )
      {
        v12 = -1073741811;
        goto LABEL_501;
      }
      if ( (BYTE4(v253) & 1) == 0 && (BYTE4(v253) & 4) != 0 )
      {
        v12 = -1073741811;
        goto LABEL_501;
      }
      if ( (BYTE4(v253) & 1) != 0 && (BYTE4(v253) & 2) != 0 )
        v177 = HIDWORD(v253) & 0xFFFFFFFD;
      NoChildProcessRestrictedPolicy = PspGetNoChildProcessRestrictedPolicy((struct _KPROCESS *)v131);
      v179 = NoChildProcessRestrictedPolicy;
      v180 = v177 & 1;
      if ( (v177 & 1) == 0 && (unsigned int)(NoChildProcessRestrictedPolicy - 1) <= 1 )
      {
        v12 = -1073741790;
        v131 = (unsigned __int8 *)Object;
        goto LABEL_501;
      }
      v181 = (v177 >> 2) & 1;
      if ( v181 && v179 == 1 )
      {
        v12 = -1073741790;
        v131 = (unsigned __int8 *)Object;
        goto LABEL_501;
      }
      v182 = (v177 >> 1) & 1;
      if ( v182 )
        goto LABEL_680;
      if ( v180 )
        goto LABEL_681;
      if ( v179 == 3 )
      {
        v12 = -1073741790;
        v131 = (unsigned __int8 *)Object;
        goto LABEL_501;
      }
LABEL_680:
      if ( v180 )
      {
LABEL_681:
        if ( v181 )
          PspSetNoChildProcessRestrictedPolicy((struct _KPROCESS *)Object, 2);
        else
          PspSetNoChildProcessRestrictedPolicy((struct _KPROCESS *)Object, 1);
        v12 = 0;
        v131 = (unsigned __int8 *)Object;
        goto LABEL_501;
      }
      if ( v182 )
        PspSetNoChildProcessRestrictedPolicy((struct _KPROCESS *)Object, 3);
      goto LABEL_687;
    case 14:
      if ( (HIDWORD(v253) & 0xFFFFFFF0) != 0 )
      {
        v12 = -1073741811;
        goto LABEL_501;
      }
      if ( (BYTE4(v253) & 1) == 0 && (*((_DWORD *)v131 + 628) & 0x40000000) != 0
        || ((HIDWORD(v253) >> 1) & 1) == 0 && *((int *)v131 + 628) < 0
        || ((HIDWORD(v253) >> 3) & 1) == 0 && (*((_DWORD *)v131 + 629) & 0x2000) != 0 )
      {
        goto LABEL_429;
      }
      v188 = (HIDWORD(v253) >> 2) & 1;
      if ( v188 || (*((_DWORD *)v131 + 629) & 0x1000) == 0 )
      {
        if ( (BYTE4(v253) & 1) != 0 )
        {
          _InterlockedOr((volatile signed __int32 *)v131 + 628, 0x40000000u);
          v131 = (unsigned __int8 *)Object;
        }
        if ( ((HIDWORD(v253) >> 1) & 1) != 0 )
        {
          _InterlockedOr((volatile signed __int32 *)v131 + 628, 0x80000000);
          _InterlockedOr((volatile signed __int32 *)Object + 543, 0x200000u);
          PspWriteProcessSecurityDomain((__int64)Object, _InterlockedIncrement64(&PsNextSecurityDomain), 1);
          KeSynchronizeSecurityDomain((_KPROCESS *)Object);
          v131 = (unsigned __int8 *)Object;
        }
        if ( v188 )
        {
          _InterlockedOr((volatile signed __int32 *)v131 + 629, 0x1000u);
          v131 = (unsigned __int8 *)Object;
        }
        if ( ((HIDWORD(v253) >> 3) & 1) != 0 )
        {
          _InterlockedOr((volatile signed __int32 *)v131 + 629, 0x2000u);
          v131 = (unsigned __int8 *)Object;
        }
        v12 = 0;
      }
      else
      {
        v12 = -1073741790;
      }
      goto LABEL_501;
    case 15:
      v189 = HIDWORD(v253);
      if ( (HIDWORD(v253) & 0xFFFFFC00) == 0 )
      {
        if ( (BYTE4(v253) & 0x10) != 0 )
        {
          v189 = HIDWORD(v253) | 1;
          HIDWORD(v253) |= 1u;
        }
        if ( (v189 & 0x200) != 0 )
        {
          v189 |= 4u;
          HIDWORD(v253) = v189;
        }
        if ( (v189 & 0x40) != 0 )
        {
          v189 |= 0x20u;
          HIDWORD(v253) = v189;
        }
        v190 = (v189 >> 4) & 1;
        if ( !v190 && (*((_DWORD *)v131 + 629) & 0x100000) != 0
          || (v189 & 1) == 0 && (*((_DWORD *)v131 + 629) & 0x4000) != 0 )
        {
          goto LABEL_429;
        }
        if ( (v189 & 1) != 0 && (*((_DWORD *)v131 + 629) & 0x4000) == 0 )
        {
          v12 = -1073741790;
          goto LABEL_501;
        }
        v191 = (v189 >> 9) & 1;
        if ( v191 )
        {
          if ( *((int *)v131 + 629) >= 0 )
            goto LABEL_429;
        }
        v192 = (v189 >> 2) & 1;
        if ( !v192 && (*((_DWORD *)v131 + 629) & 0x20000) != 0 )
          goto LABEL_429;
        if ( v192 && (*((_DWORD *)v131 + 629) & 0x20000) == 0 )
        {
          v12 = -1073741790;
          goto LABEL_501;
        }
        v193 = (v189 >> 6) & 1;
        if ( !v193 && (*((_DWORD *)v131 + 629) & 0x400000) != 0 )
          goto LABEL_429;
        v194 = (v189 >> 5) & 1;
        if ( !v194 && (*((_DWORD *)v131 + 629) & 0x200000) != 0 )
        {
          v12 = -1073741790;
          goto LABEL_501;
        }
        v195 = (v189 >> 8) & 1;
        if ( !v195 && (*((_DWORD *)v131 + 629) & 0x40000000) != 0 )
        {
          v12 = -1073741790;
          goto LABEL_501;
        }
        if ( ((v189 >> 1) & 1) == 0 && (*((_DWORD *)v131 + 629) & 0x8000) != 0
          || ((v189 >> 1) & 1) != 0 && (*((_DWORD *)v131 + 629) & 0x8000) == 0
          || ((v189 >> 3) & 1) == 0 && (*((_DWORD *)v131 + 629) & 0x40000) != 0
          || ((v189 >> 3) & 1) != 0 && (*((_DWORD *)v131 + 629) & 0x40000) == 0
          || (v196 = (v189 >> 7) & 1) == 0 && (*((_DWORD *)v131 + 629) & 0x800000) != 0 )
        {
LABEL_429:
          v12 = -1073741790;
          goto LABEL_501;
        }
        if ( v196 && (*((_DWORD *)v131 + 629) & 0x800000) == 0 )
        {
          v12 = -1073741790;
          goto LABEL_501;
        }
        if ( v190 )
        {
          _InterlockedOr((volatile signed __int32 *)v131 + 629, 0x100000u);
          v131 = (unsigned __int8 *)Object;
        }
        if ( !v191 && v192 )
        {
          _InterlockedAnd((volatile signed __int32 *)v131 + 629, 0x7FFFFFFFu);
          v131 = (unsigned __int8 *)Object;
        }
        if ( v193 )
        {
          _InterlockedOr((volatile signed __int32 *)v131 + 629, 0x200000u);
          _InterlockedOr((volatile signed __int32 *)Object + 629, 0x400000u);
        }
        else
        {
          if ( !v194 )
          {
LABEL_778:
            if ( v195 )
            {
              _InterlockedOr((volatile signed __int32 *)v131 + 629, 0x40000000u);
              v131 = (unsigned __int8 *)Object;
            }
            v12 = 0;
            goto LABEL_501;
          }
          _InterlockedOr((volatile signed __int32 *)v131 + 629, 0x200000u);
        }
        v131 = (unsigned __int8 *)Object;
        goto LABEL_778;
      }
      v12 = -1073741811;
LABEL_501:
      v143 = 0;
LABEL_502:
      if ( v143 != 1 )
        return v12;
      ObfDereferenceObjectWithTag(v131, 0x79517350u);
      return v12;
    case 16:
      v183 = HIDWORD(v253);
      if ( (HIDWORD(v253) & 0xFFFFFFFC) != 0 )
      {
        v12 = -1073741811;
        goto LABEL_501;
      }
      if ( (BYTE4(v253) & 1) != 0 && (BYTE4(v253) & 2) != 0 )
        v183 = HIDWORD(v253) & 0xFFFFFFFD;
      RedirectionTrustPolicy = PspGetRedirectionTrustPolicy((struct _KPROCESS *)v131);
      v185 = v183 & 1;
      if ( (v183 & 1) == 0 && RedirectionTrustPolicy == 1 )
      {
        v12 = -1073741790;
        v131 = (unsigned __int8 *)Object;
        goto LABEL_501;
      }
      v186 = (v183 >> 1) & 1;
      if ( v186 )
        goto LABEL_700;
      if ( v185 )
        goto LABEL_701;
      if ( RedirectionTrustPolicy == 2 )
      {
        v12 = -1073741790;
        v131 = (unsigned __int8 *)Object;
      }
      else
      {
LABEL_700:
        if ( v185 )
        {
LABEL_701:
          v187 = 1;
        }
        else
        {
          if ( !v186 )
          {
LABEL_687:
            v12 = 0;
            v131 = (unsigned __int8 *)Object;
            goto LABEL_501;
          }
          v187 = 2;
        }
        PspSetRedirectionTrustPolicy((struct _KPROCESS *)Object, v187);
        v12 = 0;
        v131 = (unsigned __int8 *)Object;
      }
      goto LABEL_501;
    default:
      goto LABEL_500;
  }
}
