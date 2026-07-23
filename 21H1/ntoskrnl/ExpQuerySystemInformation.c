/*
 * XREFs of ExpQuerySystemInformation @ 0x1405E5DF0
 * Callers:
 *     NtQuerySystemInformation @ 0x1405E5C70 (NtQuerySystemInformation.c)
 *     NtQuerySystemInformationEx @ 0x1406C9110 (NtQuerySystemInformationEx.c)
 * Callees:
 *     ExCpuSetResourceManagerAccessCheck @ 0x140202268 (ExCpuSetResourceManagerAccessCheck.c)
 *     MmGetProcessPartitionId @ 0x140203F14 (MmGetProcessPartitionId.c)
 *     MmGetAvailablePages @ 0x140203F24 (MmGetAvailablePages.c)
 *     MmGetTotalCommittedPages @ 0x140203F44 (MmGetTotalCommittedPages.c)
 *     MmGetTotalCommitLimit @ 0x140203F64 (MmGetTotalCommitLimit.c)
 *     MmGetPeakCommitment @ 0x140203F84 (MmGetPeakCommitment.c)
 *     MmGetSharedCommit @ 0x140204054 (MmGetSharedCommit.c)
 *     MmGetResidentAvailablePages @ 0x140204064 (MmGetResidentAvailablePages.c)
 *     ExpGetSystemBasicInformation @ 0x14020538C (ExpGetSystemBasicInformation.c)
 *     PoGetIdleTimes @ 0x1402056D8 (PoGetIdleTimes.c)
 *     KeGetProcessorIndexFromNumber @ 0x140205810 (KeGetProcessorIndexFromNumber.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1402421D0 (ExAllocatePoolWithQuotaTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     PoEnergyEstimationEnabled @ 0x14025A340 (PoEnergyEstimationEnabled.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14025ED10 (PsIsCurrentThreadInServerSilo.c)
 *     KeEnterCriticalRegion @ 0x14025ED60 (KeEnterCriticalRegion.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     PsGetCurrentProcess @ 0x140293500 (PsGetCurrentProcess.c)
 *     KeEnterCriticalRegionThread @ 0x1402A46D0 (KeEnterCriticalRegionThread.c)
 *     MmQueryMemoryListInformation @ 0x1402BCDA0 (MmQueryMemoryListInformation.c)
 *     ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator @ 0x1402C1180 (ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator.c)
 *     KeQueryActiveGroupCount @ 0x1402C9F20 (KeQueryActiveGroupCount.c)
 *     MmGetHighestPhysicalPage @ 0x1402E4F70 (MmGetHighestPhysicalPage.c)
 *     ExpGetSystemEmulationBasicInformation @ 0x14030CBF0 (ExpGetSystemEmulationBasicInformation.c)
 *     KeQueryCycleTimeStatsProcessor @ 0x14030D100 (KeQueryCycleTimeStatsProcessor.c)
 *     KeQueryBootTimeValues @ 0x14030E6B0 (KeQueryBootTimeValues.c)
 *     MmQuerySystemWorkingSetInformation @ 0x140311CD0 (MmQuerySystemWorkingSetInformation.c)
 *     PoGetPerfStateAndParkingInfo @ 0x140313E68 (PoGetPerfStateAndParkingInfo.c)
 *     MmGetLowestPhysicalPage @ 0x1403230FC (MmGetLowestPhysicalPage.c)
 *     VslIsSecureKernelRunning @ 0x14032339C (VslIsSecureKernelRunning.c)
 *     ExpGetSystemEmulationProcessorInformation @ 0x140326C5C (ExpGetSystemEmulationProcessorInformation.c)
 *     ExpGetSystemProcessorInformation @ 0x140327110 (ExpGetSystemProcessorInformation.c)
 *     KeQueryLogicalProcessorRelationship @ 0x140327220 (KeQueryLogicalProcessorRelationship.c)
 *     KeQueryActiveProcessorCountEx @ 0x140328380 (KeQueryActiveProcessorCountEx.c)
 *     VslGetNestedPageProtectionFlags @ 0x14032BBE0 (VslGetNestedPageProtectionFlags.c)
 *     KeIsUserCetAllowed @ 0x140337FD8 (KeIsUserCetAllowed.c)
 *     KeQueryGroupAffinity @ 0x14033B2A0 (KeQueryGroupAffinity.c)
 *     KeGetRecommendedSharedDataAlignment @ 0x14033F7F0 (KeGetRecommendedSharedDataAlignment.c)
 *     KeFlushProcessWriteBuffers @ 0x140358FBC (KeFlushProcessWriteBuffers.c)
 *     PsQueryCpuQuotaInformation @ 0x1403CBB94 (PsQueryCpuQuotaInformation.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KeIsCetCapable @ 0x1403EC560 (KeIsCetCapable.c)
 *     ZwFilterBootOption @ 0x1403F3F90 (ZwFilterBootOption.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     HvlQueryActiveProcessors @ 0x1404EC7B0 (HvlQueryActiveProcessors.c)
 *     HvlQueryProcessorTopologyCount @ 0x1404EC9B0 (HvlQueryProcessorTopologyCount.c)
 *     VslIsTrustletRunning @ 0x1404F70A4 (VslIsTrustletRunning.c)
 *     VslQuerySecureKernelProfileInformation @ 0x1404F7630 (VslQuerySecureKernelProfileInformation.c)
 *     KeQuerySecureSpeculationInformation @ 0x140515B20 (KeQuerySecureSpeculationInformation.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x14051C9E8 (KeGetAffinitizedInterruptsInfo.c)
 *     MmEnumerateBadPages @ 0x14055EC6C (MmEnumerateBadPages.c)
 *     PpmCapturePerformanceDistribution @ 0x14057118C (PpmCapturePerformanceDistribution.c)
 *     PsQueryActivityModerationUserSettings @ 0x14057B950 (PsQueryActivityModerationUserSettings.c)
 *     SeQueryTrustedPlatformModuleInformation @ 0x140591920 (SeQueryTrustedPlatformModuleInformation.c)
 *     ExpGetLookasideInformation @ 0x1405AC030 (ExpGetLookasideInformation.c)
 *     ExGetBigPoolInfo @ 0x1405ADADC (ExGetBigPoolInfo.c)
 *     ExIsRestrictedCaller @ 0x1405CEDDC (ExIsRestrictedCaller.c)
 *     ExReleaseTimeRefreshLock @ 0x1405D0D34 (ExReleaseTimeRefreshLock.c)
 *     ExAcquireTimeRefreshLock @ 0x1405D0D58 (ExAcquireTimeRefreshLock.c)
 *     PsQueryFullProcessImageName @ 0x1405D94EC (PsQueryFullProcessImageName.c)
 *     ExpQuerySystemPerformanceInformation @ 0x1405DA2D0 (ExpQuerySystemPerformanceInformation.c)
 *     PsLookupProcessByProcessId @ 0x1405E0070 (PsLookupProcessByProcessId.c)
 *     SeSinglePrivilegeCheck @ 0x1405E3050 (SeSinglePrivilegeCheck.c)
 *     MmGetNumberOfPhysicalPages @ 0x1405E3130 (MmGetNumberOfPhysicalPages.c)
 *     ProbeForWrite @ 0x1405E9480 (ProbeForWrite.c)
 *     PfQuerySuperfetchInformation @ 0x1405E94F0 (PfQuerySuperfetchInformation.c)
 *     ExpQueryModuleInformation @ 0x14061B430 (ExpQueryModuleInformation.c)
 *     ExpGetProcessInformation @ 0x140629910 (ExpGetProcessInformation.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     PsWow64GetSupportedArchitectures @ 0x14064C950 (PsWow64GetSupportedArchitectures.c)
 *     WbDispatchOperation @ 0x14065ECA0 (WbDispatchOperation.c)
 *     SeCodeIntegrityQueryPolicyInformation @ 0x1406B5C80 (SeCodeIntegrityQueryPolicyInformation.c)
 *     ExGetSessionPoolTagInformation @ 0x1406BCDCC (ExGetSessionPoolTagInformation.c)
 *     ExGetPoolTagInfo @ 0x1406C599C (ExGetPoolTagInfo.c)
 *     CmQueryFeatureConfigurationSections @ 0x1406CF25C (CmQueryFeatureConfigurationSections.c)
 *     KeBuildLogicalProcessorSystemInformation @ 0x1406D82E8 (KeBuildLogicalProcessorSystemInformation.c)
 *     SeCodeIntegrityQueryInformation @ 0x1406D8C40 (SeCodeIntegrityQueryInformation.c)
 *     ExpGetSystemFlushInformation @ 0x1406D8C90 (ExpGetSystemFlushInformation.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1406D8DBC (ExpGetSystemFirmwareTableInformation.c)
 *     PfSnQueryPrefetcherInformation @ 0x1406DA714 (PfSnQueryPrefetcherInformation.c)
 *     SmQueryStoreInformation @ 0x1406DAC6C (SmQueryStoreInformation.c)
 *     IoQuerySystemDeviceName @ 0x1406DF4AC (IoQuerySystemDeviceName.c)
 *     SeSecureBootQueryInformation @ 0x1406E625C (SeSecureBootQueryInformation.c)
 *     IoQueryLowPriorityIoInformation @ 0x1406E8408 (IoQueryLowPriorityIoInformation.c)
 *     ExpReadComPlusPackage @ 0x1406ED460 (ExpReadComPlusPackage.c)
 *     ExpQueryNumaProcessorMap @ 0x1406F0C54 (ExpQueryNumaProcessorMap.c)
 *     MmGetPageFileInformation @ 0x14070458C (MmGetPageFileInformation.c)
 *     ExHandleSPCall2 @ 0x140705074 (ExHandleSPCall2.c)
 *     SeQueryHSTIResults @ 0x14075E660 (SeQueryHSTIResults.c)
 *     ExpQueryChannelInformation @ 0x140765F88 (ExpQueryChannelInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 *     CmQueryRegistryQuotaInformation @ 0x140767FFC (CmQueryRegistryQuotaInformation.c)
 *     IoGetConfigurationInformation @ 0x14076CF90 (IoGetConfigurationInformation.c)
 *     ExQueryBootEntropyInformation @ 0x1407812D4 (ExQueryBootEntropyInformation.c)
 *     ExpQueryModuleInformationEx @ 0x1407997FC (ExpQueryModuleInformationEx.c)
 *     KeQueryCpuSetInformation @ 0x1407B1428 (KeQueryCpuSetInformation.c)
 *     ExpQueryMemoryTopologyInformation @ 0x1407B27D0 (ExpQueryMemoryTopologyInformation.c)
 *     ExpQueryInterruptSteeringInformation @ 0x1407B98E4 (ExpQueryInterruptSteeringInformation.c)
 *     ExpGetSystemPlatformBinary @ 0x1407BA264 (ExpGetSystemPlatformBinary.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x1407BC708 (ExpGetSystemWriteConstraintInformation.c)
 *     HvlQueryEnlightenmentInfo @ 0x1407BD0CC (HvlQueryEnlightenmentInfo.c)
 *     IoQueryVhdBootInformation @ 0x1407BD6D4 (IoQueryVhdBootInformation.c)
 *     ExSystemExceptionFilter @ 0x1407BEDE0 (ExSystemExceptionFilter.c)
 *     CmQuerySingleFeatureConfiguration @ 0x140866818 (CmQuerySingleFeatureConfiguration.c)
 *     HvlQueryDetailInfo @ 0x140889F18 (HvlQueryDetailInfo.c)
 *     HvlQueryVsmProtectionInfo @ 0x14088A034 (HvlQueryVsmProtectionInfo.c)
 *     KeQuerySpeculationControlInformation @ 0x1408B7528 (KeQuerySpeculationControlInformation.c)
 *     KeQueryKvaShadowInformation @ 0x1408B8450 (KeQueryKvaShadowInformation.c)
 *     MmGetSessionMappedViewInformation @ 0x1408BFF80 (MmGetSessionMappedViewInformation.c)
 *     ObQueryRefTraceInformation @ 0x1408D9684 (ObQueryRefTraceInformation.c)
 *     PsRootSiloInformation @ 0x1409019D4 (PsRootSiloInformation.c)
 *     SeSecurityModelQueryInformation @ 0x14091867C (SeSecurityModelQueryInformation.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1409335CC (EtwQueryPerformanceTraceInformation.c)
 *     ExGetSessionBigPoolInformation @ 0x140945730 (ExGetSessionBigPoolInformation.c)
 *     ExpGetDeviceDataInformation @ 0x140945948 (ExpGetDeviceDataInformation.c)
 *     ExpGetHandleInformation @ 0x140945B54 (ExpGetHandleInformation.c)
 *     ExpGetHandleInformationEx @ 0x140945BD4 (ExpGetHandleInformationEx.c)
 *     ExpGetLockInformation @ 0x140945C54 (ExpGetLockInformation.c)
 *     ExpGetObjectInformation @ 0x140945CD4 (ExpGetObjectInformation.c)
 *     ExpGetSystemProcessorFeaturesInformation @ 0x140945D64 (ExpGetSystemProcessorFeaturesInformation.c)
 *     ExpIsIumEncryptionKeyAvailable @ 0x140945DC0 (ExpIsIumEncryptionKeyAvailable.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x140945E6C (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryLegacyDriverInformation @ 0x1409463E4 (ExpQueryLegacyDriverInformation.c)
 *     ExpQueryNumaAvailableMemory @ 0x1409464DC (ExpQueryNumaAvailableMemory.c)
 *     ExpQueryNumaProximityNode @ 0x14094668C (ExpQueryNumaProximityNode.c)
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x1409467E0 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     ExpQuerySingleModuleInformation @ 0x1409469F0 (ExpQuerySingleModuleInformation.c)
 *     ExpCovQueryInformation @ 0x140952ACC (ExpCovQueryInformation.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 *     VfGetVerifierInformation @ 0x1409E9A34 (VfGetVerifierInformation.c)
 *     VfGetVerifierInformationEx @ 0x1409E9AFC (VfGetVerifierInformationEx.c)
 *     BgkQueryBootGraphicsInformation @ 0x1409EF48C (BgkQueryBootGraphicsInformation.c)
 */

