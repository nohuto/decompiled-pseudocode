/*
 * XREFs of NtSetSystemInformation @ 0x1405CF400
 * Callers:
 *     WmipRegisterFirmwareProviders @ 0x140A6F6C4 (WmipRegisterFirmwareProviders.c)
 * Callees:
 *     ExCpuSetResourceManagerAccessCheck @ 0x140202268 (ExCpuSetResourceManagerAccessCheck.c)
 *     KeSetSystemAllowedCpuSets @ 0x14020233C (KeSetSystemAllowedCpuSets.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14025ED10 (PsIsCurrentThreadInServerSilo.c)
 *     KeEnterCriticalRegion @ 0x14025ED60 (KeEnterCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     KeSetActualBasePriorityThread @ 0x14026C9E0 (KeSetActualBasePriorityThread.c)
 *     RtlImageNtHeader @ 0x14027DAE0 (RtlImageNtHeader.c)
 *     PsGetCurrentProcess @ 0x140293500 (PsGetCurrentProcess.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14030E744 (MmAdjustWorkingSetSizeEx.c)
 *     KeQueryActiveProcessorCountEx @ 0x140328380 (KeQueryActiveProcessorCountEx.c)
 *     ExpUpdateTimerConfiguration @ 0x140337EB8 (ExpUpdateTimerConfiguration.c)
 *     RtlImageDirectoryEntryToData @ 0x14033AA90 (RtlImageDirectoryEntryToData.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     IoConfigureCrashDump @ 0x1403BBE10 (IoConfigureCrashDump.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memcmp @ 0x1403CE5A0 (memcmp.c)
 *     ZwLoadDriver @ 0x1403F43D0 (ZwLoadDriver.c)
 *     ZwSetSystemInformation @ 0x1403F5870 (ZwSetSystemInformation.c)
 *     ZwUnloadDriver @ 0x1403F5BF0 (ZwUnloadDriver.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     VslProvisionDumpEncryption @ 0x1404F75D4 (VslProvisionDumpEncryption.c)
 *     KdUpdateTimeSlipEvent @ 0x14050B78C (KdUpdateTimeSlipEvent.c)
 *     KeProcessorProfileControlArea @ 0x14050E80C (KeProcessorProfileControlArea.c)
 *     KeSetTagCpuSets @ 0x1405174AC (KeSetTagCpuSets.c)
 *     KeIntSteerAssignCpuSetForGsiv @ 0x14051CB1C (KeIntSteerAssignCpuSetForGsiv.c)
 *     PsSetCpuQuotaInformation @ 0x14057B588 (PsSetCpuQuotaInformation.c)
 *     PsSetExeModerationState @ 0x14057B9BC (PsSetExeModerationState.c)
 *     ExpSetSoftRebootFlags @ 0x1405AC528 (ExpSetSoftRebootFlags.c)
 *     PsLookupProcessThreadByCid @ 0x1405CEE90 (PsLookupProcessThreadByCid.c)
 *     SmSetStoreInformation @ 0x1405CF0A4 (SmSetStoreInformation.c)
 *     ExReleaseTimeRefreshLock @ 0x1405D0D34 (ExReleaseTimeRefreshLock.c)
 *     ExAcquireTimeRefreshLock @ 0x1405D0D58 (ExAcquireTimeRefreshLock.c)
 *     PfSetSuperfetchInformation @ 0x1405D0D98 (PfSetSuperfetchInformation.c)
 *     PfSnSetPrefetcherInformation @ 0x1405D13B0 (PfSnSetPrefetcherInformation.c)
 *     SeSinglePrivilegeCheck @ 0x1405E3050 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     PsInvokeWin32Callout @ 0x140637B10 (PsInvokeWin32Callout.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x1406D61F8 (KeSynchronizeWithDynamicProcessors.c)
 *     ExHandleSPCall2 @ 0x140705074 (ExHandleSPCall2.c)
 *     MmCombineIdenticalPages @ 0x140712880 (MmCombineIdenticalPages.c)
 *     MmLoadSystemImage @ 0x140744480 (MmLoadSystemImage.c)
 *     MmLoadSystemImageEx @ 0x1407444BC (MmLoadSystemImageEx.c)
 *     MmUnloadSystemImage @ 0x14075D670 (MmUnloadSystemImage.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 *     PsChangeQuantumTable @ 0x140777FC8 (PsChangeQuantumTable.c)
 *     MmIssueMemoryListCommand @ 0x140778734 (MmIssueMemoryListCommand.c)
 *     ExpInitializeSessionDriver @ 0x1407799DC (ExpInitializeSessionDriver.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x1407B5968 (ExpRegisterFirmwareTableInformationHandler.c)
 *     KeInitializeEntropySystem @ 0x1407BC4C4 (KeInitializeEntropySystem.c)
 *     WheaCrashDumpInitializationComplete @ 0x1407BE610 (WheaCrashDumpInitializationComplete.c)
 *     ExSystemExceptionFilter @ 0x1407BEDE0 (ExSystemExceptionFilter.c)
 *     CmUpdateFeatureConfiguration @ 0x14086699C (CmUpdateFeatureConfiguration.c)
 *     CmUpdateFeatureUsageSubscription @ 0x140866B2C (CmUpdateFeatureUsageSubscription.c)
 *     CmSetRegistryQuotaInformation @ 0x140866CAC (CmSetRegistryQuotaInformation.c)
 *     CmReconcileAndValidateAllHives @ 0x14086D740 (CmReconcileAndValidateAllHives.c)
 *     DbgkRegisterErrorPort @ 0x140882634 (DbgkRegisterErrorPort.c)
 *     HvlSetEnlightenmentInfo @ 0x14088A1A0 (HvlSetEnlightenmentInfo.c)
 *     VslRelaxQuotas @ 0x14088BD3C (VslRelaxQuotas.c)
 *     MmAddVerifierThunks @ 0x1408C1C60 (MmAddVerifierThunks.c)
 *     MmCreateMirror @ 0x1408C29C0 (MmCreateMirror.c)
 *     MmScrubMemory @ 0x1408D77CC (MmScrubMemory.c)
 *     ObSetRefTraceInformation @ 0x1408D995C (ObSetRefTraceInformation.c)
 *     SeCodeIntegritySetInformation @ 0x1409177D8 (SeCodeIntegritySetInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x140933CC0 (EtwSetPerformanceTraceInformation.c)
 *     ExpQueryElamCertInfo @ 0x1409460A8 (ExpQueryElamCertInfo.c)
 *     ExpSetProcessorMicrocodeUpdateInformation @ 0x140946AE4 (ExpSetProcessorMicrocodeUpdateInformation.c)
 *     ExpSetTimeZoneInformation @ 0x140946B4C (ExpSetTimeZoneInformation.c)
 *     ExpUpdateComPlusPackage @ 0x140946EE8 (ExpUpdateComPlusPackage.c)
 *     ExSetLeapSecondEnabled @ 0x140946F94 (ExSetLeapSecondEnabled.c)
 *     ExpCapabilityCheck @ 0x14094AC04 (ExpCapabilityCheck.c)
 *     ExpCovResetInformation @ 0x140953354 (ExpCovResetInformation.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 *     VfFreeCapturedUnicodeString @ 0x1409C2F9C (VfFreeCapturedUnicodeString.c)
 *     VfProbeAndCaptureUnicodeString @ 0x1409C3164 (VfProbeAndCaptureUnicodeString.c)
 *     VfProbeAndCaptureUnicodeStringBuffer @ 0x1409C319C (VfProbeAndCaptureUnicodeStringBuffer.c)
 *     VfFaultsSetParameters @ 0x1409D9958 (VfFaultsSetParameters.c)
 *     VfAddVerifierEntry @ 0x1409E9958 (VfAddVerifierEntry.c)
 *     VfRemoveVerifierEntry @ 0x1409E9B44 (VfRemoveVerifierEntry.c)
 *     VfSetVerifierInformation @ 0x1409E9B6C (VfSetVerifierInformation.c)
 *     VfSetVerifierInformationEx @ 0x1409E9C74 (VfSetVerifierInformationEx.c)
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
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  int v16; // ecx
  int v17; // ecx
  __int64 v18; // rcx
  char v19; // cl
  unsigned __int64 v20; // r9
  ULONG ActiveProcessorCount; // eax
  __int64 *v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rcx
  PVOID v25; // rcx
  __int64 result; // rax
  int v27; // r14d
  unsigned int v28; // eax
  __int128 *v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rax
  int v32; // r14d
  int v33; // r14d
  int v34; // r14d
  int SystemImage; // eax
  int v36; // edx
  __int64 v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rdx
  int v40; // ebx
  __int64 v41; // rcx
  __int64 v42; // rsi
  __int64 v43; // r8
  _DWORD *v44; // r9
  PADAPTER_OBJECT v45; // r14
  struct _DMA_ADAPTER *v46; // rcx
  int v47; // r14d
  int v48; // r14d
  int v49; // r14d
  int v50; // r14d
  int v51; // r14d
  int v52; // r14d
  int v53; // r14d
  unsigned int v54; // ebx
  unsigned __int64 v55; // rcx
  __int16 v56; // ax
  __int64 v57; // rax
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // r8
  __int64 v61; // r9
  int v62; // r14d
  int v63; // r14d
  int v64; // r14d
  int v65; // r14d
  int v66; // r14d
  int v67; // r14d
  int v68; // r14d
  int v69; // r14d
  __int64 v70; // rcx
  int v71; // r14d
  int v72; // r14d
  int v73; // r14d
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
  unsigned int v89; // r15d
  __int64 v90; // r14
  unsigned int v91; // r15d
  int v92; // r8d
  char *v93; // rdx
  unsigned int v94; // r15d
  unsigned __int64 v95; // r14
  bool v96; // [rsp+30h] [rbp-358h] BYREF
  char v97[3]; // [rsp+31h] [rbp-357h] BYREF
  int SessionId; // [rsp+34h] [rbp-354h] BYREF
  __int64 v99; // [rsp+40h] [rbp-348h] BYREF
  void *Buf1[2]; // [rsp+48h] [rbp-340h] BYREF
  unsigned __int64 v101; // [rsp+58h] [rbp-330h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-328h] BYREF
  LUID PrivilegeValue; // [rsp+68h] [rbp-320h] BYREF
  int v104; // [rsp+70h] [rbp-318h]
  PVOID Object; // [rsp+78h] [rbp-310h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+80h] [rbp-308h] BYREF
  __int64 v107; // [rsp+88h] [rbp-300h] BYREF
  PVOID v108; // [rsp+90h] [rbp-2F8h] BYREF
  UNICODE_STRING DriverServiceName; // [rsp+98h] [rbp-2F0h] BYREF
  int v110; // [rsp+A8h] [rbp-2E0h]
  int v111; // [rsp+ACh] [rbp-2DCh]
  char v112; // [rsp+B0h] [rbp-2D8h] BYREF
  int v113; // [rsp+B4h] [rbp-2D4h]
  int v114; // [rsp+BCh] [rbp-2CCh]
  HANDLE v115; // [rsp+C0h] [rbp-2C8h]
  HANDLE v116; // [rsp+F8h] [rbp-290h]
  unsigned __int64 v117; // [rsp+100h] [rbp-288h]
  __int128 v118; // [rsp+110h] [rbp-278h] BYREF
  void *Src[2]; // [rsp+120h] [rbp-268h]
  __int128 v120; // [rsp+130h] [rbp-258h] BYREF
  __int128 v121; // [rsp+140h] [rbp-248h] BYREF
  __int128 v122; // [rsp+150h] [rbp-238h]
  char v123[160]; // [rsp+160h] [rbp-228h] BYREF
  _BYTE v124[160]; // [rsp+200h] [rbp-188h] BYREF
  _BYTE v125[160]; // [rsp+2A0h] [rbp-E8h] BYREF

  v3 = (unsigned int)a3;
  v4 = a2;
  v5 = a1;
  v6 = 0LL;
  v96 = 0;
  *(_OWORD *)Buf1 = 0LL;
  v99 = 0LL;
  v7 = 1;
  v8 = 1LL;
  PrivilegeValue = 0LL;
  v107 = 0LL;
  BugCheckParameter2 = 0LL;
  DmaAdapter = 0LL;
  v101 = 0LL;
  v120 = 0LL;
  v121 = 0LL;
  v122 = 0LL;
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
        v71 = v5 - 130;
        if ( !v71 )
        {
          if ( (((_DWORD)a3 - 16) & 0xFFFFFFE7) == 0 && (_DWORD)a3 != 40 )
          {
            if ( SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
            {
              memmove(&v120, (const void *)v4, v3);
              if ( (_DWORD)v3 == 32 )
                v6 = *((_QWORD *)&v121 + 1);
              updated = MmCombineIdenticalPages(v120, (unsigned int)v121, v6, &v107);
              SessionId = updated;
              *(_QWORD *)(v4 + 8) = v107;
              return updated;
            }
            return 3221225569LL;
          }
          return 3221225476LL;
        }
        v72 = v71 - 1;
        if ( !v72 )
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
        v73 = v72 - 1;
        if ( !v73 )
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
                ExfTryToWakePushLock(&ExpConDrvLoadLock);
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
        v74 = v73 - 2;
        if ( !v74 )
        {
          if ( (_DWORD)a3 == 32 )
            return (unsigned int)ExHandleSPCall2(a1, a2, a3, 1LL);
          return 3221225476LL;
        }
        v75 = v74 - 8;
        if ( v75 )
        {
          v76 = v75 - 8;
          if ( !v76 )
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
          v77 = v76 - 1;
          if ( !v77 )
          {
            PrivilegeValue = (LUID)19LL;
            if ( !SeSinglePrivilegeCheck((LUID)19LL, PreviousMode) )
              return 3221225569LL;
            v79 = v3 - 1;
            if ( v79 )
            {
              if ( v79 != 3 )
                return 3221225476LL;
              v7 = *(_DWORD *)v4;
              v114 = *(_DWORD *)v4;
            }
            else
            {
              v80 = *(_BYTE *)v4;
              if ( *(_BYTE *)v4 && !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                return 3221225569LL;
              if ( !v80 )
                v7 = 5;
            }
            return (unsigned int)ExpSetSoftRebootFlags(v7);
          }
          v78 = v77 - 1;
          if ( !v78 )
          {
            if ( (_DWORD)a3 == 8 )
            {
              if ( PreviousMode )
                return (unsigned int)ExpQueryElamCertInfo(*(_QWORD *)a2, a2, a3, 1LL);
              return 3221225485LL;
            }
            return 3221225476LL;
          }
          if ( v78 == 3 )
            return (unsigned int)CmReconcileAndValidateAllHives(a1, a2, a3, 1LL);
          return (unsigned int)-1073741821;
        }
        if ( (_DWORD)a3 != 48 )
          return 3221225476LL;
        if ( !SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode) )
          return 3221225569LL;
        if ( CriticalProcessExceptionData )
          return 0LL;
        v120 = *(_OWORD *)v4;
        v81 = *(__m128i *)(v4 + 16);
        v122 = *(_OWORD *)(v4 + 32);
        *(__m128i *)Src = v81;
        v121 = 0LL;
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
            *((_QWORD *)&v121 + 1) = v85;
            LOWORD(v121) = v82;
            WORD1(v121) = v82;
          }
        }
        *(_OWORD *)&CriticalProcessExceptionData = v120;
        xmmword_140C19770 = v121;
        xmmword_140C19780 = v122;
        return 0;
      }
      if ( v5 == 129 )
        return (unsigned int)KeProcessorProfileControlArea(a2, a3, PreviousMode);
      v62 = v5 - 102;
      if ( v62 )
      {
        v63 = v62 - 2;
        if ( !v63 )
        {
          LOBYTE(a3) = PreviousMode;
          return (unsigned int)ExpSetProcessorMicrocodeUpdateInformation(a2, (unsigned int)v3, a3, 1LL);
        }
        v64 = v63 - 2;
        if ( !v64 )
          return (unsigned int)-1073741821;
        v65 = v64 - 3;
        if ( !v65 )
          return (unsigned int)SmSetStoreInformation(a1, (__int128 *)a2, a3, PreviousMode);
        v66 = v65 - 1;
        if ( !v66 )
          return (unsigned int)-1073741822;
        v67 = v66 - 1;
        if ( !v67 )
        {
          if ( (_DWORD)a3 != 4 )
            return 3221225476LL;
          if ( !SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
            return 3221225506LL;
          MEMORY[0xFFFFF78000000248] = *(_DWORD *)v4;
          return 0;
        }
        v68 = v67 - 2;
        if ( !v68 )
          return (unsigned int)PsSetCpuQuotaInformation(a2, a3, PreviousMode);
        v69 = v68 - 13;
        if ( !v69 )
        {
          if ( PreviousMode )
            return 3221225569LL;
          if ( (_DWORD)a3 == 32 )
            return (unsigned int)BgkSetBootGraphicsInformation(a1, a2, a3, 1LL);
          return (unsigned int)-1073741820;
        }
        if ( v69 != 1 )
          return (unsigned int)-1073741821;
        if ( (_DWORD)a3 != 16 )
          return 3221225476LL;
        if ( !SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
          return 3221225569LL;
        v115 = *(HANDLE *)v4;
        updated = MmScrubMemory(v70, v115, &PrivilegeValue);
        SessionId = updated;
        *(LUID *)(v4 + 8) = PrivilegeValue;
        return updated;
      }
      v54 = 432;
      goto LABEL_216;
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
            v96 = (unsigned __int8)*(_QWORD *)v4 != 0;
            result = ExSetLeapSecondEnabled();
            updated = result;
            if ( (int)result >= 0 )
            {
              *(_BYTE *)ExLeapSecondData = v96;
              return updated;
            }
            return result;
          case 207:
            if ( (_DWORD)a3 == 4 )
            {
              if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
              {
                v104 = 0;
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
      v94 = a3 - 8;
      if ( (((_BYTE)a3 - 8) & 7) != 0 || v94 > 0xA0 )
        return 3221225476LL;
      v95 = *(_QWORD *)a2;
      memmove(v125, (const void *)(a2 + 8), v94);
      if ( v95 >= 2 )
        return 3221225485LL;
      updated = ExCpuSetResourceManagerAccessCheck(PreviousMode);
      if ( (updated & 0x80000000) != 0 )
        return updated;
      v91 = v94 >> 3;
      v92 = v95;
      v93 = v125;
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
            return (unsigned int)KdInitialize(3LL, a2, (char *)&KdDebuggerNotPresent + 5, 1LL);
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
            v89 = a3 - 8;
            if ( (((_BYTE)a3 - 8) & 7) != 0 || v89 > 0xA0 )
              return 3221225476LL;
            v90 = *(_QWORD *)a2;
            v117 = *(_QWORD *)a2;
            memmove(v123, (const void *)(a2 + 8), v89);
            updated = ExCpuSetResourceManagerAccessCheck(PreviousMode);
            if ( (updated & 0x80000000) == 0 )
              return (unsigned int)KeSetTagCpuSets(v89 >> 3, v123, v90);
            return updated;
          case 177:
            if ( (_DWORD)a3 == 8 )
            {
              if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                return 3221225569LL;
              v116 = *(HANDLE *)v4;
              v108 = 0LL;
              updated = ObReferenceObjectByHandle(v116, 0x1000u, (POBJECT_TYPE)PsProcessType, PreviousMode, &v108, 0LL);
              if ( (updated & 0x80000000) == 0 )
              {
                v87 = (struct _DMA_ADAPTER *)v108;
                SessionId = MmGetSessionIdEx((__int64)v108);
                if ( SessionId != -1 )
                  updated = PsInvokeWin32Callout(32LL, v87, 1LL, &SessionId);
                v46 = v87;
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
                return (unsigned int)PsInvokeWin32Callout(32LL, CurrentProcess, 1LL, &SessionId);
            }
            return updated;
          case 187:
            if ( (_DWORD)a3 != 24 )
              return 3221225476LL;
            v120 = *(_OWORD *)a2;
            *(_QWORD *)&v121 = *(_QWORD *)(a2 + 16);
            result = VfProbeAndCaptureUnicodeStringBuffer(&v120, 1LL, a3, 1LL);
            if ( (int)result < 0 )
              return result;
            updated = PsSetExeModerationState((__int64)&v120, v121, DWORD1(v121));
            v29 = &v120;
            goto LABEL_101;
        }
        v86 = (unsigned int)(v5 - 190);
        if ( v5 != 190 )
        {
          if ( v5 != 191 )
            return (unsigned int)-1073741821;
          if ( !(_DWORD)a3 )
          {
            if ( !PreviousMode || SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
              return (unsigned int)VslRelaxQuotas(v86, a2, a3, v8);
            return 3221225569LL;
          }
          return (unsigned int)-1073741811;
        }
        return (unsigned int)SeCodeIntegritySetInformation((unsigned int)v5, a2, (unsigned int)a3, 1LL);
      }
      if ( (a3 & 7) != 0 || (unsigned int)a3 > 0xA0 )
        return 3221225476LL;
      memmove(v124, (const void *)a2, (unsigned int)a3);
      result = ExCpuSetResourceManagerAccessCheck(PreviousMode);
      if ( (int)result < 0 )
        return result;
      v91 = (unsigned int)v3 >> 3;
      v92 = 0;
      v93 = v124;
    }
    return (unsigned int)KeSetSystemAllowedCpuSets(v91, v93, v92);
  }
  if ( v5 == 97 )
  {
    if ( (_DWORD)a3 != 40 )
      return 3221225476LL;
    if ( PreviousMode )
    {
      if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
        return 3221225569LL;
      v120 = *(_OWORD *)v4;
      v121 = *(_OWORD *)(v4 + 16);
      *(_QWORD *)&v122 = *(_QWORD *)(v4 + 32);
      result = VfProbeAndCaptureUnicodeStringBuffer((char *)&v120 + 8, 1LL, v58, v59);
      if ( (int)result < 0 )
        return result;
      updated = VfProbeAndCaptureUnicodeStringBuffer((char *)&v121 + 8, 1LL, v60, v61);
      if ( (updated & 0x80000000) != 0 )
      {
        v29 = (__int128 *)((char *)&v120 + 8);
        goto LABEL_101;
      }
      v4 = (unsigned __int64)&v120;
    }
    updated = VfFaultsSetParameters(v4, a2, a3, v8);
    if ( !PreviousMode )
      return updated;
    VfFreeCapturedUnicodeString(v4 + 8);
    v29 = (__int128 *)(v4 + 24);
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
            v42 = *(unsigned int *)a2;
            updated = ExpUpdateComPlusPackage(v42, a2, a3, 1LL);
            if ( (updated & 0x80000000) == 0 )
              MEMORY[0xFFFFF780000002E0] = v42;
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
                  LOBYTE(v8) = PreviousMode;
                  return (unsigned int)PfSetSuperfetchInformation(0LL, a2, (unsigned int)a3, v8);
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
              v41 = (unsigned int)(*(_DWORD *)a2 - 6);
              if ( *(_DWORD *)a2 == 6 )
              {
                LODWORD(v41) = 1;
                return ((unsigned int (__fastcall *)(__int64, unsigned __int64, __int64, __int64))off_140C008D8[0])(
                         v41,
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
        v120 = *(_OWORD *)v4;
        *(_QWORD *)&v121 = *(_QWORD *)(v4 + 16);
        v4 = (unsigned __int64)&v120;
      }
      if ( (unsigned int)(*(_DWORD *)(v4 + 16) - 1) > 0x1E )
        return 3221225485LL;
      v118 = *(_OWORD *)v4;
      updated = PsLookupProcessThreadByCid((__int64)&v118, 0LL, &DmaAdapter);
      if ( (updated & 0x80000000) == 0 )
      {
        v45 = DmaAdapter;
        if ( *((_BYTE *)&DmaAdapter->Size + 2) )
        {
          updated = -1073741749;
        }
        else
        {
          KeSetActualBasePriorityThread((__int64)DmaAdapter, *(unsigned int *)(v4 + 16), v43, v44);
          updated = 259;
        }
        v46 = v45;
LABEL_199:
        HalPutDmaAdapter(v46);
        return updated;
      }
      return updated;
    }
    v47 = v5 - 86;
    if ( !v47 )
      return (unsigned int)ObSetRefTraceInformation(a2, (unsigned int)a3, a3, 1LL);
    v48 = v47 - 1;
    if ( !v48 )
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
        return (unsigned int)-1073741820;
      }
      return (unsigned int)-1073741790;
    }
    v49 = v48 - 2;
    if ( !v49 )
    {
      if ( PreviousMode == 1 )
      {
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, 1) )
          return (unsigned int)-1073741727;
        v55 = PsGetCurrentProcess()[1].AffinityPadding[10];
        if ( !v55 )
          return (unsigned int)DbgkRegisterErrorPort((void *)v4, (unsigned int)v3);
        v56 = *(_WORD *)(v55 + 8);
        if ( v56 != 332 && v56 != 452 )
          return (unsigned int)DbgkRegisterErrorPort((void *)v4, (unsigned int)v3);
      }
      return (unsigned int)-1073741637;
    }
    v50 = v49 - 2;
    if ( !v50 )
    {
      LOBYTE(v8) = PreviousMode;
      return (unsigned int)HvlSetEnlightenmentInfo(a1, a2, (unsigned int)a3, v8);
    }
    v51 = v50 - 1;
    if ( !v51 )
    {
      if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
        return 3221225506LL;
      if ( (_DWORD)v3 == 40 )
        return (unsigned int)VfSetVerifierInformationEx(v4);
      return 3221225476LL;
    }
    v52 = v51 - 1;
    if ( v52 )
    {
      v53 = v52 - 1;
      if ( v53 )
      {
        if ( v53 == 1 )
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
          *(_QWORD *)&v120 = *(_QWORD *)v4;
          _InterlockedOr((volatile signed __int32 *)0xFFFFF780000003A0LL, v120);
          _InterlockedAnd((volatile signed __int32 *)0xFFFFF780000003A0LL, ~DWORD1(v120));
          return updated;
        }
        return (unsigned int)-1073741820;
      }
      return (unsigned int)-1073741790;
    }
    v54 = 172;
LABEL_216:
    if ( (_DWORD)a3 == v54 )
    {
      if ( PreviousMode
        && !(unsigned __int8)ExpCapabilityCheck(&TimeZoneCapability)
        && !SeSinglePrivilegeCheck(SeTimeZonePrivilege, PreviousMode) )
      {
        return 3221225569LL;
      }
      if ( !PsIsCurrentThreadInServerSilo() )
        return (unsigned int)ExpSetTimeZoneInformation(v4, v54);
      return 3221225506LL;
    }
    return 3221225476LL;
  }
  if ( v5 == 56 )
  {
    LOBYTE(v8) = PreviousMode;
    return (unsigned int)PfSnSetPrefetcherInformation(a1, a2, (unsigned int)a3, v8);
  }
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
              v120 = *(_OWORD *)v4;
              LODWORD(v121) = *(_DWORD *)(v4 + 16);
              KiMinimumDpcRate = DWORD2(v120);
              KiMaximumDpcQueueDepth = DWORD1(v120);
              KiAdjustDpcThreshold = HIDWORD(v120);
              KiIdealDpcRate = v121;
              KeSynchronizeWithDynamicProcessors((unsigned int)v121, a2, a3, v8);
              ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
              if ( ActiveProcessorCount )
              {
                v22 = KiProcessorBlock;
                v23 = ActiveProcessorCount;
                do
                {
                  v24 = *v22;
                  *(_DWORD *)(v24 + 12568) = KiMaximumDpcQueueDepth;
                  *(_DWORD *)(v24 + 12576) = KiMinimumDpcRate;
                  ++v22;
                  --v23;
                }
                while ( v23 );
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
                      v16 = *(_DWORD *)v4;
                      v110 = *(_DWORD *)v4;
                    }
                    else
                    {
                      v16 = *(_DWORD *)v4;
                    }
                    if ( !v16 )
                    {
                      v14 = 0LL;
                      return (unsigned int)IoConfigureCrashDump(v14, 0LL, v12, v13);
                    }
                    v17 = v16 - 1;
                    if ( !v17 )
                    {
LABEL_28:
                      v14 = 1LL;
                      return (unsigned int)IoConfigureCrashDump(v14, 0LL, v12, v13);
                    }
                    if ( v17 == 1 )
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
                  v19 = *(_BYTE *)(v4 + 8);
                  v96 = v19;
                  v101 = *(_QWORD *)v4;
                }
                else
                {
                  v19 = *(_BYTE *)(v4 + 4);
                  v96 = v19;
                  v20 = *(unsigned int *)v4;
                  v101 = v20;
                  if ( v20 )
                    v101 = MEMORY[0xFFFFF78000000300] * (unsigned __int64)(unsigned int)KeMaximumIncrement / v20;
                }
                if ( v19 )
                  v101 = MEMORY[0xFFFFF78000000300];
                LOBYTE(v18) = 1;
                ExAcquireTimeRefreshLock(v18);
                updated = ExpUpdateTimerConfiguration(0LL, (__int64)&v101, (__int64)&v96);
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
            SystemImage = MmLoadSystemImage((unsigned int)Buf1, 0, 0, v8, (__int64)&BugCheckParameter2, (__int64)&v99);
            updated = SystemImage;
            if ( SystemImage < 0 )
            {
              if ( SystemImage == -1073741411 )
                return (unsigned int)-1073741554;
            }
            else
            {
              LOBYTE(v36) = 1;
              v37 = RtlImageDirectoryEntryToData(v99, v36, 0, (int)&v112);
              v38 = RtlImageNtHeader(v99);
              *(_QWORD *)(v4 + 40) = v37;
              v39 = v99 + *(unsigned int *)(v38 + 40);
              *(_QWORD *)(v4 + 16) = v99;
              *(_QWORD *)(v4 + 24) = BugCheckParameter2;
              *(_QWORD *)(v4 + 32) = v39;
              *(_DWORD *)(v4 + 48) = *(_DWORD *)(v38 + 80);
            }
            return updated;
          }
          return 3221225569LL;
        }
        return 3221225476LL;
      }
LABEL_154:
      v97[0] = 0;
      if ( (unsigned int)a3 >= 0x40 )
      {
        if ( v5 == 21 )
        {
          v40 = 0;
        }
        else
        {
          v113 = *(_DWORD *)(a2 + 60);
          v40 = v113;
          if ( (v113 & 0xFFFFFFF0) != 0 || (v113 & 0xC) == 0xC || (v113 & 3) == 3 )
            return 3221225712LL;
        }
        if ( SeSinglePrivilegeCheck(SeIncreaseQuotaPrivilege, PreviousMode) )
          return MmAdjustWorkingSetSizeEx(*(_QWORD *)(v4 + 24), *(_QWORD *)(v4 + 32), 2, 1, v40, v97);
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
    v32 = v5 - 48;
    if ( v32 )
    {
      v33 = v32 - 3;
      if ( !v33 )
      {
        if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
          return (unsigned int)VfSetVerifierInformation(v4, (unsigned int)v3, 0LL);
        return 3221225506LL;
      }
      v34 = v33 - 1;
      if ( !v34 )
      {
        if ( !PreviousMode )
          return (unsigned int)MmAddVerifierThunks((PVOID)a2, a3);
        return 3221225569LL;
      }
      if ( v34 == 2 )
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
          v115 = *(HANDLE *)v4;
          if ( v115 )
          {
            Object = 0LL;
            updated = ObReferenceObjectByHandle(v115, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
            v25 = Object;
            if ( (updated & 0x80000000) != 0 )
              return updated;
          }
          else
          {
            v25 = 0LL;
            updated = 0;
          }
          KdUpdateTimeSlipEvent(v25);
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
      v27 = v5 - 40;
      if ( v27 )
      {
        if ( v27 != 1 )
        {
          updated = -1073741821;
LABEL_99:
          if ( !PreviousMode )
            return updated;
          v29 = (__int128 *)v4;
LABEL_101:
          VfFreeCapturedUnicodeString(v29);
          return updated;
        }
        v28 = VfRemoveVerifierEntry(v4, a2, a3, v8);
      }
      else
      {
        v28 = VfAddVerifierEntry((PCUNICODE_STRING)v4);
      }
      updated = v28;
      goto LABEL_99;
    }
    if ( (_DWORD)a3 != 4 )
      return 3221225476LL;
    if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
      return 3221225569LL;
    v111 = *(_DWORD *)v4;
    LOBYTE(v30) = 1;
    PsChangeQuantumTable(v30);
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
    result = MmLoadSystemImageEx((unsigned int)Buf1, 0, 0, v7, (__int64)&BugCheckParameter2, (__int64)&v99);
    if ( (int)result >= 0 )
    {
      v31 = RtlImageNtHeader(v99);
      if ( !v31 )
      {
        MmUnloadSystemImage(BugCheckParameter2);
        return 3221225595LL;
      }
      updated = ExpInitializeSessionDriver(v99 + *(unsigned int *)(v31 + 40));
      if ( (updated & 0x80000000) != 0 )
        MmUnloadSystemImage(BugCheckParameter2);
      return updated;
    }
    if ( (_DWORD)result == -1073741411 )
      return 3221225742LL;
  }
  return result;
}
