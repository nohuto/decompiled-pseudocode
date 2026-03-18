/*
 * XREFs of ExpQuerySystemInformation @ 0x14073B5A0
 * Callers:
 *     NtQuerySystemInformationEx @ 0x1406B62F0 (NtQuerySystemInformationEx.c)
 *     NtQuerySystemInformation @ 0x14073D860 (NtQuerySystemInformation.c)
 * Callees:
 *     MmGetHighestPhysicalPage @ 0x14020DB30 (MmGetHighestPhysicalPage.c)
 *     ExpGetSystemEmulationBasicInformation @ 0x14023559C (ExpGetSystemEmulationBasicInformation.c)
 *     ExpGetSystemBasicInformation @ 0x140235738 (ExpGetSystemBasicInformation.c)
 *     KeQueryCycleTimeStatsProcessor @ 0x140242E98 (KeQueryCycleTimeStatsProcessor.c)
 *     KeQueryBootTimeValues @ 0x140243A18 (KeQueryBootTimeValues.c)
 *     PoGetPerfStateAndParkingInfo @ 0x1402485E0 (PoGetPerfStateAndParkingInfo.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x140258040 (ExCpuSetResourceManagerAccessCheck.c)
 *     MmGetLowestPhysicalPage @ 0x14025E350 (MmGetLowestPhysicalPage.c)
 *     KeIsKernelCetEnabled @ 0x14025E490 (KeIsKernelCetEnabled.c)
 *     KeIsCetCapable @ 0x14025E5E0 (KeIsCetCapable.c)
 *     KeIsKernelCetAuditModeEnabled @ 0x14025E5F4 (KeIsKernelCetAuditModeEnabled.c)
 *     VslIsSecureKernelRunning @ 0x14025E6F8 (VslIsSecureKernelRunning.c)
 *     KeQueryActiveGroupCount @ 0x1402622B0 (KeQueryActiveGroupCount.c)
 *     ExpGetSystemEmulationProcessorInformation @ 0x1402630FC (ExpGetSystemEmulationProcessorInformation.c)
 *     ExpGetSystemProcessorInformation @ 0x140263154 (ExpGetSystemProcessorInformation.c)
 *     MmQuerySystemWorkingSetInformation @ 0x140263404 (MmQuerySystemWorkingSetInformation.c)
 *     KeQueryLogicalProcessorRelationship @ 0x140263790 (KeQueryLogicalProcessorRelationship.c)
 *     MmGetSharedCommit @ 0x14026924C (MmGetSharedCommit.c)
 *     MmGetResidentAvailablePages @ 0x14026925C (MmGetResidentAvailablePages.c)
 *     MmGetPeakCommitment @ 0x14026A03C (MmGetPeakCommitment.c)
 *     MmGetTotalCommitLimit @ 0x14026A05C (MmGetTotalCommitLimit.c)
 *     MmGetTotalCommittedPages @ 0x14026A07C (MmGetTotalCommittedPages.c)
 *     MmGetAvailablePages @ 0x14026A09C (MmGetAvailablePages.c)
 *     MmGetProcessPartitionId @ 0x14026A0BC (MmGetProcessPartitionId.c)
 *     PoGetIdleTimes @ 0x140293444 (PoGetIdleTimes.c)
 *     KeGetProcessorIndexFromNumber @ 0x140293580 (KeGetProcessorIndexFromNumber.c)
 *     VslGetNestedPageProtectionFlags @ 0x140294CC0 (VslGetNestedPageProtectionFlags.c)
 *     KeIsUserCetAllowed @ 0x1402A08A8 (KeIsUserCetAllowed.c)
 *     PsIsHostSilo @ 0x1402A6DF0 (PsIsHostSilo.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     KeGetRecommendedSharedDataAlignment @ 0x1402D3250 (KeGetRecommendedSharedDataAlignment.c)
 *     KeQueryGroupAffinity @ 0x1402D75B0 (KeQueryGroupAffinity.c)
 *     KeFlushProcessWriteBuffers @ 0x1402F374C (KeFlushProcessWriteBuffers.c)
 *     PoEnergyEstimationEnabled @ 0x1402F6160 (PoEnergyEstimationEnabled.c)
 *     PsGetCurrentServerSilo @ 0x1402F61B0 (PsGetCurrentServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     KeEnumerateNextSchedulerSubNodeInNode @ 0x140354698 (KeEnumerateNextSchedulerSubNodeInNode.c)
 *     MmQueryMemoryListInformation @ 0x140360AC0 (MmQueryMemoryListInformation.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140367B10 (ExAllocatePoolWithQuotaTag.c)
 *     PsQueryCpuQuotaInformation @ 0x1403DF48C (PsQueryCpuQuotaInformation.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwFilterBootOption @ 0x14041D480 (ZwFilterBootOption.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     HvlQueryActiveProcessors @ 0x140543A70 (HvlQueryActiveProcessors.c)
 *     HvlQueryProcessorTopologyCount @ 0x140543C60 (HvlQueryProcessorTopologyCount.c)
 *     VslIsTrustletRunning @ 0x14054E7B4 (VslIsTrustletRunning.c)
 *     VslQuerySecureKernelProfileInformation @ 0x14054EE64 (VslQuerySecureKernelProfileInformation.c)
 *     KeQueryDpcWatchdogConfiguration @ 0x1405683C0 (KeQueryDpcWatchdogConfiguration.c)
 *     KeInitializeSchedulerSubNodeEnumerationContext @ 0x14056D75C (KeInitializeSchedulerSubNodeEnumerationContext.c)
 *     KeQuerySecureSpeculationInformation @ 0x1405711E4 (KeQuerySecureSpeculationInformation.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x140577F60 (KeGetAffinitizedInterruptsInfo.c)
 *     MmEnumerateBadPages @ 0x1405C5B98 (MmEnumerateBadPages.c)
 *     PpmCapturePerformanceDistribution @ 0x1405D6FBC (PpmCapturePerformanceDistribution.c)
 *     PsQueryActivityModerationUserSettings @ 0x1405E04A0 (PsQueryActivityModerationUserSettings.c)
 *     RtlCheckXfgFailureInformation @ 0x1405EE7E0 (RtlCheckXfgFailureInformation.c)
 *     SeQueryTrustedPlatformModuleInformation @ 0x1405F5398 (SeQueryTrustedPlatformModuleInformation.c)
 *     VfGetVerifierInformation @ 0x140601D00 (VfGetVerifierInformation.c)
 *     ExpGetLookasideInformation @ 0x1406384AC (ExpGetLookasideInformation.c)
 *     ExpQueryBootLoaderMetadata @ 0x1406389A8 (ExpQueryBootLoaderMetadata.c)
 *     ExGetBigPoolInfo @ 0x14063A8C0 (ExGetBigPoolInfo.c)
 *     ExPoolQueryLimits @ 0x14063AC94 (ExPoolQueryLimits.c)
 *     ExGetSessionPoolTagInformation @ 0x1406A8B68 (ExGetSessionPoolTagInformation.c)
 *     PsGetSupportedProcessorArchitectures @ 0x1406AD42C (PsGetSupportedProcessorArchitectures.c)
 *     ExHandleSPCall2 @ 0x1406B6054 (ExHandleSPCall2.c)
 *     CmQueryFeatureConfigurationSections @ 0x1406BC564 (CmQueryFeatureConfigurationSections.c)
 *     ExIsRestrictedCaller @ 0x1406C5900 (ExIsRestrictedCaller.c)
 *     PsQueryFullProcessImageName @ 0x1406C6384 (PsQueryFullProcessImageName.c)
 *     PfSnQueryPrefetcherInformation @ 0x1406C8B78 (PfSnQueryPrefetcherInformation.c)
 *     ExpGetSystemFlushInformation @ 0x1406C955C (ExpGetSystemFlushInformation.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1406C9754 (ExpGetSystemFirmwareTableInformation.c)
 *     KeBuildLogicalProcessorSystemInformation @ 0x1406CD16C (KeBuildLogicalProcessorSystemInformation.c)
 *     IoQuerySystemDeviceName @ 0x1406CDACC (IoQuerySystemDeviceName.c)
 *     SeCodeIntegrityQueryInformation @ 0x1406D5A94 (SeCodeIntegrityQueryInformation.c)
 *     SeSecureBootQueryInformation @ 0x1406E0D3C (SeSecureBootQueryInformation.c)
 *     IoQueryLowPriorityIoInformation @ 0x1406E47F0 (IoQueryLowPriorityIoInformation.c)
 *     ExpQueryNumaProcessorMap @ 0x1406F2350 (ExpQueryNumaProcessorMap.c)
 *     ExpQuerySystemPerformanceInformation @ 0x1406F2420 (ExpQuerySystemPerformanceInformation.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     PfQuerySuperfetchInformation @ 0x14072ACC0 (PfQuerySuperfetchInformation.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     ExpQueryModuleInformationEx @ 0x140759300 (ExpQueryModuleInformationEx.c)
 *     ExpQueryModuleInformation @ 0x140759A80 (ExpQueryModuleInformation.c)
 *     CmQueryBuildVersionInformation @ 0x14075AF98 (CmQueryBuildVersionInformation.c)
 *     PsLookupProcessByProcessId @ 0x1407A8720 (PsLookupProcessByProcessId.c)
 *     ExpGetProcessInformation @ 0x1407B6CA0 (ExpGetProcessInformation.c)
 *     ExAcquireTimeRefreshLock @ 0x1407D6F54 (ExAcquireTimeRefreshLock.c)
 *     WbDispatchOperation @ 0x1407E2B70 (WbDispatchOperation.c)
 *     ExpReadComPlusPackage @ 0x1407F8664 (ExpReadComPlusPackage.c)
 *     ExGetPoolTagInfo @ 0x1407F9820 (ExGetPoolTagInfo.c)
 *     SmQueryStoreInformation @ 0x1407FA644 (SmQueryStoreInformation.c)
 *     MmGetPageFileInformation @ 0x1407FC0D0 (MmGetPageFileInformation.c)
 *     SeQueryHSTIResults @ 0x1407FCA14 (SeQueryHSTIResults.c)
 *     CmQueryRegistryQuotaInformation @ 0x14080B5A8 (CmQueryRegistryQuotaInformation.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14081C05C (EtwQueryPerformanceTraceInformation.c)
 *     ExpQueryMemoryTopologyInformation @ 0x140855DD8 (ExpQueryMemoryTopologyInformation.c)
 *     KeQueryCpuSetInformation @ 0x14085634C (KeQueryCpuSetInformation.c)
 *     ExpQueryInterruptSteeringInformation @ 0x14085F318 (ExpQueryInterruptSteeringInformation.c)
 *     ExpGetSystemPlatformBinary @ 0x14085FAA4 (ExpGetSystemPlatformBinary.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x1408624E8 (ExpGetSystemWriteConstraintInformation.c)
 *     HvlQueryEnlightenmentInfo @ 0x140862FD8 (HvlQueryEnlightenmentInfo.c)
 *     IoQueryVhdBootInformation @ 0x140863390 (IoQueryVhdBootInformation.c)
 *     ExQueryBootEntropyInformation @ 0x14086423C (ExQueryBootEntropyInformation.c)
 *     CmQuerySingleFeatureConfiguration @ 0x140911230 (CmQuerySingleFeatureConfiguration.c)
 *     HvlQueryDetailInfo @ 0x140930DA8 (HvlQueryDetailInfo.c)
 *     HvlQueryVsmProtectionInfo @ 0x140930EC4 (HvlQueryVsmProtectionInfo.c)
 *     VslIsEncryptionKeyAvailable @ 0x140932544 (VslIsEncryptionKeyAvailable.c)
 *     VslTransformDumpKey @ 0x140932F44 (VslTransformDumpKey.c)
 *     KeQuerySpeculationControlInformation @ 0x140961998 (KeQuerySpeculationControlInformation.c)
 *     KeQueryKvaShadowInformation @ 0x140962C48 (KeQueryKvaShadowInformation.c)
 *     ObQueryRefTraceInformation @ 0x1409855BC (ObQueryRefTraceInformation.c)
 *     PsRootSiloInformation @ 0x1409AB8A0 (PsRootSiloInformation.c)
 *     SeSecurityModelQueryInformation @ 0x1409C674C (SeSecurityModelQueryInformation.c)
 *     ExGetSessionBigPoolInformation @ 0x1409F5D80 (ExGetSessionBigPoolInformation.c)
 *     ExpGetDeviceDataInformation @ 0x1409F6464 (ExpGetDeviceDataInformation.c)
 *     ExpGetHandleInformation @ 0x1409F6670 (ExpGetHandleInformation.c)
 *     ExpGetHandleInformationEx @ 0x1409F66F0 (ExpGetHandleInformationEx.c)
 *     ExpGetLockInformation @ 0x1409F6770 (ExpGetLockInformation.c)
 *     ExpGetObjectInformation @ 0x1409F67F0 (ExpGetObjectInformation.c)
 *     ExpGetSystemProcessorFeaturesInformation @ 0x1409F6880 (ExpGetSystemProcessorFeaturesInformation.c)
 *     ExpQueryChannelInformation @ 0x1409F68DC (ExpQueryChannelInformation.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x1409F6A1C (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryLegacyDriverInformation @ 0x1409F6F98 (ExpQueryLegacyDriverInformation.c)
 *     ExpQueryNumaAvailableMemory @ 0x1409F7090 (ExpQueryNumaAvailableMemory.c)
 *     ExpQueryNumaProximityNode @ 0x1409F7240 (ExpQueryNumaProximityNode.c)
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x1409F7390 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     ExpQuerySingleModuleInformation @ 0x1409F75A0 (ExpQuerySingleModuleInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExpCovQueryInformation @ 0x140A0350C (ExpCovQueryInformation.c)
 *     WheaQuerySystemInformation @ 0x140A08710 (WheaQuerySystemInformation.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 *     VfGetVerifierInformationEx @ 0x140A9C7B0 (VfGetVerifierInformationEx.c)
 *     BgkQueryBootGraphicsInformation @ 0x140AACB50 (BgkQueryBootGraphicsInformation.c)
 */

