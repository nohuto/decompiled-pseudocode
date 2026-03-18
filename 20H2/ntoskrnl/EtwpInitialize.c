/*
 * XREFs of EtwpInitialize @ 0x140A68D10
 * Callers:
 *     EtwInitialize @ 0x1407A9640 (EtwInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     KeGetPrcb @ 0x140219160 (KeGetPrcb.c)
 *     KeQueryPerformanceCounter @ 0x140266AF0 (KeQueryPerformanceCounter.c)
 *     KeQueryBootTimeValues @ 0x14031CB50 (KeQueryBootTimeValues.c)
 *     KeInitializeTimer2 @ 0x140356810 (KeInitializeTimer2.c)
 *     RtlGetMultiTimePrecise @ 0x140360700 (RtlGetMultiTimePrecise.c)
 *     KeInitializeMutex @ 0x140360900 (KeInitializeMutex.c)
 *     ExRegisterCallback @ 0x14037E960 (ExRegisterCallback.c)
 *     KeRegisterBugCheckReasonCallback @ 0x14039EA20 (KeRegisterBugCheckReasonCallback.c)
 *     ZwUpdateWnfStateData @ 0x1403FBB50 (ZwUpdateWnfStateData.c)
 *     KeBugCheck @ 0x1403FBC80 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     ExCreateCallback @ 0x1406DD3F0 (ExCreateCallback.c)
 *     EtwRegister @ 0x14075E4C0 (EtwRegister.c)
 *     EtwpUpdateFileInfoDriverState @ 0x14078DED0 (EtwpUpdateFileInfoDriverState.c)
 *     TlgRegisterAggregateProvider @ 0x14079A6B0 (TlgRegisterAggregateProvider.c)
 *     TlgRegisterAggregateProviderEx @ 0x14079A6CC (TlgRegisterAggregateProviderEx.c)
 *     EtwpInitializeProcessorTrace @ 0x1407A8CFC (EtwpInitializeProcessorTrace.c)
 *     EtwpInitializeProviderTraits @ 0x1407A9478 (EtwpInitializeProviderTraits.c)
 *     EtwpLoadMicroarchitecturalPmcs @ 0x1407A94B8 (EtwpLoadMicroarchitecturalPmcs.c)
 *     EtwpInitializeSiloAllowedGroupMask @ 0x1407A95F8 (EtwpInitializeSiloAllowedGroupMask.c)
 *     EtwInitializeProcessor @ 0x1407A9728 (EtwInitializeProcessor.c)
 *     EtwpInitializeCoverage @ 0x1407A9878 (EtwpInitializeCoverage.c)
 *     WdipSemInitialize @ 0x1407A98B4 (WdipSemInitialize.c)
 *     EtwInitializeSiloState @ 0x1407AB4A4 (EtwInitializeSiloState.c)
 *     EtwpInitializePrivateSessionDemuxObject @ 0x1407CF3AC (EtwpInitializePrivateSessionDemuxObject.c)
 *     EtwpInitializeLastBranchTracing @ 0x1407D01FC (EtwpInitializeLastBranchTracing.c)
 *     EtwpInitializeStackLookasideList @ 0x1407D10C8 (EtwpInitializeStackLookasideList.c)
 *     EtwpTraceSystemInitialization @ 0x140A691C4 (EtwpTraceSystemInitialization.c)
 *     EtwpInitializeCoverageSampler @ 0x140A693E4 (EtwpInitializeCoverageSampler.c)
 *     PerfDiagInitialize @ 0x140A694B8 (PerfDiagInitialize.c)
 *     EtwpReadConfigParameters @ 0x140A73E34 (EtwpReadConfigParameters.c)
 *     EtwpInitializeSecurity @ 0x140A7552C (EtwpInitializeSecurity.c)
 *     EtwpInitializeRegistration @ 0x140A756C4 (EtwpInitializeRegistration.c)
 *     EtwpInitializeRealTimeConnection @ 0x140A76390 (EtwpInitializeRealTimeConnection.c)
 */

