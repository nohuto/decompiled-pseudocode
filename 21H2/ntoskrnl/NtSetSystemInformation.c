/*
 * XREFs of NtSetSystemInformation @ 0x1406B1660
 * Callers:
 *     WmipRegisterFirmwareProviders @ 0x140A74644 (WmipRegisterFirmwareProviders.c)
 * Callees:
 *     KeSetSystemAllowedCpuSets @ 0x140228DBC (KeSetSystemAllowedCpuSets.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x14023B914 (ExCpuSetResourceManagerAccessCheck.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14023C7DC (MmAdjustWorkingSetSizeEx.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeQueryActiveProcessorCountEx @ 0x1402695B0 (KeQueryActiveProcessorCountEx.c)
 *     RtlImageDirectoryEntryToData @ 0x140286140 (RtlImageDirectoryEntryToData.c)
 *     ExpUpdateTimerConfiguration @ 0x14029C250 (ExpUpdateTimerConfiguration.c)
 *     KeSetActualBasePriorityThread @ 0x1402D4E00 (KeSetActualBasePriorityThread.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     RtlImageNtHeader @ 0x1403276A0 (RtlImageNtHeader.c)
 *     PsGetCurrentProcess @ 0x140346350 (PsGetCurrentProcess.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     KeEnterCriticalRegion @ 0x14035BF60 (KeEnterCriticalRegion.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14035BF80 (PsIsCurrentThreadInServerSilo.c)
 *     IoConfigureCrashDump @ 0x1403C0230 (IoConfigureCrashDump.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memcmp @ 0x1403D2B50 (memcmp.c)
 *     ZwLoadDriver @ 0x1403FC640 (ZwLoadDriver.c)
 *     ZwSetSystemInformation @ 0x1403FDB00 (ZwSetSystemInformation.c)
 *     ZwUnloadDriver @ 0x1403FDE80 (ZwUnloadDriver.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     VslProvisionDumpEncryption @ 0x1404FCFD4 (VslProvisionDumpEncryption.c)
 *     KdUpdateTimeSlipEvent @ 0x14051147C (KdUpdateTimeSlipEvent.c)
 *     KeProcessorProfileControlArea @ 0x14051450C (KeProcessorProfileControlArea.c)
 *     KeSetTagCpuSets @ 0x14051D1EC (KeSetTagCpuSets.c)
 *     KeIntSteerAssignCpuSetForGsiv @ 0x14052285C (KeIntSteerAssignCpuSetForGsiv.c)
 *     PsSetCpuQuotaInformation @ 0x140581248 (PsSetCpuQuotaInformation.c)
 *     PsSetExeModerationState @ 0x14058167C (PsSetExeModerationState.c)
 *     ExpSetSoftRebootFlags @ 0x1405B23A8 (ExpSetSoftRebootFlags.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x140607154 (KeSynchronizeWithDynamicProcessors.c)
 *     SmSetStoreInformation @ 0x14061D784 (SmSetStoreInformation.c)
 *     ExHandleSPCall2 @ 0x1406442C0 (ExHandleSPCall2.c)
 *     PsInvokeWin32Callout @ 0x140684DA0 (PsInvokeWin32Callout.c)
 *     PsLookupProcessThreadByCid @ 0x14068F940 (PsLookupProcessThreadByCid.c)
 *     SeSinglePrivilegeCheck @ 0x140693750 (SeSinglePrivilegeCheck.c)
 *     ExReleaseTimeRefreshLock @ 0x1406B2FD0 (ExReleaseTimeRefreshLock.c)
 *     ExAcquireTimeRefreshLock @ 0x1406B2FF4 (ExAcquireTimeRefreshLock.c)
 *     PfSetSuperfetchInformation @ 0x1406B3034 (PfSetSuperfetchInformation.c)
 *     PfSnSetPrefetcherInformation @ 0x1406B364C (PfSnSetPrefetcherInformation.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     MmCombineIdenticalPages @ 0x140726B10 (MmCombineIdenticalPages.c)
 *     MmLoadSystemImage @ 0x14075BC80 (MmLoadSystemImage.c)
 *     MmLoadSystemImageEx @ 0x14075BCBC (MmLoadSystemImageEx.c)
 *     MmUnloadSystemImage @ 0x140772310 (MmUnloadSystemImage.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     PsChangeQuantumTable @ 0x14078C978 (PsChangeQuantumTable.c)
 *     MmIssueMemoryListCommand @ 0x14078D0E4 (MmIssueMemoryListCommand.c)
 *     ExpInitializeSessionDriver @ 0x14078E37C (ExpInitializeSessionDriver.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x1407CB7C8 (ExpRegisterFirmwareTableInformationHandler.c)
 *     KeInitializeEntropySystem @ 0x1407D22E4 (KeInitializeEntropySystem.c)
 *     WheaCrashDumpInitializationComplete @ 0x1407D4634 (WheaCrashDumpInitializationComplete.c)
 *     ExSystemExceptionFilter @ 0x1407D5080 (ExSystemExceptionFilter.c)
 *     CmUpdateFeatureConfiguration @ 0x14086B490 (CmUpdateFeatureConfiguration.c)
 *     CmUpdateFeatureUsageSubscription @ 0x14086B628 (CmUpdateFeatureUsageSubscription.c)
 *     CmSetRegistryQuotaInformation @ 0x14086B7AC (CmSetRegistryQuotaInformation.c)
 *     CmReconcileAndValidateAllHives @ 0x140872700 (CmReconcileAndValidateAllHives.c)
 *     DbgkRegisterErrorPort @ 0x140886BA4 (DbgkRegisterErrorPort.c)
 *     HvlSetEnlightenmentInfo @ 0x14088E710 (HvlSetEnlightenmentInfo.c)
 *     VslRelaxQuotas @ 0x1408902DC (VslRelaxQuotas.c)
 *     MmAddVerifierThunks @ 0x1408C6710 (MmAddVerifierThunks.c)
 *     MmCreateMirror @ 0x1408C7470 (MmCreateMirror.c)
 *     MmScrubMemory @ 0x1408DC27C (MmScrubMemory.c)
 *     ObSetRefTraceInformation @ 0x1408DE42C (ObSetRefTraceInformation.c)
 *     SeCodeIntegritySetInformation @ 0x14091BFB8 (SeCodeIntegritySetInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x140938730 (EtwSetPerformanceTraceInformation.c)
 *     ExpQueryElamCertInfo @ 0x14094AAA8 (ExpQueryElamCertInfo.c)
 *     ExpSetProcessorMicrocodeUpdateInformation @ 0x14094B4E4 (ExpSetProcessorMicrocodeUpdateInformation.c)
 *     ExpSetTimeZoneInformation @ 0x14094B54C (ExpSetTimeZoneInformation.c)
 *     ExpUpdateComPlusPackage @ 0x14094B93C (ExpUpdateComPlusPackage.c)
 *     ExSetLeapSecondEnabled @ 0x14094B9E8 (ExSetLeapSecondEnabled.c)
 *     ExpCapabilityCheck @ 0x14094F704 (ExpCapabilityCheck.c)
 *     ExpCovResetInformation @ 0x140958234 (ExpCovResetInformation.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 *     VfFreeCapturedUnicodeString @ 0x1409C6FBC (VfFreeCapturedUnicodeString.c)
 *     VfProbeAndCaptureUnicodeString @ 0x1409C7184 (VfProbeAndCaptureUnicodeString.c)
 *     VfProbeAndCaptureUnicodeStringBuffer @ 0x1409C71BC (VfProbeAndCaptureUnicodeStringBuffer.c)
 *     VfFaultsSetParameters @ 0x1409DD9C8 (VfFaultsSetParameters.c)
 *     VfAddVerifierEntry @ 0x1409ED9D8 (VfAddVerifierEntry.c)
 *     VfRemoveVerifierEntry @ 0x1409EDBC4 (VfRemoveVerifierEntry.c)
 *     VfSetVerifierInformation @ 0x1409EDBEC (VfSetVerifierInformation.c)
 *     VfSetVerifierInformationEx @ 0x1409EDCF4 (VfSetVerifierInformationEx.c)
 *     BgkSetBootGraphicsInformation @ 0x1409F74C4 (BgkSetBootGraphicsInformation.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl NtSetSystemInformation(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID SystemInformation,
        ULONG SystemInformationLength)
{
  size_t v3; // r15
  unsigned __int64 v4; // rsi
  SYSTEM_INFORMATION_CLASS v5; // r14d
  __int64 v6; // rdi
  int v7; // r13d
  __int64 v8; // r9
  KPROCESSOR_MODE PreviousMode; // r12
  __int64 v10; // rax
  NTSTATUS updated; // ebx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  int v18; // ecx
  int v19; // ecx
  __int64 v20; // rcx
  char v21; // cl
  unsigned __int64 v22; // r9
  ULONG ActiveProcessorCount; // eax
  __int64 *v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rcx
  PVOID v27; // rcx
  NTSTATUS result; // eax
  __int32 v29; // r14d
  NTSTATUS v30; // eax
  char *v31; // rcx
  __int64 v32; // rcx
  PIMAGE_NT_HEADERS v33; // rax
  __int32 v34; // r14d
  __int32 v35; // r14d
  __int32 v36; // r14d
  int SystemImage; // eax
  PVOID v38; // rdi
  PIMAGE_NT_HEADERS v39; // rax
  char *v40; // rdx
  int v41; // ebx
  __int64 v42; // rcx
  __int64 v43; // rsi
  PADAPTER_OBJECT v44; // r14
  struct _DMA_ADAPTER *v45; // rcx
  __int32 v46; // r14d
  __int32 v47; // r14d
  __int32 v48; // r14d
  int v49; // r14d
  int v50; // r14d
  int v51; // r14d
  int v52; // r14d
  unsigned int v53; // ebx
  bool v54; // zf
  unsigned __int64 v55; // rcx
  __int16 v56; // ax
  __int64 v57; // rax
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // r8
  __int64 v61; // r9
  __int32 v62; // r14d
  __int32 v63; // r14d
  __int32 v64; // r14d
  int v65; // r14d
  int v66; // r14d
  int v67; // r14d
  int v68; // r14d
  int v69; // r14d
  __int64 v70; // rcx
  __int32 v71; // r14d
  __int32 v72; // r14d
  __int32 v73; // r14d
  int v74; // r14d
  int v75; // r14d
  int v76; // r14d
  int v77; // r14d
  int v78; // r14d
  int v79; // r15d
  char v80; // bl
  __m128i v81; // xmm1
  unsigned __int16 v82; // bx
  char *v83; // rcx
  PVOID PoolWithTag; // rax
  PVOID v85; // r15
  __int64 v86; // rcx
  struct _DMA_ADAPTER *v87; // rdi
  _KPROCESS *CurrentProcess; // rdi
  ULONG v89; // r15d
  __int64 v90; // r14
  unsigned int v91; // r15d
  int v92; // r8d
  char *v93; // rdx
  __int64 v94; // rcx
  ULONG v95; // r15d
  unsigned __int64 v96; // r14
  bool v97; // [rsp+30h] [rbp-358h] BYREF
  char v98[3]; // [rsp+31h] [rbp-357h] BYREF
  unsigned int SessionId; // [rsp+34h] [rbp-354h] BYREF
  PVOID BaseOfImage; // [rsp+40h] [rbp-348h] BYREF
  void *Buf1[2]; // [rsp+48h] [rbp-340h] BYREF
  unsigned __int64 v102; // [rsp+58h] [rbp-330h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-328h] BYREF
  LUID PrivilegeValue; // [rsp+68h] [rbp-320h] BYREF
  int v105; // [rsp+70h] [rbp-318h]
  PVOID Object; // [rsp+78h] [rbp-310h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+80h] [rbp-308h] BYREF
  __int64 v108; // [rsp+88h] [rbp-300h] BYREF
  PVOID v109; // [rsp+90h] [rbp-2F8h] BYREF
  UNICODE_STRING DriverServiceName; // [rsp+98h] [rbp-2F0h] BYREF
  int v111; // [rsp+A8h] [rbp-2E0h]
  int v112; // [rsp+ACh] [rbp-2DCh]
  ULONG Size; // [rsp+B0h] [rbp-2D8h] BYREF
  int v114; // [rsp+B4h] [rbp-2D4h]
  int v115; // [rsp+BCh] [rbp-2CCh]
  HANDLE v116; // [rsp+C0h] [rbp-2C8h]
  HANDLE v117; // [rsp+F8h] [rbp-290h]
  unsigned __int64 v118; // [rsp+100h] [rbp-288h]
  __int128 v119; // [rsp+110h] [rbp-278h] BYREF
  void *Src[2]; // [rsp+120h] [rbp-268h]
  __int128 v121; // [rsp+130h] [rbp-258h] BYREF
  __int128 v122; // [rsp+140h] [rbp-248h] BYREF
  __int128 v123; // [rsp+150h] [rbp-238h]
  char v124[160]; // [rsp+160h] [rbp-228h] BYREF
  _BYTE v125[160]; // [rsp+200h] [rbp-188h] BYREF
  _BYTE v126[160]; // [rsp+2A0h] [rbp-E8h] BYREF

  v3 = SystemInformationLength;
  v4 = (unsigned __int64)SystemInformation;
  v5 = SystemInformationClass;
  v6 = 0LL;
  v97 = 0;
  *(_OWORD *)Buf1 = 0LL;
  BaseOfImage = 0LL;
  v7 = 1;
  v8 = 1LL;
  PrivilegeValue = 0LL;
  v108 = 0LL;
  BugCheckParameter2 = 0LL;
  DmaAdapter = 0LL;
  v102 = 0LL;
  v121 = 0LL;
  v122 = 0LL;
  v123 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v10 = 1LL;
    if ( SystemInformationClass != SystemErrorPortInformation )
      v10 = 3LL;
    if ( SystemInformationLength )
    {
      if ( ((unsigned __int64)SystemInformation & v10) != 0 )
        ExRaiseDatatypeMisalignment();
      *(_QWORD *)&SystemInformationClass = (char *)SystemInformation + SystemInformationLength;
      if ( *(_QWORD *)&SystemInformationClass > 0x7FFFFFFF0000uLL
        || *(_QWORD *)&SystemInformationClass < (unsigned __int64)SystemInformation )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
  }
  updated = 0;
  if ( v5 > SystemVerifierFaultsInformation )
  {
    if ( v5 <= SystemHypervisorDetailInformation )
    {
      if ( v5 == SystemHypervisorDetailInformation )
        return -1073741637;
      if ( v5 > SystemProcessorProfileControlArea )
      {
        v71 = v5 - 130;
        if ( !v71 )
        {
          if ( ((SystemInformationLength - 16) & 0xFFFFFFE7) == 0 && SystemInformationLength != 40 )
          {
            if ( SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
            {
              memmove(&v121, (const void *)v4, v3);
              if ( (_DWORD)v3 == 32 )
                v6 = *((_QWORD *)&v122 + 1);
              updated = MmCombineIdenticalPages(v121, (unsigned int)v122, v6, &v108);
              SessionId = updated;
              *(_QWORD *)(v4 + 8) = v108;
              return updated;
            }
            return -1073741727;
          }
          return -1073741820;
        }
        v72 = v71 - 1;
        if ( !v72 )
        {
          if ( PreviousMode )
            return -1073741790;
          if ( SystemInformationLength == 24 )
            return KeInitializeEntropySystem(
                     *(_QWORD *)SystemInformation,
                     *((_QWORD *)SystemInformation + 1),
                     *((_QWORD *)SystemInformation + 2),
                     1LL);
          return -1073741820;
        }
        v73 = v72 - 1;
        if ( !v73 )
        {
          if ( SystemInformationLength == 4 )
          {
            *(_QWORD *)&DriverServiceName.Length = 7733364LL;
            DriverServiceName.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\condrv";
            if ( (*(_BYTE *)SystemInformation & 1) != 0 )
            {
              KeEnterCriticalRegion();
              ExAcquirePushLockExclusiveEx((ULONG_PTR)&ExpConDrvLoadLock, 0LL);
              updated = ZwLoadDriver(&DriverServiceName);
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpConDrvLoadLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock(&ExpConDrvLoadLock);
              KeAbPostRelease((ULONG_PTR)&ExpConDrvLoadLock);
              KeLeaveCriticalRegion();
              return updated;
            }
            if ( SeSinglePrivilegeCheck(SeLoadDriverPrivilege, PreviousMode) )
              return ZwUnloadDriver(&DriverServiceName);
            return -1073741727;
          }
          return -1073741820;
        }
        v74 = v73 - 2;
        if ( !v74 )
        {
          if ( SystemInformationLength == 32 )
            return ExHandleSPCall2(*(__int64 *)&SystemInformationClass, (unsigned __int64)SystemInformation);
          return -1073741820;
        }
        v75 = v74 - 8;
        if ( v75 )
        {
          v76 = v75 - 8;
          if ( !v76 )
          {
            if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
              return -1073741727;
            if ( !(_DWORD)v3 )
            {
              if ( ExBootLoaderMetadata )
                _InterlockedExchange((volatile __int32 *)ExBootLoaderMetadata, 0);
              return updated;
            }
            return -1073741820;
          }
          v77 = v76 - 1;
          if ( !v77 )
          {
            PrivilegeValue = (LUID)19LL;
            if ( !SeSinglePrivilegeCheck((LUID)19LL, PreviousMode) )
              return -1073741727;
            v79 = v3 - 1;
            if ( v79 )
            {
              if ( v79 != 3 )
                return -1073741820;
              v7 = *(_DWORD *)v4;
              v115 = *(_DWORD *)v4;
            }
            else
            {
              v80 = *(_BYTE *)v4;
              if ( *(_BYTE *)v4 && !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                return -1073741727;
              if ( !v80 )
                v7 = 5;
            }
            return ExpSetSoftRebootFlags(v7);
          }
          v78 = v77 - 1;
          if ( !v78 )
          {
            if ( SystemInformationLength == 8 )
            {
              if ( PreviousMode )
                return ExpQueryElamCertInfo(
                         *(_QWORD *)SystemInformation,
                         SystemInformation,
                         SystemInformationLength,
                         1LL);
              return -1073741811;
            }
            return -1073741820;
          }
          if ( v78 == 3 )
            return CmReconcileAndValidateAllHives(
                     *(_QWORD *)&SystemInformationClass,
                     SystemInformation,
                     SystemInformationLength,
                     1LL);
          return -1073741821;
        }
        if ( SystemInformationLength != 48 )
          return -1073741820;
        if ( !SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode) )
          return -1073741727;
        if ( CriticalProcessExceptionData )
          return 0;
        v121 = *(_OWORD *)v4;
        v81 = *(__m128i *)(v4 + 16);
        v123 = *(_OWORD *)(v4 + 32);
        *(__m128i *)Src = v81;
        v122 = 0LL;
        v82 = _mm_cvtsi128_si32(v81);
        if ( v82 && (v82 & 1) == 0 )
        {
          if ( ((__int64)Src[1] & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v83 = (char *)Src[1] + v82;
          if ( (unsigned __int64)v83 > 0x7FFFFFFF0000LL || v83 < Src[1] )
            MEMORY[0x7FFFFFFF0000] = 0;
          PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)9, v82, 0x50535845u);
          v85 = PoolWithTag;
          if ( PoolWithTag )
          {
            memmove(PoolWithTag, Src[1], v82);
            *((_QWORD *)&v122 + 1) = v85;
            LOWORD(v122) = v82;
            WORD1(v122) = v82;
          }
        }
        *(_OWORD *)&CriticalProcessExceptionData = v121;
        xmmword_140C19770 = v122;
        xmmword_140C19780 = v123;
        return 0;
      }
      if ( v5 == SystemProcessorProfileControlArea )
        return KeProcessorProfileControlArea((__int64)SystemInformation, SystemInformationLength, PreviousMode);
      v62 = v5 - 102;
      if ( v62 )
      {
        v63 = v62 - 2;
        if ( !v63 )
        {
          LOBYTE(SystemInformationLength) = PreviousMode;
          return ExpSetProcessorMicrocodeUpdateInformation(
                   SystemInformation,
                   (unsigned int)v3,
                   SystemInformationLength,
                   1LL);
        }
        v64 = v63 - 2;
        if ( !v64 )
          return -1073741821;
        v65 = v64 - 3;
        if ( !v65 )
          return SmSetStoreInformation(
                   *(__int64 *)&SystemInformationClass,
                   (__int128 *)SystemInformation,
                   SystemInformationLength,
                   PreviousMode);
        v66 = v65 - 1;
        if ( !v66 )
          return -1073741822;
        v67 = v66 - 1;
        if ( !v67 )
        {
          if ( SystemInformationLength != 4 )
            return -1073741820;
          if ( !SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
            return -1073741790;
          MEMORY[0xFFFFF78000000248] = *(_DWORD *)v4;
          return 0;
        }
        v68 = v67 - 2;
        if ( !v68 )
          return PsSetCpuQuotaInformation((unsigned __int64)SystemInformation, SystemInformationLength, PreviousMode);
        v69 = v68 - 13;
        if ( !v69 )
        {
          if ( PreviousMode )
            return -1073741727;
          if ( SystemInformationLength == 32 )
            return BgkSetBootGraphicsInformation(*(_QWORD *)&SystemInformationClass, SystemInformation, 32, 1LL);
          return -1073741820;
        }
        if ( v69 != 1 )
          return -1073741821;
        if ( SystemInformationLength != 16 )
          return -1073741820;
        if ( !SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
          return -1073741727;
        v116 = *(HANDLE *)v4;
        updated = MmScrubMemory(v70, v116, &PrivilegeValue);
        SessionId = updated;
        *(LUID *)(v4 + 8) = PrivilegeValue;
        return updated;
      }
      v53 = 432;
      if ( SystemInformationLength != 432 )
        return -1073741820;
      if ( !PreviousMode || (unsigned __int8)ExpCapabilityCheck((PUNICODE_STRING)&TimeZoneCapability) )
        return ExpSetTimeZoneInformation(v4, v53);
      v54 = SeSinglePrivilegeCheck(SeTimeZonePrivilege, PreviousMode) == 0;
LABEL_220:
      if ( v54 )
        return -1073741727;
      return ExpSetTimeZoneInformation(v4, v53);
    }
    if ( v5 > SystemSecureDumpEncryptionInformation )
    {
      if ( v5 == SystemCodeIntegrityVerificationInformation )
        return SeCodeIntegritySetInformation((unsigned int)v5, SystemInformation, SystemInformationLength, 1LL);
      if ( v5 != SystemWorkloadAllowedCpuSetsInformation )
      {
        v94 = (unsigned int)(v5 - 206);
        switch ( v5 )
        {
          case SystemLeapSecondInformation:
            if ( SystemInformationLength != 8 )
              return -1073741820;
            if ( PreviousMode && !SeSinglePrivilegeCheck(SeSystemtimePrivilege, PreviousMode) )
              return -1073741727;
            if ( PsIsCurrentThreadInServerSilo(v94, (__int64)SystemInformation) )
              return -1073741790;
            v97 = (unsigned __int8)*(_QWORD *)v4 != 0;
            result = ExSetLeapSecondEnabled();
            updated = result;
            if ( result >= 0 )
            {
              *(_BYTE *)ExLeapSecondData = v97;
              return updated;
            }
            return result;
          case SystemFlags2Information:
            if ( SystemInformationLength == 4 )
            {
              if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
              {
                v105 = 0;
                NtGlobalFlag2 = *(_DWORD *)v4;
                *(_DWORD *)v4 = NtGlobalFlag2;
                return updated;
              }
              return -1073741790;
            }
            return -1073741820;
          case SystemFeatureConfigurationInformation:
            return CmUpdateFeatureConfiguration(SystemInformation, SystemInformationLength, PreviousMode);
          case SystemFeatureUsageSubscriptionInformation:
            return CmUpdateFeatureUsageSubscription(SystemInformation, SystemInformationLength, PreviousMode);
        }
        if ( (unsigned int)(v5 - 224) > 1 )
          return -1073741821;
        return SeCodeIntegritySetInformation((unsigned int)v5, SystemInformation, SystemInformationLength, 1LL);
      }
      if ( SystemInformationLength < 8 )
        return -1073741820;
      v95 = SystemInformationLength - 8;
      if ( (((_BYTE)SystemInformationLength - 8) & 7) != 0 || v95 > 0xA0 )
        return -1073741820;
      v96 = *(_QWORD *)SystemInformation;
      memmove(v126, (char *)SystemInformation + 8, v95);
      if ( v96 >= 2 )
        return -1073741811;
      updated = ExCpuSetResourceManagerAccessCheck(PreviousMode);
      if ( updated < 0 )
        return updated;
      v91 = v95 >> 3;
      v92 = v96;
      v93 = v126;
    }
    else
    {
      switch ( v5 )
      {
        case SystemSecureDumpEncryptionInformation:
          if ( !SystemInformationLength )
          {
            if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
              return VslProvisionDumpEncryption();
            return -1073741727;
          }
          return -1073741811;
        case SystemVmGenerationCountInformation:
          if ( PreviousMode )
            return -1073741790;
          if ( SystemInformationLength == 8 )
            return KdInitialize(3LL, SystemInformation, &KdpContext, 1LL);
          return -1073741820;
        case SystemCodeIntegrityPolicyInformation:
          return SeCodeIntegritySetInformation((unsigned int)v5, SystemInformation, SystemInformationLength, 1LL);
      }
      if ( v5 != SystemAllowedCpuSetsInformation )
      {
        switch ( v5 )
        {
          case SystemInterruptCpuSetsInformation:
            if ( SystemInformationLength == 16 )
            {
              if ( SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, PreviousMode) )
                return KeIntSteerAssignCpuSetForGsiv(*(_OWORD *)v4, WORD2(*(_QWORD *)v4), *(_QWORD *)(v4 + 8));
              return -1073741727;
            }
            return -1073741820;
          case SystemCpuSetTagInformation:
            if ( SystemInformationLength < 8 )
              return -1073741820;
            v89 = SystemInformationLength - 8;
            if ( (((_BYTE)SystemInformationLength - 8) & 7) != 0 || v89 > 0xA0 )
              return -1073741820;
            v90 = *(_QWORD *)SystemInformation;
            v118 = *(_QWORD *)SystemInformation;
            memmove(v124, (char *)SystemInformation + 8, v89);
            updated = ExCpuSetResourceManagerAccessCheck(PreviousMode);
            if ( updated >= 0 )
              return KeSetTagCpuSets(v89 >> 3, v124, v90);
            return updated;
          case SystemWin32WerStartCallout:
            if ( SystemInformationLength == 8 )
            {
              if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                return -1073741727;
              v117 = *(HANDLE *)v4;
              v109 = 0LL;
              updated = ObReferenceObjectByHandle(v117, 0x1000u, (POBJECT_TYPE)PsProcessType, PreviousMode, &v109, 0LL);
              if ( updated >= 0 )
              {
                v87 = (struct _DMA_ADAPTER *)v109;
                SessionId = MmGetSessionIdEx((__int64)v109);
                if ( SessionId != -1 )
                  updated = PsInvokeWin32Callout(32, (__int64)v87, 1, &SessionId);
                v45 = v87;
                goto LABEL_199;
              }
            }
            else
            {
              if ( SystemInformationLength )
                return -1073741820;
              updated = 0;
              CurrentProcess = PsGetCurrentProcess();
              SessionId = MmGetSessionIdEx((__int64)CurrentProcess);
              if ( SessionId != -1 )
                return PsInvokeWin32Callout(32, (__int64)CurrentProcess, 1, &SessionId);
            }
            return updated;
          case SystemActivityModerationExeState:
            if ( SystemInformationLength != 24 )
              return -1073741820;
            v121 = *(_OWORD *)SystemInformation;
            *(_QWORD *)&v122 = *((_QWORD *)SystemInformation + 2);
            result = VfProbeAndCaptureUnicodeStringBuffer(&v121, 1LL, 24, 1LL);
            if ( result < 0 )
              return result;
            updated = PsSetExeModerationState((__int64)&v121, v122, DWORD1(v122));
            v31 = (char *)&v121;
            goto LABEL_101;
        }
        v86 = (unsigned int)(v5 - 190);
        if ( v5 != SystemCodeIntegrityUnlockInformation )
        {
          if ( v5 != SystemIntegrityQuotaInformation )
            return -1073741821;
          if ( !SystemInformationLength )
          {
            if ( !PreviousMode || SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
              return VslRelaxQuotas(v86, SystemInformation, *(_QWORD *)&SystemInformationLength, v8);
            return -1073741727;
          }
          return -1073741811;
        }
        return SeCodeIntegritySetInformation((unsigned int)v5, SystemInformation, SystemInformationLength, 1LL);
      }
      if ( (SystemInformationLength & 7) != 0 || SystemInformationLength > 0xA0 )
        return -1073741820;
      memmove(v125, SystemInformation, SystemInformationLength);
      result = ExCpuSetResourceManagerAccessCheck(PreviousMode);
      if ( result < 0 )
        return result;
      v91 = (unsigned int)v3 >> 3;
      v92 = 0;
      v93 = v125;
    }
    return KeSetSystemAllowedCpuSets(v91, v93, v92);
  }
  if ( v5 == SystemVerifierFaultsInformation )
  {
    if ( SystemInformationLength != 40 )
      return -1073741820;
    if ( PreviousMode )
    {
      if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
        return -1073741727;
      v121 = *(_OWORD *)v4;
      v122 = *(_OWORD *)(v4 + 16);
      *(_QWORD *)&v123 = *(_QWORD *)(v4 + 32);
      result = VfProbeAndCaptureUnicodeStringBuffer((char *)&v121 + 8, 1LL, v58, v59);
      if ( result < 0 )
        return result;
      updated = VfProbeAndCaptureUnicodeStringBuffer((char *)&v122 + 8, 1LL, v60, v61);
      if ( updated < 0 )
      {
        v31 = (char *)&v121 + 8;
        goto LABEL_101;
      }
      v4 = (unsigned __int64)&v121;
    }
    updated = VfFaultsSetParameters(v4, SystemInformation, *(_QWORD *)&SystemInformationLength, v8);
    if ( !PreviousMode )
      return updated;
    VfFreeCapturedUnicodeString(v4 + 8);
    v31 = (char *)(v4 + 24);
    goto LABEL_101;
  }
  if ( v5 > SystemPrefetcherInformation )
  {
    if ( v5 <= SystemThreadPriorityClientIdInformation )
    {
      if ( v5 != SystemThreadPriorityClientIdInformation )
      {
        if ( v5 == SystemComPlusPackage )
        {
          if ( SystemInformationLength == 4 )
          {
            v43 = *(unsigned int *)SystemInformation;
            updated = ExpUpdateComPlusPackage(v43, SystemInformation, 4, 1LL);
            if ( updated >= 0 )
              MEMORY[0xFFFFF780000002E0] = v43;
            return updated;
          }
          return -1073741820;
        }
        if ( v5 != SystemHotpatchInformation )
        {
          if ( v5 == SystemWatchdogTimerHandler )
            return -1073741637;
          if ( v5 != SystemWatchdogTimerInformation )
          {
            if ( v5 != SystemWow64SharedInformationObsolete )
            {
              switch ( v5 )
              {
                case SystemRegisterFirmwareTableInformationHandler:
                  LOBYTE(SystemInformationLength) = PreviousMode;
                  return ExpRegisterFirmwareTableInformationHandler(
                           SystemInformation,
                           (unsigned int)v3,
                           SystemInformationLength,
                           1LL);
                case SystemSuperfetchInformation:
                  LOBYTE(v8) = PreviousMode;
                  return PfSetSuperfetchInformation(0LL, SystemInformation, SystemInformationLength, v8);
                case SystemMemoryListInformation:
                  LOBYTE(SystemInformationLength) = PreviousMode;
                  return MmIssueMemoryListCommand(SystemInformation, (unsigned int)v3, SystemInformationLength, 1LL);
                case SystemFileCacheInformationEx:
                  goto LABEL_154;
              }
              return -1073741821;
            }
            return -1073741822;
          }
          if ( PreviousMode || !SystemInformation || SystemInformationLength != 8 )
            return -1073741811;
          if ( *(_DWORD *)SystemInformation )
          {
            switch ( *(_DWORD *)SystemInformation )
            {
              case 1:
                ((void (__fastcall *)(_QWORD, PVOID, ULONG, __int64))off_140C008C0[0])(
                  (unsigned int)(*(_DWORD *)SystemInformation - 1),
                  SystemInformation,
                  SystemInformationLength,
                  1LL);
                return 0;
              case 2:
                ((void (__fastcall *)(_QWORD, PVOID, ULONG, __int64))off_140C008C8[0])(
                  (unsigned int)(*(_DWORD *)SystemInformation - 2),
                  SystemInformation,
                  SystemInformationLength,
                  1LL);
                return 0;
              case 3:
                ((void (__fastcall *)(_QWORD, PVOID, ULONG, __int64))off_140C008B8[0])(
                  (unsigned int)(*(_DWORD *)SystemInformation - 3),
                  SystemInformation,
                  SystemInformationLength,
                  1LL);
                return 0;
            }
            if ( *(_DWORD *)SystemInformation != 4 )
            {
              v42 = (unsigned int)(*(_DWORD *)SystemInformation - 6);
              if ( *(_DWORD *)SystemInformation == 6 )
              {
                LODWORD(v42) = 1;
                return ((__int64 (__fastcall *)(__int64, PVOID, ULONG, __int64))off_140C008D8[0])(
                         v42,
                         SystemInformation,
                         SystemInformationLength,
                         1LL);
              }
              if ( *(_DWORD *)SystemInformation == 7 )
              {
                updated = 0;
                if ( off_140C008D8[0] == xKdEnumerateDebuggingDevices )
                  return -1073741822;
                return updated;
              }
              return -1073741811;
            }
          }
        }
        return -1073741637;
      }
      if ( SystemInformationLength < 0x18 )
        return -1073741820;
      if ( !SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, PreviousMode) )
        return -1073741727;
      if ( PreviousMode )
      {
        v121 = *(_OWORD *)v4;
        *(_QWORD *)&v122 = *(_QWORD *)(v4 + 16);
        v4 = (unsigned __int64)&v121;
      }
      if ( (unsigned int)(*(_DWORD *)(v4 + 16) - 1) > 0x1E )
        return -1073741811;
      v119 = *(_OWORD *)v4;
      updated = PsLookupProcessThreadByCid((__int64)&v119, 0LL, &DmaAdapter);
      if ( updated >= 0 )
      {
        v44 = DmaAdapter;
        if ( *((_BYTE *)&DmaAdapter->Size + 2) )
        {
          updated = -1073741749;
        }
        else
        {
          KeSetActualBasePriorityThread((__int64)DmaAdapter, *(_DWORD *)(v4 + 16));
          updated = 259;
        }
        v45 = v44;
LABEL_199:
        HalPutDmaAdapter(v45);
        return updated;
      }
      return updated;
    }
    v46 = v5 - 86;
    if ( !v46 )
      return ObSetRefTraceInformation(SystemInformation, SystemInformationLength, SystemInformationLength, 1LL);
    v47 = v46 - 1;
    if ( !v47 )
    {
      if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
      {
        if ( (_DWORD)v3 == 8 )
        {
          v57 = *(_QWORD *)v4;
          MmSpecialPoolTag = *(_QWORD *)v4;
          MmSpecialPoolCatchOverruns = BYTE4(v57) & 1;
          return updated;
        }
        return -1073741820;
      }
      return -1073741790;
    }
    v48 = v47 - 2;
    if ( !v48 )
    {
      if ( PreviousMode == 1 )
      {
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, 1) )
          return -1073741727;
        v55 = PsGetCurrentProcess()[1].AffinityPadding[10];
        if ( !v55 )
          return DbgkRegisterErrorPort((void *)v4, (unsigned int)v3);
        v56 = *(_WORD *)(v55 + 8);
        if ( v56 != 332 && v56 != 452 )
          return DbgkRegisterErrorPort((void *)v4, (unsigned int)v3);
      }
      return -1073741637;
    }
    v49 = v48 - 2;
    if ( !v49 )
    {
      LOBYTE(v8) = PreviousMode;
      return HvlSetEnlightenmentInfo(*(_QWORD *)&SystemInformationClass, SystemInformation, SystemInformationLength, v8);
    }
    v50 = v49 - 1;
    if ( !v50 )
    {
      if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
        return -1073741790;
      if ( (_DWORD)v3 == 40 )
        return VfSetVerifierInformationEx(v4);
      return -1073741820;
    }
    v51 = v50 - 1;
    if ( v51 )
    {
      v52 = v51 - 1;
      if ( v52 )
      {
        if ( v52 == 1 )
        {
          if ( !PreviousMode || !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
            return -1073741790;
          if ( (unsigned int)v3 >= 0x18 )
            return ExpCovResetInformation(v4, (unsigned int)v3);
          return -1073741820;
        }
        return -1073741821;
      }
      if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
      {
        if ( (_DWORD)v3 == 8 )
        {
          *(_QWORD *)&v121 = *(_QWORD *)v4;
          _InterlockedOr((volatile signed __int32 *)0xFFFFF780000003A0LL, v121);
          _InterlockedAnd((volatile signed __int32 *)0xFFFFF780000003A0LL, ~DWORD1(v121));
          return updated;
        }
        return -1073741820;
      }
      return -1073741790;
    }
    v53 = 172;
    if ( SystemInformationLength != 172 )
      return -1073741820;
    if ( PreviousMode
      && !(unsigned __int8)ExpCapabilityCheck((PUNICODE_STRING)&TimeZoneCapability)
      && !SeSinglePrivilegeCheck(SeTimeZonePrivilege, PreviousMode) )
    {
      return -1073741727;
    }
    v54 = *((_BYTE *)PsGetCurrentServerSiloGlobals(*(__int64 *)&SystemInformationClass, (__int64)SystemInformation)
          + 1049) == 0;
    goto LABEL_220;
  }
  if ( v5 == SystemPrefetcherInformation )
  {
    LOBYTE(v8) = PreviousMode;
    return PfSnSetPrefetcherInformation(
             *(_QWORD *)&SystemInformationClass,
             SystemInformation,
             SystemInformationLength,
             v8);
  }
  if ( v5 <= SystemRegistryQuotaInformation )
  {
    if ( v5 == SystemRegistryQuotaInformation )
    {
      if ( SystemInformationLength == 16 )
      {
        if ( !PreviousMode || SeSinglePrivilegeCheck(SeIncreaseQuotaPrivilege, PreviousMode) )
          return CmSetRegistryQuotaInformation(v4, SystemInformation, *(_QWORD *)&SystemInformationLength, v8);
        return -1073741727;
      }
      return -1073741820;
    }
    if ( v5 != SystemFlagsInformation )
    {
      if ( v5 != SystemFileCacheInformation )
      {
        if ( v5 == SystemDpcBehaviorInformation )
        {
          if ( SystemInformationLength == 20 )
          {
            if ( !PreviousMode || SeSinglePrivilegeCheck(SeLoadDriverPrivilege, PreviousMode) )
            {
              v121 = *(_OWORD *)v4;
              LODWORD(v122) = *(_DWORD *)(v4 + 16);
              KiMinimumDpcRate = DWORD2(v121);
              KiMaximumDpcQueueDepth = DWORD1(v121);
              KiAdjustDpcThreshold = HIDWORD(v121);
              KiIdealDpcRate = v122;
              KeSynchronizeWithDynamicProcessors();
              ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
              if ( ActiveProcessorCount )
              {
                v24 = KiProcessorBlock;
                v25 = ActiveProcessorCount;
                do
                {
                  v26 = *v24;
                  *(_DWORD *)(v26 + 12568) = KiMaximumDpcQueueDepth;
                  *(_DWORD *)(v26 + 12576) = KiMinimumDpcRate;
                  ++v24;
                  --v25;
                }
                while ( v25 );
              }
              return updated;
            }
            return -1073741727;
          }
          return -1073741820;
        }
        if ( v5 != SystemLoadGdiDriverInformation )
        {
          if ( v5 != SystemUnloadGdiDriverInformation )
          {
            v12 = (unsigned int)(v5 - 28);
            if ( v5 != SystemTimeAdjustmentInformation )
            {
              if ( v5 == SystemMirrorMemoryInformation )
                return MmCreateMirror();
              v13 = (unsigned int)(v5 - 31);
              if ( v5 == SystemPerformanceTraceInformation )
                return EtwSetPerformanceTraceInformation(SystemInformation, SystemInformationLength, PreviousMode);
              if ( v5 == SystemCrashDumpStateInformation )
              {
                if ( (!PreviousMode || SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode))
                  && !PsIsCurrentThreadInServerSilo(v13, (__int64)SystemInformation) )
                {
                  if ( (_DWORD)v3 != 4 )
                    goto LABEL_28;
                  if ( PreviousMode )
                  {
                    if ( (v4 & 3) != 0 )
                      ExRaiseDatatypeMisalignment();
                    if ( v4 + 4 > 0x7FFFFFFF0000LL || v4 + 4 < v4 )
                      MEMORY[0x7FFFFFFF0000] = 0;
                    v18 = *(_DWORD *)v4;
                    v111 = *(_DWORD *)v4;
                  }
                  else
                  {
                    v18 = *(_DWORD *)v4;
                  }
                  if ( !v18 )
                  {
                    v16 = 0LL;
                    return IoConfigureCrashDump(v16, 0LL, v14, v15);
                  }
                  v19 = v18 - 1;
                  if ( !v19 )
                  {
LABEL_28:
                    v16 = 1LL;
                    return IoConfigureCrashDump(v16, 0LL, v14, v15);
                  }
                  if ( v19 == 1 )
                    return WheaCrashDumpInitializationComplete();
                  return -1073741811;
                }
                return -1073741727;
              }
              return -1073741821;
            }
            if ( ((SystemInformationLength - 8) & 0xFFFFFFF7) == 0 )
            {
              if ( PreviousMode && !SeSinglePrivilegeCheck(SeSystemtimePrivilege, PreviousMode) )
                return -1073741727;
              if ( !PsIsCurrentThreadInServerSilo(v12, (__int64)SystemInformation) )
              {
                if ( (_DWORD)v3 == 16 )
                {
                  v21 = *(_BYTE *)(v4 + 8);
                  v97 = v21;
                  v102 = *(_QWORD *)v4;
                }
                else
                {
                  v21 = *(_BYTE *)(v4 + 4);
                  v97 = v21;
                  v22 = *(unsigned int *)v4;
                  v102 = v22;
                  if ( v22 )
                    v102 = MEMORY[0xFFFFF78000000300] * (unsigned __int64)KeMaximumIncrement / v22;
                }
                if ( v21 )
                  v102 = MEMORY[0xFFFFF78000000300];
                LOBYTE(v20) = 1;
                ExAcquireTimeRefreshLock(v20);
                updated = ExpUpdateTimerConfiguration(0LL, (__int64)&v102, (__int64)&v97);
                ExReleaseTimeRefreshLock();
                return updated;
              }
              return -1073741790;
            }
            return -1073741820;
          }
          if ( SystemInformationLength != 8 )
            return -1073741820;
          if ( PreviousMode )
            return -1073741727;
          MmUnloadSystemImage(*(_QWORD *)SystemInformation);
          return 0;
        }
LABEL_132:
        if ( SystemInformationLength == 56 )
        {
          if ( !PreviousMode )
          {
            *(_OWORD *)Buf1 = *(_OWORD *)SystemInformation;
            SystemImage = MmLoadSystemImage(
                            (unsigned int)Buf1,
                            0,
                            0,
                            v8,
                            (__int64)&BugCheckParameter2,
                            (__int64)&BaseOfImage);
            updated = SystemImage;
            if ( SystemImage < 0 )
            {
              if ( SystemImage == -1073741411 )
                return -1073741554;
            }
            else
            {
              v38 = RtlImageDirectoryEntryToData(BaseOfImage, 1u, 0, &Size);
              v39 = RtlImageNtHeader(BaseOfImage);
              *(_QWORD *)(v4 + 40) = v38;
              v40 = (char *)BaseOfImage + v39->OptionalHeader.AddressOfEntryPoint;
              *(_QWORD *)(v4 + 16) = BaseOfImage;
              *(_QWORD *)(v4 + 24) = BugCheckParameter2;
              *(_QWORD *)(v4 + 32) = v40;
              *(_DWORD *)(v4 + 48) = v39->OptionalHeader.SizeOfImage;
            }
            return updated;
          }
          return -1073741727;
        }
        return -1073741820;
      }
LABEL_154:
      v98[0] = 0;
      if ( SystemInformationLength >= 0x40 )
      {
        if ( v5 == SystemFileCacheInformation )
        {
          v41 = 0;
        }
        else
        {
          v114 = *((_DWORD *)SystemInformation + 15);
          v41 = v114;
          if ( (v114 & 0xFFFFFFF0) != 0 || (v114 & 0xC) == 0xC || (v114 & 3) == 3 )
            return -1073741584;
        }
        if ( SeSinglePrivilegeCheck(SeIncreaseQuotaPrivilege, PreviousMode) )
          return MmAdjustWorkingSetSizeEx(*(_QWORD *)(v4 + 24), *(_QWORD *)(v4 + 32), 2, 1, v41, v98);
        return -1073741790;
      }
      return -1073741820;
    }
    if ( SystemInformationLength == 4 )
    {
      if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
      {
        NtGlobalFlag = *(_DWORD *)v4 ^ (NtGlobalFlag ^ *(_DWORD *)v4) & 0x6DCE640F;
        *(_DWORD *)v4 = NtGlobalFlag;
        return updated;
      }
      return -1073741790;
    }
    return -1073741820;
  }
  if ( v5 > SystemSessionCreate )
  {
    v34 = v5 - 48;
    if ( v34 )
    {
      v35 = v34 - 3;
      if ( !v35 )
      {
        if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
          return VfSetVerifierInformation(v4, (unsigned int)v3, 0LL);
        return -1073741790;
      }
      v36 = v35 - 1;
      if ( !v36 )
      {
        if ( !PreviousMode )
          return MmAddVerifierThunks(SystemInformation, SystemInformationLength);
        return -1073741727;
      }
      if ( v36 == 2 )
      {
        LODWORD(v8) = 0;
        goto LABEL_132;
      }
      return -1073741821;
    }
    return -1073741822;
  }
  if ( v5 == SystemSessionCreate )
    return -1073741822;
  if ( v5 != SystemExtendServiceTableInformation )
  {
    if ( v5 != SystemPrioritySeperation )
    {
      if ( v5 > SystemVerifierRemoveDriverInformation )
      {
        if ( v5 == SystemTimeSlipNotification )
        {
          if ( SystemInformationLength != 8 )
            return -1073741820;
          if ( PreviousMode && !SeSinglePrivilegeCheck(SeSystemtimePrivilege, PreviousMode) )
            return -1073741727;
          if ( PsIsCurrentThreadInServerSilo(*(__int64 *)&SystemInformationClass, (__int64)SystemInformation) )
            return -1073741790;
          v116 = *(HANDLE *)v4;
          if ( v116 )
          {
            Object = 0LL;
            updated = ObReferenceObjectByHandle(v116, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
            v27 = Object;
            if ( updated < 0 )
              return updated;
          }
          else
          {
            v27 = 0LL;
            updated = 0;
          }
          KdUpdateTimeSlipEvent(v27);
          return updated;
        }
        return -1073741821;
      }
      if ( SystemInformationLength != 16 )
        return -1073741820;
      if ( PreviousMode )
      {
        if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
          return -1073741727;
        result = VfProbeAndCaptureUnicodeString(Buf1, v4, 1LL);
        if ( result < 0 )
          return result;
        v4 = (unsigned __int64)Buf1;
        if ( !LOWORD(Buf1[0]) )
          return -1073741585;
      }
      v29 = v5 - 40;
      if ( v29 )
      {
        if ( v29 != 1 )
        {
          updated = -1073741821;
LABEL_99:
          if ( !PreviousMode )
            return updated;
          v31 = (char *)v4;
LABEL_101:
          VfFreeCapturedUnicodeString(v31);
          return updated;
        }
        v30 = VfRemoveVerifierEntry(v4, SystemInformation, *(_QWORD *)&SystemInformationLength, v8);
      }
      else
      {
        v30 = VfAddVerifierEntry((PCUNICODE_STRING)v4);
      }
      updated = v30;
      goto LABEL_99;
    }
    if ( SystemInformationLength != 4 )
      return -1073741820;
    if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
      return -1073741727;
    v112 = *(_DWORD *)v4;
    LOBYTE(v32) = 1;
    PsChangeQuantumTable(v32);
    return 0;
  }
  if ( SystemInformationLength != 16 )
    return -1073741820;
  if ( PreviousMode )
  {
    if ( (PsGetCurrentProcess()[1].IdealProcessorPadding[10] & 0x100) == 0
      || !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, 1) )
    {
      return -1073741727;
    }
    if ( v4 >= 0x7FFFFFFF0000LL )
      v4 = 0x7FFFFFFF0000LL;
    LODWORD(Buf1[0]) = *(_DWORD *)v4;
    Buf1[1] = *(void **)(v4 + 8);
    if ( LOWORD(Buf1[0]) == 62 )
    {
      if ( !memcmp(Buf1[1], L"\\SystemRoot\\System32\\win32k.sys", 0x3EuLL) )
      {
        Buf1[1] = L"\\SystemRoot\\System32\\win32k.sys";
        WORD1(Buf1[0]) = 62;
        return ZwSetSystemInformation(SystemExtendServiceTableInformation, Buf1, 0x10u);
      }
      else
      {
        return -1073741727;
      }
    }
    else
    {
      return -1073741727;
    }
  }
  else
  {
    *(_OWORD *)Buf1 = *(_OWORD *)SystemInformation;
    if ( !memcmp(
            (const void *)_mm_srli_si128(*(__m128i *)Buf1, 8).m128i_i64[0],
            L"\\SystemRoot\\System32\\win32k.sys",
            0x3EuLL) )
      v7 = -2147483643;
    result = MmLoadSystemImageEx((unsigned int)Buf1, 0, 0, v7, (__int64)&BugCheckParameter2, (__int64)&BaseOfImage);
    if ( result >= 0 )
    {
      v33 = RtlImageNtHeader(BaseOfImage);
      if ( !v33 )
      {
        MmUnloadSystemImage(BugCheckParameter2);
        return -1073741701;
      }
      updated = ExpInitializeSessionDriver((char *)BaseOfImage + v33->OptionalHeader.AddressOfEntryPoint);
      if ( updated < 0 )
        MmUnloadSystemImage(BugCheckParameter2);
      return updated;
    }
    if ( result == -1073741411 )
      return -1073741554;
  }
  return result;
}