NTSTATUS __fastcall ExpQuerySystemInformation(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        volatile void *a4,
        unsigned int Length,
        unsigned int *a6)
{
  __int64 v6; // rbx
  unsigned int v7; // r11d
  unsigned int v8; // edi
  unsigned __int8 v9; // r12
  unsigned int v10; // esi
  ULONG v11; // r8d
  __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  __int64 v14; // r9
  unsigned __int16 v15; // r10
  int v16; // edx
  USHORT v17; // cx
  ULONG ActiveProcessorCount; // eax
  USHORT ActiveGroupCount; // ax
  int SystemBasicInformation; // eax
  _KPROCESS *v21; // rax
  unsigned __int16 v22; // di
  unsigned __int16 v23; // cx
  unsigned __int16 v24; // cx
  unsigned __int16 v25; // cx
  unsigned __int16 v26; // cx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  signed int SystemProcessorFeaturesInformation; // esi
  _KPROCESS *v31; // rax
  unsigned __int16 v32; // di
  unsigned __int16 v33; // cx
  _KPROCESS *CurrentProcess; // rax
  unsigned __int16 ProcessPartitionId; // ax
  unsigned __int16 v36; // cx
  unsigned __int16 v37; // cx
  unsigned __int16 v38; // cx
  unsigned __int64 PeakCommitment; // rcx
  unsigned int v40; // edi
  unsigned int v41; // esi
  unsigned int v42; // eax
  _DWORD *v43; // r13
  int v44; // ecx
  unsigned __int64 v45; // r12
  unsigned int v46; // ecx
  _DWORD *PoolWithTag; // rax
  _DWORD *v48; // rdi
  __int64 v49; // r14
  unsigned __int64 v50; // rdi
  char v51; // si
  char *v52; // rdx
  struct _KTHREAD *CurrentThread; // r14
  __int64 v54; // rdx
  NTSTATUS v55; // edi
  __int64 v56; // r8
  __int64 v57; // r9
  NTSTATUS result; // eax
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // r9
  PCONFIGURATION_INFORMATION ConfigurationInformation; // rax
  __int64 v63; // rcx
  signed int ModuleInformation; // eax
  int v65; // ecx
  unsigned int v66; // eax
  int v67; // ecx
  int v68; // eax
  __int64 v69; // rdx
  unsigned int v70; // ebx
  int v71; // ecx
  int v72; // edx
  __int64 *v73; // r12
  __int64 v74; // r8
  __int64 *v75; // r12
  __int64 v76; // rdx
  unsigned int i; // esi
  _DWORD *v78; // rdx
  int *v79; // rcx
  __int64 v80; // rax
  __int64 *v81; // r12
  __int64 v82; // rcx
  int v83; // edx
  unsigned int v84; // r8d
  int v85; // r9d
  unsigned int v86; // eax
  unsigned int v87; // r13d
  unsigned __int16 j; // ax
  __int64 v89; // rcx
  _QWORD *v90; // rax
  unsigned int v91; // eax
  __int64 v92; // rcx
  unsigned int v93; // eax
  unsigned int v94; // r13d
  __int64 v95; // rdx
  struct _MDL *PoolWithQuotaTag; // rdi
  int v97; // eax
  int v98; // ecx
  __int64 v99; // rax
  PVOID v100; // rdi
  unsigned int v101; // ecx
  PVOID v102; // r12
  void *v103; // rcx
  unsigned int v104; // eax
  unsigned int v105; // r13d
  __int64 v106; // rcx
  char v107; // cl
  __int16 NestedPageProtectionFlags; // ax
  char v109; // cl
  bool IsUserCetAllowed; // al
  int v111; // ecx
  unsigned __int8 IsKTMCommitCoordinator; // al
  int v113; // edx
  struct _DMA_ADAPTER *v114; // rdi
  signed int CpuSetInformation; // eax
  struct _MDL *v116; // rax
  int v117; // eax
  __int64 v118; // rax
  unsigned int Size; // [rsp+30h] [rbp-1C8h] BYREF
  int Size_4; // [rsp+34h] [rbp-1C4h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+38h] [rbp-1C0h] BYREF
  unsigned __int16 v122; // [rsp+3Ch] [rbp-1BCh]
  int v123; // [rsp+40h] [rbp-1B8h]
  int v124; // [rsp+44h] [rbp-1B4h]
  char v125[4]; // [rsp+48h] [rbp-1B0h] BYREF
  int NumberOfBytes[3]; // [rsp+4Ch] [rbp-1ACh] BYREF
  unsigned int *v127; // [rsp+58h] [rbp-1A0h]
  int v128; // [rsp+60h] [rbp-198h] BYREF
  unsigned int v129; // [rsp+64h] [rbp-194h]
  char Data[4]; // [rsp+68h] [rbp-190h] BYREF
  unsigned __int16 v131; // [rsp+6Ch] [rbp-18Ch]
  ULONG v132; // [rsp+70h] [rbp-188h]
  int v133; // [rsp+74h] [rbp-184h]
  unsigned int v134; // [rsp+78h] [rbp-180h]
  LOGICAL_PROCESSOR_RELATIONSHIP RelationshipType; // [rsp+7Ch] [rbp-17Ch]
  unsigned int v136; // [rsp+80h] [rbp-178h]
  unsigned int v137; // [rsp+84h] [rbp-174h] BYREF
  int v138; // [rsp+88h] [rbp-170h] BYREF
  int v139; // [rsp+8Ch] [rbp-16Ch]
  int v140; // [rsp+90h] [rbp-168h] BYREF
  unsigned int v141; // [rsp+94h] [rbp-164h] BYREF
  _QWORD *v142; // [rsp+98h] [rbp-160h]
  PEPROCESS Process; // [rsp+A0h] [rbp-158h] BYREF
  PVOID v144; // [rsp+A8h] [rbp-150h] BYREF
  PVOID P; // [rsp+B0h] [rbp-148h] BYREF
  PVOID v146; // [rsp+B8h] [rbp-140h] BYREF
  __int64 v147; // [rsp+C0h] [rbp-138h]
  HANDLE Handle; // [rsp+C8h] [rbp-130h]
  HANDLE ProcessId[2]; // [rsp+D0h] [rbp-128h]
  char *v150; // [rsp+E0h] [rbp-118h]
  __int64 v151; // [rsp+E8h] [rbp-110h] BYREF
  volatile void *v152; // [rsp+F0h] [rbp-108h]
  PVOID Object; // [rsp+F8h] [rbp-100h] BYREF
  __int64 v154; // [rsp+100h] [rbp-F8h]
  __int128 v155; // [rsp+108h] [rbp-F0h] BYREF
  int v156; // [rsp+118h] [rbp-E0h]
  int v157; // [rsp+120h] [rbp-D8h]
  __int64 v158; // [rsp+128h] [rbp-D0h]
  __int128 Src; // [rsp+130h] [rbp-C8h] BYREF
  __int128 v160; // [rsp+140h] [rbp-B8h]
  __int128 v161; // [rsp+150h] [rbp-A8h] BYREF
  __int128 v162; // [rsp+160h] [rbp-98h]
  __int128 v163; // [rsp+170h] [rbp-88h]
  __int128 v164; // [rsp+180h] [rbp-78h]
  __int128 v165; // [rsp+190h] [rbp-68h]
  __int128 v166; // [rsp+1A0h] [rbp-58h]

  v6 = (__int64)a4;
  v124 = a3;
  *(_QWORD *)&NumberOfBytes[1] = a2;
  v7 = a1;
  v134 = a1;
  v127 = a6;
  v8 = 0;
  NumberOfBytes[0] = 0;
  v151 = 0LL;
  v137 = 0;
  v138 = 0;
  v129 = 0;
  v128 = 0;
  v131 = 0;
  v122 = 0;
  v155 = 0LL;
  Process = 0LL;
  ProcNumber = 0;
  RelationshipType = RelationProcessorCore;
  v146 = 0LL;
  P = 0LL;
  v139 = 0;
  Src = 0LL;
  v160 = 0LL;
  v161 = 0LL;
  v162 = 0LL;
  v163 = 0LL;
  v164 = 0LL;
  v165 = 0LL;
  v166 = 0LL;
  Size_4 = 0;
  v9 = KeGetCurrentThread()->$6A88714AB977AAA8032D9F5E2A96BA31::gap0[10];
  if ( v9 )
  {
    switch ( a1 )
    {
      case 0xCu:
        v11 = 8;
        goto LABEL_6;
      case 0x23u:
      case 0x91u:
      case 0x93u:
      case 0x95u:
      case 0x9Eu:
      case 0xA3u:
      case 0xA9u:
      case 0xCAu:
      case 0xE3u:
        v10 = 1;
        v11 = 1;
        break;
      default:
        v11 = 4;
LABEL_6:
        v10 = 1;
        break;
    }
    ProbeForWrite(a4, Length, v11);
    if ( a6 )
    {
      v12 = (__int64)a6;
      if ( (unsigned __int64)a6 >= 0x7FFFFFFF0000LL )
        v12 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v12 = *(_DWORD *)v12;
    }
    a3 = v124;
    v7 = v134;
    v13 = 0x140000000uLL;
  }
  else
  {
    v13 = 0x140000000uLL;
    v10 = 1;
  }
  Size = 0;
  RelationshipType = RelationAll;
  v14 = 0LL;
  v132 = 0;
  v15 = 0;
  v123 = 0;
  v122 = 0;
  v131 = 0;
  v147 = 0LL;
  Handle = 0LL;
  v154 = 0LL;
  v16 = 9;
  v133 = 9;
  v139 = 9;
  switch ( v7 )
  {
    case 2u:
    case 0x21u:
    case 0x24u:
    case 0x41u:
      v123 = 0xFFFF;
      v122 = -1;
      v17 = -1;
      goto LABEL_15;
    case 8u:
    case 0x17u:
    case 0x2Au:
    case 0x3Du:
    case 0x49u:
    case 0x53u:
    case 0x64u:
    case 0x6Cu:
    case 0x8Du:
    case 0xA0u:
      if ( a3 < 2 )
        return -1073741811;
      v123 = (unsigned __int16)**(_WORD **)&NumberOfBytes[1];
      v122 = v123;
      ActiveGroupCount = KeQueryActiveGroupCount();
      v17 = v123;
      if ( (unsigned __int16)v123 >= ActiveGroupCount )
        return -1073741811;
LABEL_15:
      ActiveProcessorCount = KeQueryActiveProcessorCountEx(v17);
      v14 = ActiveProcessorCount;
      v132 = ActiveProcessorCount;
      v15 = v123;
      v16 = v133;
      v7 = v134;
      goto LABEL_34;
    case 0x48u:
      if ( a3 != 4 )
        return -1073741811;
      v16 = **(_DWORD **)&NumberOfBytes[1];
      v139 = **(_DWORD **)&NumberOfBytes[1];
      goto LABEL_34;
    case 0x6Bu:
      if ( a3 < 4 )
        return -1073741811;
      RelationshipType = **(_DWORD **)&NumberOfBytes[1];
      goto LABEL_34;
    case 0x79u:
      if ( a3 >= 2 )
      {
        v131 = **(_WORD **)&NumberOfBytes[1];
        if ( v131 < (unsigned __int16)KeNumberNodes )
          goto LABEL_34;
      }
      return -1073741811;
    case 0xA5u:
      if ( a3 )
      {
        if ( a3 != 8 )
          return -1073741811;
        v147 = **(_QWORD **)&NumberOfBytes[1];
      }
      else
      {
        v147 = 0LL;
      }
LABEL_34:
      switch ( v7 )
      {
        case 0u:
        case 0x72u:
          if ( Length == 64 )
          {
            SystemBasicInformation = ExpGetSystemBasicInformation(v6);
            goto LABEL_635;
          }
          if ( a6 )
            *a6 = 64;
          return -1073741820;
        case 1u:
          if ( Length >= 0xC )
          {
            SystemBasicInformation = ExpGetSystemProcessorInformation(v6);
            Size = 12;
            goto LABEL_636;
          }
          if ( a6 )
            *a6 = 12;
          return -1073741820;
        case 2u:
          if ( Length < 0x138 )
          {
            if ( a6 )
              *a6 = 344;
            return -1073741820;
          }
          v40 = 344;
          if ( Length <= 0x158 )
            v40 = Length;
          ExpQuerySystemPerformanceInformation(v14, (void *)v6, v40);
          Size = v40;
          SystemProcessorFeaturesInformation = Size_4;
          goto LABEL_637;
        case 3u:
          if ( Length <= 0x30 )
          {
            KeQueryBootTimeValues((_QWORD *)&Src + 1, (LARGE_INTEGER *)&Src, &v161);
            *(_QWORD *)&v160 = ExpTimeZoneBias;
            DWORD2(v160) = ExpCurrentTimeZoneId;
            *((_QWORD *)&v161 + 1) = MEMORY[0xFFFFF780000003B0];
            memmove((void *)v6, &Src, Length);
            goto LABEL_120;
          }
          if ( a6 )
            *a6 = 48;
          return -1073741820;
        case 4u:
        case 0xAu:
        case 0x19u:
        case 0x1Du:
        case 0x60u:
          return -1073741822;
        case 5u:
        case 0x39u:
        case 0x94u:
          SystemBasicInformation = ExpGetProcessInformation(v6, Length, (unsigned int)&Size, 0, v7);
          goto LABEL_636;
        case 6u:
          return -1073741637;
        case 7u:
          if ( Length == 24 )
          {
            ConfigurationInformation = IoGetConfigurationInformation();
            *(_DWORD *)v6 = ConfigurationInformation->DiskCount;
            *(_DWORD *)(v6 + 4) = ConfigurationInformation->FloppyCount;
            *(_DWORD *)(v6 + 8) = ConfigurationInformation->CdRomCount;
            *(_DWORD *)(v6 + 12) = ConfigurationInformation->TapeCount;
            *(_DWORD *)(v6 + 16) = ConfigurationInformation->SerialCount;
            *(_DWORD *)(v6 + 20) = ConfigurationInformation->ParallelCount;
            goto LABEL_66;
          }
          if ( a6 )
            *a6 = 24;
          return -1073741820;
        case 8u:
        case 0x8Du:
          v41 = 48;
          if ( v7 != 8 )
            v41 = 72;
          if ( Length && !(Length % v41) )
          {
            v124 = 0;
            v42 = 0;
            while ( 1 )
            {
              v133 = v42;
              if ( v42 >= (unsigned int)v14 )
                break;
              ProcNumber.Group = v15;
              ProcNumber.Number = v42;
              ProcNumber.Reserved = 0;
              v43 = (_DWORD *)KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)];
              v44 = v124;
              if ( Length < v41 + v124 )
                goto LABEL_90;
              v124 += v41;
              PoGetIdleTimes(&ProcNumber, 0LL, (__int64)&Src);
              *(_QWORD *)(v6 + 16) = KeMaximumIncrement * (unsigned __int64)(unsigned int)v43[8098];
              *(_QWORD *)(v6 + 8) = KeMaximumIncrement * (unsigned __int64)DWORD1(Src);
              *(_QWORD *)(v6 + 24) = KeMaximumIncrement * (unsigned __int64)(unsigned int)v43[8099];
              *(_QWORD *)(v6 + 32) = KeMaximumIncrement * (unsigned __int64)(unsigned int)v43[8100];
              *(_QWORD *)v6 = KeMaximumIncrement * (unsigned __int64)(unsigned int)Src;
              *(_DWORD *)(v6 + 40) = v43[8096];
              if ( v134 == 141 )
              {
                *(_QWORD *)(v6 + 48) = KeMaximumIncrement * (unsigned __int64)(unsigned int)v43[8107];
                *(_DWORD *)(v6 + 44) = 0;
                *(_QWORD *)(v6 + 56) = 0LL;
                *(_QWORD *)(v6 + 64) = 0LL;
              }
              v6 += v41;
              v42 = v133 + 1;
              LODWORD(v14) = v132;
              v15 = v123;
            }
            v44 = v124;
LABEL_90:
            Size = v44;
            SystemProcessorFeaturesInformation = Size_4;
            goto LABEL_637;
          }
          if ( a6 )
            *a6 = v14 * v41;
          return -1073741820;
        case 9u:
          if ( Length == 4 )
          {
            *(_DWORD *)v6 = NtGlobalFlag;
            goto LABEL_159;
          }
          if ( a6 )
            *a6 = 4;
          return -1073741820;
        case 0xBu:
          if ( ExIsRestrictedCaller(v9) )
            return -1073741790;
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
          ModuleInformation = ExpQueryModuleInformation(v63, v6, Length, &Size);
          goto LABEL_166;
        case 0xCu:
          if ( Length < 0x38 )
          {
            if ( a6 )
              *a6 = 56;
            return -1073741820;
          }
          if ( ExIsRestrictedCaller(v9) )
            return -1073741790;
          SystemBasicInformation = ExpGetLockInformation(v6, Length, &Size);
          goto LABEL_636;
        case 0xDu:
          if ( Length >= 0x128 )
            goto LABEL_180;
          if ( a6 )
            *a6 = 296;
          return -1073741820;
        case 0xEu:
        case 0xFu:
        case 0x13u:
LABEL_180:
          SystemProcessorFeaturesInformation = -1073741822;
          goto LABEL_637;
        case 0x10u:
          if ( Length < 0x20 )
          {
            if ( a6 )
              *a6 = 32;
            return -1073741820;
          }
          if ( (v6 & 7) != 0 )
            return -2147483646;
          if ( !ExIsRestrictedCaller(v9) )
          {
            SystemBasicInformation = ExpGetHandleInformation(v6, Length, &Size);
            goto LABEL_636;
          }
          return -1073741790;
        case 0x11u:
          if ( Length < 0x40 )
          {
            if ( a6 )
              *a6 = 64;
            return -1073741820;
          }
          if ( ExIsRestrictedCaller(v9) )
            return -1073741790;
          SystemBasicInformation = ExpGetObjectInformation(v6, Length, &Size);
          goto LABEL_636;
        case 0x12u:
        case 0x90u:
          v66 = 32;
          if ( v7 != 18 )
            v66 = 40;
          Size = v66;
          if ( Length >= v66 )
          {
            Size = 0;
            LOBYTE(v8) = v7 == 144;
            SystemBasicInformation = MmGetPageFileInformation(40, v6, Length, v8, (__int64)&Size);
            goto LABEL_636;
          }
          if ( a6 )
            *a6 = v66;
          return -1073741820;
        case 0x15u:
        case 0x51u:
        case 0x77u:
        case 0x78u:
          if ( Length < 0x40 )
          {
            if ( a6 )
              *a6 = 64;
            return -1073741820;
          }
          v67 = 2;
          if ( v7 == 119 )
          {
            v68 = 3;
          }
          else
          {
            if ( v7 == 120 )
              v67 = 4;
            v68 = v67;
          }
          MmQuerySystemWorkingSetInformation(v68, &Src);
          *(_OWORD *)v6 = Src;
          *(_DWORD *)(v6 + 16) = v160;
          *(_QWORD *)(v6 + 24) = *((_QWORD *)&v160 + 1);
          *(_OWORD *)(v6 + 32) = v161;
          *(_OWORD *)(v6 + 48) = v162;
          Size = 64;
          SystemProcessorFeaturesInformation = Size_4;
          goto LABEL_637;
        case 0x16u:
          if ( Length >= 0x30 )
          {
            SystemBasicInformation = ExGetPoolTagInfo(v6, Length, &Size, v14);
            goto LABEL_636;
          }
          if ( a6 )
            *a6 = 48;
          return -1073741820;
        case 0x17u:
          Size = 24 * v14;
          if ( Length >= 24 * (int)v14 )
          {
            for ( i = 0; i < (unsigned int)v14; ++i )
            {
              ProcNumber.Group = v15;
              ProcNumber.Number = i;
              ProcNumber.Reserved = 0;
              v78 = (_DWORD *)KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)];
              *(_DWORD *)v6 = v78[2895];
              *(_DWORD *)(v6 + 4) = v78[3127];
              *(_DWORD *)(v6 + 8) = v78[3143];
              *(_DWORD *)(v6 + 12) = KeTimeIncrement;
              *(_DWORD *)(v6 + 16) = 0;
              *(_DWORD *)(v6 + 20) = 0;
              v6 += 24LL;
              LODWORD(v14) = v132;
              v15 = v123;
            }
            goto LABEL_289;
          }
          if ( a6 )
            *a6 = 24 * v14;
          return -1073741820;
        case 0x18u:
          if ( Length == 20 )
          {
            *(_DWORD *)(v6 + 4) = KiMaximumDpcQueueDepth;
            *(_DWORD *)(v6 + 8) = KiMinimumDpcRate;
            *(_DWORD *)(v6 + 12) = KiAdjustDpcThreshold;
            *(_DWORD *)(v6 + 16) = KiIdealDpcRate;
            goto LABEL_278;
          }
          if ( a6 )
            *a6 = 20;
          return -1073741820;
        case 0x1Cu:
          if ( Length != 12 && Length != 24 )
          {
            if ( a6 )
              *a6 = 12;
            return -1073741820;
          }
          ExAcquireTimeRefreshLock(1u);
          v50 = KeTimeAdjustmentFrequency;
          v51 = KeTimeSynchronization;
          ExReleaseTimeRefreshLock();
          if ( Length == 24 )
          {
            *(_QWORD *)v6 = v50;
            *(_QWORD *)(v6 + 8) = MEMORY[0xFFFFF78000000300];
            *(_BYTE *)(v6 + 16) = v51;
          }
          else
          {
            *(_DWORD *)v6 = MEMORY[0xFFFFF78000000300] * (unsigned __int64)KeMaximumIncrement / v50;
            *(_DWORD *)(v6 + 4) = KeMaximumIncrement;
            *(_BYTE *)(v6 + 8) = v51;
          }
