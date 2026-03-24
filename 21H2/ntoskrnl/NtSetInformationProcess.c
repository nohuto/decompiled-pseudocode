/*
 * XREFs of NtSetInformationProcess @ 0x14070A4B0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     KeUnstackDetachProcess @ 0x1402075C0 (KeUnstackDetachProcess.c)
 *     RtlInterlockedSetClearBits @ 0x140251F50 (RtlInterlockedSetClearBits.c)
 *     MmGetSessionId @ 0x140253550 (MmGetSessionId.c)
 *     KeDelayExecutionThread @ 0x140257490 (KeDelayExecutionThread.c)
 *     KeEnterCriticalRegionThread @ 0x14025B380 (KeEnterCriticalRegionThread.c)
 *     KeStackAttachProcess @ 0x14025C110 (KeStackAttachProcess.c)
 *     KeQueryGroupMaskProcess @ 0x14025C828 (KeQueryGroupMaskProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x14027C4F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14027C9B0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseExtensionTable @ 0x14029F2DC (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x14029F2F8 (ExGetExtensionTable.c)
 *     RtlInsertDynamicFunctionTable @ 0x1402A75C8 (RtlInsertDynamicFunctionTable.c)
 *     RtlRemoveDynamicFunctionTable @ 0x1402AC82C (RtlRemoveDynamicFunctionTable.c)
 *     KeSynchronizeSecurityDomain @ 0x1402BC338 (KeSynchronizeSecurityDomain.c)
 *     PspWriteProcessSecurityDomain @ 0x1402BC4B0 (PspWriteProcessSecurityDomain.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x1402BD264 (ExCpuSetResourceManagerAccessCheck.c)
 *     MiCreateSystemWsles @ 0x1402C0BD0 (MiCreateSystemWsles.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     PspLockUnlockProcessExclusive @ 0x1402C3004 (PspLockUnlockProcessExclusive.c)
 *     PtrToUlong @ 0x1402C7CC0 (PtrToUlong.c)
 *     PspUnlockProcessExclusive @ 0x1402CB978 (PspUnlockProcessExclusive.c)
 *     KeSetExecuteOptions @ 0x1402CBD4C (KeSetExecuteOptions.c)
 *     KeInitializeGate @ 0x1402D2C10 (KeInitializeGate.c)
 *     MmGetDefaultPagePriority @ 0x1402D47AC (MmGetDefaultPagePriority.c)
 *     RtlStringCbCopyA @ 0x1402D6260 (RtlStringCbCopyA.c)
 *     KeBoostPriorityThread @ 0x1402E2510 (KeBoostPriorityThread.c)
 *     PspLockProcessExclusive @ 0x1402E98B0 (PspLockProcessExclusive.c)
 *     KeIsUserCetAllowed @ 0x1402E98D8 (KeIsUserCetAllowed.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1402E9944 (KeSetPriorityAndQuantumProcess.c)
 *     MmSetMemoryPriorityProcess @ 0x1402E9DB8 (MmSetMemoryPriorityProcess.c)
 *     PsSetIoPriorityThread @ 0x1402F72F0 (PsSetIoPriorityThread.c)
 *     PsSetPagePriorityThread @ 0x1402F75E4 (PsSetPagePriorityThread.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x1403169C0 (PsChargeProcessNonPagedPoolQuota.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403183E0 (PsReturnProcessNonPagedPoolQuota.c)
 *     PsGetCurrentProcess @ 0x14033B600 (PsGetCurrentProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x14034B140 (ObfDereferenceObjectWithTag.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140353020 (ExAllocatePoolWithQuotaTag.c)
 *     IoBoostThreadIoPriority @ 0x140358630 (IoBoostThreadIoPriority.c)
 *     KeVerifyGroupAffinity @ 0x1403781B4 (KeVerifyGroupAffinity.c)
 *     MmRemoveExecuteGrants @ 0x14037ED20 (MmRemoveExecuteGrants.c)
 *     KeSetCpuSetsProcess @ 0x1403C5FB4 (KeSetCpuSetsProcess.c)
 *     xKdEnumerateDebuggingDevices @ 0x1403D0440 (xKdEnumerateDebuggingDevices.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     MmGetMaximumUserAddress @ 0x1403F38C8 (MmGetMaximumUserAddress.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     IoRevokeHandlesForProcess @ 0x1405071D0 (IoRevokeHandlesForProcess.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x14051C938 (KeRecomputeCpuSetAffinityProcess.c)
 *     MmReleaseCommitForMemResetPages @ 0x14052CCF4 (MmReleaseCommitForMemResetPages.c)
 *     MmSetCommitReleaseEligibility @ 0x14052CF2C (MmSetCommitReleaseEligibility.c)
 *     PspLockProcessSharedUnsafe @ 0x1405818DC (PspLockProcessSharedUnsafe.c)
 *     PspUnlockProcessSharedUnsafe @ 0x140581B50 (PspUnlockProcessSharedUnsafe.c)
 *     PspGetRedirectionTrustPolicy @ 0x1405CF638 (PspGetRedirectionTrustPolicy.c)
 *     PspSetRedirectionTrustPolicy @ 0x1405CF6A4 (PspSetRedirectionTrustPolicy.c)
 *     PspProcessDynamicEnforcedAddressRanges @ 0x1405CF6F4 (PspProcessDynamicEnforcedAddressRanges.c)
 *     LpcRequestPort @ 0x1405E3D10 (LpcRequestPort.c)
 *     ObReferenceProcessHandleTable @ 0x1405F57B4 (ObReferenceProcessHandleTable.c)
 *     PspWritePebAffinityInfo @ 0x140612654 (PspWritePebAffinityInfo.c)
 *     SeSinglePrivilegeCheck @ 0x140627640 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x1406547A0 (ProbeForWrite.c)
 *     SeReleaseSubjectContext @ 0x1406568F0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x140657C60 (SeCaptureSubjectContextEx.c)
 *     MmAllocateUserStack @ 0x140694420 (MmAllocateUserStack.c)
 *     ObDereferenceProcessHandleTable @ 0x14069C640 (ObDereferenceProcessHandleTable.c)
 *     PspCombineSecurityDomains @ 0x1406A0F84 (PspCombineSecurityDomains.c)
 *     PspSetQuotaLimits @ 0x1406A5F94 (PspSetQuotaLimits.c)
 *     ExEnableRaiseUMExceptionOnInvalidHandleClose @ 0x1406AC9A4 (ExEnableRaiseUMExceptionOnInvalidHandleClose.c)
 *     PspSetProcessPriorityClass @ 0x1406B3F80 (PspSetProcessPriorityClass.c)
 *     PoSetProcessEnergyTrackingState @ 0x1406B7FB0 (PoSetProcessEnergyTrackingState.c)
 *     ExEnableHandleExceptions @ 0x1406B959C (ExEnableHandleExceptions.c)
 *     SeSetVirtualizationToken @ 0x1406BEC14 (SeSetVirtualizationToken.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x1406C0098 (PspSetNoChildProcessRestrictedPolicy.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x1406C2928 (PspGetNoChildProcessRestrictedPolicy.c)
 *     PsIsSystemWideMitigationOptionSet @ 0x1406C299C (PsIsSystemWideMitigationOptionSet.c)
 *     PsQuitNextProcessThread @ 0x1406C39B0 (PsQuitNextProcessThread.c)
 *     PsSetProcessPriorityByClass @ 0x1406D9930 (PsSetProcessPriorityByClass.c)
 *     PspSetProcessForegroundBackgroundRequest @ 0x1406D9960 (PspSetProcessForegroundBackgroundRequest.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1406F0B80 (ObReferenceObjectByHandleWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1406F0BC0 (ObReferenceObjectByHandle.c)
 *     RtlIsSandboxedToken @ 0x1407054C0 (RtlIsSandboxedToken.c)
 *     PsReferencePrimaryToken @ 0x140706D00 (PsReferencePrimaryToken.c)
 *     KeSetAutoAlignmentProcess @ 0x14070A2C4 (KeSetAutoAlignmentProcess.c)
 *     PsGetNextProcessThread @ 0x14070A2F0 (PsGetNextProcessThread.c)
 *     PspSetProcessDefaultHardErrorMode @ 0x14070A3F0 (PspSetProcessDefaultHardErrorMode.c)
 *     MmProcessWorkingSetControl @ 0x14070EE14 (MmProcessWorkingSetControl.c)
 *     KeSetDisableBoostProcess @ 0x1407341DC (KeSetDisableBoostProcess.c)
 *     EtwSetProcessTelemetryCoverage @ 0x140771BB8 (EtwSetProcessTelemetryCoverage.c)
 *     KeSetDisableBoostThread @ 0x140772B7C (KeSetDisableBoostThread.c)
 *     PsSetProcessFaultInformation @ 0x140772D30 (PsSetProcessFaultInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BDF0 (ExRaiseDatatypeMisalignment.c)
 *     PspSetProcessAffinityUpdateMode @ 0x14077CE80 (PspSetProcessAffinityUpdateMode.c)
 *     SeCompareSigningLevels @ 0x14077F240 (SeCompareSigningLevels.c)
 *     SeCheckPrivilegedObject @ 0x14078DE60 (SeCheckPrivilegedObject.c)
 *     PspAssignPrimaryToken @ 0x1407BBA40 (PspAssignPrimaryToken.c)
 *     ExSystemExceptionFilter @ 0x1407D4F10 (ExSystemExceptionFilter.c)
 *     KeSetCheckStackExtentsProcess @ 0x1408BAD7C (KeSetCheckStackExtentsProcess.c)
 *     MmValidateUserCallTarget @ 0x1408D7E78 (MmValidateUserCallTarget.c)
 *     ObSetProcessDeviceMap @ 0x1408DF68C (ObSetProcessDeviceMap.c)
 *     PsIsGuiThread @ 0x1409078A4 (PsIsGuiThread.c)
 *     PsSetProcessHandleTracingInformation @ 0x140907978 (PsSetProcessHandleTracingInformation.c)
 *     PspEnableAltSystemCallHandling @ 0x140907C18 (PspEnableAltSystemCallHandling.c)
 *     PspProcessDynamicEHContinuationTargets @ 0x140907D04 (PspProcessDynamicEHContinuationTargets.c)
 *     PspSetProcessAffinitySafe @ 0x1409085C4 (PspSetProcessAffinitySafe.c)
 *     PspFreeUserFiberShadowStack @ 0x14090A174 (PspFreeUserFiberShadowStack.c)
 *     PspSetupUserFiberShadowStack @ 0x14090A500 (PspSetupUserFiberShadowStack.c)
 *     PsIumEnableOnDemandDebugWithResponse @ 0x14090C984 (PsIumEnableOnDemandDebugWithResponse.c)
 *     SeCodeIntegritySetInformationProcess @ 0x14091BE80 (SeCodeIntegritySetInformationProcess.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 *     ExAllocatePool2 @ 0x1409B41B0 (ExAllocatePool2.c)
 */

