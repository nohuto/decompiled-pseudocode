/*
 * XREFs of ExpQuerySystemInformation @ 0x140608060
 * Callers:
 *     NtQuerySystemInformation @ 0x140607EE0 (NtQuerySystemInformation.c)
 *     NtQuerySystemInformationEx @ 0x1406BE140 (NtQuerySystemInformationEx.c)
 * Callees:
 *     KeGetRecommendedSharedDataAlignment @ 0x140203AB0 (KeGetRecommendedSharedDataAlignment.c)
 *     ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator @ 0x140205DF0 (ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator.c)
 *     PoEnergyEstimationEnabled @ 0x140208A50 (PoEnergyEstimationEnabled.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14020A530 (ExAllocatePoolWithQuotaTag.c)
 *     KeQueryActiveProcessorCountEx @ 0x140219190 (KeQueryActiveProcessorCountEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140221C70 (ExAcquireResourceExclusiveLite.c)
 *     KeEnterCriticalRegion @ 0x140227360 (KeEnterCriticalRegion.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140227380 (PsIsCurrentThreadInServerSilo.c)
 *     KeEnterCriticalRegionThread @ 0x14022C1A0 (KeEnterCriticalRegionThread.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14023CD40 (PsGetCurrentServerSiloGlobals.c)
 *     MmGetProcessPartitionId @ 0x14023EAA4 (MmGetProcessPartitionId.c)
 *     MmGetAvailablePages @ 0x14023EAB4 (MmGetAvailablePages.c)
 *     MmGetTotalCommittedPages @ 0x14023EAD4 (MmGetTotalCommittedPages.c)
 *     MmGetTotalCommitLimit @ 0x14023EAF4 (MmGetTotalCommitLimit.c)
 *     MmGetPeakCommitment @ 0x14023EB14 (MmGetPeakCommitment.c)
 *     MmGetSharedCommit @ 0x14023EBE4 (MmGetSharedCommit.c)
 *     MmGetResidentAvailablePages @ 0x14023EBF4 (MmGetResidentAvailablePages.c)
 *     MmQueryMemoryListInformation @ 0x14024C9D0 (MmQueryMemoryListInformation.c)
 *     PsGetCurrentProcess @ 0x1402BFB80 (PsGetCurrentProcess.c)
 *     VslGetNestedPageProtectionFlags @ 0x1402E74C0 (VslGetNestedPageProtectionFlags.c)
 *     KeIsUserCetAllowed @ 0x1402E8F78 (KeIsUserCetAllowed.c)
 *     KeFlushProcessWriteBuffers @ 0x1402EA60C (KeFlushProcessWriteBuffers.c)
 *     MmGetHighestPhysicalPage @ 0x1402ED9C8 (MmGetHighestPhysicalPage.c)
 *     KeQueryGroupAffinity @ 0x1402FE150 (KeQueryGroupAffinity.c)
 *     ExpGetSystemEmulationBasicInformation @ 0x14030B974 (ExpGetSystemEmulationBasicInformation.c)
 *     ExpGetSystemBasicInformation @ 0x14030BB10 (ExpGetSystemBasicInformation.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x14031B374 (ExCpuSetResourceManagerAccessCheck.c)
 *     KeQueryCycleTimeStatsProcessor @ 0x14031B640 (KeQueryCycleTimeStatsProcessor.c)
 *     KeQueryBootTimeValues @ 0x14031CB50 (KeQueryBootTimeValues.c)
 *     MmGetLowestPhysicalPage @ 0x14033199C (MmGetLowestPhysicalPage.c)
 *     VslIsSecureKernelRunning @ 0x140331C6C (VslIsSecureKernelRunning.c)
 *     MmQuerySystemWorkingSetInformation @ 0x140332144 (MmQuerySystemWorkingSetInformation.c)
 *     KeQueryActiveGroupCount @ 0x1403379E0 (KeQueryActiveGroupCount.c)
 *     PoGetIdleTimes @ 0x14033E060 (PoGetIdleTimes.c)
 *     KeGetProcessorIndexFromNumber @ 0x14033E1A0 (KeGetProcessorIndexFromNumber.c)
 *     PoGetPerfStateAndParkingInfo @ 0x140340624 (PoGetPerfStateAndParkingInfo.c)
 *     ExpGetSystemEmulationProcessorInformation @ 0x14035FA18 (ExpGetSystemEmulationProcessorInformation.c)
 *     KeQueryLogicalProcessorRelationship @ 0x14035FA70 (KeQueryLogicalProcessorRelationship.c)
 *     ExpGetSystemProcessorInformation @ 0x14036035C (ExpGetSystemProcessorInformation.c)
 *     PsQueryCpuQuotaInformation @ 0x1403CF644 (PsQueryCpuQuotaInformation.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KeIsCetCapable @ 0x1403F1880 (KeIsCetCapable.c)
 *     ZwFilterBootOption @ 0x1403F9DF0 (ZwFilterBootOption.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     memset @ 0x140411300 (memset.c)
 *     HvlQueryActiveProcessors @ 0x1404F0670 (HvlQueryActiveProcessors.c)
 *     HvlQueryProcessorTopologyCount @ 0x1404F0870 (HvlQueryProcessorTopologyCount.c)
 *     VslIsTrustletRunning @ 0x1404FAF84 (VslIsTrustletRunning.c)
 *     VslQuerySecureKernelProfileInformation @ 0x1404FB510 (VslQuerySecureKernelProfileInformation.c)
 *     KeQuerySecureSpeculationInformation @ 0x140519AD8 (KeQuerySecureSpeculationInformation.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x140520A08 (KeGetAffinitizedInterruptsInfo.c)
 *     MmEnumerateBadPages @ 0x140562C8C (MmEnumerateBadPages.c)
 *     PpmCapturePerformanceDistribution @ 0x14057520C (PpmCapturePerformanceDistribution.c)
 *     PsQueryActivityModerationUserSettings @ 0x14057F9C0 (PsQueryActivityModerationUserSettings.c)
 *     SeQueryTrustedPlatformModuleInformation @ 0x140595AB0 (SeQueryTrustedPlatformModuleInformation.c)
 *     ExpGetLookasideInformation @ 0x1405B0280 (ExpGetLookasideInformation.c)
 *     ExGetBigPoolInfo @ 0x1405B1D5C (ExGetBigPoolInfo.c)
 *     ProbeForWrite @ 0x14060B790 (ProbeForWrite.c)
 *     PfQuerySuperfetchInformation @ 0x14060B800 (PfQuerySuperfetchInformation.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     ExpGetProcessInformation @ 0x140611F60 (ExpGetProcessInformation.c)
 *     ExpQuerySystemPerformanceInformation @ 0x1406358D0 (ExpQuerySystemPerformanceInformation.c)
 *     PsLookupProcessByProcessId @ 0x14063B130 (PsLookupProcessByProcessId.c)
 *     SeSinglePrivilegeCheck @ 0x14063B9A0 (SeSinglePrivilegeCheck.c)
 *     ExGetSessionPoolTagInformation @ 0x14065C31C (ExGetSessionPoolTagInformation.c)
 *     WbDispatchOperation @ 0x14065F0D4 (WbDispatchOperation.c)
 *     ExpQueryModuleInformation @ 0x1406712D0 (ExpQueryModuleInformation.c)
 *     PsWow64GetSupportedArchitectures @ 0x140692648 (PsWow64GetSupportedArchitectures.c)
 *     SeCodeIntegrityQueryPolicyInformation @ 0x1406A0700 (SeCodeIntegrityQueryPolicyInformation.c)
 *     MmGetNumberOfPhysicalPages @ 0x1406B7280 (MmGetNumberOfPhysicalPages.c)
 *     ExHandleSPCall2 @ 0x1406B98C0 (ExHandleSPCall2.c)
 *     ExGetPoolTagInfo @ 0x1406BC46C (ExGetPoolTagInfo.c)
 *     CmQueryFeatureConfigurationSections @ 0x1406C404C (CmQueryFeatureConfigurationSections.c)
 *     ExIsRestrictedCaller @ 0x1406C58CC (ExIsRestrictedCaller.c)
 *     PsQueryFullProcessImageName @ 0x1406CCF8C (PsQueryFullProcessImageName.c)
 *     KeBuildLogicalProcessorSystemInformation @ 0x1406CE678 (KeBuildLogicalProcessorSystemInformation.c)
 *     SeCodeIntegrityQueryInformation @ 0x1406CEFD0 (SeCodeIntegrityQueryInformation.c)
 *     ExpGetSystemFlushInformation @ 0x1406CF020 (ExpGetSystemFlushInformation.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1406CF14C (ExpGetSystemFirmwareTableInformation.c)
 *     PfSnQueryPrefetcherInformation @ 0x1406D0504 (PfSnQueryPrefetcherInformation.c)
 *     IoQuerySystemDeviceName @ 0x1406D589C (IoQuerySystemDeviceName.c)
 *     SeSecureBootQueryInformation @ 0x1406DC4D0 (SeSecureBootQueryInformation.c)
 *     IoQueryLowPriorityIoInformation @ 0x1406DE348 (IoQueryLowPriorityIoInformation.c)
 *     MmGetPageFileInformation @ 0x1406DE9BC (MmGetPageFileInformation.c)
 *     SmQueryStoreInformation @ 0x1406E2CE8 (SmQueryStoreInformation.c)
 *     ExpReadComPlusPackage @ 0x1406E35A4 (ExpReadComPlusPackage.c)
 *     ExAcquireTimeRefreshLock @ 0x1406F5A38 (ExAcquireTimeRefreshLock.c)
 *     ExReleaseTimeRefreshLock @ 0x1406F73F0 (ExReleaseTimeRefreshLock.c)
 *     ExpQueryNumaProcessorMap @ 0x1406F9D80 (ExpQueryNumaProcessorMap.c)
 *     SeQueryHSTIResults @ 0x14076F040 (SeQueryHSTIResults.c)
 *     ExpQueryChannelInformation @ 0x140776978 (ExpQueryChannelInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 *     CmQueryRegistryQuotaInformation @ 0x1407789EC (CmQueryRegistryQuotaInformation.c)
 *     IoGetConfigurationInformation @ 0x14077DD30 (IoGetConfigurationInformation.c)
 *     ExQueryBootEntropyInformation @ 0x140794670 (ExQueryBootEntropyInformation.c)
 *     ExpQueryModuleInformationEx @ 0x1407ACEFC (ExpQueryModuleInformationEx.c)
 *     KeQueryCpuSetInformation @ 0x1407C2DC8 (KeQueryCpuSetInformation.c)
 *     ExpQueryMemoryTopologyInformation @ 0x1407C4170 (ExpQueryMemoryTopologyInformation.c)
 *     ExpQueryInterruptSteeringInformation @ 0x1407CB2E4 (ExpQueryInterruptSteeringInformation.c)
 *     ExpGetSystemPlatformBinary @ 0x1407CBC64 (ExpGetSystemPlatformBinary.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x1407CE108 (ExpGetSystemWriteConstraintInformation.c)
 *     HvlQueryEnlightenmentInfo @ 0x1407CEACC (HvlQueryEnlightenmentInfo.c)
 *     IoQueryVhdBootInformation @ 0x1407CF0D4 (IoQueryVhdBootInformation.c)
 *     ExSystemExceptionFilter @ 0x1407D0AE0 (ExSystemExceptionFilter.c)
 *     CmQuerySingleFeatureConfiguration @ 0x14086D57C (CmQuerySingleFeatureConfiguration.c)
 *     HvlQueryDetailInfo @ 0x140890D88 (HvlQueryDetailInfo.c)
 *     HvlQueryVsmProtectionInfo @ 0x140890EA4 (HvlQueryVsmProtectionInfo.c)
 *     KeQuerySpeculationControlInformation @ 0x1408BE468 (KeQuerySpeculationControlInformation.c)
 *     KeQueryKvaShadowInformation @ 0x1408BF4D0 (KeQueryKvaShadowInformation.c)
 *     MmGetSessionMappedViewInformation @ 0x1408C7110 (MmGetSessionMappedViewInformation.c)
 *     ObQueryRefTraceInformation @ 0x1408E0834 (ObQueryRefTraceInformation.c)
 *     PsRootSiloInformation @ 0x140908444 (PsRootSiloInformation.c)
 *     SeSecurityModelQueryInformation @ 0x14091F5AC (SeSecurityModelQueryInformation.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14093A69C (EtwQueryPerformanceTraceInformation.c)
 *     ExGetSessionBigPoolInformation @ 0x14094C790 (ExGetSessionBigPoolInformation.c)
 *     ExpGetDeviceDataInformation @ 0x14094C9A8 (ExpGetDeviceDataInformation.c)
 *     ExpGetHandleInformation @ 0x14094CBB4 (ExpGetHandleInformation.c)
 *     ExpGetHandleInformationEx @ 0x14094CC34 (ExpGetHandleInformationEx.c)
 *     ExpGetLockInformation @ 0x14094CCB4 (ExpGetLockInformation.c)
 *     ExpGetObjectInformation @ 0x14094CD34 (ExpGetObjectInformation.c)
 *     ExpGetSystemProcessorFeaturesInformation @ 0x14094CDC4 (ExpGetSystemProcessorFeaturesInformation.c)
 *     ExpIsIumEncryptionKeyAvailable @ 0x14094CE20 (ExpIsIumEncryptionKeyAvailable.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x14094CECC (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryLegacyDriverInformation @ 0x14094D444 (ExpQueryLegacyDriverInformation.c)
 *     ExpQueryNumaAvailableMemory @ 0x14094D53C (ExpQueryNumaAvailableMemory.c)
 *     ExpQueryNumaProximityNode @ 0x14094D6EC (ExpQueryNumaProximityNode.c)
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x14094D840 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     ExpQuerySingleModuleInformation @ 0x14094DA50 (ExpQuerySingleModuleInformation.c)
 *     ExpCovQueryInformation @ 0x140959F5C (ExpCovQueryInformation.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 *     VfGetVerifierInformation @ 0x1409EFAB4 (VfGetVerifierInformation.c)
 *     VfGetVerifierInformationEx @ 0x1409EFB7C (VfGetVerifierInformationEx.c)
 *     BgkQueryBootGraphicsInformation @ 0x1409F548C (BgkQueryBootGraphicsInformation.c)
 */

