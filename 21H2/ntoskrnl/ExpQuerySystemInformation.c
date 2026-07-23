/*
 * XREFs of ExpQuerySystemInformation @ 0x140645E90
 * Callers:
 *     NtQuerySystemInformationEx @ 0x1406437C0 (NtQuerySystemInformationEx.c)
 *     NtQuerySystemInformation @ 0x140645D10 (NtQuerySystemInformation.c)
 * Callees:
 *     KeQueryLogicalProcessorRelationship @ 0x14022DD90 (KeQueryLogicalProcessorRelationship.c)
 *     ExpGetSystemEmulationBasicInformation @ 0x14023B778 (ExpGetSystemEmulationBasicInformation.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x14023B914 (ExCpuSetResourceManagerAccessCheck.c)
 *     KeQueryCycleTimeStatsProcessor @ 0x14023BBE0 (KeQueryCycleTimeStatsProcessor.c)
 *     KeQueryBootTimeValues @ 0x14023C748 (KeQueryBootTimeValues.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     MmQuerySystemWorkingSetInformation @ 0x14023FC60 (MmQuerySystemWorkingSetInformation.c)
 *     PoGetPerfStateAndParkingInfo @ 0x140241CF4 (PoGetPerfStateAndParkingInfo.c)
 *     KeQueryGroupAffinity @ 0x140247ED0 (KeQueryGroupAffinity.c)
 *     ExpGetSystemEmulationProcessorInformation @ 0x14024D01C (ExpGetSystemEmulationProcessorInformation.c)
 *     MmGetLowestPhysicalPage @ 0x140251ECC (MmGetLowestPhysicalPage.c)
 *     VslIsSecureKernelRunning @ 0x14025217C (VslIsSecureKernelRunning.c)
 *     MmGetSharedCommit @ 0x1402600B4 (MmGetSharedCommit.c)
 *     MmGetResidentAvailablePages @ 0x1402600C4 (MmGetResidentAvailablePages.c)
 *     VslGetNestedPageProtectionFlags @ 0x1402653A0 (VslGetNestedPageProtectionFlags.c)
 *     KeFlushProcessWriteBuffers @ 0x140268CA4 (KeFlushProcessWriteBuffers.c)
 *     MmGetAvailablePages @ 0x140269500 (MmGetAvailablePages.c)
 *     MmGetTotalCommittedPages @ 0x140269520 (MmGetTotalCommittedPages.c)
 *     MmGetTotalCommitLimit @ 0x140269540 (MmGetTotalCommitLimit.c)
 *     MmGetPeakCommitment @ 0x140269560 (MmGetPeakCommitment.c)
 *     MmGetProcessPartitionId @ 0x140269580 (MmGetProcessPartitionId.c)
 *     KeQueryActiveProcessorCountEx @ 0x1402695B0 (KeQueryActiveProcessorCountEx.c)
 *     ExpGetSystemProcessorInformation @ 0x140269670 (ExpGetSystemProcessorInformation.c)
 *     ExpGetSystemBasicInformation @ 0x140269A6C (ExpGetSystemBasicInformation.c)
 *     PoGetIdleTimes @ 0x140269CDC (PoGetIdleTimes.c)
 *     KeGetProcessorIndexFromNumber @ 0x140269E20 (KeGetProcessorIndexFromNumber.c)
 *     MmQueryMemoryListInformation @ 0x140272F20 (MmQueryMemoryListInformation.c)
 *     KeEnterCriticalRegionThread @ 0x14027C8F0 (KeEnterCriticalRegionThread.c)
 *     KeQueryActiveGroupCount @ 0x1402942A0 (KeQueryActiveGroupCount.c)
 *     KeIsUserCetAllowed @ 0x14029AC28 (KeIsUserCetAllowed.c)
 *     KeGetRecommendedSharedDataAlignment @ 0x1402A5D50 (KeGetRecommendedSharedDataAlignment.c)
 *     PoEnergyEstimationEnabled @ 0x1402AA040 (PoEnergyEstimationEnabled.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 *     PsGetCurrentProcess @ 0x140346350 (PsGetCurrentProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     KeEnterCriticalRegion @ 0x14035BF60 (KeEnterCriticalRegion.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14035BF80 (PsIsCurrentThreadInServerSilo.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14035DD70 (ExAllocatePoolWithQuotaTag.c)
 *     MmGetHighestPhysicalPage @ 0x14035E068 (MmGetHighestPhysicalPage.c)
 *     ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator @ 0x140361380 (ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator.c)
 *     PsQueryCpuQuotaInformation @ 0x1403D0124 (PsQueryCpuQuotaInformation.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KeIsCetCapable @ 0x1403F2D60 (KeIsCetCapable.c)
 *     ZwFilterBootOption @ 0x1403FC200 (ZwFilterBootOption.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     HvlQueryActiveProcessors @ 0x1404F2190 (HvlQueryActiveProcessors.c)
 *     HvlQueryProcessorTopologyCount @ 0x1404F2390 (HvlQueryProcessorTopologyCount.c)
 *     VslIsTrustletRunning @ 0x1404FCAA4 (VslIsTrustletRunning.c)
 *     VslQuerySecureKernelProfileInformation @ 0x1404FD030 (VslQuerySecureKernelProfileInformation.c)
 *     KeQuerySecureSpeculationInformation @ 0x14051B748 (KeQuerySecureSpeculationInformation.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x140522728 (KeGetAffinitizedInterruptsInfo.c)
 *     MmEnumerateBadPages @ 0x14056499C (MmEnumerateBadPages.c)
 *     PpmCapturePerformanceDistribution @ 0x140576E5C (PpmCapturePerformanceDistribution.c)
 *     PsQueryActivityModerationUserSettings @ 0x140581610 (PsQueryActivityModerationUserSettings.c)
 *     SeQueryTrustedPlatformModuleInformation @ 0x140597710 (SeQueryTrustedPlatformModuleInformation.c)
 *     ExpGetLookasideInformation @ 0x1405B1EB0 (ExpGetLookasideInformation.c)
 *     ExGetBigPoolInfo @ 0x1405B398C (ExGetBigPoolInfo.c)
 *     SeCodeIntegrityQueryPolicyInformation @ 0x1405DC520 (SeCodeIntegrityQueryPolicyInformation.c)
 *     ExGetSessionPoolTagInformation @ 0x1405E413C (ExGetSessionPoolTagInformation.c)
 *     CmQueryFeatureConfigurationSections @ 0x1405FED5C (CmQueryFeatureConfigurationSections.c)
 *     ExIsRestrictedCaller @ 0x1406017E4 (ExIsRestrictedCaller.c)
 *     PsQueryFullProcessImageName @ 0x1406084EC (PsQueryFullProcessImageName.c)
 *     KeBuildLogicalProcessorSystemInformation @ 0x14060ADF8 (KeBuildLogicalProcessorSystemInformation.c)
 *     SeCodeIntegrityQueryInformation @ 0x14060BBE0 (SeCodeIntegrityQueryInformation.c)
 *     ExpGetSystemFlushInformation @ 0x14060BC30 (ExpGetSystemFlushInformation.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x14060BD5C (ExpGetSystemFirmwareTableInformation.c)
 *     PfSnQueryPrefetcherInformation @ 0x14060D9A4 (PfSnQueryPrefetcherInformation.c)
 *     IoQuerySystemDeviceName @ 0x14061284C (IoQuerySystemDeviceName.c)
 *     SeSecureBootQueryInformation @ 0x14061B34C (SeSecureBootQueryInformation.c)
 *     IoQueryLowPriorityIoInformation @ 0x14061D5F8 (IoQueryLowPriorityIoInformation.c)
 *     MmGetPageFileInformation @ 0x14061DAD4 (MmGetPageFileInformation.c)
 *     SmQueryStoreInformation @ 0x140621A68 (SmQueryStoreInformation.c)
 *     ExpReadComPlusPackage @ 0x140622120 (ExpReadComPlusPackage.c)
 *     ExpQuerySystemPerformanceInformation @ 0x14063B5F0 (ExpQuerySystemPerformanceInformation.c)
 *     PsWow64GetSupportedArchitectures @ 0x140643518 (PsWow64GetSupportedArchitectures.c)
 *     WbDispatchOperation @ 0x140643C44 (WbDispatchOperation.c)
 *     ExHandleSPCall2 @ 0x1406442C0 (ExHandleSPCall2.c)
 *     MmGetNumberOfPhysicalPages @ 0x140644560 (MmGetNumberOfPhysicalPages.c)
 *     ProbeForWrite @ 0x1406495C0 (ProbeForWrite.c)
 *     PfQuerySuperfetchInformation @ 0x140649630 (PfQuerySuperfetchInformation.c)
 *     PsLookupProcessByProcessId @ 0x14068F4F0 (PsLookupProcessByProcessId.c)
 *     SeSinglePrivilegeCheck @ 0x140693750 (SeSinglePrivilegeCheck.c)
 *     ExpQueryNumaProcessorMap @ 0x1406A7700 (ExpQueryNumaProcessorMap.c)
 *     ExReleaseTimeRefreshLock @ 0x1406B2FD0 (ExReleaseTimeRefreshLock.c)
 *     ExAcquireTimeRefreshLock @ 0x1406B2FF4 (ExAcquireTimeRefreshLock.c)
 *     ExGetPoolTagInfo @ 0x1406B47B8 (ExGetPoolTagInfo.c)
 *     ExpQueryModuleInformation @ 0x1406DD0A0 (ExpQueryModuleInformation.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     ExpGetProcessInformation @ 0x140708640 (ExpGetProcessInformation.c)
 *     SeQueryHSTIResults @ 0x140773290 (SeQueryHSTIResults.c)
 *     ExpQueryChannelInformation @ 0x14077AAF0 (ExpQueryChannelInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     CmQueryRegistryQuotaInformation @ 0x14077CB5C (CmQueryRegistryQuotaInformation.c)
 *     IoGetConfigurationInformation @ 0x140781CD0 (IoGetConfigurationInformation.c)
 *     ExQueryBootEntropyInformation @ 0x14079ED94 (ExQueryBootEntropyInformation.c)
 *     ExpQueryModuleInformationEx @ 0x1407B182C (ExpQueryModuleInformationEx.c)
 *     KeQueryCpuSetInformation @ 0x1407C73A8 (KeQueryCpuSetInformation.c)
 *     ExpQueryMemoryTopologyInformation @ 0x1407C8750 (ExpQueryMemoryTopologyInformation.c)
 *     ExpQueryInterruptSteeringInformation @ 0x1407CF714 (ExpQueryInterruptSteeringInformation.c)
 *     ExpGetSystemPlatformBinary @ 0x1407D0094 (ExpGetSystemPlatformBinary.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x1407D2528 (ExpGetSystemWriteConstraintInformation.c)
 *     HvlQueryEnlightenmentInfo @ 0x1407D302C (HvlQueryEnlightenmentInfo.c)
 *     IoQueryVhdBootInformation @ 0x1407D3634 (IoQueryVhdBootInformation.c)
 *     ExSystemExceptionFilter @ 0x1407D5080 (ExSystemExceptionFilter.c)
 *     CmQuerySingleFeatureConfiguration @ 0x14086B30C (CmQuerySingleFeatureConfiguration.c)
 *     HvlQueryDetailInfo @ 0x14088E488 (HvlQueryDetailInfo.c)
 *     HvlQueryVsmProtectionInfo @ 0x14088E5A4 (HvlQueryVsmProtectionInfo.c)
 *     KeQuerySpeculationControlInformation @ 0x1408BBAA8 (KeQuerySpeculationControlInformation.c)
 *     KeQueryKvaShadowInformation @ 0x1408BCDE8 (KeQueryKvaShadowInformation.c)
 *     MmGetSessionMappedViewInformation @ 0x1408C4A30 (MmGetSessionMappedViewInformation.c)
 *     ObQueryRefTraceInformation @ 0x1408DE154 (ObQueryRefTraceInformation.c)
 *     PsRootSiloInformation @ 0x140905D54 (PsRootSiloInformation.c)
 *     SeSecurityModelQueryInformation @ 0x14091CECC (SeSecurityModelQueryInformation.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14093803C (EtwQueryPerformanceTraceInformation.c)
 *     ExGetSessionBigPoolInformation @ 0x14094A130 (ExGetSessionBigPoolInformation.c)
 *     ExpGetDeviceDataInformation @ 0x14094A348 (ExpGetDeviceDataInformation.c)
 *     ExpGetHandleInformation @ 0x14094A554 (ExpGetHandleInformation.c)
 *     ExpGetHandleInformationEx @ 0x14094A5D4 (ExpGetHandleInformationEx.c)
 *     ExpGetLockInformation @ 0x14094A654 (ExpGetLockInformation.c)
 *     ExpGetObjectInformation @ 0x14094A6D4 (ExpGetObjectInformation.c)
 *     ExpGetSystemProcessorFeaturesInformation @ 0x14094A764 (ExpGetSystemProcessorFeaturesInformation.c)
 *     ExpIsIumEncryptionKeyAvailable @ 0x14094A7C0 (ExpIsIumEncryptionKeyAvailable.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x14094A86C (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryLegacyDriverInformation @ 0x14094ADE4 (ExpQueryLegacyDriverInformation.c)
 *     ExpQueryNumaAvailableMemory @ 0x14094AEDC (ExpQueryNumaAvailableMemory.c)
 *     ExpQueryNumaProximityNode @ 0x14094B08C (ExpQueryNumaProximityNode.c)
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x14094B1E0 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     ExpQuerySingleModuleInformation @ 0x14094B3F0 (ExpQuerySingleModuleInformation.c)
 *     ExpCovQueryInformation @ 0x1409579AC (ExpCovQueryInformation.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 *     VfGetVerifierInformation @ 0x1409EDAB4 (VfGetVerifierInformation.c)
 *     VfGetVerifierInformationEx @ 0x1409EDB7C (VfGetVerifierInformationEx.c)
 *     BgkQueryBootGraphicsInformation @ 0x1409F348C (BgkQueryBootGraphicsInformation.c)
 */