NTSTATUS __fastcall NtSetInformationProcess(HANDLE Handle, ULONG a2, unsigned __int64 a3, unsigned int a4)
{
  size_t v4; // rdi
  __int64 v5; // rbx
  unsigned int v7; // r14d
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int8 v9; // r15
  int v10; // eax
  NTSTATUS result; // eax
  int v12; // esi
  _DWORD *PoolWithTag; // rax
  void *v14; // rbx
  PVOID v15; // rcx
  int v16; // ebx
  unsigned int v17; // eax
  char v18; // di
  PVOID v19; // rcx
  char v20; // al
  __int16 v21; // bx
  int v22; // edi
  char v23; // bl
  unsigned int v24; // edi
  _QWORD *i; // rbx
  __int64 v26; // r8
  _DWORD *v27; // r9
  unsigned int v28; // ebx
  unsigned int v29; // r12d
  NTSTATUS v30; // esi
  unsigned __int64 v31; // rdx
  signed __int64 *v32; // roff
  signed __int64 v33; // r15
  signed __int64 v34; // rax
  struct _DMA_ADAPTER *v35; // r15
  int v36; // eax
  int v37; // eax
  int v38; // ebx
  PVOID v39; // rcx
  unsigned __int8 v40; // bl
  __int64 v41; // r13
  __int64 v42; // rax
  __int16 v43; // r8
  int v44; // ebx
  unsigned int GroupMaskProcess; // eax
  __int64 v46; // rdx
  __int64 v47; // r13
  __int64 v48; // r8
  _DWORD *v49; // r9
  BOOL v50; // edi
  __int64 v51; // r13
  PVOID v52; // rcx
  _QWORD *j; // rbx
  HANDLE v54; // rbx
  int v55; // ebx
  int v56; // ebx
  int v57; // ecx
  unsigned int v58; // eax
  unsigned __int64 v59; // r12
  volatile signed __int32 *v60; // r8
  signed __int32 v61; // eax
  int v62; // r9d
  signed __int32 v63; // edx
  KSPIN_LOCK *v64; // rbx
  int v65; // r14d
  int v66; // ebx
  _KPROCESS *CurrentProcess; // rax
  unsigned int v68; // ebx
  unsigned int v69; // ebx
  volatile signed __int32 *v70; // r8
  signed __int32 v71; // eax
  signed __int32 v72; // edx
  _QWORD *v73; // rdi
  int v74; // ebx
  _DWORD *PoolWithQuotaTag; // r15
  __int64 v76; // r8
  unsigned int v77; // ecx
  _DWORD *v78; // rdx
  _KPROCESS *v79; // rax
  _KPROCESS *v80; // r8
  unsigned __int64 v81; // rax
  __int16 v82; // cx
  __int64 v83; // rcx
  _QWORD *v84; // rdx
  PVOID k; // rcx
  _QWORD *v86; // rbx
  __int64 v87; // rdi
  char *v88; // rbx
  char *v89; // rax
  char *v90; // r13
  __int64 v91; // rdx
  __int64 v92; // r8
  volatile void **v93; // rdi
  __int64 v94; // rdx
  const void *v95; // rdx
  __int64 v96; // rdx
  __int64 v97; // rdi
  __int64 v98; // rcx
  unsigned __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rbx
  unsigned int v102; // eax
  unsigned __int64 v103; // r8
  unsigned __int64 v104; // rax
  unsigned __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // rax
  unsigned __int64 v108; // rbx
  _KPROCESS *v109; // rdi
  BOOLEAN v110; // al
  BOOLEAN v111; // al
  struct _EX_RUNDOWN_REF *v112; // rcx
  __int64 v113; // rax
  __int16 v114; // r8
  bool v115; // r9
  unsigned __int64 v116; // r8
  __int16 v117; // r9
  __int64 v118; // r13
  PVOID v119; // r8
  volatile signed __int32 *v120; // rcx
  __int16 v121; // r9
  __int64 v122; // rcx
  __int64 *v123; // rdx
  _QWORD *v124; // rsi
  int v125; // r9d
  int v126; // ebx
  int v127; // edi
  struct _DMA_ADAPTER *v128; // rbx
  unsigned __int64 v129; // rbx
  __int64 v130; // rdx
  __int64 v131; // r8
  unsigned __int8 *v132; // r9
  int v133; // edx
  int v134; // ecx
  unsigned __int64 v135; // rax
  unsigned int v136; // ebx
  int v137; // r12d
  int v138; // edi
  int v139; // r15d
  int v140; // ebx
  char IsGuiThread; // al
  unsigned int v142; // ebx
  int v143; // edi
  char v144; // r12
  _KPROCESS *v145; // rax
  int v146; // eax
  bool IsSandboxedToken; // si
  BOOLEAN v148; // al
  int v149; // r8d
  int v150; // edi
  int v151; // edx
  int v152; // eax
  int v153; // edx
  bool v154; // zf
  int v155; // ebx
  int v156; // edx
  int v157; // ecx
  int v158; // eax
  int v159; // eax
  int v160; // r11d
  unsigned int v161; // ebx
  int v162; // r12d
  int v163; // edi
  __int64 v164; // rcx
  int v165; // r8d
  int v166; // ecx
  int v167; // ebx
  int v168; // edx
  unsigned int v169; // ecx
  int v170; // edi
  int v171; // r10d
  int v172; // edx
  int v173; // ebx
  int v174; // r11d
  int v175; // ecx
  int v176; // eax
  int v177; // edx
  unsigned int v178; // ebx
  int NoChildProcessRestrictedPolicy; // eax
  int v180; // r8d
  int v181; // edx
  int v182; // eax
  int v183; // ebx
  unsigned int v184; // ebx
  int RedirectionTrustPolicy; // eax
  int v186; // ecx
  int v187; // ebx
  int v188; // edx
  int v189; // ebx
  unsigned int v190; // ecx
  int v191; // r11d
  int v192; // ebx
  int v193; // edx
  int v194; // edi
  int v195; // esi
  int v196; // r15d
  int v197; // ecx
  int v198; // ebx
  unsigned __int64 v199; // rax
  void *v200; // rdi
  int v201; // eax
  void *v202; // rcx
  unsigned __int64 v203; // rdx
  PVOID v204; // rax
  BOOL v205; // edi
  __int64 v206; // r8
  _DWORD *v207; // r9
  unsigned int v208; // edi
  char v209; // bl
  int v210; // ebx
  unsigned __int64 v211; // rax
  char v212; // bl
  int v213; // ecx
  unsigned __int64 ExtensionTable; // rbx
  NTSTATUS v215; // edi
  int v216; // ebx
  unsigned int v217; // eax
  int v218; // ebx
  __int128 v219; // xmm1
  const char *v220; // r8
  int v221; // eax
  unsigned int v222; // ecx
  unsigned int v223; // ecx
  int v224; // ebx
  unsigned int v225; // ebx
  unsigned __int64 v226; // rax
  HANDLE v227; // rbx
  HANDLE v228; // rbx
  _KPROCESS *v229; // rax
  unsigned __int64 v230; // rdx
  __int64 v231; // rcx
  __int64 *v232; // r8
  int v233; // ebx
  int v234; // eax
  unsigned int v235; // eax
  int v236; // eax
  unsigned int v237; // eax
  int v238; // ebx
  _DWORD *v239; // r12
  unsigned int v240; // eax
  const void *v241; // rbx
  size_t v242; // rdi
  _KPROCESS *v243; // rax
  struct _DMA_ADAPTER *v244; // rcx
  _DWORD *Pool2; // rax
  unsigned int v246; // ecx
  const void *v247; // rbx
  size_t v248; // rdi
  _KPROCESS *v249; // rax
  _DWORD *v250; // rax
  signed __int32 v251[8]; // [rsp+0h] [rbp-548h] BYREF
  PVOID Object; // [rsp+40h] [rbp-508h] BYREF
  unsigned int v253; // [rsp+48h] [rbp-500h]
  int v254; // [rsp+4Ch] [rbp-4FCh]
  struct _KTHREAD *v255; // [rsp+50h] [rbp-4F8h]
  HANDLE v256; // [rsp+58h] [rbp-4F0h]
  unsigned int v257; // [rsp+60h] [rbp-4E8h]
  int v258; // [rsp+68h] [rbp-4E0h]
  HANDLE Handlea; // [rsp+70h] [rbp-4D8h]
  unsigned int v260; // [rsp+78h] [rbp-4D0h]
  __int16 v261; // [rsp+7Ch] [rbp-4CCh]
  ULONG Alignment; // [rsp+80h] [rbp-4C8h]
  char v263; // [rsp+84h] [rbp-4C4h]
  char v264; // [rsp+85h] [rbp-4C3h]
  char v265; // [rsp+86h] [rbp-4C2h]
  char v266; // [rsp+88h] [rbp-4C0h]
  int v267; // [rsp+8Ch] [rbp-4BCh]
  char *v268; // [rsp+90h] [rbp-4B8h]
  __int64 v269; // [rsp+98h] [rbp-4B0h]
  _DWORD v270[2]; // [rsp+A0h] [rbp-4A8h] BYREF
  __int64 v271; // [rsp+A8h] [rbp-4A0h] BYREF
  PVOID v272; // [rsp+B0h] [rbp-498h] BYREF
  PVOID v273; // [rsp+B8h] [rbp-490h] BYREF
  __int64 v274; // [rsp+C0h] [rbp-488h]
  _DWORD *v275; // [rsp+C8h] [rbp-480h]
  PVOID v276; // [rsp+D0h] [rbp-478h] BYREF
  __int64 v277; // [rsp+D8h] [rbp-470h] BYREF
  __int64 v278; // [rsp+E0h] [rbp-468h]
  __int128 v279; // [rsp+E8h] [rbp-460h]
  unsigned int v280; // [rsp+F8h] [rbp-450h]
  int v281; // [rsp+FCh] [rbp-44Ch]
  unsigned int v282; // [rsp+100h] [rbp-448h]
  int v283; // [rsp+104h] [rbp-444h] BYREF
  PVOID v284; // [rsp+108h] [rbp-440h] BYREF
  void *Src[2]; // [rsp+110h] [rbp-438h] BYREF
  volatile void *Address[2]; // [rsp+120h] [rbp-428h]
  volatile void *v287[2]; // [rsp+130h] [rbp-418h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+140h] [rbp-408h]
  PVOID v289; // [rsp+148h] [rbp-400h]
  __int64 v290; // [rsp+150h] [rbp-3F8h]
  __int64 v291; // [rsp+158h] [rbp-3F0h]
  PVOID v292; // [rsp+160h] [rbp-3E8h] BYREF
  PVOID v293; // [rsp+168h] [rbp-3E0h] BYREF
  NTSTRSAFE_PCSTR pszSrc[2]; // [rsp+170h] [rbp-3D8h] BYREF
  __int64 v295; // [rsp+180h] [rbp-3C8h]
  int v296; // [rsp+188h] [rbp-3C0h]
  int v297; // [rsp+18Ch] [rbp-3BCh]
  int v298; // [rsp+190h] [rbp-3B8h]
  int v299; // [rsp+194h] [rbp-3B4h]
  int v300; // [rsp+198h] [rbp-3B0h]
  BOOL v301; // [rsp+19Ch] [rbp-3ACh]
  int v302; // [rsp+1A0h] [rbp-3A8h]
  int v303; // [rsp+1A4h] [rbp-3A4h]
  int v304; // [rsp+1A8h] [rbp-3A0h]
  HANDLE v305; // [rsp+1B0h] [rbp-398h]
  unsigned __int64 v306; // [rsp+1B8h] [rbp-390h]
  _DWORD *v307; // [rsp+1C0h] [rbp-388h]
  int v308; // [rsp+1C8h] [rbp-380h]
  __int64 v309; // [rsp+1D0h] [rbp-378h] BYREF
  HANDLE v310; // [rsp+1D8h] [rbp-370h]
  int v311; // [rsp+1E0h] [rbp-368h]
  int v312; // [rsp+1E4h] [rbp-364h]
  int v313; // [rsp+1E8h] [rbp-360h]
  int v314; // [rsp+1ECh] [rbp-35Ch]
  int v315; // [rsp+1F0h] [rbp-358h]
  __int128 v316; // [rsp+1F8h] [rbp-350h]
  __int128 v317; // [rsp+208h] [rbp-340h] BYREF
  __int128 v318; // [rsp+218h] [rbp-330h] BYREF
  __int64 v319; // [rsp+228h] [rbp-320h]
  __m256i v320; // [rsp+230h] [rbp-318h]
  _DWORD v321[2]; // [rsp+250h] [rbp-2F8h] BYREF
  __int128 v322; // [rsp+258h] [rbp-2F0h]
  __int128 v323; // [rsp+268h] [rbp-2E0h]
  __int64 v324; // [rsp+278h] [rbp-2D0h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+2A0h] [rbp-2A8h] BYREF
  HANDLE v326; // [rsp+2C0h] [rbp-288h]
  unsigned __int64 v327; // [rsp+2D0h] [rbp-278h]
  HANDLE v328; // [rsp+2D8h] [rbp-270h]
  HANDLE v329; // [rsp+2E0h] [rbp-268h]
  void **v330; // [rsp+2E8h] [rbp-260h]
  HANDLE v331; // [rsp+2F0h] [rbp-258h] BYREF
  int v332; // [rsp+2F8h] [rbp-250h]
  __int128 v333; // [rsp+300h] [rbp-248h] BYREF
  __int128 v334; // [rsp+310h] [rbp-238h]
  struct _KAPC_STATE ApcState; // [rsp+320h] [rbp-228h] BYREF
  _OWORD P[2]; // [rsp+350h] [rbp-1F8h] BYREF
  __int64 v337; // [rsp+370h] [rbp-1D8h]
  _OWORD v338[9]; // [rsp+380h] [rbp-1C8h] BYREF
  char v339[160]; // [rsp+410h] [rbp-138h] BYREF
  char pszDest[16]; // [rsp+4B0h] [rbp-98h] BYREF
  __int128 v341; // [rsp+4C0h] [rbp-88h]
  __int128 v342; // [rsp+4D0h] [rbp-78h]
  __int128 v343; // [rsp+4E0h] [rbp-68h]
  char v344; // [rsp+4F0h] [rbp-58h]

  v4 = a4;
  v5 = a3;
  Alignment = a2;
  v278 = a3;
  v258 = a4;
  v7 = 0;
  Object = 0LL;
  v333 = 0LL;
  v257 = 0;
  v261 = 0;
  v310 = 0LL;
  v284 = 0LL;
  v306 = 0LL;
  v270[0] = 0;
  v334 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v255 = CurrentThread;
  v9 = CurrentThread->$6BEBF485330D18E60173AA6D991B35AC::gap0[10];
  if ( v9 )
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
      case 0x5Du:
        v10 = 4;
        break;
      case 0x5Fu:
        v10 = 8;
        break;
      case 0x57u:
        v10 = 1;
        break;
      case 0x64u:
        v10 = 1;
        break;
      case 0x65u:
        v10 = 8;
        break;
      default:
        v10 = 4;
        if ( a2 == 102 )
          v10 = 8;
        break;
    }
    if ( a4 )
    {
      if ( ((v10 - 1) & (unsigned int)a3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a3 + a4 > 0x7FFFFFFF0000LL || a3 + a4 < a3 )
        MEMORY[0x7FFFFFFF0000] = 0;
      CurrentThread = v255;
    }
  }
  switch ( a2 )
  {
    case 1u:
      return PspSetQuotaLimits(Handle, a3, a4, v9);
    case 5u:
      if ( a4 != 4 )
        return -1073741820;
      v16 = *(_DWORD *)a3;
      v311 = v16;
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
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v19 = Object;
      if ( v16 > *((char *)Object + 640) )
      {
        v20 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                SeIncreaseBasePriorityPrivilege,
                Handle,
                512LL,
                v9);
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
      v312 = *(_DWORD *)a3;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      v12 = result;
      if ( result < 0 )
        return result;
      if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 139) )
        goto LABEL_115;
      for ( i = PsGetNextProcessThread((__int64)Object, 0LL); i; i = PsGetNextProcessThread((__int64)Object, i) )
        KeBoostPriorityThread((__int64)i, v24, v26, v27);
      goto LABEL_114;
    case 8u:
      if ( a4 == 8 )
      {
        v29 = 0;
        v280 = 0;
        Handlea = *(HANDLE *)a3;
        v305 = Handlea;
      }
      else
      {
        if ( a4 != 16 )
          return -1073741820;
        Handlea = *(HANDLE *)a3;
        v305 = Handlea;
        v280 = *(_DWORD *)(a3 + 8);
        v29 = v280;
        if ( (v280 & 0xFFFFFFF8) != 0 )
          return -1073741811;
      }
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
        return -1073741727;
      v276 = 0LL;
      result = ObReferenceObjectByHandle(Handlea, 0, LpcPortObjectType, v9, &v276, 0LL);
      DmaAdapter = (PADAPTER_OBJECT)v276;
      if ( result < 0 )
        return result;
      v30 = ObReferenceObjectByHandleWithTag(Handle, 0x800u, (POBJECT_TYPE)PsProcessType, v9, 0x79517350u, &Object, 0LL);
      if ( v30 < 0 )
      {
        HalPutDmaAdapter((PADAPTER_OBJECT)v276);
        return v30;
      }
      v31 = (unsigned __int64)v276 | v29;
      v275 = (_DWORD *)v31;
      v32 = (signed __int64 *)((char *)Object + 1200);
      _m_prefetchw((char *)Object + 1200);
      v33 = *v32;
      do
      {
        Handlea = (HANDLE)v33;
        if ( (_DWORD)v4 == 16 )
        {
          *(_DWORD *)(v5 + 8) = v33 & 7;
        }
        else if ( (v33 & 7) != 0 )
        {
          HalPutDmaAdapter(DmaAdapter);
          goto LABEL_133;
        }
        v34 = _InterlockedCompareExchange64((volatile signed __int64 *)Object + 150, v31, v33);
        v154 = v33 == v34;
        v33 = v34;
      }
      while ( !v154 );
      if ( v34 )
      {
        v322 = 0LL;
        v323 = 0LL;
        v35 = (struct _DMA_ADAPTER *)(v34 & 0xFFFFFFFFFFFFFFF8uLL);
        v321[0] = 3145736;
        v321[1] = 13;
        v324 = *((_QWORD *)Object + 136);
        while ( 1 )
        {
          v36 = LpcRequestPort((__int64)v35, (__int64)v321);
          if ( v36 != -1073741801 && v36 != -1073741670 )
            break;
          KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&PspShortTime);
        }
        PspLockUnlockProcessExclusive((__int64)Object, (__int64)v255);
        HalPutDmaAdapter(v35);
      }
      goto LABEL_141;
    case 9u:
      if ( a4 != 16 )
        return -1073741820;
      v328 = *(HANDLE *)a3;
      return PspAssignPrimaryToken(CurrentThread, v9, Handle);
    case 0xAu:
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x220u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
        goto LABEL_145;
      return result;
    case 0xBu:
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x220u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
        goto LABEL_145;
      return result;
    case 0xCu:
      if ( a4 != 4 )
        return -1073741820;
      v28 = *(_DWORD *)a3;
      v313 = *(_DWORD *)a3;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      PspSetProcessDefaultHardErrorMode((__int64)Object, (__int64)v255, v28);
      goto LABEL_88;
    case 0xDu:
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
LABEL_145:
      v37 = xKdEnumerateDebuggingDevices();
      goto LABEL_146;
    case 0xFu:
    case 0x2Au:
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
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
    case 0x10u:
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
        return -1073741727;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
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
    case 0x11u:
      if ( a4 != 1 )
        return -1073741820;
      v40 = *(_BYTE *)a3;
      v263 = *(_BYTE *)a3;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v41 = (__int64)v255;
      PspLockProcessExclusive((__int64)Object, (__int64)v255);
      if ( v40 )
        *((_DWORD *)Object + 382) |= 4u;
      else
        *((_DWORD *)Object + 382) &= ~4u;
      v42 = *((_QWORD *)Object + 176);
      if ( v42 )
      {
        v43 = *(_WORD *)(v42 + 8);
        if ( v43 == 332 || v43 == 452 )
          v40 = 1;
      }
      KeSetAutoAlignmentProcess((__int64)Object, v40);
      PspUnlockProcessExclusive((__int64)Object, v41);
      goto LABEL_88;
    case 0x12u:
      if ( a4 != 2 )
        return -1073741820;
      v21 = *(_WORD *)a3;
      v261 = *(_WORD *)a3;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v22 = PspSetProcessPriorityClass((__int64)Object, HIBYTE(v261), (__int64)Handle, v9);
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
      v44 = *(_DWORD *)a3;
      v308 = *(_DWORD *)a3;
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
        return -1073741727;
      v12 = ObReferenceObjectByHandleWithTag(Handle, 0x200u, (POBJECT_TYPE)PsProcessType, v9, 0x79517350u, &Object, 0LL);
      if ( v12 < 0 )
        return v12;
      if ( *((_QWORD *)Object + 280) )
      {
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return -1073741790;
      }
      if ( v44 )
        _InterlockedOr((volatile signed __int32 *)Object + 281, 0x1000000u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 281, 0xFEFFFFFF);
      goto LABEL_79;
    case 0x15u:
      if ( a4 == 8 )
      {
        *(_QWORD *)&v333 = *(_QWORD *)a3;
        if ( !(_QWORD)v333 )
          return -1073741811;
      }
      else
      {
        if ( a4 != 16 )
          return -1073741820;
        v333 = *(_OWORD *)a3;
        if ( !KeVerifyGroupAffinity((__int64)&v333, 0) )
          return -1073741811;
      }
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
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
          v257 = GroupMaskProcess;
          v46 = v333 & qword_140CFC848[GroupMaskProcess];
          if ( v46 == (_QWORD)v333 )
          {
            WORD4(v333) = v257;
            *(_QWORD *)&v333 = v46;
LABEL_186:
            v47 = (__int64)v255;
            KeEnterCriticalRegionThread((__int64)v255);
            if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 139) )
            {
              PspLockProcessSharedUnsafe((__int64)Object);
              v12 = PspSetProcessAffinitySafe((_DWORD)Object, 0, 0, (unsigned int)&v333, (__int64)v270);
              PspUnlockProcessSharedUnsafe((__int64)Object);
              ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Object + 139);
              if ( v12 >= 0 )
              {
                if ( v270[0] )
                  PspWritePebAffinityInfo(v47, (__int64)Object, v48, v49);
                _InterlockedOr((volatile signed __int32 *)Object + 280, 0x200000u);
                KeLeaveCriticalRegionThread(v47);
                goto LABEL_79;
              }
            }
            else
            {
              v12 = -1073741558;
            }
            KeLeaveCriticalRegionThread(v47);
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
    case 0x16u:
      if ( a4 != 4 )
        return -1073741820;
      v314 = *(_DWORD *)a3;
      v50 = v314 != 0;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      v12 = result;
      if ( result < 0 )
        return result;
      if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 139) )
        goto LABEL_115;
      v51 = (__int64)v255;
      PspLockProcessExclusive((__int64)Object, (__int64)v255);
      KeSetDisableBoostProcess(Object, v50);
      v52 = Object;
      for ( j = (_QWORD *)*((_QWORD *)Object + 188); j != (_QWORD *)((char *)Object + 1504); v52 = Object )
      {
        KeSetDisableBoostThread(j - 157, v50);
        j = (_QWORD *)*j;
      }
      goto LABEL_266;
    case 0x17u:
      if ( a4 != 8 )
        return -1073741820;
      v54 = *(HANDLE *)a3;
      v326 = *(HANDLE *)a3;
      if ( RtlIsSandboxedToken(0LL, v9) )
        return -1073741790;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v37 = ObSetProcessDeviceMap(Object, v54, v9);
      goto LABEL_146;
    case 0x18u:
      if ( a4 != 4 )
        return -1073741820;
      v55 = *(_DWORD *)a3;
      v315 = *(_DWORD *)a3;
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
        return -1073741727;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x204u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      if ( v55 != (unsigned int)MmGetSessionId((__int64)Object) )
        v7 = -1073741790;
      goto LABEL_214;
    case 0x19u:
      if ( a4 != 1 )
        return -1073741820;
      v23 = *(_BYTE *)a3;
      v266 = *(_BYTE *)a3;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
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
    case 0x1Du:
      if ( a4 != 4 )
        return -1073741820;
      v56 = *(_DWORD *)a3;
      v296 = *(_DWORD *)a3;
      if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, v9) )
        return -1073741727;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      if ( v56 )
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
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      v12 = result;
      if ( result < 0 )
        return result;
      v281 = *(_DWORD *)v5;
      if ( (v281 & 0xFFFFFFFE) != 0 )
        goto LABEL_133;
      if ( (v281 & 1) != 0 )
        _InterlockedAnd((volatile signed __int32 *)Object + 281, 0xFFFFFFFD);
      else
        _InterlockedOr((volatile signed __int32 *)Object + 281, 2u);
      goto LABEL_79;
    case 0x20u:
      v277 = 0LL;
      if ( !a4 )
        goto LABEL_229;
      if ( ((a4 - 4) & 0xFFFFFFFB) != 0 )
        return -1073741820;
      v57 = *(_DWORD *)a3;
      LODWORD(v277) = *(_DWORD *)a3;
      if ( a4 == 8 )
        HIDWORD(v277) = *(_DWORD *)(a3 + 4);
      else
        HIDWORD(v277) = 0;
      if ( v57 )
        return -1073741811;
