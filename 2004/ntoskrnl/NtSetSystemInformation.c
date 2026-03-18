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

__int64 __fastcall NtSetSystemInformation(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  size_t v3; // r15
  unsigned __int64 v4; // rsi
  int v5; // r14d
  __int64 v6; // rdi
  int v7; // r13d
  __int64 v8; // r9
  KPROCESSOR_MODE PreviousMode; // r12
  __int64 v10; // rax
  unsigned int updated; // ebx
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
  __int64 result; // rax
  int v24; // r14d
  unsigned int v25; // eax
  char *v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rax
  int v29; // r14d
  int v30; // r14d
  int v31; // r14d
  int SystemImage; // eax
  int v33; // edx
  __int64 v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rdx
  int v37; // ebx
  __int64 v38; // rcx
  __int64 v39; // rsi
  __int64 v40; // r8
  _DWORD *v41; // r9
  PADAPTER_OBJECT v42; // r14
  struct _DMA_ADAPTER *v43; // rcx
  int v44; // r14d
  int v45; // r14d
  int v46; // r14d
  int v47; // r14d
  int v48; // r14d
  int v49; // r14d
  int v50; // r14d
  unsigned int v51; // ebx
  bool v52; // zf
  unsigned __int64 v53; // rcx
  __int16 v54; // ax
  __int64 v55; // rax
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // r8
  __int64 v59; // r9
  int v60; // r14d
  int v61; // r14d
  int v62; // r14d
  int v63; // r14d
  int v64; // r14d
  int v65; // r14d
  int v66; // r14d
  int v67; // r14d
  __int64 v68; // rcx
  int v69; // r14d
  int v70; // r14d
  int v71; // r14d
  int v72; // r14d
  int v73; // r14d
  int v74; // r14d
  int v75; // r14d
  int v76; // r14d
  int v77; // r15d
  char v78; // bl
  __m128i v79; // xmm1
  unsigned __int16 v80; // bx
  char *v81; // rcx
  PVOID PoolWithTag; // rax
  PVOID v83; // r15
  __int64 v84; // rcx
  struct _DMA_ADAPTER *v85; // rdi
  _KPROCESS *CurrentProcess; // rdi
  unsigned int v87; // r15d
  __int64 v88; // r14
  unsigned int v89; // r15d
  int v90; // r8d
  char *v91; // rdx
  unsigned int v92; // r15d
  unsigned __int64 v93; // r14
  bool v94; // [rsp+30h] [rbp-358h] BYREF
  char v95[3]; // [rsp+31h] [rbp-357h] BYREF
  int SessionId; // [rsp+34h] [rbp-354h] BYREF
  __int64 v97; // [rsp+40h] [rbp-348h] BYREF
  void *Buf1[2]; // [rsp+48h] [rbp-340h] BYREF
  unsigned __int64 v99; // [rsp+58h] [rbp-330h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-328h] BYREF
  LUID PrivilegeValue; // [rsp+68h] [rbp-320h] BYREF
  int v102; // [rsp+70h] [rbp-318h]
  PVOID Object; // [rsp+78h] [rbp-310h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+80h] [rbp-308h] BYREF
  __int64 v105; // [rsp+88h] [rbp-300h] BYREF
  PVOID v106; // [rsp+90h] [rbp-2F8h] BYREF
  UNICODE_STRING DriverServiceName; // [rsp+98h] [rbp-2F0h] BYREF
  int v108; // [rsp+A8h] [rbp-2E0h]
  int v109; // [rsp+ACh] [rbp-2DCh]
  char v110; // [rsp+B0h] [rbp-2D8h] BYREF
  int v111; // [rsp+B4h] [rbp-2D4h]
  int v112; // [rsp+BCh] [rbp-2CCh]
  HANDLE v113; // [rsp+C0h] [rbp-2C8h]
  HANDLE v114; // [rsp+F8h] [rbp-290h]
  unsigned __int64 v115; // [rsp+100h] [rbp-288h]
  __int128 v116; // [rsp+110h] [rbp-278h] BYREF
  void *Src[2]; // [rsp+120h] [rbp-268h]
  __int128 v118; // [rsp+130h] [rbp-258h] BYREF
  __int128 v119; // [rsp+140h] [rbp-248h] BYREF
  __int128 v120; // [rsp+150h] [rbp-238h]
  char v121[160]; // [rsp+160h] [rbp-228h] BYREF
  _BYTE v122[160]; // [rsp+200h] [rbp-188h] BYREF
  _BYTE v123[160]; // [rsp+2A0h] [rbp-E8h] BYREF

  v3 = (unsigned int)a3;
  v4 = a2;
  v5 = a1;
  v6 = 0LL;
  v94 = 0;
  *(_OWORD *)Buf1 = 0LL;
  v97 = 0LL;
  v7 = 1;
  v8 = 1LL;
  PrivilegeValue = 0LL;
  v105 = 0LL;
  BugCheckParameter2 = 0LL;
  DmaAdapter = 0LL;
  v99 = 0LL;
  v118 = 0LL;
  v119 = 0LL;
  v120 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v10 = 1LL;
    if ( (_DWORD)a1 != 89 )
      v10 = 3LL;
    if ( (_DWORD)a3 )
    {
      if ( (a2 & v10) != 0 )
        ExRaiseDatatypeMisalignment();
      a1 = a2 + (unsigned int)a3;
      if ( a1 > 0x7FFFFFFF0000LL || a1 < a2 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  updated = 0;
  if ( v5 > 97 )
  {
    if ( v5 <= 159 )
    {
      if ( v5 == 159 )
        return (unsigned int)-1073741637;
      if ( v5 > 129 )
      {
        v69 = v5 - 130;
        if ( !v69 )
        {
          if ( (((_DWORD)a3 - 16) & 0xFFFFFFE7) == 0 && (_DWORD)a3 != 40 )
          {
            if ( SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
            {
              memmove(&v118, (const void *)v4, v3);
              if ( (_DWORD)v3 == 32 )
                v6 = *((_QWORD *)&v119 + 1);
              updated = MmCombineIdenticalPages(v118, (unsigned int)v119, v6, &v105);
              SessionId = updated;
              *(_QWORD *)(v4 + 8) = v105;
              return updated;
            }
            return 3221225569LL;
          }
          return 3221225476LL;
        }
        v70 = v69 - 1;
        if ( !v70 )
        {
          if ( PreviousMode )
            return 3221225506LL;
          if ( (_DWORD)a3 == 24 )
            return (unsigned int)KeInitializeEntropySystem(
                                   *(_QWORD *)a2,
                                   *(_QWORD *)(a2 + 8),
                                   *(_QWORD *)(a2 + 16),
                                   1LL);
          return 3221225476LL;
        }
        v71 = v70 - 1;
        if ( !v71 )
        {
          if ( (_DWORD)a3 == 4 )
          {
            *(_QWORD *)&DriverServiceName.Length = 7733364LL;
            DriverServiceName.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\condrv";
            if ( (*(_BYTE *)a2 & 1) != 0 )
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
              return (unsigned int)ZwUnloadDriver(&DriverServiceName);
            return 3221225569LL;
          }
          return 3221225476LL;
        }
        v72 = v71 - 2;
        if ( !v72 )
        {
          if ( (_DWORD)a3 == 32 )
            return (unsigned int)ExHandleSPCall2(a1, a2, a3, 1LL);
          return 3221225476LL;
        }
        v73 = v72 - 8;
        if ( v73 )
        {
          v74 = v73 - 8;
          if ( !v74 )
          {
            if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
              return 3221225569LL;
            if ( !(_DWORD)v3 )
            {
              if ( ExBootLoaderMetadata )
                _InterlockedExchange((volatile __int32 *)ExBootLoaderMetadata, 0);
              return updated;
            }
            return 3221225476LL;
          }
          v75 = v74 - 1;
          if ( !v75 )
          {
            PrivilegeValue = (LUID)19LL;
            if ( !SeSinglePrivilegeCheck((LUID)19LL, PreviousMode) )
              return 3221225569LL;
            v77 = v3 - 1;
            if ( v77 )
            {
              if ( v77 != 3 )
                return 3221225476LL;
              v7 = *(_DWORD *)v4;
              v112 = *(_DWORD *)v4;
            }
            else
            {
              v78 = *(_BYTE *)v4;
              if ( *(_BYTE *)v4 && !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                return 3221225569LL;
              if ( !v78 )
                v7 = 5;
            }
            return (unsigned int)ExpSetSoftRebootFlags(v7);
          }
          v76 = v75 - 1;
          if ( !v76 )
          {
            if ( (_DWORD)a3 == 8 )
            {
              if ( PreviousMode )
                return (unsigned int)ExpQueryElamCertInfo(*(_QWORD *)a2, a2, a3, 1LL);
              return 3221225485LL;
            }
            return 3221225476LL;
          }
          if ( v76 == 3 )
            return (unsigned int)CmReconcileAndValidateAllHives(a1, a2, a3, 1LL);
          return (unsigned int)-1073741821;
        }
        if ( (_DWORD)a3 != 48 )
          return 3221225476LL;
        if ( !SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode) )
          return 3221225569LL;
        if ( CriticalProcessExceptionData )
          return 0LL;
        v118 = *(_OWORD *)v4;
        v79 = *(__m128i *)(v4 + 16);
        v120 = *(_OWORD *)(v4 + 32);
        *(__m128i *)Src = v79;
        v119 = 0LL;
        v80 = _mm_cvtsi128_si32(v79);
        if ( v80 && (v80 & 1) == 0 )
        {
          if ( ((__int64)Src[1] & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v81 = (char *)Src[1] + v80;
          if ( (unsigned __int64)v81 > 0x7FFFFFFF0000LL || v81 < Src[1] )
            MEMORY[0x7FFFFFFF0000] = 0;
          PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)9, v80, 0x50535845u);
          v83 = PoolWithTag;
          if ( PoolWithTag )
          {
            memmove(PoolWithTag, Src[1], v80);
            *((_QWORD *)&v119 + 1) = v83;
            LOWORD(v119) = v80;
            WORD1(v119) = v80;
          }
        }
        *(_OWORD *)&CriticalProcessExceptionData = v118;
        xmmword_140C19670 = v119;
        xmmword_140C19680 = v120;
        return 0;
      }
      if ( v5 == 129 )
        return (unsigned int)KeProcessorProfileControlArea(a2, a3, PreviousMode);
      v60 = v5 - 102;
      if ( v60 )
      {
        v61 = v60 - 2;
        if ( !v61 )
        {
          LOBYTE(a3) = PreviousMode;
          return (unsigned int)ExpSetProcessorMicrocodeUpdateInformation(a2, (unsigned int)v3, a3, 1LL);
        }
        v62 = v61 - 2;
        if ( !v62 )
          return (unsigned int)-1073741821;
        v63 = v62 - 3;
        if ( !v63 )
        {
          LOBYTE(v8) = PreviousMode;
          return (unsigned int)SmSetStoreInformation(a1, a2, (unsigned int)a3, v8);
        }
        v64 = v63 - 1;
        if ( !v64 )
          return (unsigned int)-1073741822;
        v65 = v64 - 1;
        if ( !v65 )
        {
          if ( (_DWORD)a3 != 4 )
            return 3221225476LL;
          if ( !SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
            return 3221225506LL;
          MEMORY[0xFFFFF78000000248] = *(_DWORD *)v4;
          return 0;
        }
        v66 = v65 - 2;
        if ( !v66 )
          return (unsigned int)PsSetCpuQuotaInformation(a2, a3, PreviousMode);
        v67 = v66 - 13;
        if ( !v67 )
        {
          if ( PreviousMode )
            return 3221225569LL;
          if ( (_DWORD)a3 == 32 )
            return (unsigned int)BgkSetBootGraphicsInformation(a1, a2, a3, 1LL);
          return (unsigned int)-1073741820;
        }
        if ( v67 != 1 )
          return (unsigned int)-1073741821;
        if ( (_DWORD)a3 != 16 )
          return 3221225476LL;
        if ( !SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
          return 3221225569LL;
        v113 = *(HANDLE *)v4;
        updated = MmScrubMemory(v68, v113, &PrivilegeValue);
        SessionId = updated;
        *(LUID *)(v4 + 8) = PrivilegeValue;
        return updated;
      }
      v51 = 432;
      if ( (_DWORD)a3 != 432 )
        return 3221225476LL;
      if ( !PreviousMode || (unsigned __int8)ExpCapabilityCheck(&TimeZoneCapability) )
        return (unsigned int)ExpSetTimeZoneInformation(v4, v51);
      v52 = SeSinglePrivilegeCheck(SeTimeZonePrivilege, PreviousMode) == 0;
LABEL_220:
      if ( v52 )
        return 3221225569LL;
      return (unsigned int)ExpSetTimeZoneInformation(v4, v51);
    }
    if ( v5 > 194 )
    {
      if ( v5 == 199 )
        return (unsigned int)SeCodeIntegritySetInformation((unsigned int)v5, a2, (unsigned int)a3, 1LL);
      if ( v5 != 204 )
      {
        switch ( v5 )
        {
          case 206:
            if ( (_DWORD)a3 != 8 )
              return 3221225476LL;
            if ( PreviousMode && !SeSinglePrivilegeCheck(SeSystemtimePrivilege, PreviousMode) )
              return 3221225569LL;
            if ( PsIsCurrentThreadInServerSilo() )
              return 3221225506LL;
            v94 = (unsigned __int8)*(_QWORD *)v4 != 0;
            result = ExSetLeapSecondEnabled();
            updated = result;
            if ( (int)result >= 0 )
            {
              *(_BYTE *)ExLeapSecondData = v94;
              return updated;
            }
            return result;
          case 207:
            if ( (_DWORD)a3 == 4 )
            {
              if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
              {
                v102 = 0;
                NtGlobalFlag2 = *(_DWORD *)v4;
                *(_DWORD *)v4 = NtGlobalFlag2;
                return updated;
              }
              return 3221225506LL;
            }
            return 3221225476LL;
          case 210:
            return (unsigned int)CmUpdateFeatureConfiguration((void *)a2, (unsigned int)a3, PreviousMode);
          case 212:
            return (unsigned int)CmUpdateFeatureUsageSubscription((void *)a2, (unsigned int)a3, PreviousMode);
        }
        if ( (unsigned int)(v5 - 224) > 1 )
          return (unsigned int)-1073741821;
        return (unsigned int)SeCodeIntegritySetInformation((unsigned int)v5, a2, (unsigned int)a3, 1LL);
      }
      if ( (unsigned int)a3 < 8 )
        return 3221225476LL;
      v92 = a3 - 8;
      if ( (((_BYTE)a3 - 8) & 7) != 0 || v92 > 0xA0 )
        return 3221225476LL;
      v93 = *(_QWORD *)a2;
      memmove(v123, (const void *)(a2 + 8), v92);
      if ( v93 >= 2 )
        return 3221225485LL;
      updated = ExCpuSetResourceManagerAccessCheck(PreviousMode);
      if ( (updated & 0x80000000) != 0 )
        return updated;
      v89 = v92 >> 3;
      v90 = v93;
      v91 = v123;
    }
    else
    {
      switch ( v5 )
      {
        case 194:
          if ( !(_DWORD)a3 )
          {
            if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
              return (unsigned int)VslProvisionDumpEncryption();
            return 3221225569LL;
          }
          return (unsigned int)-1073741811;
        case 161:
          if ( PreviousMode )
            return 3221225506LL;
          if ( (_DWORD)a3 == 8 )
            return (unsigned int)KdInitialize(3LL, a2, &KdpContext, 1LL);
          return 3221225476LL;
        case 164:
          return (unsigned int)SeCodeIntegritySetInformation((unsigned int)v5, a2, (unsigned int)a3, 1LL);
      }
      if ( v5 != 168 )
      {
        switch ( v5 )
        {
          case 170:
            if ( (_DWORD)a3 == 16 )
            {
              if ( SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, PreviousMode) )
                return (unsigned int)KeIntSteerAssignCpuSetForGsiv(
                                       *(_OWORD *)v4,
                                       WORD2(*(_QWORD *)v4),
                                       *(_QWORD *)(v4 + 8));
              return 3221225569LL;
            }
            return 3221225476LL;
          case 176:
            if ( (unsigned int)a3 < 8 )
              return 3221225476LL;
            v87 = a3 - 8;
            if ( (((_BYTE)a3 - 8) & 7) != 0 || v87 > 0xA0 )
              return 3221225476LL;
            v88 = *(_QWORD *)a2;
            v115 = *(_QWORD *)a2;
            memmove(v121, (const void *)(a2 + 8), v87);
            updated = ExCpuSetResourceManagerAccessCheck(PreviousMode);
            if ( (updated & 0x80000000) == 0 )
              return (unsigned int)KeSetTagCpuSets(v87 >> 3, v121, v88);
            return updated;
          case 177:
            if ( (_DWORD)a3 == 8 )
            {
              if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                return 3221225569LL;
              v114 = *(HANDLE *)v4;
              v106 = 0LL;
              updated = ObReferenceObjectByHandle(v114, 0x1000u, (POBJECT_TYPE)PsProcessType, PreviousMode, &v106, 0LL);
              if ( (updated & 0x80000000) == 0 )
              {
                v85 = (struct _DMA_ADAPTER *)v106;
                SessionId = MmGetSessionIdEx((__int64)v106);
                if ( SessionId != -1 )
                  updated = PsInvokeWin32Callout(32, (__int64)v85, 1, (__int64)&SessionId);
                v43 = v85;
                goto LABEL_199;
              }
            }
            else
            {
              if ( (_DWORD)a3 )
                return 3221225476LL;
              updated = 0;
              CurrentProcess = PsGetCurrentProcess();
              SessionId = MmGetSessionIdEx((__int64)CurrentProcess);
              if ( SessionId != -1 )
                return (unsigned int)PsInvokeWin32Callout(32, (__int64)CurrentProcess, 1, (__int64)&SessionId);
            }
            return updated;
          case 187:
            if ( (_DWORD)a3 != 24 )
              return 3221225476LL;
            v118 = *(_OWORD *)a2;
            *(_QWORD *)&v119 = *(_QWORD *)(a2 + 16);
            result = VfProbeAndCaptureUnicodeStringBuffer(&v118, 1LL, a3, 1LL);
            if ( (int)result < 0 )
              return result;
            updated = PsSetExeModerationState((__int64)&v118, v119, DWORD1(v119));
            v26 = (char *)&v118;
            goto LABEL_101;
        }
        v84 = (unsigned int)(v5 - 190);
        if ( v5 != 190 )
        {
          if ( v5 != 191 )
            return (unsigned int)-1073741821;
          if ( !(_DWORD)a3 )
          {
            if ( !PreviousMode || SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
              return (unsigned int)VslRelaxQuotas(v84, a2, a3, v8);
            return 3221225569LL;
          }
          return (unsigned int)-1073741811;
        }
        return (unsigned int)SeCodeIntegritySetInformation((unsigned int)v5, a2, (unsigned int)a3, 1LL);
      }
      if ( (a3 & 7) != 0 || (unsigned int)a3 > 0xA0 )
        return 3221225476LL;
      memmove(v122, (const void *)a2, (unsigned int)a3);
      result = ExCpuSetResourceManagerAccessCheck(PreviousMode);
      if ( (int)result < 0 )
        return result;
      v89 = (unsigned int)v3 >> 3;
      v90 = 0;
      v91 = v122;
    }
    return (unsigned int)KeSetSystemAllowedCpuSets(v89, v91, v90);
  }
  if ( v5 == 97 )
  {
    if ( (_DWORD)a3 != 40 )
      return 3221225476LL;
    if ( PreviousMode )
    {
      if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
        return 3221225569LL;
      v118 = *(_OWORD *)v4;
      v119 = *(_OWORD *)(v4 + 16);
      *(_QWORD *)&v120 = *(_QWORD *)(v4 + 32);
      result = VfProbeAndCaptureUnicodeStringBuffer((char *)&v118 + 8, 1LL, v56, v57);
      if ( (int)result < 0 )
        return result;
      updated = VfProbeAndCaptureUnicodeStringBuffer((char *)&v119 + 8, 1LL, v58, v59);
      if ( (updated & 0x80000000) != 0 )
      {
        v26 = (char *)&v118 + 8;
        goto LABEL_101;
      }
      v4 = (unsigned __int64)&v118;
    }
    updated = VfFaultsSetParameters(v4, a2, a3, v8);
    if ( !PreviousMode )
      return updated;
    VfFreeCapturedUnicodeString(v4 + 8);
    v26 = (char *)(v4 + 24);
    goto LABEL_101;
  }
  if ( v5 > 56 )
  {
    if ( v5 <= 82 )
    {
      if ( v5 != 82 )
      {
        if ( v5 == 59 )
        {
          if ( (_DWORD)a3 == 4 )
          {
            v39 = *(unsigned int *)a2;
            updated = ExpUpdateComPlusPackage(v39, a2, a3, 1LL);
            if ( (updated & 0x80000000) == 0 )
              MEMORY[0xFFFFF780000002E0] = v39;
            return updated;
          }
          return 3221225476LL;
        }
        if ( v5 != 69 )
        {
          if ( v5 == 71 )
            return 3221225659LL;
          if ( v5 != 72 )
          {
            if ( v5 != 74 )
            {
              switch ( v5 )
              {
                case 'K':
                  LOBYTE(a3) = PreviousMode;
                  return (unsigned int)ExpRegisterFirmwareTableInformationHandler(a2, (unsigned int)v3, a3, 1LL);
                case 'O':
                  return (unsigned int)PfSetSuperfetchInformation(0LL, (__int128 *)a2, a3, PreviousMode);
                case 'P':
                  LOBYTE(a3) = PreviousMode;
                  return (unsigned int)MmIssueMemoryListCommand(a2, (unsigned int)v3, a3, 1LL);
                case 'Q':
                  goto LABEL_154;
              }
              return (unsigned int)-1073741821;
            }
            return 3221225474LL;
          }
          if ( PreviousMode || !a2 || (_DWORD)a3 != 8 )
            return 3221225485LL;
          if ( *(_DWORD *)a2 )
          {
            switch ( *(_DWORD *)a2 )
            {
              case 1:
                ((void (__fastcall *)(_QWORD, unsigned __int64, __int64, __int64))off_140C008C0[0])(
                  (unsigned int)(*(_DWORD *)a2 - 1),
                  a2,
                  a3,
                  1LL);
                return 0;
              case 2:
                ((void (__fastcall *)(_QWORD, unsigned __int64, __int64, __int64))off_140C008C8[0])(
                  (unsigned int)(*(_DWORD *)a2 - 2),
                  a2,
                  a3,
                  1LL);
                return 0;
              case 3:
                ((void (__fastcall *)(_QWORD, unsigned __int64, __int64, __int64))off_140C008B8[0])(
                  (unsigned int)(*(_DWORD *)a2 - 3),
                  a2,
                  a3,
                  1LL);
                return 0;
            }
            if ( *(_DWORD *)a2 != 4 )
            {
              v38 = (unsigned int)(*(_DWORD *)a2 - 6);
              if ( *(_DWORD *)a2 == 6 )
              {
                LODWORD(v38) = 1;
                return ((unsigned int (__fastcall *)(__int64, unsigned __int64, __int64, __int64))off_140C008D8[0])(
                         v38,
                         a2,
                         a3,
                         1LL);
              }
              if ( *(_DWORD *)a2 == 7 )
              {
                updated = 0;
                if ( off_140C008D8[0] == xKdEnumerateDebuggingDevices )
                  return (unsigned int)-1073741822;
                return updated;
              }
              return (unsigned int)-1073741811;
            }
          }
        }
        return (unsigned int)-1073741637;
      }
      if ( (unsigned int)a3 < 0x18 )
        return 3221225476LL;
      if ( !SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, PreviousMode) )
        return 3221225569LL;
      if ( PreviousMode )
      {
        v118 = *(_OWORD *)v4;
        *(_QWORD *)&v119 = *(_QWORD *)(v4 + 16);
        v4 = (unsigned __int64)&v118;
      }
      if ( (unsigned int)(*(_DWORD *)(v4 + 16) - 1) > 0x1E )
        return 3221225485LL;
      v116 = *(_OWORD *)v4;
      updated = PsLookupProcessThreadByCid(&v116, 0LL, &DmaAdapter);
      if ( (updated & 0x80000000) == 0 )
      {
        v42 = DmaAdapter;
        if ( *((_BYTE *)&DmaAdapter->Size + 2) )
        {
          updated = -1073741749;
        }
        else
        {
          KeSetActualBasePriorityThread((__int64)DmaAdapter, *(unsigned int *)(v4 + 16), v40, v41);
          updated = 259;
        }
        v43 = v42;
LABEL_199:
        HalPutDmaAdapter(v43);
        return updated;
      }
      return updated;
    }
    v44 = v5 - 86;
    if ( !v44 )
      return (unsigned int)ObSetRefTraceInformation(a2, (unsigned int)a3, a3, 1LL);
    v45 = v44 - 1;
    if ( !v45 )
    {
      if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
      {
        if ( (_DWORD)v3 == 8 )
        {
          v55 = *(_QWORD *)v4;
          MmSpecialPoolTag = *(_QWORD *)v4;
          MmSpecialPoolCatchOverruns = BYTE4(v55) & 1;
          return updated;
        }
        return (unsigned int)-1073741820;
      }
      return (unsigned int)-1073741790;
    }
    v46 = v45 - 2;
    if ( !v46 )
    {
      if ( PreviousMode == 1 )
      {
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, 1) )
          return (unsigned int)-1073741727;
        v53 = PsGetCurrentProcess()[1].AffinityPadding[10];
        if ( !v53 )
          return (unsigned int)DbgkRegisterErrorPort((void *)v4, (unsigned int)v3);
        v54 = *(_WORD *)(v53 + 8);
        if ( v54 != 332 && v54 != 452 )
          return (unsigned int)DbgkRegisterErrorPort((void *)v4, (unsigned int)v3);
      }
      return (unsigned int)-1073741637;
    }
    v47 = v46 - 2;
    if ( !v47 )
    {
      LOBYTE(v8) = PreviousMode;
      return (unsigned int)HvlSetEnlightenmentInfo(a1, a2, (unsigned int)a3, v8);
    }
    v48 = v47 - 1;
    if ( !v48 )
    {
      if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
        return 3221225506LL;
      if ( (_DWORD)v3 == 40 )
        return (unsigned int)VfSetVerifierInformationEx(v4);
      return 3221225476LL;
    }
    v49 = v48 - 1;
    if ( v49 )
    {
      v50 = v49 - 1;
      if ( v50 )
      {
        if ( v50 == 1 )
        {
          if ( !PreviousMode || !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
            return 3221225506LL;
          if ( (unsigned int)v3 >= 0x18 )
            return (unsigned int)ExpCovResetInformation(v4, (unsigned int)v3);
          return 3221225476LL;
        }
        return (unsigned int)-1073741821;
      }
      if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
      {
        if ( (_DWORD)v3 == 8 )
        {
          *(_QWORD *)&v118 = *(_QWORD *)v4;
          _InterlockedOr((volatile signed __int32 *)0xFFFFF780000003A0LL, v118);
          _InterlockedAnd((volatile signed __int32 *)0xFFFFF780000003A0LL, ~DWORD1(v118));
          return updated;
        }
        return (unsigned int)-1073741820;
      }
      return (unsigned int)-1073741790;
    }
    v51 = 172;
    if ( (_DWORD)a3 != 172 )
      return 3221225476LL;
    if ( PreviousMode
      && !(unsigned __int8)ExpCapabilityCheck(&TimeZoneCapability)
      && !SeSinglePrivilegeCheck(SeTimeZonePrivilege, PreviousMode) )
    {
      return 3221225569LL;
    }
    v52 = *((_BYTE *)PsGetCurrentServerSiloGlobals() + 1049) == 0;
    goto LABEL_220;
  }
  if ( v5 == 56 )
    return (unsigned int)PfSnSetPrefetcherInformation(a1, (__int128 *)a2, a3, PreviousMode);
  if ( v5 <= 37 )
  {
    if ( v5 == 37 )
    {
      if ( (_DWORD)a3 == 16 )
      {
        if ( !PreviousMode || SeSinglePrivilegeCheck(SeIncreaseQuotaPrivilege, PreviousMode) )
          return (unsigned int)CmSetRegistryQuotaInformation(v4, a2, a3, v8);
        return 3221225569LL;
      }
      return 3221225476LL;
    }
    if ( v5 != 9 )
    {
      if ( v5 != 21 )
      {
        if ( v5 == 24 )
        {
          if ( (_DWORD)a3 == 20 )
          {
            if ( !PreviousMode || SeSinglePrivilegeCheck(SeLoadDriverPrivilege, PreviousMode) )
            {
              v118 = *(_OWORD *)v4;
              LODWORD(v119) = *(_DWORD *)(v4 + 16);
              KiMinimumDpcRate = DWORD2(v118);
              KiMaximumDpcQueueDepth = DWORD1(v118);
              KiAdjustDpcThreshold = HIDWORD(v118);
              KiIdealDpcRate = v119;
              KeSynchronizeWithDynamicProcessors((unsigned int)v119, a2, a3);
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
            return 3221225569LL;
          }
          return 3221225476LL;
        }
        if ( v5 != 26 )
        {
          if ( v5 != 27 )
          {
            if ( v5 != 28 )
            {
              switch ( v5 )
              {
                case 30:
                  return (unsigned int)MmCreateMirror();
                case 31:
                  return (unsigned int)EtwSetPerformanceTraceInformation(
                                         (volatile void *)a2,
                                         (unsigned int)a3,
                                         PreviousMode);
                case 34:
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
                      v108 = *(_DWORD *)v4;
                    }
                    else
                    {
                      v14 = *(_DWORD *)v4;
                    }
                    if ( !v14 )
                    {
                      v12 = 0LL;
                      return (unsigned int)IoConfigureCrashDump(v12, 0);
                    }
                    v15 = v14 - 1;
                    if ( !v15 )
                    {
LABEL_28:
                      v12 = 1LL;
                      return (unsigned int)IoConfigureCrashDump(v12, 0);
                    }
                    if ( v15 == 1 )
                      return (unsigned int)WheaCrashDumpInitializationComplete();
                    return 3221225485LL;
                  }
                  return 3221225569LL;
              }
              return (unsigned int)-1073741821;
            }
            if ( (((_DWORD)a3 - 8) & 0xFFFFFFF7) == 0 )
            {
              if ( PreviousMode && !SeSinglePrivilegeCheck(SeSystemtimePrivilege, PreviousMode) )
                return 3221225569LL;
              if ( !PsIsCurrentThreadInServerSilo() )
              {
                if ( (_DWORD)v3 == 16 )
                {
                  v16 = *(_BYTE *)(v4 + 8);
                  v94 = v16;
                  v99 = *(_QWORD *)v4;
                }
                else
                {
                  v16 = *(_BYTE *)(v4 + 4);
                  v94 = v16;
                  v17 = *(unsigned int *)v4;
                  v99 = v17;
                  if ( v17 )
                    v99 = MEMORY[0xFFFFF78000000300] * (unsigned __int64)(unsigned int)KeMaximumIncrement / v17;
                }
                if ( v16 )
                  v99 = MEMORY[0xFFFFF78000000300];
                ExAcquireTimeRefreshLock(1u);
                updated = ExpUpdateTimerConfiguration(0LL, (__int64)&v99, (__int64)&v94);
                ExReleaseTimeRefreshLock();
                return updated;
              }
              return 3221225506LL;
            }
            return 3221225476LL;
          }
          if ( (_DWORD)a3 != 8 )
            return 3221225476LL;
          if ( PreviousMode )
            return 3221225569LL;
          MmUnloadSystemImage(*(_QWORD *)a2);
          return 0;
        }
LABEL_132:
        if ( (_DWORD)a3 == 56 )
        {
          if ( !PreviousMode )
          {
            *(_OWORD *)Buf1 = *(_OWORD *)a2;
            SystemImage = MmLoadSystemImage((unsigned int)Buf1, 0, 0, v8, (__int64)&BugCheckParameter2, (__int64)&v97);
            updated = SystemImage;
            if ( SystemImage < 0 )
            {
              if ( SystemImage == -1073741411 )
                return (unsigned int)-1073741554;
            }
            else
            {
              LOBYTE(v33) = 1;
              v34 = RtlImageDirectoryEntryToData(v97, v33, 0, (int)&v110);
              v35 = RtlImageNtHeader(v97);
              *(_QWORD *)(v4 + 40) = v34;
              v36 = v97 + *(unsigned int *)(v35 + 40);
              *(_QWORD *)(v4 + 16) = v97;
              *(_QWORD *)(v4 + 24) = BugCheckParameter2;
              *(_QWORD *)(v4 + 32) = v36;
              *(_DWORD *)(v4 + 48) = *(_DWORD *)(v35 + 80);
            }
            return updated;
          }
          return 3221225569LL;
        }
        return 3221225476LL;
      }
LABEL_154:
      v95[0] = 0;
      if ( (unsigned int)a3 >= 0x40 )
      {
        if ( v5 == 21 )
        {
          v37 = 0;
        }
        else
        {
          v111 = *(_DWORD *)(a2 + 60);
          v37 = v111;
          if ( (v111 & 0xFFFFFFF0) != 0 || (v111 & 0xC) == 0xC || (v111 & 3) == 3 )
            return 3221225712LL;
        }
        if ( SeSinglePrivilegeCheck(SeIncreaseQuotaPrivilege, PreviousMode) )
          return MmAdjustWorkingSetSizeEx(*(_QWORD *)(v4 + 24), *(_QWORD *)(v4 + 32), 2, 1, v37, v95);
        return 3221225506LL;
      }
      return 3221225476LL;
    }
    if ( (_DWORD)a3 == 4 )
    {
      if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
      {
        NtGlobalFlag = *(_DWORD *)v4 ^ (NtGlobalFlag ^ *(_DWORD *)v4) & 0x6DCE640F;
        *(_DWORD *)v4 = NtGlobalFlag;
        return updated;
      }
      return (unsigned int)-1073741790;
    }
    return (unsigned int)-1073741820;
  }
  if ( v5 > 47 )
  {
    v29 = v5 - 48;
    if ( v29 )
    {
      v30 = v29 - 3;
      if ( !v30 )
      {
        if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
          return (unsigned int)VfSetVerifierInformation(v4, (unsigned int)v3, 0LL);
        return 3221225506LL;
      }
      v31 = v30 - 1;
      if ( !v31 )
      {
        if ( !PreviousMode )
          return (unsigned int)MmAddVerifierThunks((PVOID)a2, a3);
        return 3221225569LL;
      }
      if ( v31 == 2 )
      {
        LODWORD(v8) = 0;
        goto LABEL_132;
      }
      return (unsigned int)-1073741821;
    }
    return 3221225474LL;
  }
  if ( v5 == 47 )
    return 3221225474LL;
  if ( v5 != 38 )
  {
    if ( v5 != 39 )
    {
      if ( v5 > 41 )
      {
        if ( v5 == 46 )
        {
          if ( (_DWORD)a3 != 8 )
            return 3221225476LL;
          if ( PreviousMode && !SeSinglePrivilegeCheck(SeSystemtimePrivilege, PreviousMode) )
            return 3221225569LL;
          if ( PsIsCurrentThreadInServerSilo() )
            return 3221225506LL;
          v113 = *(HANDLE *)v4;
          if ( v113 )
          {
            Object = 0LL;
            updated = ObReferenceObjectByHandle(v113, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
            v22 = Object;
            if ( (updated & 0x80000000) != 0 )
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
        return (unsigned int)-1073741821;
      }
      if ( (_DWORD)a3 != 16 )
        return 3221225476LL;
      if ( PreviousMode )
      {
        if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
          return 3221225569LL;
        result = VfProbeAndCaptureUnicodeString(Buf1, v4, 1LL);
        if ( (int)result < 0 )
          return result;
        v4 = (unsigned __int64)Buf1;
        if ( !LOWORD(Buf1[0]) )
          return 3221225711LL;
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
        v25 = VfRemoveVerifierEntry(v4, a2, a3, v8);
      }
      else
      {
        v25 = VfAddVerifierEntry((PCUNICODE_STRING)v4);
      }
      updated = v25;
      goto LABEL_99;
    }
    if ( (_DWORD)a3 != 4 )
      return 3221225476LL;
    if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
      return 3221225569LL;
    v109 = *(_DWORD *)v4;
    LOBYTE(v27) = 1;
    PsChangeQuantumTable(v27);
    return 0;
  }
  if ( (_DWORD)a3 != 16 )
    return 3221225476LL;
  if ( PreviousMode )
  {
    if ( (PsGetCurrentProcess()[1].IdealProcessorPadding[10] & 0x100) == 0
      || !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, 1) )
    {
      return 3221225569LL;
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
        return ZwSetSystemInformation(38LL, (__int64)Buf1);
      }
      else
      {
        return 3221225569LL;
      }
    }
    else
    {
      return 3221225569LL;
    }
  }
  else
  {
    *(_OWORD *)Buf1 = *(_OWORD *)a2;
    if ( !memcmp(
            (const void *)_mm_srli_si128(*(__m128i *)Buf1, 8).m128i_i64[0],
            L"\\SystemRoot\\System32\\win32k.sys",
            0x3EuLL) )
      v7 = -2147483643;
    result = MmLoadSystemImageEx((unsigned int)Buf1, 0, 0, v7, (__int64)&BugCheckParameter2, (__int64)&v97);
    if ( (int)result >= 0 )
    {
      v28 = RtlImageNtHeader(v97);
      if ( !v28 )
      {
        MmUnloadSystemImage(BugCheckParameter2);
        return 3221225595LL;
      }
      updated = ExpInitializeSessionDriver(v97 + *(unsigned int *)(v28 + 40));
      if ( (updated & 0x80000000) != 0 )
        MmUnloadSystemImage(BugCheckParameter2);
      return updated;
    }
    if ( (_DWORD)result == -1073741411 )
      return 3221225742LL;
  }
  return result;
}