__int64 __fastcall EtwpInitialize(int a1)
{
  unsigned int v1; // esi
  __int64 result; // rax
  int v3; // eax
  _WORD *v4; // rdi
  __int64 i; // rcx
  unsigned int j; // edi
  __int64 Prcb; // rax
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // [rsp+40h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-21h] BYREF
  __int128 v16; // [rsp+58h] [rbp-11h] BYREF
  __int64 v17; // [rsp+68h] [rbp-1h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+7h] BYREF
  int v19; // [rsp+D0h] [rbp+67h] BYREF
  int v20; // [rsp+D8h] [rbp+6Fh] BYREF
  LARGE_INTEGER v21; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v22; // [rsp+E8h] [rbp+7Fh] BYREF

  v1 = KeNumberProcessors_0;
  result = 0LL;
  v21.QuadPart = 0LL;
  v22 = 0LL;
  v17 = 0LL;
  v19 = 0;
  v16 = 0LL;
  if ( a1 )
  {
    if ( a1 == 1 )
      return EtwpUpdateFileInfoDriverState(PerfGlobalGroupMask, PerfGlobalGroupMask, 1, (_QWORD *)EtwpHostSiloState, 0);
  }
  else
  {
    KeQueryBootTimeValues(&EtwpRefTimeSystem, &v21, &v22);
    EtwpBootTime = v21.QuadPart - v22;
    RtlGetMultiTimePrecise((LARGE_INTEGER *)&v16, 3, &v19);
    EtwpRefQpcDelta = 0LL;
    if ( (v19 & 1) != 0 )
    {
      EtwpRefTimePerfCounter = v16;
      if ( (v19 & 2) != 0 )
        EtwpRefQpcDelta = *((_QWORD *)&v16 + 1) - v16;
    }
    else
    {
      EtwpRefTimePerfCounter = KeQueryPerformanceCounter(0LL).QuadPart;
    }
    EtwpRefTimeCycle = __rdtsc();
    v3 = EtwpInitializeSecurity();
    if ( v3 < 0 )
      KeBugCheckEx(0x11Du, 1uLL, v3, 0LL, 0LL);
    v4 = (_WORD *)0xFFFFF78000000380LL;
    for ( i = 9LL; i; --i )
      *v4++ = 0;
    for ( j = 0; j < v1; ++j )
    {
      Prcb = KeGetPrcb(j);
      v8 = EtwInitializeProcessor(Prcb);
      if ( v8 < 0 )
        KeBugCheckEx(0x11Du, 2uLL, v8, j, 0LL);
    }
    KeInitializeMutex(&EtwpGroupMaskMutex, 0);
    KeInitializeMutex(&EtwpCrimsonMaskMutex, 0);
    EtwpSecurityLock = 0LL;
    EtwpInitializeStackLookasideList();
    EtwpReadConfigParameters();
    EtwpInitializeRegistration();
    EtwpInitializePrivateSessionDemuxObject();
    EtwpInitializeRealTimeConnection();
    EtwCPUSpeedInMHz = *(_DWORD *)(KeGetPrcb(0) + 68);
    KeQueryPerformanceCounter(&EtwPerfFreq);
    EtwpInitializeLastBranchTracing();
    EtwpInitializeProcessorTrace(v10, v9);
    dword_140C19710 = 0;
    EtwpAdjustBuffersWorkItem.WorkerRoutine = (void (__fastcall *)(void *))EtwpAdjustTraceBuffers;
    EtwpMdlTable = 0;
    qword_140C19708 = 0LL;
    EtwpAdjustBuffersWorkItem.Parameter = &EtwpBufferAdjustmentActive;
    dword_140C19704 = 12;
    EtwpBufferAdjustmentCount = 8;
    EtwpAdjustBuffersWorkItem.List.Flink = 0LL;
    KeInitializeTimer2((__int64)&EtwpMemInfoTimer, (__int64)EtwpLogMemInfoTimerCallback, 0LL, 8LL);
    EtwpInitializeProviderTraits();
    if ( !ExRegisterCallback((PCALLBACK_OBJECT)ExCbPowerState, (PCALLBACK_FUNCTION)EtwpPowerStateCallback, 0LL) )
      goto LABEL_26;
    v14 = 0LL;
    *(&ObjectAttributes.Length + 1) = 0;
    DestinationString = 0LL;
    *(&ObjectAttributes.Attributes + 1) = 0;
    if ( (int)KsrGetFirmwareInformation(&v14) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"\\Callback\\SoftRestart");
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 80;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ExCreateCallback(&EtwpKsrCallbackObject, &ObjectAttributes, 0, 1u) >= 0 )
        ExRegisterCallback(EtwpKsrCallbackObject, (PCALLBACK_FUNCTION)EtwpKsrCallback, 0LL);
    }
    EtwpLoadMicroarchitecturalPmcs();
    EtwpInitializeSiloAllowedGroupMask();
    if ( (int)EtwInitializeSiloState(0LL) < 0 )