NTSTATUS __fastcall ExpQuerySystemInformation(
        unsigned int a1,
        __int64 a2,
        int a3,
        __int64 a4,
        unsigned int Length,
        unsigned int *a6)
{
  unsigned int v8; // r14d
  unsigned __int8 v9; // r12
  unsigned int v10; // esi
  ULONG v11; // r8d
  __int64 v12; // rcx
  __int64 v13; // r9
  unsigned __int16 v14; // r10
  __int64 v15; // r8
  unsigned int v16; // r11d
  USHORT v17; // cx
  ULONG ActiveProcessorCount; // eax
  USHORT ActiveGroupCount; // ax
  __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  int SystemBasicInformation; // eax
  _KPROCESS *v23; // rax
  unsigned __int16 v24; // di
  unsigned __int16 v25; // cx
  unsigned __int16 v26; // cx
  unsigned __int16 v27; // cx
  unsigned __int16 v28; // cx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  signed int BootGraphicsInformation; // esi
  _KPROCESS *v33; // rax
  unsigned __int16 v34; // di
  unsigned __int16 v35; // cx
  _KPROCESS *CurrentProcess; // rax
  unsigned __int16 ProcessPartitionId; // ax
  unsigned __int16 v38; // cx
  unsigned __int16 v39; // cx
  unsigned __int16 v40; // cx
  __int64 v41; // rcx
  unsigned int v42; // esi
  unsigned int v43; // eax
  _DWORD *v44; // r13
  unsigned int v45; // ecx
  unsigned __int64 v46; // r14
  unsigned int v47; // ecx
  _DWORD *PoolWithTag; // rax
  _DWORD *v49; // rdi
  __int64 v50; // rdi
  __int64 v51; // rcx
  unsigned __int64 v52; // rsi
  char v53; // r14
  unsigned __int64 v54; // rdx
  struct _KTHREAD *CurrentThread; // r14
  NTSTATUS v56; // edi
  NTSTATUS result; // eax
  PCONFIGURATION_INFORMATION ConfigurationInformation; // rax
  __int64 v59; // rcx
  signed int ModuleInformation; // eax
  int v61; // ecx
  unsigned int v62; // eax
  int v63; // ecx
  int v64; // esi
  __int64 v65; // rdx
  unsigned int v66; // ebx
  int v67; // ecx
  int v68; // edx
  __int64 *v69; // r12
  __int64 v70; // r8
  __int64 *v71; // r12
  __int64 v72; // rdx
  unsigned int i; // edi
  _DWORD *v74; // rdx
  __int64 v75; // rdi
  __int64 v76; // rcx
  _OWORD *v77; // rdi
  __int64 v78; // rcx
  _OWORD *v79; // rax
  __int64 v80; // rsi
  __int64 v81; // rcx
  _OWORD *v82; // rax
  __int64 *v83; // r12
  __int64 v84; // rcx
  __int64 v85; // r8
  unsigned int v86; // r8d
  int v87; // r9d
  unsigned int v88; // eax
  unsigned int v89; // r13d
  unsigned __int16 j; // ax
  __int64 v91; // rcx
  _QWORD *v92; // rax
  unsigned int v93; // eax
  __int64 v94; // rcx
  unsigned int v95; // eax
  unsigned int v96; // r13d
  __int64 v97; // rdx
  _DWORD *PoolWithQuotaTag; // rdi
  int v99; // eax
  int v100; // ecx
  __int64 v101; // rax
  __int64 v102; // r8
  __int64 v103; // r9
  PVOID v104; // rdi
  unsigned int v105; // ecx
  PVOID v106; // r12
  void *v107; // rcx
  unsigned int v108; // eax
  unsigned int v109; // r13d
  __int64 v110; // rcx
  char v111; // cl
  __int16 NestedPageProtectionFlags; // ax
  char v113; // cl
  bool IsUserCetAllowed; // al
  int v115; // ecx
  unsigned __int8 IsKTMCommitCoordinator; // al
  int v117; // edx
  struct _DMA_ADAPTER *v118; // r14
  signed int CpuSetInformation; // eax
  struct _MDL *v120; // rax
  struct _MDL *v121; // r14
  int v122; // eax
  __int64 v123; // rax
  unsigned int Size; // [rsp+30h] [rbp-308h] BYREF
  int Size_4; // [rsp+34h] [rbp-304h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+38h] [rbp-300h] BYREF
  unsigned __int16 v127; // [rsp+3Ch] [rbp-2FCh]
  int v128; // [rsp+40h] [rbp-2F8h]
  unsigned int v129; // [rsp+44h] [rbp-2F4h]
  _BYTE v130[4]; // [rsp+48h] [rbp-2F0h] BYREF
  int v131; // [rsp+4Ch] [rbp-2ECh]
  SIZE_T NumberOfBytes; // [rsp+50h] [rbp-2E8h] BYREF
  int v133[2]; // [rsp+58h] [rbp-2E0h]
  unsigned int *v134; // [rsp+60h] [rbp-2D8h]
  int v135; // [rsp+68h] [rbp-2D0h] BYREF
  char Data[4]; // [rsp+6Ch] [rbp-2CCh] BYREF
  unsigned __int16 v137; // [rsp+70h] [rbp-2C8h]
  ULONG v138; // [rsp+74h] [rbp-2C4h]
  unsigned int v139; // [rsp+78h] [rbp-2C0h]
  unsigned int v140; // [rsp+7Ch] [rbp-2BCh]
  LOGICAL_PROCESSOR_RELATIONSHIP RelationshipType; // [rsp+80h] [rbp-2B8h]
  unsigned int v142; // [rsp+84h] [rbp-2B4h]
  unsigned int v143; // [rsp+88h] [rbp-2B0h] BYREF
  int v144; // [rsp+8Ch] [rbp-2ACh] BYREF
  int v145; // [rsp+90h] [rbp-2A8h]
  int v146; // [rsp+94h] [rbp-2A4h] BYREF
  int v147; // [rsp+98h] [rbp-2A0h] BYREF
  _QWORD *v148; // [rsp+A0h] [rbp-298h]
  PEPROCESS Process; // [rsp+A8h] [rbp-290h] BYREF
  PVOID v150; // [rsp+B0h] [rbp-288h] BYREF
  PVOID P; // [rsp+B8h] [rbp-280h] BYREF
  PVOID v152; // [rsp+C0h] [rbp-278h] BYREF
  __int64 v153; // [rsp+C8h] [rbp-270h]
  HANDLE Handle; // [rsp+D0h] [rbp-268h]
  HANDLE ProcessId[2]; // [rsp+D8h] [rbp-260h]
  unsigned __int64 v156; // [rsp+E8h] [rbp-250h]
  __int64 v157; // [rsp+F0h] [rbp-248h] BYREF
  volatile void *v158; // [rsp+F8h] [rbp-240h]
  PVOID Object; // [rsp+100h] [rbp-238h] BYREF
  __int64 v160; // [rsp+108h] [rbp-230h]
  __int128 v161; // [rsp+110h] [rbp-228h] BYREF
  int v162; // [rsp+128h] [rbp-210h]
  _OWORD Src[27]; // [rsp+140h] [rbp-1F8h] BYREF

  v131 = a3;
  *(_QWORD *)v133 = a2;
  v140 = a1;
  v134 = a6;
  v8 = 0;
  LODWORD(NumberOfBytes) = 0;
  v157 = 0LL;
  v143 = 0;
  v144 = 0;
  v129 = 0;
  v135 = 0;
  v137 = 0;
  v127 = 0;
  v161 = 0LL;
  Process = 0LL;
  ProcNumber = 0;
  RelationshipType = RelationProcessorCore;
  v152 = 0LL;
  P = 0LL;
  v145 = 0;
  memset(Src, 0, sizeof(Src));
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
    ProbeForWrite((volatile void *)a4, Length, v11);
    if ( a6 )
    {
      v12 = (__int64)a6;
      if ( (unsigned __int64)a6 >= 0x7FFFFFFF0000LL )
        v12 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v12 = *(_DWORD *)v12;
    }
  }
  else
  {
    v10 = 1;
  }
  Size = 0;
  RelationshipType = RelationAll;
  v13 = 0LL;
  v138 = 0;
  v14 = 0;
  v128 = 0;
  v127 = 0;
  v137 = 0;
  v153 = 0LL;
  Handle = 0LL;
  v160 = 0LL;
  v15 = 9LL;
  v139 = 9;
  v145 = 9;
  v16 = v140;
  switch ( v140 )
  {
    case 2u:
    case 0x21u:
    case 0x24u:
    case 0x41u:
      v128 = 0xFFFF;
      v127 = -1;
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
      if ( (unsigned int)v131 < 2 )
        return -1073741811;
      v128 = (unsigned __int16)**(_WORD **)v133;
      v127 = v128;
      ActiveGroupCount = KeQueryActiveGroupCount();
      v17 = v128;
      if ( (unsigned __int16)v128 >= ActiveGroupCount )
        return -1073741811;
LABEL_15:
      ActiveProcessorCount = KeQueryActiveProcessorCountEx(v17);
      v13 = ActiveProcessorCount;
      v138 = ActiveProcessorCount;
      v14 = v128;
      v15 = v139;
      v16 = v140;
LABEL_34:
      v20 = (unsigned int)v131;
      goto LABEL_35;
    case 0x48u:
      v20 = (unsigned int)v131;
      if ( v131 != 4 )
        return -1073741811;
      v15 = (unsigned int)**(_DWORD **)v133;
      v145 = **(_DWORD **)v133;
      goto LABEL_35;
    case 0x6Bu:
      v20 = (unsigned int)v131;
      if ( (unsigned int)v131 < 4 )
        return -1073741811;
      RelationshipType = **(_DWORD **)v133;
      goto LABEL_35;
    case 0x79u:
      v20 = (unsigned int)v131;
      if ( (unsigned int)v131 >= 2 )
      {
        v137 = **(_WORD **)v133;
        if ( v137 < (unsigned __int16)KeNumberNodes )
          goto LABEL_35;
      }
      return -1073741811;
    case 0xA5u:
      v20 = (unsigned int)v131;
      if ( v131 )
      {
        if ( v131 != 8 )
          return -1073741811;
        v153 = **(_QWORD **)v133;
      }
      else
      {
        v153 = 0LL;
      }
LABEL_35:
      v21 = 0x140000000uLL;
      switch ( v16 )
      {
        case 0u:
        case 0x72u:
          if ( Length == 64 )
          {
            SystemBasicInformation = ExpGetSystemBasicInformation(a4);
            goto LABEL_639;
          }
          if ( a6 )
            *a6 = 64;
          return -1073741820;
        case 1u:
          if ( Length >= 0xC )
          {
            SystemBasicInformation = ExpGetSystemProcessorInformation(a4);
            Size = 12;
            goto LABEL_640;
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
          v10 = 344;
          if ( Length <= 0x158 )
            v10 = Length;
          ExpQuerySystemPerformanceInformation((unsigned int)v13, a4, v10);
          goto LABEL_259;
        case 3u:
          if ( Length <= 0x30 )
          {
            KeQueryBootTimeValues((_QWORD *)Src + 1, (LARGE_INTEGER *)Src, &Src[2]);
            v51 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 133);
            *(_QWORD *)&Src[1] = *(_QWORD *)(v51 + 440);
            DWORD2(Src[1]) = *(_DWORD *)(v51 + 432);
            *((_QWORD *)&Src[2] + 1) = MEMORY[0xFFFFF780000003B0];
            memmove((void *)a4, Src, Length);
            goto LABEL_121;
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
          SystemBasicInformation = ExpGetProcessInformation(a4, Length, (unsigned int)&Size, 0, v16);
          goto LABEL_640;
        case 6u:
          return -1073741637;
        case 7u:
          if ( Length == 24 )
          {
            ConfigurationInformation = IoGetConfigurationInformation();
            *(_DWORD *)a4 = ConfigurationInformation->DiskCount;
            *(_DWORD *)(a4 + 4) = ConfigurationInformation->FloppyCount;
            *(_DWORD *)(a4 + 8) = ConfigurationInformation->CdRomCount;
            *(_DWORD *)(a4 + 12) = ConfigurationInformation->TapeCount;
            *(_DWORD *)(a4 + 16) = ConfigurationInformation->SerialCount;
            *(_DWORD *)(a4 + 20) = ConfigurationInformation->ParallelCount;
            goto LABEL_67;
          }
          if ( a6 )
            *a6 = 24;
          return -1073741820;
        case 8u:
        case 0x8Du:
          v42 = 48;
          if ( v16 != 8 )
            v42 = 72;
          if ( Length && !(Length % v42) )
          {
            v129 = 0;
            v43 = 0;
            while ( 1 )
            {
              v139 = v43;
              if ( v43 >= (unsigned int)v13 )
                break;
              ProcNumber.Group = v14;
              ProcNumber.Number = v43;
              ProcNumber.Reserved = 0;
              v44 = (_DWORD *)KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)];
              v45 = v129;
              if ( Length < v42 + v129 )
                goto LABEL_91;
              v129 += v42;
              PoGetIdleTimes(&ProcNumber, 0LL, (__int64)Src);
              *(_QWORD *)(a4 + 16) = KeMaximumIncrement * (unsigned __int64)(unsigned int)v44[8098];
              *(_QWORD *)(a4 + 8) = KeMaximumIncrement * (unsigned __int64)DWORD1(Src[0]);
              *(_QWORD *)(a4 + 24) = KeMaximumIncrement * (unsigned __int64)(unsigned int)v44[8099];
              *(_QWORD *)(a4 + 32) = KeMaximumIncrement * (unsigned __int64)(unsigned int)v44[8100];
              *(_QWORD *)a4 = KeMaximumIncrement * (unsigned __int64)LODWORD(Src[0]);
              *(_DWORD *)(a4 + 40) = v44[8096];
              if ( v140 == 141 )
              {
                *(_QWORD *)(a4 + 48) = KeMaximumIncrement * (unsigned __int64)(unsigned int)v44[8107];
                *(_DWORD *)(a4 + 44) = 0;
                *(_QWORD *)(a4 + 56) = 0LL;
                *(_QWORD *)(a4 + 64) = 0LL;
              }
              a4 += v42;
              v43 = v139 + 1;
              LODWORD(v13) = v138;
              v14 = v128;
            }
            v45 = v129;
LABEL_91:
            Size = v45;
            BootGraphicsInformation = Size_4;
            goto LABEL_641;
          }
          if ( a6 )
            *a6 = v13 * v42;
          return -1073741820;
        case 9u:
          if ( Length == 4 )
          {
            *(_DWORD *)a4 = NtGlobalFlag;
            goto LABEL_160;
          }
          if ( a6 )
            *a6 = 4;
          return -1073741820;
        case 0xBu:
          if ( (unsigned int)ExIsRestrictedCaller(v9, v20, v15, v13) )
            return -1073741790;
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
          ModuleInformation = ExpQueryModuleInformation(v59, a4, Length, &Size);
          goto LABEL_167;
        case 0xCu:
          if ( Length < 0x38 )
          {
            if ( a6 )
              *a6 = 56;
            return -1073741820;
          }
          if ( (unsigned int)ExIsRestrictedCaller(v9, v20, v15, v13) )
            return -1073741790;
          SystemBasicInformation = ExpGetLockInformation(a4, Length, &Size);
          goto LABEL_640;
        case 0xDu:
          if ( Length >= 0x128 )
            goto LABEL_181;
          if ( a6 )
            *a6 = 296;
          return -1073741820;
        case 0xEu:
        case 0xFu:
        case 0x13u:
LABEL_181:
          BootGraphicsInformation = -1073741822;
          goto LABEL_641;
        case 0x10u:
          if ( Length < 0x20 )
          {
            if ( a6 )
              *a6 = 32;
            return -1073741820;
          }
          if ( (a4 & 7) != 0 )
            return -2147483646;
          if ( !(unsigned int)ExIsRestrictedCaller(v9, v20, v15, v13) )
          {
            SystemBasicInformation = ExpGetHandleInformation(a4, Length, &Size);
            goto LABEL_640;
          }
          return -1073741790;
        case 0x11u:
          if ( Length < 0x40 )
          {
            if ( a6 )
              *a6 = 64;
            return -1073741820;
          }
          if ( (unsigned int)ExIsRestrictedCaller(v9, v20, v15, v13) )
            return -1073741790;
          SystemBasicInformation = ExpGetObjectInformation(a4, Length, &Size);
          goto LABEL_640;
        case 0x12u:
        case 0x90u:
          v62 = 32;
          if ( v16 != 18 )
            v62 = 40;
          Size = v62;
          if ( Length >= v62 )
          {
            Size = 0;
            LOBYTE(v8) = v16 == 144;
            SystemBasicInformation = MmGetPageFileInformation(40, a4, Length, v8, (__int64)&Size);
            goto LABEL_640;
          }
          if ( a6 )
            *a6 = v62;
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
          v63 = 2;
          if ( v16 == 119 )
          {
            v64 = 3;
          }
          else
          {
            if ( v16 == 120 )
              v63 = 4;
            v64 = v63;
          }
          MmQuerySystemWorkingSetInformation(v64, Src);
          *(_OWORD *)a4 = Src[0];
          *(_DWORD *)(a4 + 16) = Src[1];
          *(_QWORD *)(a4 + 24) = *((_QWORD *)&Src[1] + 1);
          *(_OWORD *)(a4 + 32) = Src[2];
          *(_OWORD *)(a4 + 48) = Src[3];
          Size = 64;
          BootGraphicsInformation = Size_4;
          goto LABEL_641;
        case 0x16u:
          if ( Length >= 0x30 )
          {
            SystemBasicInformation = ExGetPoolTagInfo(a4, Length, &Size, v13);
            goto LABEL_640;
          }
          if ( a6 )
            *a6 = 48;
          return -1073741820;
        case 0x17u:
          Size = 24 * v13;
          if ( Length >= 24 * (int)v13 )
          {
            for ( i = 0; i < (unsigned int)v13; ++i )
            {
              ProcNumber.Group = v14;
              ProcNumber.Number = i;
              ProcNumber.Reserved = 0;
              v74 = (_DWORD *)KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)];
              *(_DWORD *)a4 = v74[2895];
              *(_DWORD *)(a4 + 4) = v74[3127];
              *(_DWORD *)(a4 + 8) = v74[3143];
              *(_DWORD *)(a4 + 12) = KeTimeIncrement;
              *(_DWORD *)(a4 + 16) = 0;
              *(_DWORD *)(a4 + 20) = 0;
              a4 += 24LL;
              LODWORD(v13) = v138;
              v14 = v128;
            }
            goto LABEL_290;
          }
          if ( a6 )
            *a6 = 24 * v13;
          return -1073741820;
        case 0x18u:
          if ( Length == 20 )
          {
            *(_DWORD *)(a4 + 4) = KiMaximumDpcQueueDepth;
            *(_DWORD *)(a4 + 8) = KiMinimumDpcRate;
            *(_DWORD *)(a4 + 12) = KiAdjustDpcThreshold;
            *(_DWORD *)(a4 + 16) = KiIdealDpcRate;
            goto LABEL_279;
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
          LOBYTE(v21) = 1;
          ExAcquireTimeRefreshLock(v21);
          v52 = KeTimeAdjustmentFrequency;
          v53 = KeTimeSynchronization;
          ExReleaseTimeRefreshLock();
          if ( Length == 24 )
          {
            *(_QWORD *)a4 = v52;
            *(_QWORD *)(a4 + 8) = MEMORY[0xFFFFF78000000300];
            *(_BYTE *)(a4 + 16) = v53;
          }
          else
          {
            *(_DWORD *)a4 = MEMORY[0xFFFFF78000000300] * (unsigned __int64)KeMaximumIncrement / v52;
            *(_DWORD *)(a4 + 4) = KeMaximumIncrement;
            *(_BYTE *)(a4 + 8) = v53;
          }
LABEL_121:
          Size = Length;
          BootGraphicsInformation = Size_4;
          goto LABEL_641;
        case 0x1Fu:
          SystemBasicInformation = EtwQueryPerformanceTraceInformation(a4, Length, v9, &Size);
          goto LABEL_640;
        case 0x21u:
          if ( Length < 0x10 )
          {
            if ( a6 )
              *a6 = 16;
            return -1073741820;
          }
          Size = 16;
          v67 = 0;
          v68 = 0;
          if ( (_DWORD)v13 )
          {
            v69 = KiProcessorBlock;
            v70 = (unsigned int)v13;
            do
            {
              v67 += *(_DWORD *)(*v69 + 33592);
              v68 += *(_DWORD *)(*v69++ + 32432);
              --v70;
            }
            while ( v70 );
          }
          *(_DWORD *)a4 = v67;
          *(_DWORD *)(a4 + 4) = v68;
          *(_DWORD *)(a4 + 8) = 0;
          *(_DWORD *)(a4 + 12) = 0;
          BootGraphicsInformation = Size_4;
          goto LABEL_641;
        case 0x23u:
          if ( Length >= 2 )
          {
            *(_BYTE *)a4 = (_BYTE)KdDebuggerEnabled;
            *(_BYTE *)(a4 + 1) = (_BYTE)KdDebuggerNotPresent;
            Size = 2;
            BootGraphicsInformation = Size_4;
            goto LABEL_641;
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
          if ( (_DWORD)v13 )
          {
            v71 = KiProcessorBlock;
            v72 = (unsigned int)v13;
            do
            {
              v8 += *(_DWORD *)(*v71++ + 11580);
              --v72;
            }
            while ( v72 );
          }
          *(_DWORD *)a4 = v8;
          *(_DWORD *)(a4 + 4) = KeThreadSwitchCounters;
          *(_DWORD *)(a4 + 8) = dword_140C31AC8;
          *(_DWORD *)(a4 + 12) = dword_140C31AC4;
          *(_DWORD *)(a4 + 16) = dword_140C31ACC;
          *(_DWORD *)(a4 + 20) = dword_140C31AD0;
          *(_DWORD *)(a4 + 24) = dword_140C31AD8;
          *(_DWORD *)(a4 + 28) = dword_140C31AD4;
          *(_DWORD *)(a4 + 32) = dword_140C31ADC;
          *(_DWORD *)(a4 + 36) = dword_140C31AE0;
          *(_DWORD *)(a4 + 40) = dword_140C31AE4;
          *(_DWORD *)(a4 + 44) = dword_140C31AE8;
          Size = 48;
          BootGraphicsInformation = Size_4;
          goto LABEL_641;
        case 0x25u:
          if ( Length >= 0x10 )
          {
            SystemBasicInformation = CmQueryRegistryQuotaInformation(a4, v20, v15, v13);
            Size = 16;
            goto LABEL_640;
          }
          if ( a6 )
            *a6 = 16;
          return -1073741820;
        case 0x2Au:
          Size = 48 * v13;
          if ( Length < 48 * (int)v13 )
            goto LABEL_104;
          while ( v8 < (unsigned int)v13 )
          {
            ProcNumber.Group = v14;
            ProcNumber.Number = v8;
            ProcNumber.Reserved = 0;
            PoGetIdleTimes(&ProcNumber, (__int64)Src, 0LL);
            *(_OWORD *)a4 = Src[0];
            *(_OWORD *)(a4 + 16) = Src[1];
            *(_OWORD *)(a4 + 32) = Src[2];
            a4 += 48LL;
            ++v8;
            LODWORD(v13) = v138;
            v14 = v128;
          }
          goto LABEL_62;
        case 0x2Bu:
          if ( Length >= 0x18 )
          {
            Size = Length;
            SystemBasicInformation = ExpQueryLegacyDriverInformation(a4, &Size, v15, v13);
            goto LABEL_640;
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
          v75 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 133);
          LOBYTE(v76) = 1;
          ExAcquireTimeRefreshLock(v76);
          Src[0] = *(_OWORD *)v75;
          Src[1] = *(_OWORD *)(v75 + 16);
          Src[2] = *(_OWORD *)(v75 + 32);
          Src[3] = *(_OWORD *)(v75 + 48);
          Src[4] = *(_OWORD *)(v75 + 64);
          Src[5] = *(_OWORD *)(v75 + 80);
          Src[6] = *(_OWORD *)(v75 + 96);
          Src[7] = *(_OWORD *)(v75 + 112);
          Src[8] = *(_OWORD *)(v75 + 128);
          Src[9] = *(_OWORD *)(v75 + 144);
          *(_QWORD *)&Src[10] = *(_QWORD *)(v75 + 160);
          DWORD2(Src[10]) = *(_DWORD *)(v75 + 168);
          ExReleaseTimeRefreshLock();
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
          Size = 172;
LABEL_290:
          BootGraphicsInformation = 0;
          goto LABEL_641;
        case 0x2Du:
          SystemBasicInformation = ExpGetLookasideInformation(a4, Length, &Size);
          goto LABEL_640;
        case 0x32u:
          if ( Length == 8 )
          {
            *(_QWORD *)a4 = 0xFFFF800000000000uLL;
            goto LABEL_116;
          }
          if ( a6 )
            *a6 = 8;
          return -1073741820;
        case 0x33u:
          if ( Length >= 0x90 )
            goto LABEL_307;
          if ( a6 )
            *a6 = 144;
          return -1073741820;
        case 0x35u:
          if ( Length >= 0x10 )
          {
            v135 = *(_DWORD *)a4;
            v158 = *(volatile void **)(a4 + 8);
            v142 = *(_DWORD *)(a4 + 4);
            ProbeForWrite(v158, v142, 4u);
            SystemBasicInformation = ExpGetProcessInformation(
                                       (_DWORD)v158,
                                       v142,
                                       (unsigned int)&Size,
                                       (unsigned int)&v135,
                                       5);
            goto LABEL_640;
          }
          if ( a6 )
            *a6 = 16;
          return -1073741820;
        case 0x37u:
          SystemBasicInformation = ExpQueryNumaProcessorMap(a4, Length, &Size, v13);
          goto LABEL_640;
        case 0x38u:
          SystemBasicInformation = PfSnQueryPrefetcherInformation(0x140000000uLL, a4, Length, v9, &Size);
          goto LABEL_640;
        case 0x3Au:
          if ( Length >= 4 )
          {
            *(_DWORD *)a4 = KeGetRecommendedSharedDataAlignment();
            goto LABEL_160;
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
            result = ExpReadComPlusPackage(0x140000000uLL, v20, v15, v13);
            BootGraphicsInformation = result;
            if ( result < 0 )
              return result;
          }
          else
          {
            BootGraphicsInformation = Size_4;
          }
          *(_DWORD *)a4 = MEMORY[0xFFFFF780000002E0];
          Size = 4;
          goto LABEL_641;
        case 0x3Cu:
          SystemBasicInformation = ExpQueryNumaAvailableMemory(a4, Length, &Size, v13);
          goto LABEL_640;
        case 0x3Du:
          Size = 80 * v13;
          if ( Length < 80 * (int)v13 )
            goto LABEL_104;
          while ( v8 < (unsigned int)v13 )
          {
            ProcNumber.Group = v14;
            ProcNumber.Number = v8;
            ProcNumber.Reserved = 0;
            v50 = KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)];
            PoGetPerfStateAndParkingInfo(&ProcNumber, (__int64)Src, 0LL, &v157);
            *(_OWORD *)a4 = 0LL;
            *(_OWORD *)(a4 + 16) = 0LL;
            *(_OWORD *)(a4 + 32) = 0LL;
            *(_OWORD *)(a4 + 48) = 0LL;
            *(_OWORD *)(a4 + 64) = 0LL;
            *(_QWORD *)(a4 + 40) = KeMaximumIncrement
                                 * (unsigned __int64)(unsigned int)(*(_DWORD *)(v50 + 32388) + *(_DWORD *)(v50 + 32392));
            *(_QWORD *)(a4 + 48) = KeMaximumIncrement
                                 * (unsigned __int64)*(unsigned int *)(*(_QWORD *)(v50 + 24) + 652LL);
            if ( BYTE12(Src[1]) )
            {
              *(_BYTE *)a4 = BYTE8(Src[0]);
              *(_BYTE *)(a4 + 7) = BYTE12(Src[0]);
              *(_BYTE *)(a4 + 8) = Src[1];
              *(_DWORD *)(a4 + 12) = 1;
            }
            *(_QWORD *)(a4 + 72) = v157;
            a4 += 80LL;
            v148 = (_QWORD *)a4;
            ++v8;
            LODWORD(v13) = v138;
            v14 = v128;
          }
          goto LABEL_62;
        case 0x3Eu:
          if ( Length != 64 )
          {
            if ( a6 )
              *a6 = 64;
            return -1073741820;
          }
          SystemBasicInformation = ExpGetSystemEmulationBasicInformation(a4);