int __fastcall ExpQuerySystemInformation(
        int a1,
        void *a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned int Length,
        ULONG *a6)
{
  unsigned int v8; // edi
  __int64 v9; // rcx
  ULONG v10; // r8d
  LOGICAL_PROCESSOR_RELATIONSHIP v11; // r15d
  __int64 v12; // r9
  unsigned __int16 v13; // r12
  void *v14; // r13
  __int64 v15; // r8
  __int64 v16; // rdx
  int SystemBasicInformation; // eax
  int result; // eax
  ULONG ActiveProcessorCount; // eax
  unsigned int v20; // edi
  PVOID v21; // rdi
  unsigned __int16 v22; // ax
  unsigned __int16 v23; // cx
  unsigned __int16 v24; // cx
  unsigned __int16 v25; // cx
  unsigned __int16 v26; // cx
  __int64 v27; // rcx
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *Pool2; // r12
  ULONG v29; // r13d
  struct _PROCESSOR_NUMBER *p_ProcNumber; // rax
  _OWORD *v31; // rsi
  __int64 v32; // rcx
  _OWORD *v33; // rax
  __int64 v34; // r15
  __int64 v35; // rcx
  _OWORD *v36; // rax
  ULONG v37; // eax
  unsigned int v38; // ecx
  unsigned int v39; // r15d
  _DWORD *v40; // r13
  ULONG v41; // ecx
  __int64 v42; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
  ULONG v46; // ecx
  __int64 v47; // rsi
  __int64 v48; // rcx
  unsigned __int16 ProcessPartitionId; // ax
  unsigned __int16 v50; // cx
  unsigned __int16 v51; // cx
  unsigned __int16 v52; // cx
  unsigned int v53; // r15d
  ULONG v54; // r15d
  unsigned __int64 v55; // rdi
  char v56; // si
  __int64 v57; // rsi
  __int64 v58; // rdx
  unsigned int v59; // esi
  _DWORD *v60; // rdx
  struct _KTHREAD *v61; // rax
  int v62; // ecx
  ULONG v63; // eax
  int v64; // edx
  int v65; // r8d
  unsigned int v66; // ecx
  __int64 v67; // rax
  __int64 v68; // rdx
  unsigned __int16 v69; // ax
  unsigned __int16 v70; // cx
  bool IsUserCetAllowed; // al
  int v72; // ecx
  bool IsKernelCetEnabled; // al
  int v74; // r8d
  bool IsKernelCetAuditModeEnabled; // al
  int v76; // edx
  unsigned int v77; // r10d
  unsigned int i; // r9d
  __int64 v79; // rdx
  unsigned __int8 v80; // r12
  struct _MDL *PoolWithQuotaTag; // rdi
  int v82; // eax
  void *v83; // rcx
  PVOID v84; // rdi
  unsigned int v85; // eax
  unsigned __int64 v86; // r15
  _DWORD *PoolWithTag; // rax
  _DWORD *v88; // rdi
  char *v89; // rdx
  struct _KTHREAD *v90; // r15
  NTSTATUS v91; // edi
  unsigned int v92; // ebx
  unsigned int v93; // ecx
  unsigned int v94; // ecx
  __int64 v95; // rdx
  unsigned int v96; // eax
  unsigned int v97; // esi
  unsigned int v98; // r15d
  __int64 v99; // rcx
  _QWORD *v100; // rax
  ULONG v101; // eax
  int v102; // ecx
  ULONG v103; // edi
  __int64 v104; // r8
  __int64 v105; // r9
  PVOID v106; // rdi
  __int64 v107; // rax
  int v108; // esi
  PVOID v109; // r15
  unsigned int v110; // eax
  unsigned int v111; // esi
  __int64 v112; // rcx
  __int64 CurrentServerSilo; // rax
  __int16 NestedPageProtectionFlags; // di
  char v115; // cl
  __int64 v116; // rdx
  __int64 v117; // rcx
  char IsEncryptionKeyAvailable; // al
  unsigned __int16 *v119; // rax
  unsigned __int16 *v120; // rsi
  unsigned __int16 *v121; // rax
  __int64 v122; // r15
  struct _MDL *v123; // rax
  unsigned __int8 v124; // r12
  int v125; // eax
  int ModuleInformation; // [rsp+40h] [rbp-828h]
  ULONG v127; // [rsp+44h] [rbp-824h] BYREF
  unsigned int Size; // [rsp+48h] [rbp-820h]
  char Size_4; // [rsp+4Ch] [rbp-81Ch]
  int v130; // [rsp+50h] [rbp-818h]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+54h] [rbp-814h] BYREF
  unsigned __int16 v132; // [rsp+58h] [rbp-810h]
  int v133; // [rsp+5Ch] [rbp-80Ch]
  unsigned int v134; // [rsp+60h] [rbp-808h]
  unsigned int v135; // [rsp+64h] [rbp-804h]
  PVOID P; // [rsp+68h] [rbp-800h]
  USHORT v137; // [rsp+70h] [rbp-7F8h]
  ULONG NumberOfBytes; // [rsp+74h] [rbp-7F4h] BYREF
  char NumberOfBytes_4; // [rsp+78h] [rbp-7F0h] BYREF
  ULONG *v140; // [rsp+80h] [rbp-7E8h]
  char v141; // [rsp+BFh] [rbp-7A9h]
  _DWORD v142[3]; // [rsp+114h] [rbp-754h] BYREF
  _QWORD *v143; // [rsp+120h] [rbp-748h]
  struct _PROCESSOR_NUMBER *v144; // [rsp+128h] [rbp-740h]
  PVOID Object; // [rsp+130h] [rbp-738h] BYREF
  int v146; // [rsp+138h] [rbp-730h]
  unsigned int v147; // [rsp+13Ch] [rbp-72Ch] BYREF
  unsigned int v148; // [rsp+140h] [rbp-728h]
  unsigned int v149; // [rsp+144h] [rbp-724h] BYREF
  int v150; // [rsp+148h] [rbp-720h] BYREF
  int v151; // [rsp+14Ch] [rbp-71Ch] BYREF
  int v152; // [rsp+150h] [rbp-718h]
  PVOID v153; // [rsp+158h] [rbp-710h] BYREF
  PVOID v154; // [rsp+160h] [rbp-708h] BYREF
  __int64 v155; // [rsp+168h] [rbp-700h]
  HANDLE ProcessId[2]; // [rsp+170h] [rbp-6F8h]
  char *v157; // [rsp+180h] [rbp-6E8h]
  __int64 v158; // [rsp+188h] [rbp-6E0h] BYREF
  volatile void *v159; // [rsp+190h] [rbp-6D8h]
  __int64 v160; // [rsp+198h] [rbp-6D0h] BYREF
  PVOID v161; // [rsp+1A0h] [rbp-6C8h] BYREF
  __int64 v162; // [rsp+1A8h] [rbp-6C0h]
  PVOID v163; // [rsp+1B0h] [rbp-6B8h] BYREF
  __int128 v164; // [rsp+1B8h] [rbp-6B0h] BYREF
  __int64 v165; // [rsp+1F8h] [rbp-670h]
  int v166; // [rsp+628h] [rbp-240h]
  __int128 v167; // [rsp+630h] [rbp-238h] BYREF
  PVOID BaseAddress[2]; // [rsp+640h] [rbp-228h]
  __int128 v169; // [rsp+650h] [rbp-218h]
  _OWORD Src[27]; // [rsp+670h] [rbp-1F8h] BYREF

  v134 = a3;
  P = a2;
  Size = Length;
  v140 = a6;
  v8 = 0;
  NumberOfBytes = 0;
  v158 = 0LL;
  v149 = 0;
  v150 = 0;
  v133 = 0;
  v142[0] = 0;
  v132 = 0;
  v137 = 0;
  v164 = 0LL;
  Object = 0LL;
  ProcNumber = 0;
  *(_OWORD *)BaseAddress = 0LL;
  v169 = 0LL;
  v154 = 0LL;
  v153 = 0LL;
  v146 = 0;
  v160 = 0LL;
  v167 = 0LL;
  memset(Src, 0, sizeof(Src));
  ModuleInformation = 0;
  Size_4 = KeGetCurrentThread()->PreviousMode;
  if ( Size_4 )
  {
    if ( a1 < 88 && a1 >= 73 || a1 >= 174 && a1 < 188 )
    {
LABEL_4:
      v10 = 4;
LABEL_5:
      v130 = 1;
    }
    else
    {
      switch ( a1 )
      {
        case 12:
          v10 = 8;
          goto LABEL_5;
        case 35:
        case 145:
        case 147:
        case 149:
        case 158:
        case 163:
        case 169:
        case 202:
        case 227:
          v130 = 1;
          v10 = 1;
          break;
        default:
          goto LABEL_4;
      }
    }
    ProbeForWrite((volatile void *)a4, Length, v10);
    if ( a6 )
    {
      v9 = (__int64)a6;
      if ( (unsigned __int64)a6 >= 0x7FFFFFFF0000LL )
        v9 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v9 = *(_DWORD *)v9;
    }
  }
  else
  {
    v130 = 1;
  }
  v127 = 0;
  v11 = RelationAll;
  v152 = 0xFFFF;
  v12 = 0LL;
  LODWORD(v144) = 0;
  v13 = 0;
  v137 = 0;
  v132 = 0;
  v155 = 0LL;
  v14 = 0LL;
  v165 = 0LL;
  v162 = 0LL;
  v135 = 9;
  v146 = 9;
  if ( a1 < 83 && a1 >= 74 || a1 >= 182 && a1 < 230 )
  {
LABEL_12:
    v15 = v132;
LABEL_13:
    v16 = v135;
LABEL_14:
    if ( a1 == 79 )
    {
      SystemBasicInformation = PfQuerySuperfetchInformation(v9, (__int128 *)a4, Size, Size_4, &v127);
    }
    else
    {
      if ( a1 != 185 )
      {
        switch ( a1 )
        {
          case 0:
          case 114:
            if ( Size == 64 )
            {
              SystemBasicInformation = ExpGetSystemBasicInformation(a4);
              v127 = 64;
              goto LABEL_16;
            }
            if ( a6 )
              *a6 = 64;
            goto LABEL_236;
          case 1:
            if ( Size >= 0xC )
            {
              SystemBasicInformation = ExpGetSystemProcessorInformation(a4);
              v127 = 12;
              goto LABEL_16;
            }
            if ( a6 )
              *a6 = 12;
            goto LABEL_236;
          case 2:
            v20 = Size;
            if ( Size >= 0x138 )
            {
              if ( Size > 0x158 )
                v20 = 344;
              ExpQuerySystemPerformanceInformation(v12, (void *)a4, v20);
              goto LABEL_39;
            }
            if ( a6 )
              *a6 = 344;
            goto LABEL_236;
          case 3:
            v20 = Size;
            if ( Size > 0x30 )
            {
              if ( a6 )
                *a6 = 48;
              goto LABEL_236;
            }
            KeQueryBootTimeValues((_QWORD *)Src + 1, (LARGE_INTEGER *)Src, &Src[2]);
            v27 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 157);
            *(_QWORD *)&Src[1] = *(_QWORD *)(v27 + 440);
            DWORD2(Src[1]) = *(_DWORD *)(v27 + 432);
            *((_QWORD *)&Src[2] + 1) = MEMORY[0xFFFFF780000003B0];
            memmove((void *)a4, Src, Size);
LABEL_39:
            v127 = v20;
            goto LABEL_17;
          case 4:
          case 10:
          case 25:
          case 29:
          case 96:
            return -1073741822;
          case 5:
          case 57:
          case 148:
            SystemBasicInformation = ExpGetProcessInformation(a4, Size, (unsigned int)&v127, 0, a1);
            goto LABEL_16;
          case 6:
            return -1073741637;
          case 7:
            if ( Size == 24 )
            {
              *(_DWORD *)a4 = dword_140D3B848;
              *(_DWORD *)(a4 + 4) = dword_140D3B84C;
              *(_DWORD *)(a4 + 8) = dword_140D3B850;
              *(_DWORD *)(a4 + 12) = dword_140D3B854;
              *(_DWORD *)(a4 + 16) = dword_140D3B85C;
              *(_DWORD *)(a4 + 20) = dword_140D3B860;
              goto LABEL_206;
            }
            if ( a6 )
              *a6 = 24;
            goto LABEL_236;
          case 8:
          case 141:
            v38 = 48;
            if ( a1 != 8 )
              v38 = 72;
            v134 = v38;
            if ( !Size || Size % v38 )
            {
              if ( a6 )
                *a6 = v12 * v38;
              goto LABEL_236;
            }
            v135 = 0;
            v39 = 0;
            v133 = 0;
            while ( 1 )
            {
              v143 = (_QWORD *)a4;
              if ( v39 >= (unsigned int)v12 )
                break;
              ProcNumber.Group = v13;
              ProcNumber.Number = v39;
              ProcNumber.Reserved = 0;
              v40 = (_DWORD *)KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)];
              v41 = v135;
              if ( Size < v135 + v134 )
                goto LABEL_93;
              v135 += v134;
              PoGetIdleTimes(&ProcNumber, 0LL, (__int64)Src);
              v42 = (unsigned int)KeMaximumIncrement;
              *(_QWORD *)(a4 + 16) = (unsigned int)KeMaximumIncrement * (unsigned __int64)(unsigned int)v40[8274];
              *(_QWORD *)(a4 + 8) = v42 * DWORD1(Src[0]);
              *(_QWORD *)(a4 + 24) = v42 * (unsigned int)v40[8275];
              *(_QWORD *)(a4 + 32) = v42 * (unsigned int)v40[8276];
              *(_QWORD *)a4 = v42 * LODWORD(Src[0]);
              *(_DWORD *)(a4 + 40) = v40[8272];
              if ( a1 == 141 )
              {
                *(_QWORD *)(a4 + 48) = v42 * (unsigned int)v40[8283];
                *(_DWORD *)(a4 + 44) = 0;
                *(_QWORD *)(a4 + 56) = 0LL;
                *(_QWORD *)(a4 + 64) = 0LL;
              }
              a4 += v134;
              v133 = ++v39;
              LODWORD(v12) = (_DWORD)v144;
            }
            v41 = v135;
            goto LABEL_93;
          case 9:
            if ( Size == 4 )
            {
              *(_DWORD *)a4 = NtGlobalFlag;
              goto LABEL_164;
            }
            if ( a6 )
              *a6 = 4;
            goto LABEL_236;
          case 11:
            if ( ExIsRestrictedCaller(Size_4) )
              return -1073741790;
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
            ModuleInformation = ExpQueryModuleInformation(v44, a4, Size, &v127);
            ExReleaseResourceLite(&PsLoadedModuleResource);
            KeLeaveCriticalRegion();
            goto LABEL_17;
          case 12:
            if ( Size < 0x38 )
            {
              if ( a6 )
                *a6 = 56;
              goto LABEL_236;
            }
            if ( ExIsRestrictedCaller(Size_4) )
              return -1073741790;
            SystemBasicInformation = ExpGetLockInformation(a4, Size, &v127);
            goto LABEL_16;
          case 13:
            if ( Size >= 0x128 )
              goto LABEL_373;
            if ( a6 )
              *a6 = 296;
            goto LABEL_236;
          case 14:
          case 15:
          case 19:
LABEL_373:
            ModuleInformation = -1073741822;
            goto LABEL_17;
          case 16:
            if ( Size < 0x20 )
            {
              if ( a6 )
                *a6 = 32;
              goto LABEL_236;
            }
            if ( (a4 & 7) != 0 )
              return -2147483646;
            if ( !ExIsRestrictedCaller(Size_4) )
            {
              SystemBasicInformation = ExpGetHandleInformation(a4, Size, &v127);
              goto LABEL_16;
            }
            return -1073741790;
          case 17:
            if ( Size < 0x40 )
            {
              if ( a6 )
                *a6 = 64;
              goto LABEL_236;
            }
            if ( ExIsRestrictedCaller(Size_4) )
              return -1073741790;
            SystemBasicInformation = ExpGetObjectInformation(a4, Size, &v127);
            goto LABEL_16;
          case 18:
          case 144:
            v63 = 32;
            if ( a1 != 18 )
              v63 = 40;
            v127 = v63;
            if ( Size >= v63 )
            {
              v127 = 0;
              LOBYTE(v8) = a1 == 144;
              SystemBasicInformation = MmGetPageFileInformation(Size, a4, Size, v8, (__int64)&v127);
              goto LABEL_16;
            }
            if ( a6 )
              *a6 = v63;
            goto LABEL_236;
          case 21:
          case 81:
          case 119:
          case 120:
            if ( Size >= 0x40 )
            {
              v53 = 2;
              if ( a1 == 119 )
              {
                v53 = 3;
              }
              else if ( a1 == 120 )
              {
                v53 = 4;
              }
              MmQuerySystemWorkingSetInformation(v53, Src);
              *(_OWORD *)a4 = Src[0];
              *(_DWORD *)(a4 + 16) = Src[1];
              v133 = 64;
              *(_QWORD *)(a4 + 24) = *((_QWORD *)&Src[1] + 1);
              *(_OWORD *)(a4 + 32) = Src[2];
              *(_OWORD *)(a4 + 48) = Src[3];
              v127 = 64;
              goto LABEL_17;
            }
            if ( a6 )
              *a6 = 64;
            goto LABEL_236;
          case 22:
            if ( Size >= 0x30 )
            {
              SystemBasicInformation = ExGetPoolTagInfo(a4, Size, &v127, v12);
              goto LABEL_16;
            }
            if ( a6 )
              *a6 = 48;
            goto LABEL_236;
          case 23:
            v127 = 24 * v12;
            if ( Size >= 24 * (int)v12 )
            {
              v59 = 0;
              v133 = 0;
              while ( 1 )
              {
                v143 = (_QWORD *)a4;
                if ( v59 >= (unsigned int)v12 )
                  break;
                ProcNumber.Group = v13;
                ProcNumber.Number = v59;
                ProcNumber.Reserved = 0;
                v60 = (_DWORD *)KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)];
                *(_DWORD *)a4 = v60[2895];
                *(_DWORD *)(a4 + 4) = v60[3287];
                *(_DWORD *)(a4 + 8) = v60[3307];
                *(_DWORD *)(a4 + 12) = KeTimeIncrement;
                *(_DWORD *)(a4 + 16) = 0;
                *(_DWORD *)(a4 + 20) = 0;
                a4 += 24LL;
                v133 = ++v59;
                LODWORD(v12) = (_DWORD)v144;
              }
              goto LABEL_158;
            }
            if ( a6 )
              *a6 = 24 * v12;
            goto LABEL_236;
          case 24:
            if ( Size == 20 )
            {
              *(_DWORD *)(a4 + 4) = KiMaximumDpcQueueDepth;
              *(_DWORD *)(a4 + 8) = KiMinimumDpcRate;
              *(_DWORD *)(a4 + 12) = KiAdjustDpcThreshold;
              *(_DWORD *)(a4 + 16) = KiIdealDpcRate;
              goto LABEL_438;
            }
            if ( a6 )
              *a6 = 20;
            goto LABEL_236;
          case 28:
            v54 = Size;
            if ( Size == 24 || Size == 12 )
            {
              LOBYTE(v9) = 1;
              ExAcquireTimeRefreshLock(v9);
              v55 = KeTimeAdjustmentFrequency;
              v56 = KeTimeSynchronization;
              ExReleaseResourceLite(&ExpTimeRefreshLock);
              KeLeaveCriticalRegion();
              if ( Size == 24 )
              {
                *(_QWORD *)a4 = v55;
                *(_QWORD *)(a4 + 8) = MEMORY[0xFFFFF78000000300];
                *(_BYTE *)(a4 + 16) = v56;
              }
              else
              {
                *(_DWORD *)a4 = MEMORY[0xFFFFF78000000300] * (unsigned __int64)(unsigned int)KeMaximumIncrement / v55;
                *(_DWORD *)(a4 + 4) = KeMaximumIncrement;
                *(_BYTE *)(a4 + 8) = v56;
              }
              goto LABEL_144;
            }
            if ( a6 )
              *a6 = 12;
            goto LABEL_236;
          case 31:
            SystemBasicInformation = EtwQueryPerformanceTraceInformation(a4, Size, (unsigned __int8)Size_4, &v127);
            goto LABEL_16;
          case 33:
            if ( Size >= 0x10 )
            {
              v127 = 16;
              v64 = 0;
              v65 = 0;
              v66 = 0;
              v133 = 0;
              while ( v66 < (unsigned int)v12 )
              {
                v67 = KiProcessorBlock[v66];
                v64 += *(_DWORD *)(v67 + 34488);
                v65 += *(_DWORD *)(v67 + 33136);
                ++v66;
              }
              v133 = v66;
              *(_DWORD *)a4 = v64;
              *(_DWORD *)(a4 + 4) = v65;
              *(_DWORD *)(a4 + 8) = 0;
              *(_DWORD *)(a4 + 12) = 0;
              goto LABEL_17;
            }
            if ( a6 )
              *a6 = 16;
            goto LABEL_236;
          case 35:
            if ( Size < 2 )
            {
              if ( a6 )
                *a6 = 2;
              goto LABEL_236;
            }
            *(_BYTE *)a4 = (_BYTE)KdDebuggerEnabled;
            *(_BYTE *)(a4 + 1) = (_BYTE)KdDebuggerNotPresent;
            v54 = 2;