LABEL_120:
          Size = Length;
          SystemProcessorFeaturesInformation = Size_4;
          goto LABEL_637;
        case 0x1Fu:
          SystemBasicInformation = EtwQueryPerformanceTraceInformation(v6, Length, v9, &Size);
          goto LABEL_636;
        case 0x21u:
          if ( Length < 0x10 )
          {
            if ( a6 )
              *a6 = 16;
            return -1073741820;
          }
          Size = 16;
          v71 = 0;
          v72 = 0;
          if ( (_DWORD)v14 )
          {
            v73 = KiProcessorBlock;
            v74 = (unsigned int)v14;
            do
            {
              v71 += *(_DWORD *)(*v73 + 33592);
              v72 += *(_DWORD *)(*v73++ + 32432);
              --v74;
            }
            while ( v74 );
          }
          *(_DWORD *)v6 = v71;
          *(_DWORD *)(v6 + 4) = v72;
          *(_DWORD *)(v6 + 8) = 0;
          *(_DWORD *)(v6 + 12) = 0;
          SystemProcessorFeaturesInformation = Size_4;
          goto LABEL_637;
        case 0x23u:
          if ( Length >= 2 )
          {
            *(_BYTE *)v6 = (_BYTE)KdDebuggerEnabled;
            *(_BYTE *)(v6 + 1) = (_BYTE)KdDebuggerNotPresent;
            Size = 2;
            SystemProcessorFeaturesInformation = Size_4;
            goto LABEL_637;
          }
          if ( a6 )
            *a6 = 2;
          return -1073741820;
        case 0x24u:
          if ( Length < 0x30 )
          {
            if ( a6 )
              *a6 = 48;
            return -1073741820;
          }
          if ( (_DWORD)v14 )
          {
            v75 = KiProcessorBlock;
            v76 = (unsigned int)v14;
            do
            {
              v8 += *(_DWORD *)(*v75++ + 11580);
              --v76;
            }
            while ( v76 );
          }
          *(_DWORD *)v6 = v8;
          *(_DWORD *)(v6 + 4) = KeThreadSwitchCounters;
          *(_DWORD *)(v6 + 8) = dword_140C31C08;
          *(_DWORD *)(v6 + 12) = dword_140C31C04;
          *(_DWORD *)(v6 + 16) = dword_140C31C0C;
          *(_DWORD *)(v6 + 20) = dword_140C31C10;
          *(_DWORD *)(v6 + 24) = dword_140C31C18;
          *(_DWORD *)(v6 + 28) = dword_140C31C14;
          *(_DWORD *)(v6 + 32) = dword_140C31C1C;
          *(_DWORD *)(v6 + 36) = dword_140C31C20;
          *(_DWORD *)(v6 + 40) = dword_140C31C24;
          *(_DWORD *)(v6 + 44) = dword_140C31C28;
          v10 = 48;
          goto LABEL_269;
        case 0x25u:
          if ( Length >= 0x10 )
          {
            SystemBasicInformation = CmQueryRegistryQuotaInformation(v6);
            Size = 16;
            goto LABEL_636;
          }
          if ( a6 )
            *a6 = 16;
          return -1073741820;
        case 0x2Au:
          Size = 48 * v14;
          if ( Length < 48 * (int)v14 )
            goto LABEL_103;
          while ( v8 < (unsigned int)v14 )
          {
            ProcNumber.Group = v15;
            ProcNumber.Number = v8;
            ProcNumber.Reserved = 0;
            PoGetIdleTimes(&ProcNumber, (__int64)&Src, 0LL);
            *(_OWORD *)v6 = Src;
            *(_OWORD *)(v6 + 16) = v160;
            *(_OWORD *)(v6 + 32) = v161;
            v6 += 48LL;
            ++v8;
            LODWORD(v14) = v132;
            v15 = v123;
          }
          goto LABEL_61;
        case 0x2Bu:
          if ( Length >= 0x18 )
          {
            Size = Length;
            SystemBasicInformation = ExpQueryLegacyDriverInformation(v6, &Size);
            goto LABEL_636;
          }
          if ( a6 )
            *a6 = 24;
          return -1073741820;
        case 0x2Cu:
          if ( Length < 0xAC )
          {
            if ( a6 )
              *a6 = 172;
            return -1073741820;
          }
          ExAcquireTimeRefreshLock(1u);
          *(_OWORD *)v6 = *(_OWORD *)&ExpTimeZoneInformation;
          *(_OWORD *)(v6 + 16) = *((_OWORD *)&ExpTimeZoneInformation + 1);
          *(_OWORD *)(v6 + 32) = *((_OWORD *)&ExpTimeZoneInformation + 2);
          *(_OWORD *)(v6 + 48) = *((_OWORD *)&ExpTimeZoneInformation + 3);
          *(_OWORD *)(v6 + 64) = *((_OWORD *)&ExpTimeZoneInformation + 4);
          *(_OWORD *)(v6 + 80) = *((_OWORD *)&ExpTimeZoneInformation + 5);
          *(_OWORD *)(v6 + 96) = *((_OWORD *)&ExpTimeZoneInformation + 6);
          *(_OWORD *)(v6 + 112) = *((_OWORD *)&ExpTimeZoneInformation + 7);
          *(_OWORD *)(v6 + 128) = *((_OWORD *)&ExpTimeZoneInformation + 8);
          *(_OWORD *)(v6 + 144) = *((_OWORD *)&ExpTimeZoneInformation + 9);
          *(_QWORD *)(v6 + 160) = *((_QWORD *)&ExpTimeZoneInformation + 20);
          *(_DWORD *)(v6 + 168) = *(&ExpTimeZoneInformation + 42);
          ExReleaseTimeRefreshLock();
          Size = 172;