NTSTATUS __fastcall ExpQuerySystemInformation(
        unsigned int a1,
        __int64 a2,
        int a3,
        unsigned __int64 a4,
        unsigned int Length,
        unsigned int *a6)
{
  unsigned int v8; // r14d
  unsigned __int8 v9; // r12
  unsigned int v10; // esi
  ULONG v11; // r8d
  __int64 v12; // rcx
  __int64 v13; // r9
  __int16 v14; // r10
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
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rcx
  unsigned __int64 v54; // rsi
  char v55; // r14
  char *v56; // rdx
  struct _KTHREAD *CurrentThread; // r14
  __int64 v58; // rdx
  NTSTATUS v59; // edi
  __int64 v60; // r8
  __int64 v61; // r9
  NTSTATUS result; // eax
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // r9
  PCONFIGURATION_INFORMATION ConfigurationInformation; // rax
  __int64 v67; // rcx
  signed int ModuleInformation; // eax
  int v69; // ecx
  unsigned int v70; // eax
  int v71; // ecx
  int v72; // esi
  __int64 v73; // rdx
  unsigned int v74; // ebx
  int v75; // ecx
  int v76; // edx
  __int64 *v77; // r12
  __int64 v78; // r8
  __int64 *v79; // r12
  __int64 v80; // rdx
  unsigned int i; // edi
  _DWORD *v82; // rdx
  __int64 v83; // rdi
  __int64 v84; // rcx
  _OWORD *v85; // rdi
  __int64 v86; // rcx
  _OWORD *v87; // rax
  __int64 v88; // rsi
  __int64 v89; // rcx
  _OWORD *v90; // rax
  __int64 *v91; // r12
  __int64 v92; // rcx
  __int64 v93; // r8
  unsigned int v94; // r8d
  int v95; // r9d
  unsigned int v96; // eax
  unsigned int v97; // r13d
  unsigned __int16 j; // ax
  __int64 v99; // rcx
  _QWORD *v100; // rax
  unsigned int v101; // eax
  __int64 v102; // rcx
  unsigned int v103; // eax
  unsigned int v104; // r13d
  __int64 v105; // rdx
  _DWORD *PoolWithQuotaTag; // rdi
  int v107; // eax
  int v108; // ecx
  __int64 v109; // rax
  __int64 v110; // r8
  __int64 v111; // r9
  PVOID v112; // rdi
  unsigned int v113; // ecx
  PVOID v114; // r12
  void *v115; // rcx
  unsigned int v116; // eax
  unsigned int v117; // r13d
  __int64 v118; // rcx
  char v119; // cl
  __int16 NestedPageProtectionFlags; // ax
  char v121; // cl
  bool IsUserCetAllowed; // al
  int v123; // ecx
  unsigned __int8 IsKTMCommitCoordinator; // al
  int v125; // edx
  struct _DMA_ADAPTER *v126; // r14
  signed int CpuSetInformation; // eax
  struct _MDL *v128; // rax
  struct _MDL *v129; // r14
  int v130; // eax
  __int64 v131; // rax
  unsigned int Size; // [rsp+30h] [rbp-308h] BYREF
  int Size_4; // [rsp+34h] [rbp-304h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+38h] [rbp-300h] BYREF
  unsigned __int16 v135; // [rsp+3Ch] [rbp-2FCh]
  int v136; // [rsp+40h] [rbp-2F8h]
  unsigned int v137; // [rsp+44h] [rbp-2F4h]
  char v138[4]; // [rsp+48h] [rbp-2F0h] BYREF
  int v139; // [rsp+4Ch] [rbp-2ECh]
  SIZE_T NumberOfBytes; // [rsp+50h] [rbp-2E8h] BYREF
  int v141[2]; // [rsp+58h] [rbp-2E0h]
  unsigned int *v142; // [rsp+60h] [rbp-2D8h]
  int v143; // [rsp+68h] [rbp-2D0h] BYREF
  char Data[4]; // [rsp+6Ch] [rbp-2CCh] BYREF
  unsigned __int16 v145; // [rsp+70h] [rbp-2C8h]
  ULONG v146; // [rsp+74h] [rbp-2C4h]
  unsigned int v147; // [rsp+78h] [rbp-2C0h]
  unsigned int v148; // [rsp+7Ch] [rbp-2BCh]
  LOGICAL_PROCESSOR_RELATIONSHIP RelationshipType; // [rsp+80h] [rbp-2B8h]
  unsigned int v150; // [rsp+84h] [rbp-2B4h]
  unsigned int v151; // [rsp+88h] [rbp-2B0h] BYREF
  int v152; // [rsp+8Ch] [rbp-2ACh] BYREF
  int v153; // [rsp+90h] [rbp-2A8h]
  int v154; // [rsp+94h] [rbp-2A4h] BYREF
  unsigned int v155; // [rsp+98h] [rbp-2A0h] BYREF
  _QWORD *v156; // [rsp+A0h] [rbp-298h]
  PEPROCESS Process; // [rsp+A8h] [rbp-290h] BYREF
  PVOID v158; // [rsp+B0h] [rbp-288h] BYREF
  PVOID P; // [rsp+B8h] [rbp-280h] BYREF
  PVOID v160; // [rsp+C0h] [rbp-278h] BYREF
  __int64 v161; // [rsp+C8h] [rbp-270h]
  HANDLE Handle; // [rsp+D0h] [rbp-268h]
  HANDLE ProcessId[2]; // [rsp+D8h] [rbp-260h]
  char *v164; // [rsp+E8h] [rbp-250h]
  __int64 v165; // [rsp+F0h] [rbp-248h] BYREF
  volatile void *v166; // [rsp+F8h] [rbp-240h]
  PVOID Object; // [rsp+100h] [rbp-238h] BYREF
  __int64 v168; // [rsp+108h] [rbp-230h]
  __int128 v169; // [rsp+110h] [rbp-228h] BYREF
  int v170; // [rsp+128h] [rbp-210h]
  _OWORD Src[27]; // [rsp+140h] [rbp-1F8h] BYREF

  v139 = a3;
  *(_QWORD *)v141 = a2;
  v148 = a1;
  v142 = a6;
  v8 = 0;
  LODWORD(NumberOfBytes) = 0;
  v165 = 0LL;
  v151 = 0;
  v152 = 0;
  v137 = 0;
  v143 = 0;
  v145 = 0;
  v135 = 0;
  v169 = 0LL;
  Process = 0LL;
  ProcNumber = 0;
  RelationshipType = RelationProcessorCore;
  v160 = 0LL;
  P = 0LL;
  v153 = 0;
  memset(Src, 0, sizeof(Src));
  Size_4 = 0;
  v9 = KeGetCurrentThread()->$6BEBF485330D18E60173AA6D991B35AC::gap0[10];
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
  v146 = 0;
  v14 = 0;
  v136 = 0;
  v135 = 0;
  v145 = 0;
  v161 = 0LL;
  Handle = 0LL;
  v168 = 0LL;
  v15 = 9LL;
  v147 = 9;
  v153 = 9;
  v16 = v148;
  switch ( v148 )
  {
    case 2u:
    case 0x21u:
    case 0x24u:
    case 0x41u:
      v136 = 0xFFFF;
      v135 = -1;
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
      if ( (unsigned int)v139 < 2 )
        return -1073741811;
      v136 = (unsigned __int16)**(_WORD **)v141;
      v135 = v136;
      ActiveGroupCount = KeQueryActiveGroupCount();
      v17 = v136;
      if ( (unsigned __int16)v136 >= ActiveGroupCount )
        return -1073741811;
LABEL_15:
      ActiveProcessorCount = KeQueryActiveProcessorCountEx(v17);
      v13 = ActiveProcessorCount;
      v146 = ActiveProcessorCount;
      v14 = v136;
      v15 = v147;
      v16 = v148;
LABEL_34:
      v20 = (unsigned int)v139;
      goto LABEL_35;
    case 0x48u:
      v20 = (unsigned int)v139;
      if ( v139 != 4 )
        return -1073741811;
      v15 = (unsigned int)**(_DWORD **)v141;
      v153 = **(_DWORD **)v141;
      goto LABEL_35;
    case 0x6Bu:
      v20 = (unsigned int)v139;
      if ( (unsigned int)v139 < 4 )
        return -1073741811;
      RelationshipType = **(_DWORD **)v141;
      goto LABEL_35;
    case 0x79u:
      v20 = (unsigned int)v139;
      if ( (unsigned int)v139 >= 2 )
      {
        v145 = **(_WORD **)v141;
        if ( v145 < (unsigned __int16)KeNumberNodes )
          goto LABEL_35;
      }
      return -1073741811;
    case 0xA5u:
      v20 = (unsigned int)v139;
      if ( v139 )
      {
        if ( v139 != 8 )
          return -1073741811;
        v161 = **(_QWORD **)v141;
      }
      else
      {
        v161 = 0LL;
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
          ExpQuerySystemPerformanceInformation(v13, (void *)a4, v10);
          goto LABEL_259;
        case 3u:
          if ( Length <= 0x30 )
          {
            KeQueryBootTimeValues((_QWORD *)Src + 1, (LARGE_INTEGER *)Src, &Src[2]);
            v53 = *((_QWORD *)PsGetCurrentServerSiloGlobals(v52, v51) + 133);
            *(_QWORD *)&Src[1] = *(_QWORD *)(v53 + 440);
            DWORD2(Src[1]) = *(_DWORD *)(v53 + 432);
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
            v137 = 0;
            v43 = 0;
            while ( 1 )
            {
              v147 = v43;
              if ( v43 >= (unsigned int)v13 )
                break;
              ProcNumber.Group = v14;
              ProcNumber.Number = v43;
              ProcNumber.Reserved = 0;
              v44 = (_DWORD *)KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)];
              v45 = v137;
              if ( Length < v42 + v137 )
                goto LABEL_91;
              v137 += v42;
              PoGetIdleTimes(&ProcNumber, 0LL, (__int64)Src);
              *(_QWORD *)(a4 + 16) = KeMaximumIncrement * (unsigned __int64)(unsigned int)v44[8098];
              *(_QWORD *)(a4 + 8) = KeMaximumIncrement * (unsigned __int64)DWORD1(Src[0]);
              *(_QWORD *)(a4 + 24) = KeMaximumIncrement * (unsigned __int64)(unsigned int)v44[8099];
              *(_QWORD *)(a4 + 32) = KeMaximumIncrement * (unsigned __int64)(unsigned int)v44[8100];
              *(_QWORD *)a4 = KeMaximumIncrement * (unsigned __int64)LODWORD(Src[0]);
              *(_DWORD *)(a4 + 40) = v44[8096];
              if ( v148 == 141 )
              {
                *(_QWORD *)(a4 + 48) = KeMaximumIncrement * (unsigned __int64)(unsigned int)v44[8107];
                *(_DWORD *)(a4 + 44) = 0;
                *(_QWORD *)(a4 + 56) = 0LL;
                *(_QWORD *)(a4 + 64) = 0LL;
              }
              a4 += v42;
              v43 = v147 + 1;
              LODWORD(v13) = v146;
              v14 = v136;
            }
            v45 = v137;
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
          if ( ExIsRestrictedCaller(v9) )
            return -1073741790;
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
          ModuleInformation = ExpQueryModuleInformation(v67, a4, Length, &Size);
          goto LABEL_167;
        case 0xCu:
          if ( Length < 0x38 )
          {
            if ( a6 )
              *a6 = 56;
            return -1073741820;
          }
          if ( ExIsRestrictedCaller(v9) )
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
          if ( !ExIsRestrictedCaller(v9) )
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
          if ( ExIsRestrictedCaller(v9) )
            return -1073741790;
          SystemBasicInformation = ExpGetObjectInformation(a4, Length, &Size);
          goto LABEL_640;
        case 0x12u:
        case 0x90u:
          v70 = 32;
          if ( v16 != 18 )
            v70 = 40;
          Size = v70;
          if ( Length >= v70 )
          {
            Size = 0;
            LOBYTE(v8) = v16 == 144;
            SystemBasicInformation = MmGetPageFileInformation(40LL, a4, Length, v8, &Size);
            goto LABEL_640;
          }
          if ( a6 )
            *a6 = v70;
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
          v71 = 2;
          if ( v16 == 119 )
          {
            v72 = 3;
          }
          else
          {
            if ( v16 == 120 )
              v71 = 4;
            v72 = v71;
          }
          MmQuerySystemWorkingSetInformation(v72, Src);
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
              v82 = (_DWORD *)KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)];
              *(_DWORD *)a4 = v82[2895];
              *(_DWORD *)(a4 + 4) = v82[3127];
              *(_DWORD *)(a4 + 8) = v82[3143];
              *(_DWORD *)(a4 + 12) = KeTimeIncrement;
              *(_DWORD *)(a4 + 16) = 0;
              *(_DWORD *)(a4 + 20) = 0;
              a4 += 24LL;
              LODWORD(v13) = v146;
              v14 = v136;
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
          v54 = KeTimeAdjustmentFrequency;
          v55 = KeTimeSynchronization;
          ExReleaseTimeRefreshLock();
          if ( Length == 24 )
          {
            *(_QWORD *)a4 = v54;
            *(_QWORD *)(a4 + 8) = MEMORY[0xFFFFF78000000300];
            *(_BYTE *)(a4 + 16) = v55;
          }
          else
          {
            *(_DWORD *)a4 = MEMORY[0xFFFFF78000000300] * (unsigned __int64)KeMaximumIncrement / v54;
            *(_DWORD *)(a4 + 4) = KeMaximumIncrement;
            *(_BYTE *)(a4 + 8) = v55;
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
          v75 = 0;
          v76 = 0;
          if ( (_DWORD)v13 )
          {
            v77 = KiProcessorBlock;
            v78 = (unsigned int)v13;
            do
            {
              v75 += *(_DWORD *)(*v77 + 33592);
              v76 += *(_DWORD *)(*v77++ + 32432);
              --v78;
            }
            while ( v78 );
          }
          *(_DWORD *)a4 = v75;
          *(_DWORD *)(a4 + 4) = v76;
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
            v79 = KiProcessorBlock;
            v80 = (unsigned int)v13;
            do
            {
              v8 += *(_DWORD *)(*v79++ + 11580);
              --v80;
            }
            while ( v80 );
          }
          *(_DWORD *)a4 = v8;
          *(_DWORD *)(a4 + 4) = KeThreadSwitchCounters;
          *(_DWORD *)(a4 + 8) = dword_140C31C28;
          *(_DWORD *)(a4 + 12) = dword_140C31C24;
          *(_DWORD *)(a4 + 16) = dword_140C31C2C;
          *(_DWORD *)(a4 + 20) = dword_140C31C30;
          *(_DWORD *)(a4 + 24) = dword_140C31C38;
          *(_DWORD *)(a4 + 28) = dword_140C31C34;
          *(_DWORD *)(a4 + 32) = dword_140C31C3C;
          *(_DWORD *)(a4 + 36) = dword_140C31C40;
          *(_DWORD *)(a4 + 40) = dword_140C31C44;
          *(_DWORD *)(a4 + 44) = dword_140C31C48;
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
            LODWORD(v13) = v146;
            v14 = v136;
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
          v83 = *((_QWORD *)PsGetCurrentServerSiloGlobals(0x140000000LL, v20) + 133);
          LOBYTE(v84) = 1;
          ExAcquireTimeRefreshLock(v84);
          Src[0] = *(_OWORD *)v83;
          Src[1] = *(_OWORD *)(v83 + 16);
          Src[2] = *(_OWORD *)(v83 + 32);
          Src[3] = *(_OWORD *)(v83 + 48);
          Src[4] = *(_OWORD *)(v83 + 64);
          Src[5] = *(_OWORD *)(v83 + 80);
          Src[6] = *(_OWORD *)(v83 + 96);
          Src[7] = *(_OWORD *)(v83 + 112);
          Src[8] = *(_OWORD *)(v83 + 128);
          Src[9] = *(_OWORD *)(v83 + 144);
          *(_QWORD *)&Src[10] = *(_QWORD *)(v83 + 160);
          DWORD2(Src[10]) = *(_DWORD *)(v83 + 168);
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
            v143 = *(_DWORD *)a4;
            v166 = *(volatile void **)(a4 + 8);
            v150 = *(_DWORD *)(a4 + 4);
            ProbeForWrite(v166, v150, 4u);
            SystemBasicInformation = ExpGetProcessInformation(
                                       (_DWORD)v166,
                                       v150,
                                       (unsigned int)&Size,
                                       (unsigned int)&v143,
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
          SystemBasicInformation = PfSnQueryPrefetcherInformation(0x140000000LL, (__int128 *)a4, Length, v9, &Size);
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
            result = ExpReadComPlusPackage();
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
            PoGetPerfStateAndParkingInfo(&ProcNumber, (__int64)Src, 0LL, &v165);
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
            *(_QWORD *)(a4 + 72) = v165;
            a4 += 80LL;
            v156 = (_QWORD *)a4;
            ++v8;
            LODWORD(v13) = v146;
            v14 = v136;
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
          if ( !ExIsRestrictedCaller(v9) )
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
            v91 = KiProcessorBlock;
            v92 = (unsigned int)v13;
            do
            {
              v8 += *(_DWORD *)(*v91++ + 32700);
              --v92;
            }
            while ( v92 );
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
          if ( ExIsRestrictedCaller(v9) )
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
          v143 = *(_DWORD *)a4;
          v166 = *(volatile void **)(a4 + 8);
          v73 = *(unsigned int *)(a4 + 4);
          v150 = *(_DWORD *)(a4 + 4);
          if ( ((unsigned __int8)v166 & 7) != 0 )
            return -2147483646;
          SystemBasicInformation = ExGetSessionPoolTagInformation((__int64)v166, v73, &Size, &v143);
          goto LABEL_640;
        case 0x44u:
          if ( Length < 0x20 )
          {
            if ( a6 )
              *a6 = 32;
            return -1073741820;
          }
          v143 = *(_DWORD *)(a4 + 8);
          if ( (a4 & 7) != 0 )
            return -2147483646;
          SystemBasicInformation = MmGetSessionMappedViewInformation(a4, Length, &Size, &v143);
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
          v93 = (unsigned int)(v15 - 7);
          if ( (_DWORD)v93 )
          {
            if ( (_DWORD)v93 != 1 )
              return -1073741637;
            *(_DWORD *)a4 = 8;
            *(_DWORD *)(a4 + 4) = ((unsigned __int8 (__fastcall *)(unsigned __int64, __int64, __int64, __int64))off_140C008D0[0])(
                                    0x140000000uLL,
                                    v20,
                                    v93,
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
          SystemBasicInformation = ExpGetSystemFirmwareTableInformation((char *)a4, v9, Length, &Size);
          goto LABEL_640;
        case 0x4Du:
          if ( ExIsRestrictedCaller(v9) )
            return -1073741790;
          if ( SeSinglePrivilegeCheck(SeLoadDriverPrivilege, v9) )
            v10 = 0;
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
          ModuleInformation = ExpQueryModuleInformationEx(v69, a4, Length, v10, (__int64)&Size);
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
          v96 = 8 * v13;
          Size = 8 * v13;
          if ( Length < 8 )
            goto LABEL_383;
          v97 = Length >> 3;
          if ( Length >= v96 )
            v97 = v13;
          BootGraphicsInformation = Length < v96 ? 0xC0000004 : 0;
          v156 = (_QWORD *)a4;
          KeFlushProcessWriteBuffers(1);
          for ( j = v136; ; j = v135 )
          {
            v137 = v8;
            if ( v8 >= v97 )
              break;
            ProcNumber.Group = j;
            ProcNumber.Number = v8;
            ProcNumber.Reserved = 0;
            v99 = *(_QWORD *)(*(_QWORD *)(KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)] + 24) + 72LL);
            v100 = v156;
            *v156 = v99;
            v156 = v100 + 1;
            v8 = v137 + 1;
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
          v164 = *(char **)(a4 + 16);
          if ( LOWORD(ProcessId[1]) || (BYTE2(ProcessId[1]) & 1) != 0 )
            return -1073741811;
          if ( v9 && WORD1(ProcessId[1]) )
          {
            if ( ((unsigned __int8)v164 & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v56 = &v164[WORD1(ProcessId[1])];
            if ( (unsigned __int64)v56 > 0x7FFFFFFF0000LL || v56 < v164 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
          CurrentThread = KeGetCurrentThread();
          v155 = WORD1(ProcessId[1]);
          KeEnterCriticalRegionThread((__int64)CurrentThread);
          v59 = PsLookupProcessByProcessId(ProcessId[0], &Process);
          if ( v59 < 0 )
          {
            KeLeaveCriticalRegionThread((__int64)CurrentThread, v58, v60, v61);
            return v59;
          }
          BootGraphicsInformation = PsQueryFullProcessImageName((__int64)Process, (_OWORD *)(a4 + 8), v164, &v155);
          ObfDereferenceObjectWithTag(Process, 0x746C6644u);
          KeLeaveCriticalRegionThread((__int64)CurrentThread, v63, v64, v65);
          if ( BootGraphicsInformation == -1073741820 )
            *(_WORD *)(a4 + 10) = v155;
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
          *(_DWORD *)(a4 + 16) = dword_140C197B0;
          if ( Length < Size )
          {
LABEL_279:
            Size = 20;
            BootGraphicsInformation = Size_4;
          }
          else
          {
            *(_QWORD *)(a4 + 24) = qword_140C197B8;
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
          SystemBasicInformation = IoQuerySystemDeviceName(98);
          goto LABEL_640;
        case 0x63u:
          SystemBasicInformation = IoQuerySystemDeviceName(99);
          goto LABEL_640;
        case 0x64u:
          WORD4(v169) = v14;
          *(_QWORD *)&v169 = KeQueryGroupAffinity(v14);
          v46 = (0x101010101010101LL
               * (((((_QWORD)v169 - (((unsigned __int64)v169 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                 + ((((unsigned __int64)v169 - (((unsigned __int64)v169 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                 + (((((_QWORD)v169 - (((unsigned __int64)v169 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                   + ((((unsigned __int64)v169 - (((unsigned __int64)v169 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
          BootGraphicsInformation = PpmCapturePerformanceDistribution(
                                      0LL,
                                      0,
                                      (unsigned int)((0x101010101010101LL
                                                    * (((((_QWORD)v169
                                                        - (((unsigned __int64)v169 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                      + ((((unsigned __int64)v169
                                                         - (((unsigned __int64)v169 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                                      + (((((_QWORD)v169
                                                          - (((unsigned __int64)v169 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                        + ((((unsigned __int64)v169
                                                           - (((unsigned __int64)v169 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24,
                                      (__int64)&v169,
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
          *(_QWORD *)v141 = PoolWithTag;
          if ( PoolWithTag )
          {
            memset(PoolWithTag, 0, (unsigned int)NumberOfBytes);
            BootGraphicsInformation = PpmCapturePerformanceDistribution(
                                        v49,
                                        NumberOfBytes,
                                        v46,
                                        (__int64)&v169,
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
            v85 = (_OWORD *)*((_QWORD *)PsGetCurrentServerSiloGlobals(0x140000000LL, v20) + 133);
            LOBYTE(v86) = 1;
            ExAcquireTimeRefreshLock(v86);
            v87 = Src;
            v88 = 3LL;
            v89 = 3LL;
            do
            {
              *v87 = *v85;
              v87[1] = v85[1];
              v87[2] = v85[2];
              v87[3] = v85[3];
              v87[4] = v85[4];
              v87[5] = v85[5];
              v87[6] = v85[6];
              v87 += 8;
              *(v87 - 1) = v85[7];
              v85 += 8;
              --v89;
            }
            while ( v89 );
            *v87 = *v85;
            v87[1] = v85[1];
            v87[2] = v85[2];
            ExReleaseTimeRefreshLock();
            v90 = Src;
            do
            {
              *(_OWORD *)a4 = *v90;
              *(_OWORD *)(a4 + 16) = v90[1];
              *(_OWORD *)(a4 + 32) = v90[2];
              *(_OWORD *)(a4 + 48) = v90[3];
              *(_OWORD *)(a4 + 64) = v90[4];
              *(_OWORD *)(a4 + 80) = v90[5];
              *(_OWORD *)(a4 + 96) = v90[6];
              a4 += 128LL;
              *(_OWORD *)(a4 - 16) = v90[7];
              v90 += 8;
              --v88;
            }
            while ( v88 );
            *(_OWORD *)a4 = *v90;
            *(_OWORD *)(a4 + 16) = v90[1];
            *(_OWORD *)(a4 + 32) = v90[2];
            Size = 432;
            BootGraphicsInformation = 0;
            goto LABEL_641;
          }
          if ( a6 )
            *a6 = 432;
          return -1073741820;
        case 0x67u:
          SystemBasicInformation = SeCodeIntegrityQueryInformation(a4, Length, (__int64)&Size);
          goto LABEL_640;
        case 0x69u:
          BootGraphicsInformation = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, SIZE_T *))off_140C00A68[0])(
                                      23LL,
                                      0LL,
                                      0LL,
                                      &NumberOfBytes);
          if ( BootGraphicsInformation != -1073741820 )
            goto LABEL_419;
          v105 = (unsigned int)NumberOfBytes;
          if ( Length < (unsigned int)NumberOfBytes || !a4 )
          {
            Size = NumberOfBytes;
            goto LABEL_641;
          }
          if ( v9 )
          {
            PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, (unsigned int)NumberOfBytes, 0x6F666E49u);
            *(_QWORD *)v141 = PoolWithQuotaTag;
            if ( !PoolWithQuotaTag )
            {
              BootGraphicsInformation = -1073741670;
              goto LABEL_641;
            }
            v105 = (unsigned int)NumberOfBytes;
          }
          else
          {
            PoolWithQuotaTag = (_DWORD *)a4;
            *(_QWORD *)v141 = a4;
          }
          v107 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, unsigned int *))off_140C00A68[0])(
                   23LL,
                   v105,
                   PoolWithQuotaTag,
                   &Size);
          BootGraphicsInformation = v107;
          if ( !v9 )
            goto LABEL_641;
          if ( v107 < 0 )
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
          v103 = 8 * v13;
          Size = 8 * v13;
          if ( Length < 8 )
            goto LABEL_383;
          v104 = Length >> 3;
          if ( Length >= v103 )
            v104 = v13;
          BootGraphicsInformation = Length < v103 ? 0xC0000004 : 0;
          while ( v8 < v104 )
          {
            ProcNumber.Group = v14;
            ProcNumber.Number = v8;
            ProcNumber.Reserved = 0;
            *(_QWORD *)a4 = *(_QWORD *)(KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)] + 32568);
            a4 += 8LL;
            v156 = (_QWORD *)a4;
            ++v8;
            v14 = v136;
          }
          goto LABEL_641;
        case 0x6Du:
          SystemBasicInformation = SmQueryStoreInformation(0x40000000, a4, Length, v9, (__int64)&Size);
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
          SystemBasicInformation = IoQueryLowPriorityIoInformation(0x140000000LL, (_DWORD *)a4, Length, &Size);
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
            v137 = 0;
            v94 = 0;
            v95 = v145;
            while ( v94 < (unsigned __int16)KeNumberNodes )
            {
              *(_DWORD *)(a4 + 4LL * v94++) = *((_DWORD *)KeNodeDistance + v8 + v95 * (unsigned __int16)KeNumberNodes);
              v8 = v94;
              v137 = v94;
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
          v158 = PoolWithQuotaTag;
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
            v108 = *(_DWORD *)(a4 + 4) ^ ((unsigned __int8)*(_DWORD *)(a4 + 4) ^ (unsigned __int8)PoolWithQuotaTag[1]) & 2;
            *(_DWORD *)(a4 + 4) = v108;
            *(_DWORD *)(a4 + 4) = v108 ^ (PoolWithQuotaTag[1] ^ v108) & 4;
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
            v170 = *(_DWORD *)a4;
            if ( v170 == 1 )
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
          v143 = *(_DWORD *)a4;
          v166 = *(volatile void **)(a4 + 8);
          v74 = *(_DWORD *)(a4 + 4);
          v150 = v74;
          if ( ((unsigned __int8)v166 & 7) != 0 )
            return -2147483646;
          if ( !ExIsRestrictedCaller(v9) )
          {
            SystemBasicInformation = ExGetSessionBigPoolInformation(v166, v74, &Size, &v143);
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
              v109 = *(_QWORD *)&Src[0];
              if ( v9 )
                v109 = 0LL;
              *(_QWORD *)&Src[0] = v109;
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
            BootGraphicsInformation = MmEnumerateBadPages(&v160);
            v114 = v160;
            if ( v160 )
              v8 = 8 * *(_DWORD *)v160;
            Size = v8;
            if ( Length < v8 )
              BootGraphicsInformation = -1073741820;
            if ( v160 )
            {
              if ( BootGraphicsInformation >= 0 )
                memmove((void *)a4, (char *)v160 + 8, v8);
              ExFreePoolWithTag(v114, 0);
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
          SystemBasicInformation = ExHandleSPCall2(0x140000000LL, a4);
          goto LABEL_640;
        case 0x87u:
          Size = 8;
          if ( Length >= 8 )
          {
            if ( (unsigned int)HvlQueryActiveProcessors(&v151, 0LL) )
            {
              BootGraphicsInformation = -1073741637;
            }
            else
            {
              BootGraphicsInformation = HvlQueryProcessorTopologyCount(0LL, &v152);
              if ( BootGraphicsInformation )
              {
                BootGraphicsInformation = -1073741637;
              }
              else
              {
                *(_DWORD *)a4 = v151;
                *(_DWORD *)(a4 + 4) = v152;
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
                  BootGraphicsInformation = BgkQueryBootGraphicsInformation(1LL, &P, v110, v111);
                  if ( BootGraphicsInformation >= 0 )
                  {
                    v112 = P;
                    if ( P )
                    {
                      memmove((void *)a4, P, Size);
                      ExFreePoolWithTag(v112, 0x4B494742u);
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
          v113 = *(_DWORD *)ExBootLoaderMetadata;
          Size = *(_DWORD *)ExBootLoaderMetadata;
          if ( !a4 )
            goto LABEL_62;
          if ( Length < v113 )
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
            *(_QWORD *)(a4 + 16) = xmmword_140C25190;
            *(_DWORD *)(a4 + 24) = DWORD2(xmmword_140C25190);
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
            v115 = (void *)(a4 + 24);
            *(_OWORD *)a4 = 0LL;
            *(_QWORD *)(a4 + 16) = 0LL;
            *(_DWORD *)a4 = ExpManufacturingInformation;
            *(_DWORD *)(a4 + 8) = DWORD2(ExpManufacturingInformation);
            if ( WORD4(ExpManufacturingInformation) )
            {
              *(_QWORD *)(a4 + 16) = v115;
              memmove(v115, ::Data, WORD5(ExpManufacturingInformation));
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
          v116 = (_DWORD)v13 << 6;
          Size = (_DWORD)v13 << 6;
          if ( Length < 0x40 )
            goto LABEL_383;
          v117 = Length >> 6;
          if ( Length >= v116 )
            v117 = v13;
          BootGraphicsInformation = Length < v116 ? 0xC0000004 : 0;
          while ( v8 < v117 )
          {
            ProcNumber.Group = v14;
            ProcNumber.Number = v8;
            ProcNumber.Reserved = 0;
            v118 = KiProcessorBlock[KeGetProcessorIndexFromNumber(&ProcNumber)];
            KeQueryCycleTimeStatsProcessor(v118, (_QWORD *)a4);
            a4 += 64LL;
            v156 = (_QWORD *)a4;
            ++v8;
            v14 = v136;
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
          SystemBasicInformation = SeCodeIntegrityQueryPolicyInformation(v16);
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
            v138[0] = 0;
            LOBYTE(Src[0]) = v119 | 1;
            NestedPageProtectionFlags = VslGetNestedPageProtectionFlags();
            v121 = Src[0];
            if ( (NestedPageProtectionFlags & 2) != 0 )
            {
              v121 = LOBYTE(Src[0]) | 2;
              LOBYTE(Src[0]) |= 2u;
            }
            if ( (NestedPageProtectionFlags & 0x20) != 0 )
            {
              v121 |= 4u;
              LOBYTE(Src[0]) = v121;
            }
            if ( (NestedPageProtectionFlags & 0x10) != 0 )
              LOBYTE(Src[0]) = v121 | 8;
            if ( (NestedPageProtectionFlags & 0x200) != 0 )
              BYTE1(Src[0]) |= 2u;
            if ( v161 )
            {
              BootGraphicsInformation = VslIsTrustletRunning(v161, v138);
              BYTE1(Src[0]) ^= (v138[0] ^ BYTE1(Src[0])) & 1;
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
            v126 = (struct _DMA_ADAPTER *)Object;
            if ( result < 0 )
              return result;
          }
          else
          {
            v126 = (struct _DMA_ADAPTER *)Process;
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
          v128 = (struct _MDL *)ExAllocatePoolWithQuotaTag((POOL_TYPE)520, Length, 0x6F666E49u);
          v129 = v128;
          *(_QWORD *)v141 = v128;
          if ( v128 )
          {
            memset(v128, 0, Length);
            BootGraphicsInformation = VslQuerySecureKernelProfileInformation(v168, v129, Length, &Size);
            if ( BootGraphicsInformation >= 0 )
              memmove((void *)a4, v129, Size);
            ExFreePoolWithTag(v129, 0x6F666E49u);
          }
          else
          {
            BootGraphicsInformation = -1073741670;
          }
          goto LABEL_641;
        case 0xB4u:
          SystemBasicInformation = ExpQueryInterruptSteeringInformation(v141[0], v20, a4, Length, (__int64)&Size);
          goto LABEL_640;
        case 0xB5u:
          if ( Handle )
          {
            v158 = 0LL;
            result = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, v9, &v158, 0LL);
            v126 = (struct _DMA_ADAPTER *)v158;
            if ( result < 0 )
              return result;
          }
          else
          {
            v126 = (struct _DMA_ADAPTER *)Process;
          }
          CpuSetInformation = PsWow64GetSupportedArchitectures((_DWORD *)a4, Length, &Size, (__int64)v126);
LABEL_583:
          BootGraphicsInformation = CpuSetInformation;
          if ( v126 )
            HalPutDmaAdapter(v126);
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
          SystemBasicInformation = WbDispatchOperation((char *)a4, Length);
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
            BootGraphicsInformation = ExpGetSystemFlushInformation(a4);
            Size = 32;
            goto LABEL_641;
          }
          if ( a6 )
            *a6 = 32;
          return -1073741820;
        case 0xC1u:
          v101 = 8 * KeQueryActiveGroupCount();
          Size = v101;
          if ( Length >= v101 )
          {
            memset((void *)a4, 0, v101);
            v137 = 0;
            while ( v8 < (unsigned __int16)KeNumberNodes )
            {
              v102 = KeNodeBlock[v8];
              v135 = *(_WORD *)(v102 + 144);
              *(_QWORD *)(a4 + 8LL * v135) |= *(_QWORD *)(v102 + 24);
              v8 = ++v137;
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
            v131 = qword_140C4DE88;
            *(_QWORD *)a4 = 0LL;
            *(_QWORD *)a4 = v131;
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
            *(_QWORD *)v141 = PoolWithQuotaTag;
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
            *(_QWORD *)v141 = a4;
          }
          v130 = ((__int64 (__fastcall *)(__int64, _QWORD, _DWORD *, unsigned int *))off_140C00A68[0])(
                   34LL,
                   v47,
                   PoolWithQuotaTag,
                   &Size);
          BootGraphicsInformation = v130;
          if ( v9 )
          {
            if ( v130 >= 0 )
LABEL_429:
              memmove((void *)a4, PoolWithQuotaTag, Size);
LABEL_430:
            ExFreePoolWithTag(PoolWithQuotaTag, 0x6F666E49u);
          }
          goto LABEL_641;
        case 0xC8u:
          SystemBasicInformation = IoQuerySystemDeviceName(200);
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
          v154 = 0;
          BootGraphicsInformation = ((__int64 (__fastcall *)(__int64, __int64, _OWORD *, int *))off_140C00A68[0])(
                                      47LL,
                                      1LL,
                                      Src,
                                      &v154);
          if ( BootGraphicsInformation >= 0 && v154 == 1 )
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
          SystemBasicInformation = CmQuerySingleFeatureConfiguration(v141[0], v20, a4, Length, (__int64)&Size);
          goto LABEL_640;
        case 0xD3u:
          SystemBasicInformation = CmQueryFeatureConfigurationSections(
                                     *(__int128 **)v141,
                                     v20,
                                     (_OWORD *)a4,
                                     Length,
                                     &Size,
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
          if ( !PsIsCurrentThreadInServerSilo(0x140000000LL, v20) )
          {
            *(_DWORD *)a4 ^= (*(_DWORD *)a4 ^ KeIsCetCapable()) & 1;
            IsUserCetAllowed = KeIsUserCetAllowed();
            *(_DWORD *)a4 = v123 ^ ((unsigned __int8)v123 ^ (unsigned __int8)(2 * IsUserCetAllowed)) & 2;
            IsKTMCommitCoordinator = ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator();
            *(_DWORD *)a4 = v125 ^ ((unsigned __int16)v125 ^ (unsigned __int16)(IsKTMCommitCoordinator << 8)) & 0x100;
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
      v20 = (unsigned int)v139;
      if ( v139 != 8 )
        return -1073741811;
      Handle = **(HANDLE **)v141;
      goto LABEL_35;
    case 0xB2u:
      v20 = (unsigned int)v139;
      if ( v139 != 8 )
        return -1073741811;
      v168 = **(_QWORD **)v141;
      goto LABEL_35;
    default:
      goto LABEL_34;
  }
}