LABEL_144:
            v127 = v54;
            goto LABEL_17;
          case 36:
            if ( Size >= 0x30 )
            {
              v93 = 0;
              v133 = 0;
              while ( v93 < (unsigned int)v12 )
                v8 += *(_DWORD *)(KiProcessorBlock[v93++] + 11580);
              v133 = v93;
              *(_DWORD *)a4 = v8;
              *(_DWORD *)(a4 + 4) = KeThreadSwitchCounters;
              *(_DWORD *)(a4 + 8) = dword_140C2B848;
              *(_DWORD *)(a4 + 12) = dword_140C2B844;
              *(_DWORD *)(a4 + 16) = dword_140C2B84C;
              *(_DWORD *)(a4 + 20) = dword_140C2B850;
              *(_DWORD *)(a4 + 24) = dword_140C2B858;
              *(_DWORD *)(a4 + 28) = dword_140C2B854;
              *(_DWORD *)(a4 + 32) = dword_140C2B85C;
              *(_DWORD *)(a4 + 36) = dword_140C2B860;
              *(_DWORD *)(a4 + 40) = dword_140C2B864;
              *(_DWORD *)(a4 + 44) = dword_140C2B868;
              v127 = 48;
              goto LABEL_17;
            }
            if ( a6 )
              *a6 = 48;
            goto LABEL_236;
          case 37:
            if ( Size >= 0x10 )
            {
              SystemBasicInformation = CmQueryRegistryQuotaInformation(a4, v16, v15, v12);
              v127 = 16;
              goto LABEL_16;
            }
            if ( a6 )
              *a6 = 16;
            goto LABEL_236;
          case 42:
            v127 = 48 * v12;
            if ( Size < 48 * (int)v12 )
              goto LABEL_279;
            while ( 1 )
            {
              v133 = v8;
              v143 = (_QWORD *)a4;
              if ( v8 >= (unsigned int)v12 )
                break;
              ProcNumber.Group = v13;
              ProcNumber.Number = v8;
              ProcNumber.Reserved = 0;
              PoGetIdleTimes(&ProcNumber, (__int64)Src, 0LL);
              *(_OWORD *)a4 = Src[0];
              *(_OWORD *)(a4 + 16) = Src[1];
              *(_OWORD *)(a4 + 32) = Src[2];
              a4 += 48LL;
              ++v8;
              LODWORD(v12) = (_DWORD)v144;
            }
            goto LABEL_17;
          case 43:
            if ( Size >= 0x18 )
            {
              v127 = Size;
              SystemBasicInformation = ExpQueryLegacyDriverInformation(a4, &v127, v15, v12);
              goto LABEL_16;
            }
            if ( a6 )
              *a6 = 24;
            goto LABEL_236;
          case 44:
            if ( Size >= 0xAC )
            {
              v47 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 157);
              LOBYTE(v48) = 1;
              ExAcquireTimeRefreshLock(v48);
              Src[0] = *(_OWORD *)v47;
              Src[1] = *(_OWORD *)(v47 + 16);
              Src[2] = *(_OWORD *)(v47 + 32);
              Src[3] = *(_OWORD *)(v47 + 48);
              Src[4] = *(_OWORD *)(v47 + 64);
              Src[5] = *(_OWORD *)(v47 + 80);
              Src[6] = *(_OWORD *)(v47 + 96);
              Src[7] = *(_OWORD *)(v47 + 112);
              Src[8] = *(_OWORD *)(v47 + 128);
              Src[9] = *(_OWORD *)(v47 + 144);
              *(_QWORD *)&Src[10] = *(_QWORD *)(v47 + 160);
              DWORD2(Src[10]) = *(_DWORD *)(v47 + 168);
              ExReleaseResourceLite(&ExpTimeRefreshLock);
              KeLeaveCriticalRegion();
              *(_OWORD *)a4 = Src[0];
              *(_OWORD *)(a4 + 16) = Src[1];
              *(_OWORD *)(a4 + 32) = Src[2];
              *(_OWORD *)(a4 + 48) = Src[3];
              *(_OWORD *)(a4 + 64) = Src[4];
              *(_OWORD *)(a4 + 80) = Src[5];
              *(_OWORD *)(a4 + 96) = Src[6];
              *(_OWORD *)(a4 + 112) = Src[7];
              *(_OWORD *)(a4 + 128) = Src[8];
              *(_OWORD *)(a4 + 144) = Src[9];
              *(_QWORD *)(a4 + 160) = *(_QWORD *)&Src[10];
              *(_DWORD *)(a4 + 168) = DWORD2(Src[10]);
              v127 = 172;
              ModuleInformation = 0;
              goto LABEL_17;
            }
            if ( a6 )
              *a6 = 172;
            goto LABEL_236;
          case 45:
            SystemBasicInformation = ExpGetLookasideInformation(a4, Size, &v127);
            goto LABEL_16;
          case 50:
            if ( Size == 8 )
            {
              *(_QWORD *)a4 = 0xFFFF800000000000uLL;
              goto LABEL_112;
            }
            if ( a6 )
              *a6 = 8;
            goto LABEL_236;
          case 51:
            if ( Size >= 0x90 )
            {
              SystemBasicInformation = VfGetVerifierInformation((void *)a4, Size, &v127, 0);
              goto LABEL_16;
            }
            if ( a6 )
              *a6 = 144;
            goto LABEL_236;
          case 53:
            if ( Size >= 0x10 )
            {
              v142[0] = *(_DWORD *)a4;
              v159 = *(volatile void **)(a4 + 8);
              v148 = *(_DWORD *)(a4 + 4);
              ProbeForWrite(v159, v148, 4u);
              SystemBasicInformation = ExpGetProcessInformation(
                                         (_DWORD)v159,
                                         v148,
                                         (unsigned int)&v127,
                                         (unsigned int)v142,
                                         5);
              goto LABEL_16;
            }
            if ( a6 )
              *a6 = 16;
            goto LABEL_236;
          case 55:
            SystemBasicInformation = ExpQueryNumaProcessorMap((_DWORD *)a4, Size, &v127);
            goto LABEL_16;
          case 56:
            SystemBasicInformation = PfSnQueryPrefetcherInformation(v9, (__int128 *)a4, Size, Size_4, &v127);
            goto LABEL_16;
          case 58:
            if ( Size >= 4 )
            {
              *(_DWORD *)a4 = KeGetRecommendedSharedDataAlignment();
              goto LABEL_164;
            }
            if ( a6 )
              *a6 = 4;
            goto LABEL_236;
          case 59:
            if ( Size != 4 )
            {
              if ( a6 )
                *a6 = 4;
              goto LABEL_236;
            }
            if ( MEMORY[0xFFFFF780000002E0] != -1
              || (result = ExpReadComPlusPackage(v9, v16, v15, v12), ModuleInformation = result, result >= 0) )
            {
              *(_DWORD *)a4 = MEMORY[0xFFFFF780000002E0];
              goto LABEL_164;
            }
            return result;
          case 60:
            SystemBasicInformation = ExpQueryNumaAvailableMemory(a4, Size, &v127, v12);
            goto LABEL_16;
          case 61:
            v127 = 80 * v12;
            if ( Size < 80 * (int)v12 )
              goto LABEL_279;
            v143 = (_QWORD *)a4;
            while ( 1 )
            {
              v133 = v8;
              if ( v8 >= (unsigned int)v12 )
                break;
              ProcNumber.Group = v13;
              ProcNumber.Number = v8;
              ProcNumber.Reserved = 0;
              v57 = KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)];
              PoGetPerfStateAndParkingInfo(&ProcNumber, (__int64)Src, 0LL, &v158);
              memset((void *)a4, 0, 0x50uLL);
              v58 = (unsigned int)KeMaximumIncrement;
              *(_QWORD *)(a4 + 40) = (unsigned int)KeMaximumIncrement
                                   * (unsigned __int64)(unsigned int)(*(_DWORD *)(v57 + 33092) + *(_DWORD *)(v57 + 33096));
              *(_QWORD *)(a4 + 48) = v58 * *(unsigned int *)(*(_QWORD *)(v57 + 24) + 652LL);
              if ( BYTE12(Src[1]) )
              {
                *(_BYTE *)a4 = BYTE8(Src[0]);
                *(_BYTE *)(a4 + 7) = BYTE12(Src[0]);
                *(_BYTE *)(a4 + 8) = Src[1];
                *(_DWORD *)(a4 + 12) = 1;
              }
              *(_QWORD *)(a4 + 72) = v158;
              a4 += 80LL;
              v143 = (_QWORD *)a4;
              ++v8;
              LODWORD(v12) = (_DWORD)v144;
            }
            goto LABEL_17;
          case 62:
            if ( Size == 64 )
            {
              SystemBasicInformation = ExpGetSystemEmulationBasicInformation(a4);
              v127 = 64;
              goto LABEL_16;
            }
            if ( a6 )
              *a6 = 64;
            goto LABEL_236;
          case 63:
            if ( Size >= 0xC )
            {
              SystemBasicInformation = ExpGetSystemEmulationProcessorInformation(a4);
              v127 = 12;
              goto LABEL_16;
            }
            if ( a6 )
              *a6 = 12;
            goto LABEL_236;
          case 64:
            if ( Size < 0x38 )
            {
              if ( a6 )
                *a6 = 56;
              goto LABEL_236;
            }
            if ( (a4 & 7) != 0 )
              return -2147483646;
            if ( !ExIsRestrictedCaller(Size_4) )
            {
              SystemBasicInformation = ExpGetHandleInformationEx(a4, Size, &v127);
              goto LABEL_16;
            }
            return -1073741790;
          case 65:
            if ( Size >= 4 )
            {
              v94 = 0;
              v133 = 0;
              while ( v94 < (unsigned int)v12 )
                v8 += *(_DWORD *)(KiProcessorBlock[v94++] + 33532);
              v133 = v94;
              *(_DWORD *)a4 = v8;
              goto LABEL_164;
            }
            if ( a6 )
              *a6 = 4;
            goto LABEL_236;
          case 66:
            if ( Size < 0x20 )
            {
              if ( a6 )
                *a6 = 32;
              goto LABEL_236;
            }
            if ( ExIsRestrictedCaller(Size_4) )
              return -1073741790;
            SystemBasicInformation = ExGetBigPoolInfo((_DWORD *)a4, Size, 1, &v127);
            goto LABEL_16;
          case 67:
            if ( Size < 0x10 )
            {
              if ( a6 )
                *a6 = 16;
              goto LABEL_236;
            }
            v142[0] = *(_DWORD *)a4;
            v159 = *(volatile void **)(a4 + 8);
            v68 = *(unsigned int *)(a4 + 4);
            v148 = *(_DWORD *)(a4 + 4);
            if ( ((unsigned __int8)v159 & 7) != 0 )
              return -2147483646;
            SystemBasicInformation = ExGetSessionPoolTagInformation((__int64)v159, v68, &v127, v142);
            goto LABEL_16;
          case 68:
            if ( Size < 0x20 )
            {
              if ( a6 )
                *a6 = 32;
              goto LABEL_236;
            }
            v142[0] = *(_DWORD *)(a4 + 8);
            if ( (a4 & 7) == 0 )
            {
LABEL_158:
              ModuleInformation = 0;
              goto LABEL_17;
            }
            return -2147483646;
          case 69:
            goto LABEL_102;
          case 70:
            if ( Size == 4 )
            {
              *(_DWORD *)a4 = ObpObjectSecurityMode;
              goto LABEL_164;
            }
            if ( a6 )
              *a6 = 4;
            goto LABEL_236;
          case 72:
            if ( Size != 8 )
              goto LABEL_491;
            v95 = (unsigned int)(v16 - 7);
            if ( (_DWORD)v95 )
            {
              if ( (_DWORD)v95 != 1 )
                return -1073741637;
              *(_DWORD *)a4 = 8;
              *(_DWORD *)(a4 + 4) = ((unsigned __int8 (__fastcall *)(__int64, __int64, __int64, __int64))off_140C01F20[0])(
                                      v9,
                                      v95,
                                      v15,
                                      v12);
            }
            else
            {
              *(_DWORD *)a4 = 7;
              LOBYTE(v8) = off_140C01F28[0] != xKdEnumerateDebuggingDevices;
              *(_DWORD *)(a4 + 4) = v8;
            }
            goto LABEL_112;
          case 73:
            ModuleInformation = KeBuildLogicalProcessorSystemInformation(v13, a4, Size, &v127);
            goto LABEL_17;
          case 76:
            SystemBasicInformation = ExpGetSystemFirmwareTableInformation((char *)a4, Size_4, Size, &v127);
            goto LABEL_16;
          case 77:
            if ( ExIsRestrictedCaller(Size_4) )
              return -1073741790;
            if ( SeSinglePrivilegeCheck(SeLoadDriverPrivilege, Size_4) )
              v130 = 0;
            v61 = KeGetCurrentThread();
            --v61->KernelApcDisable;
            ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
            ModuleInformation = ExpQueryModuleInformationEx(v62, a4, Size, v130, (__int64)&v127);
            ExReleaseResourceLite(&PsLoadedModuleResource);
            KeLeaveCriticalRegion();
            goto LABEL_17;
          case 80:
            SystemBasicInformation = MmQueryMemoryListInformation(
                                       (ULONG_PTR **)0xFFFFFFFFFFFFFFFFLL,
                                       (_OWORD *)a4,
                                       Size,
                                       v12,
                                       &v127);
            goto LABEL_16;
          case 83:
            v96 = 8 * v12;
            v127 = 8 * v12;
            if ( Size < 8 )
              goto LABEL_511;
            v97 = Size >> 3;
            if ( Size >= v96 )
              v97 = v12;
            v98 = Size < v96 ? 0xC0000004 : 0;
            v143 = (_QWORD *)a4;
            KeFlushProcessWriteBuffers(1);
            while ( 1 )
            {
              v133 = v8;
              if ( v8 >= v97 )
                break;
              ProcNumber.Group = v13;
              ProcNumber.Number = v8;
              ProcNumber.Reserved = 0;
              v99 = *(_QWORD *)(*(_QWORD *)(KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)] + 24) + 72LL);
              v100 = v143;
              *v143 = v99;
              v143 = v100 + 1;
              v8 = v133 + 1;
              v13 = v137;
            }
            goto LABEL_502;
          case 86:
            SystemBasicInformation = ObQueryRefTraceInformation((volatile void *)a4, Size);
            goto LABEL_16;
          case 87:
            v127 = 8;
            if ( Size == 8 )
            {
              *(_DWORD *)a4 = MmSpecialPoolTag;
              LOBYTE(v8) = MmSpecialPoolCatchOverruns != 0;
              *(_DWORD *)(a4 + 4) = v8;
            }
            else
            {
              ModuleInformation = -1073741820;
            }
            goto LABEL_17;
          case 88:
            *(_OWORD *)ProcessId = 0LL;
            v157 = 0LL;
            v127 = 24;
            if ( Size != 24 )
            {
              ModuleInformation = -1073741820;
              goto LABEL_17;
            }
            *(_OWORD *)ProcessId = *(_OWORD *)a4;
            v157 = *(char **)(a4 + 16);
            if ( LOWORD(ProcessId[1]) || (BYTE2(ProcessId[1]) & 1) != 0 )
              goto LABEL_491;
            if ( Size_4 && WORD1(ProcessId[1]) )
            {
              if ( ((unsigned __int8)v157 & 1) != 0 )
                ExRaiseDatatypeMisalignment();
              v89 = &v157[WORD1(ProcessId[1])];
              if ( (unsigned __int64)v89 > 0x7FFFFFFF0000LL || v89 < v157 )
                MEMORY[0x7FFFFFFF0000] = 0;
            }
            v90 = KeGetCurrentThread();
            v147 = WORD1(ProcessId[1]);
            --v90->KernelApcDisable;
            v91 = PsLookupProcessByProcessId(ProcessId[0], (PEPROCESS *)&Object);
            if ( v91 < 0 )
            {
              KeLeaveCriticalRegionThread((__int64)v90);
              return v91;
            }
            ModuleInformation = PsQueryFullProcessImageName((__int64)Object, (_OWORD *)(a4 + 8), v157, &v147);
            ObfDereferenceObjectWithTag(Object, 0x746C6644u);
            KeLeaveCriticalRegionThread((__int64)v90);
            if ( ModuleInformation == -1073741820 )
              *(_WORD *)(a4 + 10) = v147;
            goto LABEL_17;
          case 90:
            v127 = 32;
            v46 = Size;
            if ( Size < 0x14 )
            {
              if ( a6 )
                *a6 = 32;
              goto LABEL_236;
            }
            *(_OWORD *)a4 = *(_OWORD *)&ExpBootEnvironmentInformation;
            *(_DWORD *)(a4 + 16) = dword_140C15C70;
            if ( v46 < v127 )