LABEL_26:
      KeBugCheck(0x11Du);
    EtwpBugCheckCallback.State = 0;
    KeRegisterBugCheckReasonCallback(
      &EtwpBugCheckCallback,
      (PKBUGCHECK_REASON_CALLBACK_ROUTINE)EtwpBugCheckMultiPartCallback,
      KbCallbackSecondaryMultiPartDumpData,
      (PUCHAR)&EtwpComponentName);
    EtwRegister(
      &EventTracingProvGuid,
      (PETWENABLECALLBACK)EtwpTracingProvEnableCallback,
      0LL,
      &EtwpEventTracingProvRegHandle);
    WdipSemInitialize();
    PerfDiagInitialize();
    EtwpInitializeCoverage();
    EtwpInitializeCoverageSampler();
    EtwRegister(&KernelProvGuid, (PETWENABLECALLBACK)EtwpKernelProvEnableCallback, 0LL, &EtwKernelProvRegHandle);
    TlgRegisterAggregateProvider(&dword_140C02B78);
    EtwRegister(&PsProvGuid, (PETWENABLECALLBACK)EtwpCrimsonProvEnableCallback, (PVOID)1, &EtwpPsProvRegHandle);
    TlgRegisterAggregateProviderEx(
      (ULONGLONG *)&dword_140C02BB0,
      (unsigned __int16 *)EtwpTraceLoggingProvEnableCallback,
      (unsigned __int16 *)PsProvTraceLoggingGuid);
    EtwRegister(&NetProvGuid, (PETWENABLECALLBACK)EtwpCrimsonProvEnableCallback, (PVOID)0x10000, &EtwpNetProvRegHandle);
    EtwRegister(&DiskProvGuid, (PETWENABLECALLBACK)EtwpCrimsonProvEnableCallback, (PVOID)0x100, &EtwpDiskProvRegHandle);
    EtwRegister(
      &FileProvGuid,
      (PETWENABLECALLBACK)EtwpCrimsonProvEnableCallback,
      (PVOID)0x2000000,
      &EtwpFileProvRegHandle);
    EtwRegister(&RegistryProvGuid, (PETWENABLECALLBACK)EtwpRegTraceEnableCallback, 0LL, &EtwpRegTraceHandle);
    EtwRegister(
      &MemoryProvGuid,
      (PETWENABLECALLBACK)EtwpCrimsonProvEnableCallback,
      (PVOID)0x20000001,
      &EtwpMemoryProvRegHandle);
    EtwRegister(&MS_Windows_Kernel_AppCompat_Provider, 0LL, 0LL, &EtwAppCompatProvRegHandle);
    EtwRegister(&KernelAuditApiCallsGuid, 0LL, 0LL, &EtwApiCallsProvRegHandle);
    EtwRegister(&CVEAuditProviderGuid, 0LL, 0LL, &EtwCVEAuditProvRegHandle);
    EtwRegister(&ThreatIntProviderGuid, 0LL, 0LL, &EtwThreatIntProvRegHandle);
    EtwRegister(&MS_Windows_Security_LPAC_Provider, 0LL, 0LL, &EtwLpacProvRegHandle);
    EtwRegister(&MS_Windows_Security_Adminless_Provider, 0LL, 0LL, &EtwAdminlessProvRegHandle);
    EtwRegister(&SecurityMitigationsProviderGuid, 0LL, 0LL, &EtwSecurityMitigationsRegHandle);
    EtwpInitialized = 1;
    ZwUpdateWnfStateData((__int64)&WNF_ETW_SUBSYSTEM_INITIALIZED, 0LL);
    EtwpTraceSystemInitialization(v12, v11, v13);
    v20 = 0;
    if ( ((int (__fastcall *)(__int64, __int64, int *, int *, _QWORD, _DWORD, _DWORD))off_140C00A68[0])(
           44LL,
           4LL,
           &EtwpMaxPmcCounter,
           &v20,
           0LL,
           0,
           0) < 0 )
      EtwpMaxPmcCounter = 8;
    result = (unsigned int)EtwpMaxPmcCounter;
    EtwpMaxProfilingSources = EtwpMaxPmcCounter;
  }
  return result;
}
