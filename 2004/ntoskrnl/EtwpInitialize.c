/*
 * XREFs of EtwpInitialize @ 0x140A61950
 * Callers:
 *     EtwInitialize @ 0x14079A310 (EtwInitialize.c)
 * Callees:
 *     KeGetPrcb @ 0x14021DBD0 (KeGetPrcb.c)
 *     KeInitializeTimer2 @ 0x1402676A0 (KeInitializeTimer2.c)
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     KeQueryPerformanceCounter @ 0x1402F3FA0 (KeQueryPerformanceCounter.c)
 *     KeInitializeMutex @ 0x1402FF760 (KeInitializeMutex.c)
 *     RtlGetMultiTimePrecise @ 0x1402FF8D0 (RtlGetMultiTimePrecise.c)
 *     KeQueryBootTimeValues @ 0x14034BB90 (KeQueryBootTimeValues.c)
 *     ExRegisterCallback @ 0x14037CC30 (ExRegisterCallback.c)
 *     KeRegisterBugCheckReasonCallback @ 0x14039B8D0 (KeRegisterBugCheckReasonCallback.c)
 *     ZwUpdateWnfStateData @ 0x1403F6F80 (ZwUpdateWnfStateData.c)
 *     KeBugCheck @ 0x1403F70B0 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     ExCreateCallback @ 0x14070B0F0 (ExCreateCallback.c)
 *     EtwRegister @ 0x14074F8E0 (EtwRegister.c)
 *     EtwpUpdateFileInfoDriverState @ 0x140780938 (EtwpUpdateFileInfoDriverState.c)
 *     TlgRegisterAggregateProvider @ 0x14078DF70 (TlgRegisterAggregateProvider.c)
 *     TlgRegisterAggregateProviderEx @ 0x14078DF8C (TlgRegisterAggregateProviderEx.c)
 *     EtwpInitializeProcessorTrace @ 0x1407999CC (EtwpInitializeProcessorTrace.c)
 *     EtwpInitializeProviderTraits @ 0x14079A148 (EtwpInitializeProviderTraits.c)
 *     EtwpLoadMicroarchitecturalPmcs @ 0x14079A188 (EtwpLoadMicroarchitecturalPmcs.c)
 *     EtwpInitializeSiloAllowedGroupMask @ 0x14079A2C8 (EtwpInitializeSiloAllowedGroupMask.c)
 *     EtwInitializeProcessor @ 0x14079A3F8 (EtwInitializeProcessor.c)
 *     EtwpInitializeCoverage @ 0x14079A548 (EtwpInitializeCoverage.c)
 *     WdipSemInitialize @ 0x14079A584 (WdipSemInitialize.c)
 *     EtwInitializeSiloState @ 0x14079C174 (EtwInitializeSiloState.c)
 *     EtwpInitializePrivateSessionDemuxObject @ 0x1407C0B1C (EtwpInitializePrivateSessionDemuxObject.c)
 *     EtwpInitializeLastBranchTracing @ 0x1407C19FC (EtwpInitializeLastBranchTracing.c)
 *     EtwpInitializeStackLookasideList @ 0x1407C28C8 (EtwpInitializeStackLookasideList.c)
 *     EtwpTraceSystemInitialization @ 0x140A61E04 (EtwpTraceSystemInitialization.c)
 *     EtwpInitializeCoverageSampler @ 0x140A62024 (EtwpInitializeCoverageSampler.c)
 *     PerfDiagInitialize @ 0x140A620F8 (PerfDiagInitialize.c)
 *     EtwpReadConfigParameters @ 0x140A6D714 (EtwpReadConfigParameters.c)
 *     EtwpInitializeSecurity @ 0x140A6EE3C (EtwpInitializeSecurity.c)
 *     EtwpInitializeRegistration @ 0x140A6F1C0 (EtwpInitializeRegistration.c)
 *     EtwpInitializeRealTimeConnection @ 0x140A6FEE0 (EtwpInitializeRealTimeConnection.c)
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
  __int64 v11; // [rsp+40h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-21h] BYREF
  __int128 v13; // [rsp+58h] [rbp-11h] BYREF
  __int64 v14; // [rsp+68h] [rbp-1h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+7h] BYREF
  int v16; // [rsp+D0h] [rbp+67h] BYREF
  int v17; // [rsp+D8h] [rbp+6Fh] BYREF
  LARGE_INTEGER v18; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v19; // [rsp+E8h] [rbp+7Fh] BYREF

  v1 = KeNumberProcessors_0;
  result = 0LL;
  v18.QuadPart = 0LL;
  v19 = 0LL;
  v14 = 0LL;
  v16 = 0;
  v13 = 0LL;
  if ( a1 )
  {
    if ( a1 == 1 )
      return EtwpUpdateFileInfoDriverState(PerfGlobalGroupMask, PerfGlobalGroupMask, 1, (_QWORD *)EtwpHostSiloState, 0);
  }
  else
  {
    KeQueryBootTimeValues(&EtwpRefTimeSystem, &v18, &v19);
    EtwpBootTime = v18.QuadPart - v19;
    RtlGetMultiTimePrecise((LARGE_INTEGER *)&v13, 3, &v16);
    EtwpRefQpcDelta = 0LL;
    if ( (v16 & 1) != 0 )
    {
      EtwpRefTimePerfCounter = v13;
      if ( (v16 & 2) != 0 )
        EtwpRefQpcDelta = *((_QWORD *)&v13 + 1) - v13;
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
    dword_140C196B0 = 0;
    EtwpAdjustBuffersWorkItem.WorkerRoutine = (void (__fastcall *)(void *))EtwpAdjustTraceBuffers;
    EtwpMdlTable = 0;
    qword_140C196A8 = 0LL;
    EtwpAdjustBuffersWorkItem.Parameter = &EtwpBufferAdjustmentActive;
    dword_140C196A4 = 12;
    EtwpBufferAdjustmentCount = 8;
    EtwpAdjustBuffersWorkItem.List.Flink = 0LL;
    KeInitializeTimer2((__int64)&EtwpMemInfoTimer);
    EtwpInitializeProviderTraits();
    if ( !ExRegisterCallback((PCALLBACK_OBJECT)ExCbPowerState, (PCALLBACK_FUNCTION)EtwpPowerStateCallback, 0LL) )
      goto LABEL_26;
    v11 = 0LL;
    *(&ObjectAttributes.Length + 1) = 0;
    DestinationString = 0LL;
    *(&ObjectAttributes.Attributes + 1) = 0;
    if ( (int)KsrGetFirmwareInformation(&v11) >= 0 )
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
    v17 = 0;
    if ( ((int (__fastcall *)(__int64, __int64, int *, int *))off_140C00A68[0])(44LL, 4LL, &EtwpMaxPmcCounter, &v17) < 0 )
      EtwpMaxPmcCounter = 8;
    result = (unsigned int)EtwpMaxPmcCounter;
    EtwpMaxProfilingSources = EtwpMaxPmcCounter;
  }
  return result;
}