LABEL_289:
          SystemProcessorFeaturesInformation = 0;
          goto LABEL_637;
        case 0x2Du:
          SystemBasicInformation = ExpGetLookasideInformation(v6, Length, &Size);
          goto LABEL_636;
        case 0x32u:
          if ( Length == 8 )
          {
            *(_QWORD *)v6 = 0xFFFF800000000000uLL;
            goto LABEL_115;
          }
          if ( a6 )
            *a6 = 8;
          return -1073741820;
        case 0x33u:
          if ( Length >= 0x90 )
            goto LABEL_304;
          if ( a6 )
            *a6 = 144;
          return -1073741820;
        case 0x35u:
          if ( Length >= 0x10 )
          {
            v128 = *(_DWORD *)v6;
            v152 = *(volatile void **)(v6 + 8);
            v136 = *(_DWORD *)(v6 + 4);
            ProbeForWrite(v152, v136, 4u);
            SystemBasicInformation = ExpGetProcessInformation(
                                       (_DWORD)v152,
                                       v136,
                                       (unsigned int)&Size,
                                       (unsigned int)&v128,
                                       5);
            goto LABEL_636;
          }
          if ( a6 )
            *a6 = 16;
          return -1073741820;
        case 0x37u:
          SystemBasicInformation = ExpQueryNumaProcessorMap(v6, Length, &Size, v14);
          goto LABEL_636;
        case 0x38u:
          SystemBasicInformation = PfSnQueryPrefetcherInformation(v13, v6, Length, v9, &Size);
          goto LABEL_636;
        case 0x3Au:
          if ( Length >= 4 )
          {
            *(_DWORD *)v6 = KeGetRecommendedSharedDataAlignment();
            goto LABEL_159;
          }
          if ( a6 )
            *a6 = 4;
          return -1073741820;
        case 0x3Bu:
          if ( Length != 4 )
          {
            if ( a6 )
              *a6 = 4;
            return -1073741820;
          }
          if ( MEMORY[0xFFFFF780000002E0] == -1 )
          {
            MEMORY[0xFFFFF780000002E0] = 0;
            result = ExpReadComPlusPackage(v13);
            SystemProcessorFeaturesInformation = result;
            if ( result < 0 )
              return result;
          }
          else
          {
            SystemProcessorFeaturesInformation = Size_4;
          }
          *(_DWORD *)v6 = MEMORY[0xFFFFF780000002E0];
          Size = 4;
          goto LABEL_637;
        case 0x3Cu:
          SystemBasicInformation = ExpQueryNumaAvailableMemory(v6, Length, &Size, v14);
          goto LABEL_636;
        case 0x3Du:
          Size = 80 * v14;
          if ( Length < 80 * (int)v14 )
            goto LABEL_103;
          while ( v8 < (unsigned int)v14 )
          {
            ProcNumber.Group = v15;
            ProcNumber.Number = v8;
            ProcNumber.Reserved = 0;
            v49 = KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)];
            PoGetPerfStateAndParkingInfo(&ProcNumber, (__int64)&Src, 0LL, &v151);
            *(_OWORD *)v6 = 0LL;
            *(_OWORD *)(v6 + 16) = 0LL;
            *(_OWORD *)(v6 + 32) = 0LL;
            *(_OWORD *)(v6 + 48) = 0LL;
            *(_OWORD *)(v6 + 64) = 0LL;
            *(_QWORD *)(v6 + 40) = KeMaximumIncrement
                                 * (unsigned __int64)(unsigned int)(*(_DWORD *)(v49 + 32388) + *(_DWORD *)(v49 + 32392));
            *(_QWORD *)(v6 + 48) = KeMaximumIncrement
                                 * (unsigned __int64)*(unsigned int *)(*(_QWORD *)(v49 + 24) + 652LL);
            if ( BYTE12(v160) )
            {
              *(_BYTE *)v6 = BYTE8(Src);
              *(_BYTE *)(v6 + 7) = BYTE12(Src);
              *(_BYTE *)(v6 + 8) = v160;
              *(_DWORD *)(v6 + 12) = 1;
            }
            *(_QWORD *)(v6 + 72) = v151;
            v6 += 80LL;
            v142 = (_QWORD *)v6;
            ++v8;
            LODWORD(v14) = v132;
            v15 = v123;
          }
          goto LABEL_61;
        case 0x3Eu:
          if ( Length != 64 )
          {
            if ( a6 )
              *a6 = 64;
            return -1073741820;
          }
          SystemBasicInformation = ExpGetSystemEmulationBasicInformation(v6);