LABEL_229:
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      if ( (_DWORD)v4 )
        v37 = PsSetProcessHandleTracingInformation(Object, &v277);
      else
        v37 = PsSetProcessHandleTracingInformation(Object, 0LL);
      goto LABEL_146;
    case 0x21u:
      if ( ((a4 - 4) & 0xFFFFFFFB) != 0 )
        return -1073741820;
      if ( a4 == 4 )
      {
        v58 = *(_DWORD *)a3;
        v267 = *(_DWORD *)a3;
        LOBYTE(v59) = 0;
      }
      else
      {
        v306 = *(_QWORD *)a3;
        v58 = v306;
        v59 = HIDWORD(v306);
        v267 = v306;
      }
      if ( v58 >= 4 )
        return -1073741811;
      if ( v58 >= 3
        && !(unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                               SeIncreaseBasePriorityPrivilege,
                               Handle,
                               512LL,
                               v9) )
      {
        return -1073741727;
      }
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      v12 = result;
      if ( result < 0 )
        return result;
      if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 139) )
      {
        v51 = (__int64)v255;
        PspLockProcessExclusive((__int64)Object, (__int64)v255);
        v60 = (volatile signed __int32 *)Object;
        v61 = *((_DWORD *)Object + 281);
        v62 = v267 << 27;
        do
        {
          v63 = v61;
          v61 = _InterlockedCompareExchange(v60 + 281, v62 | v61 & 0xC7FFFFFF, v61);
        }
        while ( v61 != v63 );
        v52 = Object;
        v64 = (KSPIN_LOCK *)*((_QWORD *)Object + 188);
        if ( v64 != (KSPIN_LOCK *)((char *)Object + 1504) )
        {
          v65 = v267;
          do
          {
            if ( (_BYTE)v59 == 1 && ((*((_DWORD *)v64 + 10) >> 9) & 7) < v65 )
              IoBoostThreadIoPriority(v64 - 157, v65, 0);
            PsSetIoPriorityThread((__int64)(v64 - 157), v65);
            v64 = (KSPIN_LOCK *)*v64;
            v52 = Object;
          }
          while ( v64 != (KSPIN_LOCK *)((char *)Object + 1504) );
        }
LABEL_266:
        PspUnlockProcessExclusive((__int64)v52, v51);
LABEL_114:
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Object + 139);
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
      v66 = *(_DWORD *)a3;
      v297 = v66;
      CurrentProcess = PsGetCurrentProcess();
      v22 = KeSetExecuteOptions((__int64)CurrentProcess, v66);
      if ( v22 < 0 || (v66 & 3) != 1 )
        return v22;
      MmRemoveExecuteGrants();
      return v22;
    case 0x23u:
      memset(P, 0, sizeof(P));
      v337 = 0LL;
      v253 = 0;
      v268 = 0LL;
      v274 = 0LL;
      if ( Handle != (HANDLE)-1LL )
        return -1073741811;
      if ( v9 != 1 )
        return -1073741823;
      if ( a4 < 0x28 || (a4 - 16) % 0x18uLL )
        return -1073741820;
      if ( a4 == 40 )
      {
        PoolWithQuotaTag = P;
        v255 = (struct _KTHREAD *)P;
      }
      else
      {
        PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, a4, 0x736C5450u);
        v255 = (struct _KTHREAD *)PoolWithQuotaTag;
        if ( !PoolWithQuotaTag )
          return -1073741670;
      }
      v307 = PoolWithQuotaTag;
      v275 = PoolWithQuotaTag;
      memmove(PoolWithQuotaTag, (const void *)v5, v4);
      if ( PoolWithQuotaTag[1] < 2u
        && (*PoolWithQuotaTag & 0xFFFFFFFE) == 0
        && (v76 = (unsigned int)PoolWithQuotaTag[2], (_DWORD)v76)
        && (unsigned int)(v4 - 16) / 0x18uLL == v76 )
      {
        v77 = 0;
        v253 = 0;
        v78 = PoolWithQuotaTag + 4;
        do
        {
          if ( *v78 )
            goto LABEL_325;
          v253 = ++v77;
          v78 += 6;
        }
        while ( v77 < (unsigned int)v76 );
        v79 = PsGetCurrentProcess();
        v80 = v79;
        Object = v79;
        v258 = 0;
        if ( (*PoolWithQuotaTag & 1) != 0 )
        {
          v81 = v79[1].AffinityPadding[10];
          if ( !v81 || (v82 = *(_WORD *)(v81 + 8), v82 != 332) && v82 != 452 )
          {
LABEL_325:
            v12 = -1073741811;
            goto LABEL_327;
          }
          v258 = 1;
        }
        v83 = v258 ^ 1u;
        Alignment = 4 * v83 + 4;
        v278 = 4 * v83 + 4;
        v269 = v5;
        v253 = 0;
        v12 = 0;
        v254 = 0;
        v84 = 0LL;
        for ( k = v80; ; k = Object )
        {
          Handlea = PsGetNextProcessThread((__int64)k, v84);
          v86 = Handlea;
          if ( !Handlea || v253 >= PoolWithQuotaTag[2] )
            break;
          if ( (*((_DWORD *)Handlea + 29) & 0x400) == 0 && ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Handlea + 159) )
          {
            v87 = v86[30];
            v290 = v87;
            if ( v258 )
            {
              v88 = (char *)(v87 + 8236);
              v274 = v87 + 8236;
              LODWORD(v89) = PtrToUlong((const void *)*(unsigned int *)(v87 + 8236));
              v90 = v89;
              v268 = v89;
            }
            else
            {
              v88 = (char *)(v87 + 88);
              v274 = v87 + 88;
              v90 = *(char **)(v87 + 88);
              v268 = v90;
            }
            if ( v90 )
            {
              if ( PoolWithQuotaTag[1] == 1 )
              {
                if ( v90 == v88 )
                {
                  v268 = 0LL;
                }
                else
                {
                  v91 = (unsigned int)PoolWithQuotaTag[3];
                  v92 = v278 * v91;
                  if ( v278 * v91 )
                  {
                    if ( ((Alignment - 1) & (unsigned int)v90) != 0 )
                      ExRaiseDatatypeMisalignment();
                    if ( (unsigned __int64)&v90[v92] > 0x7FFFFFFF0000LL || &v90[v92] < v90 )
                    {
                      MEMORY[0x7FFFFFFF0000] = 0;
                      v91 = (unsigned int)v307[3];
                    }
                  }
                  v93 = (volatile void **)&PoolWithQuotaTag[6 * v253 + 6];
                  ProbeForWrite(*v93, v278 * v91, Alignment);
                  memmove((void *)*v93, v90, v278 * (unsigned int)PoolWithQuotaTag[3]);
                  _InterlockedOr(v251, 0);
                  v87 = v290;
                }
                v94 = v253;
                *(_DWORD *)(v269 + 24LL * v253 + 16) |= 1u;
                v95 = *(const void **)&v275[6 * v94 + 6];
                if ( v258 )
                  *(_DWORD *)(v87 + 8236) = PtrToUlong(v95);
                else
                  *(_QWORD *)(v87 + 88) = v95;
                v96 = v269 + 24LL * v253;
                *(_QWORD *)(v96 + 32) = *((_QWORD *)Handlea + 144);
                *(_QWORD *)(v96 + 24) = v268;
                *(_DWORD *)(v96 + 16) ^= 3u;
                ++v253;
              }
              else
              {
                v97 = 6LL * v253;
                *(_DWORD *)(v97 * 4 + v269 + 16) |= 1u;
                v98 = (unsigned int)v275[3];
                if ( v258 )
                {
                  v99 = (unsigned __int64)&v90[4 * v98];
                  if ( v99 >= 0x7FFFFFFF0000LL )
                    v99 = 0x7FFFFFFF0000LL;
                  LODWORD(v100) = PtrToUlong((const void *)*(unsigned int *)v99);
                  v101 = v100;
                  v274 = v100;
                  v102 = PtrToUlong(*(const void **)&PoolWithQuotaTag[v97 + 6]);
                  v103 = (unsigned __int64)&v268[4 * PoolWithQuotaTag[3]];
                  if ( v103 >= 0x7FFFFFFF0000LL )
                    v103 = 0x7FFFFFFF0000LL;
                  *(_DWORD *)v103 = v102;
                }
                else
                {
                  v104 = (unsigned __int64)&v90[8 * v98];
                  if ( v104 >= 0x7FFFFFFF0000LL )
                    v104 = 0x7FFFFFFF0000LL;
                  v101 = *(_QWORD *)v104;
                  v274 = *(_QWORD *)v104;
                  v105 = (unsigned __int64)&v268[8 * PoolWithQuotaTag[3]];
                  if ( v105 >= 0x7FFFFFFF0000LL )
                    v105 = 0x7FFFFFFF0000LL;
                  *(_QWORD *)v105 = *(_QWORD *)&PoolWithQuotaTag[v97 + 6];
                }
                v106 = 3LL * v253;
                v107 = v269;
                *(_QWORD *)(v269 + 8 * v106 + 24) = v101;
                *(_DWORD *)(v107 + 8 * v106 + 16) ^= 3u;
                ++v253;
              }
            }
            ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Handlea + 159);
          }
          v84 = Handlea;
        }
        if ( Handlea )
          PsQuitNextProcessThread(Handlea);
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
    case 0x27u:
      if ( a4 != 4 )
        return -1073741820;
      v68 = *(_DWORD *)a3;
      v282 = v68;
      if ( v68 > (unsigned int)MmGetDefaultPagePriority() || v68 < (unsigned int)MiCreateSystemWsles() )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      v12 = result;
      if ( result < 0 )
        return result;
      if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 139) )
        goto LABEL_115;
      v51 = (__int64)v255;
      PspLockProcessExclusive((__int64)Object, (__int64)v255);
      v69 = v68 << 12;
      v70 = (volatile signed __int32 *)Object;
      v71 = *((_DWORD *)Object + 280);
      do
      {
        v72 = v71;
        v71 = _InterlockedCompareExchange(v70 + 280, v69 | v71 & 0xFFFF8FFF, v71);
      }
      while ( v71 != v72 );
      v52 = Object;
      v73 = (_QWORD *)*((_QWORD *)Object + 188);
      if ( v73 != (_QWORD *)((char *)Object + 1504) )
      {
        v74 = v282;
        do
        {
          PsSetPagePriorityThread((__int64)(v73 - 157), v74);
          v73 = (_QWORD *)*v73;
          v52 = Object;
        }
        while ( v73 != (_QWORD *)((char *)Object + 1504) );
      }
      goto LABEL_266;
    case 0x28u:
      memset(&ApcState, 0, sizeof(ApcState));
      if ( ((a4 - 8) & 0xFFFFFFF7) != 0 )
        return -1073741820;
      if ( a4 == 8 )
      {
        *(_QWORD *)&v279 = 0LL;
        v108 = *(_QWORD *)a3;
        *((_QWORD *)&v279 + 1) = *(_QWORD *)a3;
      }
      else
      {
        v279 = *(_OWORD *)a3;
        v108 = *((_QWORD *)&v279 + 1);
      }
      if ( DWORD1(v279) )
        return -1073741811;
      if ( (_DWORD)v279 != DWORD1(v279) )
        return -1073741736;
      if ( v108 != (__int64)(v108 << 16) >> 16 )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v109 = PsGetCurrentProcess();
      v110 = SeSinglePrivilegeCheck(SeDebugPrivilege, v9);
      v19 = Object;
      if ( v110 || Object == v109 )
      {
        v111 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 139);
        v112 = (struct _EX_RUNDOWN_REF *)Object;
        if ( !v111 )
        {
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          return -1073741558;
        }
        v113 = *((_QWORD *)Object + 176);
        v115 = 0;
        if ( v113 )
        {
          v114 = *(_WORD *)(v113 + 8);
          if ( v114 == 332 || v114 == 452 )
            v115 = 1;
        }
        v116 = v109[1].AffinityPadding[10];
        if ( v115 )
        {
          if ( v116 )
          {
            v121 = *(_WORD *)(v116 + 8);
            if ( v121 == 332 || v121 == 452 )
            {
              KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
              if ( v108 < MmGetMaximumUserAddress() && (unsigned int)MmValidateUserCallTarget(v108, 1LL) )
              {
                v122 = 0LL;
                v123 = (__int64 *)*((_QWORD *)Object + 176);
                if ( v123 )
                  v122 = *v123;
                *(_DWORD *)(v122 + 1160) = DWORD2(v279);
                KeUnstackDetachProcess(&ApcState);
                ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Object + 139);
              }
              else
              {
                v7 = -1073741811;
                KeUnstackDetachProcess(&ApcState);
                ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Object + 139);
              }
LABEL_214:
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              return v7;
            }
          }
        }
        else if ( !v116 || (v117 = *(_WORD *)(v116 + 8), v117 != 332) && v117 != 452 )
        {
          KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
          if ( !(unsigned int)MmValidateUserCallTarget(v108, 0LL) )
            v7 = -1073741811;
          KeUnstackDetachProcess(&ApcState);
          v112 = (struct _EX_RUNDOWN_REF *)Object;
          if ( (v7 & 0x80000000) == 0 )
          {
            v118 = (__int64)v255;
            PspLockProcessExclusive((__int64)Object, (__int64)v255);
            *((_QWORD *)Object + 123) = v108;
            v119 = Object;
            v120 = (volatile signed __int32 *)*((_QWORD *)Object + 188);
            if ( v120 != (volatile signed __int32 *)((char *)Object + 1504) )
            {
              while ( 1 )
              {
                if ( v108 )
                  _interlockedbittestandset(v120 - 314, 0x19u);
                else
                  _interlockedbittestandreset(v120 - 314, 0x19u);
                v120 = *(volatile signed __int32 **)v120;
                v119 = Object;
                if ( v120 == (volatile signed __int32 *)((char *)Object + 1504) )
                  break;
                v108 = *((_QWORD *)&v279 + 1);
              }
            }
            PspUnlockProcessExclusive((__int64)v119, v118);
            ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Object + 139);
            goto LABEL_214;
          }