LABEL_639:
          Size = 64;
          goto LABEL_640;
        case 0x3Fu:
          if ( Length >= 0xC )
          {
            SystemBasicInformation = ExpGetSystemEmulationProcessorInformation(a4);
            Size = 12;
            goto LABEL_640;
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
          if ( (a4 & 7) != 0 )
            return -2147483646;
          if ( !(unsigned int)ExIsRestrictedCaller(v9, v20, v15, v13) )
          {
            SystemBasicInformation = ExpGetHandleInformationEx(a4, Length, &Size);
            goto LABEL_640;
          }
          return -1073741790;
        case 0x41u:
          if ( Length < 4 )
          {
            if ( a6 )
              *a6 = 4;
            return -1073741820;
          }
          if ( (_DWORD)v13 )
          {
            v83 = KiProcessorBlock;
            v84 = (unsigned int)v13;
            do
            {
              v8 += *(_DWORD *)(*v83++ + 32700);
              --v84;
            }
            while ( v84 );
          }
          *(_DWORD *)a4 = v8;
          goto LABEL_160;
        case 0x42u:
          if ( Length < 0x20 )
          {
            if ( a6 )
              *a6 = 32;
            return -1073741820;
          }
          if ( (unsigned int)ExIsRestrictedCaller(v9, v20, v15, v13) )
            return -1073741790;
          SystemBasicInformation = ExGetBigPoolInfo((_DWORD *)a4, Length, 1, &Size);
          goto LABEL_640;
        case 0x43u:
          if ( Length < 0x10 )
          {
            if ( a6 )
              *a6 = 16;
            return -1073741820;
          }
          v135 = *(_DWORD *)a4;
          v158 = *(volatile void **)(a4 + 8);
          v65 = *(unsigned int *)(a4 + 4);
          v142 = *(_DWORD *)(a4 + 4);
          if ( ((unsigned __int8)v158 & 7) != 0 )
            return -2147483646;
          SystemBasicInformation = ExGetSessionPoolTagInformation(v158, v65, &Size, &v135);
          goto LABEL_640;
        case 0x44u:
          if ( Length < 0x20 )
          {
            if ( a6 )
              *a6 = 32;
            return -1073741820;
          }
          v135 = *(_DWORD *)(a4 + 8);
          if ( (a4 & 7) != 0 )
            return -2147483646;
          SystemBasicInformation = MmGetSessionMappedViewInformation(a4, Length, &Size, &v135);
          goto LABEL_640;
        case 0x45u:
          goto LABEL_419;
        case 0x46u:
          if ( Length == 4 )
          {
            *(_DWORD *)a4 = ObpObjectSecurityMode;
            goto LABEL_160;
          }
          if ( a6 )
            *a6 = 4;
          return -1073741820;
        case 0x48u:
          if ( Length != 8 )
            return -1073741811;
          v85 = (unsigned int)(v15 - 7);
          if ( (_DWORD)v85 )
          {
            if ( (_DWORD)v85 != 1 )
              return -1073741637;
            *(_DWORD *)a4 = 8;
            *(_DWORD *)(a4 + 4) = ((unsigned __int8 (__fastcall *)(unsigned __int64, __int64, __int64, __int64))off_140C008D0[0])(
                                    0x140000000uLL,
                                    v20,
                                    v85,
                                    v13);
          }
          else
          {
            *(_DWORD *)a4 = 7;
            LOBYTE(v8) = off_140C008D8[0] != xKdEnumerateDebuggingDevices;
            *(_DWORD *)(a4 + 4) = v8;
          }
          goto LABEL_116;
        case 0x49u:
          BootGraphicsInformation = KeBuildLogicalProcessorSystemInformation(v14, a4, Length, &Size);
          Size_4 = BootGraphicsInformation;
          goto LABEL_641;
        case 0x4Cu:
          SystemBasicInformation = ExpGetSystemFirmwareTableInformation((void *)a4);
          goto LABEL_640;
        case 0x4Du:
          if ( (unsigned int)ExIsRestrictedCaller(v9, v20, v15, v13) )
            return -1073741790;
          if ( SeSinglePrivilegeCheck(SeLoadDriverPrivilege, v9) )
            v10 = 0;
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
          ModuleInformation = ExpQueryModuleInformationEx(v61, a4, Length, v10, (__int64)&Size);
LABEL_167:
          BootGraphicsInformation = ModuleInformation;
          ExReleaseResourceLite(&PsLoadedModuleResource);
          KeLeaveCriticalRegion();
          goto LABEL_641;
        case 0x4Fu:
          SystemBasicInformation = PfQuerySuperfetchInformation(0x40000000u, a4, Length, v9, (__int64)&Size);
          goto LABEL_640;
        case 0x50u:
          SystemBasicInformation = MmQueryMemoryListInformation(
                                     (ULONG_PTR **)0xFFFFFFFFFFFFFFFFLL,
                                     (_OWORD *)a4,
                                     Length,
                                     v13,
                                     &Size);
          goto LABEL_640;
        case 0x53u:
          v88 = 8 * v13;
          Size = 8 * v13;
          if ( Length < 8 )
            goto LABEL_383;
          v89 = Length >> 3;
          if ( Length >= v88 )
            v89 = v13;
          BootGraphicsInformation = Length < v88 ? 0xC0000004 : 0;
          v148 = (_QWORD *)a4;
          KeFlushProcessWriteBuffers(1);
          for ( j = v128; ; j = v127 )
          {
            v129 = v8;
            if ( v8 >= v89 )
              break;
            ProcNumber.Group = j;
            ProcNumber.Number = v8;
            ProcNumber.Reserved = 0;
            v91 = *(_QWORD *)(*(_QWORD *)(KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)] + 24) + 72LL);
            v92 = v148;
            *v148 = v91;
            v148 = v92 + 1;
            v8 = v129 + 1;
          }
          goto LABEL_641;
        case 0x56u:
          SystemBasicInformation = ObQueryRefTraceInformation((volatile void *)a4, Length);
          goto LABEL_640;
        case 0x57u:
          Size = 8;
          if ( Length == 8 )
          {
            *(_DWORD *)a4 = MmSpecialPoolTag;
            LOBYTE(v8) = MmSpecialPoolCatchOverruns != 0;
            *(_DWORD *)(a4 + 4) = v8;
            BootGraphicsInformation = Size_4;
          }
          else
          {
            BootGraphicsInformation = -1073741820;
          }
          goto LABEL_641;
        case 0x58u:
          Size = 24;
          if ( Length != 24 )
          {
            BootGraphicsInformation = -1073741820;
            goto LABEL_641;
          }
          *(_OWORD *)ProcessId = *(_OWORD *)a4;
          v156 = *(_QWORD *)(a4 + 16);
          if ( LOWORD(ProcessId[1]) || (BYTE2(ProcessId[1]) & 1) != 0 )
            return -1073741811;
          if ( v9 && WORD1(ProcessId[1]) )
          {
            if ( (v156 & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v54 = v156 + WORD1(ProcessId[1]);
            if ( v54 > 0x7FFFFFFF0000LL || v54 < v156 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
          CurrentThread = KeGetCurrentThread();
          v147 = WORD1(ProcessId[1]);
          KeEnterCriticalRegionThread((__int64)CurrentThread);
          v56 = PsLookupProcessByProcessId(ProcessId[0], &Process);
          if ( v56 < 0 )
          {
            KeLeaveCriticalRegionThread((__int64)CurrentThread);
            return v56;
          }
          BootGraphicsInformation = PsQueryFullProcessImageName(Process, a4 + 8, v156, &v147);
          ObfDereferenceObjectWithTag(Process, 0x746C6644u);
          KeLeaveCriticalRegionThread((__int64)CurrentThread);
          if ( BootGraphicsInformation == -1073741820 )
            *(_WORD *)(a4 + 10) = v147;
          goto LABEL_641;
        case 0x5Au:
          Size = 32;
          if ( Length < 0x14 )
          {
            if ( a6 )
              *a6 = 32;
            return -1073741820;
          }
          *(_OWORD *)a4 = ExpBootEnvironmentInformation;
          *(_DWORD *)(a4 + 16) = dword_140C19690;
          if ( Length < Size )
          {
LABEL_279:
            Size = 20;
            BootGraphicsInformation = Size_4;
          }
          else
          {
            *(_QWORD *)(a4 + 24) = qword_140C19698;
            BootGraphicsInformation = Size_4;
          }
          goto LABEL_641;
        case 0x5Bu:
          SystemBasicInformation = HvlQueryEnlightenmentInfo(a4, Length, v9, &Size);
          goto LABEL_640;
        case 0x5Cu:
          if ( Length != 40 )
          {
            if ( a6 )
              *a6 = 40;
            return -1073741820;
          }
          SystemBasicInformation = VfGetVerifierInformationEx(a4, v20, v15, v13);
          if ( SystemBasicInformation >= 0 )
            v8 = 40;
          Size = v8;
          goto LABEL_640;
        case 0x5Fu:
          if ( !v9 || !SeSinglePrivilegeCheck(SeDebugPrivilege, v9) )
            return -1073741790;
          if ( Length >= 0x40 )
          {
            SystemBasicInformation = ExpCovQueryInformation(a4, Length, &Size);
            goto LABEL_640;
          }
          if ( a6 )
            *a6 = 64;
          return -1073741820;
        case 0x62u:
          SystemBasicInformation = IoQuerySystemDeviceName(98LL, a4, Length, &Size);
          goto LABEL_640;
        case 0x63u:
          SystemBasicInformation = IoQuerySystemDeviceName(99LL, a4, Length, &Size);
          goto LABEL_640;
        case 0x64u:
          WORD4(v161) = v14;
          *(_QWORD *)&v161 = KeQueryGroupAffinity(v14);
          v46 = (0x101010101010101LL
               * (((((_QWORD)v161 - (((unsigned __int64)v161 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                 + ((((unsigned __int64)v161 - (((unsigned __int64)v161 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                 + (((((_QWORD)v161 - (((unsigned __int64)v161 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                   + ((((unsigned __int64)v161 - (((unsigned __int64)v161 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
          BootGraphicsInformation = PpmCapturePerformanceDistribution(
                                      0LL,
                                      0,
                                      (unsigned int)((0x101010101010101LL
                                                    * (((((_QWORD)v161
                                                        - (((unsigned __int64)v161 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                      + ((((unsigned __int64)v161
                                                         - (((unsigned __int64)v161 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                                      + (((((_QWORD)v161
                                                          - (((unsigned __int64)v161 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                        + ((((unsigned __int64)v161
                                                           - (((unsigned __int64)v161 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24,
                                      (__int64)&v161,
                                      (int *)&NumberOfBytes);
          if ( BootGraphicsInformation != -1073741820 )
            goto LABEL_641;
          v47 = NumberOfBytes;
          if ( (unsigned int)NumberOfBytes > Length )
          {
            BootGraphicsInformation = -1073741820;
            goto LABEL_97;
          }
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x744D5050u);
          v49 = PoolWithTag;
          *(_QWORD *)v133 = PoolWithTag;
          if ( PoolWithTag )
          {
            memset(PoolWithTag, 0, (unsigned int)NumberOfBytes);
            BootGraphicsInformation = PpmCapturePerformanceDistribution(
                                        v49,
                                        NumberOfBytes,
                                        v46,
                                        (__int64)&v161,
                                        (int *)&Size);
            if ( BootGraphicsInformation >= 0 )
              memmove((void *)a4, v49, Size);
            ExFreePoolWithTag(v49, 0x744D5050u);
          }
          else
          {
            BootGraphicsInformation = -1073741670;
          }
          goto LABEL_641;
        case 0x65u:
          SystemBasicInformation = ExpQueryNumaProximityNode(a4, Length, &Size, v13);
          goto LABEL_640;
        case 0x66u:
          if ( Length >= 0x1B0 )
          {
            v77 = (_OWORD *)*((_QWORD *)PsGetCurrentServerSiloGlobals() + 133);
            LOBYTE(v78) = 1;
            ExAcquireTimeRefreshLock(v78);
            v79 = Src;
            v80 = 3LL;
            v81 = 3LL;
            do
            {
              *v79 = *v77;
              v79[1] = v77[1];
              v79[2] = v77[2];
              v79[3] = v77[3];
              v79[4] = v77[4];
              v79[5] = v77[5];
              v79[6] = v77[6];
              v79 += 8;
              *(v79 - 1) = v77[7];
              v77 += 8;
              --v81;
            }
            while ( v81 );
            *v79 = *v77;
            v79[1] = v77[1];
            v79[2] = v77[2];
            ExReleaseTimeRefreshLock();
            v82 = Src;
            do
            {
              *(_OWORD *)a4 = *v82;
              *(_OWORD *)(a4 + 16) = v82[1];
              *(_OWORD *)(a4 + 32) = v82[2];
              *(_OWORD *)(a4 + 48) = v82[3];
              *(_OWORD *)(a4 + 64) = v82[4];
              *(_OWORD *)(a4 + 80) = v82[5];
              *(_OWORD *)(a4 + 96) = v82[6];
              a4 += 128LL;
              *(_OWORD *)(a4 - 16) = v82[7];
              v82 += 8;
              --v80;
            }
            while ( v80 );
            *(_OWORD *)a4 = *v82;
            *(_OWORD *)(a4 + 16) = v82[1];
            *(_OWORD *)(a4 + 32) = v82[2];
            Size = 432;
            BootGraphicsInformation = 0;
            goto LABEL_641;
          }
          if ( a6 )
            *a6 = 432;
          return -1073741820;
        case 0x67u:
          SystemBasicInformation = SeCodeIntegrityQueryInformation(a4, Length, &Size, v13);
          goto LABEL_640;
        case 0x69u:
          BootGraphicsInformation = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, SIZE_T *))off_140C00A68[0])(
                                      23LL,
                                      0LL,
                                      0LL,
                                      &NumberOfBytes);
          if ( BootGraphicsInformation != -1073741820 )
            goto LABEL_419;
          v97 = (unsigned int)NumberOfBytes;
          if ( Length < (unsigned int)NumberOfBytes || !a4 )
          {
            Size = NumberOfBytes;
            goto LABEL_641;
          }
          if ( v9 )
          {
            PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, (unsigned int)NumberOfBytes, 0x6F666E49u);
            *(_QWORD *)v133 = PoolWithQuotaTag;
            if ( !PoolWithQuotaTag )
            {
              BootGraphicsInformation = -1073741670;
              goto LABEL_641;
            }
            v97 = (unsigned int)NumberOfBytes;
          }
          else
          {
            PoolWithQuotaTag = (_DWORD *)a4;
            *(_QWORD *)v133 = a4;
          }
          v99 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, unsigned int *))off_140C00A68[0])(
                  23LL,
                  v97,
                  PoolWithQuotaTag,
                  &Size);
          BootGraphicsInformation = v99;
          if ( !v9 )
            goto LABEL_641;
          if ( v99 < 0 )
            goto LABEL_430;
          goto LABEL_429;
        case 0x6Au:
          BootGraphicsInformation = -1073741821;
          goto LABEL_641;
        case 0x6Bu:
          Size = Length;
          BootGraphicsInformation = KeQueryLogicalProcessorRelationship(
                                      0LL,
                                      RelationshipType,
                                      (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)a4,
                                      &Size);
          Size_4 = BootGraphicsInformation;
          goto LABEL_641;
        case 0x6Cu:
          v95 = 8 * v13;
          Size = 8 * v13;
          if ( Length < 8 )
            goto LABEL_383;
          v96 = Length >> 3;
          if ( Length >= v95 )
            v96 = v13;
          BootGraphicsInformation = Length < v95 ? 0xC0000004 : 0;
          while ( v8 < v96 )
          {
            ProcNumber.Group = v14;
            ProcNumber.Number = v8;
            ProcNumber.Reserved = 0;
            *(_QWORD *)a4 = *(_QWORD *)(KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)] + 32568);
            a4 += 8LL;
            v148 = (_QWORD *)a4;
            ++v8;
            v14 = v128;
          }
          goto LABEL_641;
        case 0x6Du:
          SystemBasicInformation = SmQueryStoreInformation(0x140000000uLL, a4, Length, v9, &Size);
          goto LABEL_640;
        case 0x70u:
          SystemBasicInformation = IoQueryVhdBootInformation(0x140000000uLL, a4, Length, &Size);
          goto LABEL_640;
        case 0x71u:
          SystemBasicInformation = PsQueryCpuQuotaInformation((_DWORD *)a4, Length, v9, &Size);
          goto LABEL_640;
        case 0x73u:
          if ( (_DWORD)v20 )
          {
            BootGraphicsInformation = -1073741820;
          }
          else
          {
            Size = 8;
            if ( Length >= 8 )
            {
              *(_DWORD *)a4 = DbgkErrorPortStartTimeout;
              *(_DWORD *)(a4 + 4) = DbgkErrorPortCommTimeout;
              BootGraphicsInformation = Size_4;
            }
            else
            {
              BootGraphicsInformation = -1073741820;
            }
          }
          goto LABEL_641;
        case 0x74u:
          SystemBasicInformation = IoQueryLowPriorityIoInformation(0x140000000uLL, a4, Length, &Size);
          goto LABEL_640;
        case 0x75u:
          Size = 1096;
          if ( Length != 1096 )
          {
            BootGraphicsInformation = -1073741820;
            goto LABEL_641;
          }
          if ( v9 )
            return -1073741790;
          SystemBasicInformation = ExQueryBootEntropyInformation(a4, v20, v15, v13);
          goto LABEL_640;
        case 0x76u:
          if ( Length >= 0x110 )
          {
LABEL_307:
            SystemBasicInformation = VfGetVerifierInformation((void *)a4, Length);
            goto LABEL_640;
          }
          if ( a6 )
            *a6 = 272;
          return -1073741820;
        case 0x79u:
          Size = 4 * (unsigned __int16)KeNumberNodes;
          if ( Length >= Size )
          {
            v129 = 0;
            v86 = 0;
            v87 = v137;
            while ( v86 < (unsigned __int16)KeNumberNodes )
            {
              *(_DWORD *)(a4 + 4LL * v86++) = *((_DWORD *)KeNodeDistance + v8 + v87 * (unsigned __int16)KeNumberNodes);
              v8 = v86;
              v129 = v86;
            }
            BootGraphicsInformation = Size_4;
          }
          else
          {
            BootGraphicsInformation = -1073741820;
          }
          goto LABEL_641;
        case 0x7Au:
          Size = 8;
          if ( Length != 8 || !a4 )
            goto LABEL_104;
          PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 8uLL, 0x6F666E49u);
          v150 = PoolWithQuotaTag;
          if ( !PoolWithQuotaTag )
          {
            BootGraphicsInformation = -1073741670;
            goto LABEL_641;
          }
          BootGraphicsInformation = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, unsigned int *))off_140C00A68[0])(
                                      26LL,
                                      8LL,
                                      PoolWithQuotaTag,
                                      &Size);
          if ( BootGraphicsInformation >= 0 )
          {
            *(_DWORD *)a4 = *PoolWithQuotaTag;
            *(_DWORD *)(a4 + 4) ^= (PoolWithQuotaTag[1] ^ *(_DWORD *)(a4 + 4)) & 1;
            v100 = *(_DWORD *)(a4 + 4) ^ ((unsigned __int8)*(_DWORD *)(a4 + 4) ^ (unsigned __int8)PoolWithQuotaTag[1]) & 2;
            *(_DWORD *)(a4 + 4) = v100;
            *(_DWORD *)(a4 + 4) = v100 ^ (PoolWithQuotaTag[1] ^ v100) & 4;
          }
          goto LABEL_430;
        case 0x7Bu:
          if ( Length != 32 )
          {
            if ( a6 )
              *a6 = 32;
            return -1073741820;
          }
          CurrentProcess = PsGetCurrentProcess();
          ProcessPartitionId = MmGetProcessPartitionId((__int64)CurrentProcess);
          *(_QWORD *)&Src[0] = MmGetAvailablePages(ProcessPartitionId);
          *((_QWORD *)&Src[0] + 1) = MmGetTotalCommittedPages(v38);
          *(_QWORD *)&Src[1] = MmGetTotalCommitLimit(v39);
          *((_QWORD *)&Src[1] + 1) = MmGetPeakCommitment(v40);
          v41 = *((_QWORD *)&Src[1] + 1);
          if ( *((_QWORD *)&Src[1] + 1) < *((_QWORD *)&Src[0] + 1) )
            v41 = *((_QWORD *)&Src[0] + 1);
          *((_QWORD *)&Src[1] + 1) = v41;
          *(_OWORD *)a4 = Src[0];
          *(_OWORD *)(a4 + 16) = Src[1];
          Size = 32;
          BootGraphicsInformation = Size_4;
          goto LABEL_641;
        case 0x7Cu:
          Size = 12;
          if ( Length >= 4 )
          {
            v162 = *(_DWORD *)a4;
            if ( v162 == 1 )
            {
              if ( Length >= 0xC )
              {
                *(_DWORD *)(a4 + 8) = 0;
                *(_DWORD *)(a4 + 4) = 0;
                *(_DWORD *)(a4 + 8) |= 1u;
                *(_DWORD *)(a4 + 4) |= 1u;
                if ( MEMORY[0xFFFFF780000003C6] )
                  *(_DWORD *)(a4 + 4) &= ~1u;
                BootGraphicsInformation = Size_4;
              }
              else
              {
                BootGraphicsInformation = -1073741820;
              }
            }
            else
            {
              BootGraphicsInformation = -1073741637;
            }
          }
          else
          {
            BootGraphicsInformation = -1073741820;
          }
          goto LABEL_641;
        case 0x7Du:
          if ( Length < 0x10 )
          {
            if ( a6 )
              *a6 = 16;
            return -1073741820;
          }
          v135 = *(_DWORD *)a4;
          v158 = *(volatile void **)(a4 + 8);
          v66 = *(_DWORD *)(a4 + 4);
          v142 = v66;
          if ( ((unsigned __int8)v158 & 7) != 0 )
            return -2147483646;
          if ( !(unsigned int)ExIsRestrictedCaller(v9, v20, v15, v13) )
          {
            SystemBasicInformation = ExGetSessionBigPoolInformation(v158, v66, &Size, &v135);
            goto LABEL_640;
          }
          return -1073741790;
        case 0x7Eu:
          Size = 32;
          if ( Length == 32 )
          {
            BootGraphicsInformation = BgkQueryBootGraphicsInformation(0LL, Src, v15, v13);
            if ( BootGraphicsInformation >= 0 )
            {
              v101 = *(_QWORD *)&Src[0];
              if ( v9 )
                v101 = 0LL;
              *(_QWORD *)&Src[0] = v101;
              memmove((void *)a4, Src, Size);
            }
          }
          else
          {
            BootGraphicsInformation = -1073741820;
          }
          goto LABEL_641;
        case 0x80u:
          if ( (_DWORD)v20 )
          {
            BootGraphicsInformation = -1073741820;
          }
          else
          {
            BootGraphicsInformation = MmEnumerateBadPages(&v152);
            v106 = v152;
            if ( v152 )
              v8 = 8 * *(_DWORD *)v152;
            Size = v8;
            if ( Length < v8 )
              BootGraphicsInformation = -1073741820;
            if ( v152 )
            {
              if ( BootGraphicsInformation >= 0 )
                memmove((void *)a4, (char *)v152 + 8, v8);
              ExFreePoolWithTag(v106, 0);
            }
          }
          goto LABEL_641;
        case 0x85u:
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
            return -1073741727;
          SystemBasicInformation = ExpGetSystemPlatformBinary(a4, Length, v9);
          goto LABEL_640;
        case 0x86u:
          Size = 32;
          if ( Length != 32 )
          {
            BootGraphicsInformation = -1073741820;
            goto LABEL_641;
          }
          SystemBasicInformation = ExHandleSPCall2(0x140000000uLL, a4, v15, v13);
          goto LABEL_640;
        case 0x87u:
          Size = 8;
          if ( Length >= 8 )
          {
            if ( (unsigned int)HvlQueryActiveProcessors(&v143, 0LL) )
            {
              BootGraphicsInformation = -1073741637;
            }
            else
            {
              BootGraphicsInformation = HvlQueryProcessorTopologyCount(0LL, &v144);
              if ( BootGraphicsInformation )
              {
                BootGraphicsInformation = -1073741637;
              }
              else
              {
                *(_DWORD *)a4 = v143;
                *(_DWORD *)(a4 + 4) = v144;
              }
            }
          }
          else
          {
            BootGraphicsInformation = -1073741820;
          }
          goto LABEL_641;
        case 0x88u:
        case 0x89u:
          if ( Length == 48 )
            return ExpGetDeviceDataInformation(v16, a4, 48LL, v13);
          if ( a6 )
            *a6 = 48;
          return -1073741820;
        case 0x8Au:
          SystemBasicInformation = ExpQueryMemoryTopologyInformation((void *)a4);
          goto LABEL_640;
        case 0x8Bu:
          SystemBasicInformation = ExpQueryChannelInformation((void *)a4);
          goto LABEL_640;
        case 0x8Cu:
          if ( a6 || Length >= 8 )
          {
            BootGraphicsInformation = BgkQueryBootGraphicsInformation(2LL, &Size, v15, v13);
            if ( BootGraphicsInformation >= 0 )
            {
              if ( Size )
              {
                if ( Length >= Size )
                {
                  BootGraphicsInformation = BgkQueryBootGraphicsInformation(1LL, &P, v102, v103);
                  if ( BootGraphicsInformation >= 0 )
                  {
                    v104 = P;
                    if ( P )
                    {
                      memmove((void *)a4, P, Size);
                      ExFreePoolWithTag(v104, 0x4B494742u);
                    }
                    else
                    {
                      BootGraphicsInformation = -1073741670;
                    }
                  }
                }
                else
                {
                  BootGraphicsInformation = -1073741789;
                }
              }
              else
              {
                BootGraphicsInformation = -1073741670;
              }
            }
          }
          else
          {
            BootGraphicsInformation = -1073741811;
          }
          goto LABEL_641;
        case 0x8Fu:
        case 0x91u:
        case 0xABu:
        case 0xB3u:
          SystemBasicInformation = SeSecureBootQueryInformation(v16, a4, Length, &Size);
          goto LABEL_640;
        case 0x93u:
          SystemBasicInformation = ExpQueryPortableWorkspaceEfiLauncherInformation(a4, Length, &Size, v13);
          goto LABEL_640;
        case 0x95u:
          if ( Length >= 3 )
          {
            *(_BYTE *)a4 = KdpBootedNodebug == 0;
            *(_BYTE *)(a4 + 1) = (_BYTE)KdDebuggerEnabled;
            *(_BYTE *)(a4 + 2) = (_BYTE)KdDebuggerNotPresent == 0;
            v10 = 3;
            goto LABEL_259;
          }
          if ( a6 )
            *a6 = 3;
          return -1073741820;
        case 0x96u:
          if ( !ExBootLoaderMetadata )
            goto LABEL_62;
          v105 = *(_DWORD *)ExBootLoaderMetadata;
          Size = *(_DWORD *)ExBootLoaderMetadata;
          if ( !a4 )
            goto LABEL_62;
          if ( Length < v105 )
          {
            BootGraphicsInformation = -1073741820;
            goto LABEL_641;
          }
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
            return -1073741727;
          memmove((void *)a4, (const void *)(ExBootLoaderMetadata + 4), Size);
          BootGraphicsInformation = Size_4;
          goto LABEL_641;
        case 0x97u:
          Size = 4;
          if ( Length >= 4 )
          {
            *(_DWORD *)a4 = ExSoftRebootFlags;
            BootGraphicsInformation = Size_4;
            goto LABEL_641;
          }
          if ( a6 )
            *a6 = 4;
          return -1073741820;
        case 0x99u:
          if ( (_DWORD)v20 )
          {
            BootGraphicsInformation = -1073741820;
            goto LABEL_641;
          }
          Size = 32;
          if ( Length >= 0x20 )
          {
            *(_QWORD *)a4 = PoOffCrashConfigTable;
            *(_DWORD *)(a4 + 8) = DWORD2(PoOffCrashConfigTable);
            *(_QWORD *)(a4 + 16) = xmmword_140C24F30;
            *(_DWORD *)(a4 + 24) = DWORD2(xmmword_140C24F30);
LABEL_521:
            BootGraphicsInformation = Size_4;
            goto LABEL_641;
          }
          if ( Length >= 0xC )
          {
            Size = 12;
            *(_QWORD *)a4 = PoOffCrashConfigTable;
            *(_DWORD *)(a4 + 8) = DWORD2(PoOffCrashConfigTable);
            goto LABEL_521;
          }
          BootGraphicsInformation = -1073741820;
          Size_4 = -1073741820;
LABEL_641:
          if ( a6 )
            *a6 = Size;
          result = BootGraphicsInformation;
          break;
        case 0x9Au:
          if ( Length >= 0x20 )
          {
            BootGraphicsInformation = ExpGetSystemProcessorFeaturesInformation(a4, v20, v15, v13);
            Size = 32;
            goto LABEL_641;
          }
          if ( a6 )
            *a6 = 32;
          return -1073741820;
        case 0x9Cu:
          Size = 128;
          if ( Length == 128 )
          {
            BootGraphicsInformation = BgkQueryBootGraphicsInformation(3LL, Src, v15, v13);
            if ( BootGraphicsInformation >= 0 )
              memmove((void *)a4, Src, Size);
          }
          else
          {
            BootGraphicsInformation = -1073741820;
          }
          goto LABEL_641;
        case 0x9Du:
          Size = WORD5(ExpManufacturingInformation) + 24;
          if ( Length >= Size )
          {
            v107 = (void *)(a4 + 24);
            *(_OWORD *)a4 = 0LL;
            *(_QWORD *)(a4 + 16) = 0LL;
            *(_DWORD *)a4 = ExpManufacturingInformation;
            *(_DWORD *)(a4 + 8) = DWORD2(ExpManufacturingInformation);
            if ( WORD4(ExpManufacturingInformation) )
            {
              *(_QWORD *)(a4 + 16) = v107;
              memmove(v107, ::Data, WORD5(ExpManufacturingInformation));
            }
            BootGraphicsInformation = Size_4;
          }
          else
          {
            BootGraphicsInformation = -1073741820;
          }
          goto LABEL_641;
        case 0x9Eu:
          Size = 1;
          if ( Length )
          {
            *(_BYTE *)a4 = PoEnergyEstimationEnabled();
            BootGraphicsInformation = Size_4;
            goto LABEL_641;
          }
          if ( a6 )
            *a6 = 1;
          goto LABEL_104;
        case 0x9Fu:
          SystemBasicInformation = HvlQueryDetailInfo(a4, Length, v15, &Size);
          goto LABEL_640;
        case 0xA0u:
          v108 = (_DWORD)v13 << 6;
          Size = (_DWORD)v13 << 6;
          if ( Length < 0x40 )
            goto LABEL_383;
          v109 = Length >> 6;
          if ( Length >= v108 )
            v109 = v13;
          BootGraphicsInformation = Length < v108 ? 0xC0000004 : 0;
          while ( v8 < v109 )
          {
            ProcNumber.Group = v14;
            ProcNumber.Number = v8;
            ProcNumber.Reserved = 0;
            v110 = KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)];
            KeQueryCycleTimeStatsProcessor(v110, (_QWORD *)a4);
            a4 += 64LL;
            v148 = (_QWORD *)a4;
            ++v8;
            v14 = v128;
          }
          goto LABEL_641;
        case 0xA2u:
          SystemBasicInformation = SeQueryTrustedPlatformModuleInformation((int *)a4, Length, &Size);
          goto LABEL_640;
        case 0xA3u:
          if ( !Length )
          {
            if ( a6 )
              *a6 = 1;
            return -1073741820;
          }
          *(_BYTE *)a4 = KdIgnoreUmExceptions;
LABEL_259:
          Size = v10;
          BootGraphicsInformation = Size_4;
          goto LABEL_641;
        case 0xA4u:
        case 0xACu:
        case 0xBDu:
        case 0xBEu:
        case 0xC7u:
        case 0xD1u:
          SystemBasicInformation = SeCodeIntegrityQueryPolicyInformation(v16, v133[0], v20, a4, Length, (__int64)&Size);
          goto LABEL_640;
        case 0xA5u:
          Size = 16;
          if ( Length != 16 )
          {
            if ( a6 )
              *a6 = 16;
            goto LABEL_104;
          }
          LOBYTE(Src[0]) ^= (LOBYTE(Src[0]) ^ (16 * ExpFirmwarePageProtectionSupported)) & 0x10;
          if ( VslIsSecureKernelRunning() )
          {
            v130[0] = 0;
            LOBYTE(Src[0]) = v111 | 1;
            NestedPageProtectionFlags = VslGetNestedPageProtectionFlags();
            v113 = Src[0];
            if ( (NestedPageProtectionFlags & 2) != 0 )
            {
              v113 = LOBYTE(Src[0]) | 2;
              LOBYTE(Src[0]) |= 2u;
            }
            if ( (NestedPageProtectionFlags & 0x20) != 0 )
            {
              v113 |= 4u;
              LOBYTE(Src[0]) = v113;
            }
            if ( (NestedPageProtectionFlags & 0x10) != 0 )
              LOBYTE(Src[0]) = v113 | 8;
            if ( (NestedPageProtectionFlags & 0x200) != 0 )
              BYTE1(Src[0]) |= 2u;
            if ( v153 )
            {
              BootGraphicsInformation = VslIsTrustletRunning(v153, v130);
              BYTE1(Src[0]) ^= (v130[0] ^ BYTE1(Src[0])) & 1;
            }
            else
            {
              BootGraphicsInformation = Size_4;
            }
            LOBYTE(Src[0]) ^= (LOBYTE(Src[0]) ^ (32 * ExpIsIumEncryptionKeyAvailable())) & 0x20;
          }
          else
          {
            BootGraphicsInformation = Size_4;
          }
          *(_OWORD *)a4 = Src[0];
          goto LABEL_641;
        case 0xA6u:
          SystemBasicInformation = SeQueryHSTIResults(a4, Length, &Size, v13);
          goto LABEL_640;
        case 0xA7u:
          SystemBasicInformation = ExpQuerySingleModuleInformation(a4, Length, v9, &Size);
          goto LABEL_640;
        case 0xA9u:
          SystemBasicInformation = HvlQueryVsmProtectionInfo((void *)a4, Length);
          goto LABEL_640;
        case 0xADu:
          result = ExCpuSetResourceManagerAccessCheck(v9);
          if ( result < 0 )
            return result;
          Size = 168;
          if ( Length != 168 )
          {
            BootGraphicsInformation = -1073741820;
            goto LABEL_641;
          }
          SystemBasicInformation = KeGetAffinitizedInterruptsInfo((_WORD *)a4);
          goto LABEL_640;
        case 0xAEu:
          SystemBasicInformation = PsRootSiloInformation(a4, Length, &Size, v13);
          goto LABEL_640;
        case 0xAFu:
          if ( Handle )
          {
            Object = 0LL;
            result = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, v9, &Object, 0LL);
            v118 = (struct _DMA_ADAPTER *)Object;
            if ( result < 0 )
              return result;
          }
          else
          {
            v118 = (struct _DMA_ADAPTER *)Process;
          }
          CpuSetInformation = KeQueryCpuSetInformation((void *)a4);
          goto LABEL_583;
        case 0xB2u:
          if ( !Length )
          {
            BootGraphicsInformation = -1073741789;
            goto LABEL_641;
          }
          if ( v9 && !SeSinglePrivilegeCheck(SeSystemProfilePrivilege, v9) )
            return -1073741727;
          v120 = (struct _MDL *)ExAllocatePoolWithQuotaTag((POOL_TYPE)520, Length, 0x6F666E49u);
          v121 = v120;
          *(_QWORD *)v133 = v120;
          if ( v120 )
          {
            memset(v120, 0, Length);
            BootGraphicsInformation = VslQuerySecureKernelProfileInformation(v160, v121, Length, &Size);
            if ( BootGraphicsInformation >= 0 )
              memmove((void *)a4, v121, Size);
            ExFreePoolWithTag(v121, 0x6F666E49u);
          }
          else
          {
            BootGraphicsInformation = -1073741670;
          }
          goto LABEL_641;
        case 0xB4u:
          SystemBasicInformation = ExpQueryInterruptSteeringInformation(v133[0], v20, a4, Length, (__int64)&Size);
          goto LABEL_640;
        case 0xB5u:
          if ( Handle )
          {
            v150 = 0LL;
            result = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, v9, &v150, 0LL);
            v118 = (struct _DMA_ADAPTER *)v150;
            if ( result < 0 )
              return result;
          }
          else
          {
            v118 = (struct _DMA_ADAPTER *)Process;
          }
          CpuSetInformation = PsWow64GetSupportedArchitectures((void *)a4);
LABEL_583:
          BootGraphicsInformation = CpuSetInformation;
          if ( v118 )
            HalPutDmaAdapter(v118);
          goto LABEL_641;
        case 0xB6u:
          if ( Length != 56 )
          {
            if ( a6 )
              *a6 = 56;
            return -1073741820;
          }
          v23 = PsGetCurrentProcess();
          v24 = MmGetProcessPartitionId((__int64)v23);
          *(_QWORD *)&Src[0] = MmGetNumberOfPhysicalPages(v24) << 12;
          *((_QWORD *)&Src[0] + 1) = MmGetAvailablePages(v24) << 12;
          *(_QWORD *)&Src[1] = MmGetResidentAvailablePages(v25) << 12;
          *((_QWORD *)&Src[1] + 1) = MmGetTotalCommittedPages(v26) << 12;
          *((_QWORD *)&Src[2] + 1) = MmGetTotalCommitLimit(v27) << 12;
          *(_QWORD *)&Src[3] = MmGetPeakCommitment(v28) << 12;
          *(_QWORD *)&Src[2] = MmGetSharedCommit() << 12;
          v29 = *(_QWORD *)&Src[0];
          if ( *(_QWORD *)&Src[0] < *((_QWORD *)&Src[0] + 1) )
            v29 = *((_QWORD *)&Src[0] + 1);
          *(_QWORD *)&Src[0] = v29;
          v30 = *((_QWORD *)&Src[2] + 1);
          if ( *((_QWORD *)&Src[2] + 1) < *((_QWORD *)&Src[1] + 1) )
            v30 = *((_QWORD *)&Src[1] + 1);
          *((_QWORD *)&Src[2] + 1) = v30;
          v31 = *(_QWORD *)&Src[3];
          if ( *(_QWORD *)&Src[3] < *((_QWORD *)&Src[1] + 1) )
            v31 = *((_QWORD *)&Src[1] + 1);
          *(_QWORD *)&Src[3] = v31;
          *(_OWORD *)a4 = Src[0];
          *(_OWORD *)(a4 + 16) = Src[1];
          *(_OWORD *)(a4 + 32) = Src[2];
          *(_QWORD *)(a4 + 48) = *(_QWORD *)&Src[3];
          Size = 56;
LABEL_62:
          BootGraphicsInformation = Size_4;
          goto LABEL_641;
        case 0xB7u:
          if ( Length != 16 )
            return -1073741820;
          SystemBasicInformation = ExpQueryCodeIntegrityCertificateInfo(
                                     *(_QWORD *)a4,
                                     *(unsigned int *)(a4 + 8),
                                     v15,
                                     v13);
          goto LABEL_640;
        case 0xB8u:
          if ( Length != 24 )
          {
            if ( a6 )
              *a6 = 24;
            return -1073741820;
          }
          v33 = PsGetCurrentProcess();
          v34 = MmGetProcessPartitionId((__int64)v33);
          *(_QWORD *)&Src[0] = MmGetNumberOfPhysicalPages(v34) << 12;
          *((_QWORD *)&Src[0] + 1) = MmGetLowestPhysicalPage(v34) << 12;
          *(_QWORD *)&Src[1] = (MmGetHighestPhysicalPage(v35) << 12) + 4095;
          *(_OWORD *)a4 = Src[0];
          *(_QWORD *)(a4 + 16) = *(_QWORD *)&Src[1];
LABEL_67:
          Size = 24;
          BootGraphicsInformation = Size_4;
          goto LABEL_641;
        case 0xB9u:
          SystemBasicInformation = WbDispatchOperation((void *)a4, Length);
          goto LABEL_640;
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
          BootGraphicsInformation = PsQueryActivityModerationUserSettings(Src);
          if ( BootGraphicsInformation >= 0 )
            *(_QWORD *)a4 = *(_QWORD *)&Src[0];
          goto LABEL_641;
        case 0xC0u:
          if ( Length >= 0x20 )
          {
            BootGraphicsInformation = ExpGetSystemFlushInformation(a4, v20, v15, v13);
            Size = 32;
            goto LABEL_641;
          }
          if ( a6 )
            *a6 = 32;
          return -1073741820;
        case 0xC1u:
          v93 = 8 * KeQueryActiveGroupCount();
          Size = v93;
          if ( Length >= v93 )
          {
            memset((void *)a4, 0, v93);
            v129 = 0;
            while ( v8 < (unsigned __int16)KeNumberNodes )
            {
              v94 = KeNodeBlock[v8];
              v127 = *(_WORD *)(v94 + 144);
              *(_QWORD *)(a4 + 8LL * v127) |= *(_QWORD *)(v94 + 24);
              v8 = ++v129;
            }
            BootGraphicsInformation = Size_4;
          }
          else
          {
LABEL_383:
            BootGraphicsInformation = -1073741789;
          }
          goto LABEL_641;
        case 0xC3u:
          if ( Length < 8 )
          {
            if ( a6 )
              *a6 = 8;
            return -1073741820;
          }
          SystemBasicInformation = ExpGetSystemWriteConstraintInformation(a4, v20, v15, v13);
          Size = 8;
LABEL_640:
          BootGraphicsInformation = SystemBasicInformation;
          goto LABEL_641;
        case 0xC4u:
          SystemBasicInformation = KeQueryKvaShadowInformation(a4, Length, &Size, v13);
          goto LABEL_640;
        case 0xC5u:
          Size = 8;
          if ( Length >= 8 )
          {
            v123 = qword_140C4DCC8;
            *(_QWORD *)a4 = 0LL;
            *(_QWORD *)a4 = v123;
            BootGraphicsInformation = Size_4;
          }
          else
          {
            BootGraphicsInformation = -1073741820;
          }
          goto LABEL_641;
        case 0xC6u:
          BootGraphicsInformation = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, SIZE_T *))off_140C00A68[0])(
                                      34LL,
                                      0LL,
                                      0LL,
                                      &NumberOfBytes);
          if ( BootGraphicsInformation != -1073741820 )
            return -1073741637;
          v47 = NumberOfBytes;
          if ( Length < (unsigned int)NumberOfBytes || !a4 )
          {
LABEL_97:
            Size = v47;
            goto LABEL_641;
          }
          if ( v9 )
          {
            PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, (unsigned int)NumberOfBytes, 0x6F666E49u);
            *(_QWORD *)v133 = PoolWithQuotaTag;
            if ( !PoolWithQuotaTag )
            {
              BootGraphicsInformation = -1073741670;
              goto LABEL_641;
            }
            v47 = NumberOfBytes;
          }
          else
          {
            PoolWithQuotaTag = (_DWORD *)a4;
            *(_QWORD *)v133 = a4;
          }
          v122 = ((__int64 (__fastcall *)(__int64, _QWORD, _DWORD *, unsigned int *))off_140C00A68[0])(
                   34LL,
                   v47,
                   PoolWithQuotaTag,
                   &Size);
          BootGraphicsInformation = v122;
          if ( v9 )
          {
            if ( v122 >= 0 )
LABEL_429:
              memmove((void *)a4, PoolWithQuotaTag, Size);
LABEL_430:
            ExFreePoolWithTag(PoolWithQuotaTag, 0x6F666E49u);
          }
          goto LABEL_641;
        case 0xC8u:
          SystemBasicInformation = IoQuerySystemDeviceName(200LL, a4, Length, &Size);
          goto LABEL_640;
        case 0xC9u:
          SystemBasicInformation = KeQuerySpeculationControlInformation((void *)a4, Length);
          goto LABEL_640;
        case 0xCAu:
          Size = 1;
          if ( Length != 1 )
          {
            if ( a6 )
              *a6 = 1;
            goto LABEL_104;
          }
          v146 = 0;
          BootGraphicsInformation = ((__int64 (__fastcall *)(__int64, __int64, _OWORD *, int *))off_140C00A68[0])(
                                      47LL,
                                      1LL,
                                      Src,
                                      &v146);
          if ( BootGraphicsInformation >= 0 && v146 == 1 )
            *(_BYTE *)a4 = Src[0];
          else
LABEL_419:
            BootGraphicsInformation = -1073741637;
          goto LABEL_641;
        case 0xCEu:
          if ( Length != 8 )
          {
            if ( a6 )
              *a6 = 8;
            return -1073741820;
          }
          *(_BYTE *)a4 = *(_BYTE *)ExLeapSecondData != 0;
          *(_DWORD *)(a4 + 4) = 0;
LABEL_116:
          Size = 8;
          BootGraphicsInformation = Size_4;
          goto LABEL_641;
        case 0xCFu:
          if ( Length == 4 )
          {
            *(_DWORD *)a4 = NtGlobalFlag2;
            goto LABEL_160;
          }
          if ( a6 )
            *a6 = 4;
          return -1073741820;
        case 0xD0u:
          SystemBasicInformation = SeSecurityModelQueryInformation(a4, Length, &Size, v13);
          goto LABEL_640;
        case 0xD2u:
          SystemBasicInformation = CmQuerySingleFeatureConfiguration(v133[0], v20, a4, Length, (__int64)&Size);
          goto LABEL_640;
        case 0xD3u:
          SystemBasicInformation = CmQueryFeatureConfigurationSections(
                                     v133[0],
                                     v20,
                                     a4,
                                     Length,
                                     (__int64)&Size,
                                     KeGetCurrentThread()->PreviousMode);
          goto LABEL_640;
        case 0xD5u:
          SystemBasicInformation = KeQuerySecureSpeculationInformation((unsigned int *)a4, Length, &Size);
          goto LABEL_640;
        case 0xDDu:
          if ( Length != 4 )
          {
            if ( a6 )
              *a6 = 4;
            return -1073741820;
          }
          *(_DWORD *)a4 = 0;
          if ( !PsIsCurrentThreadInServerSilo() )
          {
            *(_DWORD *)a4 ^= (*(_DWORD *)a4 ^ KeIsCetCapable()) & 1;
            IsUserCetAllowed = KeIsUserCetAllowed();
            *(_DWORD *)a4 = v115 ^ ((unsigned __int8)v115 ^ (unsigned __int8)(2 * IsUserCetAllowed)) & 2;
            IsKTMCommitCoordinator = ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator();
            *(_DWORD *)a4 = v117 ^ ((unsigned __int16)v117 ^ (unsigned __int16)(IsKTMCommitCoordinator << 8)) & 0x100;
          }
LABEL_160:
          Size = 4;
          BootGraphicsInformation = Size_4;
          goto LABEL_641;
        case 0xE3u:
          Size = 1;
          if ( Length == 1 )
          {
            *(_BYTE *)a4 = 1;
            BootGraphicsInformation = Size_4;
          }
          else
          {
            if ( a6 )
              *a6 = 1;
LABEL_104:
            BootGraphicsInformation = -1073741820;
          }
          goto LABEL_641;
        default:
          return -1073741821;
      }
      return result;
    case 0xAFu:
    case 0xB5u:
      v20 = (unsigned int)v131;
      if ( v131 != 8 )
        return -1073741811;
      Handle = **(HANDLE **)v133;
      goto LABEL_35;
    case 0xB2u:
      v20 = (unsigned int)v131;
      if ( v131 != 8 )
        return -1073741811;
      v160 = **(_QWORD **)v133;
      goto LABEL_35;
    default:
      goto LABEL_34;
  }
}