LABEL_635:
          Size = 64;
          goto LABEL_636;
        case 0x3Fu:
          if ( Length >= 0xC )
          {
            SystemBasicInformation = ExpGetSystemEmulationProcessorInformation(v6);
            Size = 12;
            goto LABEL_636;
          }
          if ( a6 )
            *a6 = 12;
          return -1073741820;
        case 0x40u:
          if ( Length < 0x38 )
          {
            if ( a6 )
              *a6 = 56;
            return -1073741820;
          }
          if ( (v6 & 7) != 0 )
            return -2147483646;
          if ( !ExIsRestrictedCaller(v9) )
          {
            SystemBasicInformation = ExpGetHandleInformationEx(v6, Length, &Size);
            goto LABEL_636;
          }
          return -1073741790;
        case 0x41u:
          if ( Length < 4 )
          {
            if ( a6 )
              *a6 = 4;
            return -1073741820;
          }
          if ( (_DWORD)v14 )
          {
            v81 = KiProcessorBlock;
            v82 = (unsigned int)v14;
            do
            {
              v8 += *(_DWORD *)(*v81++ + 32700);
              --v82;
            }
            while ( v82 );
          }
          *(_DWORD *)v6 = v8;
          goto LABEL_159;
        case 0x42u:
          if ( Length < 0x20 )
          {
            if ( a6 )
              *a6 = 32;
            return -1073741820;
          }
          if ( ExIsRestrictedCaller(v9) )
            return -1073741790;
          SystemBasicInformation = ExGetBigPoolInfo((_DWORD *)v6, Length, 1, &Size);
          goto LABEL_636;
        case 0x43u:
          if ( Length < 0x10 )
          {
            if ( a6 )
              *a6 = 16;
            return -1073741820;
          }
          v128 = *(_DWORD *)v6;
          v152 = *(volatile void **)(v6 + 8);
          v69 = *(unsigned int *)(v6 + 4);
          v136 = *(_DWORD *)(v6 + 4);
          if ( ((unsigned __int8)v152 & 7) != 0 )
            return -2147483646;
          SystemBasicInformation = ExGetSessionPoolTagInformation(v152, v69, &Size, &v128);
          goto LABEL_636;
        case 0x44u:
          if ( Length < 0x20 )
          {
            if ( a6 )
              *a6 = 32;
            return -1073741820;
          }
          v128 = *(_DWORD *)(v6 + 8);
          if ( (v6 & 7) != 0 )
            return -2147483646;
          SystemBasicInformation = MmGetSessionMappedViewInformation(v6, Length, &Size, &v128);
          goto LABEL_636;
        case 0x45u:
          goto LABEL_416;
        case 0x46u:
          if ( Length == 4 )
          {
            *(_DWORD *)v6 = ObpObjectSecurityMode;
            goto LABEL_159;
          }
          if ( a6 )
            *a6 = 4;
          return -1073741820;
        case 0x48u:
          if ( Length != 8 )
            return -1073741811;
          v83 = v16 - 7;
          if ( v83 )
          {
            if ( v83 != 1 )
              return -1073741637;
            *(_DWORD *)v6 = 8;
            *(_DWORD *)(v6 + 4) = ((unsigned __int8 (__fastcall *)(unsigned __int64))off_140C008D0[0])(v13);
          }
          else
          {
            *(_DWORD *)v6 = 7;
            LOBYTE(v8) = off_140C008D8[0] != xKdEnumerateDebuggingDevices;
            *(_DWORD *)(v6 + 4) = v8;
          }
          goto LABEL_115;
        case 0x49u:
          SystemProcessorFeaturesInformation = KeBuildLogicalProcessorSystemInformation(v15, v6, Length, &Size);
          Size_4 = SystemProcessorFeaturesInformation;
          goto LABEL_637;
        case 0x4Cu:
          SystemBasicInformation = ExpGetSystemFirmwareTableInformation((void *)v6);
          goto LABEL_636;
        case 0x4Du:
          if ( ExIsRestrictedCaller(v9) )
            return -1073741790;
          if ( SeSinglePrivilegeCheck(SeLoadDriverPrivilege, v9) )
            v10 = 0;
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
          ModuleInformation = ExpQueryModuleInformationEx(v65, v6, Length, v10, (__int64)&Size);