LABEL_371:
          ExReleaseRundownProtection_0(v112 + 139);
          goto LABEL_214;
        }
        v7 = -1073741637;
        goto LABEL_371;
      }
LABEL_97:
      ObfDereferenceObjectWithTag(v19, 0x79517350u);
      return -1073741727;
    case 0x29u:
      v317 = 0LL;
      v318 = 0LL;
      v319 = 0LL;
      if ( Handle != (HANDLE)-1LL )
        return -1073741811;
      v124 = 0LL;
      if ( a4 == 40 )
      {
        if ( v9 )
        {
          v317 = *(_OWORD *)a3;
          v318 = *(_OWORD *)(a3 + 16);
          v319 = *(_QWORD *)(a3 + 32);
          v124 = (_QWORD *)(a3 + 32);
          v5 = (__int64)&v317;
        }
        v125 = *(_DWORD *)v5;
        if ( *(_DWORD *)v5 > 0x40u || *(_DWORD *)(v5 + 4) | *(_DWORD *)(v5 + 8) | *(_DWORD *)(v5 + 12) )
          return -1073741811;
        v5 += 16LL;
      }
      else
      {
        if ( a4 != 24 )
          return -1073741820;
        v125 = 0;
        if ( v9 )
        {
          v318 = *(_OWORD *)a3;
          v124 = (_QWORD *)(a3 + 16);
          v5 = (__int64)&v318;
        }
      }
      if ( !*(_QWORD *)v5 )
        return -1073741811;
      v309 = *(_QWORD *)v5;
      *(_QWORD *)(v5 + 16) = 0LL;
      result = MmAllocateUserStack((int)v5 + 16, *(_QWORD *)(v5 + 8), (int)&v309, v125, 0);
      if ( result >= 0 && v9 )
        *v124 = *(_QWORD *)(v5 + 16);
      return result;
    case 0x2Du:
      if ( Handle != (HANDLE)-1LL )
        return -1073741811;
      if ( a4 != 4 )
        return -1073741820;
      v283 = *(_DWORD *)a3;
      if ( (v283 & 0xFFFFFFFC) != 0 )
        return -1073741811;
      return PspSetProcessAffinityUpdateMode(CurrentThread, &v283);
    case 0x2Eu:
      if ( a4 != 4 )
        return -1073741820;
      v126 = *(_DWORD *)a3;
      v298 = v126;
      if ( (v126 & 0xFFFFFFFE) != 0 )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      if ( (v126 & 1) != 0 )
        _InterlockedOr((volatile signed __int32 *)Object + 281, 0x200000u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 281, 0xFFDFFFFF);
      goto LABEL_88;
    case 0x30u:
      if ( a4 != 4 )
        return -1073741820;
      v127 = *(_DWORD *)a3;
      v299 = *(_DWORD *)a3;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v128 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken((PEPROCESS)Object);
      SeSetVirtualizationToken((__int64)v128, v127);
      HalPutDmaAdapter(v128);
      goto LABEL_88;
    case 0x31u:
      if ( a4 != 8 )
        return -1073741820;
      if ( Handle != (HANDLE)-1LL )
        return -1073741811;
      v129 = *(_QWORD *)a3;
      v327 = v129;
      if ( (v129 & 3) != 1 )
        return -1073741811;
      PsGetCurrentProcess()[1].AffinityPadding[3] = v129;
      return 0;
    case 0x34u:
      if ( a4 != 8 )
        return -1073741820;
      v256 = *(HANDLE *)a3;
      if ( Handle != (HANDLE)-1LL && (_DWORD)v256 != 2 )
        return -1073741811;
      break;
    case 0x35u:
      if ( Handle != (HANDLE)-1LL )
        return -1073741811;
      if ( a4 != 16 )
        return -1073741820;
      v316 = *(_OWORD *)a3;
      if ( BYTE8(v316) )
        return RtlRemoveDynamicFunctionTable(v316);
      else
        return RtlInsertDynamicFunctionTable(v316);
    case 0x36u:
      if ( a4 != 4 )
        return -1073741820;
      v198 = *(_DWORD *)a3;
      v300 = v198;
      if ( (v198 & 0xFFFFFFFE) != 0 )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v199 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
      if ( v199 )
      {
        ExEnableHandleExceptions(v199, v198 & 1);
        ObDereferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
      }
      else
      {
LABEL_791:
        v7 = -1073741558;
      }
      goto LABEL_214;
    case 0x38u:
      *(_OWORD *)Src = 0LL;
      v200 = 0LL;
      v289 = 0LL;
      if ( v9 != 1 )
        goto LABEL_804;
      if ( a3 >= 0x7FFFFFFF0000LL )
        v5 = 0x7FFFFFFF0000LL;
      v201 = *(_DWORD *)v5;
      LODWORD(Src[0]) = v201;
      v202 = *(void **)(v5 + 8);
      Src[1] = v202;
      if ( !(_WORD)v201 )
        return -1073741811;
      if ( ((unsigned __int8)v202 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v203 = (unsigned __int64)v202 + (unsigned __int16)v201;
      if ( v203 > 0x7FFFFFFF0000LL || v203 < (unsigned __int64)v202 )
        MEMORY[0x7FFFFFFF0000] = 0;
      v204 = ExAllocatePoolWithTag(NonPagedPoolNx, LOWORD(Src[0]), 0x6E497350u);
      v200 = v204;
      v289 = v204;
      if ( !v204 )
        return -1073741670;
      memmove(v204, Src[1], LOWORD(Src[0]));
      Src[1] = v200;
      v5 = (__int64)Src;
      v330 = Src;
LABEL_804:
      v12 = ObReferenceObjectByHandleWithTag(
              Handle,
              0x2000u,
              (POBJECT_TYPE)PsProcessType,
              v9,
              0x79517350u,
              &Object,
              0LL);
      if ( v12 >= 0 )
      {
        v38 = IoRevokeHandlesForProcess(v5, Object);
        if ( v200 )
          ExFreePoolWithTag(v200, 0);
        goto LABEL_147;
      }
      if ( !v200 )
        return v12;
      ExFreePoolWithTag(v200, 0);
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
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v205 = *(_DWORD *)v5 != 0;
      v301 = v205;
      if ( PsGetCurrentProcess() == Object )
      {
        v12 = -1073741790;
      }
      else if ( SeSinglePrivilegeCheck(SeDebugPrivilege, v9) )
      {
        v12 = 0;
        KeSetCheckStackExtentsProcess(Object, v205);
        if ( !v205 && (*((_DWORD *)Object + 280) & 0x20000) != 0 )
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
      v334 = *(_OWORD *)a3;
      if ( (_WORD)v334 != 1 || DWORD1(v334) )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      if ( *((_QWORD *)&v334 + 1) )
        _InterlockedOr((volatile signed __int32 *)Object + 281, 0x100u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 281, 0xFFFFFEFF);
      goto LABEL_88;
    case 0x3Fu:
      v291 = 0LL;
      if ( a4 != 8 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v291 = *(_QWORD *)v5;
      v37 = PsSetProcessFaultInformation((ULONG_PTR)Object);
      goto LABEL_146;
    case 0x41u:
      if ( a4 != 32 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x2001u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v320 = *(__m256i *)v5;
      if ( v320.m256i_i32[0] != 3 )
      {
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return -1073741735;
      }
      if ( (v320.m256i_i32[1] & 0xFFFFFFF8) != 0
        || *(_OWORD *)&v320.m256i_u64[1] != 0LL
        || ((((unsigned __int32)v320.m256i_i32[1] >> 1) & 1) != 0 || (v320.m256i_i8[4] & 4) != 0)
        && (v320.m256i_i8[4] & 1) == 0 )
      {
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return -1073741811;
      }
      if ( (((unsigned __int32)v320.m256i_i32[1] >> 1) & 1) != 0 || (v320.m256i_i8[4] & 4) != 0 )
        v37 = MmReleaseCommitForMemResetPages(
                (volatile signed __int32 *)Object,
                ((unsigned __int32)v320.m256i_i32[1] >> 2) & 1);
      else
        v37 = MmSetCommitReleaseEligibility((__int64)Object, v320.m256i_i8[4] & 1, v206, v207);
LABEL_146:
      v38 = v37;
LABEL_147:
      v39 = Object;
LABEL_148:
      ObfDereferenceObjectWithTag(v39, 0x79517350u);
      return v38;
    case 0x42u:
    case 0x43u:
      if ( (a4 & 7) != 0 || a4 > 0xA0 )
        return -1073741820;
      memmove(v339, (const void *)a3, a4);
      v208 = (unsigned int)v4 >> 3;
      if ( Alignment == 67 )
      {
        result = ExCpuSetResourceManagerAccessCheck(v9);
        if ( result < 0 )
          return result;
      }
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x2000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v37 = KeSetCpuSetsProcess((__int64)Object, v208, v339);
      goto LABEL_146;
    case 0x44u:
      if ( (PsGetCurrentProcess()[1].IdealProcessorPadding[10] & 0x100) == 0 )
        return -1073741727;
      v292 = 0LL;
      v38 = ObReferenceObjectByHandle(Handle, 0x200u, (POBJECT_TYPE)PsProcessType, v9, &v292, 0LL);
      Object = v292;
      if ( v38 < 0 )
        return v38;
      _InterlockedOr((volatile signed __int32 *)v292 + 543, 0x40u);
      HalPutDmaAdapter((PADAPTER_OBJECT)Object);
      return v38;
    case 0x46u:
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
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
    case 0x47u:
      if ( a4 != 4 )
        return -1073741820;
      v210 = *(_DWORD *)a3;
      v303 = *(_DWORD *)a3;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v211 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
      if ( !v211 )
        goto LABEL_791;
      ExEnableRaiseUMExceptionOnInvalidHandleClose(v211, v210);
      ObDereferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
      goto LABEL_214;
    case 0x48u:
      return PsIumEnableOnDemandDebugWithResponse(Handle, a3, a4);
    case 0x4Au:
      if ( a4 != 1 )
        return -1073741820;
      v212 = *(_BYTE *)a3;
      v265 = *(_BYTE *)a3;
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
        return -1073741727;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x2000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      if ( v212 )
        _InterlockedOr((volatile signed __int32 *)Object + 543, 0x200u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 543, 0xFFFFFDFF);
      goto LABEL_88;
    case 0x4Du:
      v331 = 0LL;
      v332 = 0;
      if ( a4 != 12 )
        return -1073741820;
      v331 = *(HANDLE *)a3;
      v213 = *(_DWORD *)(a3 + 8);
      v332 = v213;
      if ( (_DWORD)v331 != 1 || (HIDWORD(v331) & 0xFFFFFFFC) != 0 || (~HIDWORD(v331) & v213) != 0 )
        return -1073741811;
      ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
      if ( !ExtensionTable )
        return -1073741822;
      v215 = ObReferenceObjectByHandleWithTag(
               Handle,
               0x2000u,
               (POBJECT_TYPE)PsProcessType,
               v9,
               0x79517350u,
               &Object,
               0LL);
      if ( v215 >= 0 )
      {
        v216 = (*(__int64 (__fastcall **)(PVOID, HANDLE *))(ExtensionTable + 8))(Object, &v331);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
        return v216;
      }
      else
      {
        ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
        return v215;
      }
    case 0x50u:
      result = ExCpuSetResourceManagerAccessCheck(v9);
      if ( result < 0 )
        return result;
      if ( (_DWORD)v4 != 1 )
        return -1073741820;
      v209 = *(_BYTE *)v5;
      v264 = v209;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x2000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      if ( v209 )
        _InterlockedOr((volatile signed __int32 *)Object + 280, 0x8000000u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 280, 0xF7FFFFFF);
      KeRecomputeCpuSetAffinityProcess((__int64)Object);
      goto LABEL_88;
    case 0x52u:
      if ( a4 < 8 )
        return -1073741820;
      memset(v338, 0, sizeof(v338));
      v217 = 144;
      if ( a4 < 0x90 )
        v217 = a4;
      memmove(v338, (const void *)a3, v217);
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v218 = PoSetProcessEnergyTrackingState((__int64)Object, v338);
      v15 = Object;
      if ( v218 >= 0 )
        goto LABEL_89;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      return v218;
    case 0x53u:
      return -1073741637;
    case 0x55u:
      if ( a4 != 24 )
        return -1073741820;
      *(_OWORD *)pszDest = 0LL;
      v341 = 0LL;
      v342 = 0LL;
      v343 = 0LL;
      v344 = 0;
      v219 = *(_OWORD *)a3;
      *(_OWORD *)pszSrc = v219;
      v295 = *(_QWORD *)(a3 + 16);
      v220 = (const char *)v219;
      if ( (unsigned __int64)(v219 + 65) > 0x7FFFFFFF0000LL || (__int64)v219 + 65 < (unsigned __int64)v219 )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
        v220 = pszSrc[0];
      }
      RtlStringCbCopyA(pszDest, 0x41uLL, v220);
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x220u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      pszSrc[0] = pszDest;
      v344 = 0;
      v22 = EtwSetProcessTelemetryCoverage(Object, pszSrc);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_DWORD *)(v5 + 12) = HIDWORD(pszSrc[1]);
      *(_DWORD *)(v5 + 16) = v295;
      return v22;
    case 0x57u:
    case 0x60u:
      if ( a2 == 87 && !a4 || a2 == 96 && a4 < 4 )
        return -1073741820;
      if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, v9) && !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
        return -1073741727;
      v260 = 0;
      if ( Alignment == 87 )
        v221 = (*(_BYTE *)v5 & 1 ^ *(_BYTE *)v5) & 2 ^ *(_BYTE *)v5 & 1;
      else
        v221 = *(_DWORD *)v5;
      v260 = v221;
      if ( (v221 & 0xFFFFFFF0) != 0 )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x2000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      _InterlockedAnd((volatile signed __int32 *)Object + 543, 0xFFE7FFFF);
      v222 = (((v260 >> 2) & 1) << 19) | 0x100000;
      if ( (v260 & 8) == 0 )
        v222 = ((v260 >> 2) & 1) << 19;
      _InterlockedOr((volatile signed __int32 *)Object + 543, v222);
      _InterlockedAnd((volatile signed __int32 *)Object + 280, 0xFCFFFFFF);
      v223 = ((v260 & 1) << 24) | 0x2000000;
      if ( (v260 & 2) == 0 )
        v223 = (v260 & 1) << 24;
      _InterlockedOr((volatile signed __int32 *)Object + 280, v223);
      goto LABEL_88;
    case 0x5Au:
      return SeCodeIntegritySetInformationProcess(Handle, a2, a3, a4);
    case 0x5Bu:
      if ( a4 != 4 )
        return -1073741820;
      v224 = *(_DWORD *)a3;
      v302 = v224;
      if ( (v224 & 0xFFFFFFFE) != 0 )
        return -1073741811;
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
        return -1073741727;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x2000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      PspSetProcessForegroundBackgroundRequest((__int64)Object, v224 & 1, 1);
LABEL_88:
      v15 = Object;
LABEL_89:
      ObfDereferenceObjectWithTag(v15, 0x79517350u);
      return 0;
    case 0x5Du:
      if ( a4 != 4 )
        return -1073741820;
      v225 = *(_DWORD *)a3;
      v304 = *(_DWORD *)a3;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x2000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      v12 = result;
      if ( result < 0 )
        return result;
      if ( Object != PsGetCurrentProcess() || !v225 )
        goto LABEL_133;
      v226 = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
      if ( v226 )
      {
        (*(void (__fastcall **)(PVOID, _QWORD))(v226 + 40))(Object, v225);
        ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
      }
      goto LABEL_79;
    case 0x5Fu:
      if ( a4 != 8 )
        return -1073741820;
      v227 = *(HANDLE *)a3;
      v329 = *(HANDLE *)a3;
      result = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x2000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v38 = ObReferenceObjectByHandleWithTag(v227, 0x1000u, (POBJECT_TYPE)PsProcessType, v9, 0x79517350u, &v284, 0LL);
      v39 = Object;
      if ( v38 < 0 )
        goto LABEL_148;
      v38 = PspCombineSecurityDomains(Object, (struct _KPROCESS *)v284);
      ObfDereferenceObjectWithTag(v284, 0x79517350u);
      goto LABEL_147;
    case 0x61u:
      if ( a4 != 8 )
        return -1073741820;
      v228 = *(HANDLE *)a3;
      v310 = v228;
      if ( ((unsigned int)v228 & 0xFFFFFFFE) != 0 || Handle != (HANDLE)-1LL )
        return -1073741811;
      v229 = PsGetCurrentProcess();
      Object = v229;
      v230 = v229[1].AffinityPadding[4];
      if ( !v230 )
        return -1073741790;
      v231 = 0LL;
      v232 = (__int64 *)v229[1].AffinityPadding[10];
      if ( v232 )
        v231 = *v232;
      v233 = (unsigned __int8)v228 & 1;
      v234 = *(_DWORD *)(v230 + 1984);
      if ( v233 )
        v235 = v234 | 1;
      else
        v235 = v234 & 0xFFFFFFFE;
      *(_DWORD *)(v230 + 1984) = v235;
      if ( v231 )
      {
        v236 = *(_DWORD *)(v231 + 1140);
        if ( v233 )
          v237 = v236 | 1;
        else
          v237 = v236 & 0xFFFFFFFE;
        *(_DWORD *)(v231 + 1140) = v237;
      }
      return v7;
    case 0x62u:
      if ( Handle != (HANDLE)-1LL )
        return -1073741811;
      if ( v9 != 1 )
        return -1073741823;
      if ( a4 != 32 )
        return -1073741820;
      if ( !KeIsUserCetAllowed() || (KeGetCurrentThread()->MiscFlags & 0x100000) == 0 )
        return -1073741637;
      return PspSetupUserFiberShadowStack(
               *(_QWORD *)v5,
               *(_QWORD *)(v5 + 8),
               (unsigned int)*(_OWORD *)(v5 + 16),
               v5 + 24);
    case 0x63u:
      if ( Handle != (HANDLE)-1LL )
        return -1073741811;
      if ( v9 != 1 )
        return -1073741823;
      if ( a4 != 8 )
        return -1073741820;
      if ( KeIsUserCetAllowed() && (KeGetCurrentThread()->MiscFlags & 0x100000) != 0 )
        return PspFreeUserFiberShadowStack(*(PVOID *)v5);
      else
        return -1073741637;
    case 0x64u:
      if ( a4 != 1 )
        return -1073741820;
      if ( !*(_BYTE *)a3 )
        return -1073741811;
      if ( v9 )
        return -1073741790;
      v293 = 0LL;
      result = ObReferenceObjectByHandle(Handle, 0xBEAu, (POBJECT_TYPE)PsProcessType, 0, &v293, 0LL);
      Object = v293;
      if ( result >= 0 )
      {
        v238 = PspEnableAltSystemCallHandling();
        HalPutDmaAdapter((PADAPTER_OBJECT)Object);
        return v238;
      }
      return result;
    case 0x65u:
      v270[1] = 0;
      v239 = 0LL;
      if ( a4 != 16 )
        return -1073741820;
      *(_OWORD *)Address = *(_OWORD *)a3;
      v240 = 16 * LOWORD(Address[0]);
      if ( !v240 )
        return -1073741811;
      v241 = (const void *)Address[1];
      if ( !Address[1] )
        return -1073741811;
      v242 = v240;
      ProbeForWrite(Address[1], v240, 8u);
      if ( WORD1(Address[0]) || HIDWORD(Address[0]) )
        return -1073741811;
      if ( v9 != 1 )
        return -1073741790;
      v273 = 0LL;
      result = ObReferenceObjectByHandle(Handle, 0x200u, (POBJECT_TYPE)PsProcessType, 1, &v273, 0LL);
      Object = v273;
      if ( result < 0 )
        return result;
      v243 = PsGetCurrentProcess();
      v244 = (struct _DMA_ADAPTER *)Object;
      if ( Object == v243 && (*((_DWORD *)Object + 629) & 0x40000000) != 0 )
      {
        v12 = -1073741790;
      }
      else if ( (*((_DWORD *)Object + 629) & 0x4000) != 0 )
      {
        Pool2 = (_DWORD *)ExAllocatePool2(257LL, v242, 1313359172LL);
        v239 = Pool2;
        v273 = Pool2;
        if ( Pool2 )
        {
          memmove(Pool2, v241, v242);
          v12 = PspProcessDynamicEHContinuationTargets((ULONG_PTR)Object);
          v254 = v12;
          v257 = 0;
        }
        else
        {
          v12 = -1073741801;
        }
        v244 = (struct _DMA_ADAPTER *)Object;
      }
      else
      {
        v12 = -1073741637;
      }
      goto LABEL_955;
    case 0x66u:
      LODWORD(v271) = 0;
      v239 = 0LL;
      if ( a4 != 16 )
        return -1073741820;
      *(_OWORD *)v287 = *(_OWORD *)a3;
      v246 = 24 * LOWORD(v287[0]);
      if ( !v246 )
        return -1073741811;
      v247 = (const void *)v287[1];
      if ( !v287[1] )
        return -1073741811;
      v248 = v246;
      ProbeForWrite(v287[1], v246, 8u);
      if ( WORD1(v287[0]) || HIDWORD(v287[0]) )
        return -1073741811;
      if ( v9 != 1 )
        return -1073741790;
      v272 = 0LL;
      result = ObReferenceObjectByHandle(Handle, 0x200u, (POBJECT_TYPE)PsProcessType, 1, &v272, 0LL);
      Object = v272;
      if ( result < 0 )
        return result;
      v249 = PsGetCurrentProcess();
      v244 = (struct _DMA_ADAPTER *)Object;
      if ( Object == v249 && (*((_DWORD *)Object + 629) & 0x40000000) != 0 )
      {
        v12 = -1073741790;
      }
      else if ( (*((_DWORD *)Object + 629) & 0x4000) != 0 )
      {
        v250 = (_DWORD *)ExAllocatePool2(257LL, v248, 1380009284LL);
        v239 = v250;
        v272 = v250;
        if ( v250 )
        {
          memmove(v250, v247, v248);
          v12 = PspProcessDynamicEnforcedAddressRanges(
                  (PRKPROCESS)Object,
                  (__int64)Object + 2576,
                  (__int64)v239,
                  (unsigned __int16)v287[0],
                  (unsigned int *)&v271);
          v254 = v12;
          while ( 1 )
          {
            v257 = v7;
            if ( v7 >= (unsigned int)v271 )
              break;
            *((_DWORD *)v247 + 6 * v7 + 4) = v239[6 * v7 + 4];
            ++v7;
          }
        }
        else
        {
          v12 = -1073741801;
        }
        v244 = (struct _DMA_ADAPTER *)Object;
      }
      else
      {
        v12 = -1073741637;
      }
LABEL_955:
      if ( v244 )
        HalPutDmaAdapter(v244);
      if ( v239 )
      {
        ExFreePoolWithTag(v239, 0);
        return v12;
      }
      return v12;
    default:
      return -1073741821;
  }
  v132 = (unsigned __int8 *)PsGetCurrentProcess();
  Object = v132;
  switch ( (int)v256 )
  {
    case 1:
      if ( (HIDWORD(v256) & 0xFFFFFFF0) != 0 )
      {
        v12 = -1073741811;
        goto LABEL_501;
      }
      v133 = (HIDWORD(v256) >> 1) & 1;
      if ( !v133 && (*((_DWORD *)v132 + 628) & 0x10) != 0 )
        goto LABEL_429;
      if ( (BYTE4(v256) & 1) == 0 && (*((_DWORD *)v132 + 628) & 0x40) == 0 )
        goto LABEL_429;
      v134 = (HIDWORD(v256) >> 3) & 1;
      if ( !v134 && (*((_DWORD *)v132 + 628) & 8) != 0 )
        goto LABEL_429;
      if ( v134 )
      {
        if ( !v133 )
        {
          v12 = -1073741776;
          goto LABEL_501;
        }
      }
      else if ( !v133 )
      {
LABEL_435:
        if ( (BYTE4(v256) & 1) != 0 )
        {
          _InterlockedAnd((volatile signed __int32 *)v132 + 628, 0xFFFFFFBF);
          v132 = (unsigned __int8 *)Object;
        }
        if ( v134 )
        {
          _InterlockedOr((volatile signed __int32 *)v132 + 628, 8u);
          v132 = (unsigned __int8 *)Object;
        }
        v12 = 0;
        goto LABEL_501;
      }
      _InterlockedOr((volatile signed __int32 *)v132 + 628, 0x10u);
      v132 = (unsigned __int8 *)Object;
      goto LABEL_435;
    case 2:
      v142 = HIDWORD(v256);
      if ( (HIDWORD(v256) & 0xFFFFFFF0) != 0 )
      {
        v12 = -1073741811;
        goto LABEL_501;
      }
      if ( (BYTE4(v256) & 1) != 0 && (BYTE4(v256) & 8) != 0 )
        v142 = HIDWORD(v256) & 0xFFFFFFF7;
      v143 = v142 & 1;
      if ( (v142 & 1) == 0 && ((v142 & 2) != 0 || (v142 & 4) != 0) )
      {
        v12 = -1073741811;
        goto LABEL_501;
      }
      if ( PsIsSystemWideMitigationOptionSet() )
      {
        v132 = (unsigned __int8 *)Object;
LABEL_500:
        v12 = -1073741637;
        goto LABEL_501;
      }
      if ( Handle == (HANDLE)-1LL )
      {
        v132 = (unsigned __int8 *)Object;
        v144 = 0;
      }
      else
      {
        v12 = ObReferenceObjectByHandleWithTag(
                Handle,
                0x200u,
                (POBJECT_TYPE)PsProcessType,
                v9,
                0x79517350u,
                &Object,
                0LL);
        if ( v12 < 0 )
          goto LABEL_450;
        v144 = 1;
        v145 = PsGetCurrentProcess();
        v132 = (unsigned __int8 *)Object;
        if ( Object != v145 )
        {
          v146 = *((_DWORD *)Object + 628);
          if ( (v146 & 0x100) != 0 )
          {
            memset(&SubjectContext, 0, sizeof(SubjectContext));
            SeCaptureSubjectContextEx(0LL, (PEPROCESS)Object, &SubjectContext);
            IsSandboxedToken = RtlIsSandboxedToken(&SubjectContext, 1);
            SeReleaseSubjectContext(&SubjectContext);
            if ( !RtlIsSandboxedToken(0LL, v9) && IsSandboxedToken )
            {
              v132 = (unsigned __int8 *)Object;
              if ( (*((_DWORD *)Object + 628) & 0x400) != 0 )
                goto LABEL_512;
            }
            v148 = SeSinglePrivilegeCheck(SeDebugPrivilege, v9);
            v132 = (unsigned __int8 *)Object;
            if ( v148 )
              goto LABEL_512;
          }
          else if ( (v142 & 8) != 0 || (v142 & 1) != 0 || (v146 & 0x800) == 0 )
          {
LABEL_512:
            v149 = 0;
            if ( (v142 & 1) == 0 )
              v149 = 2304;
            v150 = -v143;
            v151 = (v150 != 0 ? 0x100 : 0) | 0x800;
            if ( (v142 & 8) == 0 )
              v151 = v150 != 0 ? 0x900 : 0;
            if ( ((v142 >> 1) & 1) == 0 )
              v149 |= 0x200u;
            v152 = v151 | 0x200;
            if ( ((v142 >> 1) & 1) == 0 )
              v152 = v151;
            v153 = v152 | 0x400;
            v155 = (v142 >> 2) & 1;
            v154 = v155 == 0;
            goto LABEL_548;
          }
          v12 = -1073741790;
          goto LABEL_502;
        }
      }
      if ( (v142 & 1) == 0 && (*((_DWORD *)v132 + 628) & 0x100) != 0 )
      {
        v12 = -1073741790;
        goto LABEL_502;
      }
      v156 = (v142 >> 3) & 1;
      if ( !v156 && (v142 & 1) == 0 && (*((_DWORD *)v132 + 628) & 0x800) != 0 )
      {
        v12 = -1073741790;
        goto LABEL_502;
      }
      v157 = (v142 >> 1) & 1;
      if ( v157 )
      {
        v158 = *((_DWORD *)v132 + 628);
        if ( (v158 & 0x100) != 0 && (v158 & 0x200) == 0 )
        {
          v12 = -1073741790;
          goto LABEL_502;
        }
      }
      v155 = (v142 >> 2) & 1;
      if ( v155 )
      {
        v159 = *((_DWORD *)v132 + 628);
        if ( (v159 & 0x100) != 0 && (v159 & 0x400) == 0 )
        {
          v12 = -1073741790;
          goto LABEL_502;
        }
      }
      if ( v143 )
      {
        v160 = 2304;
      }
      else
      {
        v160 = 0;
        if ( v156 )
          v160 = 2048;
      }
      v149 = (v157 ^ 1) << 9;
      v152 = v160 | 0x200;
      if ( !v157 )
        v152 = v160;
      v153 = v152 | 0x400;
      v154 = v155 == 0;
LABEL_548:
      if ( v154 )
        v153 = v152;
      if ( !v155 )
        v149 |= 0x400u;
      RtlInterlockedSetClearBits((volatile signed __int32 *)v132 + 628, v153, v149);
      v12 = 0;
      v132 = (unsigned __int8 *)Object;
      goto LABEL_502;
    case 3:
      if ( (HIDWORD(v256) & 0xFFFFFFFC) != 0 )
      {
        v12 = -1073741811;
      }
      else if ( ((HIDWORD(v256) >> 1) & 1) != 0 || (BYTE4(v256) & 1) == 0 )
      {
        if ( ((HIDWORD(v256) >> 1) & 1) == 0 || (BYTE4(v256) & 1) != 0 )
        {
          v135 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)v132);
          if ( v135 )
          {
            v12 = -1073741790;
            if ( ExEnableHandleExceptions(v135, BYTE4(v256) & 1) )
              v12 = 0;
            ObDereferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
            v132 = (unsigned __int8 *)Object;
          }
          else
          {
            v12 = -1073741558;
LABEL_450:
            v132 = (unsigned __int8 *)Object;
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
      v136 = HIDWORD(v256);
      if ( (HIDWORD(v256) & 0xFFFFFFF0) != 0 )
      {
        v12 = -1073741811;
        goto LABEL_501;
      }
      if ( (BYTE4(v256) & 1) != 0 && (BYTE4(v256) & 2) != 0 )
      {
        v136 = HIDWORD(v256) & 0xFFFFFFFD;
        HIDWORD(v256) &= ~2u;
      }
      if ( (v136 & 4) != 0 && (v136 & 8) != 0 )
      {
        v136 &= ~8u;
        HIDWORD(v256) = v136;
      }
      v137 = v136 & 1;
      if ( (v136 & 1) == 0 && (*((_DWORD *)v132 + 628) & 0x1000) != 0 )
      {
        v12 = -1073741790;
        goto LABEL_501;
      }
      v138 = (v136 >> 2) & 1;
      if ( !v138 && (*((_DWORD *)v132 + 652) & 2) != 0 )
      {
        v12 = -1073741790;
        goto LABEL_501;
      }
      v139 = (v136 >> 1) & 1;
      if ( !v139 && (v136 & 1) == 0 && (*((_DWORD *)v132 + 628) & 0x2000) != 0 )
      {
        v12 = -1073741790;
        goto LABEL_501;
      }
      v140 = (v136 >> 3) & 1;
      if ( !v140 && !v138 && (*((_DWORD *)v132 + 652) & 4) != 0 )
      {
        v12 = -1073741790;
        goto LABEL_501;
      }
      if ( v137 || v139 )
      {
        IsGuiThread = PsIsGuiThread(v255, v130, v131, v132);
        v132 = (unsigned __int8 *)Object;
        if ( IsGuiThread )
        {
          v12 = -1073741431;
          goto LABEL_501;
        }
      }
      v12 = 0;
      if ( v137 )
      {
        _InterlockedOr((volatile signed __int32 *)v132 + 628, 0x3000u);
      }
      else
      {
        if ( !v139 )
          goto LABEL_485;
        _InterlockedOr((volatile signed __int32 *)v132 + 628, 0x2000u);
      }
      v132 = (unsigned __int8 *)Object;
LABEL_485:
      if ( v138 )
      {
        _InterlockedOr((volatile signed __int32 *)v132 + 652, 6u);
        v132 = (unsigned __int8 *)Object;
      }
      else if ( v140 )
      {
        _InterlockedOr((volatile signed __int32 *)v132 + 652, 4u);
        v132 = (unsigned __int8 *)Object;
      }
      goto LABEL_501;
    case 6:
      if ( (HIDWORD(v256) & 0xFFFFFFFE) != 0 )
      {
        v12 = -1073741811;
      }
      else if ( (BYTE4(v256) & 1) != 0 || (*((_DWORD *)v132 + 628) & 0x80u) == 0 )
      {
        v12 = 0;
        if ( (BYTE4(v256) & 1) != 0 )
        {
          _InterlockedOr((volatile signed __int32 *)v132 + 628, 0x80u);
          v132 = (unsigned __int8 *)Object;
        }
      }
      else
      {
        v12 = -1073741790;
      }
      goto LABEL_501;
    case 7:
      if ( (HIDWORD(v256) & 0xFFFFFFF8) != 0 )
      {
        v12 = -1073741811;
      }
      else if ( (*((_DWORD *)v132 + 628) & 1) != 0 )
      {
        if ( (BYTE4(v256) & 4) != 0 )
        {
          _InterlockedOr((volatile signed __int32 *)v132 + 628, 4u);
          v12 = 0;
          v132 = (unsigned __int8 *)Object;
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
      v161 = HIDWORD(v256);
      if ( (HIDWORD(v256) & 0xFFFFFFE0) != 0 )
      {
        v12 = -1073741811;
        goto LABEL_501;
      }
      if ( (BYTE4(v256) & 1) != 0 && ((BYTE4(v256) & 8) != 0 || (BYTE4(v256) & 0x10) != 0) )
        v161 = HIDWORD(v256) & 0xFFFFFFE7;
      if ( (v161 & 2) != 0 && (v161 & 0x10) != 0 )
        v161 &= ~0x10u;
      v162 = (v161 >> 3) & 1;
      if ( v162 && (v161 & 0x10) != 0 )
      {
        v12 = -1073741811;
        goto LABEL_501;
      }
      v163 = (v161 >> 1) & 1;
      if ( (v161 & 1) + v163 > 1 )
      {
        v12 = -1073741811;
        goto LABEL_501;
      }
      if ( (v161 & 1) != 0 )
        goto LABEL_590;
      if ( v132[2168] >= 8u && v132[2169] >= 8u )
      {
        v12 = -1073741790;
        goto LABEL_501;
      }
      if ( v163 )
        goto LABEL_590;
      LOBYTE(v130) = 6;
      if ( (unsigned int)SeCompareSigningLevels(v132[2168], v130) )
      {
        LOBYTE(v130) = 6;
        if ( (unsigned int)SeCompareSigningLevels(*((unsigned __int8 *)Object + 2169), v130) )
        {
          v12 = -1073741790;
          v132 = (unsigned __int8 *)Object;
          goto LABEL_501;
        }
      }
      v132 = (unsigned __int8 *)Object;
LABEL_590:
      if ( (*((_DWORD *)v132 + 628) & 0x3000000) != 0 && (v161 & 0x10) == 0 && !v163 && !v162 && (v161 & 1) == 0 )
      {
        v12 = -1073741790;
        goto LABEL_501;
      }
      v12 = 0;
      if ( (v161 & 1) == 0 )
      {
        if ( !v163 )
          goto LABEL_607;
        LOBYTE(v130) = 6;
        if ( !(unsigned int)SeCompareSigningLevels(v132[2168], v130) )
        {
          v12 = -1073741790;
          v132 = (unsigned __int8 *)Object;
          goto LABEL_501;
        }
        LOBYTE(v164) = 6;
        if ( (unsigned int)SeCompareSigningLevels(v164, *((unsigned __int8 *)Object + 2169)) )
          *((_BYTE *)Object + 2169) = 6;
        goto LABEL_606;
      }
      if ( v132[2168] < 8u )
      {
        v132[2168] = 8;
        v132 = (unsigned __int8 *)Object;
      }
      if ( v132[2169] < 8u )
      {
        v132[2169] = 8;
LABEL_606:
        v132 = (unsigned __int8 *)Object;
      }
LABEL_607:
      if ( v161 )
        v7 = 0x800000;
      v165 = ((v161 & 8) == 0) << 24;
      v166 = v7 | 0x1000000;
      if ( !v162 )
        v166 = v7;
      v167 = (v161 >> 4) & 1;
      if ( !v167 )
        v165 |= 0x2000000u;
      v168 = v166 | 0x2000000;
      if ( !v167 )
        v168 = v166;
      RtlInterlockedSetClearBits((volatile signed __int32 *)v132 + 628, v168, v165);
      v132 = (unsigned __int8 *)Object;
      goto LABEL_501;
    case 9:
      if ( (HIDWORD(v256) & 0xFFFFFFFC) != 0 )
      {
        v12 = -1073741811;
      }
      else if ( (BYTE4(v256) & 1) != 0 || (*((_DWORD *)v132 + 628) & 0x10000) == 0 )
      {
        if ( (BYTE4(v256) & 1) != 0 || (BYTE4(v256) & 2) != 0 || (*((_DWORD *)v132 + 628) & 0x20000) == 0 )
        {
          v12 = 0;
          if ( (BYTE4(v256) & 1) != 0 )
          {
            RtlInterlockedSetClearBits((volatile signed __int32 *)v132 + 628, 0x10000, 0x20000);
            v132 = (unsigned __int8 *)Object;
          }
          else if ( (BYTE4(v256) & 2) != 0 )
          {
            RtlInterlockedSetClearBits((volatile signed __int32 *)v132 + 628, 0x20000, 0x10000);
            v132 = (unsigned __int8 *)Object;
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
      v169 = HIDWORD(v256);
      if ( (HIDWORD(v256) & 0xFFFFFFE0) != 0 )
      {
        v12 = -1073741811;
        goto LABEL_501;
      }
      if ( (BYTE4(v256) & 1) != 0 && (BYTE4(v256) & 8) != 0 )
        v169 = HIDWORD(v256) & 0xFFFFFFF7;
      if ( (v169 & 2) != 0 && (v169 & 0x10) != 0 )
        v169 &= ~0x10u;
      v170 = v169 & 1;
      v171 = 0x80000;
      if ( (v169 & 1) == 0 && (*((_DWORD *)v132 + 628) & 0x80000) != 0 )
        goto LABEL_429;
      v172 = (v169 >> 1) & 1;
      if ( !v172 && (*((_DWORD *)v132 + 628) & 0x200000) != 0 )
        goto LABEL_429;
      v173 = (v169 >> 2) & 1;
      if ( !v173 && (*((_DWORD *)v132 + 628) & 0x40000) != 0 )
      {
        v12 = -1073741790;
        goto LABEL_501;
      }
      v174 = (v169 >> 3) & 1;
      if ( !v174 && (v169 & 1) == 0 && (*((_DWORD *)v132 + 628) & 0x100000) != 0 )
        goto LABEL_429;
      v175 = (v169 >> 4) & 1;
      if ( v175 || v172 || (*((_DWORD *)v132 + 628) & 0x400000) == 0 )
      {
        v176 = 0;
        if ( v170 )
        {
          v176 = 0x100000;
        }
        else
        {
          v171 = 0;
          if ( v174 )
            v171 = 0x100000;
        }
        if ( v172 )
        {
          v171 |= 0x200000u;
          v176 |= 0x400000u;
        }
        else if ( v175 )
        {
          v171 |= 0x400000u;
        }
        v177 = v171 | 0x40000;
        if ( !v173 )
          v177 = v171;
        RtlInterlockedSetClearBits((volatile signed __int32 *)v132 + 628, v177, v176);
        v12 = 0;
        v132 = (unsigned __int8 *)Object;
      }
      else
      {
        v12 = -1073741790;
      }
      goto LABEL_501;
    case 13:
      v178 = HIDWORD(v256);
      if ( (HIDWORD(v256) & 0xFFFFFFF8) != 0 )
      {
        v12 = -1073741811;
        goto LABEL_501;
      }
      if ( (BYTE4(v256) & 1) == 0 && (BYTE4(v256) & 4) != 0 )
      {
        v12 = -1073741811;
        goto LABEL_501;
      }
      if ( (BYTE4(v256) & 1) != 0 && (BYTE4(v256) & 2) != 0 )
        v178 = HIDWORD(v256) & 0xFFFFFFFD;
      NoChildProcessRestrictedPolicy = PspGetNoChildProcessRestrictedPolicy((struct _KPROCESS *)v132);
      v180 = NoChildProcessRestrictedPolicy;
      v181 = v178 & 1;
      if ( (v178 & 1) == 0 && (unsigned int)(NoChildProcessRestrictedPolicy - 1) <= 1 )
      {
        v12 = -1073741790;
        v132 = (unsigned __int8 *)Object;
        goto LABEL_501;
      }
      v182 = (v178 >> 2) & 1;
      if ( v182 && v180 == 1 )
      {
        v12 = -1073741790;
        v132 = (unsigned __int8 *)Object;
        goto LABEL_501;
      }
      v183 = (v178 >> 1) & 1;
      if ( v183 )
        goto LABEL_680;
      if ( v181 )
        goto LABEL_681;
      if ( v180 == 3 )
      {
        v12 = -1073741790;
        v132 = (unsigned __int8 *)Object;
        goto LABEL_501;
      }
LABEL_680:
      if ( v181 )
      {
LABEL_681:
        if ( v182 )
          PspSetNoChildProcessRestrictedPolicy((struct _KPROCESS *)Object, 2);
        else
          PspSetNoChildProcessRestrictedPolicy((struct _KPROCESS *)Object, 1);
        v12 = 0;
        v132 = (unsigned __int8 *)Object;
        goto LABEL_501;
      }
      if ( v183 )
        PspSetNoChildProcessRestrictedPolicy((struct _KPROCESS *)Object, 3);
      goto LABEL_687;
    case 14:
      if ( (HIDWORD(v256) & 0xFFFFFFF0) != 0 )
      {
        v12 = -1073741811;
        goto LABEL_501;
      }
      if ( (BYTE4(v256) & 1) == 0 && (*((_DWORD *)v132 + 628) & 0x40000000) != 0
        || ((HIDWORD(v256) >> 1) & 1) == 0 && *((int *)v132 + 628) < 0
        || ((HIDWORD(v256) >> 3) & 1) == 0 && (*((_DWORD *)v132 + 629) & 0x2000) != 0 )
      {
        goto LABEL_429;
      }
      v189 = (HIDWORD(v256) >> 2) & 1;
      if ( v189 || (*((_DWORD *)v132 + 629) & 0x1000) == 0 )
      {
        if ( (BYTE4(v256) & 1) != 0 )
        {
          _InterlockedOr((volatile signed __int32 *)v132 + 628, 0x40000000u);
          v132 = (unsigned __int8 *)Object;
        }
        if ( ((HIDWORD(v256) >> 1) & 1) != 0 )
        {
          _InterlockedOr((volatile signed __int32 *)v132 + 628, 0x80000000);
          _InterlockedOr((volatile signed __int32 *)Object + 543, 0x200000u);
          PspWriteProcessSecurityDomain((__int64)Object, _InterlockedIncrement64(&PsNextSecurityDomain), 1);
          KeSynchronizeSecurityDomain((_KPROCESS *)Object);
          v132 = (unsigned __int8 *)Object;
        }
        if ( v189 )
        {
          _InterlockedOr((volatile signed __int32 *)v132 + 629, 0x1000u);
          v132 = (unsigned __int8 *)Object;
        }
        if ( ((HIDWORD(v256) >> 3) & 1) != 0 )
        {
          _InterlockedOr((volatile signed __int32 *)v132 + 629, 0x2000u);
          v132 = (unsigned __int8 *)Object;
        }
        v12 = 0;
      }
      else
      {
        v12 = -1073741790;
      }
      goto LABEL_501;
    case 15:
      v190 = HIDWORD(v256);
      if ( (HIDWORD(v256) & 0xFFFFFC00) == 0 )
      {
        if ( (BYTE4(v256) & 0x10) != 0 )
        {
          v190 = HIDWORD(v256) | 1;
          HIDWORD(v256) |= 1u;
        }
        if ( (v190 & 0x200) != 0 )
        {
          v190 |= 4u;
          HIDWORD(v256) = v190;
        }
        if ( (v190 & 0x40) != 0 )
        {
          v190 |= 0x20u;
          HIDWORD(v256) = v190;
        }
        v191 = (v190 >> 4) & 1;
        if ( !v191 && (*((_DWORD *)v132 + 629) & 0x100000) != 0
          || (v190 & 1) == 0 && (*((_DWORD *)v132 + 629) & 0x4000) != 0 )
        {
          goto LABEL_429;
        }
        if ( (v190 & 1) != 0 && (*((_DWORD *)v132 + 629) & 0x4000) == 0 )
        {
          v12 = -1073741790;
          goto LABEL_501;
        }
        v192 = (v190 >> 9) & 1;
        if ( v192 )
        {
          if ( *((int *)v132 + 629) >= 0 )
            goto LABEL_429;
        }
        v193 = (v190 >> 2) & 1;
        if ( !v193 && (*((_DWORD *)v132 + 629) & 0x20000) != 0 )
          goto LABEL_429;
        if ( v193 && (*((_DWORD *)v132 + 629) & 0x20000) == 0 )
        {
          v12 = -1073741790;
          goto LABEL_501;
        }
        v194 = (v190 >> 6) & 1;
        if ( !v194 && (*((_DWORD *)v132 + 629) & 0x400000) != 0 )
          goto LABEL_429;
        v195 = (v190 >> 5) & 1;
        if ( !v195 && (*((_DWORD *)v132 + 629) & 0x200000) != 0 )
        {
          v12 = -1073741790;
          goto LABEL_501;
        }
        v196 = (v190 >> 8) & 1;
        if ( !v196 && (*((_DWORD *)v132 + 629) & 0x40000000) != 0 )
        {
          v12 = -1073741790;
          goto LABEL_501;
        }
        if ( ((v190 >> 1) & 1) == 0 && (*((_DWORD *)v132 + 629) & 0x8000) != 0
          || ((v190 >> 1) & 1) != 0 && (*((_DWORD *)v132 + 629) & 0x8000) == 0
          || ((v190 >> 3) & 1) == 0 && (*((_DWORD *)v132 + 629) & 0x40000) != 0
          || ((v190 >> 3) & 1) != 0 && (*((_DWORD *)v132 + 629) & 0x40000) == 0
          || (v197 = (v190 >> 7) & 1) == 0 && (*((_DWORD *)v132 + 629) & 0x800000) != 0 )
        {
LABEL_429:
          v12 = -1073741790;
          goto LABEL_501;
        }
        if ( v197 && (*((_DWORD *)v132 + 629) & 0x800000) == 0 )
        {
          v12 = -1073741790;
          goto LABEL_501;
        }
        if ( v191 )
        {
          _InterlockedOr((volatile signed __int32 *)v132 + 629, 0x100000u);
          v132 = (unsigned __int8 *)Object;
        }
        if ( !v192 && v193 )
        {
          _InterlockedAnd((volatile signed __int32 *)v132 + 629, 0x7FFFFFFFu);
          v132 = (unsigned __int8 *)Object;
        }
        if ( v194 )
        {
          _InterlockedOr((volatile signed __int32 *)v132 + 629, 0x200000u);
          _InterlockedOr((volatile signed __int32 *)Object + 629, 0x400000u);
        }
        else
        {
          if ( !v195 )
          {
LABEL_778:
            if ( v196 )
            {
              _InterlockedOr((volatile signed __int32 *)v132 + 629, 0x40000000u);
              v132 = (unsigned __int8 *)Object;
            }
            v12 = 0;
            goto LABEL_501;
          }
          _InterlockedOr((volatile signed __int32 *)v132 + 629, 0x200000u);
        }
        v132 = (unsigned __int8 *)Object;
        goto LABEL_778;
      }
      v12 = -1073741811;
LABEL_501:
      v144 = 0;
LABEL_502:
      if ( v144 != 1 )
        return v12;
      ObfDereferenceObjectWithTag(v132, 0x79517350u);
      return v12;
    case 16:
      v184 = HIDWORD(v256);
      if ( (HIDWORD(v256) & 0xFFFFFFFC) != 0 )
      {
        v12 = -1073741811;
        goto LABEL_501;
      }
      if ( (BYTE4(v256) & 1) != 0 && (BYTE4(v256) & 2) != 0 )
        v184 = HIDWORD(v256) & 0xFFFFFFFD;
      RedirectionTrustPolicy = PspGetRedirectionTrustPolicy((struct _KPROCESS *)v132);
      v186 = v184 & 1;
      if ( (v184 & 1) == 0 && RedirectionTrustPolicy == 1 )
      {
        v12 = -1073741790;
        v132 = (unsigned __int8 *)Object;
        goto LABEL_501;
      }
      v187 = (v184 >> 1) & 1;
      if ( v187 )
        goto LABEL_700;
      if ( v186 )
        goto LABEL_701;
      if ( RedirectionTrustPolicy == 2 )
      {
        v12 = -1073741790;
        v132 = (unsigned __int8 *)Object;
      }
      else
      {
LABEL_700:
        if ( v186 )
        {
LABEL_701:
          v188 = 1;
        }
        else
        {
          if ( !v187 )
          {
LABEL_687:
            v12 = 0;
            v132 = (unsigned __int8 *)Object;
            goto LABEL_501;
          }
          v188 = 2;
        }
        PspSetRedirectionTrustPolicy((struct _KPROCESS *)Object, v188);
        v12 = 0;
        v132 = (unsigned __int8 *)Object;
      }
      goto LABEL_501;
    default:
      goto LABEL_500;
  }
}