LABEL_438:
              v127 = 20;
            else
              *(_QWORD *)(a4 + 24) = qword_140C15C78;
            goto LABEL_17;
          case 91:
            SystemBasicInformation = HvlQueryEnlightenmentInfo(a4, Size, v15, &v127);
            goto LABEL_16;
          case 92:
            if ( Size != 40 )
            {
              if ( a6 )
                *a6 = 40;
              goto LABEL_236;
            }
            SystemBasicInformation = VfGetVerifierInformationEx(a4, v16, v15, v12);
            if ( SystemBasicInformation >= 0 )
              v8 = 40;
            v127 = v8;
            goto LABEL_16;
          case 95:
            if ( !Size_4 || !SeSinglePrivilegeCheck(SeDebugPrivilege, Size_4) )
              return -1073741790;
            if ( Size >= 0x40 )
            {
              SystemBasicInformation = ExpCovQueryInformation(a4, Size, &v127);
              goto LABEL_16;
            }
            if ( a6 )
              *a6 = 64;
            goto LABEL_236;
          case 98:
            SystemBasicInformation = IoQuerySystemDeviceName(98);
            goto LABEL_16;
          case 99:
            SystemBasicInformation = IoQuerySystemDeviceName(99);
            goto LABEL_16;
          case 100:
            WORD4(v164) = v13;
            *(_QWORD *)&v164 = KeQueryGroupAffinity(v13);
            v86 = (0x101010101010101LL
                 * (((((_QWORD)v164 - (((unsigned __int64)v164 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                   + ((((unsigned __int64)v164 - (((unsigned __int64)v164 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                   + (((((_QWORD)v164 - (((unsigned __int64)v164 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                     + ((((unsigned __int64)v164 - (((unsigned __int64)v164 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
            ModuleInformation = PpmCapturePerformanceDistribution(
                                  0LL,
                                  0,
                                  (unsigned int)((0x101010101010101LL
                                                * (((((_QWORD)v164
                                                    - (((unsigned __int64)v164 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                  + ((((unsigned __int64)v164
                                                     - (((unsigned __int64)v164 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                                  + (((((_QWORD)v164
                                                      - (((unsigned __int64)v164 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                    + ((((unsigned __int64)v164
                                                       - (((unsigned __int64)v164 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24,
                                  (__int64)&v164,
                                  (int *)&NumberOfBytes);
            if ( ModuleInformation == -1073741820 )
            {
              if ( NumberOfBytes <= Size )
              {
                PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, 0x744D5050u);
                v88 = PoolWithTag;
                P = PoolWithTag;
                if ( PoolWithTag )
                {
                  memset(PoolWithTag, 0, NumberOfBytes);
                  ModuleInformation = PpmCapturePerformanceDistribution(
                                        v88,
                                        NumberOfBytes,
                                        v86,
                                        (__int64)&v164,
                                        (int *)&v127);
                  if ( ModuleInformation >= 0 )
                    memmove((void *)a4, v88, v127);
                  ExFreePoolWithTag(v88, 0x744D5050u);
                }
                else
                {
                  ModuleInformation = -1073741670;
                }
              }
              else
              {
                ModuleInformation = -1073741820;
                v127 = NumberOfBytes;
              }
            }
            goto LABEL_17;
          case 101:
            SystemBasicInformation = ExpQueryNumaProximityNode(a4, Size, &v127, v12);
            goto LABEL_16;
          case 102:
            if ( Size >= 0x1B0 )
            {
              v31 = (_OWORD *)*((_QWORD *)PsGetCurrentServerSiloGlobals() + 157);
              LOBYTE(v32) = 1;
              ExAcquireTimeRefreshLock(v32);
              v33 = Src;
              v34 = 3LL;
              v35 = 3LL;
              do
              {
                *v33 = *v31;
                v33[1] = v31[1];
                v33[2] = v31[2];
                v33[3] = v31[3];
                v33[4] = v31[4];
                v33[5] = v31[5];
                v33[6] = v31[6];
                v33 += 8;
                *(v33 - 1) = v31[7];
                v31 += 8;
                --v35;
              }
              while ( v35 );
              *v33 = *v31;
              v33[1] = v31[1];
              v33[2] = v31[2];
              ExReleaseResourceLite(&ExpTimeRefreshLock);
              KeLeaveCriticalRegion();
              v36 = Src;
              do
              {
                *(_OWORD *)a4 = *v36;
                *(_OWORD *)(a4 + 16) = v36[1];
                *(_OWORD *)(a4 + 32) = v36[2];
                *(_OWORD *)(a4 + 48) = v36[3];
                *(_OWORD *)(a4 + 64) = v36[4];
                *(_OWORD *)(a4 + 80) = v36[5];
                *(_OWORD *)(a4 + 96) = v36[6];
                a4 += 128LL;
                *(_OWORD *)(a4 - 16) = v36[7];
                v36 += 8;
                --v34;
              }
              while ( v34 );
              *(_OWORD *)a4 = *v36;
              *(_OWORD *)(a4 + 16) = v36[1];
              *(_OWORD *)(a4 + 32) = v36[2];
              v127 = 432;
              ModuleInformation = 0;
              goto LABEL_17;
            }
            if ( a6 )
              *a6 = 432;
            goto LABEL_236;
          case 103:
            SystemBasicInformation = SeCodeIntegrityQueryInformation(a4, Size, (__int64)&v127);
            goto LABEL_16;
          case 105:
            ModuleInformation = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, ULONG *))off_140C020D8[0])(
                                  23LL,
                                  0LL,
                                  0LL,
                                  &NumberOfBytes);
            if ( ModuleInformation != -1073741820 )
              goto LABEL_102;
            v79 = NumberOfBytes;
            if ( Size < NumberOfBytes || !a4 )
            {
              v127 = NumberOfBytes;
              goto LABEL_17;
            }
            v80 = Size_4;
            if ( Size_4 )
            {
              PoolWithQuotaTag = (struct _MDL *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, NumberOfBytes, 0x6F666E49u);
              P = PoolWithQuotaTag;
              if ( !PoolWithQuotaTag )
              {
                ModuleInformation = -1073741670;
                goto LABEL_17;
              }
              v79 = NumberOfBytes;
            }
            else
            {
              PoolWithQuotaTag = (struct _MDL *)a4;
              P = (PVOID)a4;
            }
            v82 = ((__int64 (__fastcall *)(__int64, __int64, struct _MDL *, ULONG *))off_140C020D8[0])(
                    23LL,
                    v79,
                    PoolWithQuotaTag,
                    &v127);
            ModuleInformation = v82;
            if ( !v80 )
              goto LABEL_17;
            if ( v82 >= 0 )
              goto LABEL_530;
            goto LABEL_531;
          case 106:
            ModuleInformation = -1073741821;
            goto LABEL_17;
          case 107:
          case 231:
            Pool2 = (struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)Src;
            P = Src;
            v29 = 80;
            NumberOfBytes = 80;
            if ( Size < 0x50 )
            {
              v29 = Size;
              NumberOfBytes = Size;
            }
            v127 = v29;
            if ( a1 == 231 )
              p_ProcNumber = &ProcNumber;
            else
              p_ProcNumber = 0LL;
            v144 = p_ProcNumber;
            while ( 2 )
            {
              ModuleInformation = KeQueryLogicalProcessorRelationship(p_ProcNumber, v11, Pool2, &v127);
              if ( ModuleInformation < 0 )
              {
                if ( ModuleInformation == -1073741820 )
                {
                  if ( v127 <= Size )
                  {
                    if ( Pool2 && Pool2 != (struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)Src )
                      ExFreePoolWithTag(Pool2, 0);
                    Pool2 = (struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)ExAllocatePool2(
                                                                                 257LL,
                                                                                 v127,
                                                                                 1868983881LL);
                    P = Pool2;
                    if ( Pool2 )
                    {
                      NumberOfBytes = v127;
                      p_ProcNumber = v144;
                      continue;
                    }
                    ModuleInformation = -1073741670;
                  }
                  else
                  {
                    ModuleInformation = -1073741820;
                  }
                }
              }
              else
              {
                memmove((void *)a4, Pool2, v127);
                ModuleInformation = 0;
              }
              break;
            }
            if ( Pool2 && Pool2 != (struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)Src )
              ExFreePoolWithTag(Pool2, 0);
            goto LABEL_17;
          case 108:
            v127 = 8 * v12;
            if ( Size < 8 )
              goto LABEL_511;
            if ( Size < 8 * (int)v12 )
            {
              LODWORD(v12) = Size >> 3;
              LODWORD(v144) = Size >> 3;
              ModuleInformation = -1073741820;
            }
            v143 = (_QWORD *)a4;
            while ( 1 )
            {
              v133 = v8;
              if ( v8 >= (unsigned int)v12 )
                break;
              ProcNumber.Group = v13;
              ProcNumber.Number = v8;
              ProcNumber.Reserved = 0;
              *(_QWORD *)a4 = *(_QWORD *)(KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)] + 33400);
              a4 += 8LL;
              v143 = (_QWORD *)a4;
              ++v8;
              LODWORD(v12) = (_DWORD)v144;
            }
            goto LABEL_17;
          case 109:
            SystemBasicInformation = SmQueryStoreInformation(v9, a4, Size, (unsigned __int8)Size_4, &v127);
            goto LABEL_16;
          case 112:
            SystemBasicInformation = IoQueryVhdBootInformation(v9, a4, Size, &v127);
            goto LABEL_16;
          case 113:
            SystemBasicInformation = PsQueryCpuQuotaInformation((_DWORD *)a4, Size, Size_4, &v127);
            goto LABEL_16;
          case 115:
            if ( v134 )
            {
              ModuleInformation = -1073741820;
            }
            else
            {
              v127 = 8;
              if ( Size < 8 )
              {
                ModuleInformation = -1073741820;
              }
              else
              {
                *(_DWORD *)a4 = DbgkErrorPortStartTimeout;
                *(_DWORD *)(a4 + 4) = DbgkErrorPortCommTimeout;
              }
            }
            goto LABEL_17;
          case 116:
            SystemBasicInformation = IoQueryLowPriorityIoInformation(v9, (_DWORD *)a4, Size, &v127);
            goto LABEL_16;
          case 117:
            v127 = 1096;
            if ( Size != 1096 )
            {
              ModuleInformation = -1073741820;
              goto LABEL_17;
            }
            if ( Size_4 )
              return -1073741790;
            SystemBasicInformation = ExQueryBootEntropyInformation(a4, v16, v15, v12);
            goto LABEL_16;
          case 118:
            if ( Size >= 0x110 )
            {
              SystemBasicInformation = VfGetVerifierInformation((void *)a4, Size, &v127, 1);
              goto LABEL_16;
            }
            if ( a6 )
              *a6 = 272;
            goto LABEL_236;
          case 121:
            v77 = (unsigned __int16)KeNumberNodes;
            v127 = 4 * (unsigned __int16)KeNumberNodes;
            if ( Size < v127 )
            {
              ModuleInformation = -1073741820;
            }
            else
            {
              v133 = 0;
              for ( i = 0; i < v77; v133 = i )
              {
                *(_DWORD *)(a4 + 4LL * i++) = *((_DWORD *)KeNodeDistance + v8 + v77 * (unsigned __int16)v15);
                v8 = i;
              }
            }
            goto LABEL_17;
          case 122:
            v127 = 8;
            if ( Size != 8 || !a4 )
              goto LABEL_279;
            PoolWithQuotaTag = (struct _MDL *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 8uLL, 0x6F666E49u);
            P = PoolWithQuotaTag;
            if ( !PoolWithQuotaTag )
            {
              ModuleInformation = -1073741670;
              goto LABEL_17;
            }
            ModuleInformation = ((__int64 (__fastcall *)(__int64, __int64, struct _MDL *, ULONG *))off_140C020D8[0])(
                                  26LL,
                                  8LL,
                                  PoolWithQuotaTag,
                                  &v127);
            if ( ModuleInformation >= 0 )
            {
              *(_DWORD *)a4 = PoolWithQuotaTag->Next;
              *(_DWORD *)(a4 + 4) ^= (*(_DWORD *)(a4 + 4) ^ HIDWORD(PoolWithQuotaTag->Next)) & 1;
              v102 = *(_DWORD *)(a4 + 4) ^ (HIDWORD(PoolWithQuotaTag->Next) ^ *(_DWORD *)(a4 + 4)) & 2;
              *(_DWORD *)(a4 + 4) = v102;
              *(_DWORD *)(a4 + 4) = v102 ^ (HIDWORD(PoolWithQuotaTag->Next) ^ v102) & 4;
            }
            goto LABEL_531;
          case 123:
            if ( Size == 32 )
            {
              ProcessPartitionId = MmGetProcessPartitionId((__int64)KeGetCurrentThread()->ApcState.Process);
              *(_QWORD *)&Src[0] = MmGetAvailablePages(ProcessPartitionId);
              *((_QWORD *)&Src[0] + 1) = MmGetTotalCommittedPages(v50);
              *(_QWORD *)&Src[1] = MmGetTotalCommitLimit(v51);
              *((_QWORD *)&Src[1] + 1) = MmGetPeakCommitment(v52);
              if ( *((_QWORD *)&Src[1] + 1) < *((_QWORD *)&Src[0] + 1) )
                *((_QWORD *)&Src[1] + 1) = *((_QWORD *)&Src[0] + 1);
              *(_OWORD *)a4 = Src[0];
              *(_OWORD *)(a4 + 16) = Src[1];
              goto LABEL_128;
            }
            if ( a6 )
              *a6 = 32;
            goto LABEL_236;
          case 124:
            v127 = 12;
            if ( Size >= 4 )
            {
              v166 = *(_DWORD *)a4;
              if ( v166 == 1 )
              {
                if ( Size >= 0xC )
                {
                  *(_DWORD *)(a4 + 8) = 0;
                  *(_DWORD *)(a4 + 4) = 0;
                  *(_DWORD *)(a4 + 8) = 1;
                  *(_DWORD *)(a4 + 4) = 1;
                  if ( MEMORY[0xFFFFF780000003C6] )
                    *(_DWORD *)(a4 + 4) &= ~1u;
                }
                else
                {
                  ModuleInformation = -1073741820;
                }
              }
              else
              {
                ModuleInformation = -1073741637;
              }
            }
            else
            {
              ModuleInformation = -1073741820;
            }
            goto LABEL_17;
          case 125:
            if ( Size < 0x10 )
            {
              if ( a6 )
                *a6 = 16;
              goto LABEL_236;
            }
            v142[0] = *(_DWORD *)a4;
            v159 = *(volatile void **)(a4 + 8);
            v92 = *(_DWORD *)(a4 + 4);
            v148 = v92;
            if ( ((unsigned __int8)v159 & 7) != 0 )
              return -2147483646;
            if ( !ExIsRestrictedCaller(Size_4) )
            {
              SystemBasicInformation = ExGetSessionBigPoolInformation(v159, v92, &v127, v142);
              goto LABEL_16;
            }
            return -1073741790;
          case 126:
            v127 = 32;
            if ( Size != 32 )
            {
              ModuleInformation = -1073741820;
              goto LABEL_17;
            }
            ModuleInformation = BgkQueryBootGraphicsInformation(0LL, Src, v15, v12);
            if ( ModuleInformation < 0 )
              goto LABEL_17;
            if ( Size_4 )
              *(_QWORD *)&Src[0] = 0LL;
            goto LABEL_252;
          case 128:
            if ( v134 )
            {
              ModuleInformation = -1073741820;
            }
            else
            {
              v108 = MmEnumerateBadPages(&v154);
              v109 = v154;
              if ( v154 )
                v8 = 8 * *(_DWORD *)v154;
              v127 = v8;
              if ( Size < v8 )
                v108 = -1073741820;
              ModuleInformation = v108;
              if ( v154 )
              {
                if ( v108 >= 0 )
                  memmove((void *)a4, (char *)v154 + 8, v8);
                ExFreePoolWithTag(v109, 0);
              }
            }
            goto LABEL_17;
          case 133:
            if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, Size_4) )
              return -1073741727;
            SystemBasicInformation = ExpGetSystemPlatformBinary(a4, Size, (unsigned __int8)Size_4);
            goto LABEL_16;
          case 134:
            v127 = 32;
            if ( Size == 32 )
            {
              SystemBasicInformation = ExHandleSPCall2(v9, a4);
              goto LABEL_16;
            }
            ModuleInformation = -1073741820;
            goto LABEL_17;
          case 135:
            v127 = 8;
            if ( Size >= 8 )
            {
              if ( (unsigned int)HvlQueryActiveProcessors(&v149, 0LL) )
              {
                ModuleInformation = -1073741637;
              }
              else
              {
                ModuleInformation = HvlQueryProcessorTopologyCount(0LL, &v150);
                if ( ModuleInformation )
                {
                  ModuleInformation = -1073741637;
                }
                else
                {
                  *(_DWORD *)a4 = v149;
                  *(_DWORD *)(a4 + 4) = v150;
                }
              }
            }
            else
            {
              ModuleInformation = -1073741820;
            }
            goto LABEL_17;
          case 136:
          case 137:
            if ( Size == 48 )
              return ExpGetDeviceDataInformation((unsigned int)a1, a4, 48LL, v12);
            if ( a6 )
              *a6 = 48;
            goto LABEL_236;
          case 138:
            SystemBasicInformation = ExpQueryMemoryTopologyInformation((void *)a4);
            goto LABEL_16;
          case 139:
            SystemBasicInformation = ExpQueryChannelInformation((void *)a4);
            goto LABEL_16;
          case 140:
            v103 = Size;
            if ( a6 || Size >= 8 )
            {
              ModuleInformation = BgkQueryBootGraphicsInformation(2LL, &v127, v15, v12);
              if ( ModuleInformation >= 0 )
              {
                if ( v127 )
                {
                  if ( v103 >= v127 )
                  {
                    ModuleInformation = BgkQueryBootGraphicsInformation(1LL, &v153, v104, v105);
                    if ( ModuleInformation >= 0 )
                    {
                      v106 = v153;
                      if ( v153 )
                      {
                        memmove((void *)a4, v153, v127);
                        ExFreePoolWithTag(v106, 0x4B494742u);
                      }
                      else
                      {
                        ModuleInformation = -1073741670;
                      }
                    }
                  }
                  else
                  {
                    ModuleInformation = -1073741789;
                  }
                }
                else
                {
                  ModuleInformation = -1073741670;
                }
              }
            }
            else
            {
              ModuleInformation = -1073741811;
            }
            goto LABEL_17;
          case 143:
          case 145:
          case 171:
          case 179:
            SystemBasicInformation = SeSecureBootQueryInformation(a1, a4, Size, &v127);
            goto LABEL_16;
          case 147:
            SystemBasicInformation = ExpQueryPortableWorkspaceEfiLauncherInformation(a4, Size, &v127, v12);
            goto LABEL_16;
          case 149:
            if ( Size >= 3 )
            {
              *(_BYTE *)a4 = KdpBootedNodebug == 0;
              *(_BYTE *)(a4 + 1) = (_BYTE)KdDebuggerEnabled;
              *(_BYTE *)(a4 + 2) = (_BYTE)KdDebuggerNotPresent == 0;
              v127 = 3;
              goto LABEL_17;
            }
            if ( a6 )
              *a6 = 3;
            goto LABEL_236;
          case 150:
            if ( a4 && !SeSinglePrivilegeCheck(SeTcbPrivilege, Size_4) )
              return -1073741727;
            SystemBasicInformation = ExpQueryBootLoaderMetadata((void *)a4, Size, &v127);
            goto LABEL_16;
          case 151:
            v127 = 4;
            if ( Size >= 4 )
            {
              *(_DWORD *)a4 = ExSoftRebootFlags;
              goto LABEL_17;
            }
            if ( a6 )
              *a6 = 4;
            goto LABEL_236;
          case 153:
            if ( v134 )
            {
              ModuleInformation = -1073741820;
            }
            else
            {
              v127 = 32;
              if ( Size < 0x20 )
              {
                if ( Size < 0xC )
                {
                  ModuleInformation = -1073741820;
                }
                else
                {
                  v127 = 12;
                  *(_QWORD *)a4 = PoOffCrashConfigTable;
                  *(_DWORD *)(a4 + 8) = DWORD2(PoOffCrashConfigTable);
                }
              }
              else
              {
                *(_QWORD *)a4 = PoOffCrashConfigTable;
                *(_DWORD *)(a4 + 8) = DWORD2(PoOffCrashConfigTable);
                *(_QWORD *)(a4 + 16) = xmmword_140C24550;
                *(_DWORD *)(a4 + 24) = DWORD2(xmmword_140C24550);
              }
            }
            goto LABEL_17;
          case 154:
            if ( Size < 0x20 )
            {
              if ( a6 )
                *a6 = 32;
              goto LABEL_236;
            }
            ModuleInformation = ExpGetSystemProcessorFeaturesInformation(a4, v16, v15, v12);
LABEL_128:
            v127 = 32;
            goto LABEL_17;
          case 156:
            v127 = 128;
            if ( Size == 128 )
            {
              ModuleInformation = BgkQueryBootGraphicsInformation(3LL, Src, v15, v12);
              if ( ModuleInformation >= 0 )
LABEL_252:
                memmove((void *)a4, Src, v127);
            }
            else
            {
              ModuleInformation = -1073741820;
            }
            goto LABEL_17;
          case 157:
            v127 = WORD5(ExpManufacturingInformation) + 24;
            if ( Size < v127 )
            {
              ModuleInformation = -1073741820;
            }
            else
            {
              v83 = (void *)(a4 + 24);
              *(_OWORD *)a4 = 0LL;
              *(_QWORD *)(a4 + 16) = 0LL;
              *(_DWORD *)a4 = ExpManufacturingInformation;
              *(_DWORD *)(a4 + 8) = DWORD2(ExpManufacturingInformation);
              if ( WORD4(ExpManufacturingInformation) )
              {
                *(_QWORD *)(a4 + 16) = v83;
                memmove(v83, qword_140C15C90, WORD5(ExpManufacturingInformation));
              }
            }
            goto LABEL_17;
          case 158:
            v127 = 1;
            if ( Size )
            {
              *(_BYTE *)a4 = PoEnergyEstimationEnabled();
              goto LABEL_17;
            }
            if ( a6 )
              *a6 = 1;
            goto LABEL_279;
          case 159:
            SystemBasicInformation = HvlQueryDetailInfo(a4, Size, v15, &v127);
            goto LABEL_16;
          case 160:
            v110 = (_DWORD)v12 << 6;
            v127 = (_DWORD)v12 << 6;
            if ( Size < 0x40 )
              goto LABEL_511;
            v111 = Size >> 6;
            if ( Size >= v110 )
              v111 = v12;
            v98 = Size < v110 ? 0xC0000004 : 0;
            v143 = (_QWORD *)a4;
            while ( 1 )
            {
              v133 = v8;
              if ( v8 >= v111 )
                break;
              ProcNumber.Group = v13;
              ProcNumber.Number = v8;
              ProcNumber.Reserved = 0;
              v112 = KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)];
              KeQueryCycleTimeStatsProcessor(v112, (_QWORD *)a4);
              a4 += 64LL;
              v143 = (_QWORD *)a4;
              ++v8;
            }
LABEL_502:
            ModuleInformation = v98;
            goto LABEL_17;
          case 162:
            SystemBasicInformation = SeQueryTrustedPlatformModuleInformation((int *)a4, Size, &v127);
            goto LABEL_16;
          case 163:
            if ( Size )
            {
              *(_BYTE *)a4 = KdIgnoreUmExceptions;
              v127 = 1;
              goto LABEL_17;
            }
            if ( a6 )
              *a6 = 1;
            goto LABEL_236;
          case 164:
          case 172:
          case 189:
          case 190:
          case 199:
          case 209:
            if ( qword_140C1B928 )
              SystemBasicInformation = qword_140C1B928((unsigned int)a1, P, v134, a4, Size, &v127);
            else
              SystemBasicInformation = -1073741823;
            goto LABEL_16;
          case 165:
            v127 = 16;
            if ( Size == 16 )
            {
              LOBYTE(Src[0]) ^= (LOBYTE(Src[0]) ^ (16 * ExpFirmwarePageProtectionSupported)) & 0x10;
              if ( VslIsSecureKernelRunning() )
              {
                CurrentServerSilo = PsGetCurrentServerSilo();
                if ( PsIsHostSilo(CurrentServerSilo) )
                {
                  NumberOfBytes_4 = 0;
                  LOBYTE(Src[0]) |= 1u;
                  NestedPageProtectionFlags = VslGetNestedPageProtectionFlags();
                  v115 = Src[0];
                  if ( (NestedPageProtectionFlags & 2) != 0 )
                  {
                    v115 = LOBYTE(Src[0]) | 2;
                    LOBYTE(Src[0]) |= 2u;
                  }
                  if ( (NestedPageProtectionFlags & 0x20) != 0 )
                  {
                    v115 |= 4u;
                    LOBYTE(Src[0]) = v115;
                  }
                  if ( (NestedPageProtectionFlags & 0x10) != 0 )
                    LOBYTE(Src[0]) = v115 | 8;
                  v116 = BYTE1(Src[0]);
                  if ( (NestedPageProtectionFlags & 0x200) != 0 )
                  {
                    LOBYTE(v116) = BYTE1(Src[0]) | 2;
                    BYTE1(Src[0]) |= 2u;
                  }
                  v117 = v155;
                  if ( v155 )
                  {
                    ModuleInformation = VslIsTrustletRunning(v155, &NumberOfBytes_4);
                    v116 = BYTE1(Src[0]);
                    LOBYTE(v116) = (NumberOfBytes_4 ^ BYTE1(Src[0])) & 1 ^ BYTE1(Src[0]);
                    BYTE1(Src[0]) = v116;
                  }
                  if ( (NestedPageProtectionFlags & 0x800) != 0 )
                  {
                    LOBYTE(v116) = v116 | 4;
                    BYTE1(Src[0]) = v116;
                  }
                  IsEncryptionKeyAvailable = VslIsEncryptionKeyAvailable(v117, v116);
                  LOBYTE(Src[0]) ^= (LOBYTE(Src[0]) ^ (32 * IsEncryptionKeyAvailable)) & 0x20;
                }
              }
              *(_OWORD *)a4 = Src[0];
              goto LABEL_17;
            }
            if ( a6 )
              *a6 = 16;
            goto LABEL_279;
          case 166:
            SystemBasicInformation = SeQueryHSTIResults(a4, Size, &v127, v12);
            goto LABEL_16;
          case 167:
            SystemBasicInformation = ExpQuerySingleModuleInformation(a4, Size, (unsigned __int8)Size_4, &v127);
            goto LABEL_16;
          case 169:
            SystemBasicInformation = HvlQueryVsmProtectionInfo((void *)a4);
            goto LABEL_16;
          case 173:
            result = ExCpuSetResourceManagerAccessCheck(Size_4);
            ModuleInformation = result;
            if ( result < 0 )
              return result;
            v127 = 264;
            if ( Size != 264 )
            {
              ModuleInformation = -1073741820;
              goto LABEL_17;
            }
            v119 = (unsigned __int16 *)ExAllocatePool2(256LL, 264LL, 1868983881LL);
            v120 = v119;
            P = v119;
            if ( !v119 )
              return -1073741670;
            *v119 = 1;
            v119[1] = 32;
            *((_DWORD *)v119 + 1) = 0;
            memset(v119 + 4, 0, 0x100uLL);
            KeGetAffinitizedInterruptsInfo(v120);
            v121 = v120;
            v122 = 2LL;
            do
            {
              *(_OWORD *)a4 = *(_OWORD *)v121;
              *(_OWORD *)(a4 + 16) = *((_OWORD *)v121 + 1);
              *(_OWORD *)(a4 + 32) = *((_OWORD *)v121 + 2);
              *(_OWORD *)(a4 + 48) = *((_OWORD *)v121 + 3);
              *(_OWORD *)(a4 + 64) = *((_OWORD *)v121 + 4);
              *(_OWORD *)(a4 + 80) = *((_OWORD *)v121 + 5);
              *(_OWORD *)(a4 + 96) = *((_OWORD *)v121 + 6);
              a4 += 128LL;
              *(_OWORD *)(a4 - 16) = *((_OWORD *)v121 + 7);
              v121 += 64;
              --v122;
            }
            while ( v122 );
            *(_QWORD *)a4 = *(_QWORD *)v121;
            ExFreePoolWithTag(v120, 0);
            goto LABEL_17;
          case 174:
            SystemBasicInformation = PsRootSiloInformation(a4, Size, &v127, v12);
            goto LABEL_16;
          case 175:
            if ( v14 )
            {
              v161 = 0LL;
              result = ObReferenceObjectByHandle(v14, 0x1000u, (POBJECT_TYPE)PsProcessType, Size_4, &v161, 0LL);
              v84 = v161;
              Object = v161;
              if ( result < 0 )
                return result;
            }
            else
            {
              v84 = Object;
            }
            ModuleInformation = KeQueryCpuSetInformation((void *)a4);
            if ( v84 )
              ObfDereferenceObject(v84);
            goto LABEL_17;
          case 178:
            if ( !Size )
            {
              ModuleInformation = -1073741789;
              goto LABEL_17;
            }
            if ( Size_4 && !SeSinglePrivilegeCheck(SeSystemProfilePrivilege, Size_4) )
              return -1073741727;
            v123 = (struct _MDL *)ExAllocatePoolWithQuotaTag((POOL_TYPE)520, Size, 0x6F666E49u);
            PoolWithQuotaTag = v123;
            P = v123;
            if ( !v123 )
            {
              ModuleInformation = -1073741670;
              goto LABEL_17;
            }
            memset(v123, 0, Size);
            ModuleInformation = VslQuerySecureKernelProfileInformation(v162, PoolWithQuotaTag, Size, &v127);
            if ( ModuleInformation >= 0 )
              goto LABEL_530;
            goto LABEL_531;
          case 180:
            SystemBasicInformation = ExpQueryInterruptSteeringInformation((_DWORD)P, v134, a4, Size, (__int64)&v127);
            goto LABEL_16;
          case 181:
          case 230:
            if ( v14 )
            {
              v163 = 0LL;
              result = ObReferenceObjectByHandle(v14, 0x1000u, (POBJECT_TYPE)PsProcessType, Size_4, &v163, 0LL);
              v21 = v163;
              Object = v163;
              if ( result < 0 )
                return result;
            }
            else
            {
              v21 = Object;
            }
            ModuleInformation = PsGetSupportedProcessorArchitectures((_DWORD *)a4, v16, Size, &v127, (__int64)v21);
            if ( v21 )
              ObfDereferenceObject(v21);
            goto LABEL_17;
          case 182:
            if ( Size == 56 )
            {
              v22 = MmGetProcessPartitionId((__int64)KeGetCurrentThread()->ApcState.Process);
              *(_QWORD *)&Src[0] = *(_QWORD *)(*(_QWORD *)(qword_140C51F48 + 8LL * v22) + 16720LL) << 12;
              *((_QWORD *)&Src[0] + 1) = MmGetAvailablePages(v22) << 12;
              *(_QWORD *)&Src[1] = MmGetResidentAvailablePages(v23) << 12;
              *((_QWORD *)&Src[1] + 1) = MmGetTotalCommittedPages(v24) << 12;
              *((_QWORD *)&Src[2] + 1) = MmGetTotalCommitLimit(v25) << 12;
              *(_QWORD *)&Src[3] = MmGetPeakCommitment(v26) << 12;
              *(_QWORD *)&Src[2] = MmGetSharedCommit() << 12;
              if ( *(_QWORD *)&Src[0] < *((_QWORD *)&Src[0] + 1) )
                *(_QWORD *)&Src[0] = *((_QWORD *)&Src[0] + 1);
              if ( *((_QWORD *)&Src[2] + 1) < *((_QWORD *)&Src[1] + 1) )
                *((_QWORD *)&Src[2] + 1) = *((_QWORD *)&Src[1] + 1);
              if ( *(_QWORD *)&Src[3] < *((_QWORD *)&Src[1] + 1) )
                *(_QWORD *)&Src[3] = *((_QWORD *)&Src[1] + 1);
              *(_OWORD *)a4 = Src[0];
              *(_OWORD *)(a4 + 16) = Src[1];
              *(_OWORD *)(a4 + 32) = Src[2];
              *(_QWORD *)(a4 + 48) = *(_QWORD *)&Src[3];
              v127 = 56;
              goto LABEL_17;
            }
            if ( a6 )
              *a6 = 56;
            goto LABEL_236;
          case 183:
            if ( Size != 16 )
              goto LABEL_236;
            SystemBasicInformation = ExpQueryCodeIntegrityCertificateInfo(
                                       *(_QWORD *)a4,
                                       *(unsigned int *)(a4 + 8),
                                       v15,
                                       v12);
            goto LABEL_16;
          case 184:
            if ( Size != 24 )
            {
              if ( a6 )
                *a6 = 24;
              goto LABEL_236;
            }
            v69 = MmGetProcessPartitionId((__int64)KeGetCurrentThread()->ApcState.Process);
            *(_QWORD *)&Src[0] = *(_QWORD *)(*(_QWORD *)(qword_140C51F48 + 8LL * v69) + 16720LL) << 12;
            *((_QWORD *)&Src[0] + 1) = MmGetLowestPhysicalPage(v69) << 12;
            *(_QWORD *)&Src[1] = (MmGetHighestPhysicalPage(v70) << 12) + 4095;
            *(_OWORD *)a4 = Src[0];
            *(_QWORD *)(a4 + 16) = *(_QWORD *)&Src[1];
LABEL_206:
            v127 = 24;
            goto LABEL_17;
          case 186:
            if ( !Size )
            {
              v141 = 1;
              return ZwFilterBootOption(1LL, 270532611LL);
            }
            if ( a6 )
              *a6 = 0;
            goto LABEL_236;
          case 188:
            if ( Size != 8 )
              goto LABEL_236;
            ModuleInformation = PsQueryActivityModerationUserSettings(Src);
            if ( ModuleInformation >= 0 )
              *(_QWORD *)a4 = *(_QWORD *)&Src[0];
            goto LABEL_17;
          case 192:
            if ( Size >= 0x20 )
            {
              ModuleInformation = ExpGetSystemFlushInformation(a4);
              v127 = 32;
              goto LABEL_17;
            }
            if ( a6 )
              *a6 = 32;
            goto LABEL_236;
          case 193:
            v101 = 8 * KeQueryActiveGroupCount();
            v127 = v101;
            if ( Size < v101 )
            {
LABEL_511:
              ModuleInformation = -1073741789;
            }
            else
            {
              memset((void *)a4, 0, v101);
              while ( 1 )
              {
                v133 = v8;
                if ( v8 >= (unsigned __int16)KeNumberNodes )
                  break;
                KeInitializeSchedulerSubNodeEnumerationContext(&v167, KeNodeBlock[v8]);
                while ( !(unsigned int)KeEnumerateNextSchedulerSubNodeInNode((__int64)&v167, &v160) )
                {
                  v137 = *(_WORD *)(v160 + 136);
                  *(_QWORD *)(a4 + 8LL * v137) |= *(_QWORD *)(v160 + 40);
                  v8 = v133;
                }
                ++v8;
              }
            }
            goto LABEL_17;
          case 194:
            SystemBasicInformation = VslTransformDumpKey(P, v134, (void *)a4, Size, (__int64)&v127, Size_4);
            goto LABEL_16;
          case 195:
            if ( Size >= 8 )
            {
              SystemBasicInformation = ExpGetSystemWriteConstraintInformation(a4, v16, v15, v12);
              v127 = 8;
              goto LABEL_16;
            }
            if ( a6 )
              *a6 = 8;
            goto LABEL_236;
          case 196:
            SystemBasicInformation = KeQueryKvaShadowInformation(a4, Size, &v127, v12);
            goto LABEL_16;
          case 197:
            v127 = 8;
            if ( Size < 8 )
            {
              ModuleInformation = -1073741820;
            }
            else
            {
              v45 = qword_140C50678;
              *(_QWORD *)a4 = 0LL;
              *(_QWORD *)a4 = v45;
            }
            goto LABEL_17;
          case 198:
            ModuleInformation = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, ULONG *))off_140C020D8[0])(
                                  34LL,
                                  0LL,
                                  0LL,
                                  &NumberOfBytes);
            if ( ModuleInformation != -1073741820 )
              return -1073741637;
            v41 = NumberOfBytes;
            if ( Size < NumberOfBytes || !a4 )
            {
LABEL_93:
              v127 = v41;
              goto LABEL_17;
            }
            v124 = Size_4;
            if ( Size_4 )
            {
              PoolWithQuotaTag = (struct _MDL *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, NumberOfBytes, 0x6F666E49u);
              P = PoolWithQuotaTag;
              if ( !PoolWithQuotaTag )
              {
                ModuleInformation = -1073741670;
                goto LABEL_17;
              }
              v41 = NumberOfBytes;
            }
            else
            {
              PoolWithQuotaTag = (struct _MDL *)a4;
              P = (PVOID)a4;
            }
            v125 = ((__int64 (__fastcall *)(__int64, _QWORD, struct _MDL *, ULONG *))off_140C020D8[0])(
                     34LL,
                     v41,
                     PoolWithQuotaTag,
                     &v127);
            ModuleInformation = v125;
            if ( v124 )
            {
              if ( v125 >= 0 )
LABEL_530:
                memmove((void *)a4, PoolWithQuotaTag, v127);
LABEL_531:
              ExFreePoolWithTag(PoolWithQuotaTag, 0x6F666E49u);
            }
            goto LABEL_17;
          case 200:
            SystemBasicInformation = IoQuerySystemDeviceName(200);
            goto LABEL_16;
          case 201:
            SystemBasicInformation = KeQuerySpeculationControlInformation((void *)a4, Size);
            goto LABEL_16;
          case 202:
            v127 = 1;
            if ( Size != 1 )
            {
              if ( a6 )
                *a6 = 1;
              goto LABEL_279;
            }
            v151 = 0;
            ModuleInformation = ((__int64 (__fastcall *)(__int64, __int64, _OWORD *, int *))off_140C020D8[0])(
                                  47LL,
                                  1LL,
                                  Src,
                                  &v151);
            if ( ModuleInformation >= 0 && v151 == 1 )
              *(_BYTE *)a4 = Src[0];
            else
LABEL_102:
              ModuleInformation = -1073741637;
            goto LABEL_17;
          case 206:
            if ( Size != 8 )
            {
              if ( a6 )
                *a6 = 8;
              goto LABEL_236;
            }
            *(_BYTE *)a4 = *(_BYTE *)ExLeapSecondData != 0;
            *(_DWORD *)(a4 + 4) = 0;
LABEL_112:
            v127 = 8;
            goto LABEL_17;
          case 207:
            if ( Size == 4 )
            {
              *(_DWORD *)a4 = NtGlobalFlag2;
              goto LABEL_164;
            }
            if ( a6 )
              *a6 = 4;
            goto LABEL_236;
          case 208:
            SystemBasicInformation = SeSecurityModelQueryInformation(a4, Size, &v127, v12);
            goto LABEL_16;
          case 210:
            SystemBasicInformation = CmQuerySingleFeatureConfiguration((_DWORD)P, v134, a4, Size, (__int64)&v127);
            goto LABEL_16;
          case 211:
            SystemBasicInformation = CmQueryFeatureConfigurationSections(
                                       (__int128 *)P,
                                       v134,
                                       (_OWORD *)a4,
                                       Size,
                                       &v127,
                                       KeGetCurrentThread()->PreviousMode);
            goto LABEL_16;
          case 213:
            SystemBasicInformation = KeQuerySecureSpeculationInformation((unsigned int *)a4, Size, &v127);
            goto LABEL_16;
          case 214:
            if ( Size_4 )
              return -1073741727;
            if ( ExpSpacesBootInformation )
            {
              if ( *(_QWORD *)ExpSpacesBootInformation )
              {
                v85 = *(_DWORD *)ExpSpacesBootInformation;
                v127 = *(_DWORD *)ExpSpacesBootInformation;
                if ( a4 )
                {
                  if ( Size < v85 )
                    ModuleInformation = -1073741820;
                  else
                    memmove((void *)a4, (const void *)(ExpSpacesBootInformation + 8), v85);
                }
              }
            }
            goto LABEL_17;
          case 215:
            if ( Size_4 )
              return -1073741727;
            v107 = ExpFwRamdiskInfo;
            if ( ExpFwRamdiskInfo )
            {
              v127 = 24;
              if ( Size >= 0x18 )
              {
                *(_OWORD *)a4 = *(_OWORD *)ExpFwRamdiskInfo;
                *(_QWORD *)(a4 + 16) = *(_QWORD *)(v107 + 16);
              }
              else
              {
                ModuleInformation = -1073741820;
              }
            }
            else
            {
              ModuleInformation = -1073741810;
            }
            goto LABEL_17;
          case 216:
            v127 = 32;
            if ( Size != 32 )
            {
              ModuleInformation = -1073741820;
              goto LABEL_17;
            }
            SystemBasicInformation = WheaQuerySystemInformation(a4, 32LL, v15, v12);
            goto LABEL_16;
          case 221:
            if ( Size == 4 )
            {
              *(_DWORD *)a4 = 0;
              *(_DWORD *)a4 = KeIsCetCapable();
              IsUserCetAllowed = KeIsUserCetAllowed();
              *(_DWORD *)a4 = v72 ^ ((unsigned __int8)v72 ^ (unsigned __int8)(2 * IsUserCetAllowed)) & 2;
              IsKernelCetEnabled = KeIsKernelCetEnabled();
              *(_DWORD *)a4 = v74 | (IsKernelCetEnabled << 8);
              IsKernelCetAuditModeEnabled = KeIsKernelCetAuditModeEnabled();
              *(_DWORD *)a4 = v76 | (IsKernelCetAuditModeEnabled << 9);
LABEL_164:
              v127 = 4;
              goto LABEL_17;
            }
            if ( a6 )
              *a6 = 4;
LABEL_236:
            result = -1073741820;
            break;
          case 222:
            SystemBasicInformation = CmQueryBuildVersionInformation(
                                       P,
                                       v134,
                                       a4,
                                       Size,
                                       &v127,
                                       KeGetCurrentThread()->PreviousMode);
            goto LABEL_16;
          case 223:
            if ( !P )
              return -1073741821;
            v20 = v134;
            ModuleInformation = ExPoolQueryLimits(P, v134, (void *)a4, Size, KeGetCurrentThread()->PreviousMode);
            if ( ModuleInformation >= 0 )
              goto LABEL_39;
            goto LABEL_17;
          case 227:
            v127 = 1;
            if ( Size == 1 )
            {
              *(_BYTE *)a4 = 1;
            }
            else
            {
              if ( a6 )
                *a6 = 1;
LABEL_279:
              ModuleInformation = -1073741820;
            }
            goto LABEL_17;
          case 228:
          case 229:
            v127 = Size;
            SystemBasicInformation = KeQueryDpcWatchdogConfiguration((void *)a4, Size, a1);
            goto LABEL_16;
          case 232:
            SystemBasicInformation = RtlCheckXfgFailureInformation((char *)BaseAddress[1]);
            goto LABEL_16;
          default:
            return -1073741821;
        }
        return result;
      }
      SystemBasicInformation = WbDispatchOperation((void *)a4, Size);
    }
LABEL_16:
    ModuleInformation = SystemBasicInformation;
LABEL_17:
    if ( a6 )
      *a6 = v127;
    return ModuleInformation;
  }
  switch ( a1 )
  {
    case 2:
    case 33:
    case 36:
    case 65:
      v13 = -1;
      v137 = -1;
      ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
      v12 = ActiveProcessorCount;
      LODWORD(v144) = ActiveProcessorCount;
      goto LABEL_12;
    case 8:
    case 23:
    case 42:
    case 61:
    case 73:
    case 83:
    case 100:
    case 108:
    case 141:
    case 160:
      if ( v134 < 2 )
        goto LABEL_491;
      v137 = *(_WORD *)P;
      v13 = v137;
      if ( v137 >= KeQueryActiveGroupCount() )
        goto LABEL_491;
      v37 = KeQueryActiveProcessorCountEx(v137);
      v12 = v37;
      LODWORD(v144) = v37;
      goto LABEL_12;
    case 72:
      if ( v134 != 4 )
        goto LABEL_491;
      v16 = *(unsigned int *)P;
      v146 = *(_DWORD *)P;
      v15 = v132;
      goto LABEL_14;
    case 107:
      if ( v134 < 4 )
        goto LABEL_491;
      v11 = *(_DWORD *)P;
      v152 = *(_DWORD *)P;
      goto LABEL_12;
    case 121:
      if ( v134 >= 2 )
      {
        v132 = *(_WORD *)P;
        v15 = v132;
        if ( v132 < (unsigned __int16)KeNumberNodes )
          goto LABEL_13;
      }
      goto LABEL_491;
    case 165:
      if ( !v134 )
      {
        v155 = 0LL;
        goto LABEL_12;
      }
      if ( v134 == 8 )
      {
        v155 = *(_QWORD *)P;
        goto LABEL_12;
      }
LABEL_491:
      result = -1073741811;
      break;
    case 175:
    case 181:
    case 230:
      if ( v134 != 8 )
        goto LABEL_491;
      v14 = *(void **)P;
      v165 = *(_QWORD *)P;
      goto LABEL_12;
    case 178:
      if ( v134 != 8 )
        goto LABEL_491;
      v162 = *(_QWORD *)P;
      goto LABEL_12;
    case 231:
      if ( v134 < 8 )
        goto LABEL_491;
      v9 = (__int64)P;
      ProcNumber = (struct _PROCESSOR_NUMBER)*((_DWORD *)P + 1);
      v11 = *(_DWORD *)P;
      v152 = *(_DWORD *)P;
      goto LABEL_12;
    case 232:
      if ( v134 < 0x20 )
        goto LABEL_491;
      *(_OWORD *)BaseAddress = *(_OWORD *)P;
      v169 = *((_OWORD *)P + 1);
      goto LABEL_12;
    default:
      goto LABEL_12;
  }
  return result;
}
