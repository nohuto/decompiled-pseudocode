/*
 * XREFs of NtSetSystemInformation @ 0x1406AA390
 * Callers:
 *     WmipRegisterFirmwareProviders @ 0x140A70214 (WmipRegisterFirmwareProviders.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140205DF0 (PsIsCurrentThreadInServerSilo.c)
 *     KeEnterCriticalRegion @ 0x140205E40 (KeEnterCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeSetActualBasePriorityThread @ 0x140213990 (KeSetActualBasePriorityThread.c)
 *     RtlImageNtHeader @ 0x140224A90 (RtlImageNtHeader.c)
 *     PsGetCurrentProcess @ 0x14023A4B0 (PsGetCurrentProcess.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14027B290 (PsGetCurrentServerSiloGlobals.c)
 *     RtlImageDirectoryEntryToData @ 0x14027C310 (RtlImageDirectoryEntryToData.c)
 *     KeQueryActiveProcessorCountEx @ 0x1402DE560 (KeQueryActiveProcessorCountEx.c)
 *     ExpUpdateTimerConfiguration @ 0x1402E2FF0 (ExpUpdateTimerConfiguration.c)
 *     KeSetSystemAllowedCpuSets @ 0x14032B394 (KeSetSystemAllowedCpuSets.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x14034A120 (ExCpuSetResourceManagerAccessCheck.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14034BC24 (MmAdjustWorkingSetSizeEx.c)
 *     IoConfigureCrashDump @ 0x1403BD130 (IoConfigureCrashDump.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memcmp @ 0x1403CF3E0 (memcmp.c)
 *     ZwLoadDriver @ 0x1403F5660 (ZwLoadDriver.c)
 *     ZwSetSystemInformation @ 0x1403F6B00 (ZwSetSystemInformation.c)
 *     ZwUnloadDriver @ 0x1403F6E80 (ZwUnloadDriver.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     VslProvisionDumpEncryption @ 0x1404F7C24 (VslProvisionDumpEncryption.c)
 *     KdUpdateTimeSlipEvent @ 0x14050BDDC (KdUpdateTimeSlipEvent.c)
 *     KeProcessorProfileControlArea @ 0x14050EE5C (KeProcessorProfileControlArea.c)
 *     KeSetTagCpuSets @ 0x140517AFC (KeSetTagCpuSets.c)
 *     KeIntSteerAssignCpuSetForGsiv @ 0x14051D16C (KeIntSteerAssignCpuSetForGsiv.c)
 *     PsSetCpuQuotaInformation @ 0x14057BBC8 (PsSetCpuQuotaInformation.c)
 *     PsSetExeModerationState @ 0x14057BFFC (PsSetExeModerationState.c)
 *     ExpSetSoftRebootFlags @ 0x1405ACC18 (ExpSetSoftRebootFlags.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     PsInvokeWin32Callout @ 0x140602AD0 (PsInvokeWin32Callout.c)
 *     SeSinglePrivilegeCheck @ 0x140667BA0 (SeSinglePrivilegeCheck.c)
 *     PfSnSetPrefetcherInformation @ 0x1406A9AB0 (PfSnSetPrefetcherInformation.c)
 *     PfSetSuperfetchInformation @ 0x1406A9D30 (PfSetSuperfetchInformation.c)
 *     ExAcquireTimeRefreshLock @ 0x1406AA348 (ExAcquireTimeRefreshLock.c)
 *     ExReleaseTimeRefreshLock @ 0x1406ABD00 (ExReleaseTimeRefreshLock.c)
 *     ExHandleSPCall2 @ 0x1406AF1B8 (ExHandleSPCall2.c)
 *     PsLookupProcessThreadByCid @ 0x1406EFCC0 (PsLookupProcessThreadByCid.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x1406F9878 (KeSynchronizeWithDynamicProcessors.c)
 *     SmSetStoreInformation @ 0x14070C394 (SmSetStoreInformation.c)
 *     MmCombineIdenticalPages @ 0x140714C04 (MmCombineIdenticalPages.c)
 *     MmLoadSystemImage @ 0x140746000 (MmLoadSystemImage.c)
 *     MmLoadSystemImageEx @ 0x14074603C (MmLoadSystemImageEx.c)
 *     MmUnloadSystemImage @ 0x14075F920 (MmUnloadSystemImage.c)
 *     ExRaiseDatatypeMisalignment @ 0x140769830 (ExRaiseDatatypeMisalignment.c)
 *     PsChangeQuantumTable @ 0x14077A3D8 (PsChangeQuantumTable.c)
 *     MmIssueMemoryListCommand @ 0x14077AB44 (MmIssueMemoryListCommand.c)
 *     ExpInitializeSessionDriver @ 0x14077BDEC (ExpInitializeSessionDriver.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x1407B8AD8 (ExpRegisterFirmwareTableInformationHandler.c)
 *     KeInitializeEntropySystem @ 0x1407BF634 (KeInitializeEntropySystem.c)
 *     WheaCrashDumpInitializationComplete @ 0x1407C1894 (WheaCrashDumpInitializationComplete.c)
 *     ExSystemExceptionFilter @ 0x1407C22E0 (ExSystemExceptionFilter.c)
 *     CmUpdateFeatureConfiguration @ 0x140867CE0 (CmUpdateFeatureConfiguration.c)
 *     CmUpdateFeatureUsageSubscription @ 0x140867E70 (CmUpdateFeatureUsageSubscription.c)
 *     CmSetRegistryQuotaInformation @ 0x140867FF0 (CmSetRegistryQuotaInformation.c)
 *     CmReconcileAndValidateAllHives @ 0x14086F200 (CmReconcileAndValidateAllHives.c)
 *     DbgkRegisterErrorPort @ 0x140883954 (DbgkRegisterErrorPort.c)
 *     HvlSetEnlightenmentInfo @ 0x14088B4C0 (HvlSetEnlightenmentInfo.c)
 *     VslRelaxQuotas @ 0x14088D05C (VslRelaxQuotas.c)
 *     MmAddVerifierThunks @ 0x1408C2FB0 (MmAddVerifierThunks.c)
 *     MmCreateMirror @ 0x1408C3D10 (MmCreateMirror.c)
 *     MmScrubMemory @ 0x1408D8B1C (MmScrubMemory.c)
 *     ObSetRefTraceInformation @ 0x1408DACCC (ObSetRefTraceInformation.c)
 *     SeCodeIntegritySetInformation @ 0x140918A48 (SeCodeIntegritySetInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x140934F60 (EtwSetPerformanceTraceInformation.c)
 *     ExpQueryElamCertInfo @ 0x140947348 (ExpQueryElamCertInfo.c)
 *     ExpSetProcessorMicrocodeUpdateInformation @ 0x140947D84 (ExpSetProcessorMicrocodeUpdateInformation.c)
 *     ExpSetTimeZoneInformation @ 0x140947DEC (ExpSetTimeZoneInformation.c)
 *     ExpUpdateComPlusPackage @ 0x1409481DC (ExpUpdateComPlusPackage.c)
 *     ExSetLeapSecondEnabled @ 0x140948288 (ExSetLeapSecondEnabled.c)
 *     ExpCapabilityCheck @ 0x14094BFA4 (ExpCapabilityCheck.c)
 *     ExpCovResetInformation @ 0x140954A24 (ExpCovResetInformation.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 *     VfFreeCapturedUnicodeString @ 0x1409C2FAC (VfFreeCapturedUnicodeString.c)
 *     VfProbeAndCaptureUnicodeString @ 0x1409C3174 (VfProbeAndCaptureUnicodeString.c)
 *     VfProbeAndCaptureUnicodeStringBuffer @ 0x1409C31AC (VfProbeAndCaptureUnicodeStringBuffer.c)
 *     VfFaultsSetParameters @ 0x1409D99B8 (VfFaultsSetParameters.c)
 *     VfAddVerifierEntry @ 0x1409E99B8 (VfAddVerifierEntry.c)
 *     VfRemoveVerifierEntry @ 0x1409E9BA4 (VfRemoveVerifierEntry.c)
 *     VfSetVerifierInformation @ 0x1409E9BCC (VfSetVerifierInformation.c)
 *     VfSetVerifierInformationEx @ 0x1409E9CD4 (VfSetVerifierInformationEx.c)
 *     BgkSetBootGraphicsInformation @ 0x1409F34C4 (BgkSetBootGraphicsInformation.c)
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
  int v14; // ecx
  int v15; // ecx
  char v16; // cl
  unsigned __int64 v17; // r9
  ULONG ActiveProcessorCount; // eax
  __int64 *v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rcx
  PVOID v22; // rcx
  NTSTATUS result; // eax
  __int32 v24; // r14d
  NTSTATUS v25; // eax
  char *v26; // rcx
  __int64 v27; // rcx
  PIMAGE_NT_HEADERS v28; // rax
  __int32 v29; // r14d
  __int32 v30; // r14d
  __int32 v31; // r14d
  int SystemImage; // eax
  PVOID v33; // rdi
  PIMAGE_NT_HEADERS v34; // rax
  char *v35; // rdx
  int v36; // ebx
  __int64 v37; // rcx
  __int64 v38; // rsi
  __int64 v39; // r8
  _DWORD *v40; // r9
  PADAPTER_OBJECT v41; // r14
  struct _DMA_ADAPTER *v42; // rcx
  __int32 v43; // r14d
  __int32 v44; // r14d
  __int32 v45; // r14d
  int v46; // r14d
  int v47; // r14d
  int v48; // r14d
  int v49; // r14d
  unsigned int v50; // ebx
  bool v51; // zf
  unsigned __int64 v52; // rcx
  __int16 v53; // ax
  __int64 v54; // rax
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // r8
  __int64 v58; // r9
  __int32 v59; // r14d
  __int32 v60; // r14d
  __int32 v61; // r14d
  int v62; // r14d
  int v63; // r14d
  int v64; // r14d
  int v65; // r14d
  int v66; // r14d
  __int64 v67; // rcx
  __int32 v68; // r14d
  __int32 v69; // r14d
  __int32 v70; // r14d
  int v71; // r14d
  int v72; // r14d
  int v73; // r14d
  int v74; // r14d
  int v75; // r14d
  int v76; // r15d
  char v77; // bl
  __m128i v78; // xmm1
  unsigned __int16 v79; // bx
  char *v80; // rcx
  PVOID PoolWithTag; // rax
  PVOID v82; // r15
  __int64 v83; // rcx
  struct _DMA_ADAPTER *v84; // rdi
  _KPROCESS *CurrentProcess; // rdi
  ULONG v86; // r15d
  __int64 v87; // r14
  unsigned int v88; // r15d
  int v89; // r8d
  char *v90; // rdx
  ULONG v91; // r15d
  unsigned __int64 v92; // r14
  bool v93; // [rsp+30h] [rbp-358h] BYREF
  char v94[3]; // [rsp+31h] [rbp-357h] BYREF
  int SessionId; // [rsp+34h] [rbp-354h] BYREF
  PVOID BaseOfImage; // [rsp+40h] [rbp-348h] BYREF
  void *Buf1[2]; // [rsp+48h] [rbp-340h] BYREF
  unsigned __int64 v98; // [rsp+58h] [rbp-330h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-328h] BYREF
  LUID PrivilegeValue; // [rsp+68h] [rbp-320h] BYREF
  int v101; // [rsp+70h] [rbp-318h]
  PVOID Object; // [rsp+78h] [rbp-310h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+80h] [rbp-308h] BYREF
  __int64 v104; // [rsp+88h] [rbp-300h] BYREF
  PVOID v105; // [rsp+90h] [rbp-2F8h] BYREF
  UNICODE_STRING DriverServiceName; // [rsp+98h] [rbp-2F0h] BYREF
  int v107; // [rsp+A8h] [rbp-2E0h]
  int v108; // [rsp+ACh] [rbp-2DCh]
  ULONG Size; // [rsp+B0h] [rbp-2D8h] BYREF
  int v110; // [rsp+B4h] [rbp-2D4h]
  int v111; // [rsp+BCh] [rbp-2CCh]
  HANDLE v112; // [rsp+C0h] [rbp-2C8h]
  HANDLE v113; // [rsp+F8h] [rbp-290h]
  unsigned __int64 v114; // [rsp+100h] [rbp-288h]
  __int128 v115; // [rsp+110h] [rbp-278h] BYREF
  void *Src[2]; // [rsp+120h] [rbp-268h]
  __int128 v117; // [rsp+130h] [rbp-258h] BYREF
  __int128 v118; // [rsp+140h] [rbp-248h] BYREF
  __int128 v119; // [rsp+150h] [rbp-238h]
  char v120[160]; // [rsp+160h] [rbp-228h] BYREF
  _BYTE v121[160]; // [rsp+200h] [rbp-188h] BYREF
  _BYTE v122[160]; // [rsp+2A0h] [rbp-E8h] BYREF

  v3 = SystemInformationLength;
  v4 = (unsigned __int64)SystemInformation;
  v5 = SystemInformationClass;
  v6 = 0LL;
  v93 = 0;
  *(_OWORD *)Buf1 = 0LL;
  BaseOfImage = 0LL;
  v7 = 1;
  v8 = 1LL;
  PrivilegeValue = 0LL;
  v104 = 0LL;
  BugCheckParameter2 = 0LL;
  DmaAdapter = 0LL;
  v98 = 0LL;
  v117 = 0LL;
  v118 = 0LL;
  v119 = 0LL;
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
        v68 = v5 - 130;
        if ( !v68 )
        {
          if ( ((SystemInformationLength - 16) & 0xFFFFFFE7) == 0 && SystemInformationLength != 40 )
          {
            if ( SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
            {
              memmove(&v117, (const void *)v4, v3);
              if ( (_DWORD)v3 == 32 )
                v6 = *((_QWORD *)&v118 + 1);
              updated = MmCombineIdenticalPages(v117, (unsigned int)v118, v6, &v104);
              SessionId = updated;
              *(_QWORD *)(v4 + 8) = v104;
              return updated;
            }
            return -1073741727;
          }
          return -1073741820;
        }
        v69 = v68 - 1;
        if ( !v69 )
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
        v70 = v69 - 1;
        if ( !v70 )
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
                ExfTryToWakePushLock((volatile signed __int64 *)&ExpConDrvLoadLock);
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
        v71 = v70 - 2;
        if ( !v71 )
        {
          if ( SystemInformationLength == 32 )
            return ExHandleSPCall2(*(_QWORD *)&SystemInformationClass, SystemInformation, 32, 1LL);
          return -1073741820;
        }
        v72 = v71 - 8;
        if ( v72 )
        {
          v73 = v72 - 8;
          if ( !v73 )
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
          v74 = v73 - 1;
          if ( !v74 )
          {
            PrivilegeValue = (LUID)19LL;
            if ( !SeSinglePrivilegeCheck((LUID)19LL, PreviousMode) )
              return -1073741727;
            v76 = v3 - 1;
            if ( v76 )
            {
              if ( v76 != 3 )
                return -1073741820;
              v7 = *(_DWORD *)v4;
              v111 = *(_DWORD *)v4;
            }
            else
            {
              v77 = *(_BYTE *)v4;
              if ( *(_BYTE *)v4 && !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                return -1073741727;
              if ( !v77 )
                v7 = 5;
            }
            return ExpSetSoftRebootFlags(v7);
          }
          v75 = v74 - 1;
          if ( !v75 )
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
          if ( v75 == 3 )
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
        v117 = *(_OWORD *)v4;
        v78 = *(__m128i *)(v4 + 16);
        v119 = *(_OWORD *)(v4 + 32);
        *(__m128i *)Src = v78;
        v118 = 0LL;
        v79 = _mm_cvtsi128_si32(v78);
        if ( v79 && (v79 & 1) == 0 )
        {
          if ( ((__int64)Src[1] & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v80 = (char *)Src[1] + v79;
          if ( (unsigned __int64)v80 > 0x7FFFFFFF0000LL || v80 < Src[1] )
            MEMORY[0x7FFFFFFF0000] = 0;
          PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)9, v79, 0x50535845u);
          v82 = PoolWithTag;
          if ( PoolWithTag )
          {
            memmove(PoolWithTag, Src[1], v79);
            *((_QWORD *)&v118 + 1) = v82;
            LOWORD(v118) = v79;
            WORD1(v118) = v79;
          }
        }
        *(_OWORD *)&CriticalProcessExceptionData = v117;
        xmmword_140C19670 = v118;
        xmmword_140C19680 = v119;
        return 0;
      }
      if ( v5 == SystemProcessorProfileControlArea )
        return KeProcessorProfileControlArea((__int64)SystemInformation, SystemInformationLength, PreviousMode);
      v59 = v5 - 102;
      if ( v59 )
      {
        v60 = v59 - 2;
        if ( !v60 )
        {
          LOBYTE(SystemInformationLength) = PreviousMode;
          return ExpSetProcessorMicrocodeUpdateInformation(
                   SystemInformation,
                   (unsigned int)v3,
                   SystemInformationLength,
                   1LL);
        }
        v61 = v60 - 2;
        if ( !v61 )
          return -1073741821;
        v62 = v61 - 3;
        if ( !v62 )
        {
          LOBYTE(v8) = PreviousMode;
          return SmSetStoreInformation(
                   *(_QWORD *)&SystemInformationClass,
                   SystemInformation,
                   SystemInformationLength,
                   v8);
        }
        v63 = v62 - 1;
        if ( !v63 )
          return -1073741822;
        v64 = v63 - 1;
        if ( !v64 )
        {
          if ( SystemInformationLength != 4 )
            return -1073741820;
          if ( !SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
            return -1073741790;
          MEMORY[0xFFFFF78000000248] = *(_DWORD *)v4;
          return 0;
        }
        v65 = v64 - 2;
        if ( !v65 )
          return PsSetCpuQuotaInformation((unsigned __int64)SystemInformation, SystemInformationLength, PreviousMode);
        v66 = v65 - 13;
        if ( !v66 )
        {
          if ( PreviousMode )
            return -1073741727;
          if ( SystemInformationLength == 32 )
            return BgkSetBootGraphicsInformation(*(_QWORD *)&SystemInformationClass, SystemInformation, 32, 1LL);
          return -1073741820;
        }
        if ( v66 != 1 )
          return -1073741821;
        if ( SystemInformationLength != 16 )
          return -1073741820;
        if ( !SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
          return -1073741727;
        v112 = *(HANDLE *)v4;
        updated = MmScrubMemory(v67, v112, &PrivilegeValue);
        SessionId = updated;
        *(LUID *)(v4 + 8) = PrivilegeValue;
        return updated;
      }
      v50 = 432;
      if ( SystemInformationLength != 432 )
        return -1073741820;
      if ( !PreviousMode || (unsigned __int8)ExpCapabilityCheck((PUNICODE_STRING)&TimeZoneCapability) )
        return ExpSetTimeZoneInformation(v4, v50);
      v51 = SeSinglePrivilegeCheck(SeTimeZonePrivilege, PreviousMode) == 0;
LABEL_220:
      if ( v51 )
        return -1073741727;
      return ExpSetTimeZoneInformation(v4, v50);
    }
    if ( v5 > SystemSecureDumpEncryptionInformation )
    {
      if ( v5 == SystemCodeIntegrityVerificationInformation )
        return SeCodeIntegritySetInformation((unsigned int)v5, SystemInformation, SystemInformationLength, 1LL);
      if ( v5 != SystemWorkloadAllowedCpuSetsInformation )
      {
        switch ( v5 )
        {
          case SystemLeapSecondInformation:
            if ( SystemInformationLength != 8 )
              return -1073741820;
            if ( PreviousMode && !SeSinglePrivilegeCheck(SeSystemtimePrivilege, PreviousMode) )
              return -1073741727;
            if ( PsIsCurrentThreadInServerSilo() )
              return -1073741790;
            v93 = (unsigned __int8)*(_QWORD *)v4 != 0;
            result = ExSetLeapSecondEnabled();
            updated = result;
            if ( result >= 0 )
            {
              *(_BYTE *)ExLeapSecondData = v93;
              return updated;
            }
            return result;
          case SystemFlags2Information:
            if ( SystemInformationLength == 4 )
            {
              if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
              {
                v101 = 0;
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
      v91 = SystemInformationLength - 8;
      if ( (((_BYTE)SystemInformationLength - 8) & 7) != 0 || v91 > 0xA0 )
        return -1073741820;
      v92 = *(_QWORD *)SystemInformation;
      memmove(v122, (char *)SystemInformation + 8, v91);
      if ( v92 >= 2 )
        return -1073741811;
      updated = ExCpuSetResourceManagerAccessCheck(PreviousMode);
      if ( updated < 0 )
        return updated;
      v88 = v91 >> 3;
      v89 = v92;
      v90 = v122;
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
            v86 = SystemInformationLength - 8;
            if ( (((_BYTE)SystemInformationLength - 8) & 7) != 0 || v86 > 0xA0 )
              return -1073741820;
            v87 = *(_QWORD *)SystemInformation;
            v114 = *(_QWORD *)SystemInformation;
            memmove(v120, (char *)SystemInformation + 8, v86);
            updated = ExCpuSetResourceManagerAccessCheck(PreviousMode);
            if ( updated >= 0 )
              return KeSetTagCpuSets(v86 >> 3, v120, v87);
            return updated;
          case SystemWin32WerStartCallout:
            if ( SystemInformationLength == 8 )
            {
              if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                return -1073741727;
              v113 = *(HANDLE *)v4;
              v105 = 0LL;
              updated = ObReferenceObjectByHandle(v113, 0x1000u, (POBJECT_TYPE)PsProcessType, PreviousMode, &v105, 0LL);
              if ( updated >= 0 )
              {
                v84 = (struct _DMA_ADAPTER *)v105;
                SessionId = MmGetSessionIdEx((__int64)v105);
                if ( SessionId != -1 )
                  updated = PsInvokeWin32Callout(32, (__int64)v84, 1, (__int64)&SessionId);
                v42 = v84;
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
                return PsInvokeWin32Callout(32, (__int64)CurrentProcess, 1, (__int64)&SessionId);
            }
            return updated;
          case SystemActivityModerationExeState:
            if ( SystemInformationLength != 24 )
              return -1073741820;
            v117 = *(_OWORD *)SystemInformation;
            *(_QWORD *)&v118 = *((_QWORD *)SystemInformation + 2);
            result = VfProbeAndCaptureUnicodeStringBuffer(&v117, 1LL, 24, 1LL);
            if ( result < 0 )
              return result;
            updated = PsSetExeModerationState((__int64)&v117, v118, DWORD1(v118));
            v26 = (char *)&v117;
            goto LABEL_101;
        }
        v83 = (unsigned int)(v5 - 190);
        if ( v5 != SystemCodeIntegrityUnlockInformation )
        {
          if ( v5 != SystemIntegrityQuotaInformation )
            return -1073741821;
          if ( !SystemInformationLength )
          {
            if ( !PreviousMode || SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
              return VslRelaxQuotas(v83, SystemInformation, *(_QWORD *)&SystemInformationLength, v8);
            return -1073741727;
          }
          return -1073741811;
        }
        return SeCodeIntegritySetInformation((unsigned int)v5, SystemInformation, SystemInformationLength, 1LL);
      }
      if ( (SystemInformationLength & 7) != 0 || SystemInformationLength > 0xA0 )
        return -1073741820;
      memmove(v121, SystemInformation, SystemInformationLength);
      result = ExCpuSetResourceManagerAccessCheck(PreviousMode);
      if ( result < 0 )
        return result;
      v88 = (unsigned int)v3 >> 3;
      v89 = 0;
      v90 = v121;
    }
    return KeSetSystemAllowedCpuSets(v88, v90, v89);
  }
  if ( v5 == SystemVerifierFaultsInformation )
  {
    if ( SystemInformationLength != 40 )
      return -1073741820;
    if ( PreviousMode )
    {
      if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
        return -1073741727;
      v117 = *(_OWORD *)v4;
      v118 = *(_OWORD *)(v4 + 16);
      *(_QWORD *)&v119 = *(_QWORD *)(v4 + 32);
      result = VfProbeAndCaptureUnicodeStringBuffer((char *)&v117 + 8, 1LL, v55, v56);
      if ( result < 0 )
        return result;
      updated = VfProbeAndCaptureUnicodeStringBuffer((char *)&v118 + 8, 1LL, v57, v58);
      if ( updated < 0 )
      {
        v26 = (char *)&v117 + 8;
        goto LABEL_101;
      }
      v4 = (unsigned __int64)&v117;
    }
    updated = VfFaultsSetParameters(v4, SystemInformation, *(_QWORD *)&SystemInformationLength, v8);
    if ( !PreviousMode )
      return updated;
    VfFreeCapturedUnicodeString(v4 + 8);
    v26 = (char *)(v4 + 24);
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
            v38 = *(unsigned int *)SystemInformation;
            updated = ExpUpdateComPlusPackage(v38, SystemInformation, 4, 1LL);
            if ( updated >= 0 )
              MEMORY[0xFFFFF780000002E0] = v38;
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
                  return PfSetSuperfetchInformation(
                           0LL,
                           (__int128 *)SystemInformation,
                           SystemInformationLength,
                           PreviousMode);
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
              v37 = (unsigned int)(*(_DWORD *)SystemInformation - 6);
              if ( *(_DWORD *)SystemInformation == 6 )
              {
                LODWORD(v37) = 1;
                return ((__int64 (__fastcall *)(__int64, PVOID, ULONG, __int64))off_140C008D8[0])(
                         v37,
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
        v117 = *(_OWORD *)v4;
        *(_QWORD *)&v118 = *(_QWORD *)(v4 + 16);
        v4 = (unsigned __int64)&v117;
      }
      if ( (unsigned int)(*(_DWORD *)(v4 + 16) - 1) > 0x1E )
        return -1073741811;
      v115 = *(_OWORD *)v4;
      updated = PsLookupProcessThreadByCid(&v115, 0LL, &DmaAdapter);
      if ( updated >= 0 )
      {
        v41 = DmaAdapter;
        if ( *((_BYTE *)&DmaAdapter->Size + 2) )
        {
          updated = -1073741749;
        }
        else
        {
          KeSetActualBasePriorityThread((__int64)DmaAdapter, *(unsigned int *)(v4 + 16), v39, v40);
          updated = 259;
        }
        v42 = v41;
LABEL_199:
        HalPutDmaAdapter(v42);
        return updated;
      }
      return updated;
    }
    v43 = v5 - 86;
    if ( !v43 )
      return ObSetRefTraceInformation(SystemInformation, SystemInformationLength, SystemInformationLength, 1LL);
    v44 = v43 - 1;
    if ( !v44 )
    {
      if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
      {
        if ( (_DWORD)v3 == 8 )
        {
          v54 = *(_QWORD *)v4;
          MmSpecialPoolTag = *(_QWORD *)v4;
          MmSpecialPoolCatchOverruns = BYTE4(v54) & 1;
          return updated;
        }
        return -1073741820;
      }
      return -1073741790;
    }
    v45 = v44 - 2;
    if ( !v45 )
    {
      if ( PreviousMode == 1 )
      {
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, 1) )
          return -1073741727;
        v52 = PsGetCurrentProcess()[1].AffinityPadding[10];
        if ( !v52 )
          return DbgkRegisterErrorPort((void *)v4, (unsigned int)v3);
        v53 = *(_WORD *)(v52 + 8);
        if ( v53 != 332 && v53 != 452 )
          return DbgkRegisterErrorPort((void *)v4, (unsigned int)v3);
      }
      return -1073741637;
    }
    v46 = v45 - 2;
    if ( !v46 )
    {
      LOBYTE(v8) = PreviousMode;
      return HvlSetEnlightenmentInfo(*(_QWORD *)&SystemInformationClass, SystemInformation, SystemInformationLength, v8);
    }
    v47 = v46 - 1;
    if ( !v47 )
    {
      if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
        return -1073741790;
      if ( (_DWORD)v3 == 40 )
        return VfSetVerifierInformationEx(v4);
      return -1073741820;
    }
    v48 = v47 - 1;
    if ( v48 )
    {
      v49 = v48 - 1;
      if ( v49 )
      {
        if ( v49 == 1 )
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
          *(_QWORD *)&v117 = *(_QWORD *)v4;
          _InterlockedOr((volatile signed __int32 *)0xFFFFF780000003A0LL, v117);
          _InterlockedAnd((volatile signed __int32 *)0xFFFFF780000003A0LL, ~DWORD1(v117));
          return updated;
        }
        return -1073741820;
      }
      return -1073741790;
    }
    v50 = 172;
    if ( SystemInformationLength != 172 )
      return -1073741820;
    if ( PreviousMode
      && !(unsigned __int8)ExpCapabilityCheck((PUNICODE_STRING)&TimeZoneCapability)
      && !SeSinglePrivilegeCheck(SeTimeZonePrivilege, PreviousMode) )
    {
      return -1073741727;
    }
    v51 = *((_BYTE *)PsGetCurrentServerSiloGlobals() + 1049) == 0;
    goto LABEL_220;
  }
  if ( v5 == SystemPrefetcherInformation )
    return PfSnSetPrefetcherInformation(
             *(__int64 *)&SystemInformationClass,
             (__int128 *)SystemInformation,
             SystemInformationLength,
             PreviousMode);
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
              v117 = *(_OWORD *)v4;
              LODWORD(v118) = *(_DWORD *)(v4 + 16);
              KiMinimumDpcRate = DWORD2(v117);
              KiMaximumDpcQueueDepth = DWORD1(v117);
              KiAdjustDpcThreshold = HIDWORD(v117);
              KiIdealDpcRate = v118;
              KeSynchronizeWithDynamicProcessors(
                (unsigned int)v118,
                SystemInformation,
                *(_QWORD *)&SystemInformationLength);
              ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
              if ( ActiveProcessorCount )
              {
                v19 = KiProcessorBlock;
                v20 = ActiveProcessorCount;
                do
                {
                  v21 = *v19;
                  *(_DWORD *)(v21 + 12568) = KiMaximumDpcQueueDepth;
                  *(_DWORD *)(v21 + 12576) = KiMinimumDpcRate;
                  ++v19;
                  --v20;
                }
                while ( v20 );
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
            if ( v5 != SystemTimeAdjustmentInformation )
            {
              switch ( v5 )
              {
                case SystemMirrorMemoryInformation:
                  return MmCreateMirror();
                case SystemPerformanceTraceInformation:
                  return EtwSetPerformanceTraceInformation(SystemInformation, SystemInformationLength, PreviousMode);
                case SystemCrashDumpStateInformation:
                  if ( (!PreviousMode || SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode))
                    && !PsIsCurrentThreadInServerSilo() )
                  {
                    if ( (_DWORD)v3 != 4 )
                      goto LABEL_28;
                    if ( PreviousMode )
                    {
                      if ( (v4 & 3) != 0 )
                        ExRaiseDatatypeMisalignment();
                      if ( v4 + 4 > 0x7FFFFFFF0000LL || v4 + 4 < v4 )
                        MEMORY[0x7FFFFFFF0000] = 0;
                      v14 = *(_DWORD *)v4;
                      v107 = *(_DWORD *)v4;
                    }
                    else
                    {
                      v14 = *(_DWORD *)v4;
                    }
                    if ( !v14 )
                    {
                      v12 = 0LL;
                      return IoConfigureCrashDump(v12, 0);
                    }
                    v15 = v14 - 1;
                    if ( !v15 )
                    {
LABEL_28:
                      v12 = 1LL;
                      return IoConfigureCrashDump(v12, 0);
                    }
                    if ( v15 == 1 )
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
              if ( !PsIsCurrentThreadInServerSilo() )
              {
                if ( (_DWORD)v3 == 16 )
                {
                  v16 = *(_BYTE *)(v4 + 8);
                  v93 = v16;
                  v98 = *(_QWORD *)v4;
                }
                else
                {
                  v16 = *(_BYTE *)(v4 + 4);
                  v93 = v16;
                  v17 = *(unsigned int *)v4;
                  v98 = v17;
                  if ( v17 )
                    v98 = MEMORY[0xFFFFF78000000300] * (unsigned __int64)KeMaximumIncrement / v17;
                }
                if ( v16 )
                  v98 = MEMORY[0xFFFFF78000000300];
                ExAcquireTimeRefreshLock(1u);
                updated = ExpUpdateTimerConfiguration(0LL, (__int64)&v98, (__int64)&v93);
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
              v33 = RtlImageDirectoryEntryToData(BaseOfImage, 1u, 0, &Size);
              v34 = RtlImageNtHeader(BaseOfImage);
              *(_QWORD *)(v4 + 40) = v33;
              v35 = (char *)BaseOfImage + v34->OptionalHeader.AddressOfEntryPoint;
              *(_QWORD *)(v4 + 16) = BaseOfImage;
              *(_QWORD *)(v4 + 24) = BugCheckParameter2;
              *(_QWORD *)(v4 + 32) = v35;
              *(_DWORD *)(v4 + 48) = v34->OptionalHeader.SizeOfImage;
            }
            return updated;
          }
          return -1073741727;
        }
        return -1073741820;
      }
LABEL_154:
      v94[0] = 0;
      if ( SystemInformationLength >= 0x40 )
      {
        if ( v5 == SystemFileCacheInformation )
        {
          v36 = 0;
        }
        else
        {
          v110 = *((_DWORD *)SystemInformation + 15);
          v36 = v110;
          if ( (v110 & 0xFFFFFFF0) != 0 || (v110 & 0xC) == 0xC || (v110 & 3) == 3 )
            return -1073741584;
        }
        if ( SeSinglePrivilegeCheck(SeIncreaseQuotaPrivilege, PreviousMode) )
          return MmAdjustWorkingSetSizeEx(*(_QWORD *)(v4 + 24), *(_QWORD *)(v4 + 32), 2, 1, v36, v94);
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
    v29 = v5 - 48;
    if ( v29 )
    {
      v30 = v29 - 3;
      if ( !v30 )
      {
        if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
          return VfSetVerifierInformation(v4, (unsigned int)v3, 0LL);
        return -1073741790;
      }
      v31 = v30 - 1;
      if ( !v31 )
      {
        if ( !PreviousMode )
          return MmAddVerifierThunks(SystemInformation, SystemInformationLength);
        return -1073741727;
      }
      if ( v31 == 2 )
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
          if ( PsIsCurrentThreadInServerSilo() )
            return -1073741790;
          v112 = *(HANDLE *)v4;
          if ( v112 )
          {
            Object = 0LL;
            updated = ObReferenceObjectByHandle(v112, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
            v22 = Object;
            if ( updated < 0 )
              return updated;
          }
          else
          {
            v22 = 0LL;
            updated = 0;
          }
          KdUpdateTimeSlipEvent(v22);
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
      v24 = v5 - 40;
      if ( v24 )
      {
        if ( v24 != 1 )
        {
          updated = -1073741821;
LABEL_99:
          if ( !PreviousMode )
            return updated;
          v26 = (char *)v4;
LABEL_101:
          VfFreeCapturedUnicodeString(v26);
          return updated;
        }
        v25 = VfRemoveVerifierEntry(v4, SystemInformation, *(_QWORD *)&SystemInformationLength, v8);
      }
      else
      {
        v25 = VfAddVerifierEntry((PCUNICODE_STRING)v4);
      }
      updated = v25;
      goto LABEL_99;
    }
    if ( SystemInformationLength != 4 )
      return -1073741820;
    if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
      return -1073741727;
    v108 = *(_DWORD *)v4;
    LOBYTE(v27) = 1;
    PsChangeQuantumTable(v27);
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
      v28 = RtlImageNtHeader(BaseOfImage);
      if ( !v28 )
      {
        MmUnloadSystemImage(BugCheckParameter2);
        return -1073741701;
      }
      updated = ExpInitializeSessionDriver((char *)BaseOfImage + v28->OptionalHeader.AddressOfEntryPoint);
      if ( updated < 0 )
        MmUnloadSystemImage(BugCheckParameter2);
      return updated;
    }
    if ( result == -1073741411 )
      return -1073741554;
  }
  return result;
}
