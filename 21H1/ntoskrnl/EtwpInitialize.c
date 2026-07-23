/*
 * XREFs of EtwpInitialize @ 0x140A46B98
 * Callers:
 *     EtwInitialize @ 0x1407867D8 (EtwInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     KeQueryPerformanceCounter @ 0x140240CA0 (KeQueryPerformanceCounter.c)
 *     KeGetPrcb @ 0x140276C20 (KeGetPrcb.c)
 *     KeInitializeTimer2 @ 0x1402C06D0 (KeInitializeTimer2.c)
 *     RtlGetMultiTimePrecise @ 0x1402DE9B0 (RtlGetMultiTimePrecise.c)
 *     KeInitializeMutex @ 0x1402DEBB0 (KeInitializeMutex.c)
 *     KeQueryBootTimeValues @ 0x14030E6B0 (KeQueryBootTimeValues.c)
 *     ExRegisterCallback @ 0x14037BFC0 (ExRegisterCallback.c)
 *     KeRegisterBugCheckReasonCallback @ 0x14039B140 (KeRegisterBugCheckReasonCallback.c)
 *     ZwUpdateWnfStateData @ 0x1403F5CF0 (ZwUpdateWnfStateData.c)
 *     KeBugCheck @ 0x1403F5E20 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     ExCreateCallback @ 0x1406E71C0 (ExCreateCallback.c)
 *     EtwRegister @ 0x14074B4C0 (EtwRegister.c)
 *     EtwpInitializeStackLookasideList @ 0x140784888 (EtwpInitializeStackLookasideList.c)
 *     EtwpInitializePrivateSessionDemuxObject @ 0x1407848C0 (EtwpInitializePrivateSessionDemuxObject.c)
 *     EtwpInitializeLastBranchTracing @ 0x140784974 (EtwpInitializeLastBranchTracing.c)
 *     EtwpInitializeProviderTraits @ 0x1407849E4 (EtwpInitializeProviderTraits.c)
 *     EtwpLoadMicroarchitecturalPmcs @ 0x140784A24 (EtwpLoadMicroarchitecturalPmcs.c)
 *     EtwpInitializeSiloAllowedGroupMask @ 0x140784B64 (EtwpInitializeSiloAllowedGroupMask.c)
 *     WdipSemInitialize @ 0x140784BAC (WdipSemInitialize.c)
 *     EtwpInitializeCoverage @ 0x14078679C (EtwpInitializeCoverage.c)
 *     EtwInitializeProcessor @ 0x1407868C0 (EtwInitializeProcessor.c)
 *     EtwpUpdateFileInfoDriverState @ 0x140786CEC (EtwpUpdateFileInfoDriverState.c)
 *     TlgRegisterAggregateProvider @ 0x14078C0A0 (TlgRegisterAggregateProvider.c)
 *     TlgRegisterAggregateProviderEx @ 0x14078C0BC (TlgRegisterAggregateProviderEx.c)
 *     EtwInitializeSiloState @ 0x14079FC30 (EtwInitializeSiloState.c)
 *     EtwpInitializeProcessorTrace @ 0x1407A6998 (EtwpInitializeProcessorTrace.c)
 *     EtwpInitializeSecurity @ 0x140A46294 (EtwpInitializeSecurity.c)
 *     EtwpReadConfigParameters @ 0x140A463D0 (EtwpReadConfigParameters.c)
 *     EtwpInitializeRegistration @ 0x140A465E8 (EtwpInitializeRegistration.c)
 *     EtwpInitializeRealTimeConnection @ 0x140A466D4 (EtwpInitializeRealTimeConnection.c)
 *     PerfDiagInitialize @ 0x140A46790 (PerfDiagInitialize.c)
 *     EtwpInitializeCoverageSampler @ 0x140A468A4 (EtwpInitializeCoverageSampler.c)
 *     EtwpTraceSystemInitialization @ 0x140A46978 (EtwpTraceSystemInitialization.c)
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
  __int64 v11; // r8
  _DWORD *v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // [rsp+40h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-21h] BYREF
  __int128 v17; // [rsp+58h] [rbp-11h] BYREF
  __int64 v18; // [rsp+68h] [rbp-1h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+7h] BYREF
  int v20; // [rsp+D0h] [rbp+67h] BYREF
  int v21; // [rsp+D8h] [rbp+6Fh] BYREF
  LARGE_INTEGER v22; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v23; // [rsp+E8h] [rbp+7Fh] BYREF

  v1 = KeNumberProcessors_0;
  result = 0LL;
  v22.QuadPart = 0LL;
  v23 = 0LL;
  v18 = 0LL;
  v20 = 0;
  v17 = 0LL;
  if ( a1 )
  {
    if ( a1 == 1 )
      return EtwpUpdateFileInfoDriverState(PerfGlobalGroupMask, PerfGlobalGroupMask, 1, (_QWORD *)EtwpHostSiloState, 0);
  }
  else
  {
    KeQueryBootTimeValues(&EtwpRefTimeSystem, &v22, &v23);
    EtwpBootTime = v22.QuadPart - v23;
    RtlGetMultiTimePrecise((LARGE_INTEGER *)&v17, 3, &v20);
    EtwpRefQpcDelta = 0LL;
    if ( (v20 & 1) != 0 )
    {
      EtwpRefTimePerfCounter = v17;
      if ( (v20 & 2) != 0 )
        EtwpRefQpcDelta = *((_QWORD *)&v17 + 1) - v17;
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
    EtwpInitializeRegistration(v10, v9, v11, v12);
    EtwpInitializePrivateSessionDemuxObject();
    EtwpInitializeRealTimeConnection();
    EtwCPUSpeedInMHz = *(_DWORD *)(KeGetPrcb(0) + 68);
    KeQueryPerformanceCounter(&EtwPerfFreq);
    EtwpInitializeLastBranchTracing();
    EtwpInitializeProcessorTrace(v14, v13);
    dword_140C19830 = 0;
    EtwpAdjustBuffersWorkItem.WorkerRoutine = (void (__fastcall *)(void *))EtwpAdjustTraceBuffers;
    EtwpMdlTable = 0;
    qword_140C19828 = 0LL;
    EtwpAdjustBuffersWorkItem.Parameter = &EtwpBufferAdjustmentActive;
    dword_140C19824 = 12;
    EtwpBufferAdjustmentCount = 8;
    EtwpAdjustBuffersWorkItem.List.Flink = 0LL;
    KeInitializeTimer2((__int64)&EtwpMemInfoTimer);
    EtwpInitializeProviderTraits();
    if ( !ExRegisterCallback((PCALLBACK_OBJECT)ExCbPowerState, (PCALLBACK_FUNCTION)EtwpPowerStateCallback, 0LL) )
      goto LABEL_26;
    v15 = 0LL;
    *(&ObjectAttributes.Length + 1) = 0;
    DestinationString = 0LL;
    *(&ObjectAttributes.Attributes + 1) = 0;
    if ( (int)KsrGetFirmwareInformation(&v15) >= 0 )
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
    TlgRegisterAggregateProvider(&dword_140C02BB0);
    EtwRegister(&PsProvGuid, (PETWENABLECALLBACK)EtwpCrimsonProvEnableCallback, (PVOID)1, &EtwpPsProvRegHandle);
    TlgRegisterAggregateProviderEx(
      (ULONGLONG *)&dword_140C02B78,
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
    ZwUpdateWnfStateData(&WNF_ETW_SUBSYSTEM_INITIALIZED, 0LL, 0, 0LL, 0LL, 0, 0);
    EtwpTraceSystemInitialization();
    v21 = 0;
    if ( ((int (__fastcall *)(__int64, __int64, int *, int *))off_140C00A68[0])(44LL, 4LL, &EtwpMaxPmcCounter, &v21) < 0 )
      EtwpMaxPmcCounter = 8;
    result = (unsigned int)EtwpMaxPmcCounter;
    EtwpMaxProfilingSources = EtwpMaxPmcCounter;
  }
  return result;
}