LABEL_166:
          SystemProcessorFeaturesInformation = ModuleInformation;
          ExReleaseResourceLite(&PsLoadedModuleResource);
          KeLeaveCriticalRegion();
          goto LABEL_637;
        case 0x4Fu:
          SystemBasicInformation = PfQuerySuperfetchInformation(v13, v6, Length, v9, (__int64)&Size);
          goto LABEL_636;
        case 0x50u:
          SystemBasicInformation = MmQueryMemoryListInformation(
                                     (ULONG_PTR **)0xFFFFFFFFFFFFFFFFLL,
                                     (_OWORD *)v6,
                                     Length,
                                     v14,
                                     &Size);
          goto LABEL_636;
        case 0x53u:
          v86 = 8 * v14;
          Size = 8 * v14;
          if ( Length < 8 )
            goto LABEL_380;
          v87 = Length >> 3;
          if ( Length >= v86 )
            v87 = v14;
          SystemProcessorFeaturesInformation = Length < v86 ? 0xC0000004 : 0;
          v142 = (_QWORD *)v6;
          KeFlushProcessWriteBuffers(1);
          for ( j = v123; ; j = v122 )
          {
            v129 = v8;
            if ( v8 >= v87 )
              break;
            ProcNumber.Group = j;
            ProcNumber.Number = v8;
            ProcNumber.Reserved = 0;
            v89 = *(_QWORD *)(*(_QWORD *)(KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)] + 24) + 72LL);
            v90 = v142;
            *v142 = v89;
            v142 = v90 + 1;
            v8 = v129 + 1;
          }
          goto LABEL_637;
        case 0x56u:
          SystemBasicInformation = ObQueryRefTraceInformation((volatile void *)v6, Length);
          goto LABEL_636;
        case 0x57u:
          Size = 8;
          if ( Length == 8 )
          {
            *(_DWORD *)v6 = MmSpecialPoolTag;
            LOBYTE(v8) = MmSpecialPoolCatchOverruns != 0;
            *(_DWORD *)(v6 + 4) = v8;
            SystemProcessorFeaturesInformation = Size_4;
          }
          else
          {
            SystemProcessorFeaturesInformation = -1073741820;
          }
          goto LABEL_637;
        case 0x58u:
          Size = 24;
          if ( Length != 24 )
          {
            SystemProcessorFeaturesInformation = -1073741820;
            goto LABEL_637;
          }
          *(_OWORD *)ProcessId = *(_OWORD *)v6;
          v150 = *(char **)(v6 + 16);
          if ( LOWORD(ProcessId[1]) || (BYTE2(ProcessId[1]) & 1) != 0 )
            return -1073741811;
          if ( v9 && WORD1(ProcessId[1]) )
          {
            if ( ((unsigned __int8)v150 & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v52 = &v150[WORD1(ProcessId[1])];
            if ( (unsigned __int64)v52 > 0x7FFFFFFF0000LL || v52 < v150 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
          CurrentThread = KeGetCurrentThread();
          v141 = WORD1(ProcessId[1]);
          KeEnterCriticalRegionThread((__int64)CurrentThread);
          v55 = PsLookupProcessByProcessId(ProcessId[0], &Process);
          if ( v55 < 0 )
          {
            KeLeaveCriticalRegionThread((__int64)CurrentThread, v54, v56, v57);
            return v55;
          }
          SystemProcessorFeaturesInformation = PsQueryFullProcessImageName(
                                                 (__int64)Process,
                                                 (_OWORD *)(v6 + 8),
                                                 v150,
                                                 &v141);
          ObfDereferenceObjectWithTag(Process, 0x746C6644u);
          KeLeaveCriticalRegionThread((__int64)CurrentThread, v59, v60, v61);
          if ( SystemProcessorFeaturesInformation == -1073741820 )
            *(_WORD *)(v6 + 10) = v141;
          goto LABEL_637;
        case 0x5Au:
          Size = 32;
          if ( Length < 0x14 )
          {
            if ( a6 )
              *a6 = 32;
            return -1073741820;
          }
          *(_OWORD *)v6 = ExpBootEnvironmentInformation;
          *(_DWORD *)(v6 + 16) = dword_140C19730;
          if ( Length < Size )
          {
LABEL_278:
            Size = 20;
            SystemProcessorFeaturesInformation = Size_4;
          }
          else
          {
            *(_QWORD *)(v6 + 24) = qword_140C19738;
            SystemProcessorFeaturesInformation = Size_4;
          }
          goto LABEL_637;
        case 0x5Bu:
          SystemBasicInformation = HvlQueryEnlightenmentInfo(v6, Length, v9, &Size);
          goto LABEL_636;
        case 0x5Cu:
          if ( Length != 40 )
          {
            if ( a6 )
              *a6 = 40;
            return -1073741820;
          }
          SystemBasicInformation = VfGetVerifierInformationEx(v6);
          if ( SystemBasicInformation >= 0 )
            v8 = 40;
          Size = v8;
          goto LABEL_636;
        case 0x5Fu:
          if ( !v9 || !SeSinglePrivilegeCheck(SeDebugPrivilege, v9) )
            return -1073741790;
          if ( Length >= 0x40 )
          {
            SystemBasicInformation = ExpCovQueryInformation(v6, Length, &Size);
            goto LABEL_636;
          }
          if ( a6 )
            *a6 = 64;
          return -1073741820;
        case 0x62u:
          SystemBasicInformation = IoQuerySystemDeviceName(98LL, v6, Length, &Size);
          goto LABEL_636;
        case 0x63u:
          SystemBasicInformation = IoQuerySystemDeviceName(99LL, v6, Length, &Size);
          goto LABEL_636;
        case 0x64u:
          WORD4(v155) = v15;
          *(_QWORD *)&v155 = KeQueryGroupAffinity(v15);
          v45 = (0x101010101010101LL
               * (((((_QWORD)v155 - (((unsigned __int64)v155 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                 + ((((unsigned __int64)v155 - (((unsigned __int64)v155 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                 + (((((_QWORD)v155 - (((unsigned __int64)v155 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                   + ((((unsigned __int64)v155 - (((unsigned __int64)v155 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
          SystemProcessorFeaturesInformation = PpmCapturePerformanceDistribution(
                                                 0LL,
                                                 0,
                                                 (unsigned int)((0x101010101010101LL
                                                               * (((((_QWORD)v155
                                                                   - (((unsigned __int64)v155 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                                 + ((((unsigned __int64)v155
                                                                    - (((unsigned __int64)v155 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                                                 + (((((_QWORD)v155
                                                                     - (((unsigned __int64)v155 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                                   + ((((unsigned __int64)v155
                                                                      - (((unsigned __int64)v155 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24,
                                                 (__int64)&v155,
                                                 NumberOfBytes);
          if ( SystemProcessorFeaturesInformation != -1073741820 )
            goto LABEL_637;
          v46 = NumberOfBytes[0];
          if ( NumberOfBytes[0] > Length )
          {
            SystemProcessorFeaturesInformation = -1073741820;
            goto LABEL_96;
          }
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes[0], 0x744D5050u);
          v48 = PoolWithTag;
          *(_QWORD *)&NumberOfBytes[1] = PoolWithTag;
          if ( PoolWithTag )
          {
            memset(PoolWithTag, 0, (unsigned int)NumberOfBytes[0]);
            SystemProcessorFeaturesInformation = PpmCapturePerformanceDistribution(
                                                   v48,
                                                   NumberOfBytes[0],
                                                   v45,
                                                   (__int64)&v155,
                                                   (int *)&Size);
            if ( SystemProcessorFeaturesInformation >= 0 )
              memmove((void *)v6, v48, Size);
            ExFreePoolWithTag(v48, 0x744D5050u);
          }
          else
          {
            SystemProcessorFeaturesInformation = -1073741670;
          }
          goto LABEL_637;
        case 0x65u:
          SystemBasicInformation = ExpQueryNumaProximityNode(v6, Length, &Size, v14);
          goto LABEL_636;
        case 0x66u:
          if ( Length >= 0x1B0 )
          {
            ExAcquireTimeRefreshLock(1u);
            v79 = &ExpTimeZoneInformation;
            v80 = 3LL;
            do
            {
              *(_OWORD *)v6 = *(_OWORD *)v79;
              *(_OWORD *)(v6 + 16) = *((_OWORD *)v79 + 1);
              *(_OWORD *)(v6 + 32) = *((_OWORD *)v79 + 2);
              *(_OWORD *)(v6 + 48) = *((_OWORD *)v79 + 3);
              *(_OWORD *)(v6 + 64) = *((_OWORD *)v79 + 4);
              *(_OWORD *)(v6 + 80) = *((_OWORD *)v79 + 5);
              *(_OWORD *)(v6 + 96) = *((_OWORD *)v79 + 6);
              v6 += 128LL;
              *(_OWORD *)(v6 - 16) = *((_OWORD *)v79 + 7);
              v79 += 32;
              --v80;
            }
            while ( v80 );
            *(_OWORD *)v6 = *(_OWORD *)v79;
            *(_OWORD *)(v6 + 16) = *((_OWORD *)v79 + 1);
            *(_OWORD *)(v6 + 32) = *((_OWORD *)v79 + 2);
            ExReleaseTimeRefreshLock();
            Size = 432;
            SystemProcessorFeaturesInformation = 0;
            goto LABEL_637;
          }
          if ( a6 )
            *a6 = 432;
          return -1073741820;
        case 0x67u:
          SystemBasicInformation = SeCodeIntegrityQueryInformation(v6, Length, &Size, v14);
          goto LABEL_636;
        case 0x69u:
          SystemProcessorFeaturesInformation = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, int *))off_140C00A68[0])(
                                                 23LL,
                                                 0LL,
                                                 0LL,
                                                 NumberOfBytes);
          if ( SystemProcessorFeaturesInformation != -1073741820 )
            goto LABEL_416;
          v95 = (unsigned int)NumberOfBytes[0];
          if ( Length < NumberOfBytes[0] || !v6 )
          {
            Size = NumberOfBytes[0];
            goto LABEL_637;
          }
          if ( v9 )
          {
            PoolWithQuotaTag = (struct _MDL *)ExAllocatePoolWithQuotaTag(
                                                (POOL_TYPE)9,
                                                (unsigned int)NumberOfBytes[0],
                                                0x6F666E49u);
            *(_QWORD *)&NumberOfBytes[1] = PoolWithQuotaTag;
            if ( !PoolWithQuotaTag )
            {
              SystemProcessorFeaturesInformation = -1073741670;
              goto LABEL_637;
            }
            v95 = (unsigned int)NumberOfBytes[0];
          }
          else
          {
            PoolWithQuotaTag = (struct _MDL *)v6;
            *(_QWORD *)&NumberOfBytes[1] = v6;
          }
          v97 = ((__int64 (__fastcall *)(__int64, __int64, struct _MDL *, unsigned int *))off_140C00A68[0])(
                  23LL,
                  v95,
                  PoolWithQuotaTag,
                  &Size);
          SystemProcessorFeaturesInformation = v97;
          if ( !v9 )
            goto LABEL_637;
          if ( v97 < 0 )
            goto LABEL_427;
          goto LABEL_426;
        case 0x6Au:
          SystemProcessorFeaturesInformation = -1073741821;
          goto LABEL_637;
        case 0x6Bu:
          Size = Length;
          SystemProcessorFeaturesInformation = KeQueryLogicalProcessorRelationship(
                                                 0LL,
                                                 RelationshipType,
                                                 (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)v6,
                                                 &Size);
          Size_4 = SystemProcessorFeaturesInformation;
          goto LABEL_637;
        case 0x6Cu:
          v93 = 8 * v14;
          Size = 8 * v14;
          if ( Length < 8 )
            goto LABEL_380;
          v94 = Length >> 3;
          if ( Length >= v93 )
            v94 = v14;
          SystemProcessorFeaturesInformation = Length < v93 ? 0xC0000004 : 0;
          while ( v8 < v94 )
          {
            ProcNumber.Group = v15;
            ProcNumber.Number = v8;
            ProcNumber.Reserved = 0;
            *(_QWORD *)v6 = *(_QWORD *)(KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)] + 32568);
            v6 += 8LL;
            v142 = (_QWORD *)v6;
            ++v8;
            v15 = v123;
          }
          goto LABEL_637;
        case 0x6Du:
          SystemBasicInformation = SmQueryStoreInformation(v13, v6, Length, v9, &Size);
          goto LABEL_636;
        case 0x70u:
          SystemBasicInformation = IoQueryVhdBootInformation(v13, v6, Length, &Size);
          goto LABEL_636;
        case 0x71u:
          SystemBasicInformation = PsQueryCpuQuotaInformation((_DWORD *)v6, Length, v9, &Size);
          goto LABEL_636;
        case 0x73u:
          if ( v124 )
          {
            SystemProcessorFeaturesInformation = -1073741820;
          }
          else
          {
            Size = 8;
            if ( Length >= 8 )
            {
              *(_DWORD *)v6 = DbgkErrorPortStartTimeout;
              *(_DWORD *)(v6 + 4) = DbgkErrorPortCommTimeout;
              SystemProcessorFeaturesInformation = Size_4;
            }
            else
            {
              SystemProcessorFeaturesInformation = -1073741820;
            }
          }
          goto LABEL_637;
        case 0x74u:
          SystemBasicInformation = IoQueryLowPriorityIoInformation(v13, v6, Length, &Size);
          goto LABEL_636;
        case 0x75u:
          Size = 1096;
          if ( Length != 1096 )
          {
            SystemProcessorFeaturesInformation = -1073741820;
            goto LABEL_637;
          }
          if ( v9 )
            return -1073741790;
          SystemBasicInformation = ExQueryBootEntropyInformation(v6);
          goto LABEL_636;
        case 0x76u:
          if ( Length >= 0x110 )
          {
LABEL_304:
            SystemBasicInformation = VfGetVerifierInformation((void *)v6, Length);
            goto LABEL_636;
          }
          if ( a6 )
            *a6 = 272;
          return -1073741820;
        case 0x79u:
          Size = 4 * (unsigned __int16)KeNumberNodes;
          if ( Length >= Size )
          {
            v129 = 0;
            v84 = 0;
            v85 = v131;
            while ( v84 < (unsigned __int16)KeNumberNodes )
            {
              *(_DWORD *)(v6 + 4LL * v84++) = *((_DWORD *)KeNodeDistance + v8 + v85 * (unsigned __int16)KeNumberNodes);
              v8 = v84;
              v129 = v84;
            }
            SystemProcessorFeaturesInformation = Size_4;
          }
          else
          {
            SystemProcessorFeaturesInformation = -1073741820;
          }
          goto LABEL_637;
        case 0x7Au:
          Size = 8;
          if ( Length != 8 || !v6 )
            goto LABEL_103;
          PoolWithQuotaTag = (struct _MDL *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 8uLL, 0x6F666E49u);
          v144 = PoolWithQuotaTag;
          if ( !PoolWithQuotaTag )
          {
            SystemProcessorFeaturesInformation = -1073741670;
            goto LABEL_637;
          }
          SystemProcessorFeaturesInformation = ((__int64 (__fastcall *)(__int64, __int64, struct _MDL *, unsigned int *))off_140C00A68[0])(
                                                 26LL,
                                                 8LL,
                                                 PoolWithQuotaTag,
                                                 &Size);
          if ( SystemProcessorFeaturesInformation >= 0 )
          {
            *(_DWORD *)v6 = PoolWithQuotaTag->Next;
            *(_DWORD *)(v6 + 4) ^= (*(_DWORD *)(v6 + 4) ^ HIDWORD(PoolWithQuotaTag->Next)) & 1;
            v98 = *(_DWORD *)(v6 + 4) ^ (HIDWORD(PoolWithQuotaTag->Next) ^ *(_DWORD *)(v6 + 4)) & 2;
            *(_DWORD *)(v6 + 4) = v98;
            *(_DWORD *)(v6 + 4) = v98 ^ (HIDWORD(PoolWithQuotaTag->Next) ^ v98) & 4;
          }
          goto LABEL_427;
        case 0x7Bu:
          if ( Length != 32 )
          {
            if ( a6 )
              *a6 = 32;
            return -1073741820;
          }
          CurrentProcess = PsGetCurrentProcess();
          ProcessPartitionId = MmGetProcessPartitionId((__int64)CurrentProcess);
          *(_QWORD *)&Src = MmGetAvailablePages(ProcessPartitionId);
          *((_QWORD *)&Src + 1) = MmGetTotalCommittedPages(v36);
          *(_QWORD *)&v160 = MmGetTotalCommitLimit(v37);
          PeakCommitment = MmGetPeakCommitment(v38);
          if ( PeakCommitment < *((_QWORD *)&Src + 1) )
            PeakCommitment = *((_QWORD *)&Src + 1);
          *((_QWORD *)&v160 + 1) = PeakCommitment;
          *(_OWORD *)v6 = Src;
          *(_OWORD *)(v6 + 16) = v160;
          Size = 32;
          SystemProcessorFeaturesInformation = Size_4;
          goto LABEL_637;
        case 0x7Cu:
          Size = 12;
          if ( Length >= 4 )
          {
            v157 = *(_DWORD *)v6;
            if ( v157 == 1 )
            {
              if ( Length >= 0xC )
              {
                *(_DWORD *)(v6 + 8) = 0;
                *(_DWORD *)(v6 + 4) = 0;
                *(_DWORD *)(v6 + 8) |= 1u;
                *(_DWORD *)(v6 + 4) |= 1u;
                if ( MEMORY[0xFFFFF780000003C6] )
                  *(_DWORD *)(v6 + 4) &= ~1u;
                SystemProcessorFeaturesInformation = Size_4;
              }
              else
              {
                SystemProcessorFeaturesInformation = -1073741820;
              }
            }
            else
            {
              SystemProcessorFeaturesInformation = -1073741637;
            }
          }
          else
          {
            SystemProcessorFeaturesInformation = -1073741820;
          }
          goto LABEL_637;
        case 0x7Du:
          if ( Length < 0x10 )
          {
            if ( a6 )
              *a6 = 16;
            return -1073741820;
          }
          v128 = *(_DWORD *)v6;
          v152 = *(volatile void **)(v6 + 8);
          v70 = *(_DWORD *)(v6 + 4);
          v136 = v70;
          if ( ((unsigned __int8)v152 & 7) != 0 )
            return -2147483646;
          if ( !ExIsRestrictedCaller(v9) )
          {
            SystemBasicInformation = ExGetSessionBigPoolInformation(v152, v70, &Size, &v128);
            goto LABEL_636;
          }
          return -1073741790;
        case 0x7Eu:
          Size = 32;
          if ( Length == 32 )
          {
            SystemProcessorFeaturesInformation = BgkQueryBootGraphicsInformation(0LL, &Src);
            if ( SystemProcessorFeaturesInformation >= 0 )
            {
              v99 = Src;
              if ( v9 )
                v99 = 0LL;
              *(_QWORD *)&Src = v99;
              memmove((void *)v6, &Src, Size);
            }
          }
          else
          {
            SystemProcessorFeaturesInformation = -1073741820;
          }
          goto LABEL_637;
        case 0x80u:
          if ( v124 )
          {
            SystemProcessorFeaturesInformation = -1073741820;
          }
          else
          {
            SystemProcessorFeaturesInformation = MmEnumerateBadPages(&v146);
            v102 = v146;
            if ( v146 )
              v8 = 8 * *(_DWORD *)v146;
            Size = v8;
            if ( Length < v8 )
              SystemProcessorFeaturesInformation = -1073741820;
            if ( v146 )
            {
              if ( SystemProcessorFeaturesInformation >= 0 )
                memmove((void *)v6, (char *)v146 + 8, v8);
              ExFreePoolWithTag(v102, 0);
            }
          }
          goto LABEL_637;
        case 0x85u:
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
            return -1073741727;
          SystemBasicInformation = ExpGetSystemPlatformBinary(v6, Length, v9);
          goto LABEL_636;
        case 0x86u:
          Size = 32;
          if ( Length != 32 )
          {
            SystemProcessorFeaturesInformation = -1073741820;
            goto LABEL_637;
          }
          SystemBasicInformation = ExHandleSPCall2(v13, v6, 0x140000000uLL, v14);
          goto LABEL_636;
        case 0x87u:
          Size = 8;
          if ( Length >= 8 )
          {
            if ( (unsigned int)HvlQueryActiveProcessors(&v137, 0LL) )
            {
              SystemProcessorFeaturesInformation = -1073741637;
            }
            else
            {
              SystemProcessorFeaturesInformation = HvlQueryProcessorTopologyCount(0LL, &v138);
              if ( SystemProcessorFeaturesInformation )
              {
                SystemProcessorFeaturesInformation = -1073741637;
              }
              else
              {
                *(_DWORD *)v6 = v137;
                *(_DWORD *)(v6 + 4) = v138;
              }
            }
          }
          else
          {
            SystemProcessorFeaturesInformation = -1073741820;
          }
          goto LABEL_637;
        case 0x88u:
        case 0x89u:
          if ( Length == 48 )
            return ExpGetDeviceDataInformation(v7, v6, 48LL, v14);
          if ( a6 )
            *a6 = 48;
          return -1073741820;
        case 0x8Au:
          SystemBasicInformation = ExpQueryMemoryTopologyInformation((void *)v6);
          goto LABEL_636;
        case 0x8Bu:
          SystemBasicInformation = ExpQueryChannelInformation((void *)v6);
          goto LABEL_636;
        case 0x8Cu:
          if ( a6 || Length >= 8 )
          {
            SystemProcessorFeaturesInformation = BgkQueryBootGraphicsInformation(2LL, &Size);
            if ( SystemProcessorFeaturesInformation >= 0 )
            {
              if ( Size )
              {
                if ( Length >= Size )
                {
                  SystemProcessorFeaturesInformation = BgkQueryBootGraphicsInformation(1LL, &P);
                  if ( SystemProcessorFeaturesInformation >= 0 )
                  {
                    v100 = P;
                    if ( P )
                    {
                      memmove((void *)v6, P, Size);
                      ExFreePoolWithTag(v100, 0x4B494742u);
                    }
                    else
                    {
                      SystemProcessorFeaturesInformation = -1073741670;
                    }
                  }
                }
                else
                {
                  SystemProcessorFeaturesInformation = -1073741789;
                }
              }
              else
              {
                SystemProcessorFeaturesInformation = -1073741670;
              }
            }
          }
          else
          {
            SystemProcessorFeaturesInformation = -1073741811;
          }
          goto LABEL_637;
        case 0x8Fu:
        case 0x91u:
        case 0xABu:
        case 0xB3u:
          SystemBasicInformation = SeSecureBootQueryInformation(v7, v6, Length, &Size);
          goto LABEL_636;
        case 0x93u:
          SystemBasicInformation = ExpQueryPortableWorkspaceEfiLauncherInformation(v6, Length, &Size, v14);
          goto LABEL_636;
        case 0x95u:
          if ( Length >= 3 )
          {
            *(_BYTE *)v6 = KdpBootedNodebug == 0;
            *(_BYTE *)(v6 + 1) = (_BYTE)KdDebuggerEnabled;
            *(_BYTE *)(v6 + 2) = (_BYTE)KdDebuggerNotPresent == 0;
            Size = 3;
            SystemProcessorFeaturesInformation = Size_4;
            goto LABEL_637;
          }
          if ( a6 )
            *a6 = 3;
          return -1073741820;
        case 0x96u:
          if ( !ExBootLoaderMetadata )
            goto LABEL_61;
          v101 = *(_DWORD *)ExBootLoaderMetadata;
          Size = *(_DWORD *)ExBootLoaderMetadata;
          if ( !v6 )
            goto LABEL_61;
          if ( Length < v101 )
          {
            SystemProcessorFeaturesInformation = -1073741820;
            goto LABEL_637;
          }
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
            return -1073741727;
          memmove((void *)v6, (const void *)(ExBootLoaderMetadata + 4), Size);
          SystemProcessorFeaturesInformation = Size_4;
          goto LABEL_637;
        case 0x97u:
          Size = 4;
          if ( Length >= 4 )
          {
            *(_DWORD *)v6 = ExSoftRebootFlags;
            SystemProcessorFeaturesInformation = Size_4;
            goto LABEL_637;
          }
          if ( a6 )
            *a6 = 4;
          return -1073741820;
        case 0x99u:
          if ( v124 )
          {
            SystemProcessorFeaturesInformation = -1073741820;
            goto LABEL_637;
          }
          Size = 32;
          if ( Length >= 0x20 )
          {
            *(_QWORD *)v6 = PoOffCrashConfigTable;
            *(_DWORD *)(v6 + 8) = DWORD2(PoOffCrashConfigTable);
            *(_QWORD *)(v6 + 16) = xmmword_140C25090;
            *(_DWORD *)(v6 + 24) = DWORD2(xmmword_140C25090);
LABEL_518:
            SystemProcessorFeaturesInformation = Size_4;
            goto LABEL_637;
          }
          if ( Length >= 0xC )
          {
            Size = 12;
            *(_QWORD *)v6 = PoOffCrashConfigTable;
            *(_DWORD *)(v6 + 8) = DWORD2(PoOffCrashConfigTable);
            goto LABEL_518;
          }
          SystemProcessorFeaturesInformation = -1073741820;
          Size_4 = -1073741820;
LABEL_637:
          if ( a6 )
            *a6 = Size;
          result = SystemProcessorFeaturesInformation;
          break;
        case 0x9Au:
          if ( Length >= 0x20 )
          {
            SystemProcessorFeaturesInformation = ExpGetSystemProcessorFeaturesInformation(v6);
            Size = 32;
            goto LABEL_637;
          }
          if ( a6 )
            *a6 = 32;
          return -1073741820;
        case 0x9Cu:
          Size = 128;
          if ( Length == 128 )
          {
            SystemProcessorFeaturesInformation = BgkQueryBootGraphicsInformation(3LL, &Src);
            if ( SystemProcessorFeaturesInformation >= 0 )
              memmove((void *)v6, &Src, Size);
          }
          else
          {
            SystemProcessorFeaturesInformation = -1073741820;
          }
          goto LABEL_637;
        case 0x9Du:
          Size = WORD5(ExpManufacturingInformation) + 24;
          if ( Length >= Size )
          {
            v103 = (void *)(v6 + 24);
            *(_OWORD *)v6 = 0LL;
            *(_QWORD *)(v6 + 16) = 0LL;
            *(_DWORD *)v6 = ExpManufacturingInformation;
            *(_DWORD *)(v6 + 8) = DWORD2(ExpManufacturingInformation);
            if ( WORD4(ExpManufacturingInformation) )
            {
              *(_QWORD *)(v6 + 16) = v103;
              memmove(v103, ::Data, WORD5(ExpManufacturingInformation));
            }
            SystemProcessorFeaturesInformation = Size_4;
          }
          else
          {
            SystemProcessorFeaturesInformation = -1073741820;
          }
          goto LABEL_637;
        case 0x9Eu:
          Size = 1;
          if ( Length )
          {
            *(_BYTE *)v6 = PoEnergyEstimationEnabled();
            SystemProcessorFeaturesInformation = Size_4;
            goto LABEL_637;
          }
          if ( a6 )
            *a6 = 1;
          goto LABEL_103;
        case 0x9Fu:
          SystemBasicInformation = HvlQueryDetailInfo(v6, Length, 0x140000000uLL, &Size);
          goto LABEL_636;
        case 0xA0u:
          v104 = (_DWORD)v14 << 6;
          Size = (_DWORD)v14 << 6;
          if ( Length < 0x40 )
            goto LABEL_380;
          v105 = Length >> 6;
          if ( Length >= v104 )
            v105 = v14;
          SystemProcessorFeaturesInformation = Length < v104 ? 0xC0000004 : 0;
          while ( v8 < v105 )
          {
            ProcNumber.Group = v15;
            ProcNumber.Number = v8;
            ProcNumber.Reserved = 0;
            v106 = KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)];
            KeQueryCycleTimeStatsProcessor(v106, (_QWORD *)v6);
            v6 += 64LL;
            v142 = (_QWORD *)v6;
            ++v8;
            v15 = v123;
          }
          goto LABEL_637;
        case 0xA2u:
          SystemBasicInformation = SeQueryTrustedPlatformModuleInformation((int *)v6, Length, &Size);
          goto LABEL_636;
        case 0xA3u:
          if ( !Length )
          {
            if ( a6 )
              *a6 = 1;
            return -1073741820;
          }
          *(_BYTE *)v6 = KdIgnoreUmExceptions;
LABEL_269:
          Size = v10;
          SystemProcessorFeaturesInformation = Size_4;
          goto LABEL_637;
        case 0xA4u:
        case 0xACu:
        case 0xBDu:
        case 0xBEu:
        case 0xC7u:
        case 0xD1u:
          SystemBasicInformation = SeCodeIntegrityQueryPolicyInformation(
                                     v7,
                                     NumberOfBytes[1],
                                     v124,
                                     v6,
                                     Length,
                                     (__int64)&Size);
          goto LABEL_636;
        case 0xA5u:
          Size = 16;
          if ( Length != 16 )
          {
            if ( a6 )
              *a6 = 16;
            goto LABEL_103;
          }
          LOBYTE(Src) = Src ^ (Src ^ (16 * ExpFirmwarePageProtectionSupported)) & 0x10;
          if ( VslIsSecureKernelRunning() )
          {
            v125[0] = 0;
            LOBYTE(Src) = v107 | 1;
            NestedPageProtectionFlags = VslGetNestedPageProtectionFlags();
            v109 = Src;
            if ( (NestedPageProtectionFlags & 2) != 0 )
            {
              v109 = Src | 2;
              LOBYTE(Src) = Src | 2;
            }
            if ( (NestedPageProtectionFlags & 0x20) != 0 )
            {
              v109 |= 4u;
              LOBYTE(Src) = v109;
            }
            if ( (NestedPageProtectionFlags & 0x10) != 0 )
              LOBYTE(Src) = v109 | 8;
            if ( (NestedPageProtectionFlags & 0x200) != 0 )
              BYTE1(Src) |= 2u;
            if ( v147 )
            {
              SystemProcessorFeaturesInformation = VslIsTrustletRunning(v147, v125);
              BYTE1(Src) ^= (v125[0] ^ BYTE1(Src)) & 1;
            }
            else
            {
              SystemProcessorFeaturesInformation = Size_4;
            }
            LOBYTE(Src) = (Src ^ (32 * ExpIsIumEncryptionKeyAvailable())) & 0x20 ^ Src;
          }
          else
          {
            SystemProcessorFeaturesInformation = Size_4;
          }
          *(_OWORD *)v6 = Src;
          goto LABEL_637;
        case 0xA6u:
          SystemBasicInformation = SeQueryHSTIResults(v6, Length, &Size, v14);
          goto LABEL_636;
        case 0xA7u:
          SystemBasicInformation = ExpQuerySingleModuleInformation(v6, Length, v9, &Size);
          goto LABEL_636;
        case 0xA9u:
          SystemBasicInformation = HvlQueryVsmProtectionInfo((void *)v6, Length);
          goto LABEL_636;
        case 0xADu:
          result = ExCpuSetResourceManagerAccessCheck(v9);
          if ( result < 0 )
            return result;
          Size = 168;
          if ( Length != 168 )
          {
            SystemProcessorFeaturesInformation = -1073741820;
            goto LABEL_637;
          }
          SystemBasicInformation = KeGetAffinitizedInterruptsInfo((_WORD *)v6);
          goto LABEL_636;
        case 0xAEu:
          SystemBasicInformation = PsRootSiloInformation(v6, Length, &Size, v14);
          goto LABEL_636;
        case 0xAFu:
          if ( Handle )
          {
            Object = 0LL;
            result = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, v9, &Object, 0LL);
            v114 = (struct _DMA_ADAPTER *)Object;
            if ( result < 0 )
              return result;
          }
          else
          {
            v114 = (struct _DMA_ADAPTER *)Process;
          }
          CpuSetInformation = KeQueryCpuSetInformation((void *)v6);
          goto LABEL_580;
        case 0xB2u:
          if ( !Length )
          {
            SystemProcessorFeaturesInformation = -1073741789;
            goto LABEL_637;
          }
          if ( v9 && !SeSinglePrivilegeCheck(SeSystemProfilePrivilege, v9) )
            return -1073741727;
          v116 = (struct _MDL *)ExAllocatePoolWithQuotaTag((POOL_TYPE)520, Length, 0x6F666E49u);
          PoolWithQuotaTag = v116;
          *(_QWORD *)&NumberOfBytes[1] = v116;
          if ( !v116 )
          {
            SystemProcessorFeaturesInformation = -1073741670;
            goto LABEL_637;
          }
          memset(v116, 0, Length);
          SystemProcessorFeaturesInformation = VslQuerySecureKernelProfileInformation(
                                                 v154,
                                                 PoolWithQuotaTag,
                                                 Length,
                                                 &Size);
          if ( SystemProcessorFeaturesInformation >= 0 )
            goto LABEL_426;
          goto LABEL_427;
        case 0xB4u:
          SystemBasicInformation = ExpQueryInterruptSteeringInformation(
                                     NumberOfBytes[1],
                                     v124,
                                     v6,
                                     Length,
                                     (__int64)&Size);
          goto LABEL_636;
        case 0xB5u:
          if ( Handle )
          {
            v144 = 0LL;
            result = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, v9, &v144, 0LL);
            v114 = (struct _DMA_ADAPTER *)v144;
            if ( result < 0 )
              return result;
          }
          else
          {
            v114 = (struct _DMA_ADAPTER *)Process;
          }
          CpuSetInformation = PsWow64GetSupportedArchitectures((void *)v6);
LABEL_580:
          SystemProcessorFeaturesInformation = CpuSetInformation;
          if ( v114 )
            HalPutDmaAdapter(v114);
          goto LABEL_637;
        case 0xB6u:
          if ( Length != 56 )
          {
            if ( a6 )
              *a6 = 56;
            return -1073741820;
          }
          v21 = PsGetCurrentProcess();
          v22 = MmGetProcessPartitionId((__int64)v21);
          *(_QWORD *)&Src = MmGetNumberOfPhysicalPages(v22) << 12;
          *((_QWORD *)&Src + 1) = MmGetAvailablePages(v22) << 12;
          *(_QWORD *)&v160 = MmGetResidentAvailablePages(v23) << 12;
          *((_QWORD *)&v160 + 1) = MmGetTotalCommittedPages(v24) << 12;
          *((_QWORD *)&v161 + 1) = MmGetTotalCommitLimit(v25) << 12;
          *(_QWORD *)&v162 = MmGetPeakCommitment(v26) << 12;
          *(_QWORD *)&v161 = MmGetSharedCommit() << 12;
          v27 = Src;
          if ( (unsigned __int64)Src < *((_QWORD *)&Src + 1) )
            v27 = *((_QWORD *)&Src + 1);
          *(_QWORD *)&Src = v27;
          v28 = *((_QWORD *)&v161 + 1);
          if ( *((_QWORD *)&v161 + 1) < *((_QWORD *)&v160 + 1) )
            v28 = *((_QWORD *)&v160 + 1);
          *((_QWORD *)&v161 + 1) = v28;
          v29 = v162;
          if ( (unsigned __int64)v162 < *((_QWORD *)&v160 + 1) )
            v29 = *((_QWORD *)&v160 + 1);
          *(_QWORD *)&v162 = v29;
          *(_OWORD *)v6 = Src;
          *(_OWORD *)(v6 + 16) = v160;
          *(_OWORD *)(v6 + 32) = v161;
          *(_QWORD *)(v6 + 48) = v162;
          Size = 56;
LABEL_61:
          SystemProcessorFeaturesInformation = Size_4;
          goto LABEL_637;
        case 0xB7u:
          if ( Length != 16 )
            return -1073741820;
          v158 = *(_QWORD *)v6;
          v156 = *(_DWORD *)(v6 + 8);
          SystemBasicInformation = ExpQueryCodeIntegrityCertificateInfo();
          goto LABEL_636;
        case 0xB8u:
          if ( Length != 24 )
          {
            if ( a6 )
              *a6 = 24;
            return -1073741820;
          }
          v31 = PsGetCurrentProcess();
          v32 = MmGetProcessPartitionId((__int64)v31);
          *(_QWORD *)&Src = MmGetNumberOfPhysicalPages(v32) << 12;
          *((_QWORD *)&Src + 1) = MmGetLowestPhysicalPage(v32) << 12;
          *(_QWORD *)&v160 = (MmGetHighestPhysicalPage(v33) << 12) + 4095;
          *(_OWORD *)v6 = Src;
          *(_QWORD *)(v6 + 16) = v160;
LABEL_66:
          Size = 24;
          SystemProcessorFeaturesInformation = Size_4;
          goto LABEL_637;
        case 0xB9u:
          SystemBasicInformation = WbDispatchOperation((void *)v6, Length);
          goto LABEL_636;
        case 0xBAu:
          if ( !Length )
          {
            Data[0] = 1;
            return ZwFilterBootOption(FilterBootOptionOperationSetElement, 0x10200003u, 0x260000A0u, Data, 1u);
          }
          if ( a6 )
            *a6 = 0;
          return -1073741820;
        case 0xBCu:
          if ( Length != 8 )
            return -1073741820;
          SystemProcessorFeaturesInformation = PsQueryActivityModerationUserSettings(&Src);
          if ( SystemProcessorFeaturesInformation >= 0 )
            *(_QWORD *)v6 = Src;
          goto LABEL_637;
        case 0xC0u:
          if ( Length >= 0x20 )
          {
            SystemProcessorFeaturesInformation = ExpGetSystemFlushInformation(v6);
            Size = 32;
            goto LABEL_637;
          }
          if ( a6 )
            *a6 = 32;
          return -1073741820;
        case 0xC1u:
          v91 = 8 * KeQueryActiveGroupCount();
          Size = v91;
          if ( Length >= v91 )
          {
            memset((void *)v6, 0, v91);
            v129 = 0;
            while ( v8 < (unsigned __int16)KeNumberNodes )
            {
              v92 = KeNodeBlock[v8];
              v122 = *(_WORD *)(v92 + 144);
              *(_QWORD *)(v6 + 8LL * v122) |= *(_QWORD *)(v92 + 24);
              v8 = ++v129;
            }
            SystemProcessorFeaturesInformation = Size_4;
          }
          else
          {
LABEL_380:
            SystemProcessorFeaturesInformation = -1073741789;
          }
          goto LABEL_637;
        case 0xC3u:
          if ( Length < 8 )
          {
            if ( a6 )
              *a6 = 8;
            return -1073741820;
          }
          SystemBasicInformation = ExpGetSystemWriteConstraintInformation(v6);
          Size = 8;
LABEL_636:
          SystemProcessorFeaturesInformation = SystemBasicInformation;
          goto LABEL_637;
        case 0xC4u:
          SystemBasicInformation = KeQueryKvaShadowInformation(v6, Length, &Size, v14);
          goto LABEL_636;
        case 0xC5u:
          Size = 8;
          if ( Length >= 8 )
          {
            v118 = qword_140C4DD88;
            *(_QWORD *)v6 = 0LL;
            *(_QWORD *)v6 = v118;
            SystemProcessorFeaturesInformation = Size_4;
          }
          else
          {
            SystemProcessorFeaturesInformation = -1073741820;
          }
          goto LABEL_637;
        case 0xC6u:
          SystemProcessorFeaturesInformation = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, int *))off_140C00A68[0])(
                                                 34LL,
                                                 0LL,
                                                 0LL,
                                                 NumberOfBytes);
          if ( SystemProcessorFeaturesInformation != -1073741820 )
            return -1073741637;
          v46 = NumberOfBytes[0];
          if ( Length < NumberOfBytes[0] || !v6 )
          {
LABEL_96:
            Size = v46;
            goto LABEL_637;
          }
          if ( v9 )
          {
            PoolWithQuotaTag = (struct _MDL *)ExAllocatePoolWithQuotaTag(
                                                (POOL_TYPE)9,
                                                (unsigned int)NumberOfBytes[0],
                                                0x6F666E49u);
            *(_QWORD *)&NumberOfBytes[1] = PoolWithQuotaTag;
            if ( !PoolWithQuotaTag )
            {
              SystemProcessorFeaturesInformation = -1073741670;
              goto LABEL_637;
            }
            v46 = NumberOfBytes[0];
          }
          else
          {
            PoolWithQuotaTag = (struct _MDL *)v6;
            *(_QWORD *)&NumberOfBytes[1] = v6;
          }
          v117 = ((__int64 (__fastcall *)(__int64, _QWORD, struct _MDL *, unsigned int *))off_140C00A68[0])(
                   34LL,
                   v46,
                   PoolWithQuotaTag,
                   &Size);
          SystemProcessorFeaturesInformation = v117;
          if ( v9 )
          {
            if ( v117 >= 0 )
LABEL_426:
              memmove((void *)v6, PoolWithQuotaTag, Size);
LABEL_427:
            ExFreePoolWithTag(PoolWithQuotaTag, 0x6F666E49u);
          }
          goto LABEL_637;
        case 0xC8u:
          SystemBasicInformation = IoQuerySystemDeviceName(200LL, v6, Length, &Size);
          goto LABEL_636;
        case 0xC9u:
          SystemBasicInformation = KeQuerySpeculationControlInformation(v6, Length, &Size, v14);
          goto LABEL_636;
        case 0xCAu:
          Size = 1;
          if ( Length != 1 )
          {
            if ( a6 )
              *a6 = 1;
            goto LABEL_103;
          }
          v140 = 0;
          SystemProcessorFeaturesInformation = ((__int64 (__fastcall *)(__int64, __int64, __int128 *, int *))off_140C00A68[0])(
                                                 47LL,
                                                 1LL,
                                                 &Src,
                                                 &v140);
          if ( SystemProcessorFeaturesInformation >= 0 && v140 == 1 )
            *(_BYTE *)v6 = Src;
          else
LABEL_416:
            SystemProcessorFeaturesInformation = -1073741637;
          goto LABEL_637;
        case 0xCEu:
          if ( Length != 8 )
          {
            if ( a6 )
              *a6 = 8;
            return -1073741820;
          }
          *(_BYTE *)v6 = *(_BYTE *)ExLeapSecondData != 0;
          *(_DWORD *)(v6 + 4) = 0;
LABEL_115:
          Size = 8;
          SystemProcessorFeaturesInformation = Size_4;
          goto LABEL_637;
        case 0xCFu:
          if ( Length == 4 )
          {
            *(_DWORD *)v6 = NtGlobalFlag2;
            goto LABEL_159;
          }
          if ( a6 )
            *a6 = 4;
          return -1073741820;
        case 0xD0u:
          SystemBasicInformation = SeSecurityModelQueryInformation(v6, Length, &Size, v14);
          goto LABEL_636;
        case 0xD2u:
          SystemBasicInformation = CmQuerySingleFeatureConfiguration(NumberOfBytes[1], v124, v6, Length, (__int64)&Size);
          goto LABEL_636;
        case 0xD3u:
          SystemBasicInformation = CmQueryFeatureConfigurationSections(
                                     NumberOfBytes[1],
                                     v124,
                                     v6,
                                     Length,
                                     (__int64)&Size,
                                     KeGetCurrentThread()->PreviousMode);
          goto LABEL_636;
        case 0xD5u:
          SystemBasicInformation = KeQuerySecureSpeculationInformation((unsigned int *)v6, Length, &Size);
          goto LABEL_636;
        case 0xDDu:
          if ( Length != 4 )
          {
            if ( a6 )
              *a6 = 4;
            return -1073741820;
          }
          *(_DWORD *)v6 = 0;
          if ( !PsIsCurrentThreadInServerSilo() )
          {
            *(_DWORD *)v6 ^= (*(_DWORD *)v6 ^ KeIsCetCapable()) & 1;
            IsUserCetAllowed = KeIsUserCetAllowed();
            *(_DWORD *)v6 = v111 ^ ((unsigned __int8)v111 ^ (unsigned __int8)(2 * IsUserCetAllowed)) & 2;
            IsKTMCommitCoordinator = ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator();
            *(_DWORD *)v6 = v113 ^ ((unsigned __int16)v113 ^ (unsigned __int16)(IsKTMCommitCoordinator << 8)) & 0x100;
          }
LABEL_159:
          Size = 4;
          SystemProcessorFeaturesInformation = Size_4;
          goto LABEL_637;
        case 0xE3u:
          Size = 1;
          if ( Length == 1 )
          {
            *(_BYTE *)v6 = 1;
            SystemProcessorFeaturesInformation = Size_4;
          }
          else
          {
            if ( a6 )
              *a6 = 1;
LABEL_103:
            SystemProcessorFeaturesInformation = -1073741820;
          }
          goto LABEL_637;
        default:
          return -1073741821;
      }
      return result;
    case 0xAFu:
    case 0xB5u:
      if ( a3 != 8 )
        return -1073741811;
      Handle = **(HANDLE **)&NumberOfBytes[1];
      goto LABEL_34;
    case 0xB2u:
      if ( a3 != 8 )
        return -1073741811;
      v154 = **(_QWORD **)&NumberOfBytes[1];
      goto LABEL_34;
    default:
      goto LABEL_34;
  }
}
